#include <iostream>
#include "ringbuffer.h"

template <class T, int SIZE>
inline void drainPrint(RingBuffer<T, SIZE> &rb)
{
  std::cout << rb.dequeue() << std::endl;
}

int main(void)
{
  RingBuffer<int, 10> rb;

  rb.enqueue(19);
  rb.enqueue(28);
  rb.enqueue(37);

  drainPrint(rb);
  drainPrint(rb);
  drainPrint(rb);

  return 0;
}