#include <iostream>
#include "ringbuffer.h"

int main(void)
{
  RingBuffer<int> rb;

  rb.enqueue(19);
  rb.enqueue(28);
  rb.enqueue(37);

  std::cout << rb.dequeue() << std::endl;
  std::cout << rb.dequeue() << std::endl;
  std::cout << rb.dequeue() << std::endl;

  return 0;
}