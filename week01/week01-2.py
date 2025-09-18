# week01-2.py
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)#字串長度
        N = len(needle)
        for i in range(H-N+1): #要記得加一
            #切片 slicing
            if haystack[ i : i+N ] == needle: #照到的話
                return i #把位置當答案
        return -1 #沒有找到
