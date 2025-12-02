#include <stdio.h>
#include <string.h>

int main(){
    char a[20];
    scanf("%s",a);
    int len = strlen(a);
    
    int flag = 0;
    for(int i=0;i<len-1;i++)
    {
        if(a[i]=='m')
        {
            if(a[i+1]=='a')
            {
                flag = 1;
            }
        }
    }
    if(flag == 1)
    {
        printf("Found");
    }
    else{
        printf("Not Found");
    }
    return 0;
}
