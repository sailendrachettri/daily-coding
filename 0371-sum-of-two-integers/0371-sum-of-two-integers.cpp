class Solution {
public:
    int getSum(int a, int b) {
        if(a >= 0 && b >= 0){
            for(int i = 1; i <= b; i++)
                a++;
            return a;
        }else if(a < 0 && b < 0){
            a = abs(a);
            b = abs(b);

            for(int i = 1; i <= b; i++)
                a++;
            
            a = -a;
            return a;
        }else if(a < 0 && b >= 0){
            for(int i = 1; i <= b; i++)
                a++;
            
            return a;
        }else {
            for(int i = 1; i <= a; i++)
                b++;
            
            return b;
        }
    }
};