class Solution {
public:
    string addBinary(string a, string b) {


        // store the adding binary in res string
        string res;

        //initialize sum and carry to 0
        int sum, carry = 0;

        //initialize i, j from rightmost digit, size of string string minus 1

        int i = a.size() - 1, j = b.size() - 1;

        // traverse each string until leftmost digit
        while (i >= 0 || j >= 0) {

            //initialize carry to sum

            sum = carry;

//check if there are still digits left or not to leftmost and sum the result

            if (i >= 0) {
                sum += a[i--] - '0';
            }
            if (j >= 0) {
                sum += b[j--] - '0';
            }
            //getting the binary digit by modulo of 2

            res += to_string(sum % 2);
            carry = sum / 2;




        }

        if (carry != 0) res += '1';

        //reverse the result

        reverse(res.begin(), res.end());
        return res;



    }
};


