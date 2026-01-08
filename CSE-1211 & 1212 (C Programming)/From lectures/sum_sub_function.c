#include <stdio.h>

int cal(int x, int y)
{
    int c = x + y;
    int d = x - y;
    printf("Sum: %d\n",c);
    printf("Sub: %d\n",d);
    return (c+d);
}
int main(){
    int n = cal(50,20);
    printf("%d\n",n);
    n = cal(70,50);
    printf("%d\n",n);
    return 0;
}
