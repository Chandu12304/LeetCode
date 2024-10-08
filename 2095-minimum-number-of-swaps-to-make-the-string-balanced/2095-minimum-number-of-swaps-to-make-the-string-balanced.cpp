class Solution {
public:
    int minSwaps(string s) {
        stack<char> st;
        for(char c:s){
            if(c=='[') st.push(c);
            else{
                if(st.empty() || st.top()==']') st.push(c);
                else st.pop();
            }
        }
        int remainingBrackets = st.size();
        int closedOrOpen = remainingBrackets/2;
        return (closedOrOpen+1)/2;
    }
};