#include "posix_fd.h"
using namespace posix;

Fd::Fd(const char *pathname)
{
    this->pathname = (char *)malloc(strlen(pathname) + 1);
    strcpy(this->pathname, pathname);
}

Fd::Fd(const string pathname)
{
    int len = pathname.size();
    this->pathname = (char *)malloc(len + 1);
}

Fd::~Fd()
{
    free(pathname);
}

int Fd::open(int flags, mode_t mode)
{
    m_fd = ::open(pathname, flags, mode);
    return m_fd;
}
int Fd::close(){
    return ::close(m_fd);
}

istream& operator >>(istream& is, Fd &fd)
{
    string str;
    is>>str;
    write(fd.get_fd(), str.c_str(), str.size());
    return is;
}
