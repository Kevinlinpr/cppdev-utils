//
// Created by Kevinlin Pr on 2021/12/13.
//

#include "string16.h"

#if defined(WCHAR_T_IS_UTF16) && !defined(_AIX)

#error This file should not be used on 2-byte wchar_t systems

#elif defined(WCHAR_T_IS_UTF32)

#include <ostream>



#endif // defined(WCHAR_T_IS_UTF16) && !defined(_AIX)
