#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);

    for(int i=n-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;
}
