#include<stdio.h>
#include<cs50.h>
int main(void){
    int i, j, n, m;
    n = get_int("Enter the number (1 or 2): ");
    m = get_int("Number of rows: ");
        if(n==1)
        {
            for(i=1; i<=m; ++i)
            {
                printf("\n");
                for(j=1; j<=i; ++j)
                {
                    printf("#");
                    if(j==m)
                    break;
                }
            }
        }
else
{
    for(i=1; i<=m; ++i)
    {
              printf("\n");
        for(j=m; j>=i; --j)
        {
            printf("#");
            if(j==1)
            break;
        }
    }
}
    return 0;
}
