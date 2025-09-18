#include <iostream>
#include <vector>
using namespace std;

// Partition function
int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low]; // pivot element
    int i = low;
    int j = high;

    while (i < j)
    {
        // move i forward until element > pivot
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        // move j backward until element <= pivot
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        // swap if i < j
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    // finally place pivot at its correct position
    swap(arr[low], arr[j]);
    return j; // return partition index
}

// Quick Sort
void Quick_Sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partitionIndex = partition(arr, low, high);

        Quick_Sort(arr, low, partitionIndex - 1);
        Quick_Sort(arr, partitionIndex + 1, high);
    }
}

int main()
{
    int count;
    cout << "Enter the Number of Elements: ";
    cin >> count;

    vector<int> arr(count);

    cout << "Enter the Values: " << endl;
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    // Sorting
    Quick_Sort(arr, 0, count - 1);

    // Output
    cout << "Sorted Array: ";
    for (auto iter : arr)
    {
        cout << iter << " ";
    }
    cout << endl;

    return 0;
}
