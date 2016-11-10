class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    	if(nums.size()!=1){	
    		auto &n_end = nums.back();
    		if (n_end ==0) {
    			nums.pop_back();
    			moveZeroes(nums);
    			nums.push_back(0);
    		}
    		else {
    			int cnt = 0;
    			for (auto it = nums.begin();it != nums.end();) {
    				if (*it == 0) {
    					it = nums.erase(it);
    					++cnt;
    				}
    				else
    					++it;
    			}
    			while (cnt--)
    				nums.push_back(0);
    		}
    	}
    }
};
