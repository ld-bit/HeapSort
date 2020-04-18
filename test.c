#include<stdio.h>
#include<stdlib.h>
void Swap(int* arr, int left, int right)
{
    int tmp = arr[left];
      arr[left] = arr[right];
        arr[right] = tmp;

}
void shiftDown(int* arr, int parent,int size)
{
    int child = parent * 2 + 1;
      while (child < size)
      {
            if (child + 1 < size && arr[child] < arr[child + 1])
                    child++;
                if (arr[child] > arr[parent])
                {
                        Swap(arr, parent, child);
                              parent = child;
                                    child = parent * 2 + 1;
                                        
                }
                    else
                            break;
                      
      }

}
void Creatheap(int* arr,int size)
{
   int i;
    for ( i = (size - 2) / 2; i >= 0; i--)
    {
          shiftDown(arr, i,size);
              
    }

}
void printfHeap(int* arr, int size)
{
  int i=0;
    for ( i = 0; i < size; i++)
    {
          printf("%d ", arr[i]);
            
    }
      printf("\n");

}
void heapsort()
{
    int arr[] = { 1,5,3,7,4,0,2 ,2,4,5,6,67,7,8,8,8 };
      int size = sizeof(arr) / sizeof(arr[0]);
        Creatheap(arr,sizeof(arr)/sizeof(arr[0]));
          while (size > 0)
          {
                Swap(arr, 0, size - 1);
                    size--;
                        shiftDown(arr, 0, size);
                          
          }
            printfHeap(arr, sizeof(arr) / sizeof(arr[0]));

}
int main(void)
{
    heapsort();
      return 0;

}
