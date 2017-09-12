//*****************************************************************
//  LinkedList.h
//  HashTable
//
//  Created by Karlina Beringer on June 16, 2014.
//
//  This header file contains the Linked List class declaration.
//  Hash Table array elements consist of Linked List objects.
//*****************************************************************

#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>
#include <string>
using namespace std;

//*****************************************************************
// List items are keys with pointers to the next item.
//*****************************************************************
struct Item
{
    string key;
    Item * next;
};

//*****************************************************************
// Linked lists store a variable number of items.
//*****************************************************************
class LinkedList
{
private:
	// �����ͷ
    // Head is a reference to a list of data nodes.
    Item * head;
    
	// ������
    // Length is the number of data nodes.
    int length2;
    
public:
	// ���캯��
    // Constructs the empty linked list object.
    // Creates the head node and sets length to zero.
    LinkedList();
    
	// ����ֵ
    // Inserts an item at the end of the list.
    void insertItem( Item * newItem );
    
	// ɾ��ֵ
    // Removes an item from the list by item key.
    // Returns true if the operation is successful.
    bool removeItem( string itemKey );
    
	// ��ѯ����
    // Searches for an item by its key.
    // Returns a reference to first match.
    // Returns a NULL pointer if no match is found.
    Item * getItem( string itemKey );
    
	// ��ӡ����
    // Displays list contents to the console window.
    void printList();
    
	// ��ȡ����ĳ���
    // Returns the length of the list.
    int getLength();
    
	// �����������ͷ��ڴ�
    // De-allocates list memory when the program terminates.
    ~LinkedList();
};

#endif

//*****************************************************************
// End of File
//*****************************************************************
 
