//week02-2b.cpp Part2
//C++
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    cin >> a;

    string ans;
    int N = a.length();
    for(int i=N-1; i>=0; i--){
        ans += a[i];
    }

    cout << a << '+' << ans << '='
         << stoi(a) + stoi(ans) << '\n';
}// stoi is "string to int"
