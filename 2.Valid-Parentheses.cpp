class Solution {

public:

	bool isValid(string s) {

		stack <char> st; //create char type stack

		//iterate over the list of string

		for (auto i : s) {

			//check if string contain open parentheses

			if (i == '(' or i == '{' or i == '[') {
				st.push(i);
			}

			//check if stack empty or given parentheses valid or not

			else {
				if (st.empty() or  st.top() =='('  &&  i!=')' 
                 or  st.top() == '{' && i != '}' or st.top() == '[' && i != ']'  ) {
				
                return false;

				}
				else {

					// if it is valid then pop it from stack and traverse next string

					st.pop();
				}
			}
		}
		return st.empty(); //check if there are still unpair string 
	}
};