#include <stdio.h>
#include <string.h>

int main(){
    char a[20];
    scanf("%s",a);
    int len = strlen(a);
    
    int flag = 0;
    for(int i=0;i<len-3;i++)
    {
        if(a[i]=='b' && a[i+1]=='a' && a[i+2]=='b' && a[i+3]=='a')
        {
            flag++;
        }
    }
    if(flag != 0)
    {
        printf("'baba' Found. Count: %d",flag);
    }
    else{
        printf("Not Found");
    }
    return 0;
}
