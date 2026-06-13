class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        vector<char>alphavalower = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        vector<int>val;
        string result;
        for(int i=0;i<words.size();i++){
            int sum=0;
            for(int j=0;j<words[i].size();j++){
                for(int k=0;k<26;k++){
                    if(alphavalower[k]==words[i][j]){
                        sum+=weights[k];
                    }
                }
            }
            val.push_back(sum%26);
        }
        for(int i=0;i<val.size();i++){
            result+=alphavalower[25-val[i]];
        }
        return result;
    }
};