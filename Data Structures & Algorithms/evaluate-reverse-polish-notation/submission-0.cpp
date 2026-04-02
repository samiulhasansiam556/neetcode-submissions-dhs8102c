class Solution {
public:
    int evalRPN(vector<string>& tokens) {

       stack<int> stk;
       int res = 0;

        for(const string c : tokens){
            if(c == "+"){
               int tmp = stk.top();
               stk.pop();
               int tmp2 = tmp + stk.top();
               stk.pop();   
               stk.push(tmp2);
            }else if(c == "-"){
               int tmp = stk.top();
               stk.pop();
               int tmp2 = stk.top() - tmp;
               stk.pop();
               stk.push(tmp2);
            }else if(c == "*"){
               int tmp = stk.top();
               stk.pop();
               int tmp2 = stk.top() * tmp;
               stk.pop();
               stk.push(tmp2);
            }else if(c == "/"){
               int tmp = stk.top();
               stk.pop();
               int tmp2 = stk.top() / tmp;
               stk.pop();
               stk.push(tmp2);
            }else{
                stk.push(stoi(c));
            }
        }

        return stk.top();
        
    }
};
