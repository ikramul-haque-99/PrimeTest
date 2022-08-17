#include<bits/stdc++.h>

using namespace std;

int main()
{
    int p, f = 0;
    fstream file;

    file.open("input.txt", ios :: in);


    file>> p;

    for(int i=2; i*i<=p; i++) {
        if ( p % i == 0) {
            f = 1; // divisible hoise
            break;
        }
    }
    file.close();
    fstream file2;
    file2.open("output.txt",ios :: out);

    if (f == 1)
        file2 << "Composite";
    else    
        file2 << "Prime";
        file2.close();
    return 0;
}