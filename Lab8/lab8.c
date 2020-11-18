#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

//Arun Kulkarni
//File I/O and BubbleSort implementation

int numSwaps = 0;

void swap(int *x, int *y){
 
  int temp = *x; 
  *x = *y; 
  *y = temp;
  numSwaps++; 
} 
  
void bubbleArray(int arr[], int n){
 
  int i, j; 
  for (i = 0; i < n-1; i++){       
    for (j = 0; j < n-i-1; j++){  
      if (arr[j] > arr[j+1]){ 
        swap(&arr[j], &arr[j+1]);
      }
    }
  } 
} 
  
void printArray(int arr[], int size){
 
  int i; 
  for (i=0; i < size; i++){ 
    printf("%d ", arr[i]);
  }  
} 
  
int main(int argc, char* argv[]){ 

  FILE *fi, *fo;
  int arr[100]; 
  int i;

  fi = fopen("datain.txt","r");
  for (i = 0; i < 100; i++){
    fscanf(fi,"%d ",&arr[i]); 
  }
  fclose(fi);

  printf("\nUnsorted array: \n");
  printArray(arr, 100);
  
  bubbleArray(arr, 100); 
  
  printf("\n\nSorted array: \n"); 
  printArray(arr, 100);
  fo = fopen("dataout.txt", "w");
  for(i = 0; i < 100; i++){
    fprintf(fo,"%d ",arr[i]);
  }
  fclose(fo);

  printf("\n\nNumber of Swaps: %d\n\n",numSwaps); 
  return 0;
 
} 
