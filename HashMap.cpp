//
//  HashMap.cpp
//  CMPE 130 Project
//
//  Created by Kevin Manan on 11/1/15.
//  Copyright © 2015 Computer Engineering. All rights reserved.
//

#include "HashMap.h"

void HashMap::resize(){
    int oldTableSize = tableSize; 
    tableSize *= 2; //doubles the size of the table.
    maxSize = (int) (tableSize * threshold);
    LinkedHashEntry **oldTable = table;
    table = new LinkedHashEntry*[tableSize];
    for (int i = 0; i < tableSize; i++)
        table[i] = NULL;
    size = 0;
    for (int hash = 0; hash < oldTableSize; hash++)
        if (oldTable[hash] != NULL) {
            LinkedHashEntry *oldEntry;
            LinkedHashEntry *entry = oldTable[hash];
            while (entry != NULL) {
                put(entry->getKey(), entry->getValue());
                oldEntry = entry;
                entry = entry->getNext();
                delete oldEntry;
            }
        }
    delete [] oldTable;
}
    HashMap::HashMap() {
        threshold = 0.75f;
        maxSize = 96;
        tableSize = DEFAULT_TABLE_SIZE;
        size = 0;
        table = new LinkedHashEntry*[tableSize];
        for (int i = 0; i < tableSize; i++)
            table[i] = NULL;
    }
    
    void HashMap::setThreshold(float threshold) {
        this->threshold = threshold;
        maxSize = (int) (tableSize * threshold);
    }
    
    int HashMap::get(int key) {
        int hash = (key % tableSize);
        if (table[hash] == NULL)
            return -1;
        else {
            LinkedHashEntry *entry = table[hash];
            while (entry != NULL && entry->getKey() != key)
                entry = entry->getNext();
            if (entry == NULL)
                return -1;
            else
                return entry->getValue();
        }
    }


    void HashMap::put(int key, int value) {
        int hash = (key % tableSize);
        if (table[hash] == NULL) {
            table[hash] = new LinkedHashEntry(key, value);
            size++;
        } else {
            LinkedHashEntry *entry = table[hash];
            while (entry->getNext() != NULL)
                entry = entry->getNext();
            if (entry->getKey() == key)
                entry->setValue(value);
            else {
                entry->setNext(new LinkedHashEntry(key, value));
                size++;
            }
        }
        if (size >= maxSize)
            resize();
    }


        void HashMap::remove(int key) {
        int hash = (key % tableSize);
        if (table[hash] != NULL) {
            LinkedHashEntry *prevEntry = NULL;
            LinkedHashEntry *entry = table[hash];
            while (entry->getNext() != NULL && entry->getKey() != key) {
                prevEntry = entry;
                entry = entry->getNext();
            }
            if (entry->getKey() == key) {
                if (prevEntry == NULL) {
                    LinkedHashEntry *nextEntry = entry->getNext();
                    delete entry;
                    table[hash] = nextEntry;
                } else {
                    LinkedHashEntry *next = entry->getNext();
                    delete entry;
                    prevEntry->setNext(next);
                }
                size--;
            }
        }
    }