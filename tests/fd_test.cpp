#include <iostream>
#include "../posix/posix_fd.cpp"
using namespace std;
using namespace posix;
int main(){
    Fd fd("hello.txt",O_CREAT|O_RDWR,0644);
    cin>>fd;
}

