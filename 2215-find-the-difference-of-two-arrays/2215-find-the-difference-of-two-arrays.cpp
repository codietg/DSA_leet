class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        unordered_map<int,int>m1,m2;
        
        vector<int>v1,v2;

        for(int n:nums1){
            m1[n]++;
        }
        for(int m:nums2){
            m2[m]++;
        }

        for(auto &it:m1){
            if(m2.find(it.first)!=m2.end()){
                continue;
            }
            else
            v1.push_back(it.first);
        }
        for(auto &ip:m2){
            if(m1.find(ip.first)!=m1.end()){
                continue;
            }
            else
            v2.push_back(ip.first);
        }
        ans.push_back(v1);
        ans.push_back(v2);

        return ans;
    }
};