#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    long long N=1;
    if(n==0){
        return N ;
    }
    else {
        for(int i=2;i<=n;i++){
            N=N*i;
        }
        return N;
    } // placeholder
}

int main(void) {
    int n;
    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);
    if(n<0){
        printf("ERROR!\nYou must enter a non-negative integer, EXIT!\n");
    }//in case the input is invalid, EXIT !
    else{
        printf("The factorial of %d is equal to %lld \n",n,factorial(n));
    }
    return 0;
}
