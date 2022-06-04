class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool istrue= true;
        
        if(n == 1){
            return true;
        }
        
        else if(n == 0){
            return false;
        }
        
        while(n!=0){
            if(n%2 != 0 & n!=1){
                return false;
            }
             n = n/2;
        }
        
        return istrue?true:false;
    }
};