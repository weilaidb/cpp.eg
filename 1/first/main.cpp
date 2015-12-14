/* %#d ���ݱ������ɶ����Զ��仯 */
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cfloat>
#include "float.h"


using namespace std;

#define to_string(s) #s
#define concatenate(x, y) x ## y

//#ifndef AB
//#error not define AB
//#endif


/* #line�������ڸ���__LINE__��__FILE__������ֵ���ļ����ǿ�ѡ��. */
#line 20 "main.cp"

int main()
{
    wchar_t wWord = 0x199;
    printf("word:%#d\n", wWord);
    printf("word:%#x\n", wWord);
    printf("word:%#o\n", wWord);
    cout << "tWorld:" << wWord <<endl;
    cout << "line:" << __LINE__     <<endl;
    cout << "func:" << __FUNCTION__ <<endl;
    cout << "file:" << __FILE__     <<endl;
    cout << "date:" << __DATE__     <<endl;
    cout << "time:" << __TIME__     <<endl;
    cout << "cplus:" << __cplusplus     <<endl;
    cout << "stdc:" << __STDC__     <<endl;
//    cout << "file:" << __FILE__     <<endl;
//    cout << "file:" << __FILE__     <<endl;
    int xy = 10;
    cout << "Hello World!" << endl;
    cout << to_string(Hello World!) << endl;
    cout << concatenate(x, y) << endl;


    return 0;
}

/*result:

Y:\linux\cpp.eg\1\first\debug\first.exe ������...
word:409
word:0x199
word:0631
tWorld:409
line:28
func:main
file:main.cp
date:Dec 14 2015
time:23:17:07
cplus:1
stdc:1
Hello World!
Hello World!
10
Y:\linux\cpp.eg\1\first\debug\first.exe �˳����˳�����: 0
 {1 ?}
*/
