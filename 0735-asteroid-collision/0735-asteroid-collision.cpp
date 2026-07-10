class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>s;

        for(auto &a: asteroids){
            
            while(!s.empty() && a<0 && s.top()>0){
                int sum = a + s.top();
                if(sum<0){
                    s.pop();
                }
                else if(sum>0){
                    a=0;
                }
                else{
                    // its the case when sum=0
                    s.pop();
                    a=0;
                }
            }
            if(a!=0){
                s.push(a); 
                //happens only in the case of sum<0 when a>0 and treat as abs value of a
            }
        }

        int siz= s.size();
        vector<int>ans(siz);

        int i=siz-1;
        while(!s.empty()){
            ans[i]=s.top();
            s.pop();
            i--;
        }
        return ans;
    }
};