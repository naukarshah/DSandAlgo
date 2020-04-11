//
//  Graph.hpp
//  CompetitiveProgramming
//
//  Created by Ashutosh Pandey on 11/04/20.
//  Copyright © 2020 Ashutosh Pandey. All rights reserved.
//

#ifndef Graph_hpp
#define Graph_hpp
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <stdio.h>


//a binary tree have data, left, right pointer;
struct BSTnode{
    int data;
    BSTnode *left;
    BSTnode *right;
    BSTnode *parent;
};

class BST{
    BSTnode *head;
public:
    //constructor initialize all the essential nodes to null
    BST(){
        head = nullptr;
    }
    
    void Insert(BSTnode*);
    BSTnode* TreeSearch(int key);
    BSTnode* TreeMin();
    BSTnode* TreeMax();
    BSTnode* TreeSuccessor(BSTnode*);
};


#endif /* Graph_hpp */
