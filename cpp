class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int prefSum=0,ans=0;
        unordered_map<int, int> lastOcc{{0,-1}};
        for(int i=0;i<nums.size();i++){
            prefSum+=nums[i]==1 ? 1 : -1;
            if(lastOcc.count(prefSum)) ans=max(ans,i-lastOcc[prefSum]);
            else lastOcc[prefSum]=i;
        }
        return ans;
    }
};
