class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m1;
        for(int n:arr)
        {
            m1[n]++;
        }

        unordered_set<int>s;
        for(auto &it : m1){
            if(s.count(it.second)){
                return false;
            }
            s.insert(it.second);
        }
        return true;
    }
};