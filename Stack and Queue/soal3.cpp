#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;
    
    vector <int> numbers(N);
    for(int i=0; i<N; ++i){
        cin >> numbers[i];
    }
    
    for(int i =1; i<N; i +=2){
        cout<< numbers[i] << " ";
    }
    cout<<endl;
    
    return 0;
}