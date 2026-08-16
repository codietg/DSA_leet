class Solution {
public:
    int diff(char a, char b){
        int d= abs(a-b);
        return min(d,26-d);
    }
    int minOperations(string s) {
        string dori= s;
        int n= s.size();
        int ans= INT_MAX;

        for(int i=0;i<n;i++){
            string rot= s.substr(i) + s.substr(0,i);
            int cost=0;

            for(int j=0;j<n/2;j++){
                cost+= diff(rot[j], rot[n-1-j]);
            }
            ans= min(ans, cost+i);
        }
        return ans;
    }
};