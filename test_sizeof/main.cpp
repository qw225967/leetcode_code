#include<iostream>
using namespace std;


int test(char a[]) {
    return sizeof(a)-1;
} 

int main() {
    char t[5] = {'1','2','3','4','\0'};

    cout << test(t) << endl;


    return 0;
}
