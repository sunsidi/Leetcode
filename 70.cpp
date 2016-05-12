//
//  main.cpp
//  LeetCode 70 Climbing stairs
//
//  Created by SD on 10/26/15.
//  Copyright © 2015 SD. All rights reserved.
//

//1. Start from the easiest numbers, such as 1, 2, 3, 4... and then try to find patterns
//2. Be careful that 2+1, and 1+2 are considered as two different ways
//3. Try to find all the distinct ways manually:
//    1 : 1
//    2 : 1+1, 2
//    3 : 1+1+1，1+2, 2+1
//    4 : 1+1+1+1, 1+1+2, 1+2+1, 2+1+1, 2+2
//    5 : 1+1+1+1+1, 1+1+1+2, 1+1+2+1, 1+2+1+1, 2+1+1+1, 1+2+2, 2+1+2, 2+2+1
//    6 : 1+1+1+1+1+1, 1+1+1+1+2, 1+1+1+2+1, 1+1+2+1+1, 1+2+1+1+1, 2+1+1+1+1, 1+1+2+2, 1+2+1+2, 2+1+1+2, 1+2+2+1, 2+1+2+1, 2+2+1+1, 2+2+2
//4. The pattern is 1,2,3,5,8,13. If we add 1 at the beginning of the array, then we got 1,1,2,3,5,8,13, which are Fibonacci numbers

//Thoughts:
//1. Since the pattern is a1+a2=a3, then we have to save the previous numbers a1 and a2 to calculate a3
//2. Since this array start with 1, instead of 1,1, then the n=1 is a special case

#include <iostream>

using namespace std;


//int climbStairs(int n) {
//    
//    int count = 1;
//    while ((n - (2*count)) >= 0) {
//        count++;
//    }
//    return count;
//}
int climbStairs(int n) {
    if (n<=1){
        return n;
    }
    int last = 1, lastlast = 1;
    int now = 0;
    for(int i = 2; i <= n; i++)
    {
        now = last + lastlast;
        lastlast = last;
        last = now;
    }
    return now;
}
int main(int argc, const char * argv[]) {
    int n = 5, ways;
    ways = climbStairs(n);
    cout << "There are " << ways << " distinct ways.\n";
    return 0;
}

