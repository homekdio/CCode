class Solution {
public:
    string removeDuplicates(string S) {
        stack <char> st;
        for(char s:S)
        {
            if(s!=st.top()||st.empty())
            st.push(s);
            else
            st.pop();
        }
        string result="";
        while(!st.empty())
        {
            result+=st.top();
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};