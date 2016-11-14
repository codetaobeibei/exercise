/*Input:
[1,2,3]

Output:
3

Explanation:
Only three moves are needed (remember each move increments two elements):

[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]
*/
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) {
        return accumulate(nums.begin(),nums.end(),0)-*min_element(nums.begin(),nums.end())*nums.size();
    }
};
