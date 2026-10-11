
$ErrorActionPreference = "Stop"
Set-Location (Join-Path $PSScriptRoot "..")

git add -A
if ($LASTEXITCODE -ne 0) { exit 1 }

git diff --cached --quiet
if ($LASTEXITCODE -eq 0) { exit 0 }
if ($LASTEXITCODE -ne 1) { exit 1 }

$message = "Practice update: $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')"

git commit -m $message
if ($LASTEXITCODE -ne 0) { exit 1 }

git push origin HEAD
if ($LASTEXITCODE -ne 0) { exit 1 }
