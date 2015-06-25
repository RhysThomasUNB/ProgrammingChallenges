#include <stdio.h>
#include <vector>

int blockSize = 1;
std::vector<int> blockList;

void ReverseSlice(std::vector<int> * slice)
{
  for(int i = slice->size() - 1; i >= 0; i-- )
  {
    blockList.push_back(slice->at(i));
  }
}

int main()
{
  int value = 0, numElements = 0;
  printf("How large is your blockSize?\n");
  scanf("%d", &blockSize);

  std::vector<int> blockSlice;

  printf("Please enter each block one at a time!\n");
  while(scanf("%d", &value))
  {
    blockSlice.push_back(value);

    //check if we need to reverse Slice and add to final array
    if(blockSlice.size() >= blockSize)
    {
      ReverseSlice(&blockSlice);
      blockSlice.clear();
    }
    numElements++;
  }

  //AddRemainingBlocks(&blockSlice);
  ReverseSlice(&blockSlice);
  
  //Print the final array!
  for(int i = 0; i < blockList.size(); i++)
  {
    printf("Element at %d: %d\n", i, blockList.at(i));
  }

  printf("Process returned Successfully!\n");
  return 1;
}
