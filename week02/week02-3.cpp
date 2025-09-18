///week02-3.cpp Part使用 c++2013 年新版的字串 stoi()功能
///在ClodeBlocks裡,必須開啟Setting-Compiler...把c++打勾勾
///SOIT106_ADVANCE_001 Usng C++
#include <iostream>///cin cout 讀入資料印出資料
#include <string>/// string 字串的功能
using namespace std;///使用[命名功能]標準的 std
int main()
{
    string a;///宣告字串a
    cin >> a;///讀入字串a

    string ans;///宣告字串 ans 放答案用的
    int N = a.length();///字串a的長度
    for(int i=N-1; i>=0; i--){///倒過來的迴圈
        ans += a[i];///在迴圈裡把a[i] 塞到ans的後面
    }

    cout << a << '+' << ans << '='
         << stoi(a) + stoi(ans) << '\n';
}// stoi is "string to int"把[字串]變成整數
