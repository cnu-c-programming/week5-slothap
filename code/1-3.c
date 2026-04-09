#include <stdio.h>

void print_reverse(int *arr, int size){
    int *num = &arr[size-1];

    for(int i = size; i > 0; i--){
        printf("%d", *(num--));
        if(i != 1){
            printf(" ");
        }
    }
}
int main(){
    int nums[] = {1,2,3,4,5};

    print_reverse(nums, 5);
    printf("\n");

    return 0;
}