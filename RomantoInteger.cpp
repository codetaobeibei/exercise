/*Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.
*/

int roman(char c){
    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

class Solution {
public:
    int romanToInt(string s) {
        int sum = 0,n = s.size();
        for(int i = 0;i<n-1;++i){
            int cur = roman(s[i]),next = roman(s[i+1]);
            if(cur<next)
                sum-=cur;
            else
                sum+=cur;
        }
        return sum+roman(s[n-1]);
    }
};
