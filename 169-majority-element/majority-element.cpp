class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int i,n = nums.size();
        int count = 1;
        if(is_sorted(nums.begin(), nums.end()))
        {
            cout<<"";
        }
        else
        {
            sort(nums.begin(), nums.end());
        }
        
        if(n==1)
        {
            return nums[0];
        }
        else
        {
            for(i=1;i<n;i++)
            {
                if(nums[i-1]==nums[i])
                {
                    count++;
                    if(count>n/2)
                    {
                        return nums[i-1];
                    }
                }
                else
                {
                    count = 1;
                }
            }
            
        }
            
        return 0;;
    }
};