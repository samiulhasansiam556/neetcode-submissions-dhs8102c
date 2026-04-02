class Solution {
public:
    string mergeAlternately(string word1, string word2) {       

        int l = 0, i = 0, j = 0;
        string word3 = "";

        while (i < word1.size() || j < word2.size()) {   // 🔧 FIX HERE
            
            if (i < word1.size() && j < word2.size()) {
                word3 += word1[i];
                word3 += word2[j];
                i++;
                j++;
            }
            else if (i < word1.size()) {
                word3 += word1[i];
                i++;
            }
            else {
                word3 += word2[j];
                j++;
            }

            l++;
        }

        return word3;
    }
};
