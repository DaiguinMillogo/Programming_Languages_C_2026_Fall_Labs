#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
    int S=0,i;
    for(i=1;i<=n;i++){
        S=S+i;
    }
    return S;
}// placeholder

int main(void) {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    while(n<1){
        printf("ERROR!\nPlease enter an integer n>=1: ");
        scanf("%d", &n);
    }//in case the input is invalid, retry
    printf("The sum of all integers from 1 up to %d is equal to %d.\n",n,sum_to_n(n));
    return 0;
}
