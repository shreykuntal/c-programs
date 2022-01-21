#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int is_prime = 1;
    double num;
    printf("Enter a number: ");
    scanf("%lf",&num);
    double sqrt_num;
    sqrt_num = sqrt(num);
    int num_int = (int)num;
    int sqrt_num_int = (int)sqrt_num;
    int i;
    for (i=2; i<=sqrt_num_int; i++)
    {
        if (num_int%i==0) {
            is_prime = 0;
        }
    }
    if (is_prime == 0){
        printf("Not a prime!\n");
    }else {
        printf("Yes Prime!\n");
    }
    return 0;
}
//gcc -Wall prime_checker.c -o prime_checker -lm
