class Solution {
public:
    int findComplement(int num) {
        int m = num,mask = 0;
        
        if(num == 0){
            return 1;
        }
        
        while(m !=0){
            m = m>>1;
            mask = (mask<<1)|1;
        }
        
        return (~num)&mask;
    }
};