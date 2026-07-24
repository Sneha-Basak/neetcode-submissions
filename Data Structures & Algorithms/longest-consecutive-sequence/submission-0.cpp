class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;
        unordered_set<int> seen(nums.begin(),nums.end());
        for(int num:nums){
            int streak = 0;
            while(seen.count(num)){
                streak++;
                num++;
            }
            res=max(res,streak);
        }
        return res;
    }
};
