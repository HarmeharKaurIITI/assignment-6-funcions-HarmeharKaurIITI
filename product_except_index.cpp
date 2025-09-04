#include <iostream>
#include <vector>
using namespace std;

vector<long long> productExceptIndex(const vector<int>& arr) {
    int size = arr.size();
    vector<long long> output(size, 1);

    // TODO: complete the function as per instructions
    for (int i=0;i<size;++i){
         int prefix=1;
         for (int j=0;j<i;j++) {
              prefix*=arr[j];}
              output[i]=prefix;
         int suffix=1;
         for (int k=i+1;k<size;++k) {
              suffix*=arr[k];}
              output[i]*=suffix;}
    return output;    
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    vector<long long> res = productExceptIndex(arr);
    for(auto v : res)
        cout << v << " ";
    cout << "\n";

    return 0;
}
