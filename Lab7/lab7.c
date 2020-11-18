#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Arun Kulkarni
//Simple BubbleSort using pseudorandom number generator

void swap(int *x, int *y);
void bubbleArray(int arr[], int n);
void printArray(int arr[], int n);

int numSwaps = 0;

int main(int argc, char* argv[]){
    int arr[100];
    srand(time(0));

    for (int i = 0; i < 100; i++){
        arr[i] = (rand() % 1000);
    }
    
    printf("Unsorted integers:\n");
    printArray(arr, 100);

    bubbleArray(arr, 100);

    printf("Sorted integers:\n");
    printArray(arr, 100);

    printf("Number of swaps: %d\n",numSwaps);

    return 0;
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}

void bubbleArray(int arr[], int size){
    for (int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    numSwaps = numSwaps + 1;
}
