///week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//�令cin iostream
        string word;
        //ss >> word;
        //cout << "Ū��F" << word << "\n";
        //ss >> word;
        //cout << "Ū��F" << word << "\n";
        while( ss >> word ) {
        }
        return word.length();
    }
};
