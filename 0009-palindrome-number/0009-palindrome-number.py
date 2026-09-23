class Solution(object):
    def isPalindrome(self, x):
        result= False
        y = str(x)
        if y==y[::-1]:
            result= True
        return result