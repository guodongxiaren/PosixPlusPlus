#include "posix_signal.h"
using namespace std;
using namespace posix;
Signal::Signal(int sig){
    m_signal = sig;
}
Signal::Signal(int sig,sighandler_t handler){
    m_signal = sig;
    set_sig_handler(handler);
}
void Signal::set_sig_handler(sighandler_t handler){
    signal(m_signal,handler);
}
void Signal::emit() const{
    raise(m_signal);
}
void Signal::emit(int pid) const{
    kill(pid,m_signal);
}

