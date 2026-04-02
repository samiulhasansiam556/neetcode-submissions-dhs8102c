class Solution {
public:
    bool validPalindrome(string s) {
         
          if(isValidParindrome(s)) {
             return true;
          }
          
  
 
          for(int i=0;i<s.size();i++){
             string t = s.substr(0,i)+s.substr(i+1);

             if(isValidParindrome(t)) return true;
         
          }

          return false; 
    }


private: 

    bool isValidParindrome(const string& s){
          int l=0, r=s.size()-1;

          while(l<r){
            if(s[l]!=s[r]){
                 return false;
            } 

             l++;
              r--;
          }

       return true;
         
    }

 

};