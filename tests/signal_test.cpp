#include <iostream>
#include "unistd.h"
#include "../posix/posix_signal.cpp"
using namespace std;
using namespace posix;
void sig_usr(int signo){
    cout<<"received SIGUSR1"<<endl;
    return;
}
int main(){
    Signal sig(SIGUSR1,sig_usr);
    while(1){
        pause();
    }
}

