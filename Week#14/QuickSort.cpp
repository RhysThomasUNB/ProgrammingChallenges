#include "QuickSort.h"

QuickSort::QuickSort(int * arr, int size)
{
  m_arr = arr;
  m_size = size;
}

int QuickSort::PartitionArr(int low, int high)
{
  int pivotIndex = (low + high) / 2;

  //swap pivot
  int pivot = m_arr[pivotIndex];
  m_arr[pivotIndex] = m_arr[high];
  m_arr[high] = pivot;

  //return val
  int parIndex = low;

  for(int i = low; i <= high - 1; i++)
  {
    if( m_arr[i] < pivot)
    {
      int temp = m_arr[parIndex];
      m_arr[parIndex] = m_arr[i];
      m_arr[i] = temp;
      parIndex++;
    }
  }
  int temp = m_arr[parIndex];
  m_arr[parIndex] = m_arr[high];
  m_arr[high] = temp;

  return parIndex;
}

void QuickSort::Sort(int low, int high)
{

  if(low < high)
  {
    int p = PartitionArr(low, high);
    Sort(low, p - 1);
    Sort(p + 1, high);
  }

}

void QuickSort::PrintSorted()
{
  for(int i = 0; i < m_size; i++)
  {
    printf("%d ", m_arr[i]);
  }
  printf("\n");
}
