//
//  key.h
//  CMPE 130 Project
//
//  Created by Kevin Manan on 10/25/15.
//  Copyright © 2015 Computer Engineering. All rights reserved.
//

#ifndef key_h
#define key_h
#include "main.cpp"
#include "Node.h"
#include "key.h"
class Node;
class list;
class key{
private:
    std::string password;
    std::string title;
    std::string description;
    int clearance; //security level
    int position; //keeps track of #. useful for the hash table.
public:
    key();
    key (std::string, std::string, std::string, int, int);
    std::string getpassword();
    std::string gettitle();
    std::string getdescription();
    int getclearance();
    void operator = (const key&);
};

#endif /* key_h */
