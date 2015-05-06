#ifndef _POSIX_SIGNAL_H
#define _POSIX_SIGNAL_H

#include "all.h"

namespace posix
{

class Signal
{
    public:
    Signal(int sig);
    Signal(int sig,sighandler_t handler);

    void set_sig_handler(sighandler_t handler);

    void emit() const;
    void emit(int pid) const;

    private:
    int m_signal;
};

}
    
#endif
