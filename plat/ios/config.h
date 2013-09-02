#ifndef TB_CONFIG_H
#define TB_CONFIG_H

// arm
#if defined(__tb_arch_armv5__)
# 	define TB_CONFIG_ARM_VERSION 			(5)
#elif defined(__tb_arch_armv6__)
# 	define TB_CONFIG_ARM_VERSION 			(6)
#elif defined(__tb_arch_armv7__)
# 	define TB_CONFIG_ARM_VERSION 			(7)
#elif defined(__tb_arch_armv7s__)
# 	define TB_CONFIG_ARM_VERSION 			(7)
#endif
#ifdef __thumb__
# 	define TB_CONFIG_ARM_THUMB
#endif
//#define TB_CONFIG_ARM_JAZELLE
//#define TB_CONFIG_ARM_VFP
//#define TB_CONFIG_ARM_MMU 
//#define TB_CONFIG_ARM_MPU 

// os
#define TB_CONFIG_OS_IOS
#define TB_CONFIG_OS_IOS_VERSION_MAJOR 	(5)
#define TB_CONFIG_OS_IOS_VERSION_MINOR 	(0)

// cpu
//#define TB_CONFIG_CPU_BIGENDIAN
//#define TB_CONFIG_CPU_HAS_CONDITIONAL_INSTR

// compiler
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_INLINE
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_INLINE_ASM
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_VARARG_MACRO
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_BUILTIN_FUNCTIONS
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_UNION_STRUCT
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_FUNC_AND_VOIDPTR_CAST
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_SPECIFIC_MEMBER_INITIAL
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_STRUCT_DEFINATION
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_ARRAY_DEFINATION
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_DYNAMIC_ARRAY_DEFINATION

// assembler
#define TB_CONFIG_ASSEMBLER_GAS
//#define TB_CONFIG_ASSEMBLER_MASM
//#define TB_CONFIG_ASSEMBLER_NASM
//#define TB_CONFIG_ASSEMBLER_YASM

// type
#define TB_CONFIG_TYPE_FLOAT

// optimization
//#define TB_CONFIG_OPTI_SSE2_ENABLE

// memory
#ifdef __tb_debug__
# 	define TB_CONFIG_MEMORY_POOL
#endif
//#define TB_CONFIG_MEMORY_UNALIGNED_ACCESS_ENABLE

// event
//#define TB_CONFIG_EVENT_HAVE_POSIX
#define TB_CONFIG_EVENT_HAVE_PTHREAD
//#define TB_CONFIG_EVENT_HAVE_SYSTEMV
//#define TB_CONFIG_EVENT_HAVE_WAITO

// aio
#define TB_CONFIG_AIO_HAVE_SELECT
//#define TB_CONFIG_AIO_HAVE_EPOLL
#define TB_CONFIG_AIO_HAVE_POLL
//#define TB_CONFIG_AIO_HAVE_PORT
//#define TB_CONFIG_AIO_HAVE_KQUEUE
//#define TB_CONFIG_AIO_HAVE_WAITO
//#define TB_CONFIG_AIO_HAVE_IOCP

// third party
#define TB_CONFIG_THIRD_ZLIB

// libc
#define TB_CONFIG_LIBC_HAVE_MEMCPY
//#define TB_CONFIG_LIBC_HAVE_MEMSET
#define TB_CONFIG_LIBC_HAVE_MEMMOV
#define TB_CONFIG_LIBC_HAVE_MEMCMP
#define TB_CONFIG_LIBC_HAVE_STRCAT
#define TB_CONFIG_LIBC_HAVE_STRNCAT
#define TB_CONFIG_LIBC_HAVE_STRCPY
#define TB_CONFIG_LIBC_HAVE_STRNCPY
//#define TB_CONFIG_LIBC_HAVE_STRLCPY
#define TB_CONFIG_LIBC_HAVE_STRLEN 
//#define TB_CONFIG_LIBC_HAVE_STRNLEN
#define TB_CONFIG_LIBC_HAVE_STRSTR
#define TB_CONFIG_LIBC_HAVE_STRISTR
#define TB_CONFIG_LIBC_HAVE_STRCMP
#define TB_CONFIG_LIBC_HAVE_STRICMP
#define TB_CONFIG_LIBC_HAVE_STRNCMP
#define TB_CONFIG_LIBC_HAVE_STRNICMP
//#define TB_CONFIG_LIBC_HAVE_WCSCAT
//#define TB_CONFIG_LIBC_HAVE_WCSNCAT
//#define TB_CONFIG_LIBC_HAVE_WCSCPY
//#define TB_CONFIG_LIBC_HAVE_WCSNCPY
//#define TB_CONFIG_LIBC_HAVE_WCSLCPY
//#define TB_CONFIG_LIBC_HAVE_WCSLEN 
//#define TB_CONFIG_LIBC_HAVE_WCSNLEN
//#define TB_CONFIG_LIBC_HAVE_WCSSTR
//#define TB_CONFIG_LIBC_HAVE_WCSISTR
//#define TB_CONFIG_LIBC_HAVE_WCSCMP
//#define TB_CONFIG_LIBC_HAVE_WCSICMP
//#define TB_CONFIG_LIBC_HAVE_WCSNCMP
//#define TB_CONFIG_LIBC_HAVE_WCSNICMP
//#define TB_CONFIG_LIBC_HAVE_WCSTOMBS
//#define TB_CONFIG_LIBC_HAVE_MBSTOWCS
#define TB_CONFIG_LIBC_HAVE_GMTIME
#define TB_CONFIG_LIBC_HAVE_MKTIME
#define TB_CONFIG_LIBC_HAVE_LOCALTIME
#define TB_CONFIG_LIBC_HAVE_SIGNAL
#define TB_CONFIG_LIBC_HAVE_SETJMP
#define TB_CONFIG_LIBC_HAVE_SIGSETJMP

// libm
#define TB_CONFIG_LIBM_HAVE_SINCOS
//#define TB_CONFIG_LIBM_HAVE_SINCOSF
#define TB_CONFIG_LIBM_HAVE_LOG2
#define TB_CONFIG_LIBM_HAVE_LOG2F

// the build version
#define TB_CONFIG_VERSION_BUILD 		[build]

#endif
