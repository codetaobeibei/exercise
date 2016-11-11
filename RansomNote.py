class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        for val in ransomNote:
            if(ransomNote.count(val)>magazine.count(val)): return False
        return True
