class Solution 
{
public:
  vector<int> twoSum(vector<int>&nums,int target)
  {
    unordered_map<int,int>seen;
    for (int i=0;i<nums.size();i++)
    {
        int current=nums[i];
        int need=target-current;
        if(seen.count(need))
        {
            return{seen[need],i};
        }
        seen[current]=i;
    }
    return{};
  }
};