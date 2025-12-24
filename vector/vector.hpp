#include <iostream>
#include <iterator>
#include <vector>

class MyVector {
private:
public:
  MyVector();
  ~MyVector();
  MyVector(const MyVector &);
  MyVector &operator=(const MyVector &);

  void push(int);
  void pop();
  void insert(int index, int value);
  void clear();

  int size() const;
  int capacity() const;
  int get(int index) const;

  // 迭代器
  int *begin();
  int *end();
};