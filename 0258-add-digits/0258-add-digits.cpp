class Solution {
public:
    int addDigits(int num) {
        while(num >=10){
        int r = 0,sum = 0;
        while(num>0){
            r = num%10;
            sum += r;
            num = num/10;
        }
            num = sum;
        }
        return num;
    }
};