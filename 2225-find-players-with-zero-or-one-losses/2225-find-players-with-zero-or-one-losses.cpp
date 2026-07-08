class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp;

        for(int i=0;i<matches.size();i++){
            int loser= matches[i][1];

            mp[loser]++;
        }

        vector<int>ntlst;
        vector<int>lstonce;

        for(int i=0;i<matches.size();i++){
            int winner= matches[i][0];
            int loser= matches[i][1];

            if(mp.find(winner)==mp.end()){
                ntlst.push_back(winner);
                mp[winner]=2;
            }

            if(mp[loser]==1){
                lstonce.push_back(loser);
            }
        }
        sort(ntlst.begin(),ntlst.end());
        sort(lstonce.begin(),lstonce.end());

        return {ntlst,lstonce};
    }
};