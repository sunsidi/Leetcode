//
//  main.cpp
//  LeetCode 38 Count and Say
//
//  Created by SD on 10/29/15.
//  Copyright © 2015 SD. All rights reserved.
//

//1. Find the sequence manually:
//    1, 11, 21, 1211, 111221, 312211, 13112221
//2. Count the number, and put the quantity in front of the number to form the next sequence

#include <iostream>
using namespace std;

//string CountnSay(){
//    string initial = "1", newstring;
//    char start = initial[0];
//    int count = 0, k = 0;
//    for (int i = 0; i < initial.length(); i++) {
//        if(start == initial[i])
//        {
//            count++;
//        }
//        else if(start != initial[i])
//        {
//            newstring[k] = count;
//            newstring[k++] = start;
//            k++;
//            start = initial[i];
//            count = 1;
//            if (i == initial.length()-1) {
//                newstring[k] = count;
//                newstring[k++] = start;
//                initial = newstring;
//            }
//        }
//    }
//    
//    return newstring;
//}

int main(int argc, const char * argv[]) {
    char buf[4];
    strcpy(buf, "It works");
    printf("equal\n", buf);
    
}


