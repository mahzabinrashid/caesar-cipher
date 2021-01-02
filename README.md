# caesar-cipher
A program that enables you to encrypt messages using simple Caesar’s cipher. 



The program accepta a single command-line argument, a non-negative integer called the "key".

When the user inputs "./caesar key" each character in plaintext is replaced by a character some fixed number of positions down from it. If the key is geater than 26, alphabetical characters remain alphabetical characters in your program’s output. For examlpe, if k is 27, A becomes B and not a bracket as B is 27 positions away from A, provided we wrap around from Z to A.

Examples:

./caesar 1
plaintext:  Hello
ciphertext: Ifmmp

./caesar x
Usage: ./caesar key
