#include <stdio.h>
#include <string.h>

    int main()
    {
        FILE *fp;
        char* file = "text.txt";
        char a[255];
        fp = fopen("text.txt","r");
        a[0] = fgetc(fp);
        a[1] = fgetc(fp);
        printf("%s",a);
        return 0;
    }
