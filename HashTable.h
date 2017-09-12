//*****************************************************************
//  HashTable.h
//  HashTable
//
//  Created by Karlina Beringer on June 18, 2014.
//
//  This header file contains the Hash Table class declaration.
//  Hash Table array elements consist of Linked List objects.
//*****************************************************************

#ifndef HashTable_h
#define HashTable_h

#include "LinkedList.h"

//*****************************************************************
// Hash Table objects store a fixed number of Linked Lists.
//*****************************************************************
class HashTable
{
private:
    
	// ����
    // Array is a reference to an array of Linked Lists.
    LinkedList * array; 
    
	// ��ϣ����ĳ���
    // Length is the size of the Hash Table array.
    int length;
    
	// ��ϣ���������������ֵ
    // Returns an array location for a given item key.
    int hash( string itemKey );
    
public:
    
	// ���캯��
    // Constructs the empty Hash Table object.
    // Array length is set to 13 by default.
    HashTable( int tableLength = 13 );
    
	// ���ϣ���в���ֵ
    // Adds an item to the Hash Table.
    void insertItem( Item * newItem );
    
	// ɾ����ϣ���е�ֵ
    // Deletes an Item by key from the Hash Table.
    // Returns true if the operation is successful.
    bool removeItem( string itemKey );
    
	// ��ѯ��ϣ��
    // Returns an item from the Hash Table by key.
    // If the item isn't found, a null pointer is returned.
    Item * getItemByKey( string itemKey );
    
	// ��ӡ��ϣ��
    // Display the contents of the Hash Table to console window.
    void printTable();
    
	// ��ӡͳ��ͼ
    // Prints a histogram illustrating the Item distribution.
    void printHistogram();
    
    // Returns the number of locations in the Hash Table.
    int getLength();
    
	// ��ȡitems������
    // Returns the number of Items in the Hash Table.
    int getNumberOfItems();
    
	// �����������ͷŻ���
    // De-allocates all memory used for the Hash Table.
    ~HashTable();
};

#endif

//*****************************************************************
// End of File
//*****************************************************************



