//week03-1.cpp
#include <iostream>
#include <vector>///c++°}¦C
using namespace std;

int main()
{
    vector<int> a(10);///¦³­Ó°}¦C

    for(int i=0; i<a.size(); i++) cout<< a[i] << ' ';
    cout <<endl;///¸õ¦æ

    a.push_back(99);
    a.push_back(77);

    for(int i=0; i<a.size(); i++) cout<< a[i] << ' ';
    cout <<endl;
}
