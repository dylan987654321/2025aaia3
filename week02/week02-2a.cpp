//week02-2a.cpp Part1
//C++
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;
    string ans;
    cin >> a;
    int N = a.length();
    for(int i=N; i>=0; i--){
        ans += a[i];
    }

    cout << ans;
}
