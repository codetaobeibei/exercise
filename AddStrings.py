'''
Given two non-negative numbers num1 and num2 represented as string, return the sum of num1 and num2.

Note:

The length of both num1 and num2 is < 5100.
Both num1 and num2 contains only digits 0-9.
Both num1 and num2 does not contain any leading zero.
You must not use any built-in BigInteger library or convert the inputs to integer directly.
'''
class Solution(object):
    def addStrings(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        result = ''
        carry = 0
        num1 = num1[::-1]
        num2 = num2[::-1]
        i = 0
        j = 0
        while i < len(num1) or j < len(num2):
            digit1 = 0
            digit2 = 0
            if i < len(num1):
                digit1 = ord(num1[i])-ord('0')
            if j < len(num2):
                digit2 = ord(num2[j])-ord('0')
            carry, digit= divmod(digit1+digit2+carry,10)
            result = str(digit)+result
            i+=1
            j+=1
        if carry == 1:
            result = '1'+result
        return result
