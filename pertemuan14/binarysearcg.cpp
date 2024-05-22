#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int val){
    int left =0;
    int right= n-1;
    int mid;

    while (left <= right) {
        int mid = (left+ right) / 2;

        if (arr[mid] == val)
            return mid;
        else if (arr[mid] > val)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}
 int main(){
    int n;
    int arr[100];
    int val;

    cin>>n;
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    cin >> val;
    cout << binary_search(arr, n, val)<<endl;
 }