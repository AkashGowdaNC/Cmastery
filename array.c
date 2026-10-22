#include <stdio.h>
//Here is a complete program that reads n integers and prints them back.
int main(void) {
    int a[100];
    int n;

    printf("Enter number of elements (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Array: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
//Complete insertion program
#include <stdio.h>

int main(void) {
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int capacity = 10;
    int position = 2;
    int value = 99;

    if (n >= capacity || position < 0 || position > n) {
        printf("Insertion not possible.\n");
        return 1;
    }

    for (int i = n; i > position; i--) {
        a[i] = a[i - 1];
    }

    a[position] = value;
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
//Deletion: removing an element
#include <stdio.h>


int main(void) {
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int position = 2;

    if (position < 0 || position >= n) {
        printf("Invalid position.\n");
        return 1;
    }

    for (int i = position; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    n--;

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
//Second-largest distinct element
#include <stdio.h>
#include <stdbool.h>




int main(void) {
    int a[100];
    int n;

    printf("Enter number of elements (1-100): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    int largest = a[0];
    int second_largest = -2147483648; // Minimum value for int
    bool found_second = false;

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            second_largest = largest;
            largest = a[i];
            found_second = true;
        } else if (a[i] < largest && a[i] > second_largest) {
            second_largest = a[i];
            found_second = true;
        }
    }

    if (found_second) {
        printf("Second-largest distinct element: %d\n", second_largest);
    } else {
        printf("No second-largest distinct element found.\n");
    }

    return 0;
}
