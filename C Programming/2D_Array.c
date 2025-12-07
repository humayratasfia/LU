#include <stdio.h>

int main(){
    int r, c;
    scanf("%d %d",&r,&c);
    
    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }

    // int a[4][3] = {{2,5,3},
    //                {4,7,2},
    //                {9,6,5},
    //                {5,7,8}};

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
