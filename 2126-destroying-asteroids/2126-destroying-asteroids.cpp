class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long sum=mass;
        sort(asteroids.begin(),asteroids.end());
        int breakpoint=-1;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>sum){
                breakpoint=i;
                break;
            }
            else{
                sum+=asteroids[i];
            }
        }
        if(breakpoint!=-1) return false;
        return true;
    }
};