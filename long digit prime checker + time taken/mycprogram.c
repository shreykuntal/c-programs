#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int is_prime = 1;
    unsigned long long int  num;
    printf("Enter a number: ");
    clock_t begin = clock();
    scanf("%llu",&num);
    unsigned long long int  sqrt_num;
    sqrt_num = sqrt(num);
    unsigned long long int num_int = (unsigned long long int)num;
    unsigned long long int sqrt_num_int = (unsigned long long int)sqrt_num;
    unsigned long long int i;
    for (i=2; i<=sqrt_num_int; i++)
    {
        if (num_int%i==0) {
            is_prime = 0;
            break;
        }
    }
    clock_t end = clock();
    if (is_prime == 0){
        printf("Not a prime!\n");
        printf("Least divisor: %llu\n",i);
    }else {
        printf("Yes Prime!\n");
    }
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time taken: %lf seconds\n", time_spent);
    return 0;
}
//takes value from 0 to 18446744073709551615
