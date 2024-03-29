#ifndef __AQUICE_SYS_SYS_H__
#define __AQUICE_SYS_SYS_H__

#define global static
#define local static
#define fn static

#define Name(Var) #Var

#define ArrayCount(Array) (sizeof(Array) / sizeof((Array)[0]))

#endif