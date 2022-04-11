class Solution {
public:
    bool isValid(string s) {
        stack<int> st;

for(int i = 0; i < s.length(); ++i)
	if(s[i] == '(')
		st.push(1);
	else if(s[i] == ')' && st.size() == 0)
		return false;
	else if(s[i] == ')' && st.top() == 1)
		st.pop();
	else if(s[i] == ')' && st.top() != 1)
		return false;
	else if(s[i] == '[')
		st.push(2);
	else if(s[i] == ']' && st.size() == 0)
		return false;
	else if(s[i] == ']' && st.top() == 2)
		st.pop();
	else if(s[i] == ']' && st.top() != 2)
		return false;
	else if(s[i] == '{')
		st.push(3);
	else if(s[i] == '}' && st.size() == 0)
		return false;
	else if(s[i] == '}' && st.top() == 3)
		st.pop();
	else if(s[i] == '}' && st.top() != 3)
		return false;
if(st.size() == 0)
	return true;
else
	return false;
    }
};

TC: O(N)
SC: O(N)