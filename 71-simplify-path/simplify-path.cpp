class Solution {
public:
    void process(string group, stack<string> &st){
        if(group == "" || group == "."){
            return;
        }
        else if(group == ".."){
            if(!st.empty())
                st.pop();
        }
        else{
            st.push(group);//
        }
    }

    string simplifyPath(string path) {
        stack<string> st;
        string group = "";

        for(char c : path){
            if(c != '/'){
                group += c;
            }
            else{
                process(group, st);
                group = "";
            }
        }

        process(group, st);

        string ans = "";

        while(!st.empty()){
            ans = "/" + st.top() + ans;
            st.pop();
        }

        if(ans.empty()) return "/";
        return ans;
    }
};