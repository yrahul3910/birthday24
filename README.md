# Birthday 2024: Puzzles

For my 27th birthday, I sent out puzzles for invitees to solve. Below is documentation on how to generate the puzzle, including the solutions.

## Generating the puzzle

### Part 1

To generate the encrypted part, just run `make`. This base64-encodes and encrypts the intermediate URL (in this case: [https://ryedida.me/justawebsite](https://ryedida.me/justawebsite)). You'll want this intermediate URL to be in `message.txt`. 

Then, send the instructions (without solutions!), public key, and rename the `encrypted.txt` to `message.txt`. You might want to include the following hint in your email:

>  Hint: Sometimes a key opens multiple doors.

### Part 2

`final.c` is the final part of the puzzle, which contains obfuscated C code. You'll want to work with `annotated.c` to stay sane while debugging, and then remove comments to get the final version.

If you change `final.c`, which is the code they will receive, run `cat final.c | base64` and paste the output into `c_to_js.js`. Next, copy this code, and clone the [JSFuck GitHub repo](https://github.com/aemkei/jsfuck). Open `index.html`, change the input to a `textarea` using Inspect Element, and then grab the obfuscated code. Comment the line and ensure that it works (by running it uncommented in the console). Commit that to the `justawebsite` repo.

## File Description

* `check.c` - The code used to check the solution to Problem 2
* `contacts.csv` - The invitees
* `final.c` - The "deployed" C code
* `test.c` - The C code with more comments and debugging help
* `index.html` - The website (out of date--please see the `justawebsite` repo)
* `message.txt` - The original, unencrypted message (links to the website, not the meeting)
* `publickey.asc` - The public key
* `url.txt` - The meeting URL
