#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);

    int flag = 0;
    for(int i=0, j=n-1; i<n; i++, j--)
    {
        if(a[i] != a[j])
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        printf("Not Palindrome");
    }
    else if(flag == 0)
    {
        printf("Palindrome");
    }
    
    return 0;
}



// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     char a[n];
//     scanf("%s",a);

//     int i = 0;
//     int j = n-1;
//     int flag = 0;
//     while(i<=j)
//     {
//         if(a[i] != a[j])
//         {
//             flag = 1;
//             break;
//         }
//         i++;
//         j--;
//     }
//     if(flag == 1)
//     {
//         printf("Not Palindrome");
//     }
//     else if(flag == 0)
//     {
//         printf("Palindrome");
//     }
//     return 0;
// }
