#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

void execute_commands(int N, vector<pair<string,int>> & commands){
    stack <int> st;
    
    for (int i=0; i<N; ++i){
        if(commands[i].first == "push"){
            st.push(commands[i].second);
        }else if(!st.empty()){
            st.pop();
        }
        
        stack<int>temp = st;
        while (!temp.empty()){
            cout<<temp.top() <<" ";
            temp.pop();
        }
        cout<<endl;
    }
}

int main(){
    int N;
    cin >> N;
    
    vector<pair<string,int>>commands(N);
    for(int i=0; i<N ; ++i){
        cin>> commands[i].first;
        if(commands[i].first == "push"){
            cin>>commands[i].second;
        }
    }
    
    execute_commands(N, commands);
    
    return 0;
}
