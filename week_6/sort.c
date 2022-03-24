#include <stdio.h>  

void isSorted(int array[], int size) 
{
    int i;  
    for (i =0; i < size - 1;b i++) {
        int first = array[i];
        int second = array[i + 1];  
        if (first > second) {  
           printf("not sorted\n");   
           return;  
        }  
    }
    printf("sorted\n");  
}  

int main(void)
{  
    isSorted(array, 5);  
   
    return 0; 
}
