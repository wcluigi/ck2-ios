# Launch the PC validation client, wait, screenshot, print the harness log. Leaves the game running unless -Kill.
param([int]$Seconds = 30, [string]$Shot = "$env:TEMP\ck2recomp_shot.png", [switch]$Kill,
      [string]$GameArgs = '-u test -password test -ad 127.0.0.1 -port 6910 -wnd 1')
$d = Join-Path $PSScriptRoot '..\..\CrazyKart2' | Resolve-Path
Stop-Process -Name 'CrazyKartClient_recomp.dat' -Force -ErrorAction SilentlyContinue
Remove-Item "$d\ck2recomp.log" -ErrorAction SilentlyContinue
$p = New-Object Diagnostics.ProcessStartInfo
$p.FileName = "$d\CrazyKartClient_recomp.dat"; $p.Arguments = $GameArgs; $p.WorkingDirectory = "$d"; $p.UseShellExecute = $false
$proc = [Diagnostics.Process]::Start($p)
Start-Sleep $Seconds
$proc.Refresh()
"alive=$(-not $proc.HasExited) cpu=$([math]::Round($proc.TotalProcessorTime.TotalSeconds,2))s ws=$([int]($proc.WorkingSet64/1MB))MB title='$($proc.MainWindowTitle)'"
if ($proc.HasExited) { "exit=$($proc.ExitCode)" }
Add-Type -AssemblyName System.Windows.Forms, System.Drawing
$b = [System.Windows.Forms.Screen]::PrimaryScreen.Bounds
$bmp = New-Object Drawing.Bitmap $b.Width, $b.Height
[Drawing.Graphics]::FromImage($bmp).CopyFromScreen($b.Location, [Drawing.Point]::Empty, $b.Size)
$bmp.Save($Shot)
# How much of the game window is drawn: share of sampled pixels brighter than near-black.
Add-Type -Namespace W -Name U -MemberDefinition '[DllImport("user32.dll")] public static extern bool GetWindowRect(System.IntPtr h, int[] r);'
$r = New-Object int[] 4
if (-not $proc.HasExited -and [W.U]::GetWindowRect($proc.MainWindowHandle, $r)) {
    $lit = 0; $n = 0
    for ($y = $r[1] + 40; $y -lt $r[3] - 10; $y += 12) { for ($x = $r[0] + 10; $x -lt $r[2] - 10; $x += 12) {
        if ($x -ge 0 -and $y -ge 0 -and $x -lt $b.Width -and $y -lt $b.Height) { $c = $bmp.GetPixel($x, $y); $n++; if ($c.R + $c.G + $c.B -gt 60) { $lit++ } } } }
    if ($n) { "lit=$([math]::Round(100 * $lit / $n))%" }
    # centre of the client area: the in-game message box (e.g. "Cannot connect") is dark grey there
    $cx = [int](($r[0] + $r[2]) / 2); $cy = [int](($r[1] + 30 + $r[3]) / 2); $cs = 0
    foreach ($d2 in -20, 0, 20) { $c = $bmp.GetPixel($cx + $d2, $cy); $cs += $c.R + $c.G + $c.B }
    "center=$([int]($cs / 3))"
}
Get-Content "$d\ck2recomp.log" -ErrorAction SilentlyContinue
if ($Kill) { Stop-Process -Id $proc.Id -Force -ErrorAction SilentlyContinue }
