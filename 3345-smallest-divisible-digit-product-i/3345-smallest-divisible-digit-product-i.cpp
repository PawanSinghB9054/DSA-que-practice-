class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true) { 
            int x = n ; 
            int prod = 1 ;
            while(x!=0){
                int ld = x%10 ; 
                x/=10 ; 
                prod *= ld ; 
            }
            if(prod % t == 0) return n ;
            else n++ ;
        }
    }
};