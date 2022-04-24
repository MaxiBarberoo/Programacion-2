//
// Created by Matias Volpe on 14/03/2022.
//

#include <iostream>
#include <cassert>
#include <ctime>

using namespace std;

int main() {
  srand(time(0));

  int a[15];
  for (int i = 0; i < 15; ++i) {
    a[i] = rand() % 101;
  }

  for (int i = 0; i < 15; ++i) {
    cout << "a[" << i << "]: " << a[i] << " *(a+" << i << "): " << *(a+i) << endl;
  }



  return 0;
}