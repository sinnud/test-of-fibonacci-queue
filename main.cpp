#include <cstdlib>
#include <iostream>

using namespace std;

#include "fiboheap.h"
#include "fiboqueue.h"
#include <stdlib.h>
#include <assert.h>
#include <queue>

int main(int argc, char *argv[])
{
  FibQueue<int> fq;
  int t;
  
  t=2;
  fq.push(t);
  t=4;
  fq.push(t);
  t=6;
  fq.push(t);
  t=4;
  FibHeap<int>::FibNode *y = fq.findNode(t);
  cout << "    DEBUG2 search point is:" << y <<endl;
  t=5;
  FibHeap<int>::FibNode *x = fq.findNode(t);
  cout << "    DEBUG2 search point is:" << x <<endl;
  while(!fq.empty())
    {
      t = fq.top();
      cout << "Queue sise is:"<<fq.size()<<endl;
      cout<<"Top value is:" << t <<endl;
      fq.pop();
    }
    return EXIT_SUCCESS;
}
