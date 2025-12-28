#include <stdio.h>

struct Student{
    int age;
    int id;
};

int main(){
    struct Student S[3];
    
    for(int i=0;i<3;i++)
    {
        scanf("%d",&S[i].age);
        scanf("%d",&S[i].id);
    }
    for(int i=0;i<3;i++)
    {
        printf("Age: %d, ID:%d\n",S[i].age,S[i].id);
    }

    return 0;
}
