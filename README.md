# Generating the puzzle

## Part 1

To generate the encrypted part, just run `make`. Then, send the instructions (without solutions!), public key, and rename the `encrypted.txt` to `message.txt`.

## Part 2

If you change `final.c`, which is the code they will receive, run `cat final.c | base64` and paste the output into `c_to_js.js`. Next, copy this code, and clone the JSFuck GitHub repo. Open `index.html`, change the input to a `textarea`, and then grab the obfuscated code. Commit that to the `justawebsite` repo.

# File Description

* `check.c` - The code used to check the solution to Problem 2
* `contacts.csv` - The invitees
* `final.c` - The "deployed" C code
* `test.c` - The C code with more comments and debugging help
* `index.html` - The website (out of date--please see the `justawebsite` repo)
* `message.txt` - The original, unencrypted message (links to the website, not the meeting)
* `publickey.asc` - The public key
* `url.txt` - The meeting URL
