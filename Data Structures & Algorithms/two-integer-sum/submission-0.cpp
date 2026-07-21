class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> p;
        for(int i=0;i<nums.size();i++){
            int j = target - nums[i];
            if(p.find(j)!=p.end())
            return {p[j],i};
            p.insert({nums[i],i});
        }
        return {};
    }
};
