#include <stdio.h>
#include <stdlib.h>

int main() {
    int number_list[100]; // Assuming a maximum of 100 numbers
    int index = 0;

    while (1) {
        int num;
        printf("Enter a number (-1 to stop): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        if (num % 2 == 0) {
            // Even number, add it to the end
            number_list[index++] = num;
        } else {
            // Odd number, shift existing elements and add it to the beginning
            for (int i = index; i > 0; i--) {
                number_list[i] = number_list[i - 1];
            }
            number_list[0] = num;
            index++;
        }
    }

    printf("Resulting list: ");
    for (int i = 0; i < index; i++) {
        printf("%d ", number_list[i]);
    }
    printf("\n");

    return 0;
}
///// 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Compare function for qsort to sort in descending order
int compare_desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int numbers[100];

    // Seed the random number generator
    srand(time(NULL));

    // Generate 100 random numbers and add them to the array
    for (int i = 0; i < 100; i++) {
        numbers[i] = rand() % 1000; // You can adjust the range as needed
    }

    // Sort the numbers in descending order using qsort
    qsort(numbers, 100, sizeof(int), compare_desc);

    // Print the sorted numbers
    printf("Sorted numbers in descending order:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
/////
#include <stdio.h>

// Function to find the maximum value in an array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to find the minimum value in an array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
3 questions 
int main() {
    int arr[] = {10, 5, 8, 20, 3, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, size);
    int min = findMin(arr, size);

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
//6 questions
#include <stdio.h>

// Recursive function to calculate the factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(num);
        printf("The factorial of %d is %d\n", num, result);
    }

    return 0;
}
// 7 questions  #include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1; // Exit with an error code
    }

    int arr[n]; // Declare an array of 'n' elements

    // Input elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate the average
    double average = (double)sum / n;

    // Output the sum and average
    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);

    return 0; // Exit with success
}