class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
        long long int sum=0;
        int temp=x;
                
        while(temp!=0)
        {
            int rem=temp%10;
            sum=sum*10+rem;
            temp=temp/10;
        
        }
        return sum==x;
    }
};