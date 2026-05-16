#ifndef MAIN_HPP
#define MAIN_HPP

// Find the sub string in the original string

#include <iostream>
#include <cstring>
using namespace std;

int finduserstring(char[], int, char[], int);

int finduserstring(char cstr[], int cstrlen, char userstr[], int userlen)
{
    if (userlen <= 0 || cstrlen <= 0 || userlen > cstrlen)
        return -1;

    for (int i = 0; i <= cstrlen - userlen; ++i)
    {
        int j = 0;
        while (j < userlen && cstr[i + j] == userstr[j])
            ++j;

        if (j == userlen)
            return i;
    }

    return -1;
}

#endif
