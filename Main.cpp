#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
void bubble_sort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        cout << "RUNNING...OUTER"<<endl<<endl;
        for (int j = i; j < n; j++)
        {
            cout << "running...inner"<<endl;
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }

    /*for (int i = 0; i < n; i++)
      {

          for (int j = 0; j < i; j++)
          {
              if (arr[j] > arr[i])
              {
                  swap(arr[i], arr[j]);
              }
          }
      }*/
    print(arr, n);
}
void selection_sort(int arr[], int n)
{
    int mini;
    for (int i = 0; i < n; i++)
    {
        mini = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }

        swap(arr[mini], arr[i]);
    }
    print(arr, n);
}

int main()
{
    // Your code here

    int arr[12] = {2, 1, 3, 4, 0, 11, 23, 5, -3, 9, 2};
    int arr2[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    bubble_sort(arr, 12);
    cout << endl;
    bubble_sort(arr2, 12);

    cout << endl;
    selection_sort(arr, 12);
    return 0;
}