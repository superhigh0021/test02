#define maxnum 10
using namespace std;

#include <iostream>
#include <vector>

struct Tuple {
    int i, j; //Ԫ�ص������±�
    int value; //Ԫ�ص�ֵ
};

typedef struct
{
    int mu, nu, tu; //Ԫ�ص�����������������Ԫ�ظ���
    Tuple data[maxnum];
} spmatrix;

vector<spmatrix> reset()
{
    int num;
    cout << "��Ҫ�������ٸ�����" << endl;
    cin >> num;
    vector<spmatrix> s;
    s.resize(num);
    cout << "��Ҫ������������������ֱ�Ϊ���٣�" << endl;
    int mu, nu;
    cin >> mu >> nu;
    for (int i = 0; i < num; ++i) {
        s[i].mu = mu;
        s[i].nu = nu;
    }
    for (int i = 0; i < num; ++i) {
        cout << "��" << i + 1 << "������ķ���Ԫ�ظ�����";
        int num_of_nzero;
        cin >> num_of_nzero;
        s[i].tu = num_of_nzero;
    }
    return s;
}

void insert(vector<spmatrix>& s)
{
    int num = s.size();
    for (int m = 0; m < num; ++m) {
        int num_of_nzero = s[m].tu;
        for (int n = 0; n < num_of_nzero; ++n) {
            int i, j, value;
            cout << "�㴴���ĵ�" << m + 1 << "���������Ԫ�ص����к�Ԫ��ֵ�ֱ�Ϊ��";
            cin >> i >> j >> value;
            s[m].data[n].i = i; //��n������Ԫ�ص��б�
            s[m].data[n].j = j; //��n������Ԫ�ص��б�
            s[m].data[n].value = value;
        }
    }
    // for (int i = 0; i < v.size(); ++i) {
    //     //��i��ϡ�����
    //     for (int j = 0; j < s[i].tu; ++j) {
    //         //��j������Ԫ�� �бꡢ�бꡢԪ��ֵ
    //         int I = s[i].data[j].i, J = s[i].data[j].j, V = s[i].data[j].value;
    //         v[i][I - 1][J - 1] = V; //������бꡢ�б���ϰ���ϵĴ�1��ʼ
    //     }
    // }
}

void plus_spmatrix(const vector<spmatrix>& s, vector<vector<int>>& v)
{
    int n = s.size();
    //��δ���Ƿ���Ԫ��Ϊ0�����
    for (int j = 0; j < s[0].tu; ++j) {
        //��j������Ԫ�� �бꡢ�бꡢԪ��ֵ
        int I = s[0].data[j].i, J = s[0].data[j].j, V = s[0].data[j].value;
        v[I - 1][J - 1] = V; //������бꡢ�б���ϰ���ϵĴ�1��ʼ
    }
    cout<<1<<endl;
    for (int i = 0; i < v.size(); ++i) {
        int count = 0;
        for (auto c : v[i]) {
            cout << c;
            count++;
            if (count == v[0].size()) {
                cout << endl;
                count = 0;
            }
        }
    }
    // while(n!=0){

    // }
}