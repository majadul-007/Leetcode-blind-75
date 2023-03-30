class Solution {
    public int longestPalindrome(String s) {

    //declaring hashset
        Set<Character> set = new HashSet();

//keep track of longest palindrome
        int len = 0;

//loop through to the string
        for(char c:s.toCharArray()){

//check if contains the character
            if(set.contains(c)){
        //increase the length if it is pair
                len += 2;

                set.remove(c);
            }
            else{
                set.add(c);

            }
        }

        //check if there is still any char left or not
        //if one then add to length
        return set.size() >0 ? len +1 : len;
        
    }
}