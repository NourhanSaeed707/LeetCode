
#include <iostream>
#include <map>
#include <list>
#include <vector>
#include <stack>
#include <queue>  
#include <unordered_set>
#include <unordered_map>
#include<cmath>
#include<algorithm>
#include <iterator> 
#include <set> 
#include <deque>
#include <string>
using namespace std;

void merge(vector<int>& merge_arr, int low, int hight, int mid);
void merge_sort(vector<int> &arr, int low, int hight) {
    int mid ;
    if (low < hight) {
        mid = (low + hight) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, hight);
        merge(arr, low, hight, mid);
    }
}
void merge(vector<int> &arr, int low, int high, int mid) {
    int i, j, k, c[50];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;
        }
        else {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
   // to make sure that we take all elements and sorted it.
    while (i <= mid) {
        c[k] = arr[i];
        k++;
        i++;
    }
   // to make sure that we take all elements and sorted it.
    while (j <= high) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++) {
        arr[i] = c[i];
    }
}
int main()
{    
    int n,a;
    vector<int> v;
    cout << "Enter size of array:" << endl;
    cin >> n;
    cout << "Enter array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    cout << "sorted array:" << endl;
    int x = v.size() - 1;
    merge_sort(v, 0, x);
   for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    return 0;
}

