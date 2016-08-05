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
    float threshold;
    int maxSize;
    int tableSize;
    int size;
    // LinkedHashEntry **table; //dafuq is this
    list **table; //maybe ^ means a double pointer of the list?s
    void resize();
    
public:
    HashMap();
    void setThreshold(float threshold);
    int get(int key);
    void put(int key, int value);
    
    
    void remove(int key);
    
    ~HashMap();

#endif /* HashMap_hpp */
