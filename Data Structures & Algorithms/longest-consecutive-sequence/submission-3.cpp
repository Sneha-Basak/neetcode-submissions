class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(),nums.end());
        int res=0;
        for(int num:seen){
            if(seen.find(num-1)==seen.end()){
                int streak = 1;
                while(seen.find(num+streak)!=seen.end()){
                    streak++;
                }
                res=max(res,streak);
            }
        }
        return res;
    }
};