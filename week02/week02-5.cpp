///week02-5.cpp
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};//�����B�έp�N�U26�Ӧr���X�{�X��
        for(int i=0; i<s.length(); i++){
            char c = s[i];
            A[c]++;
        }
        for(int i=0; i<t.length(); i++){
            char c = t[i];
            A[c]--;
            if(A[c] < 0) return c;
        }
        return 0;
    }
};
