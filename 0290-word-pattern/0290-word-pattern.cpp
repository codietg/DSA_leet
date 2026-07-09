class Solution {
public:
    bool wordPattern(string pattern, string s) {
          vector<string> words;
        stringstream ss(s);
        string word;
        
        while (ss >> word) {
            words.push_back(word);
        }
        
        if (words.size() != pattern.length()) {
            return false;
        }
        
        unordered_map<char, string> pToS;
        unordered_map<string, char> sToP;
        
        for (int i = 0; i < pattern.length(); i++) {
            char p = pattern[i];
            string w = words[i];
            
            if (pToS.count(p)) {
                if (pToS[p] != w) 
                  return false;
            } else if (sToP.count(w)) {
                if (sToP[w] != p) 
                  return false;
            } else {
                pToS[p] = w;
                sToP[w] = p;
            }
        }
        return true;
    }
};