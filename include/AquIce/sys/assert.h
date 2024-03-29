#ifndef __AQUICE_SYS_ASSERT_H__
#define __AQUICE_SYS_ASSERT_H__

#if !defined(ENABLE_ASSERT)
#	define ENABLE_ASSERT 0
#endif

#define Statement(S) do { S } while(0)

// TODO Change the way to break the program (add an output)
#if !defined(AssertBreak)
#	include <stdio.h>
#	define AssertBreak(Expr) do { printf("Assert Failed\n"); ( *((int*)0) = 0 ); } while(0)
#endif

#if ENABLE_ASSERT
#	include <stdio.h>
#	define Assert(Expr) Statement( if(!(Expr)) { AssertBreak(Expr); } else { printf("Assert Success\n"); } )
#else
#	define Assert(Expr)
#endif

#endif // __AQUICE_SYS_ASSERT_H__