class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int num1=0;
        int num2=1;
        int ne=0;
        for(int i=2;i<=n;i++){
            ne=num1+num2;
            num1=num2;
            num2=ne;
        }
        return ne;
    }
};