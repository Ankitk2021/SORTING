#include <iostream>
#include <vector>
using namespace std;
int getPartition(vector<int>& arr, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low)
        {
            j--;
        }

       if(i<j) swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);

    return j;
}
void print(vector<int> arr, int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
void quick_sort(vector<int>& arr, int low, int high)
{

    if (low < high)
    {
        int pIndex = getPartition(arr, low, high);
        quick_sort(arr, low, pIndex - 1);
        quick_sort(arr, pIndex + 1, high);
    }
}

int main()
{
    // Your code here
    vector<int> arr = {3, 2, 4, 1, 3};
    int low = 0;
    int high = 4;
    quick_sort(arr, low, high);
    print(arr, 5);
    return 0;
}