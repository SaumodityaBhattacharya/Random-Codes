#include <iostream>
#include <vector>
using namespace std;
void rightRotate(vector<int>& arr, int start, int end) {
    int temp = arr[end];
    for (int i = end; i > start; i--)
        arr[i] = arr[i - 1];
    arr[start] = temp;
}
void rearrangeAlternating(vector<int>& arr) {
    int n = arr.size();
    int outOfPlace = -1;
    for (int i = 0; i < n; i++) {
        if (outOfPlace >= 0) {
            // Check if current element can be swapped with outOfPlace
            if ((arr[i] >= 0 && arr[outOfPlace] < 0) || (arr[i] < 0 && arr[outOfPlace] >= 0)) {
                rightRotate(arr, outOfPlace, i);
                if (i - outOfPlace >= 2)
                    outOfPlace += 2;
                else
                    outOfPlace = -1;
            }
        }
        if (outOfPlace == -1) {
            if ((arr[i] >= 0 && i % 2 == 1) || (arr[i] < 0 && i % 2 == 0))
                outOfPlace = i;
        }
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rearrangeAlternating(arr);
    for (int x : arr) cout << x << " ";
    return 0;
}
