///week05-1.cpp
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);//改成cin iostream
        string word;
        //ss >> word;
        //cout << "讀到了" << word << "\n";
        //ss >> word;
        //cout << "讀到了" << word << "\n";
        while( ss >> word ) {
        }
        return word.length();
    }
};
