class Solution {
public:
    bool isHappy(int n){
       std:: vector<int> se;
        int k=0;
        int m=0;
        int t;
        int temp;
        while(n>0){
            temp=n;
            k=n%10;
            m+=k*k;
            n/=10;
            if(n==0){
               se.push_back(temp);
               if (std::find(se.begin(),se.end(),m)!= se.end()){
                   t=0;
               }else{
                   n=m;
               }
               if(m==1){
                  t=1;
                   break;
               }
                else{
                    m=0;
                }
            }
        }
        if(t==1){
            return true;
        }
        else{
            return false;
        }
    }
};