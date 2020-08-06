# printTitle
Small tool to draw text on the terminal.

Version: 1.0.0 <br>
License: MIT <br>

## How To Use
A C compiler, to build and run.

## Documentaion
To start using **printTitle** , just include printTitle.h in your main.c file
then call printTitle function anywhere in your code. 

```
void printTitle(char *text, char block, char decoration);
```
* text (*string*): the text that we will print , there's no limit , but it's better 
                   to keep small as possible (~10 litters).

* block (*char*):  the basic unit that will be used to print the litters , you can use 
                   any valid ASCII symbol.

* decoration (*char*): the only decoration avilable in this version is the **underline**
                       and you can activate by pass 'u' , as a value.
                       
## Examples

```
# example #1: 
// example #1
char *test = "ABCD";
printTitle(test, '#', 'u');

// example #2
test = "xyz";
printTitle(test, '@', 0);

// example #3
test = "Success";
printTitle(test, '$', 'u');

```

## Screenshot
![printTitle Screenshot](https://i.imgur.com/FjSVnMK.jpg)
