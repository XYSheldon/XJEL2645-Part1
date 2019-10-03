#include <cmath>
#include <iostream>

// Lab 104 task
const double PI = 3.141592654;

int main(int argc, char const *argv[]) {
  /* code */
  int n = atoi(argv[1]);
  double *y = new double[n];
  double *t = new double[n];
  // End of Task 1

  double f = 20;
  double T = 1/f;
  for (int i=0;i<n;i++){
    t[i]=1.0*i/n;
    y[i]=sin(2*PI*f*t[i]);
  }
  // End of Task 2

  for (int i=0;i<n;i++){
    std::cout<<t[i]<<','<<y[i]<<std::endl;
  }
  // End of Task 3

  delete[] y;
  y = nullptr;
  delete[] t;
  t = nullptr;
  
  return 0;
}