class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=-1;
        int n= nums.size();
        vector<int>hash(n+1,0);

        for(int i=0;i<n;i++){
            hash[nums[i]]=1;
        }
        for(int j=0;j<n+1;j++){
            if(hash[j]==0) return ans=j;
        }
        return ans;
    }
};