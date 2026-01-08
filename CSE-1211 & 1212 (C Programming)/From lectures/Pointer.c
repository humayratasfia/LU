#include <stdio.h>

int main(){
    // With Pointer
    int b = 10;
    int* a; // Declaring pointer variable.
    a = &b; // Storing the address of b in pointer variable a.

    printf("With Pointer: \n");
    printf("Before updating a, address in a = %d, a = %d, b = %d \n",a, *a, b);

    *a = 20; 
    /* Dereferencing pointer variable a to 
    change the value of the variable it is pointing to. */
    printf("After updating a, address in a = %d, a = %d, b = %d \n",a, *a, b);

    // Without Pointer
    // int b = 10;
    // int a = b;
    // printf("Without Pointer: \n");
    // printf("Before updating a, a = %d, b = %d \n",a,b);
    // a = 20;
    // printf("After updating a, a = %d, b = %d",a,b);
    return 0;
}