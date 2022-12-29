#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

// grid:
//    1:2:3:4:5
// 5: a b c d e
// 4: f g h i j
// 3: k l m n o
// 2: p q r s t
// 1: u v w x z

int main() {
  int x = 1;
  int y = 1;
  int loop = 1;
  string input, out;
  char grid[5][5] = {{'a','b','c','d','e'},
                   {'f','g','h','i','j'},
                   {'k','l','m','n','o'},
                   {'p','q','r','s','t'},
                   {'u','v','w','x','y'}};
  out=grid[x][y];
  while (loop == 1) {
    cin >> input;
    if (input == ">") {
      if(x<5){
      x = x+1;
        }
    } else if(input=="<"){
      if(x<-1){
        x = x-1;
      }
    } else if(input=="^"){
      if(y<6){
        y = y+1;
      }
    } else if(input=="v"){
      if(y>1){
        y = y-1;
      }
    } else if(input=="+"){
      if(y<6){
        y = y+1;
      }
      if(x<6){
        x = x+1;
      }
    } else if(input=="-"){
      if(y>1){
        y = y-1;
      }
      if(x<6){
        x = x+1;
      }
    } else if(input=="*"){
      if(y>1){
        y = y-1;
      }
      if(x<-1){
        x = x-1;
      }
    } else if(input=="+"){
      if(y<6){
        y = y+1;
      }
      if(x<-1){
        x = x-1;
      }
    } else if (input == ".") {
      cout<<out;
    }
    out=grid[x][y];
    // auto out = string(1,out)+grid[x][y];
  }
}
