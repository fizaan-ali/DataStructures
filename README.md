# DataStructures

A comprehensive collection of Data Structure and Algorithm implementations in C++ for learning and reference.

## Overview

This repository contains implementations of fundamental data structures and algorithms that form the foundation of computer science. Each file demonstrates concepts through practical C++ code with clear examples and use cases.

## Tech Stack

- **Language**: C++
- **Compiler**: g++ or clang++
- **Standard**: C++11 and later

## Directory Structure

The repository is organized into logical categories:

- **Arrays**: Basic array operations and 2D arrays
- **Linked Lists**: Singly, Doubly, and Circular linked lists
- **Trees**: Binary Trees, Binary Search Trees, AVL Trees, Balanced Trees
- **Queues**: Standard Queues, Priority Queues, Circular Queues
- **Stacks**: Stack implementations and applications
- **Sorting**: Bubble Sort, Insertion Sort, Selection Sort, Shell Sort
- **Searching**: Binary Search Tree operations, DFS, BFS

## Topics Covered

### Linear Structures
- Array operations (insertion, deletion, searching)
- Stack implementation (decimal to binary conversion)
- Queue variants (standard, circular, priority)
- Linked Lists (singly, doubly, circular)

### Non-Linear Structures
- Binary Trees (insertion, deletion, traversal)
- Binary Search Trees (BST operations)
- AVL Trees and Balanced Trees
- Tree Traversal (BFS, DFS)

### Algorithms
- Sorting algorithms (Bubble, Insertion, Selection, Shell)
- Graph traversal (BFS, DFS)
- Tree searching and traversal

## Compilation

To compile any C++ file:

```bash
g++ -o output_name filename.cpp
```

Or with more strict compiler flags:

```bash
g++ -Wall -Wextra -std=c++11 -o output_name filename.cpp
```

## Usage Examples

### Compiling and running a specific algorithm
```bash
g++ -o stack stack.cpp
./stack
```

### Compiling with optimizations
```bash
g++ -O2 -Wall -o binary_search_tree binary_search_tree.cpp
./binary_search_tree
```

## Key Files

- `array.cpp` - Basic array operations and demonstrations
- `linked_list.cpp` - Singly linked list implementation
- `doubly_linked_list.cpp` - Doubly linked list with bidirectional traversal
- `circular_linked_list.cpp` - Circular linked list implementation
- `stack.cpp` - Stack operations
- `queue.cpp` - Queue implementation
- `binary_search_tree.cpp` - BST with insert, delete, search
- `balanced_and_avl_trees.cpp` - Self-balancing trees
- `bfs.cpp` / `dfs.cpp` - Graph traversal algorithms

## Learning Focus

This repository is ideal for:
- Understanding fundamental data structures
- Learning C++ implementation patterns
- Preparing for coding interviews
- Algorithm study and practice
- Computer Science fundamentals review

## Prerequisites

- GCC/G++ compiler (or any C++ compiler)
- Basic knowledge of C++ syntax
- Understanding of data structure concepts

## License

MIT License - See LICENSE file for details
