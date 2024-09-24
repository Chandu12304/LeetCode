class Solution {
public:
    bool isValid(string s) {
       stack<char> st;
       for(char x:s){
            if(st.empty()) st.push(x);
            else if(st.top()=='('&&x==')'||st.top()=='{'&&x=='}'||st.top()=='['&&x==']') st.pop();
            else if(x=='('||x=='{'||x=='[') st.push(x);
            else return false;
       }
       if(st.empty()) return true;
       return false;
    }
};