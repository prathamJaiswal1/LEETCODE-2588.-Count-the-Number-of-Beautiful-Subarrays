// Leetcode 2588
// difficulty : medium
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long beautifulSubarrays(vector<int>& v) {
         map<int,int>m;
         m[0]=1;
         int curr_xor=0;
         long long cnt=0;
         for(auto i:v){
            curr_xor^=i;
            cnt+=m[curr_xor];
            m[curr_xor]++;
         }
         return cnt;
    }
    int main(){
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            v.push_back(a);
        }
        cout<<beautifulSubarrays(v)<<endl;
        return 0;
    }   
};
