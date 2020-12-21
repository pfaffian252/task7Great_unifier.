#include <stdio.h>


int *pain(int a[], int b[], int n, int m)
{
 int *c =(int *)malloc((n+m)*sizeof(int));
int na=0, nb=0, i;
    for (i=0; i<n+m; i++)
    {
        if (a[na]>b[nb] && nb<m && na<n)
        {
            c[i]=b[nb];
            nb++;
        }
        else if (na<n && nb<m)
        {
            c[i]=a[na];
            na++;
        }
        else
        {
            if (na<n)
        {
            c[i]=a[na];
            na++;
        }
        if (nb<m)
        {
            c[i]=b[nb];
            nb++;
        }
        }
    }
    return c;
}

int main ()
{
    int n, m, i, *c;
    printf("Enter size 1 and 2 of arrays.\n");
    scanf("%d%d", &n, &m);
   int *b =(int *)malloc(m*sizeof(int));
   int *a =(int *)malloc(n*sizeof(int));
   printf("Enter the first array.\n");
for (i=0; i<n; i++) scanf("%d", &a[i]);
printf("Enter the second array.\n");
for (i=0; i<m; i++) scanf("%d", &b[i]);
   c=pain(a, b, n, m);
   printf("Combined array.\n");
       for (i=0; i<n+m; i++) printf("%d ", c[i]);
       printf("\nThank you for using our program!");
    free(a);
    free(b);
    free(c);
return 0;
}
