class Solution {
public:
    int maxProfit(vector<int>& prices) {

       int bp=prices[0];
       int p=0;

      for(int i=1;i<prices.size();i++){

        if(bp>prices[i]){
            bp=prices[i];
        }else{
            int cp=prices[i]-bp;
             p = max(cp,p);
        }
      }
        return p;
    }
};
