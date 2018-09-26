#include<stdio.h>
#include<math.h>
    int main()
    {
        double a,b,c,x1,x2,d;
        scanf("%lf%lf%lf",&a,&b,&c);
        if((b*b - 4*a*c)<0)
        {
            d = sqrt(-1 * (b * b - 4 * a * c))/(2*a);
            x1 = -b/(2*a);
            printf("%g + %g * i\n", x1, d);
            printf("%g - %g * i\n", x1, d);
        }
        else
        {
            d = sqrt((b * b - 4 * a * c))/(2*a);
            x1 = (-b + d)/(2*a);
            x2 = (-b - d)/(2*a);
            printf("%g,%g",x1,x2);
        }
        return 0;
    }
