#include <string>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      vector<int> vec;
    	if (nums1.size() != 0 && nums2.size() != 0) {
    		for (auto i = nums1.begin();i != nums1.end();++i)
    		{
    			auto c1 = find(nums2.begin(), nums2.end(), *i);
    			auto c2 = find(vec.begin(), vec.end(), *i);
    			if (c1 != nums2.end() && c2 == vec.end()) {
    				vec.push_back(*i);
    			}
    		}
    	}
    
    	return vec;
    }
};
