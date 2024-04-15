#include <iostream>
#include <queue>
#include <vector>
using namespace std;
class MinHeap
{
public:
  int arr[50];
  int idx;
  MinHeap()
  {
    idx = 0;
  }
  int top()
  {
    return arr[1];
  }
  int size()
  {
    return idx;
  }
  void push(int val)
  {
    idx++;
    arr[idx] = val;
    int idx_new = idx;
    while (idx_new != 1)
    {
      if (val < arr[idx_new / 2])
      {
        swap(arr[idx_new], arr[idx_new / 2]);
        idx_new = idx_new / 2;
      }
      else
      {
        break;
      }
    }
  }
  void pop()
  {
    int lastele = arr[idx];
    idx--;
    arr[1] = lastele;
    int i = 1;
    while (true)
    {
      int leftele = arr[(2 * i)];
      int rightele = arr[(2 * i) + 1];
      int minimum = min(leftele, rightele);
      if (minimum == leftele)
      {
        swap(arr[i], arr[2 * i]);
        i = (2 * i);
      }
      else
      {
        swap(arr[i], arr[(2 * i) + 1]);
        i = (2 * i) + 1;
      }
      if (((2 * i) + 1) > idx || (2 * i) > idx)
        break;
    }
  }
};
int main()
{
  MinHeap pq;
  pq.push(10);
  pq.push(20);
  pq.push(11);
  pq.push(30);
  pq.push(40);
  pq.push(12);
  pq.push(4);
  pq.push(7);
  for (int i = 1; i <= pq.idx; i++)
  {
    cout << pq.arr[i] << " ";
  }
  cout << endl;
  cout << pq.size();
  cout << endl;
  pq.pop();
  for (int i = 1; i <= pq.idx; i++)
  {
    cout << pq.arr[i] << " ";
  }
  cout << endl;
  pq.pop();
  for (int i = 1; i <= pq.idx; i++)
  {
    cout << pq.arr[i] << " ";
  }
}