#include <stdio.h>

#define SIZE 10

int main() {

    printf("Hello World\n");

    // Declare the array
    int array[SIZE];
    
    // Initializing an array 
    for (int i = 0; i < SIZE; i++) {
        array[i] = i*2;
        printf("Array[%d] = %d\n", i, array[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array[i]);
    }
    // Algorithm for array traversal (printing every element, counting the total
    // number of elements, or performing any process on these elements)
    /*
    Step 1: [INITIALIZATION] SET I = lower_bound
    Step 2: Repeat steps 3 to 4 while I <= upper_bound
    Step 3:     Apply Process to A[I]
    Step 4:     Set I = I + 1
            [END OF LOOP]
    Step 5: EXIT
    */
    
    // Create array and ask user to populate
    int i, n, arr[20];
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n The array elements are ");
    for (i = 0; i < n; i++) {
        printf("\t %d", arr[i]);
    }

    // Calculate the mean value of the array
    double sum = 0.0, mean = 0.0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }
    mean = sum / n;
    printf("\n\nThe mean value of the array is : %0.2f ", mean);

    // Find the smallest value and its index
    int smallestValueIndex = 0; 
    for (i = 1; i < n; i++) {
        if (arr[smallestValueIndex] > arr[smallestValueIndex + i]) {
            smallestValueIndex += i;
        } 
    }
    printf("\nThe smallest value :%d is at index :%d", arr[smallestValueIndex], smallestValueIndex);
    
    // Find the second smallest value and its index

    return 0;

}