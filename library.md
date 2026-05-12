first to run the c file 
gcc then type the first letter of the file name 
ex : main.c
gcc m then press tab by default it will autocomplete like this : gcc .\main.c
type a then tab then it will autocomplete   .\a.exe


<!--  ; is instruction terminator    -->

Today I learned an important concept about `scanf("%c")` in C.

When we take integer input using:

```c
scanf("%d", &i);
```

and press Enter, the newline character (`\n`) remains inside the input buffer.

Now if we directly use:

```c
scanf("%c", &ch);
```

then `%c` reads that leftover newline character instead of waiting for a new character input.

That’s why character input seems to be skipped.

✅ Correct way:

```c
scanf(" %c", &ch);
```

The space before `%c` tells `scanf()` to ignore all whitespace characters (`\n`, spaces, tabs) and then read the actual character.

Example:

```c
#include<stdio.h>

int main() {
    int i;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &i);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("You entered character: %c and number: %d", ch, i);
}
```

Small concept, but very important for beginners in C programming 🚀

