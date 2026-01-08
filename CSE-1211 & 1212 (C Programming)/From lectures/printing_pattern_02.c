/*

Input: 4 6

******
*    *
*    *
******

*/

#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d",&n,&m);

    for(int i=1;i<=m;i++)
    {
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n-2;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(j==1 || j==m)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=m;i++)
    {
        printf("*");
    }
    return 0;
}
