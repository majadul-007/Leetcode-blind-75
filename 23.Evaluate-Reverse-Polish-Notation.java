class Solution {
    public int evalRPN(String[] tokens) {


//defining stack
        Stack<Integer> stack  = new Stack<>();



//loop through tokens
        for (String token : tokens) {


//check if token equals '+', '-', '*', and '/' if true then pop the top 2 integers


            if (token.equals("+")) {

                int n2 = stack.pop();
                int n1 = stack.pop();


                stack.push(n1 + n2);

            }

            else if (token.equals("-")) {

                int n2 = stack.pop();
                int n1 = stack.pop();

                stack.push(n1 - n2);
                
            } else if (token.equals("/")) {

                int n2 = stack.pop();
                int n1 = stack.pop();

                stack.push(n1 / n2);
            }

            else if (token.equals("*")) {

                int n2 = stack.pop();
                int n1 = stack.pop();

                stack.push(n1 * n2);
            }

//if tokens is number then convert to int and push it to stack
            else {
                stack.push(Integer.parseInt(token));
            }



        }

        return stack.pop();



    }
}