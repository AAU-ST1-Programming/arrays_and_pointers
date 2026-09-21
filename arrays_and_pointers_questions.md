# Arrays and Pointers - Questions

---

## Question: Arrays 1 - Basic Array

**Short Humorous Scenario:**
Martin wants to store several numbers together but doesn't know how. *"I need to keep track of my lucky numbers: 2, 3, 5, 7. How do I store them all in one place?"* he asks.

**What they currently know:**
- Variable declaration
- Datatypes (`int` for whole numbers)
- Loops (`for`)
- `printf` function

**The Task:**

1. Open/create the file `arrays1.c`
2. Create an array called `Numbers` containing the values {2, 3, 5, 7}
3. Create a loop that prints all values of the array one by one
4. Compile and run the program from VS Code
5. Compile and run the program from terminal

6. **PBL:** Martin asks: *"Can you modify the program to print the values in reverse order?"*

**Hints:**
- If using whole numbers, `int` is the appropriate datatype
- Arrays are indexed from 0 to N-1
- `Numbers[0]` contains the value 2
- Use a `for` loop with index `i` from 0 to array size - 1

**What you must never do:**
- Print the array name directly (e.g., `printf("%d", Numbers)`)
- Access elements beyond the array bounds
- Forget to specify the array size

---

## Question: Arrays 2 - Dynamic Allocation

**Short Humorous Scenario:**
Martin has seen code that uses `malloc` and is confused. *"This arrays2.c program creates arrays with rand(). What does this code do? And why is this dynamic allocation?"* he asks.

**What they currently know:**
- Arrays
- Dynamic memory allocation: `malloc`, `calloc`
- `rand()` function
- `sizeof` operator
- Heap vs stack memory

**The Task:**

1. Compile `arrays2.c`:
   ```bash
   gcc arrays2.c
   ```
2. Run the program from terminal:
   ```bash
   ./a.exe
   ```
3. Answer the following:
   - What does the code do?
   - What makes this dynamic memory allocation?
   - Is this heap or stack allocation?
   - What are the advantages of heap vs stack allocation?

4. **PBL:** Martin asks: *"Can you explain what would happen if we didn't free the allocated memory?"*

**Hints:**
- `dynamic_array_size = 1 + rand() % Max_array_size` creates a random size
- Dynamic allocation means the array size can be different each time
- `malloc` allocates memory from the heap
- Heap allocation allows flexible sizing
- Heap requires manual memory management (free)
- Stack is faster but fixed size

**What you must never do:**
- Forget to check if malloc succeeded
- Forget to free allocated memory
- Assume array size is known at compile time

---

## Question: Pointers Basics

**Short Humorous Scenario:**
Martin has heard about pointers but doesn't understand them. *"I need to store a memory address and use it to change a variable. How does this work?"* he asks.

**What they currently know:**
- Variable declaration
- Memory addresses
- Dereferencing operator `*`
- Address-of operator `&`

**The Task:**

1. Create a program `pointers1.c` with the following variables:
   - `int num`
   - `int* p_num`
2. Set `p_num` to the memory address of `num`
3. Use `p_num` to change the value of `num`
4. Print both the value and address of `num` and `p_num`
5. Run the program

6. **PBL:** Martin asks: *"Can you create a function that takes a pointer as a parameter and modifies the original variable?"*

**Hints:**
- How to get a variable's address: use `&` (address-of operator)
- How to dereference a pointer: use `*` (e.g., `*p_num = 42`)
- Pointer declaration: `int* p_num` or `int *p_num`
- Print address with `%p` format specifier

**What you must never do:**
- Forget `&` when getting address
- Forget `*` when dereferencing
- Assign to pointer without address (wild pointer)

---

## Question: Descriptive Statistics 1 - Sum

**Short Humorous Scenario:**
Martin has a list of numbers and wants to add them up. *"I have these numbers: 151, 123, 7, 1, -31, 0, 17, 9921, 9, 15, -1003, -3, 17. Can you calculate the sum?"* he asks.

**What they currently know:**
- Arrays
- Loops (`for`)
- Addition operator `+`
- Variable initialization

**The Task:**

1. Define an array `arr` containing all the numbers above
2. Define a variable `sum` and set it to 0
3. Using a loop, sum all the numbers in `arr` via the `sum` variable
4. Print `sum`
5. Compile and run the program

6. **PBL:** Martin asks: *"What is the sum of all positive numbers only?"*

**Hints:**
- Formula: $sum = x_0 + x_1 + \dots + x_{n-1} = \sum\_{t=0}^{n-1} x_t$
- Start with sum = 0
- Add each element: sum += arr[i]

**What you must never do:**
- Forget to initialize sum to 0
- Add array name directly
- Use wrong loop bounds

---

## Question: Descriptive Statistics 2 - Mean

**Short Humorous Scenario:**
Martin now wants to calculate the average of his numbers. *"I have the sum, but what's the average? Can you calculate that?"* he asks.

**What they currently know:**
- Arrays
- Loops
- Division operator `/`
- Sum calculation (from previous question)

**The Task:**

1. Use `descriptive1` as a starting point
2. Calculate the mean of all numbers: mean = sum / N
3. Store the mean in a variable
4. Compile and run the program from terminal and VS Code

5. **PBL:** Martin asks: *"Can you modify the program to calculate the mean of just the positive numbers?"*

**Hints:**
- Formula: $\bar{x} = \frac{1}{N} \sum\_{t=0}^{n-1} x_t$
- N is the number of elements
- Use array size: `sizeof(arr) / sizeof(arr[0])`

**What you must never do:**
- Divide by 0 (ensure N > 0)
- Use integer division when you want decimal result
- Forget to store the result

---

## Question: Descriptive Statistics 3 - Mean and Standard Deviation

**Short Humorous Scenario:**
Martin wants to analyze patient data statistically. *"I have measurements for age, height, and weight. Can you calculate mean and standard deviation for each?"* he asks.

**What they currently know:**
- Arrays (including 2D arrays)
- Loops
- Arithmetic operations
- Math libraries: `math.h`
- Functions: `sqrt()`, `pow()`

**The Task:**

1. Consider which libraries to use for x² and x (Hint: Is there a library with math functions?)
2. Define a 2D `float` array `measurements` with size 3x10
3. Define 2 1D arrays of length 3: `gennemsnit` (means) and `afvigelse` (standard deviations)
4. Define a 1D array `measurement_names` containing 3 strings: "Age", "Height", "Weight"
5. Calculate the mean of age, height, and weight from the following patient values:
   - Age: 23, 35, 67, 42, 54, 18, 29, 72, 31, 88
   - Height: 1.78, 1.62, 1.50, 1.90, 1.70, 1.55, 1.82, 1.60, 1.75, 1.85
   - Weight: 70.5, 55.3, 60.2, 85.7, 72.4, 50.1, 68.9, 64.0, 75.3, 90.2
6. Calculate standard deviation (skip this step until last)
7. Print descriptive table in terminal (mean (std)) for age, height, and weight
8. Compile and run the program

9. **PBL:** Martin asks: *"Can you extend this to calculate the median as well?"*

**Hints:**
- You've done this before
- Mean formula: $\bar{x} = \frac{1}{N} \sum\_{t=1}^{n} x_t$
- Standard deviation formula: $s = \sqrt{\frac{1}{N-1} \sum\_{t=1}^{n} (x_t - \bar{x})^2}$
- N_patients = 10, N_measurements = 3

**What you must never do:**
- Calculate mean incorrectly
- Use N instead of N-1 for standard deviation
- Forget to include math.h
