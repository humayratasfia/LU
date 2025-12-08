/*

Input: 5

*****
****
***
**
*

*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int star = n;
    for(int i=1;i<=n;i++)
    {
        for(int j=star;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
        star--;
    }
    return 0;
}
