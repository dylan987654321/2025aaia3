/// week07-2.cpp���e�P�P�@��
///�e�X�W�j�������, �Ʀr�]�_��
///TAICA ��j��¦�{���]�p(c++) �������D ��6�D
#include <iostream>
#include <cmath>
using namespace std;///�N�OC�� math.h �̭��� sin() cos() abs() sqrt()
int main()
{
    int n;/// Part 1: Input
    cin >> n;

    for(int i=1; i<n*2; i++){///Part 2: Output
        for(int j=1; j<n*2; j++){
            ///�L�X�Ӥ���,�o�{�����ߪ�1�ܦ��N��/���I�F��!!!
            int d = max(abs(i-n), abs(j-n));
            cout << d + 1;/// cout << n;
        }
        cout << endl;///cout << "�{�bi�O:" << i << endl; ///�ӫ�����
    }
}///2�|��3�h��, 3�|��5�h��, 4�|��7�h��, 5�|��9�h��
