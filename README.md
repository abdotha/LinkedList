# Linked List Implementation in C++

This repository provides a basic implementation of a linked list data structure in C++. The implementation includes functionality to insert elements at the beginning, end, or any position of the list, as well as functions to delete elements from the beginning, end, or any position. Additionally, it provides a function to display all the elements of the linked list.

## Getting Started

To use this linked list implementation in your C++ project, follow these steps:

1. **Download or Clone the Repository**: Download or clone this repository to your local machine.

2. **Include the Necessary Files**: Ensure that you include the necessary header and source files (`LinkedListClass.h`, `LinkedList.cpp`) in your project.

3. **Instantiate the LinkedList Object**: Create an object of the `LinkedList` class in your code to use the functionalities provided.

4. **Manipulate the Linked List**: Use the available member functions of the `LinkedList` class to manipulate the linked list according to your requirements.

## Usage

### Insertion Functions

1. `insertAtFirst(int value)`: Inserts a new element with the given value at the beginning of the linked list.
2. `insertAtLast(int value)`: Inserts a new element with the given value at the end of the linked list.
3. `insertAt(int position, int value)`: Inserts a new element with the given value at the specified position in the linked list.

### Deletion Functions

1. `deleteFromFirst()`: Deletes the first element of the linked list.
2. `deleteFromLast()`: Deletes the last element of the linked list.
3. `deleteAt(int position)`: Deletes the element at the specified position in the linked list.

### Display Function

1. `show()`: Displays all the elements of the linked list.

## Example

```cpp
#include <iostream>
#include "LinkedListClass.h"

using namespace std;

int main() {
    // Instantiate a LinkedList object
    LinkedList list;

    // Example usage
    list.insertAtLast(10);
    list.insertAtLast(20);
    list.insertAtFirst(5);
    list.insertAt(2, 15);

    cout << "Linked List: ";
    list.show();

    list.deleteFromFirst();
    list.deleteFromLast();
    list.deleteAt(1);

    cout << "After deletion: ";
    list.show();

    return 0;
}
