// https://www.hackerrank.com/contests/lab-final-66e/challenges/simple-calculator-35

#include <stdio.h>

int main(){
    int n, m;
    char d;
    scanf("%d %d %c",&n,&m,&d);

    if(d == '+')
    {
        printf("%d", n+m);
    }
    if(d == '-')
    {
        printf("%d", n-m);
    }
    if(d == '*')
    {
        printf("%d", n*m);
    }
    if(d == '/')
    {
        if(m != 0)
        {
            printf("%d", n/m);
        }
    }
    return 0;
}
