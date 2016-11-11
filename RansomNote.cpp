#include <string>

using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> vec(128,0);
        for(auto i = magazine.begin();i!=magazine.end();i++){
            vec[int(*i)]++;
        }
        for(auto j = ransomNote.begin();j!=ransomNote.end();j++){
            vec[int(*j)]--;
            if(vec[int(*j)]<0) return false;
        }
        return true;
    }
};
