template <class T, int SIZE>
class RingBuffer
{
public:
  RingBuffer(void);
  void enqueue(T item);
  T dequeue(void);

private:
  int start;
  int end;
  int size;
  int buffer[SIZE];
};

template <class T, int SIZE>
RingBuffer<T, SIZE>::RingBuffer(void) : start(0), end(-1) {}

template <class T, int SIZE>
void RingBuffer<T, SIZE>::enqueue(T item)
{
  ++this->size;
  this->end = this->end == SIZE - 1 ? 0 : this->end + 1;
  this->buffer[this->end] = item;
}

template <class T, int SIZE>
T RingBuffer<T, SIZE>::dequeue(void)
{
  T item = this->buffer[this->start];
  this->start = this->start == SIZE - 1 ? 0 : this->start + 1;
  --this->size;
  return item;
}