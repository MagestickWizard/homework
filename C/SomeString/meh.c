#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

    main()
    {
        int *a;
        int i,n;
        scanf("%d", &n);
        a = (int*)malloc(n*sizeof(int));
        for(i = 0; i < n; i++)
        {
            printf("a[%d] = ", i);
            scanf("%d", &a[i]);
        }
        for (i = 0; i<n; i++)
        printf("%d\n", a[i]);
        printf("%d\n", sizeof(int));
        free(a);
        return 0;
    }
