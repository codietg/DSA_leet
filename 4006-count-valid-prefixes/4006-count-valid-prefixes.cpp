class Solution {
public:
    int countValidPrefixes(string s) {
     int diff=0;
        int countZ=0;
        int countO=0;
        int count=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='0') countZ++;
             else if(s[i]=='1') countO++;

             diff= abs(countZ-countO);
            if(diff<=1) count++;
        }
        
        return count;
    }
};