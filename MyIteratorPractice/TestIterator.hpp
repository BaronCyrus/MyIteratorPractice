//
//  TestIterator.hpp
//  MyIteratorPractice
//
//  Created by hxsd on 16/6/7.
//  Copyright © 2016年 BaronCyrus. All rights reserved.
//

#ifndef TestIterator_hpp
#define TestIterator_hpp

#include <stdio.h>
#include <vector>
#include <iostream>

using std::vector;
using std::cout;
using std::endl;
using std::string;

template<class T>
class TestIterator
{
public:
   void check(const vector<int>& vec)
    {
        if(vec.empty())
        {
            cout << "size: 0, no values." << endl;
        }
        else
        {
            cout << "size: " << vec.size() << "; values:";
            for (auto it = vec.begin(); it != vec.end(); ++it)
            {
                printf("%d,", *it);
            }
            cout << "\b.\r" << endl;
        }
        
    }
    
    void check(const vector<string>& vec)
    {
        if(vec.empty())
        {
            printf("size: 0, no values.");
        }
        else
        {
            printf("size:%lu; values:",vec.size());
            for (auto it = vec.begin(); it != vec.end(); ++it) {
                if(it->empty())
                {
                    printf("(null)");
                }
                else
                {
                    printf("%s,",(*it).c_str());
                }
            }
            printf("\b.\n");
        }
    }
    
};










#endif /* TestIterator_hpp */
