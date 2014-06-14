#include <stdio.h>

void printWelcome(int len)
{
    printf("welcome -- %d \n", len);
}

void printGoodbye(int len)
{
    printf("gogo -- %d \n", len);
}

void callback(int times, void (* print)(int))
{
    int i;

    for (i = 0; i < times; ++i) {
        print(i);
    }
    printf("\n I don'w know what are you doing \n");
}

void main(void)
{
    callback(10, printWelcome);
    callback(10, printGoodbye);
    printWelcome(5);
}

/*
$ a.exe
welcome -- 0
welcome -- 1
welcome -- 2
welcome -- 3
welcome -- 4
welcome -- 5
welcome -- 6
welcome -- 7
welcome -- 8
welcome -- 9

 I don'w know what are you doing
gogo -- 0
gogo -- 1
gogo -- 2
gogo -- 3
gogo -- 4
gogo -- 5
gogo -- 6
gogo -- 7
gogo -- 8
gogo -- 9

 I don'w know what are you doing
welcome -- 5
*/
