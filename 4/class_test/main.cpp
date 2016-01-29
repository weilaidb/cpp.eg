#include <iostream>
#include <cmath> // or math.h
#include <cstring> // for the strlen() function
#include <string>


#define ARRAY_SIZE(A) sizeof(A)/sizeof(A[0])
using namespace std;

void cpplus11_add_new_features()
{
    //可不在大括号内包含任何东西，这将所有元素都设置为零
    float balances[100] {};

}



void arraysize()
{
    char bird[11] = "Mr. Cheeps";
    char fish[] = "Bubbles";
//用引起的字符串隐藏地包含结尾的空字符，因此不显示包括空字符。
    //通过C++键盘输入，将字符串读入到char字符串数组会自动加上空字符
}

void instr1_reading_more_than_one_string()
{
    //cin使用空白(空格、制表符和换行符)来确定字符串的结束位置，这意味着cin在获取
    //字符数组输入时只读取一个单词，读取该单词后，cin将该字符串放到数组中，并自动在结尾添加空字符。
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
}

//读取一行
void getline()
{
    const int ArSize = 20;
    char name[ArSize];

    cout << "Enter your name,here:\n";
    cin.getline(name,20);
    cout << "your name is:" << name << endl;
}

void instr2_read_more_than_one_word_with_getline()
{
    //cin使用空白(空格、制表符和换行符)来确定字符串的结束位置，这意味着cin在获取
    //cin.getline读取的是一行的内容了，最多是size -1的字符的长度
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name,ArSize);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
}


void get()
{
    //面向行的输入

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

//    cout << "cin.get() is:" << cin.get();
//    cout << "cin.get() is:" << cin.get();
//    cout << "cin.get() is:" << cin.get();
//    cout << "cin.get() is:" << cin.get();
//    cout << "cin.get() is:" << cin.get();

    cout << "Enter your name:\n";
    cin.get(name,ArSize); //first line
    cin.get();//read newline

    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize); //read second line

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
}


void get_get()
{
    //面向行的输入
    //拼接方式， getline().getline();
    //cin.get(name1,ArSize).get();//concatenate member functions
    //cin.get()读取一个字符
    //cin.getline(name,size) 读取一行内容,包括换行符
    //cin.get(name,size)读取一行内容，不包括换行符
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name,ArSize).get(); //first line

    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get(); //read second line

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
}

void null_line_problem()
{
    //当getline或get读取空行时，
    //当get(0(不是getline())读取空行后将设置失效位(failbit)。意味着接下来的输入被阻断，可通过以下命令来恢复输入。

    cin.clear();
}


void instr_following_number_input_with_line_input(void)
{
    //cin读取年份时，将回车键生成的换行符留在了输入队列中。后面的getline()看到换行符后，将认为是一个空行，并将一个空字赋给address数组。
    //解决之道是，在读取地址之前先读取并丢弃换行符。
    cout << "What year was your house built?\n";
    int year;
    (cin >> year).get();
//    cin.get(); //or cin.get(ch);

    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address,sizeof(address));
    cout << "Year built: " << year << endl;
    cout << "Address   : " << address << endl;
    cout << "Done!\n";

}


void string_init()
{
    char first_date[] = {"Le Chapon Dodu"};
    char second_date[] {"The Elegant Plate"};
//    string third_date = {"The Bread Bowl"};
//    string fourth_date {"Hank's Fine Eats"};

    string third_date = "The Bread Bowl";
    string fourth_date = "Hank's Fine Eats";
}

void string_test(void)
{
    string str;
    cout << "Enter a string test:\n";
    getline(cin,str);
    cout << "get string result:" << str;

}

void string_other_type()
{
    //wchar_t  L
    //char16_t u
    //char32_t U
    wchar_t title[] = L"Chief Astrogator";
//    char16_t name[] = u"Felonia Ripova";
//    char32_t car[]  = U"Humber Super Snipe";
    //c++ 11新增
//    cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << endl;
}


int main()
{
//    cpplus11_add_new_features();
//    instr1_reading_more_than_one_string();
//    getline();
//    instr2_read_more_than_one_word_with_getline();
//    get();
//    null_line_problem();
//    instr_following_number_input_with_line_input();


    string_init();
//    string_test();
    string_other_type();













//    unsigned int counts[10] = {};
//    for(int i = 0; i < ARRAY_SIZE(counts); i++)
//    {
//        cout << i << ",counts[" << i << "]:" << counts[i] << endl;
//    }


    /*
0,counts[0]:0
1,counts[1]:0
2,counts[2]:0
3,counts[3]:0
4,counts[4]:0
5,counts[5]:0
6,counts[6]:0
7,counts[7]:0
8,counts[8]:0
9,counts[9]:0

*/


//    char p[20] = "1234456567";
//    cout << "len of p:" << strlen(p) << endl;



//    double area;
//    cout << "Enter the floor area, in square feet, of your home: ";
//    cin >> area;
//    double side;
//    side = sqrt(area);
//    cout << "That's the equivalent of a square " << side
//         << " feet to the side." << endl;
//    cout << "How fascinating!" << endl;










//    int carrots;
//    cout << "How many carrots do you have?" << endl;
//    cin >> carrots;
//    cout << "Here are tow more.";
//    carrots = carrots * 2;
//    //the next line concatenates output
//    cout << "Now you have " << carrots << " carrots." << endl;
//    cout << "Hello World!" << endl;
//    cerr << "Here happens some err!" << endl;
//    clog << "Record some logs" << endl;
    return 0;
}

