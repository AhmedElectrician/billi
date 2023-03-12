#include<iostream>
using namespace std;

//implementation of quick sort 
void quickSort(int arr[], int left, int right) {
  int i = left, j = right;
  int tmp;
  int pivot = arr[(left + right) / 2];

  /* partition */
  while (i <= j) {
    while (arr[i] < pivot)
      i++;
    while (arr[j] > pivot)
      j--;
    if (i <= j) {
      tmp = arr[i];
      arr[i] = arr[j];
      arr[j] = tmp;
      i++;
      j--;
    }
  };

  /* recursion */
  if (left < j)
    quickSort(arr, left, j);
  if (i < right)
    quickSort(arr, i, right);
}

int main()
{
    int x;
    cout<<"\nEnter the number ";

    cin>>x;
    if(x % 2 == 0)
    {
        cout<<"\nYou entered correct  number ";
    }
    else
    {
        cout<<"\nYou entered wrong number ";
    }
    return 0;
}