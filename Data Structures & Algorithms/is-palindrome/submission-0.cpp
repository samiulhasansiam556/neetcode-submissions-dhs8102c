class Solution {
public:
    bool isPalindrome(string s) {
          string clean = "";
          string rev = "";

        for (char ch : s) {
        if (isalnum(ch)) {
            clean += tolower(ch);
        }
    }

    for (int i = clean.size() - 1; i >= 0; i--) {
        rev += clean[i];
    }
        return (clean == rev);
    }
};
