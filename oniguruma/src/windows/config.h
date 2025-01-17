/* src/config.h.  Generated from config.h.in by configure.  */
#if defined(__MINGW32__) || _MSC_VER >= 1600
#define HAVE_STDINT_H 1
#endif
#if defined(__MINGW32__) || _MSC_VER >= 1800
#define HAVE_INTTYPES_H 1
#endif
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_MEMORY_H 1
#define HAVE_OFF_T 1

#define SIZEOF_INT 4
#define SIZEOF_LONG 8
#define SIZEOF_LONG_LONG 8
#define SIZEOF___INT64 8
#define SIZEOF_OFF_T 4
#ifdef _WIN64
#define SIZEOF_VOIDP 8
#define SIZEOF_SIZE_T 8
#else
#define SIZEOF_VOIDP 8
#define SIZEOF_SIZE_T 4
#endif
#define SIZEOF_FLOAT 4
#define SIZEOF_DOUBLE 8
#define TOKEN_PASTE(x,y) x##y
#ifndef NORETURN
#if _MSC_VER > 1100
#define NORETURN(x) __declspec(noreturn) x
#else
#define NORETURN(x) x
#endif
#endif
#define HAVE_DECL_SYS_NERR 1
#define HAVE_FCNTL_H 1
#define HAVE_SYS_UTIME_H 1
#define HAVE_MEMORY_H 1
#define uid_t int
#define gid_t int
#define GETGROUPS_T int
#define HAVE_ALLOCA 1
#define HAVE_DUP2 1
#define HAVE_MKDIR 1
#define HAVE_FLOCK 1
#define HAVE_FINITE 1
#define HAVE_HYPOT 1
#define HAVE_WAITPID 1
#define HAVE_CHSIZE 1
#define HAVE_TIMES 1
#define HAVE_TELLDIR 1
#define HAVE_SEEKDIR 1
#define HAVE_EXECVE 1
#define HAVE_DAYLIGHT 1
#define SETPGRP_VOID 1
#define inline __inline
#define NEED_IO_SEEK_BETWEEN_RW 1
#define RSHIFT(x,y) ((x)>>(int)y)
#define FILE_COUNT _cnt
#define FILE_READPTR _ptr
#define DEFAULT_KCODE KCODE_NONE
#define DLEXT ".so"
#define DLEXT2 ".dll"
