//
//  Node.cpp
//  CMPE 130 Project
//
//  Created by Kevin Manan on 10/25/15.
//  Copyright © 2015 Computer Engineering. All rights reserved.
//

#include "Node.h"
Node::Node(){
    key(); //i believe this is right.
    prev= NULL;
    next = NULL;
}
Node::Node(key k){
    //info = key(k.getpassword(), k.gettitle(), k.getdescription(), k.getclearance());
    info = &k;
}
Node::Node(key i, Node* n, Node* p){
    //info = key (i.getpassword(),i.gettitle(), i.getdescription(), i.getclearance());
    info= &i;
    prev= p;
    next = n;
}
key Node::getinfo(){
    return *info;
}
Node* Node::getNext(){
    return next;
}
Node* Node::getPrev(){
    return prev;
}