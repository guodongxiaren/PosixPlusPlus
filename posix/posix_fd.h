#ifndef _POSIX_FD_H
#define _POSIX_FD_H
    
#include <unistd.h>
#include <iostream>
#include <fcntl.h>
using namespace std;
namespace posix{

class Fd{
    public:
    Fd(const char *pathname, int flags);
    Fd(const char *pathname, int flags, mode_t mode);
    int get_fd(){return m_fd;}
    friend istream& operator >>(istream& is, Fd &fd);
    
    private:
    int m_fd;
};
}
#endif
