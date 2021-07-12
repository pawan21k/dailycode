#include<stdio.h>

int main(){
    // int i= 0;
    // ++i;    // either i do i++ output will be same
    // printf("%d\n", i);
    int i, j, k, l;
    i = 1;
    j = ++i;    // ++i will increment the value of i, then return the incremented value.
    printf("i is %d and j is %d\n", i, j);  // (i is 2 and j is 2)
    k = 1;
    l = k++;    // k++ will increment the value of k, but return the original value that k held before being incremented.
    printf("k is %d and l is %d\n", k, l);  // (k is 2 and l is 1)

    return 0;
}
// summary: The only difference between ++i and i++ will be when using the value of the operation in the same time.
