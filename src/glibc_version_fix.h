//
// Created by nathaniel on 3/14/18.
// For use with machines that have older GLIBC libraries
//

#ifndef ALE_GLIBC_VERSION_FIX_H
#define ALE_GLIBC_VERSION_FIX_H
__asm__(".symver memcpy,memcpy@GLIBC_2.2.5");
#endif //ALE_GLIBC_VERSION_FIX_H
