#include <stdio.h>
int main(int argc, char* argv[])
{
    char string[3] = "aaa";

    char* pstring = string;
    for (int i = 0; i < 3; i++) {
        printf("%d", *pstring);
    }

    return 0;
}