#include "QuickSort.h"

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
  QuickSort * sorter = new QuickSort(arr, size);
  sorter->Sort(0, size - 1);
  sorter->PrintSorted();

  return 1;
}
