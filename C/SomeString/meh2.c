#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char a;
    int line, word, len, another_space;
    int eol = 0;
    line = 0;
    word = 0;
    another_space = 0;
    fp = fopen("text.txt","r");
    int i = 0;
    a = fgetc(fp);
    while(a != EOF)
    {
        if(!isspace(a))
        {
                another_space = 1;
        }
        if(isspace(a) && a != '\n' && another_space)
        {
            word++;
            another_space = 0;
            eol = 0;

        }
        if(a == '\n')
        {
            line++;
            a = ' ';
            //fgetc(fp);
            continue;

        }
        a = fgetc(fp);
        i++;
    }
    printf("kol-vo strok = %d\n", line);
    printf("kol-vo slov = %d\n",word);
    printf("razmer = %d b\n",i /* sizeof(char)*/);
    fclose(fp);
    return 0;
}
