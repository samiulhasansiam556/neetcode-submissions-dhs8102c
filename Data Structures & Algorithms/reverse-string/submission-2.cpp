class Solution {
public:
    void reverseString(vector<char>& s) {

      vector<int> arr;

      for(int i = s.size()-1; i>=0; i--){
        arr.push_back(s[i]);
      }

      
      for(int i = 0 ; i <= arr.size()-1; i++){
         s[i]=arr[i];
      }
        
    }
};