class Solution {
public:
    bool isAnagram(string s, string t) {
        

        unordered_map<int, int>ms, mt;

        if(s.length() != t.length()){
            return false;
        }


        for(int i =0; i<s.length(); i++){

            ms[s[i]]++;
            mt[t[i]]++;
        }

        for(auto k: s){

            if(ms[k] != mt[k]){
                return false;
            }
        }

        return true;
        
    }
};