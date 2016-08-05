//
//  list.cpp
//  CMPE 130 Project
//
//  Created by Kevin Manan on 10/27/15.
//  Copyright © 2015 Computer Engineering. All rights reserved.
//

#include <stdio.h>
#include "list.h"
list::list(){
    root = tail= NULL; //empty list
    
}
list::list(key k){
    root = new Node(k);
    root = tail; //only when the key just started.
}
list::~list(){

}
void list::traverse(){
    
    Node* head = root;
    if(head == NULL){
        std::cout <<"The list is empty" << std::endl;
        //create new node
        //insert();
    }else{
        
    }
}
void list::insert(key obj){
    Node* temp = new Node(); //creates new node.
    if(root == NULL){
        std::cout <<"The list is empty" << std::endl;
        root = temp;
        tail = root;
        root->info = &obj;//puts the object into temp.
        root->next = NULL;
        root->prev = NULL;
        tail ->next = NULL;
        tail ->prev = NULL;
    }else{//insert in front
        temp->next = root;
        root->prev = temp;
        root = temp; //link then move root
        root->prev = NULL;
    }
}