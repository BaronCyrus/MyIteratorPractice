//
//  main.cpp
//  MyIteratorPractice
//
//  Created by hxsd on 16/6/7.
//  Copyright © 2016年 BaronCyrus. All rights reserved.
//

#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include "TestIterator.hpp"

using namespace std;
using std::vector;
using std::count;
using std::string;
using std::endl;

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<string>v5{10};
    vector<string> v4{10,"hi"};
    
    TestIterator<class T> p ;
    p.check(v3);
    p.check(v4);
    
    p.check(v5);
    
    
    vector<string> text{2,"hello"};
    
    for (auto it = text.begin(); it != text.end(); ++it) {
        for(auto& c : *it) c = toupper(c);
        printf("%s,",(*it).c_str());
    }
    printf("\n");
    
    
    return 0;
}
