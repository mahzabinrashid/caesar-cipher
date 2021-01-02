from cs50 import get_string


def main():

    while True:
        s = get_string("Text: ")
        break
    calc(s)


def calc(s):

    l = 0
    w = 1
    sen = 0

    for i in range(len(s)):
        if s[i] >= 'a' and s[i] <= 'z' or s[i] >= 'A' and s[i] <= 'Z':
            l += 1
        elif s[i] == ' ':
            w += 1
        elif s[i] == '.' or s[i] == '?' or s[i] == '!':
            sen += 1

    a = 0.0588 * l / w * 100 - 0.296 * sen / w * 100 - 15.8

    b = round(a)

    if (b < 1):
        print("Before Grade 1")
    elif (b >= 16):
        print("Grade 16+")
    else:
        print(f"Grade {b}")


main()
