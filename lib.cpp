#include "controllo.h"
#include <iostream>
using namespace std;
bool controllo (int x, int n){
    return n%x==0 ? n==x : controllo(x+1,n);
}
