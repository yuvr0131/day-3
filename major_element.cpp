class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        n/=2;
        for(auto it:mpp)
        {
            if(it.second>n)
            {
                return it.first;
            }
        }
        return 0;
    }
};