#ifndef __USER_H
#define __USER_H

#include "passwd.h"

int create_user(const char* usrname, const char* pwd);
struct passwd* get_user(const char* username);

enum verif_stat {
    EWPWD, // wrong password
    ENUSR, // user not exist
    EINTR, // internal error
    VALID // valid login
};

enum verif_stat verify_user(const char* usr, const char* pwd);

#endif
