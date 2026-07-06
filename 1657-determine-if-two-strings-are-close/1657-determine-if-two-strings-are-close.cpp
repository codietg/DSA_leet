class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n= word1.length();
        int m= word2.length();

        vector<int>f1(26);
        vector<int>f2(26);
        
        if(m!=n) return false;

        for(int i=0;i<m;i++){
            char c1= word1[i];
            char c2= word2[i];

            int idx1= c1-'a';
            int idx2= c2-'a';

            f1[idx1]++;
            f2[idx2]++;

        }

        for(int i=0;i<26;i++){
            if(f1[i]!=0 && f2[i]!=0){
                continue;
            }
            if(f1[i]==0 && f2[i]==0) continue;
            else 
            return false;
        }

        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());
        if(f1==f2)  return true;
        else return false;
    }
};