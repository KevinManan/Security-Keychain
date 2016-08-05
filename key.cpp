//
//  key.cpp
//  CMPE 130 Project
//
//  Created by Kevin Manan on 10/25/15.
//  Copyright © 2015 Computer Engineering. All rights reserved.
//

#include <stdio.h>
#include "key.h"

key::key(){
    password = "";
    title = "";
    description = "";
    clearance =0;
    
}
key::key (std::string p, std::string t, std::string d, int c, int loc){
    password = p;
    title = t;
    description = d;
    clearance =c;
    position = loc;
}
std::string key::getpassword(){
    return password;
}
std::string key::gettitle(){
    return title;
}
std::string key::getdescription(){
    return description;
}
int key::getclearance(){
    return clearance;
}
void key::operator=(const key& c1){
    password = c1.password;
    title= c1.title;
    description = c1.description;
    clearance= c1.clearance;
}