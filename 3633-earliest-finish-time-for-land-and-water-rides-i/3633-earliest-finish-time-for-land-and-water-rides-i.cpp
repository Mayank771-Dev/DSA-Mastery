class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int earliest=INT_MAX;
        int landrides=landStartTime.size();
        int waterrides=waterStartTime.size();
        for(int i=0;i<landrides;i++){
            for(int j=0;j<waterrides;j++){
                int landfirst=0;
                int waterfirst=0;
                if(landStartTime[i]+landDuration[i]<waterStartTime[j]){
                    landfirst=waterStartTime[j]+waterDuration[j];
                }
                else{
                    landfirst=landStartTime[i]+landDuration[i]+waterDuration[j];
                }
                if(waterStartTime[j]+waterDuration[j]<landStartTime[i]){
                    waterfirst=landStartTime[i]+landDuration[i];
                }
                else{
                    waterfirst=waterStartTime[j]+waterDuration[j]+landDuration[i];
                }
                int least=min(landfirst,waterfirst);
                earliest=min(earliest,least);
            }
        }
        return earliest;
    }
};