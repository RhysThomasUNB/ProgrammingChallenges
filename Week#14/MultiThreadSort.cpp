#include "MultiThreadSort.h"

int PartitionArr(int * arr, int low, int high)
{
  int pivotIndex = (low + high) / 2;
  //swap pivot
  int pivot = arr[pivotIndex];
  arr[pivotIndex] = arr[high];
  arr[high] = pivot;

  //return val
  int parIndex = low;

  for(int i = low; i <= high - 1; i++)
  {
    if( arr[i] < pivot)
    {
      int temp = arr[parIndex];
      arr[parIndex] = arr[i];
      arr[i] = temp;
      parIndex++;
    }
  }
  int temp = arr[parIndex];
  arr[parIndex] = arr[high];
  arr[high] = temp;

  return parIndex;
}

void QuickSort(int  * arr, int low, int high)
{

  if(low < high)
  {
    int p = PartitionArr(arr, low, high);
    QuickSort(arr, low, p - 1);
    QuickSort(arr, p + 1, high);
  }

}

int main()
{
  int size = 0;
  printf("How Large is your Array?\n>");
  scanf("%d", &size);

  int * arr = new int[size];
  printf("Please enter your numbers 1 at a time\n");
  for(int i = 0; i < size; i++)
  {
    scanf("%d", (arr + i));
  }

  printf("Sorting...\n");
  QuickSort(arr, 0, size - 1);
  for(int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  return 1;
}
