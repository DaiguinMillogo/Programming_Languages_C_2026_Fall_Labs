#include <stdio.h>
#include <math.h>

/*
    Task:
    Write a function `int is_prime(int n)` that returns 1 if n is prime,
    0 otherwise.

    In main():
      - Ask user for an integer n (>= 2)
      - If invalid, print an error
      - Otherwise, print all prime numbers up to n
*/

int is_prime(int n) {
    int i=2;
    while(i <=sqrt(n)){
        if(n%i==0){
            return 0;
        }
        else{
            i++;
        }
       }// TODO: check if n is prime using loop up to sqrt(n)
    return 1; // placeholder
}

int main(void) {
    int n;
    printf("Enter an integer n (>= 2): ");
    scanf("%d", &n);
    while(n<2){
        printf("ERROR!\nPlease, enter an interger n>=2: ");
        scanf("%d", &n);
    }//in case the input is invalid, retry
    printf("Prime numbers up to %d are :",n);
    for(int i=2;i<=n;i++){
        if(is_prime(i)){
            printf(" %d ", i);
        }
    }
    printf("\n");
    return 0;
}
