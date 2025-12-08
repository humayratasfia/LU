/*

Input: 5

*
**
***
****
*****

*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int star = 1;
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=star;i++)
        {
            printf("*");
        }
        printf("\n");
        star++;
    }
    return 0;
}
