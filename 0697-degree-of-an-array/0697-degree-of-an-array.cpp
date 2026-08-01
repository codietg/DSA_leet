class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>m;

        for(int num: nums){
            m[num]++;
        }
        int maxiE=0;
        int maxi= INT_MAX;
        for(auto &it: m){
            maxiE= max(maxiE,it.second);
        }
        for(auto x: m){
            if(maxiE== x.second){
                int l=0, r= nums.size()-1;
                while(l<r+1) { if(nums[l]==x.first) break; l++;}
                while(l<r) {if(nums[r]== x.first) break; r--;}
                maxi= min(maxi,r-l+1);
            }
        }
        return maxi;
    }
};