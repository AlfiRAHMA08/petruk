#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<char> huruf = {'j','i','h','a','n'};
    huruf.front()='h';
    cout<<huruf.back();

    for(vector<char>::iterator it= huruf.begin();it !=huruf.end();it++)
       cout<< *it <<" ";

    cout<<huruf.at(3);
    
    huruf.push_back('0');
    huruf.pop_back();
    cout<<huruf.size();
    cout << huruf.empty();

    char a[] = {'h', 'a', 'i'};
    int len = sizeof(a) / sizeof(a[0]);
    huruf.assign(a,a+len);
    huruf.insert(huruf.begin()+2,'g');

    huruf.erase(huruf.begin(), huruf.begin()+3);
    huruf.clear();
    cout <<huruf.empty();

}