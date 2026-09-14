class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mm;
        for(int i=0; i<nums.size(); i++)
        {
            mm[nums[i]]=i;
        }

        vector<int> ret;
        for(int i=0; i<nums.size(); i++)
        {
            if(mm.count(target-nums[i]) && i != mm[target-nums[i]])
            {
                ret.push_back(i);
                ret.push_back(mm[target-nums[i]]);
                cout<<mm[nums[i]];
                return ret;
            }
        }
        return ret;
    }
};
