//
//  HashMap.hpp
//  CMPE 130 Project
//
//  Created by Kevin Manan on 11/1/15.
//  Copyright © 2015 Computer Engineering. All rights reserved.
//

#ifndef HashMap_h
#define HashMap_h
#include "Node.h"
#include "key.h"
#include "list.h"
class list;

const int DEFAULT_TABLE_SIZE = 128;

class HashMap {
private:
    float threshold; //the threshold of the hashing.
    int maxSize; //maximum size of table? what? 
    int tableSize; //size of the table. 
    int size; //current size of 
    list **table; //this is the link list?
    void resize(); //resizing function
    
public:
    HashMap(); //constructor
    void setThreshold(float threshold); 
    int get(int key);
    void put(int key, int value);
    
    
    void remove(int key); //removal key. 
    
    ~HashMap();

#endif /* HashMap_h */
