#include <iostream>
#include <vector>
using namespace std;
void merge(int arr[], int low, int high, int mid)
{
    int p = low;
    int q = mid + 1;

    vector<int> temp;

    while (p <= mid && q <= high)
    {
        if (arr[p] < arr[q])
        {
            temp.push_back(arr[p]);
            p++;
        }
        else
        {
            temp.push_back(arr[q]);
            q++;
        }
    }

    while (p <= mid)
    {
        temp.push_back(arr[p]);
        p++;
    }

    while (q <= high)
    {
        temp.push_back(arr[q]);
        q++;
    }


   
    //put elements of temp array in arr[]

    for(int i = low; i <= high;i++){
        int idx = i-low;


        arr[i] = temp[idx];
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
void merge_sort(int arr[], int low, int high)
{

    if (low >= high)
        return;

    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);      // left
    merge_sort(arr, mid + 1, high); // right

    merge(arr, low, high, mid);
}
int main()
{
    // Your code here

    int arr[5] = {3, 2, 4, 1, 3};
    int low = 0;
    int high = 4;
    merge_sort(arr, low, high);
    print(arr, 5);
    return 0;
}