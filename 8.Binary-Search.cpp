class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){

            //mid value index of nums

            int mid = (low + high) /2;

            if(nums[mid]==target){
                return mid;
            }
            
           //checking if mid greater then high next point should be less then mid

            else if(nums[mid]>target){
                
                high = mid - 1;
            
                
            }

            //if mid less than target then the next low index point should after the the mid

            else if(nums[mid]<target){

                low = mid + 1;
            }

        }


        return -1;
    }
        
    
};