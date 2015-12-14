/* const_cast用法示例 */
#include <iostream>

using namespace std;
void Printer (int* val,string seperator = "\n")
{
    cout << val<< seperator;
}

void test2()
{
    int variable = 21;
    int* const_p = &variable;
    int* modifier = const_cast<int*>(const_p);

    *modifier = 7;
    cout << "variable:" << variable << endl;
}

int main()
{
    const int constant = 10;
//    int modifier = constant;
//    int *modifier = &constant;
//    int *modifier = constant;
    const int *const_p = &constant;
    int *modifier = const_cast<int *>(const_p);
    *modifier = 7;
    cout << "constant :" << constant << endl;
    cout << "*modifier:" << *modifier << endl;
    cout << "*const_p :" << *const_p << endl;
    cout << "Hello World!" << endl;

    cout << "constant: "<< &constant <<endl;
    cout << "const_p : "<< const_p <<endl;
    cout << "modifier: "<< modifier <<endl;

    const int consatant = 20;
    //Printer(consatant);//Error: invalid conversion from 'int' to 'int*'
    Printer(const_cast<int *>(&consatant));


    test2();
    return 0;
}

/*result:

Y:\linux\cpp.eg\2\sec\debug\sec.exe 启动中...
constant :10
*modifier:7
*const_p :7
Hello World!
constant: 0x28ff1c
const_p : 0x28ff1c
modifier: 0x28ff1c
0x28ff18
variable:7
Y:\linux\cpp.eg\2\sec\debug\sec.exe 退出，退出代码: 0
 {1 ?}
*/
