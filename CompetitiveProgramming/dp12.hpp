//
//  dp12.hpp
//  CompetitiveProgramming
//
//  Created by Ashutosh Pandey on 11/04/20.
//  Copyright © 2020 Ashutosh Pandey. All rights reserved.
//

#ifndef dp12_hpp
#define dp12_hpp

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <map>
#include <vector>
#include <stdio.h>
#include <algorithm>

using namespace std;
//this global varibale must be static to avoid linkage error
static long long  f[11111];
template<class T> T max(T a, T b, T c);

long long solveMaximum(vector<int>& data);

#endif /* dp12_hpp */
