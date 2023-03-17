class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        //declared unordered set

        unordered_set<int> table;

        //loop through nums

        for(auto n:nums){

            //check if elements is present or not in the set
            
            if(table.insert(n).second == false ){

                //if already in the set
                
                return true;
            }
           
        }

        return false;



        
    }
};