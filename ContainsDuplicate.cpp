/*Given an array of integers, find if the array contains any duplicates. Your function should return true if any value 
appears at least twice in the array, and it should return false if every element is distinct.
*/

//49ms
#include <set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size()>set<int>(nums.begin(),nums.end()).size();
    }
};

//40ms
/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return unique(nums.begin(), nums.end()) != nums.end();
    }
};
*/

//20ms
/*#define BITSPERWORD 32  
#define SHIFT 5  
#define MASK 0x1F  
#define N 10000000  
int a[1 + N/BITSPERWORD]; 
void set_(int i) {        a[i>>SHIFT] |=  (1<<(i & MASK)); }  
void clr(int i) {        a[i>>SHIFT] &= ~(1<<(i & MASK)); }  
int  test(int i){ return a[i>>SHIFT] &   (1<<(i & MASK)); }  
  
 
class Solution {
    
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()==0)return false;
        int i;  
    for (i = 0; i < nums.size(); i++)  
        clr(nums[i]);    
    for (i = 0; i < nums.size(); i++)  
    {
        if(test(nums[i]))return true;
        else set_(nums[i]);  
    }
   return false;
    }
};
*/
