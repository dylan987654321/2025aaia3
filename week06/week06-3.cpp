//week06-3.cpp
//LeetCode�ǲ߭p�e Simulation ���� �Ĥ@�D 682.Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op : operations) {// C++�i���j��
            //cout << op << "\n";//�ոլ�,�|�M�X�ƻ�F��
            if(op[0]=='+'){// ���Ƭۥ[,�b��^�h
               int temp = a.back();//���O�U�̫�@��
               a.pop_back();//�ȮɦR�X��
               int temp2 = a.back();//�b�O�U�̫�@��
               a.push_back(temp);//����̫�@����^�h
               a.push_back(temp+temp2 );
            }else if(op[0]=='D'){//�ƻs�̫�1��,�b��^�h
               a.push_back(a.back()*2 );
            }else if(op[0]=='C'){//�R���̫�@��
               a.pop_back();
            }else{//��stoi(op) ���, ��^�h
               a.push_back( stoi(op) );
            }
        }//�̫�,��for�j��,�⳯�Ca����,�����[�_��
        int ans = 0;
        for(int now : a){//C++�i���j��]�i�H��for(int i=0; i<a.size();i++)
            ans+= now;
        }
        return ans;//���H�K return 0 ���@�U�A��
    }
};
