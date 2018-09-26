#include<stdio.h>
#include<malloc.h>
int main(){
    char c;
    int n,j,i,k,counter;
    char *str1;//[10] = "1234567890";
    char *str2;//[10] = "567";
    scanf("%d",&n);
    scanf("%d",&k);
    if(n == 0){
        printf("stroka pusta");
        return 0;
    }
    str1 = (char*) malloc(n);
    str2 = (char*) malloc(n);
    i = 0;
    while(/*c != '\n' && c != ' ' &&*/ i < n + 1){
        c = getchar();
        str1[i++] = c;

    }
    i = 0;
    while(/*c != '\n' && c != ' ' &&*/ i < k + 1){
        c = getchar();
        str2[i++] = c;

    }
    //printf("%s",str1);
    //printf("%s",str2);
    for(i = 1; i < n-k + 2; i++){
        //printf("\n%d %c   ",i,str1[i]);
        if(str1[i] == str2[1]){
            //printf("1 %c ",str2[1]);
            //printf("%d   ",i);
            counter = 1;
            for(j = 2;j < k + 1; j++){
                //printf("%d %c ",j,str2[j]);
                if(str1[i+j-1] == str2[j]){
                    counter++;
                   // printf("%d\n",counter);
                    if(counter == k){
                        printf("%d",i);
                        return 0;
                    }
                }
            }
        }
    }

    printf("net takoi stroki");
    return 0;
}
/*
if (str1[i] == str2[0]){
            counter = 1;
            for (j = 1;j < k  ;j++){
                if(str1[i+j] == str2[j]){
                    counter++;
                }
                else {                               //я скопидом от мира программирования отстаньте
                    counter = 0;
                }
            }
        }
        if (counter == k){
            printf("podstroka v %d",i);
            return 0;
        }
*/
