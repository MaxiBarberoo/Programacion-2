//
// Created by Matias Volpe on 14/03/2022.
//

#include <iostream>
#include <cassert>

using namespace std;

int main() {
  int a = 7;

  int *a_ptr = &a;

  cout << a << endl;
  cout << &a << endl;

  cout << a_ptr << endl;
  cout << *a_ptr << endl;
  cout << &a_ptr << endl;

  cout << "bytes para un int " << sizeof(int) << endl;
  cout << "bytes para un int " << sizeof(a) << endl;

  cout << "bytes para un int* " << sizeof(int*) << endl;
  cout << "bytes para un int* " << sizeof(float*) << endl;
  cout << "bytes para un int* " << sizeof(bool*) << endl;

  return 0;
}