#include <iostream>
#include "classes\LinkedListClass.cpp"
using namespace std;
int main()
{
    LinkedList Test_list;
    Test_list.insertAtLast(8);
    Test_list.insertAtFirst(5);
    Test_list.insertAt(2, 7);
    Test_list.insertAt(3, 10);
    Test_list.deleteAt(2);
    Test_list.Show();
    
}

