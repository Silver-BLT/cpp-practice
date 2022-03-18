#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

typedef struct {
      int a[2];
      double d;
    } struct_t;

    double fun(int i) {
      volatile struct_t s;
      s.d = 3.14;
      s.a[i] = 1073741824;
      return s.d;
    }

int main(){
  cout<<fun(6);
  
    
    return 0;
}