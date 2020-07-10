
#ifndef SOCKS_H
#define SOCKS_H

#include <sys/socket.h>

#include "types.h"

method_t exchange_methods(fd_t);
res_t evaluate_request(fd_t, struct sockaddr_storage*);

#endif