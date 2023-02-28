// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {

        //defining 2 pointers for left and end index

         long int left = 0;
         long int end = n;
         long int mid;

        while(left<=end){


            
            mid = (left+end)/2;

 //checking if mid is the bad version or not if bad then find left of mid is bad or not

            if(isBadVersion(mid)){

                //point the end index to mid-1

                end = mid-1;
            }

            //if mid is not bad then point the left to mid+1 and start traverse from there
            else{
                left = mid + 1;

            }

            //return mid if badversion is mid and left of mid is not bad
        
                if(isBadVersion(mid) && !isBadVersion(mid-1)){
                    return mid;
                }
            }

            //return false if there are no bad version

            return -1;



        
        
    }
};