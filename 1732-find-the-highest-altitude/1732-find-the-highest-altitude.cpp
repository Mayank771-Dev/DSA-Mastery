class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>altitudes;
        altitudes.push_back(0);
        int maxAltitude=0;
        for(int i=0;i<gain.size();i++){
            int sum=gain[i]+altitudes[altitudes.size()-1];
            altitudes.push_back(sum);
            maxAltitude=max(maxAltitude,sum);
        }
        return maxAltitude;
    }
};