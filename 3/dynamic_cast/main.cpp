/* dynamic_cast && 引用 && static_cast && reinterpret_cast */
#include <iostream>
using namespace std;

class CBasic
{
public:
    virtual int test(){return 0;} // 一定要是 virtual
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
    /* 上一行异常抛出，死机，引用会抛出异常，指针倒不会 */
    //dynamic cast succeeded, so rD2 references to CDerived object.
    CDerived & rD2 = dynamic_cast<CDerived &> (*pB2);
    cout << "rD2:" << &rD2 << endl;
    /* 引用，是别名 */
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

/*result: 引用会个性数据，dynamic_cast会识别是基类还是继承类
static_cast 将int数据转换为char类型，结果变为2了

Y:\linux\cpp.eg\3\dynamic_cast\debug\dynamic_cast.exe 启动中...
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
Y:\linux\cpp.eg\3\dynamic_cast\debug\dynamic_cast.exe 退出，退出代码: 0
 {1 ?}
*/
