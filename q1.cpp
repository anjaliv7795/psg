using namespace std;
#include<iostream>
#include<map>
int main()
{
    map <string, int>
    insert (map <string, int> map1, string word)
    {

    if (map1.find(word) != map1.end())
    {
        map1[word] ++;
    }
    else
    {
        map1.insert(map<string,int>::value_type(word,1));
    }

    return map1;
}

