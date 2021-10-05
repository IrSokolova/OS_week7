#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    int* array;
    printf("Enter the number of elements\n");
    scanf("%d", &N);

    array = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++){
        array[i]=i;
    }

    printf("The elements of the array are: ");
    for (int i = 0; i < N; ++i) {
        printf("%d ", array[i]);
    }

    free(array);
}