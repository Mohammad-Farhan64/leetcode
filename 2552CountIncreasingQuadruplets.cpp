#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countQuadruplets(vector<int>& nums) {
   vector<long long> dp(nums.size(),0);
        int prev=0;
        long long ans=0;
        for(int i=1;i<nums.size();i++)
        {

            prev=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i])
                {
                    prev++;
                    ans+=dp[j];
                }
                else if(nums[j]>nums[i])
                {
                    dp[j]+=prev;
                }
            }
           
        }
         return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> nums={1,3,2,4,5};
    cout<<obj.countQuadruplets(nums);
}