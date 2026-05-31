class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long sum=mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>sum){
                return false;
            }
            else{
                sum+=asteroids[i];
            }
        }
        return true;
    }
};