//This is a Solution of leetcode's medium lvl question solved using C++
//Question- 137. Single Number II

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ar[32]{0};
        for(int i=0;i<nums.size();i++)
        {
            for(int j=31;j>=0;j--)
            {
                if(nums[i]&(1<<j))    ar[j]++;
            }
        }
        
        long long int ans=0;
        for(int i=0;i<32;i++)
        {
            if(ar[i]%3!=0) ans+=(1<<i);
        }
        
        return ans;
    }
};
