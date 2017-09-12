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
	// 链表表头
    // Head is a reference to a list of data nodes.
    Item * head;
    
	// 链表长度
    // Length is the number of data nodes.
    int length2;
    
public:
	// 构造函数
    // Constructs the empty linked list object.
    // Creates the head node and sets length to zero.
    LinkedList();
    
	// 插入值
    // Inserts an item at the end of the list.
    void insertItem( Item * newItem );
    
	// 删除值
    // Removes an item from the list by item key.
    // Returns true if the operation is successful.
    bool removeItem( string itemKey );
    
	// 查询链表
    // Searches for an item by its key.
    // Returns a reference to first match.
    // Returns a NULL pointer if no match is found.
    Item * getItem( string itemKey );
    
	// 打印链表
    // Displays list contents to the console window.
    void printList();
    
	// 获取链表的长度
    // Returns the length of the list.
    int getLength();
    
	// 析构函数，释放内存
    // De-allocates list memory when the program terminates.
    ~LinkedList();
};

#endif

//*****************************************************************
// End of File
//*****************************************************************
 
