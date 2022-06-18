#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10, b = 20;
    swap(a,b);
    cout << a << b << endl;
    cout << min({10,20,30,5,7,100}) << endl;
    int arr[10] = {10,20,340,556,4,45,0,0323,-2,10};
    cout << *max_element(arr, arr+10) << endl;
    cout << *min_element(arr, arr+10) << endl;
    cout << find(arr,arr+10, 340)-arr << endl;
    cout << count(arr,arr+10, 10) << endl;
    sort(arr,arr+10);
    cout << binary_search(arr,arr+10,4) << endl;
    return 0;
}
