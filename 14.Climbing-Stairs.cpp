class Solution {
public:
    int climbStairs(int n) {

        if(n==1){
            return 1;
            }
            
    //create vector dp with n+1 size

    vector<int> dp(n+1);

    //set 0, 1, 2th value for dp

    dp[0]=0; dp[1]=1; dp[2]=2;

    for(int i=3; i<=n; i++){

        //store the sum of previous value of n and values before that

        dp[i] = dp[i-1]+ dp[i-2];

    }

    return dp[n];
        
    }
};