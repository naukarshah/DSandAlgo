//
//  main.cpp
//  CompetitiveProgramming
//
//  Created by Ashutosh Pandey on 09/04/20.
//  Copyright © 2020 Ashutosh Pandey. All rights reserved.
//

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include "RBLtree.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    //just make cin and cout as fact as scanf and printf
    ios::sync_with_stdio(0);
    int n,input;
    cin >> n;
     RBT _rbt;
    for (int i= 0; i < n; i++) {
        cin>>input;
        //create a new struct by allocating memory in the heap
        RBTnode * node = new RBTnode;
        //full the data in the tree
        node->color = _rbt.BLACK;
        node->key = input;
        node->parent = nullptr;
        node->left = nullptr;
        node->right = nullptr;
        _rbt.Insertion(node);
    }
    
    _rbt.InorderTraversal(_rbt.root);

    return 0;
}
