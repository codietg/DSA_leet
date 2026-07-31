class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s;
        int maxi=0;
        for(int num:nums){
            s.insert(num);
        }
       if(s.size()>=3){
        int thirdI= s.size()-3;
        auto third_max= next(s.begin(),thirdI);
        return *third_max;
       }
       return *--s.end();
    }
};