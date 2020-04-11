//
//  LevenshteinDistance.cpp
//  CompetitiveProgramming
//
//  Created by Ashutosh Pandey on 09/04/20.
//  Copyright © 2020 Ashutosh Pandey. All rights reserved.
//

#include "LevenshteinDistance.hpp"
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <string>
#include <algorithm>
#define MAX4 1000
using namespace std;


int maxOperation(string source, string target){
    int dp4[MAX4][MAX4];
    int len1 = static_cast<int>(source.length());
    int len2 = static_cast<int>(target.length());
    
    int cost;
    
    for (int i = 0; i<len1; i++) {
        for (int j=0; j<len2; j++) {
            if(source[i] == target[j])
                cost = 0;
            else
                cost = 1;
            dp4[i+1][j+1] = min(min(dp4[i+1][j] + 1, dp4[i][j+1] + 1), dp4[i-1][j-1] + cost);
        }
    }
    return 0;
}
