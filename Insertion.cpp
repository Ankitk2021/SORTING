#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

void insertion_sort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        int curr = arr[i];
        int p = i;
        for (int j = i; j >= 0; j--)
        {

            if (arr[j] > curr)
            {
                swap(arr[j], arr[p]);
                p--;
            }
        }
    }

    print(arr, n);
}
int main()
{
    // Your code here
    int arr[12] = {2, 1, 3, 4, 0, 11, 23, 5, -3, 9, 2};
    insertion_sort(arr, 12);
    return 0;
}