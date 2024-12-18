class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        int n = nums.size();
        if(k>0)
        {
        sort(nums.begin(), nums.end(),greater<int>());
        return nums[k-1];
        }
        return -1;
    }
    
};