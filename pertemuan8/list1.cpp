#include <iostream>
#include <list>
using namespace std;
int main(){
    list <int> angka ={2,4,5,7,8};
    cout<< angka.front();
    cout<<angka.back();

    list <int>:: iterator it;
    for(it = angka.begin(); it!=angka.end(); ++it)
           cout<<*it<<" ";

    angka.push_front(1);
    angka.pop_front();
    cout<< angka.size();

    if(angka.empty())
       cout<<"kosong";
    else
       cout<<"berisi";

    angka.assign(3,0);

    list<int>::iterator it =angka.begin();
    ++it;
    angka.insert(it,0);
    ++it;
    ++it;
    int arr[] ={11,12,13};
    angka.insert(it,begin(arr),end(arr));

    list<int>::iterator it =angka.begin();
    advance(it,2);
    cout<< *it;
    

}