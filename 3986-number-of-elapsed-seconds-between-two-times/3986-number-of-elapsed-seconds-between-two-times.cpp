class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int diff=0;
        int h,m,s;
        int eh,em,es;
        char c;

        stringstream ss(startTime);
        ss>>h>>c>>m>>c>>s;
        stringstream s1(endTime);
        s1>>eh>>c>>em>>c>>es;

        int stats= h*3600 + m*60 + s;
        int ends= eh*3600 + em*60 + es;

        diff= ends-stats;
        return diff;
    }
};