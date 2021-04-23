class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i;
        while(n>1){
            if(n%2!=0)
                return false;
            else{
                n=n/2;
            }
           
        }
         if(n==1)
                return true;
            else 
                return false;
    }
};
