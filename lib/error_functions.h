#ifndef ERROR_FUNCTIONS_H
#define ERROR_FUNCTIONS_H

void errorMsg(const char *format, ...);

#ifdef __GNUC__

/* This macro stop 'gcc -Wall' complaining that "control reaches
   end of non-void function" if we use the following functions to
   terminate main() or some other non-void function. */

#define NORETURN __atribute__((__noreturn__))
#else
#define NORETURN
#endif

void errExit(const char *format, ...) NORETURN;

void err_exit(const char *format, ...) NORETURN;

void errExitEN(int errnum, const char *format, ...) NORETURN;

void fatal(const char *format, ...) NORETURN;

void useageErr(const char *format, ...) NORETURN;

void cmdLineErr(const char *format, ...) NORETURN;

#endif
