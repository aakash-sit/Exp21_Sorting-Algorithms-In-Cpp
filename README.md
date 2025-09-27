### 📊 Experiment 21: Fundamental Sorting Algorithms 🛠️

This repository contains C++ implementations and explanations for three fundamental comparison-based sorting algorithms: **Selection Sort**, **Bubble Sort**, and **Quick Sort**. These algorithms showcase distinct approaches to arranging data in ascending order and highlight the trade-offs between implementation simplicity and time efficiency.

-----

### 🎯 Aim

To understand, implement, and analyze the working principles of **Selection Sort**, **Bubble Sort**, and **Quick Sort** algorithms in C++.

-----

### 💡 Theory: Sorting Fundamentals

Sorting is the process of arranging a collection of items into a specific order. The efficiency of a sorting algorithm is primarily measured by its **time complexity**—how the execution time scales with the number of items ($N$).

#### **Classification of Sorting Algorithms**

| Algorithm | Method | Time Complexity (Avg.) | Space Complexity | Stability | In-Place |
| :--- | :--- | :--- | :--- | :--- | :--- |
| **Selection Sort** | Selection | $O(N^2)$ | $O(1)$ | Unstable | Yes |
| **Bubble Sort** | Exchange | $O(N^2)$ | $O(1)$ | Stable | Yes |
| **Quick Sort** | Divide & Conquer | $O(N \log N)$ | $O(\log N)$ | Unstable | Yes (usually) |

-----

### 1\. Selection Sort

**Concept:** **Selection Sort** divides the array into two regions: the **sorted** part (left) and the **unsorted** part (right). In each pass, it finds the **smallest** element in the unsorted region and swaps it with the leftmost element of that region, effectively expanding the sorted region by one element.

  * **Key Action:** Finding the minimum element in the unsorted subarray.
  * **Time Complexity ($O(N^2)$):** The algorithm performs $N$ passes, and in each pass, it performs up to $N$ comparisons, leading to a quadratic time complexity regardless of the initial state of the array.

#### **Algorithm: Selection Sort**

1.  **Start.**
2.  **Loop** from $i=0$ to $N-2$: (Iterate through the array boundary)
      * Set $\text{min\_index} = i$.
      * **Inner Loop** from $j=i+1$ to $N-1$: (Find the minimum in the unsorted subarray)
          * If $\text{arr}[j] < \text{arr}[\text{min\_index}]$, update $\text{min\_index} = j$.
      * Swap $\text{arr}[i]$ with $\text{arr}[\text{min\_index}]$.
3.  **End.**

#### **Flowchart: Selection Sort**

```mermaid
graph TD
    A[Start] --> B(Outer Loop i=0 to N-2);
    B --> C(min_index = i);
    C --> D{Inner Loop j=i+1 to N-1};
    D -- Yes --> E{arr[j] < arr[min_index]?};
    E -- Yes --> F[min_index = j];
    E -- No --> D;
    F --> D;
    D -- No --> G[Swap arr[i] and arr[min_index]];
    G --> B;
    B --> H[End];
```

-----

### 2\. Bubble Sort

**Concept:** **Bubble Sort** repeatedly steps through the list, compares **adjacent** elements, and swaps them if they are in the wrong order. The largest unsorted element effectively "bubbles up" to its correct position at the end of the array in each pass.

  * **Key Action:** Repeatedly swapping adjacent elements.
  * **Time Complexity ($O(N^2)$):** Like Selection Sort, it has a quadratic time complexity in the average and worst case. However, its best-case time is $O(N)$ if the array is already sorted and an optimization flag is used (not implemented here but common).

#### **Algorithm: Bubble Sort**

1.  **Start.**
2.  **Outer Loop** from $i=0$ to $N-2$: (Number of passes)
      * **Inner Loop** from $j=0$ to $N-i-2$: (Compare adjacent elements)
          * **If $\text{arr}[j] > \text{arr}[j+1]$:**
              * Swap $\text{arr}[j]$ and $\text{arr}[j+1]$.
3.  **End.**

#### **Flowchart: Bubble Sort**

```mermaid
graph TD
    A[Start] --> B(Outer Loop i=0 to N-2);
    B --> C(Inner Loop j=0 to N-i-2);
    C --> D{arr[j] > arr[j+1]?};
    D -- Yes --> E[Swap arr[j] and arr[j+1]];
    E --> C;
    D -- No --> C;
    C --> B;
    B --> F[End];
```

-----

### 3\. Quick Sort

**Concept:** **Quick Sort** is a highly efficient, recursive algorithm based on the **divide-and-conquer** strategy.

1.  **Divide (Partition):** Pick an element (the **pivot**) and partition the array around it.
2.  **Conquer (Recurse):** Recursively apply Quick Sort to the subarray of elements smaller than the pivot and the subarray of elements greater than the pivot.

<!-- end list -->

  * **Key Action:** The **Partition** step, which places the pivot in its final position, is the most crucial part.
  * **Time Complexity ($O(N \log N)$):** Due to the effective halving of the problem size in each step, it's one of the fastest general-purpose sorting algorithms in practice. However, selecting a poor pivot can degrade performance to $O(N^2)$.

#### **Algorithm: Quick Sort (Recursive)**

1.  **Start.**
2.  **Base Case:** If $\text{low} < \text{high}$:
      * Call $\text{partition}(\text{arr}, \text{low}, \text{high})$ to get the pivot index, $\text{pi}$.
      * Recursively call $\text{quickSort}(\text{arr}, \text{low}, \text{pi}-1)$ (Sort left subarray).
      * Recursively call $\text{quickSort}(\text{arr}, \text{pi}+1, \text{high})$ (Sort right subarray).
3.  **End.**

#### **Flowchart: Quick Sort**

```mermaid
graph TD
    A[Start QuickSort(low, high)] --> B{low < high?};
    B -- Yes --> C[pi = Partition(low, high)];
    C --> D[QuickSort(low, pi-1)];
    D --> E[QuickSort(pi+1, high)];
    E --> F[End];
    B -- No --> F;
```

-----

### ⚙️ Tools Used

  * **Language**: C++
  * **Compiler**: g++
  * **Environment**: Any C++ IDE (e.g., VS Code, Code::Blocks)
