// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top
#include <vector>
#include<iostream>

class Solution {
public:
    
    int climbStairs(int n) {
        std::vector<int> climb(n+1);
        climb[0] = 1;
        climb[1] = 2;
        for (int i = 2; i < n; i++){
            
            climb[i] = climb[i-1] + climb[i-2];
        }
        return climb[n-1];
    }
};

int main(){

Solution trial;

std::cout<<trial.climbStairs(10);

}