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
#include "Graph.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    //just make cin and cout as fact as scanf and printf
    ios::sync_with_stdio(0);
    int n,input;
    cin >> n;
    BST bs;
    for (int i= 0; i < n; i++) {
        cin>>input;
        //create a new struct by allocating memory in the heap
        BSTnode * node = new BSTnode;
        //full the data in the tree
        node->data = input;
        node->left = nullptr;
        node->right = nullptr;
        node->parent = nullptr;
        //go for the insertion
        bs.Insert(node);
    }
    int key;
    cin >> key;
    BSTnode * node = bs.TreeSearch(key);
    if (node != nullptr) {
        cout << " Key exists in the tree " << node->data << endl;
    }
    else
        cout << " No Such Key found in Tree\n";
    
    cout << "minimum key in the tree is " << bs.TreeMin()->data<< endl;
    cout << "maximum key in the tree is " << bs.TreeMax()->data<<endl;

    return 0;
}
