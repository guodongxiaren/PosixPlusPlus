#include "posix_fd.h"
using namespace posix;

Fd::Fd(const char *pathname, int flags){
    m_fd = open(pathname, flags);
}
Fd::Fd(const char *pathname, int flags, mode_t mode){
    m_fd = open(pathname, flags, mode);
}

istream& operator >>(istream& is, Fd &fd){
    string str;
    is>>str;
    write(fd.get_fd(), str.c_str(), str.size());
    return is;
}
