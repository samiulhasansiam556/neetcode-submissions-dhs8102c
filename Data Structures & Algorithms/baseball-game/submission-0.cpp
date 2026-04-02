class Solution {
public:
    int calPoints(vector<string>& operations) {

        vector<int> stack;

        for(const string& c : operations){
            if(c == "+"){
                int top = stack.back();
                stack.pop_back();
                int new_top = top+stack.back();
                stack.push_back(top);
                stack.push_back(new_top);
            }else if(c == "C"){
                stack.pop_back();
            }else if(c == "D"){
                stack.push_back(2*stack.back());
            }else{
                stack.push_back(stoi(c));
            }
        }
        
        return accumulate(stack.begin(), stack.end(), 0);
;
    }
};