// https://www.hackerrank.com/contests/lab-final-66e/challenges/check-of-substring
// unsolved

#include <stdio.h>
#include <string.h>

int main(){
    char s1[1001];
    scanf("%s", s1);
    char s2[1001];
    scanf("%s", s2);

    int len1 = strlen(s1);
    // int len2 = strlen(s2);

    int found = 0;
    for(int i=0;i<len1;i++)
    {
        if(s1[i]==s2[0] && s1[i+1]==s2[1]) // logically wrong
        {
            found = 1;
        }
    }

    if(found == 1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

    // for(int i=0;i<len1;i++)
    // {
    //     for(int j=0;j<len2;j++)
    //     {
    //         if(s1[i]==s[j])
    //         {

    //         }
    //     }
    // }
    return 0;
}
