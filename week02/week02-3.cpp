///week02-3.cpp Part�ϥ� c++2013 �~�s�����r�� stoi()�\��
///�bClodeBlocks��,�����}��Setting-Compiler...��c++���Ĥ�
///SOIT106_ADVANCE_001 Usng C++
#include <iostream>///cin cout Ū�J��ƦL�X���
#include <string>/// string �r�ꪺ�\��
using namespace std;///�ϥ�[�R�W�\��]�зǪ� std
int main()
{
    string a;///�ŧi�r��a
    cin >> a;///Ū�J�r��a

    string ans;///�ŧi�r�� ans �񵪮ץΪ�
    int N = a.length();///�r��a������
    for(int i=N-1; i>=0; i--){///�˹L�Ӫ��j��
        ans += a[i];///�b�j��̧�a[i] ���ans���᭱
    }

    cout << a << '+' << ans << '='
         << stoi(a) + stoi(ans) << '\n';
}// stoi is "string to int"��[�r��]�ܦ����
