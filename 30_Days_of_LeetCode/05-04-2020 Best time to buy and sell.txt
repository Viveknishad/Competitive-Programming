class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> v1;
        vector<int> v2;
        int count1=0,count2=0;
        if(prices.size()>0){
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]<prices[i+1]){
                v1.push_back(prices[i]);
                v2.push_back(prices[i+1]);
            }
        }
         for(int i=0;i<v1.size();i++){
            count1+=v2[i]-v1[i];
        }
        count2=count1;
        }
        return count2;
    }
};