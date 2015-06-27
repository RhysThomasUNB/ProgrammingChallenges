#include <stdio.h>
#include <stdlib.h>

class QuickSort
{
public:
  QuickSort(int * arr, int size);
  void Sort(int low, int high);
  void PrintSorted();
private:
  int * m_arr;
  int m_size;
  int PartitionArr(int low, int high);

};
