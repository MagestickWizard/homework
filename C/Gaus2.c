#include<stdio.h>
#include<malloc.h>


    int main(){
        double **a;
        int i, j, k, l, n, counter;
        double c,b;
        //scanf("%d",&n);
        counter = 0;
        n = 3;
        a =(double**) malloc((n *  sizeof(double*))); //задаём массив
        for(i = 0; i<n;i++){
            a[i] = (double*)malloc(n * sizeof(double));
            k = 0;
            for(j = 0; j< n+1; j++){
                scanf("%lf", &a[i][j]);
                }
            }






        //собсна метод Гауса
        for(i = 0; i < n; i++){ //прямой ход
            l = 0;
            if(a[i][i] == 0){
                for(j = i; j < n;j++){
                    if(a[j][i] != 0){
                        l = 1;
                        k = j;  // ищем строку с ненулевым диагональным элементом
                        break;
                    }
                }
                if(l == 1){
                    for(j = 0; j < n+1;j++){
                        a[k][j] += a[i][j];
                        a[i][j] = a[k][j] - a[i][j]; //меняем местами строки в которых нет нуля на диагонали
                        a[k][j] -= a[i][j];
                    }
                }
            }
            if(a[i][i] != 0){                    //
                c = a[i][i];                     //
                for(j = i; j<n+1; j++){          //
                    a[i][j] /= c;                //    преобразуем строки
                }                                //
                for(j = i + 1; j < n; j++){      //
                    c = a[j][i];                 //
                    for(k = i; k<n+1; k++){      //
                        a[j][k] -= c*a[i][k];    //

                        }
                    }
                }

            }

        for(i = n - 1; i >= 1; i--){ //обратный ход
            if(a[i][i]){
                for(j = i-1; j >= 0; j--){
                    c = a[j][i];
                    a[j][n] -= a[i][n] * c;
                    a[j][i] =0;
                }
            }
            }


        //выводим масив
        for(i = 0; i < n; i++){
            for(j = 0; j < n+1 ; j++){
                printf("%lf ", a[i][j]);
                if(j == n-1){
                    printf("|");
                }
            }
            printf("\n");
        }
        //тут ума не надо
        free(a);
        return 0;
    }
/* if(a[i][i] != 0){
                a[i-1][i+1] -= a[i][i+1] * a[i-1][i]; тут лишний код его смотреть не надо
                a[i-1][i] = 0;
            }*/
