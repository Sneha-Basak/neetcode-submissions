class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(),n=matrix[0].size();
        int srow=0,erow=m-1;
        int crow = -1;
        while(srow<=erow){
            int mrow = srow+(erow-srow)/2;
            if(matrix[mrow][0]<=target && target<=matrix[mrow][n-1])
            {
                crow=mrow;
                break;
            }
            else if(target>matrix[mrow][n-1]) srow=mrow+1;
            else erow=mrow-1;
        }
        if(crow==-1) return false;
        int start = 0,end=n-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(matrix[crow][mid] == target) return true;
            else if(target<matrix[crow][mid]) end = mid-1;
            else start = mid+1;
        }
        return false;
    }
};
