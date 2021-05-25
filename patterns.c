#include<stdio.h>

#include<cs50.h>

int main(void){

    int i, j, n, m;

    n = get_int("Enter the number (1 or 2): ");

    m = get_int("Number of rows: ");

        if(n==1)

        { printf("\n");

            for(i=1; i<=m; i++)

            {

            for(j=m; j>=i; j--)

            { 
            printf("#");
            }

            for(j=1; j<=i; j++)

            { if(j==4)
                break;
            printf(" ");

            }
                printf("\n");
            }

        }

else

{

    for(i=1; i<=m; i++)

    {

        for(j=m; j>=i; j--)

        {

        printf(" ");

        }

        for(j=1; j<=i; j++)

        {

            printf("#");

        }

        printf("\n");

    }

}

}
