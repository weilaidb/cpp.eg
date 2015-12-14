/* dynamic_cast && ���� && static_cast && reinterpret_cast */
#include <iostream>
using namespace std;

class CBasic
{
public:
    virtual int test(){return 0;} // һ��Ҫ�� virtual
};

class CDerived : public CBasic
{
public:
    virtual int test(){    return 1;}
};

int main()
{
    CBasic        cBasic;
    CDerived    cDerived;

    CBasic * pB1 = new CBasic;
    CBasic * pB2 = new CDerived;

    //dynamic cast failed, so pD1 is null.
    CDerived * pD1 = dynamic_cast<CDerived * > (pB1);
    cout << "pD1:" << pD1 << endl;
    //dynamic cast succeeded, so pD2 points to  CDerived object
    CDerived * pD2 = dynamic_cast<CDerived * > (pB2);
    cout << "pD2:" << pD2 << endl;
    //dynamci cast failed, so throw an exception.
//        CDerived & rD1 = dynamic_cast<CDerived &> (*pB1);
    /* ��һ���쳣�׳������������û��׳��쳣��ָ�뵹���� */
    //dynamic cast succeeded, so rD2 references to CDerived object.
    CDerived & rD2 = dynamic_cast<CDerived &> (*pB2);
    cout << "rD2:" << &rD2 << endl;
    /* ���ã��Ǳ��� */
    int a = 100;
    int &b = a;
    int &c = b;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    b = 20;
    cout << "a:" << a << endl;
    cout << "c:" << c << endl;

    int nValue = 48 + 2;

    char ch = static_cast<char>(nValue);
    cout << "nValue:" << nValue << endl;
    cout << "ch:" << ch << endl;

    int *n= new int ;
    *n = 1000;
    double *d=reinterpret_cast<double*> (n);
    cout << "n:" << n << endl;
    cout << "d:" << d << endl;
    cout << "*n:" << *n << endl;
    cout << "*d:" << *d << endl;
    delete n;
    return 0;
}

/*result: ���û�������ݣ�dynamic_cast��ʶ���ǻ��໹�Ǽ̳���
static_cast ��int����ת��Ϊchar���ͣ������Ϊ2��

Y:\linux\cpp.eg\3\dynamic_cast\debug\dynamic_cast.exe ������...
pD1:0
pD2:0xa22f90
rD2:0xa22f90
a:100
b:100
a:20
c:20
nValue:50
ch:2
n:0xa21458
d:0xa21458
*n:1000
*d:1.28185e-305
Y:\linux\cpp.eg\3\dynamic_cast\debug\dynamic_cast.exe �˳����˳�����: 0
 {1 ?}
*/
