#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct comp
{
    typedef std::pair<int,int> value_type;
    bool operator ()(const value_type & ls, const value_type & rs)
    {
        return ls.first < rs.first || (ls.first == rs.first && ls.second < rs.second);
    }
};

int main()
{

    std::map<std::pair<int, int>, int, comp> res;
    res.insert(std::make_pair(std::make_pair(12,33),33.0));
    res.insert(std::make_pair(std::make_pair(121,331),3333323.1));
    res.insert(std::make_pair(std::make_pair(122,332), 332.2));
    cout << "Hello World!" << endl;
    cout << "res size:" << res.size() << endl;

    std::map<std::pair<int,int>, int, comp>::iterator it = res.find(std::make_pair(121, 331));
    if(it == res.end())
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d %d %d \n", it->first.first, it->first.second, it->second);
    }
    return 0;
}

