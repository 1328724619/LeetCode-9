class Solution {
public:
    bool isPalindrome(int x) {
        
        int original = x;
        long reversed = 0;      //using long variable can prevent overflow because of the big numbers

        if(x < 0)               //edge case where the numbers can be negative; like example 2
        {
            return false;
        }

        while(x > 0)            
        {
            int digit = x % 10;         //take out the last digit from input

            reversed = reversed * 10 + digit;       //add the digit into the reversed variable

            x /= 10;                    //remove the last digit
        }   
        return original == reversed;        //if original == reveresed, return true     EX: 121 == 121; true
    }
};
