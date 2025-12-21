TASK 1: Pointer Concepts

1. Difference Between a Variable and a Pointer
A variable is a named storage location that directly holds a value in memory.
For example, an integer variable stores a numeric value like 15.
A pointer, on the other hand, does not store the value itself. It stores the memory address of another variable.

How memory is accessed:
Variables access their values directly.
Pointers access values indirectly by referencing memory locations.

Reading and modifying values:
Variable values are read or changed using the variable name.
Pointer values require dereferencing to read or modify the data stored at the address.
Simply put: variables store data, pointers store directions to the data.

2. Variable vs Pointer Declaration and Definition

Variable example:
int number = 8;
This creates a variable named number and assigns it a value.

Pointer example:

int *ptr;
ptr = &number;


Key operators:

& retrieves the address of a variable.
* declares a pointer and is also used to access the value stored at an address.
The same symbol does two different jobs depending on context.

3. Meaning of Dereferencing
Dereferencing means accessing the actual value located at the memory address stored in a pointer.

Example:

int value = 12;
int *p = &value;

p holds the address of value
*p retrieves the value 12
Changing the value through pointer:
*p = 30;
Now value becomes 30.

4. Situations Where Pointers Are Useful
Pointers are preferred when:
A function needs to update the original variable
Handling arrays and strings
Managing memory efficiently
Examples:
Swapping values inside a function
Passing large arrays to functions without copying data

5. Disadvantages and Risks of Using Pointers

Using pointers incorrectly can cause:
Accessing invalid memory locations
Program crashes
Memory leaks
Difficult debugging
Pointers offer flexibility, but mistakes are costly.

6. Call by Value vs Call by Reference
Call by value:
Copies the value to the function
Original data remains unchanged
Call by reference:
Passes the address of the variable
Function can modify the original data

7. Suitable Use Cases
a. Call by Value
When the data should not be altered
For simple computations

b. Call by Reference
When modifications are required
For efficiency with large data structures

TASK 2: Display Variable Address
#include <stdio.h>

int main() {
    int num = 20;
    int *pointer = &num;

    printf("Value of num: %d\n", num);
    printf("Address stored in pointer: %p\n", pointer);
    printf("Address of num: %p\n", &num);
    printf("Dereferenced value: %d\n", *pointer);

    return 0;
}

TASK 3: Modify Variable Using Pointer
#include <stdio.h>

int main() {
    int count = 15;
    int *ptrCount = &count;

    *ptrCount = 40;

    printf("New value of count: %d\n", count);

    return 0;
}

TASK 4: Addition Using Pointers
#include <stdio.h>

int main() {
    int first = 9, second = 6;
    int *p1 = &first;
    int *p2 = &second;

    int total = (*p1) + (*p2);

    printf("Total: %d\n", total);

    return 0;
}

TASK 5: Swapping Using Pointers
#include <stdio.h>

void swapValues(int *a, int *b) {
    int hold = *a;
    *a = *b;
    *b = hold;
}

int main() {
    int x = 4, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swapValues(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}

TASK 6: Pass by Value and Pass by Reference
#include <stdio.h>

void addOneByValue(int n) {
    n++;
}

void addOneByReference(int *n) {
    (*n)++;
}

int main() {
    int value = 5;

    addOneByValue(value);
    printf("After call by value: %d\n", value);

    addOneByReference(&value);
    printf("After call by reference: %d\n", value);

    return 0;
}