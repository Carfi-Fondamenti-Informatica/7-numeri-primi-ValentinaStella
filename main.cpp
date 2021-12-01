#include <iostream>
#include "controllo.h"
using namespace std;

int main() {
    int num;
    cin>>num;
    controllo(2,num) ? cout<<"numero primo":cout<<"numero non primo";

}
