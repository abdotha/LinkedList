#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};

class LinkedList
{
private:
    node* head;

public:
    int counter;
    LinkedList()
    {
        counter = 0;
        head = NULL;
    };
    void insertAtLast(int insert_data)
    {
        node* newNode = new node;
        newNode->data = insert_data;

        if (head == NULL)
        {
            head = newNode;
            newNode->next = NULL;
        }
        else
        {
            newNode->next = NULL;
            node* current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newNode;
        }
        counter++;
    }
    void insertAtFirst(int insert_data)
    {
        node* newNode = new node;
        newNode->data = insert_data;
        newNode->next = head;
        head = newNode;
        counter++;
    }
    void insertAt(int Location, int insert_data)
    {
        if (Location == 0)
            insertAtFirst(insert_data);
        else if (Location == counter)
            insertAtLast(insert_data);
        else if (Location < counter && Location>0)
        {
            node* newNode = new node;
            newNode->data = insert_data;
            node* current = head;
            for (int i = 1; i < Location; i++)
                current = current->next;

            newNode->next = current->next;
            current->next = newNode;
            counter++;

        }
        else
        {
            cout << "Out of range !!" << endl;
        }




    }
    void Show()
    {
        node* current = head;
        while (current != NULL)
        {
            cout << current->data << "\n";
            current = current->next;
        }
        cout << endl;
    }
    void deleteFromFirst()
    {
        if (head == NULL)
            cout << "The List is already empty" << endl;
        else if (counter >= 1)
        {
            node* copy = head;
            head = head->next;
            delete copy;
            counter--;
        }

    }
    void deleteFromLast()
    {
        if (head == NULL)
           cout << "The List is already empty" << endl;
        else if (counter == 1)
        {
            node* copy = head;
            head = NULL;
            delete copy;
        }
        else if (counter > 1)
        {
            node* current = head;
            for (int i = 2; i < counter; i++)
                current = current->next;

            node* p = current->next;
            current->next = NULL;
            delete p;
            counter--;
        }
    }
    void deleteAt(int index)
    {
        if (index == 0)
            void deleteFromFirst();
        else if (index == counter)
            void deleteFromLast();
        else if (index < counter && index>0)
        {
            node* current = head;
            for (int i = 1; i < index; i++)
                current = current->next;

            node* p = current->next;
            current->next = p->next;
            delete p;
        }
        else
        {
            cout << "Out of range !!" << endl;
        }
        
    }
};