'''
Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.
'''

class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        letters = "abcdefghijklmnopqrstuvwxyz"
        sidx =list()
        for val in letters:
            if(s.count(val)==1):
                sidx.append(s.index(val))
        return min(sidx) if len(sidx)>0 else -1
    
