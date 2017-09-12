//*****************************************************************
//  HashTable.cpp
//  HashTable
//
//  Created by Karlina Beringer on June 18, 2014.
//
//  This header file contains the Hash Table class definition.
//  Hash Table array elements consist of Linked List objects.
//*****************************************************************

#include "HashTable.h"
#include "GeneralHashFunctions.h"

// ���캯��
// Constructs the empty Hash Table object.
// Array length is set to 13 by default.
HashTable::HashTable( int tableLength )
{
    if (tableLength <= 0) tableLength = 13;
    array = new LinkedList[ tableLength ];
    length = tableLength;
}

// ��ϣ�������ú������滻Ϊ������ϣ����
// Returns an array location for a given item key.
int HashTable::hash( string itemKey )
{
    int value = 0;
    for (int i = 0; i < itemKey.length(); i++)
        value += itemKey[i];
    return (itemKey.length() * value) % length;

}

// ���ϣ���в���ֵ
// Adds an item to the Hash Table.
void HashTable::insertItem( Item * newItem )
{
    int index = hash( newItem -> key );
    array[ index ].insertItem( newItem );
}

// ɾ����ϣ���е�ֵ
// Deletes an Item by key from the Hash Table.
// Returns true if the operation is successful.
bool HashTable::removeItem( string itemKey )
{
    int index = hash( itemKey );
    return array[ index ].removeItem( itemKey );
}

// ��ѯ��ϣ��
// Returns an item from the Hash Table by key.
// If the item isn't found, a null pointer is returned.
Item * HashTable::getItemByKey( string itemKey )
{
    int index = hash( itemKey );
    return array[index].getItem( itemKey );
}

// ��ӡ��ϣ��
// Display the contents of the Hash Table to console window.
void HashTable::printTable()
{
    cout << "\nHash Table:\n";
    for (int i = 0; i < length; i++)
    {
        cout << "Bucket " << i+1 << ": ";
        array[i].printList();
    }
}

// ��ӡͳ��ֵ
// Prints a histogram illustrating the Item distribution.
void HashTable::printHistogram()
{
    cout << "\n\nHash Table Contains ";
    cout << getNumberOfItems() << " Items total\n";
    for (int i = 0; i < length; i++)
    {
        cout << i + 1 << ":\t";
        for (int j = 0; j < array[i].getLength(); j++)
            cout << " X";
        cout << "\n";
    }
}

// ��ȡ��ϣ��ĳ���
// Returns the number of locations in the Hash Table.
int HashTable::getLength()
{
    return length;
}

// ��ȡֵ�ĸ���
// Returns the number of Items in the Hash Table.
int HashTable::getNumberOfItems()
{
    int itemCount = 0;
    for (int i = 0; i < length; i++)
        itemCount += array[i].getLength();
    return itemCount;
}

// ��������
// De-allocates all memory used for the Hash Table.
HashTable::~HashTable()
{
    delete [] array;
}

//*****************************************************************
// End of File
//*****************************************************************

