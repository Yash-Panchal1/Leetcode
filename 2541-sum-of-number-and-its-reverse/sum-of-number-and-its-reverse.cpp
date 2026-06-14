class Solution {
public:
    int reverse(int x){
          int rev = 0;
        while(x>0){
            int dig = x%10;
            rev = rev*10+dig;
            x = x/10;
        }
        return rev;

    }
    bool sumOfNumberAndReverse(int num) {
        for(int x =0;x<=num;x++){
            int rev = reverse(x);
            if(x+rev==num){
                return true;
            }
        }
        return false;

      
        
    }
};