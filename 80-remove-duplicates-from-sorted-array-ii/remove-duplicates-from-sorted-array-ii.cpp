class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i,k,count=1;
        for(i=1;i<nums.size();i++)
        {
            
            if(nums[i-1]==nums[i])
            {
                count = count+1;
            }
            else
            {
                count=1;
            }
            
            if(count>2)
            {
                nums.erase(nums.begin()+i);
                i--;
            }
            
            
        }
        k = nums.size();  
        return k;
    }
    
};