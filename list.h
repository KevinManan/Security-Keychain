//
//  list.h
//  CMPE 130 Project
//
//  Created by Kevin Manan on 10/25/15.
//  Copyright © 2015 Computer Engineering. All rights reserved.
//
#ifndef list_h
#define list_h
#include "Node.h"
#include "key.h"
class Node;
class key;
class list{
private:
    Node *root;
    Node *tail;
public:
    list();
    list(key);
    ~list(); //destructor
    void traverse();
    void insert(key);
    //testing

};
#endif /* list_h */
