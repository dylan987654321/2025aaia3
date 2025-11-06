//week09-1a.cpp
//SOTT_ADVANCE_004
#include <iostream>
#include <cctype> // isupper() toiower()
using namespace std;

int main()
{
    char c;
    while( cin >> c ){
        if( isupper(c) ) c = tolower(c);
        else if(islower(c)) c = toupper(c);
        cout << c;
    }
    cout << "\n";
}
