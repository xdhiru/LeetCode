class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        if (nums.size()==1) return true;
        int prevgroupmax=-1, groupmax=nums[0], groupmin=nums[0];
        for (int i=1;i<nums.size();i++){
            if (__builtin_popcount(nums[i])==__builtin_popcount(nums[i-1])){
                groupmax=max(groupmax,nums[i]);
                groupmin=min(groupmin,nums[i]);
            }else{
                if (groupmin<prevgroupmax){ 
                    return false;
                }
                else{
                    if (prevgroupmax==-1){
                        prevgroupmax=groupmax;
                    }
                    else{
                        prevgroupmax=groupmax;
                    }
                }
                groupmax=nums[i];
                groupmin=nums[i];
            }
            if (groupmin<prevgroupmax) return false;
        }
        return true;
    }
};