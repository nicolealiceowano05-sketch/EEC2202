**Name:** NICOLE ALICE  
**Reg No:** ENE212-0066/2024  
**Course:** ECE

# Pointer Concepts

---

## Table of Contents

1. Overview
2. Task 1 — Pointer Concepts (theory)
3. Task 2 — Display Variable Address (example)
4. Task 3 — Modify Variable Using Pointer (example)
5. Task 4 — Addition Using Pointers (example)
6. Task 5 — Swapping Using Pointers (example)
7. Task 6 — Pass by Value vs Pass by Reference (example)

---

## 1. Overview

Pointers are variables that store memory addresses. They are central to C programming for tasks such as modifying variables from functions, working with arrays and strings, and managing dynamic memory.

---

## 2. Task 1 — Pointer Concepts

- **Variable vs Pointer**
  - A *variable* directly holds a value (for example, `int number = 8;`).
  - A *pointer* holds the *address* of another variable (for example, `int *ptr = &number;`).

- **Key operators**
  - `&` — returns the address of a variable.
  - `*` — when used in a declaration (`int *p`) it defines a pointer; when used on a pointer (`*p`) it dereferences the pointer to access the value.

- **Dereferencing**
  - Accessing the value stored at the address contained in a pointer. Example:

```c
int value = 12;
int *p = &value;
/* p holds the address of value */
/* *p yields 12 */
*p = 30; /* changes value to 30 */
```

- **When pointers are useful**
  - When a function must modify the caller's variables
  - When passing large arrays/structures without copying
  - For dynamic memory management

- **Risks**
  - Dereferencing invalid pointers can crash a program or corrupt memory
  - Memory leaks if allocated memory is not freed

- **Call by value vs call by reference**
  - Call by value: function receives a copy — the original is unchanged.
  - Call by reference: function receives an address — it can modify the original.

---

## 3. Task 2 — Display Variable Address

```c
#include <stdio.h>

int main(void) {
    int num = 20;
    int *pointer = &num;

    printf("Value of num: %d\n", num);
    printf("Address stored in pointer: %p\n", (void *)pointer);
    printf("Address of num: %p\n", (void *)&num);
    printf("Dereferenced value: %d\n", *pointer);

    return 0;
}
```

---

## 4. Task 3 — Modify Variable Using Pointer

```c
#include <stdio.h>

int main(void) {
    int count = 15;
    int *ptrCount = &count;

    *ptrCount = 40; /* modify the original variable via pointer */

    printf("New value of count: %d\n", count);

    return 0;
}
```

---

## 5. Task 4 — Addition Using Pointers

```c
#include <stdio.h>

int main(void) {
    int first = 9, second = 6;
    int *p1 = &first;
    int *p2 = &second;

    int total = (*p1) + (*p2);

    printf("Total: %d\n", total);

    return 0;
}
```

---

## 6. Task 5 — Swapping Using Pointers

```c
#include <stdio.h>

void swapValues(int *a, int *b) {
    int hold = *a;
    *a = *b;
    *b = hold;
}

int main(void) {
    int x = 4, y = 10;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swapValues(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
```

---

## 7. Task 6 — Pass by Value vs Pass by Reference

```c
#include <stdio.h>

void addOneByValue(int n) {
    n++; /* modifies local copy only */
}

void addOneByReference(int *n) {
    (*n)++; /* modifies caller's variable */
}

int main(void) {
    int value = 5;

    addOneByValue(value);
    printf("After call by value: %d\n", value);

    addOneByReference(&value);
    printf("After call by reference: %d\n", value);

    return 0;
}
```


---


