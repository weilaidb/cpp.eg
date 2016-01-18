/* map插入类名作为键值，定义另外的重载符< */
#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

class Key
{
public:
    Key();
    Key(int v);
    int _key;
    ~Key();
    /* 重载<w作为成员函数不行，两个操作数都要求是const  */
//    bool operator < (const Key &key);
};

bool operator < (const Key &key1, const Key &key2)
{
    if(key1._key < key2._key)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Key::Key()
{

}

Key::~Key()
{

}

Key::Key(int v)
{
    _key = v;
}


int main()
{
    map<Key, int> ClassMap;
    Key one(1);
    ClassMap.insert(std::make_pair(one,1));
    Key two(2);
    ClassMap.insert(std::make_pair(two,2));

    Key three(3);
    ClassMap.insert(std::make_pair(three,3));

    map<Key, int>::iterator itor = ClassMap.begin();
    while(itor != ClassMap.end())
    {
        cout << itor->first._key << "~~" << itor->second << endl;
        ++itor;
    }


    map<Key, int>::iterator it = ClassMap.find(three);
    if(it == ClassMap.end())
    {
        cout << "NULL" << endl;
    }
    else
    {
        cout << "itor first key:" << it->first._key << " ,second:" <<it->second << endl;
    }


    cout << "Hello World!" << endl;
    return 0;
}

