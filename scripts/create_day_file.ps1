Param(
    [Parameter(Mandatory=$true)][int]$Day,
    [string]$Url = "",
    [string]$Title = ""
)

# Creates day{N}.cpp in the repository root with header metadata (URL + title).
# Run this from the repo root or from anywhere; it will write the file into the current working directory.

$root = (Get-Location).Path
$filename = Join-Path $root ("day{0}.cpp" -f $Day)

if (Test-Path $filename) {
    Write-Host "File already exists: $filename" -ForegroundColor Yellow
    exit 1
}

$content = @"
// Day $Day
// Title: $Title
// LeetCode: $Url

#include <bits/stdc++.h>
using namespace std;

int main() {
    // TODO: Implement solution for Day $Day
    return 0;
}
"@

Set-Content -Path $filename -Value $content -Encoding UTF8
Write-Host "Created $filename" -ForegroundColor Green
