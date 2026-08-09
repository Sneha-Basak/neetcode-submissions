class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j = i+1,k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]<0) j++;
                else if(nums[i]+nums[j]+nums[k]>0) k--;
                else{
                    vector<int> triplets ={nums[i],nums[j],nums[k]};
                    res.push_back(triplets);
                    j++;
                    k--;
                    while(j<k&&nums[j]==nums[j-1]) j++;
                }
            }
        }
        return res;
    }
};
