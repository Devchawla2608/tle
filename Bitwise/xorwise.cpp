// In order to celebrate Twice's 5th anniversary, Tzuyu and Sana decided to play a game.

// Tzuyu gave Sana two integers a
//  and b
//  and a really important quest.

// In order to complete the quest, Sana has to output the smallest possible value of (a⊕x
// ) + (b⊕x
// ) for any given x
// , where ⊕
//  denotes the bitwise XOR operation.

// Input
// Each test contains multiple test cases. The first line contains the number of test cases t
//  (1≤t≤104
// ). Description of the test cases follows.

// The only line of each test case contains two integers a
//  and b
//  (1≤a,b≤109
// ).

// Output
// For each testcase, output the smallest possible value of the given expression.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a , b;
        cin>>a>>b;
        int val = 0;
        for(int i = 0 ;i<31 ; i++){
            if((a&(1<<i)) != (b&(1<<i))){
                val = val | (1<<i);
            }
        }
        cout<<val<<endl;
    }
}

Time Complexity : O(31)*O(t)
Space Complexity : O(1)