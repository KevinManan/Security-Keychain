//
//  Node.h
//  CMPE 130 Project
//
//  Created by Kevin Manan on 10/25/15.
//  Copyright © 2015 Computer Engineering. All rights reserved.
//
#ifndef Node_h
#define Node_h
#include "main.cpp"
#include "key.h"
class list;
class key;
class Node{
    friend class list;
private:
    /*
    std::string password;
    std::string title;
    std::string description;
    int clearance; //security level
    */
    key *info;//^stuff from up there; pointer is okay
    Node *next; //doubly linked
    Node *prev;
public:
    Node();
    Node(key);
    Node(key, Node*, Node*);
    key getinfo();
    Node* getNext();
    Node* getPrev();
};
#endif /* Node_h */
