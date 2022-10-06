#define ll long long
class Solution {
public:
    double myPow(double x, int n) {
        
        double ans=1.0;
        ll m = n;
        if (m<0){
            m = -1*m;
        }
        while (m){
            if (m%2){
                ans=ans*x;
                m=m-1;
            }
            else{
                x=x*x;
                m=m/2;
            }
        }
        
        if(n<0){
            ans = (double)(1.0)/(double)(ans);
        }
        return ans;
        
        
    }
};

/*
My approach:
Take a new variable and store the exponent in it, 
and if exponent is lesser than 0, then multiply the number with -1
and make it positive.
then run the while loop until exponent goes to 1. 
then multiply the number with itself until exponent.
in the end, if the exponent is lesser than return 1/resultant value
else return the res.
Time complexity: O(N)
but the iterations will cross 10^8 iterations cycle, because the exponent can be
2^31-1, then it will increase the cycle. 
Space complexity:
0(1)

---------------------------------------------
Intution:
first take:
i. 2^10
it can be written as
(2*2)^5 = (4)^5
ii. (4^5) = 4*(4)^4 
iii. (4)^4 = (4*4)^2 = (16)^2
iv. (16)^2 = 16*16 = (256)^1
v. (256)^1 = 256*256^0 = 256

from v and ii. we can write 4*256 ---> vi
from vi and i, we cam write 4^5 = 1024

----
what we have observed? 
whenever the power is even, 
we are multiplying the x*x, as power and decreasing power in half

whenever the power if odd,
we are multiplying the previous ans with obtained x, and decreasing the by -1.

hence we obtain the result by dividing the numbers by half. 

TC: O(Logn)
SC: O(1)
    */
