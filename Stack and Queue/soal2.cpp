#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

void execute_commands(int N, vector<pair<string, int>> & commands){
    queue<int> q;
    
    for(int i=0; i<N; ++i){
        if(commands[i].first == "push"){
            q.push(commands[i].second);
        }else if (!q.empty()){
            q.pop();
        }
        
        queue<int> temp = q;
        while(!temp.empty()){
            cout<<temp.front()<<" ";
            temp.pop();
        }
        cout<<endl;
    }
}

int main(){
    int N;
    cin >>N;
    
    vector<pair<string,int>>commands(N);
    for(int i=0; i<N; ++i){
        cin >> commands[i].first;
        if(commands[i].first == "push"){
            cin>> commands[i].second;
        }
    }
    execute_commands(N, commands);
    return 0;
}