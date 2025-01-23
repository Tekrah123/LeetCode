class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i,k;
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        k = nums.size();
        return k;
    }
};