//
//  main.cpp
//  Leetcode292 Nim Game
//
//  Created by SD on 10/22/15.
//  Copyright © 2015 SD. All rights reserved.
//
//
//Problem
//You are playing the following Nim Game with your friend: There is a heap of stones on the table, each time one of you take turns to remove 1 to 3 stones. The one who removes the last stone will be the winner. You will take the first turn to remove the stones.
//
//Both of you are very clever and have optimal strategies for the game. Write a function to determine whether you can win the game given the number of stones in the heap.
//
//For example, if there are 4 stones in the heap, then you will never win the game: no matter 1, 2, or 3 stones you remove, the last stone will always be removed by your friend.

//Hints:
//1. Looking for the hint from the Question itself
//2. Do the problem backwards
//3. Consider special cases, in this case, 4 and multiples of 4 are all special cases
//4. Try spcific numbers to get a start

//Thoughts:
//When there are only 4 stones left, whonever takes the first turn will lose the game and the second turn
// will always win. If there are 8, 12, 16 (multiples of 4) stones... left, the same result happens.

#include <iostream>
using namespace std;

bool canWinNim(int n) {
    
    bool me;
    
    if(n%4 == 0){
        me = false;
    }
    
    else{
        me = true;
    }
    
    return me;
}

int main(int argc, const char * argv[]) {
    string ibuff,win;
    int stones;
    
    cout << "Please enter the number of stones in the heap: ";
    getline(cin, ibuff);
    stones = strtol(ibuff.c_str(), NULL, 10);
    if(!canWinNim(stones))
        win = "yes!";
    else
        win = "no!";
    cout << "\n";
    cout << "Can you win the game? " << win <<endl;
}
