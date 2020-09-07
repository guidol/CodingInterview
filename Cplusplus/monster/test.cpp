#include<iostream>
using namespace std;

int main(void){

    int a = 5;
    int* pn = &a;
    cout<<sizeof(pn)<<endl;
    cout<<sizeof(a)<<endl;
    cout<<pn<<endl;

    return 0;
}