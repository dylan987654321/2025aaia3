# week01-2.py
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)#�r�����
        N = len(needle)
        for i in range(H-N+1): #�n�O�o�[�@
            #���� slicing
            if haystack[ i : i+N ] == needle: #�Ө쪺��
                return i #���m����
        return -1 #�S�����
