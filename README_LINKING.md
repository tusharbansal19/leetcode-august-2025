Linking LeetCode -> local workspace

Options (pick one):

1) VS Code (recommended)
- Install the "LeetCode" extension from the Extensions view (search for "LeetCode").
- In the extension view, sign in to your LeetCode account (it opens a browser flow). This stays local to your machine.
- Configure the extension's workspace folder to your repo (open the repo in VS Code).
- Use the extension to open/download problems; copy/paste the problem into files or use the extension's "Export"/"Submit" features.

2) Manual / quick share
- Paste the problem URL and your code here in the chat and I will create or update the corresponding `dayNN.cpp` file.

3) CLI (advanced, local only)
- You can install a LeetCode CLI tool and authenticate locally. I will not, and cannot, log into your account for you.
- After you authenticate, you can run a script (example below) to create a skeleton file for the day's problem.

Using the helper script (creates `dayXX.cpp`):

PowerShell example (run from your repo root):

```powershell
# Create day 31 with a title and URL
.\scripts\create_day_file.ps1 -Day 31 -Title "Two Sum" -Url "https://leetcode.com/problems/two-sum/"
```

Security notes
- Do not share passwords or session tokens here.
- I can create files and scripts in your workspace; but you must authenticate and run any LeetCode-specific tools locally.

If you want, I can now:
- A) Configure the repo by creating a `solutions/` layout and templates (I can do this now).
- B) Walk you through installing and logging into the VS Code LeetCode extension step-by-step.
- C) Add a GitHub Actions workflow that can run tests when you push solutions.

Which one do you want me to do next?
