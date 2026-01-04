/*

Input: 6

     *
    ***
   *****
  *******
 *********
***********
    ***
    ***
    ***
    ***
    ***

*/

#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int gap = n-1;
    int star = 1;
    //Upper part of the tree
    for(int i=1;i<=n;i++)
    {
        for(int j=gap;j>=1;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=star;j++)
        {
            printf("*");
        }
        gap--;
        star+=2;
        printf("\n");
    }
    //Lower part of the tree
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-2;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=3;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
