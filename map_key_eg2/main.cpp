#include <iostream>
#include <map>
#include <stdlib.h>
#include <stdio.h>


using namespace std;


struct st
{
    int a, b;
    st():a(0),b(0){}
    st(int x, int y):a(x),b(y){}
    friend bool operator < (const struct st &ls, const struct st &rs);
//    {
//        return (this->a < rs.a);
//    }
};

inline bool operator < (const struct st &ls, const struct st &rs)
{
    return (ls.a < rs.a || (ls.a == rs.a && ls.b < rs.b));
}




int main()
{


    std::map<struct st, int> res;
    res.insert(std::make_pair(st(1,2), 12));
    res.insert(std::make_pair(st(3,4), 34));
    res.insert(std::make_pair(st(5,6), 56));

    std::map<struct st, int>::iterator it = res.find(st(3,4));
    if(it == res.end())
    {
        printf("NULL\n");
    }
    else
    {
        printf("first:%d %d ,second:%d \n", it->first.a, it->first.b, it->second);
    }
    cout << "Hello World!" << endl;
    return 0;
}

