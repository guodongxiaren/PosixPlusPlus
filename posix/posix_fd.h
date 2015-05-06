#ifndef _POSIX_FD_H
#define _POSIX_FD_H
    
#include "all.h"
using namespace std;

namespace posix{

class Fd{
public:
    Fd(const char *pathname);
    Fd(const std::string pathname);
    ~Fd();

    int open(int flags, mode_t mode);
    int close();

    int get_fd(){return m_fd;}
    

private:
    int m_fd;
    char *pathname;
};
}
istream& operator >>(istream& is, Fd &fd);
#endif
