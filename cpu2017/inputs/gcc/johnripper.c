# 1 "modified/includes.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "modified/includes.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 374 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 385 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 386 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 375 "/usr/include/features.h" 2 3 4
# 398 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 399 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 390 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));


# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 873 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 913 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 943 "/usr/include/stdio.h" 3 4

# 2 "modified/includes.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 96 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 127 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 164 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 211 "/usr/include/string.h" 3 4

# 236 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 263 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 282 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 315 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 534 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 557 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 644 "/usr/include/string.h" 3 4

# 3 "modified/includes.c" 2
# 1 "modified/misc.h" 1
# 19 "modified/misc.h"
extern void error(void);




extern void pexit(char *format, ...)

 __attribute__ ((format (printf, 1, 2)));
# 35 "modified/misc.h"
extern int write_loop(int fd, char *buffer, int count);






extern char *fgetl(char *s, int size, FILE *stream);





extern char *strnfcpy(char *dst, char *src, int size);




extern char *strnzcpy(char *dst, char *src, int size);





extern char *strnzcat(char *dst, char *src, int size);




extern char *strlwr(char *s);
# 4 "modified/includes.c" 2
# 1 "modified/memory.h" 1
# 14 "modified/memory.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 324 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 146 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4

# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 124 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 211 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 513 "/usr/include/stdlib.h" 3 4


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 530 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 712 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 775 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 812 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 899 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 951 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 956 "/usr/include/stdlib.h" 2 3 4
# 968 "/usr/include/stdlib.h" 3 4

# 15 "modified/memory.h" 2

# 1 "modified/arch.h" 1
# 17 "modified/memory.h" 2
# 49 "modified/memory.h"
extern unsigned int mem_saving_level;





extern void *mem_alloc(size_t size);
# 73 "modified/memory.h"
extern void *mem_alloc_tiny(size_t size, size_t align);




extern void *mem_alloc_copy(size_t size, size_t align, void *src);




extern char *str_alloc_copy(char *src);
# 5 "modified/includes.c" 2
# 1 "modified/list.h" 1
# 16 "modified/list.h"
struct list_entry {
 struct list_entry *next;

 char data[1];
};





struct list_main {
 struct list_entry *head, *tail;

 int count;
};




extern void list_init(struct list_main **list);




extern void list_add(struct list_main *list, char *data);




extern void list_add_multi(struct list_main *list, char *data);





extern void list_add_unique(struct list_main *list, char *data);




extern void list_del_next(struct list_main *list, struct list_entry *prev);
# 6 "modified/includes.c" 2
# 1 "modified/getopt.h" 1
# 16 "modified/getopt.h"
typedef unsigned int opt_flags;





struct opt_entry {

 char *name;




 opt_flags flg_set, flg_clr;




 opt_flags req_set, req_clr;



 char *format;


 void *param;
};
# 70 "modified/getopt.h"
extern void opt_process(struct opt_entry *list, opt_flags *flg, char **argv);




extern void opt_check(struct opt_entry *list, opt_flags flg, char **argv);
# 7 "modified/includes.c" 2


# 1 "modified/params.h" 1
# 13 "modified/params.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include-fixed/limits.h" 2 3 4
# 14 "modified/params.h" 2
# 202 "modified/params.h"
extern int password_hash_sizes[7];
extern int password_hash_thresholds[7];
# 10 "modified/includes.c" 2
# 1 "modified/loader.h" 1
# 15 "modified/loader.h"
# 1 "modified/formats.h" 1
# 38 "modified/formats.h"
struct fmt_tests {
 char *ciphertext, *plaintext;
};




struct fmt_params {


 char *label;


 char *format_name;


 char *algorithm_name;


 char *benchmark_comment;


 int benchmark_length;


 int plaintext_length;


 int binary_size;


 int salt_size;


 int min_keys_per_crypt;
 int max_keys_per_crypt;


 unsigned int flags;



 struct fmt_tests *tests;
};







struct fmt_methods {




 void (*init)(void);




 int (*valid)(char *ciphertext);







 char *(*split)(char *ciphertext, int index);


 void *(*binary)(char *ciphertext);


 void *(*salt)(char *ciphertext);




 int (*binary_hash[7])(void *binary);



 int (*salt_hash)(void *salt);


 void (*set_salt)(void *salt);


 void (*set_key)(char *key, int index);


 char *(*get_key)(int index);




 void (*clear_keys)(void);




 void (*crypt_all)(int count);



 int (*get_hash[7])(int index);




 int (*cmp_all)(void *binary, int count);



 int (*cmp_one)(void *binary, int index);


 int (*cmp_exact)(char *source, int index);
};




struct fmt_private {
 int initialized;
};




struct fmt_main {
 struct fmt_params params;
 struct fmt_methods methods;
 struct fmt_private private;
 struct fmt_main *next;
};




extern struct fmt_main *fmt_list;




extern void fmt_register(struct fmt_main *format);




extern void fmt_init(struct fmt_main *format);





extern char *fmt_self_test(struct fmt_main *format);




extern void fmt_default_init(void);
extern int fmt_default_valid(char *ciphertext);
extern char *fmt_default_split(char *ciphertext, int index);
extern void *fmt_default_binary(char *ciphertext);
extern void *fmt_default_salt(char *ciphertext);
extern int fmt_default_binary_hash(void *binary);
extern int fmt_default_salt_hash(void *salt);
extern void fmt_default_set_salt(void *salt);
extern void fmt_default_clear_keys(void);
extern int fmt_default_get_hash(int index);
# 16 "modified/loader.h" 2




struct db_password {

 struct db_password *next;



 struct db_password *next_hash;


 void *binary;


 char *source;



 char *login;


 struct list_main *words;
};




struct db_keys_hash_entry {

 short next;


 short offset;
};




struct db_keys_hash {

 short hash[(1 << 7)];


 struct db_keys_hash_entry list[1];
};




struct db_keys {

 struct db_keys_hash *hash;


 char *ptr;


 int count;




 int have_words;


 int rule;


 int lock;


 char buffer[1];
};




struct db_salt {

 struct db_salt *next;


 void *salt;




 int (*index)(int index);


 struct db_password *list;


 struct db_password **hash;


 int hash_size;


 int count;


 struct db_keys *keys;
};




struct db_cracked {

 struct db_cracked *next;


 char *ciphertext, *plaintext;
};
# 153 "modified/loader.h"
struct db_options {

 unsigned int flags;


 struct list_main *users, *groups, *shells;


 int min_pps, max_pps;
};




struct db_main {

 int loaded;


 struct db_options *options;


 struct db_salt *salts;


 struct db_salt **salt_hash;
 struct db_password **password_hash;


 int (*password_hash_func)(void *binary);


 struct db_cracked **cracked_hash;


 struct list_main *plaintexts;


 int salt_count, password_count, guess_count;


 struct fmt_main *format;
};
# 205 "modified/loader.h"
extern void ldr_init_database(struct db_main *db, struct db_options *options);




extern void ldr_load_pw_file(struct db_main *db, char *name);




extern void ldr_load_pot_file(struct db_main *db, char *name);




extern void ldr_fix_database(struct db_main *db);




extern void ldr_show_pot_file(struct db_main *db, char *name);




extern void ldr_show_pw_file(struct db_main *db, char *name);
# 11 "modified/includes.c" 2
# 1 "modified/logger.h" 1
# 16 "modified/logger.h"
extern void log_init(char *log_name, char *pot_name, char *session);





extern void log_guess(char *login, char *ciphertext, char *plaintext);







extern void log_event(char *format, ...)

 __attribute__ ((format (printf, 1, 2)));







extern void log_discard(void);




extern void log_flush(void);




extern void log_done(void);
# 12 "modified/includes.c" 2
# 1 "modified/status.h" 1
# 13 "modified/status.h"
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 42 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

# 223 "/usr/include/time.h" 3 4
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
# 236 "/usr/include/time.h" 3 4



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));
# 430 "/usr/include/time.h" 3 4

# 14 "modified/status.h" 2

# 1 "modified/math.h" 1
# 16 "modified/math.h"
typedef struct {
 unsigned int lo, hi;
} _john_int64_t;

extern void add32to64(_john_int64_t *dst, unsigned int src);
extern void add64to64(_john_int64_t *dst, _john_int64_t *src);
extern void neg64(_john_int64_t *dst);
extern void mul32by32(_john_int64_t *dst, unsigned int m1, unsigned int m2);
extern void mul64by32(_john_int64_t *dst, unsigned int m);
extern unsigned int div64by32lo(_john_int64_t *src, unsigned int d);
extern void div64by32(_john_int64_t *dst, unsigned int d);
# 16 "modified/status.h" 2




struct status_main {
 clock_t start_time;
 unsigned int guess_count;
 _john_int64_t crypts;
 int pass;
 int progress;
};

extern struct status_main status;

extern int (*status_get_progress)(void);




extern unsigned int status_restored_time;






extern void status_init(int (*get_progress)(void), int start);
# 51 "modified/status.h"
extern void status_ticks_overflow_safety(void);




extern void status_update_crypts(unsigned int count);




extern unsigned int status_get_time(void);




extern void status_print(void);
# 13 "modified/includes.c" 2
# 1 "modified/recovery.h" 1
# 21 "modified/recovery.h"
extern char *rec_name;
extern int rec_name_completed;




extern int rec_version;




extern int rec_argc;
extern char **rec_argv;





extern unsigned int rec_check;




extern int rec_restoring_now;





extern void rec_init(struct db_main *db, void (*save_mode)(FILE *file));




extern void rec_save(void);





extern void rec_done(int save);




extern void rec_restore_args(int lock);




extern void rec_restore_mode(int (*restore_mode)(FILE *file));
# 14 "modified/includes.c" 2
# 1 "modified/options.h" 1
# 89 "modified/options.h"
struct options_main {

 opt_flags flags;


 struct list_main *passwd;


 struct db_options loader;


 char *session;


 char *format;


 char *wordlist;


 char *charset;


 char *external;


 int length;
};

extern struct options_main options;




extern void opt_init(char *name, int argc, char **argv);
# 15 "modified/includes.c" 2


# 1 "modified/external.h" 1
# 13 "modified/external.h"
# 1 "modified/compiler.h" 1
# 37 "modified/compiler.h"
extern char *c_errors[];




extern int c_errno;




typedef int c_int;




struct c_ident {

 struct c_ident *next;


 char *name;


 void *addr;
};





extern int c_compile(int (*ext_getchar)(void), void (*ext_rewind)(void),
 struct c_ident *externs);




extern void *c_lookup(char *name);







extern void c_execute_fast(void *addr);
# 14 "modified/external.h" 2







extern unsigned int ext_flags;

extern c_int ext_abort, ext_status;




extern void *f_filter;




extern void ext_init(char *mode);
# 44 "modified/external.h"
extern int ext_filter_body(char *in, char *out);




extern void do_external_crack(struct db_main *db);
# 18 "modified/includes.c" 2





# 1 "modified/signals.h" 1
# 22 "modified/signals.h"
extern volatile int event_pending;
extern volatile int event_abort;
extern volatile int event_save;
extern volatile int event_status;
extern volatile int event_ticksafety;
# 36 "modified/signals.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/times.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/times.h" 3 4



struct tms
  {
    clock_t tms_utime;
    clock_t tms_stime;

    clock_t tms_cutime;
    clock_t tms_cstime;
  };






extern clock_t times (struct tms *__buffer) __attribute__ ((__nothrow__ , __leaf__));


# 37 "modified/signals.h" 2

extern void sig_timer_emu_init(clock_t interval);
extern void sig_timer_emu_tick(void);






extern void sig_init(void);




extern void check_abort(int be_async_signal_safe);
# 24 "modified/includes.c" 2
# 1 "modified/rpp.h" 1
# 15 "modified/rpp.h"
# 1 "modified/config.h" 1
# 16 "modified/config.h"
struct cfg_param {
 struct cfg_param *next;
 char *name, *value;
};




struct cfg_line {
 struct cfg_line *next;
 char *data;
 int number;
};





struct cfg_list {
 struct cfg_line *head, *tail;
};




struct cfg_section {
 struct cfg_section *next;
 char *name;
 struct cfg_param *params;
 struct cfg_list *list;
};




extern char *cfg_name;




extern void cfg_init(char *name, int allow_missing);





extern struct cfg_list *cfg_get_list(char *section, char *subsection);





extern char *cfg_get_param(char *section, char *subsection, char *param);




extern int cfg_get_int(char *section, char *subsection, char *param);




extern int cfg_get_bool(char *section, char *subsection, char *param, int def);
# 16 "modified/rpp.h" 2




struct rpp_range {

 char *pos;


 int count;


 int index;


 int flag_p;


 int flag_r;


 long mask[0x100 / 32];


 char chars[0x100];
};




struct rpp_ref {

 char *pos;


 int range;
};




struct rpp_context {

 struct cfg_line *input;


 char output[0x100];


 int count;


 int refs_count;


 struct rpp_ref refs[16];


 struct rpp_range ranges[16];
};





extern int rpp_init(struct rpp_context *ctx, char *subsection);




extern char *rpp_next(struct rpp_context *ctx);
# 25 "modified/includes.c" 2
# 1 "modified/rules.h" 1
# 30 "modified/rules.h"
extern char *rules_errors[];




extern int rules_errno;





extern int rules_line;




extern void rules_init(int max_length);
# 60 "modified/rules.h"
extern char *rules_reject(char *rule, int split, char *last,
 struct db_main *db);
# 76 "modified/rules.h"
extern char *rules_apply(char *word, char *rule, int split, char *last);
# 85 "modified/rules.h"
extern int rules_check(struct rpp_context *start, int split);





extern int rules_count(struct rpp_context *start, int split);
# 26 "modified/includes.c" 2
# 1 "modified/cracker.h" 1
# 22 "modified/cracker.h"
extern void crk_init(struct db_main *db, void (*fix_state)(void),
 struct db_keys *guesses);






extern int crk_process_key(char *key);





extern int crk_process_salt(struct db_salt *salt);





extern char *crk_get_key1(void);
extern char *crk_get_key2(void);




extern void crk_done(void);
# 27 "modified/includes.c" 2


# 1 "modified/common.h" 1
# 19 "modified/common.h"
typedef unsigned int ARCH_WORD_32;
# 66 "modified/common.h"
extern char itoa64[64], atoi64[0x100];
extern char itoa16[16], atoi16[0x100];




extern void common_init(void);
# 30 "modified/includes.c" 2
# 1 "modified/DES_std.h" 1
# 24 "modified/DES_std.h"
extern unsigned char DES_E[48];
extern unsigned char DES_PC1[56];
extern unsigned char DES_ROT[16];
extern unsigned char DES_PC2[48];




typedef long DES_KS[128 / 4];
extern DES_KS DES_KS_current;




typedef unsigned long DES_binary[16 / 4];




extern DES_binary DES_IV;




extern long DES_count;
# 127 "modified/DES_std.h"
extern void DES_std_init(void);




extern void DES_std_set_salt(long salt);




extern void DES_raw_set_key(char *key);




extern void DES_std_set_key(char *key);




extern void DES_std_set_block(long R, long L);




extern void DES_std_get_block(DES_binary binary, unsigned long out[2]);







extern void DES_std_crypt(DES_KS KS, DES_binary out);





extern long DES_raw_get_salt(char *ciphertext);




extern long DES_std_get_salt(char *ciphertext);




extern long DES_raw_get_count(char *ciphertext);






extern long *DES_do_IP(long in[2]);




extern long *DES_raw_get_binary(char *ciphertext);





extern long *DES_std_get_binary(char *ciphertext);
# 31 "modified/includes.c" 2
# 227 "modified/includes.c"
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 255 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 304 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 353 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 417 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 525 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 543 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 598 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 700 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 756 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 871 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 872 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 969 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 993 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1081 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1151 "/usr/include/unistd.h" 3 4

# 228 "modified/includes.c" 2
# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 33 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;

# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4
# 80 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 58 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
# 153 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};



enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};


enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};


enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 307 "/usr/include/x86_64-linux-gnu/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 81 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 100 "/usr/include/signal.h" 3 4


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 114 "/usr/include/signal.h" 3 4

# 127 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);




extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 167 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig);
# 189 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 209 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 245 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 246 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
# 303 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];


struct sigvec
  {
    __sighandler_t sv_handler;
    int sv_mask;

    int sv_flags;

  };
# 327 "/usr/include/signal.h" 3 4
extern int sigvec (int __sig, const struct sigvec *__vec,
     struct sigvec *__ovec) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 121 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 333 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 343 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__));

# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 49 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 350 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
__extension__ typedef long long int greg_t;





typedef greg_t gregset_t[23];
# 92 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int padding[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 353 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));
# 388 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));
# 389 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));




# 229 "modified/includes.c" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/time.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/sys/time.h" 2 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 71 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     __attribute__ ((__nothrow__ , __leaf__));





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__ , __leaf__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__ , __leaf__));




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__ , __leaf__));




extern int utimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));
# 189 "/usr/include/x86_64-linux-gnu/sys/time.h" 3 4

# 230 "modified/includes.c" 2
# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 58 "/usr/include/errno.h" 3 4

# 231 "modified/includes.c" 2
# 1 "modified/tty.h" 1
# 19 "modified/tty.h"
extern void tty_init(int stdin_mode);




extern int tty_getchar(void);




extern void tty_done(void);
# 232 "modified/includes.c" 2
# 277 "modified/includes.c"
# 1 "modified/single.h" 1
# 18 "modified/single.h"
extern void do_single_crack(struct db_main *db);
# 278 "modified/includes.c" 2
# 1 "modified/wordlist.h" 1
# 19 "modified/wordlist.h"
extern void do_wordlist_crack(struct db_main *db, char *name, int rules);
# 279 "modified/includes.c" 2
# 1 "modified/inc.h" 1
# 18 "modified/inc.h"
extern void do_incremental_crack(struct db_main *db, char *mode);
# 280 "modified/includes.c" 2

# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 103 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };
# 106 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 209 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 238 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 263 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 284 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
# 321 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 399 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 442 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));
# 534 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 282 "modified/includes.c" 2
# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 341 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 415 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4

# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 68 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 69 "/usr/include/fcntl.h" 2 3 4
# 137 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 146 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 170 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 192 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 238 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 260 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 282 "/usr/include/fcntl.h" 3 4

# 283 "modified/includes.c" 2
# 300 "modified/includes.c"
# 1 "modified/idle.h" 1
# 19 "modified/idle.h"
extern int idle_requested(struct fmt_main *format);




extern void idle_init(struct fmt_main *format);





extern void idle_yield(void);
# 301 "modified/includes.c" 2
# 312 "modified/includes.c"
# 1 "modified/path.h" 1
# 16 "modified/path.h"
extern void path_init(char **argv);





extern char *path_expand(char *name);





extern char *path_session(char *session, char *suffix);




extern void path_done(void);
# 313 "modified/includes.c" 2
# 1 "modified/charset.h" 1
# 27 "modified/charset.h"
struct charset_header {

 char version[4];



 unsigned char check[24];


 unsigned char min, max;


 unsigned char length;


 unsigned char count;


 unsigned char offsets[8][4];
# 57 "modified/charset.h"
 unsigned char order
  [8 * (8 + 1) / 2 * (0x7E - ' ' + 1) * 3];
};





extern int charset_read_header(FILE *file, struct charset_header *header);




extern void do_makechars(struct db_main *db, char *charset);
# 314 "modified/includes.c" 2
# 1 "modified/DES_bs.h" 1
# 41 "modified/DES_bs.h"
typedef struct {



 union {
  long *p[0x300];



 } KS;
 union {
  long *E[96];
  unsigned char u[0x100];
 } E;
 long K[56];
 long B[64];



 long zero;
 long ones;
 long masks[8];

 union {
  unsigned char c[8][8][sizeof(long)];
  long v[8][8];
 } xkeys;
 unsigned char *pxkeys[32];
 int keys_changed;
 unsigned int salt;
 long *Ens[48];
} DES_bs_combined;
# 111 "modified/DES_bs.h"
extern DES_bs_combined DES_bs_all;







extern void DES_bs_init(int LM, int cpt);




extern void DES_bs_set_salt(long salt);







extern void DES_bs_set_key(char *key, int index);
extern void DES_bs_set_key_LM(char *key, int index);




extern void DES_bs_crypt(int count, int keys_count);




extern void DES_bs_crypt_25(int keys_count);




extern void DES_bs_crypt_LM(int keys_count);





extern long *DES_bs_get_binary(char *ciphertext);




extern long *DES_bs_get_binary_LM(char *ciphertext);




extern int DES_bs_get_hash_0(int index);
extern int DES_bs_get_hash_1(int index);
extern int DES_bs_get_hash_2(int index);
extern int DES_bs_get_hash_3(int index);
extern int DES_bs_get_hash_4(int index);
extern int DES_bs_get_hash_5(int index);
extern int DES_bs_get_hash_6(int index);





extern int DES_bs_cmp_all(long *binary, int count);




extern int DES_bs_cmp_one(long *binary, int count, int index);
# 315 "modified/includes.c" 2
# 433 "modified/includes.c"
# 1 "modified/nonstd.c.inc" 1
# 135 "modified/nonstd.c.inc"
typedef unsigned long vtype;
__attribute__((always_inline)) static void
s1(vtype a1, vtype a2, vtype a3, vtype a4, vtype a5, vtype a6,
    vtype * out1, vtype * out2, vtype * out3, vtype * out4)
{
 vtype x55005500, x5A0F5A0F, x3333FFFF, x66666666, x22226666, x2D2D6969,
     x25202160;
 vtype x00FFFF00, x33CCCC33, x4803120C, x2222FFFF, x6A21EDF3, x4A01CC93;
 vtype x5555FFFF, x7F75FFFF, x00D20096, x7FA7FF69;
 vtype x0A0A0000, x0AD80096, x00999900, x0AD99996;
 vtype x22332233, x257AA5F0, x054885C0, xFAB77A3F, x2221EDF3, xD89697CC;
 vtype x05B77AC0, x05F77AD6, x36C48529, x6391D07C, xBB0747B0;
 vtype x4C460000, x4EDF9996, x2D4E49EA, xBBFFFFB0, x96B1B65A;
 vtype x5AFF5AFF, x52B11215, x4201C010, x10B0D205;
 vtype x00, x01, x10, x11, x20, x21, x30, x31;

 vandn(x55005500, a1, a5);
 vxor(x5A0F5A0F, a4, x55005500);
 vor(x3333FFFF, a3, a6);
 vxor(x66666666, a1, a3);
 vand(x22226666, x3333FFFF, x66666666);
 vxor(x2D2D6969, a4, x22226666);
 vandn(x25202160, x2D2D6969, x5A0F5A0F);

 vxor(x00FFFF00, a5, a6);
 vxor(x33CCCC33, a3, x00FFFF00);
 vandn(x4803120C, x5A0F5A0F, x33CCCC33);
 vor(x2222FFFF, a6, x22226666);
 vxor(x6A21EDF3, x4803120C, x2222FFFF);
 vandn(x4A01CC93, x6A21EDF3, x25202160);

 vor(x5555FFFF, a1, a6);
 vor(x7F75FFFF, x6A21EDF3, x5555FFFF);
 vandn(x00D20096, a5, x2D2D6969);
 vxor(x7FA7FF69, x7F75FFFF, x00D20096);

 vandn(x0A0A0000, a4, x5555FFFF);
 vxor(x0AD80096, x00D20096, x0A0A0000);
 vandn(x00999900, x00FFFF00, x66666666);
 vor(x0AD99996, x0AD80096, x00999900);

 vandn(x22332233, a3, x55005500);
 vxor(x257AA5F0, x5A0F5A0F, x7F75FFFF);
 vandn(x054885C0, x257AA5F0, x22332233);
 vnot(xFAB77A3F, x054885C0);
 vand(x2221EDF3, x3333FFFF, x6A21EDF3);
 vxor(xD89697CC, xFAB77A3F, x2221EDF3);
 vandn(x20, x7FA7FF69, a2);
 vxor(x21, x20, xD89697CC);
 vxor(*out3, *out3, x21);

 vxor(x05B77AC0, x00FFFF00, x054885C0);
 vor(x05F77AD6, x00D20096, x05B77AC0);
 vxor(x36C48529, x3333FFFF, x05F77AD6);
 vxor(x6391D07C, a1, x36C48529);
 vxor(xBB0747B0, xD89697CC, x6391D07C);
 vor(x00, x25202160, a2);
 vxor(x01, x00, xBB0747B0);
 vxor(*out1, *out1, x01);

 vxor(x4C460000, x3333FFFF, x7F75FFFF);
 vor(x4EDF9996, x0AD99996, x4C460000);
 vxor(x2D4E49EA, x6391D07C, x4EDF9996);
 vor(xBBFFFFB0, x00FFFF00, xBB0747B0);
 vxor(x96B1B65A, x2D4E49EA, xBBFFFFB0);
 vor(x10, x4A01CC93, a2);
 vxor(x11, x10, x96B1B65A);
 vxor(*out2, *out2, x11);

 vor(x5AFF5AFF, a5, x5A0F5A0F);
 vandn(x52B11215, x5AFF5AFF, x2D4E49EA);
 vand(x4201C010, x4A01CC93, x6391D07C);
 vxor(x10B0D205, x52B11215, x4201C010);
 vor(x30, x10B0D205, a2);
 vxor(x31, x30, x0AD99996);
 vxor(*out4, *out4, x31);
}
# 442 "modified/nonstd.c.inc"
__attribute__((always_inline)) static void
s2(vtype a1, vtype a2, vtype a3, vtype a4, vtype a5, vtype a6,
    vtype * out1, vtype * out2, vtype * out3, vtype * out4)
{
 vtype x33CC33CC;
 vtype x55550000, x00AA00FF, x33BB33FF;
 vtype x33CC0000, x11441144, x11BB11BB, x003311BB;
 vtype x00000F0F, x336600FF, x332200FF, x332200F0;
 vtype x0302000F, xAAAAAAAA, xA9A8AAA5, x33CCCC33, x33CCC030, x9A646A95;
 vtype x00333303, x118822B8, xA8208805, x3CC3C33C, x94E34B39;
 vtype x0331330C, x3FF3F33C, xA9DF596A, xA9DF5F6F, x962CAC53;
 vtype x97D27835, x81D25825, x812D58DA, x802158DA, x1A45324F;
 vtype x0A451047, xBBDFDD7B, xB19ACD3C;
 vtype x00, x01, x10, x11, x20, x21, x30, x31;

 vxor(x33CC33CC, a2, a5);

 vandn(x55550000, a1, a6);
 vandn(x00AA00FF, a5, x55550000);
 vor(x33BB33FF, a2, x00AA00FF);

 vandn(x33CC0000, x33CC33CC, a6);
 vand(x11441144, a1, x33CC33CC);
 vxor(x11BB11BB, a5, x11441144);
 vandn(x003311BB, x11BB11BB, x33CC0000);

 vand(x00000F0F, a3, a6);
 vxor(x336600FF, x00AA00FF, x33CC0000);
 vand(x332200FF, x33BB33FF, x336600FF);
 vandn(x332200F0, x332200FF, x00000F0F);

 vand(x0302000F, a3, x332200FF);
 vnot(xAAAAAAAA, a1);
 vxor(xA9A8AAA5, x0302000F, xAAAAAAAA);
 vxor(x33CCCC33, a6, x33CC33CC);
 vandn(x33CCC030, x33CCCC33, x00000F0F);
 vxor(x9A646A95, xA9A8AAA5, x33CCC030);
 vandn(x10, a4, x332200F0);
 vxor(x11, x10, x9A646A95);
 vxor(*out2, *out2, x11);

 vandn(x00333303, a2, x33CCC030);
 vxor(x118822B8, x11BB11BB, x00333303);
 vandn(xA8208805, xA9A8AAA5, x118822B8);
 vxor(x3CC3C33C, a3, x33CCCC33);
 vxor(x94E34B39, xA8208805, x3CC3C33C);
 vandn(x00, x33BB33FF, a4);
 vxor(x01, x00, x94E34B39);
 vxor(*out1, *out1, x01);

 vxor(x0331330C, x0302000F, x00333303);
 vor(x3FF3F33C, x3CC3C33C, x0331330C);
 vxor(xA9DF596A, x33BB33FF, x9A646A95);
 vor(xA9DF5F6F, x00000F0F, xA9DF596A);
 vxor(x962CAC53, x3FF3F33C, xA9DF5F6F);

 vxor(x97D27835, x94E34B39, x0331330C);
 vand(x81D25825, xA9DF5F6F, x97D27835);
 vxor(x812D58DA, a5, x81D25825);
 vandn(x802158DA, x812D58DA, x33CC0000);
 vxor(x1A45324F, x9A646A95, x802158DA);
 vor(x20, x1A45324F, a4);
 vxor(x21, x20, x962CAC53);
 vxor(*out3, *out3, x21);

 vandn(x0A451047, x1A45324F, x118822B8);
 vor(xBBDFDD7B, x33CCCC33, xA9DF596A);
 vxor(xB19ACD3C, x0A451047, xBBDFDD7B);
 vor(x30, x003311BB, a4);
 vxor(x31, x30, xB19ACD3C);
 vxor(*out4, *out4, x31);
}
# 743 "modified/nonstd.c.inc"
__attribute__((always_inline)) static void
s3(vtype a1, vtype a2, vtype a3, vtype a4, vtype a5, vtype a6,
    vtype * out1, vtype * out2, vtype * out3, vtype * out4)
{
 vtype x44444444, x0F0FF0F0, x4F4FF4F4, x00FFFF00, x00AAAA00, x4FE55EF4;
 vtype x3C3CC3C3, x3C3C0000, x7373F4F4, x0C840A00;
 vtype x00005EF4, x00FF5EFF, x00555455, x3C699796;
 vtype x000FF000, x55AA55AA, x26D9A15E, x2FDFAF5F, x2FD00F5F;
 vtype x55AAFFAA, x28410014, x000000FF, x000000CC, x284100D8;
 vtype x204000D0, x3C3CC3FF, x1C3CC32F, x4969967A;
 vtype x4CC44CC4, x40C040C0, x69963C69, x9669C396, xD6A98356;
 vtype x000F00F0, xFEBDC3D7, xFEB0C307, x4CEEEEC4, xB25E2DC3;
 vtype x00, x01, x10, x11, x20, x21, x30, x31;

 vandn(x44444444, a1, a2);
 vxor(x0F0FF0F0, a3, a6);
 vor(x4F4FF4F4, x44444444, x0F0FF0F0);
 vxor(x00FFFF00, a4, a6);
 vandn(x00AAAA00, x00FFFF00, a1);
 vxor(x4FE55EF4, x4F4FF4F4, x00AAAA00);

 vxor(x3C3CC3C3, a2, x0F0FF0F0);
 vandn(x3C3C0000, x3C3CC3C3, a6);
 vxor(x7373F4F4, x4F4FF4F4, x3C3C0000);
 vandn(x0C840A00, x4FE55EF4, x7373F4F4);

 vand(x00005EF4, a6, x4FE55EF4);
 vor(x00FF5EFF, a4, x00005EF4);
 vand(x00555455, a1, x00FF5EFF);
 vxor(x3C699796, x3C3CC3C3, x00555455);
 vandn(x30, x4FE55EF4, a5);
 vxor(x31, x30, x3C699796);
 vxor(*out4, *out4, x31);

 vand(x000FF000, x0F0FF0F0, x00FFFF00);
 vxor(x55AA55AA, a1, a4);
 vxor(x26D9A15E, x7373F4F4, x55AA55AA);
 vor(x2FDFAF5F, a3, x26D9A15E);
 vandn(x2FD00F5F, x2FDFAF5F, x000FF000);

 vor(x55AAFFAA, x00AAAA00, x55AA55AA);
 vandn(x28410014, x3C699796, x55AAFFAA);
 vand(x000000FF, a4, a6);
 vandn(x000000CC, x000000FF, a2);
 vxor(x284100D8, x28410014, x000000CC);

 vandn(x204000D0, x284100D8, a3);
 vor(x3C3CC3FF, x3C3CC3C3, x000000FF);
 vandn(x1C3CC32F, x3C3CC3FF, x204000D0);
 vxor(x4969967A, a1, x1C3CC32F);
 vand(x10, x2FD00F5F, a5);
 vxor(x11, x10, x4969967A);
 vxor(*out2, *out2, x11);

 vandn(x4CC44CC4, x4FE55EF4, a2);
 vandn(x40C040C0, x4CC44CC4, a3);
 vxor(x69963C69, x3C3CC3C3, x55AAFFAA);
 vnot(x9669C396, x69963C69);
 vxor(xD6A98356, x40C040C0, x9669C396);
 vandn(x00, a5, x0C840A00);
 vxor(x01, x00, xD6A98356);
 vxor(*out1, *out1, x01);

 vand(x000F00F0, a4, x0F0FF0F0);
 vor(xFEBDC3D7, x3C3CC3C3, xD6A98356);
 vandn(xFEB0C307, xFEBDC3D7, x000F00F0);
 vor(x4CEEEEC4, x00AAAA00, x4CC44CC4);
 vxor(xB25E2DC3, xFEB0C307, x4CEEEEC4);
 vor(x20, x284100D8, a5);
 vxor(x21, x20, xB25E2DC3);
 vxor(*out3, *out3, x21);
}
# 1114 "modified/nonstd.c.inc"
__attribute__((always_inline)) static void
s4(vtype a1, vtype a2, vtype a3, vtype a4, vtype a5, vtype a6,
    vtype * out1, vtype * out2, vtype * out3, vtype * out4)
{
 vtype x5A5A5A5A, x0F0FF0F0;
 vtype x33FF33FF, x33FFCC00, x0C0030F0, x0C0CC0C0, x0CF3C03F, x5EFBDA7F,
     x52FBCA0F, x61C8F93C;
 vtype x00C0C03C, x0F0F30C0, x3B92A366, x30908326, x3C90B3D6;
 vtype x33CC33CC, x0C0CFFFF, x379E5C99, x04124C11, x56E9861E, xA91679E1;
 vtype x9586CA37, x8402C833, x84C2C83F, xB35C94A6;
 vtype x00, x01, x10, x11, x20, x21, x30, x31;

 vxor(x5A5A5A5A, a1, a3);
 vxor(x0F0FF0F0, a3, a5);
 vor(x33FF33FF, a2, a4);
 vxor(x33FFCC00, a5, x33FF33FF);
 vandn(x0C0030F0, x0F0FF0F0, x33FFCC00);
 vandn(x0C0CC0C0, x0F0FF0F0, a2);
 vxor(x0CF3C03F, a4, x0C0CC0C0);
 vor(x5EFBDA7F, x5A5A5A5A, x0CF3C03F);
 vandn(x52FBCA0F, x5EFBDA7F, x0C0030F0);
 vxor(x61C8F93C, a2, x52FBCA0F);

 vand(x00C0C03C, x0CF3C03F, x61C8F93C);
 vandn(x0F0F30C0, x0F0FF0F0, x00C0C03C);
 vxor(x3B92A366, x5A5A5A5A, x61C8F93C);
 vandn(x30908326, x3B92A366, x0F0F30C0);
 vxor(x3C90B3D6, x0C0030F0, x30908326);

 vxor(x33CC33CC, a2, a4);
 vor(x0C0CFFFF, a5, x0C0CC0C0);
 vxor(x379E5C99, x3B92A366, x0C0CFFFF);
 vandn(x04124C11, x379E5C99, x33CC33CC);
 vxor(x56E9861E, x52FBCA0F, x04124C11);
 vandn(x00, a6, x3C90B3D6);
 vxor(x01, x00, x56E9861E);
 vxor(*out1, *out1, x01);

 vnot(xA91679E1, x56E9861E);
 vandn(x10, x3C90B3D6, a6);
 vxor(x11, x10, xA91679E1);
 vxor(*out2, *out2, x11);

 vxor(x9586CA37, x3C90B3D6, xA91679E1);
 vandn(x8402C833, x9586CA37, x33CC33CC);
 vor(x84C2C83F, x00C0C03C, x8402C833);
 vxor(xB35C94A6, x379E5C99, x84C2C83F);
 vor(x20, x61C8F93C, a6);
 vxor(x21, x20, xB35C94A6);
 vxor(*out3, *out3, x21);

 vand(x30, a6, x61C8F93C);
 vxor(x31, x30, xB35C94A6);
 vxor(*out4, *out4, x31);
}
# 1249 "modified/nonstd.c.inc"
__attribute__((always_inline)) static void
s5(vtype a1, vtype a2, vtype a3, vtype a4, vtype a5, vtype a6,
    vtype * out1, vtype * out2, vtype * out3, vtype * out4)
{
 vtype x77777777, x77770000, x22225555, x11116666, x1F1F6F6F;
 vtype x70700000, x43433333, x00430033, x55557777, x55167744, x5A19784B;
 vtype x5A1987B4, x7A3BD7F5, x003B00F5, x221955A0, x05050707, x271C52A7;
 vtype x2A2A82A0, x6969B193, x1FE06F90, x16804E00, xE97FB1FF;
 vtype x43403302, x35CAED30, x37DEFFB7, x349ECCB5, x0B01234A;
 vtype x101884B4, x0FF8EB24, x41413333, x4FF9FB37, x4FC2FBC2;
 vtype x22222222, x16BCEE97, x0F080B04, x19B4E593;
 vtype x5C5C5C5C, x4448184C, x2DDABE71, x6992A63D;
 vtype x00, x01, x10, x11, x20, x21, x30, x31;

 vor(x77777777, a1, a3);
 vandn(x77770000, x77777777, a6);
 vxor(x22225555, a1, x77770000);
 vxor(x11116666, a3, x22225555);
 vor(x1F1F6F6F, a4, x11116666);

 vandn(x70700000, x77770000, a4);
 vxor(x43433333, a3, x70700000);
 vand(x00430033, a5, x43433333);
 vor(x55557777, a1, x11116666);
 vxor(x55167744, x00430033, x55557777);
 vxor(x5A19784B, a4, x55167744);

 vxor(x5A1987B4, a6, x5A19784B);
 vor(x7A3BD7F5, x22225555, x5A1987B4);
 vand(x003B00F5, a5, x7A3BD7F5);
 vxor(x221955A0, x22225555, x003B00F5);
 vand(x05050707, a4, x55557777);
 vxor(x271C52A7, x221955A0, x05050707);

 vandn(x2A2A82A0, x7A3BD7F5, a1);
 vxor(x6969B193, x43433333, x2A2A82A0);
 vxor(x1FE06F90, a5, x1F1F6F6F);
 vandn(x16804E00, x1FE06F90, x6969B193);
 vnot(xE97FB1FF, x16804E00);
 vandn(x20, xE97FB1FF, a2);
 vxor(x21, x20, x5A19784B);
 vxor(*out3, *out3, x21);

 vandn(x43403302, x43433333, x003B00F5);
 vxor(x35CAED30, x2A2A82A0, x1FE06F90);
 vor(x37DEFFB7, x271C52A7, x35CAED30);
 vandn(x349ECCB5, x37DEFFB7, x43403302);
 vandn(x0B01234A, x1F1F6F6F, x349ECCB5);

 vand(x101884B4, x5A1987B4, x349ECCB5);
 vxor(x0FF8EB24, x1FE06F90, x101884B4);
 vand(x41413333, x43433333, x55557777);
 vor(x4FF9FB37, x0FF8EB24, x41413333);
 vxor(x4FC2FBC2, x003B00F5, x4FF9FB37);
 vand(x30, x4FC2FBC2, a2);
 vxor(x31, x30, x271C52A7);
 vxor(*out4, *out4, x31);

 vxor(x22222222, a1, x77777777);
 vxor(x16BCEE97, x349ECCB5, x22222222);
 vand(x0F080B04, a4, x0FF8EB24);
 vxor(x19B4E593, x16BCEE97, x0F080B04);
 vor(x00, x0B01234A, a2);
 vxor(x01, x00, x19B4E593);
 vxor(*out1, *out1, x01);

 vxor(x5C5C5C5C, x1F1F6F6F, x43433333);
 vandn(x4448184C, x5C5C5C5C, x19B4E593);
 vxor(x2DDABE71, x22225555, x0FF8EB24);
 vxor(x6992A63D, x4448184C, x2DDABE71);
 vand(x10, x1F1F6F6F, a2);
 vxor(x11, x10, x6992A63D);
 vxor(*out2, *out2, x11);
}
# 1405 "modified/nonstd.c.inc"
__attribute__((always_inline)) static void
s6(vtype a1, vtype a2, vtype a3, vtype a4, vtype a5, vtype a6,
    vtype * out1, vtype * out2, vtype * out3, vtype * out4)
{
 vtype x33CC33CC;
 vtype x3333FFFF, x11115555, x22DD6699, x22DD9966, x00220099;
 vtype x00551144, x33662277, x5A5A5A5A, x7B7E7A7F, x59A31CE6;
 vtype x09030C06, x09030000, x336622FF, x3A6522FF;
 vtype x484D494C, x0000B6B3, x0F0FB9BC, x00FC00F9, x0FFFB9FD;
 vtype x5DF75DF7, x116600F7, x1E69B94B, x1668B94B;
 vtype x7B7B7B7B, x411E5984, x1FFFFDFD, x5EE1A479;
 vtype x3CB4DFD2, x004B002D, xB7B2B6B3, xCCC9CDC8, xCC82CDE5;
 vtype x0055EEBB, x5A5AECE9, x0050ECA9, xC5CAC1CE, xC59A2D67;
 vtype x00, x01, x10, x11, x20, x21, x30, x31;

 vxor(x33CC33CC, a2, a5);

 vor(x3333FFFF, a2, a6);
 vand(x11115555, a1, x3333FFFF);
 vxor(x22DD6699, x33CC33CC, x11115555);
 vxor(x22DD9966, a6, x22DD6699);
 vandn(x00220099, a5, x22DD9966);

 vand(x00551144, a1, x22DD9966);
 vxor(x33662277, a2, x00551144);
 vxor(x5A5A5A5A, a1, a3);
 vor(x7B7E7A7F, x33662277, x5A5A5A5A);
 vxor(x59A31CE6, x22DD6699, x7B7E7A7F);

 vand(x09030C06, a3, x59A31CE6);
 vandn(x09030000, x09030C06, a6);
 vor(x336622FF, x00220099, x33662277);
 vxor(x3A6522FF, x09030000, x336622FF);
 vand(x30, x3A6522FF, a4);
 vxor(x31, x30, x59A31CE6);
 vxor(*out4, *out4, x31);

 vxor(x484D494C, a2, x7B7E7A7F);
 vandn(x0000B6B3, a6, x484D494C);
 vxor(x0F0FB9BC, a3, x0000B6B3);
 vandn(x00FC00F9, a5, x09030C06);
 vor(x0FFFB9FD, x0F0FB9BC, x00FC00F9);

 vor(x5DF75DF7, a1, x59A31CE6);
 vand(x116600F7, x336622FF, x5DF75DF7);
 vxor(x1E69B94B, x0F0FB9BC, x116600F7);
 vandn(x1668B94B, x1E69B94B, x09030000);
 vor(x20, x00220099, a4);
 vxor(x21, x20, x1668B94B);
 vxor(*out3, *out3, x21);

 vor(x7B7B7B7B, a2, x5A5A5A5A);
 vxor(x411E5984, x3A6522FF, x7B7B7B7B);
 vor(x1FFFFDFD, x11115555, x0FFFB9FD);
 vxor(x5EE1A479, x411E5984, x1FFFFDFD);

 vxor(x3CB4DFD2, x22DD6699, x1E69B94B);
 vandn(x004B002D, a5, x3CB4DFD2);
 vnot(xB7B2B6B3, x484D494C);
 vxor(xCCC9CDC8, x7B7B7B7B, xB7B2B6B3);
 vxor(xCC82CDE5, x004B002D, xCCC9CDC8);
 vandn(x10, xCC82CDE5, a4);
 vxor(x11, x10, x5EE1A479);
 vxor(*out2, *out2, x11);

 vxor(x0055EEBB, a6, x00551144);
 vxor(x5A5AECE9, a1, x0F0FB9BC);
 vand(x0050ECA9, x0055EEBB, x5A5AECE9);
 vxor(xC5CAC1CE, x09030C06, xCCC9CDC8);
 vxor(xC59A2D67, x0050ECA9, xC5CAC1CE);
 vandn(x00, x0FFFB9FD, a4);
 vxor(x01, x00, xC59A2D67);
 vxor(*out1, *out1, x01);
}
# 2601 "modified/nonstd.c.inc"
__attribute__((always_inline)) static void
s7(vtype a1, vtype a2, vtype a3, vtype a4, vtype a5, vtype a6,
    vtype * out1, vtype * out2, vtype * out3, vtype * out4)
{
 vtype x0FF00FF0, x3CC33CC3, x00003CC3, x0F000F00, x5A555A55, x00001841;
 vtype x00000F00, x33333C33, x7B777E77, x0FF0F00F, x74878E78;
 vtype x003C003C, x5A7D5A7D, x333300F0, x694E5A8D;
 vtype x0FF0CCCC, x000F0303, x5A505854, x33CC000F, x699C585B;
 vtype x7F878F78, x21101013, x7F979F7B, x30030CC0, x4F9493BB;
 vtype x6F9CDBFB, x0000DBFB, x00005151, x26DAC936, x26DA9867;
 vtype x21FF10FF, x21FFCB04, x2625C9C9, x27FFCBCD;
 vtype x27FF1036, x27FF103E, xB06B6C44, x97947C7A;
 vtype x00, x01, x10, x11, x20, x21, x30, x31;

 vxor(x0FF00FF0, a4, a5);
 vxor(x3CC33CC3, a3, x0FF00FF0);
 vand(x00003CC3, a6, x3CC33CC3);
 vand(x0F000F00, a4, x0FF00FF0);
 vxor(x5A555A55, a2, x0F000F00);
 vand(x00001841, x00003CC3, x5A555A55);

 vand(x00000F00, a6, x0F000F00);
 vxor(x33333C33, a3, x00000F00);
 vor(x7B777E77, x5A555A55, x33333C33);
 vxor(x0FF0F00F, a6, x0FF00FF0);
 vxor(x74878E78, x7B777E77, x0FF0F00F);
 vandn(x30, a1, x00001841);
 vxor(x31, x30, x74878E78);
 vxor(*out4, *out4, x31);

 vandn(x003C003C, a5, x3CC33CC3);
 vor(x5A7D5A7D, x5A555A55, x003C003C);
 vxor(x333300F0, x00003CC3, x33333C33);
 vxor(x694E5A8D, x5A7D5A7D, x333300F0);

 vxor(x0FF0CCCC, x00003CC3, x0FF0F00F);
 vandn(x000F0303, a4, x0FF0CCCC);
 vandn(x5A505854, x5A555A55, x000F0303);
 vxor(x33CC000F, a5, x333300F0);
 vxor(x699C585B, x5A505854, x33CC000F);

 vor(x7F878F78, x0F000F00, x74878E78);
 vand(x21101013, a3, x699C585B);
 vor(x7F979F7B, x7F878F78, x21101013);
 vandn(x30030CC0, x3CC33CC3, x0FF0F00F);
 vxor(x4F9493BB, x7F979F7B, x30030CC0);
 vandn(x00, x4F9493BB, a1);
 vxor(x01, x00, x694E5A8D);
 vxor(*out1, *out1, x01);

 vor(x6F9CDBFB, x699C585B, x4F9493BB);
 vand(x0000DBFB, a6, x6F9CDBFB);
 vand(x00005151, a2, x0000DBFB);
 vxor(x26DAC936, x694E5A8D, x4F9493BB);
 vxor(x26DA9867, x00005151, x26DAC936);

 vor(x21FF10FF, a5, x21101013);
 vxor(x21FFCB04, x0000DBFB, x21FF10FF);
 vxor(x2625C9C9, a5, x26DAC936);
 vor(x27FFCBCD, x21FFCB04, x2625C9C9);
 vand(x20, x27FFCBCD, a1);
 vxor(x21, x20, x699C585B);
 vxor(*out3, *out3, x21);

 vxor(x27FF1036, x0000DBFB, x27FFCBCD);
 vor(x27FF103E, x003C003C, x27FF1036);
 vnot(xB06B6C44, x4F9493BB);
 vxor(x97947C7A, x27FF103E, xB06B6C44);
 vandn(x10, x97947C7A, a1);
 vxor(x11, x10, x26DA9867);
 vxor(*out2, *out2, x11);
}
# 2955 "modified/nonstd.c.inc"
__attribute__((always_inline)) static void
s8(vtype a1, vtype a2, vtype a3, vtype a4, vtype a5, vtype a6,
    vtype * out1, vtype * out2, vtype * out3, vtype * out4)
{
 vtype x0C0C0C0C, x0000F0F0, x00FFF00F, x00555005, x00515001;
 vtype x33000330, x77555775, x30303030, x3030CFCF, x30104745, x30555745;
 vtype xFF000FF0, xCF1048B5, x080A080A, xC71A40BF, xCB164CB3;
 vtype x9E4319E6, x000019E6, xF429738C, xF4296A6A, xC729695A;
 vtype xC47C3D2F, xF77F3F3F, x9E43E619, x693CD926;
 vtype xF719A695, xF4FF73FF, x03E6D56A, x56B3803F;
 vtype xF700A600, x61008000, x03B7856B, x62B7056B;
 vtype x00, x01, x10, x11, x20, x21, x30, x31;

 vandn(x0C0C0C0C, a3, a2);
 vandn(x0000F0F0, a5, a3);
 vxor(x00FFF00F, a4, x0000F0F0);
 vand(x00555005, a1, x00FFF00F);
 vandn(x00515001, x00555005, x0C0C0C0C);

 vandn(x33000330, a2, x00FFF00F);
 vor(x77555775, a1, x33000330);
 vandn(x30303030, a2, a3);
 vxor(x3030CFCF, a5, x30303030);
 vand(x30104745, x77555775, x3030CFCF);
 vor(x30555745, x00555005, x30104745);

 vnot(xFF000FF0, x00FFF00F);
 vxor(xCF1048B5, x30104745, xFF000FF0);
 vandn(x080A080A, a3, x77555775);
 vxor(xC71A40BF, xCF1048B5, x080A080A);
 vxor(xCB164CB3, x0C0C0C0C, xC71A40BF);
 vor(x10, x00515001, a6);
 vxor(x11, x10, xCB164CB3);
 vxor(*out2, *out2, x11);

 vxor(x9E4319E6, a1, xCB164CB3);
 vand(x000019E6, a5, x9E4319E6);
 vxor(xF429738C, a2, xC71A40BF);
 vxor(xF4296A6A, x000019E6, xF429738C);
 vxor(xC729695A, x33000330, xF4296A6A);

 vxor(xC47C3D2F, x30555745, xF4296A6A);
 vor(xF77F3F3F, a2, xC47C3D2F);
 vxor(x9E43E619, a5, x9E4319E6);
 vxor(x693CD926, xF77F3F3F, x9E43E619);
 vand(x20, x30555745, a6);
 vxor(x21, x20, x693CD926);
 vxor(*out3, *out3, x21);

 vxor(xF719A695, x3030CFCF, xC729695A);
 vor(xF4FF73FF, a4, xF429738C);
 vxor(x03E6D56A, xF719A695, xF4FF73FF);
 vxor(x56B3803F, a1, x03E6D56A);
 vand(x30, x56B3803F, a6);
 vxor(x31, x30, xC729695A);
 vxor(*out4, *out4, x31);

 vandn(xF700A600, xF719A695, a4);
 vand(x61008000, x693CD926, xF700A600);
 vxor(x03B7856B, x00515001, x03E6D56A);
 vxor(x62B7056B, x61008000, x03B7856B);
 vor(x00, x62B7056B, a6);
 vxor(x01, x00, xC729695A);
 vxor(*out1, *out1, x01);
}
# 434 "modified/includes.c" 2
# 550 "modified/includes.c"
# 1 "modified/times.h" 1
# 551 "modified/includes.c" 2
# 1 "modified/bench.h" 1
# 22 "modified/bench.h"
struct bench_results {

 clock_t real, virtual;


 _john_int64_t count;
};





extern long clk_tck;




extern void clk_tck_init(void);





extern unsigned int benchmark_time;






extern char *benchmark_format(struct fmt_main *format, int salts,
 struct bench_results *results);




extern void benchmark_cps(_john_int64_t *count, clock_t time, char *buffer);






extern int benchmark_all(void);
# 552 "modified/includes.c" 2
# 571 "modified/includes.c"
# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


# 150 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 347 "/usr/include/ctype.h" 3 4

# 572 "modified/includes.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 573 "modified/includes.c" 2
# 607 "modified/includes.c"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 608 "modified/includes.c" 2
# 636 "modified/includes.c"
# 1 "modified/batch.h" 1
# 18 "modified/batch.h"
extern void do_batch_crack(struct db_main *db);
# 637 "modified/includes.c" 2
# 682 "modified/includes.c"
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));








extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));








extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 89 "/usr/include/math.h" 2 3 4
# 132 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

# 86 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

# 126 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));




# 371 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 133 "/usr/include/math.h" 2 3 4
# 148 "/usr/include/math.h" 3 4
extern int signgam;
# 189 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 301 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 326 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 488 "/usr/include/math.h" 3 4

# 683 "modified/includes.c" 2
# 1 "modified/crc32.h" 1
# 12 "modified/crc32.h"
typedef unsigned int CRC32_t;





extern void CRC32_Init(CRC32_t *value);




extern void CRC32_Update(CRC32_t *value, void *data, unsigned int size);





extern void CRC32_Final(unsigned char *out, CRC32_t value);
# 684 "modified/includes.c" 2






# 1 "modified/MD5_std.h" 1
# 16 "modified/MD5_std.h"
typedef ARCH_WORD_32 MD5_word;




typedef MD5_word MD5_binary[4];





typedef union {
 double dummy;
 MD5_word w[15];
 char b[60];
} MD5_block;

typedef struct {
 int length;
 MD5_block *even, *odd;
} MD5_pattern;

typedef struct {
 char s[8];
 struct {
  int p, s, ps, pp, psp;
 } l;
 struct {
  MD5_block p, sp, pp, spp;
 } e;
 struct {
  MD5_block p, ps, pp, psp;
 } o;
} MD5_pool;
# 65 "modified/MD5_std.h"
typedef struct {




 MD5_binary out[2];

 MD5_block _block[2];
 MD5_pattern _order[21][2];
 MD5_pool _pool[2];
 char *prefix;
 int prelen;
} MD5_std_combined;
# 113 "modified/MD5_std.h"
extern MD5_std_combined MD5_std_all;
# 132 "modified/MD5_std.h"
extern void MD5_std_init(void);




extern void MD5_std_set_salt(char *salt);





extern void MD5_std_set_key(char *key, int index);




extern void MD5_std_crypt(int count);




extern char *MD5_std_get_salt(char *ciphertext);




extern MD5_word *MD5_std_get_binary(char *ciphertext);
# 691 "modified/includes.c" 2
# 833 "modified/includes.c"
# 1 "modified/BF_std.h" 1
# 16 "modified/BF_std.h"
typedef ARCH_WORD_32 BF_word;




typedef struct {
 BF_word salt[4];
 unsigned char rounds;
 char subtype;
} BF_salt;




typedef BF_word BF_binary[6];
# 50 "modified/BF_std.h"
extern BF_binary BF_out[2];




extern unsigned char BF_atoi64[0x80];
# 66 "modified/BF_std.h"
extern void BF_std_set_key(char *key, int index, int sign_extension_bug);





extern void BF_std_crypt(BF_salt *salt, int n);





extern void BF_std_crypt_exact(int index);





extern void *BF_std_get_salt(char *ciphertext);




extern void *BF_std_get_binary(char *ciphertext);
# 834 "modified/includes.c" 2
# 934 "modified/includes.c"
# 1 "/usr/include/x86_64-linux-gnu/sys/file.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/file.h" 3 4

# 50 "/usr/include/x86_64-linux-gnu/sys/file.h" 3 4
extern int flock (int __fd, int __operation) __attribute__ ((__nothrow__ , __leaf__));



# 935 "modified/includes.c" 2
static struct fmt_tests AFS_fmt_tests [ ] = {
	{
		"$K4$e35e9294ecef926d,0123" , "U*U*U*U*" 	}

	, {
		"$K4$64c7c2aedccd70d6,0123456789" , "U*U***U*" 	}

	, {
		"$K4$d9e985b36268f168,01234567" , "U*U***U" 	}

	, {
		"$K4$b9615786dfb53297,longcellname" , "longpassword" 	}

	, {
		"$K4$a8dc8aeaa2c48a97," , "" 	}

	, {
		"$K4$dfda85c7619183a2,XXXXXXXX" , "XXXXXXXX" 	}

	, {
		"$K4$e3e59de6f1d5eaf4,cell" , "password355" 	}

	, {
		"$K4$b02cc24aefbc865b," , "thisisaverylongpassword" 	}

	, {
		( ( void *) 0 ) , ( ( void *) 0 ) 	}

}

;
static struct {
	union {
		double dummy;
		DES_binary binary;
	}

	aligned;
	int is_long;
	char key [ 63 + 1 ];
}

AFS_fmt_buffer [ 0x100 ];
static char AFS_fmt_cell [ 40 + 8 ];
static int AFS_fmt_cell_length;
static long AFS_fmt_AFS_salt_binary;
static union {
	double dummy;
	DES_KS data;
}

AFS_fmt_AFS_long_KS;
static DES_binary AFS_fmt_AFS_long_IV_binary;
static void nm_AFS_fmt_init ( void ) {
	ARCH_WORD_32 block [ 2 ];
	ARCH_WORD_32 tmp;
	DES_std_init ( );
	AFS_fmt_AFS_salt_binary = DES_std_get_salt ( "#~..........." );
	DES_raw_set_key ( "52912979" );
	memcpy ( AFS_fmt_AFS_long_KS.data , DES_KS_current , sizeof ( DES_KS ) );
	memcpy ( block , "kerberos" , 8 );
	{
		tmp = ( block [ 0 ] );
		tmp = ( tmp << 16 ) | ( tmp >> 16 );
		( block [ 0 ] ) = ( ( tmp & 0x00FF00FF ) << 8 ) | ( ( tmp >> 8 ) & 0x00FF00FF );
	}

	;
	{
		tmp = ( block [ 1 ] );
		tmp = ( tmp << 16 ) | ( tmp >> 16 );
		( block [ 1 ] ) = ( ( tmp & 0x00FF00FF ) << 8 ) | ( ( tmp >> 8 ) & 0x00FF00FF );
	}

	;
	DES_std_set_block ( block [ 0 ] , block [ 1 ] );
	memcpy ( AFS_fmt_AFS_long_IV_binary , DES_IV , sizeof ( DES_binary ) );
}

static int nm_AFS_fmt_valid ( char *ciphertext ) {
	char *pos;
	int index , count;
	unsigned int value;
	if ( strncmp ( ciphertext , "$K4$" , 4 ) ) return 0;
	for ( pos = & ciphertext [ 4 ];
	atoi16 [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] != 0x7F;
	pos ++ );
	if ( *pos != ',' || pos - ciphertext != 20 ) return 0;
	for ( index = 0;
	index < 16;
	index += 2 ) {
		value = ( int ) atoi16 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ index + 4 ] ) ) ] << 4;
		value |= atoi16 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ index + 5 ] ) ) ];
		count = 0;
		if ( value ) do {
			count ++;
		}

		while ( ( value &= value - 1 ) );
		if ( ! ( count & 1 ) ) return 0;
	}

	return 1;
}

static void *nm_AFS_fmt_get_binary ( char *ciphertext ) {
	static long out [ 6 ];
	char base64 [ 14 ];
	int known_long;
	int index;
	unsigned int value;
	out [ 0 ] = out [ 1 ] = 0;
	strcpy ( base64 , "#~..........." );
	known_long = 0;
	for ( index = 0;
	index < 16;
	index += 2 ) {
		value = ( int ) atoi16 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ index + 4 ] ) ) ] << 4;
		value |= atoi16 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ index + 5 ] ) ) ];
		out [ index >> 3 ] |= ( value | 1 ) << ( ( index << 2 ) & 0x18 );
		if ( atoi64 [ value >>= 1 ] == 0x7F ) known_long = 1;
		else base64 [ ( index >> 1 ) + 2 ] = value;
	}

	if ( known_long ) out [ 2 ] = ~ ( long ) 0;
	else memcpy ( &out [ 2 ] , DES_std_get_binary ( base64 ) , 16 );
	return out;
}

static void *nm_AFS_fmt_salt ( char *ciphertext ) {
	static char out [ 40 + 1 ];
	strncpy ( out , &ciphertext [ 21 ] , 40 );
	out [ 40 ] = 0;
	return strlwr ( out );
}

static int nm_AFS_fmt_binary_hash_0 ( void *binary ) {
	if ( ( ( long *) binary ) [ 2 ] == ~ ( long ) 0 ) return *( long *) binary & 0xF;
	return ( ( ( ( ( long *) binary ) [ 2 ] ) >> ( 2 + 1 ) ) & 0xF );
}

static int nm_AFS_fmt_binary_hash_1 ( void *binary ) {
	if ( ( ( long *) binary ) [ 2 ] == ~ ( long ) 0 ) return *( long *) binary & 0xFF;
	return ( ( ( ( ( ( long *) binary ) [ 2 ] ) >> ( 2 + 1 ) ) & 0xF ) | ( ( ( ( ( long *) binary ) [ 2 ] ) >> ( 2 + 5 ) ) & 0xF0 ) );
}

static int nm_AFS_fmt_binary_hash_2 ( void *binary ) {
	if ( ( ( long *) binary ) [ 2 ] == ~ ( long ) 0 ) return *( long *) binary & 0xFFF;
	return ( ( ( ( ( ( ( long *) binary ) [ 2 ] ) >> ( 2 + 1 ) ) & 0xF ) | ( ( ( ( ( long *) binary ) [ 2 ] ) >> ( 2 + 5 ) ) & 0xF0 ) ) | ( ( ( ( ( long *) binary ) [ 2 ] ) >> ( 2 + 9 ) ) & 0xF00 ) );
}

static long nm_AFS_fmt_to_short_hash ( int index ) {
	char base64 [ 14 ];
	char *ptr;
	int pos , value;
	strcpy ( base64 , "#~..........." );
	ptr = & base64 [ 2 ];
	for ( pos = 0;
	pos < 8;
	pos ++ ) {
		value = AFS_fmt_buffer [ index ].aligned.binary [ pos >> 2 ];
		value >>= ( ( pos & 3 ) << 3 ) + 1;
		value &= 0x7F;
		if ( atoi64 [ value ] == 0x7F ) return ~ ( long ) 0;
		*ptr ++ = value;
	}

	return *DES_std_get_binary ( base64 );
}

static int nm_AFS_fmt_get_hash_0 ( int index ) {
	long binary;
	if ( AFS_fmt_buffer [ index ].is_long ) {
		if ( ( binary = nm_AFS_fmt_to_short_hash ( index ) ) == ~ ( long ) 0 ) return AFS_fmt_buffer [ index ].aligned.binary [ 0 ] & 0xF;
	}

	else binary = AFS_fmt_buffer [ index ].aligned.binary [ 0 ] & ( ( 0xFFF9FFF9 ) << 2 );
	return ( ( ( binary ) >> ( 2 + 1 ) ) & 0xF );
}

static int nm_AFS_fmt_get_hash_1 ( int index ) {
	long binary;
	if ( AFS_fmt_buffer [ index ].is_long ) {
		if ( ( binary = nm_AFS_fmt_to_short_hash ( index ) ) == ~ ( long ) 0 ) return AFS_fmt_buffer [ index ].aligned.binary [ 0 ] & 0xFF;
	}

	else binary = AFS_fmt_buffer [ index ].aligned.binary [ 0 ] & ( ( 0xFFF9FFF9 ) << 2 );
	return ( ( ( ( binary ) >> ( 2 + 1 ) ) & 0xF ) | ( ( ( binary ) >> ( 2 + 5 ) ) & 0xF0 ) );
}

static int nm_AFS_fmt_get_hash_2 ( int index ) {
	long binary;
	if ( AFS_fmt_buffer [ index ].is_long ) {
		if ( ( binary = nm_AFS_fmt_to_short_hash ( index ) ) == ~ ( long ) 0 ) return AFS_fmt_buffer [ index ].aligned.binary [ 0 ] & 0xFFF;
	}

	else binary = AFS_fmt_buffer [ index ].aligned.binary [ 0 ] & ( ( 0xFFF9FFF9 ) << 2 );
	return ( ( ( ( ( binary ) >> ( 2 + 1 ) ) & 0xF ) | ( ( ( binary ) >> ( 2 + 5 ) ) & 0xF0 ) ) | ( ( ( binary ) >> ( 2 + 9 ) ) & 0xF00 ) );
}

static void nm_AFS_fmt_set_salt ( void *salt ) {
	strnzcpy ( AFS_fmt_cell , salt , 40 );
	memset ( &AFS_fmt_cell [ AFS_fmt_cell_length = strlen ( AFS_fmt_cell ) ] , 0 , 8 );
}

static void nm_AFS_fmt_set_key ( char *key , int index ) {
	strnzcpy ( AFS_fmt_buffer [ index ].key , key , 63 + 1 );
}

static char *nm_AFS_fmt_get_key ( int index ) {
	return AFS_fmt_buffer [ index ].key;
}

static void nm_AFS_fmt_crypt_all ( int count ) {
	int index , pos , length;
	char xor [ 8 ];
	ARCH_WORD_32 space [ ( 63 + 40 + 8 ) / 4 + 1 ];
	ARCH_WORD_32 *ptr;
	long space_binary [ ( 63 + 40 + 8 ) / 2 + 1 ];
	long *ptr_binary;
	unsigned long block [ 2 ];
	union {
		double dummy;
		DES_binary data;
	}

	binary;
	ARCH_WORD_32 key [ 2 ];
	ARCH_WORD_32 tmp;
	DES_std_set_salt ( AFS_fmt_AFS_salt_binary );
	memset ( DES_IV , 0 , sizeof ( DES_IV ) );
	DES_count = 25;
	for ( index = 0;
	index < count;
	index ++ ) if ( ( length = strlen ( AFS_fmt_buffer [ index ].key ) ) > 8 ) AFS_fmt_buffer [ index ].is_long = length;
	else {
		AFS_fmt_buffer [ index ].is_long = 0;
		memcpy ( xor , AFS_fmt_cell , 8 );
		for ( pos = 0;
		pos < 8 && AFS_fmt_buffer [ index ].key [ pos ];
		pos ++ ) xor [ pos ] ^= AFS_fmt_buffer [ index ].key [ pos ];
		for ( pos = 0;
		pos < 8;
		pos ++ ) if ( ! xor [ pos ] ) xor [ pos ] = 'X';
		DES_std_set_key ( xor );
		DES_std_crypt ( DES_KS_current , AFS_fmt_buffer [ index ].aligned.binary );
	}

	DES_std_set_salt ( 0 );
	DES_count = 1;
	for ( index = 0;
	index < count;
	index ++ ) if ( ( length = AFS_fmt_buffer [ index ].is_long ) ) {
		memcpy ( space , AFS_fmt_buffer [ index ].key , length );
		memcpy ( ( char *) space + length , AFS_fmt_cell , AFS_fmt_cell_length + 8 );
		memcpy ( binary.data , AFS_fmt_AFS_long_IV_binary , sizeof ( binary.data ) );
		length += AFS_fmt_cell_length;
		ptr = space;
		ptr_binary = space_binary;
		do {
			{
				tmp = ( *ptr ++ );
				tmp = ( tmp << 16 ) | ( tmp >> 16 );
				( block [ 0 ] ) = ( ( tmp & 0x00FF00FF ) << 8 ) | ( ( tmp >> 8 ) & 0x00FF00FF );
			}

			;
			{
				tmp = ( *ptr ++ );
				tmp = ( tmp << 16 ) | ( tmp >> 16 );
				( block [ 1 ] ) = ( ( tmp & 0x00FF00FF ) << 8 ) | ( ( tmp >> 8 ) & 0x00FF00FF );
			}

			;
			DES_std_set_block ( block [ 0 ] , block [ 1 ] );
			*ptr_binary ++ = DES_IV [ 0 ];
			DES_IV [ 0 ] ^= binary.data [ 0 ];
			*ptr_binary ++ = DES_IV [ 1 ];
			DES_IV [ 1 ] ^= binary.data [ 1 ];
			*ptr_binary ++ = DES_IV [ 2 ];
			DES_IV [ 2 ] ^= binary.data [ 2 ];
			*ptr_binary ++ = DES_IV [ 3 ];
			DES_IV [ 3 ] ^= binary.data [ 3 ];
			DES_std_crypt ( AFS_fmt_AFS_long_KS.data , binary.data );
			length -= 8;
		}

		while ( length > 0 );
		DES_std_get_block ( binary.data , block );
		{
			tmp = ( block [ 0 ] >> 1 );
			tmp = ( tmp << 16 ) | ( tmp >> 16 );
			( key [ 0 ] ) = ( ( tmp & 0x00FF00FF ) << 8 ) | ( ( tmp >> 8 ) & 0x00FF00FF );
		}

		;
		{
			tmp = ( block [ 1 ] >> 1 );
			tmp = ( tmp << 16 ) | ( tmp >> 16 );
			( key [ 1 ] ) = ( ( tmp & 0x00FF00FF ) << 8 ) | ( ( tmp >> 8 ) & 0x00FF00FF );
		}

		;
		DES_raw_set_key ( ( char *) key );
		length = AFS_fmt_buffer [ index ].is_long + AFS_fmt_cell_length;
		ptr_binary = space_binary;
		do {
			DES_IV [ 0 ] = binary.data [ 0 ] ^ *ptr_binary ++;
			DES_IV [ 1 ] = binary.data [ 1 ] ^ *ptr_binary ++;
			DES_IV [ 2 ] = binary.data [ 2 ] ^ *ptr_binary ++;
			DES_IV [ 3 ] = binary.data [ 3 ] ^ *ptr_binary ++;
			DES_std_crypt ( DES_KS_current , binary.data );
			length -= 8;
		}

		while ( length > 0 );
		DES_std_get_block ( binary.data , block );
		AFS_fmt_buffer [ index ].aligned.binary [ 0 ] = block [ 0 ] | 0x01010101;
		AFS_fmt_buffer [ index ].aligned.binary [ 1 ] = block [ 1 ] | 0x01010101;
	}

}

static int nm_AFS_fmt_cmp_all ( void *binary , int count ) {
	int index;
	for ( index = 0;
	index < count;
	index ++ ) if ( AFS_fmt_buffer [ index ].is_long ) {
		if ( *( unsigned long *) binary == AFS_fmt_buffer [ index ].aligned.binary [ 0 ] ) return 1;
	}

	else {
		if ( ( ( unsigned long *) binary ) [ 2 ] == ( AFS_fmt_buffer [ index ].aligned.binary [ 0 ] & ( ( ( 0x1E1E1E1E ) << 2 ) & ( ( 0xFFF9FFF9 ) << 2 ) ) ) ) return 1;
	}

	return 0;
}

static int nm_AFS_fmt_cmp_one ( void *binary , int index ) {
	if ( AFS_fmt_buffer [ index ].is_long ) return *( unsigned long *) binary == AFS_fmt_buffer [ index ].aligned.binary [ 0 ];
	return ( ( unsigned long *) binary ) [ 2 ] == ( AFS_fmt_buffer [ index ].aligned.binary [ 0 ] & ( ( ( 0x1E1E1E1E ) << 2 ) & ( ( 0xFFF9FFF9 ) << 2 ) ) );
}

static int nm_AFS_fmt_cmp_exact ( char *source , int index ) {
	long *binary;
	int word;
	binary = nm_AFS_fmt_get_binary ( source );
	if ( AFS_fmt_buffer [ index ].is_long ) {
		if ( ( unsigned long ) binary [ 0 ] != AFS_fmt_buffer [ index ].aligned.binary [ 0 ] || ( unsigned long ) binary [ 1 ] != AFS_fmt_buffer [ index ].aligned.binary [ 1 ] ) return 0;
	}

	else {
		for ( word = 0;
		word < 16 / 4;
		word ++ ) if ( ( unsigned long ) binary [ word + 2 ] != ( AFS_fmt_buffer [ index ].aligned.binary [ word ] & ( ( ( 0x1E1E1E1E ) << 2 ) & ( ( 0xFFF9FFF9 ) << 2 ) ) ) ) return 0;
	}

	return 1;
}

struct fmt_main fmt_AFS = {
	{
		"afs" , "Kerberos AFS DES" , "Std DES" , "" , 8 , 63 , ( 3 *4 ) , 40 , 0x80 , 0x100 , 0x00000001 | 0x00000002 , AFS_fmt_tests 	}

	, {
		nm_AFS_fmt_init , nm_AFS_fmt_valid , fmt_default_split , nm_AFS_fmt_get_binary , nm_AFS_fmt_salt , {
			nm_AFS_fmt_binary_hash_0 , nm_AFS_fmt_binary_hash_1 , nm_AFS_fmt_binary_hash_2 , ( ( void *) 0 ) , ( ( void *) 0 ) , ( ( void *) 0 ) , ( ( void *) 0 ) 		}

		, fmt_default_salt_hash , nm_AFS_fmt_set_salt , nm_AFS_fmt_set_key , nm_AFS_fmt_get_key , fmt_default_clear_keys , nm_AFS_fmt_crypt_all , {
			nm_AFS_fmt_get_hash_0 , nm_AFS_fmt_get_hash_1 , nm_AFS_fmt_get_hash_2 , ( ( void *) 0 ) , ( ( void *) 0 ) , ( ( void *) 0 ) , ( ( void *) 0 ) 		}

		, nm_AFS_fmt_cmp_all , nm_AFS_fmt_cmp_one , nm_AFS_fmt_cmp_exact 	}

	, {
		0 	}

	, ( ( void *) 0 ) }

;
static void nm_batch_do_single_pass ( struct db_main *db ) {
	do_single_crack ( db );
}

static void nm_batch_do_wordlist_pass ( struct db_main *db ) {
	char *name;
	if ( ! ( name = cfg_get_param ( "Options" , ( ( void *) 0 ) , "Wordlist" ) ) ) if ( ! ( name = cfg_get_param ( "Options" , ( ( void *) 0 ) , "Wordfile" ) ) ) name = "$JOHN/password.lst";
	do_wordlist_crack ( db , name , 1 );
}

static void nm_batch_do_incremental_pass ( struct db_main *db ) {
	do_incremental_crack ( db , ( ( void *) 0 ) );
}

void do_batch_crack ( struct db_main *db ) {
	switch ( status.pass ) {
		case 0 : case 1 : status.pass = 1;
		nm_batch_do_single_pass ( db );
		if ( event_abort || ! db -> salts ) break;
		case 2 : status.pass = 2;
		nm_batch_do_wordlist_pass ( db );
		if ( event_abort || ! db -> salts ) break;
		case 3 : status.pass = 3;
		nm_batch_do_incremental_pass ( db );
	}

}

long clk_tck = 0;
void clk_tck_init ( void ) {
	if ( clk_tck ) return;
	clk_tck = sysconf ( _SC_CLK_TCK );
}

unsigned int benchmark_time = 5;
static volatile int bench_bench_running;
static void nm_bench_bench_handle_timer ( int signum ) {
	bench_bench_running = 0;
}

static void nm_bench_bench_set_keys ( struct fmt_main *format , struct fmt_tests *current , int cond ) {
	char *plaintext;
	int index , length;
	format -> methods.clear_keys ( );
	length = format -> params.benchmark_length;
	for ( index = 0;
	index < format -> params.max_keys_per_crypt;
	index ++ ) {
		do {
			if ( ! current -> ciphertext ) current = format -> params.tests;
			plaintext = current -> plaintext;
			current ++;
			if ( cond > 0 ) {
				if ( ( int ) strlen ( plaintext ) > length ) break;
			}

			else if ( cond < 0 ) {
				if ( ( int ) strlen ( plaintext ) <= length ) break;
			}

			else break;
		}

		while ( 1 );
		format -> methods.set_key ( plaintext , index );
	}

}

char *benchmark_format ( struct fmt_main *format , int salts , struct bench_results *results ) {
	static void *binary = ( ( void *) 0 );
	static int binary_size = 0;
	static char s_error [ 64 ];
	char *where;
	struct fmt_tests *current;
	int cond;
	struct tms buf;
	clock_t start_real , start_virtual , end_real , end_virtual;
	_john_int64_t count;
	char *ciphertext;
	void *salt , *two_salts [ 2 ];
	int index , max;
	clk_tck_init ( );
	if ( ! ( current = format -> params.tests ) ) return "FAILED (no data)";
	if ( ( where = fmt_self_test ( format ) ) ) {
		sprintf ( s_error , "FAILED (%s)" , where );
		return s_error;
	}

	if ( format -> params.binary_size > binary_size ) {
		binary_size = format -> params.binary_size;
		binary = mem_alloc_tiny ( binary_size , 4 );
		memset ( binary , 0x55 , binary_size );
	}

	for ( index = 0;
	index < 2;
	index ++ ) {
		two_salts [ index ] = mem_alloc ( format -> params.salt_size );
		if ( ( ciphertext = format -> params.tests [ index ].ciphertext ) ) salt = format -> methods.salt ( ciphertext );
		else salt = two_salts [ 0 ];
		memcpy ( two_salts [ index ] , salt , format -> params.salt_size );
	}

	if ( format -> params.benchmark_length > 0 ) {
		cond = ( salts == 1 ) ? 1 : - 1;
		salts = 1;
	}

	else cond = 0;
	nm_bench_bench_set_keys ( format , current , cond );
	bench_bench_running = 1;
	signal ( 14 , nm_bench_bench_handle_timer );
	if ( benchmark_time > 3600 ) benchmark_time = 3600;
	sig_timer_emu_init ( benchmark_time *clk_tck );
	start_real = times ( &buf );
	start_virtual = buf.tms_utime + buf.tms_stime;
	start_virtual += buf.tms_cutime + buf.tms_cstime;
	count.lo = count.hi = 0;
	index = salts;
	max = format -> params.max_keys_per_crypt;
	do {
		if ( ! -- index ) {
			index = salts;
			if ( ! ( ++ current ) -> ciphertext ) current = format -> params.tests;
			nm_bench_bench_set_keys ( format , current , cond );
		}

		if ( salts > 1 ) format -> methods.set_salt ( two_salts [ index & 1 ] );
		format -> methods.crypt_all ( max );
		format -> methods.cmp_all ( binary , max );
		add32to64 ( &count , max );
		sig_timer_emu_tick ( );
	}

	while ( bench_bench_running && ! event_abort );
	end_real = times ( &buf );
	if ( end_real == start_real ) end_real ++;
	end_virtual = buf.tms_utime + buf.tms_stime;
	end_virtual += buf.tms_cutime + buf.tms_cstime;
	if ( end_virtual == start_virtual ) end_virtual ++;
	results -> real = end_real - start_real;
	results -> virtual = end_virtual - start_virtual;
	results -> count = count;
	for ( index = 0;
	index < 2;
	index ++ ) {
		if ( ( two_salts [ index ] ) ) {
			free ( ( two_salts [ index ] ) );
			( two_salts [ index ] ) = ( ( void *) 0 );
		}

	}

	;
	return event_abort ? "" : ( ( void *) 0 );
}

void benchmark_cps ( _john_int64_t *count , clock_t time , char *buffer ) {
	unsigned int cps_hi , cps_lo;
	_john_int64_t tmp;
	tmp = *count;
	mul64by32 ( &tmp , clk_tck );
	cps_hi = div64by32lo ( &tmp , time );
	if ( cps_hi >= 1000000 ) sprintf ( buffer , "%uK" , cps_hi / 1000 );
	else if ( cps_hi >= 100 ) sprintf ( buffer , "%u" , cps_hi );
	else {
		mul64by32 ( &tmp , 10 );
		cps_lo = div64by32lo ( &tmp , time ) % 10;
		sprintf ( buffer , "%u.%u" , cps_hi , cps_lo );
	}

}

int benchmark_all ( void ) {
	struct fmt_main *format;
	char *result , *msg_1 , *msg_m;
	struct bench_results results_1 , results_m;
	char s_real [ 64 ] , s_virtual [ 64 ];
	unsigned int total , failed;
	if ( ! benchmark_time ) puts ( "Warning: doing quick benchmarking - " "the performance numbers will be inaccurate" );
	total = failed = 0;
	if ( ( format = fmt_list ) ) do {
		printf ( "Benchmarking: %s%s [%s]... " , format -> params.format_name , format -> params.benchmark_comment , format -> params.algorithm_name );
		fflush ( stdout );
		switch ( format -> params.benchmark_length ) {
			case - 1 : msg_m = "Raw";
			msg_1 = ( ( void *) 0 );
			break;
			case 0 : msg_m = "Many salts";
			msg_1 = "Only one salt";
			break;
			default : msg_m = "Short";
			msg_1 = "Long";
		}

		total ++;
		if ( ( result = benchmark_format ( format , format -> params.salt_size ? 0x100 : 1 , &results_m ) ) ) {
			puts ( result );
			failed ++;
			continue;
		}

		if ( msg_1 ) if ( ( result = benchmark_format ( format , 1 , &results_1 ) ) ) {
			puts ( result );
			failed ++;
			continue;
		}

		puts ( "DONE" );
		benchmark_cps ( &results_m.count , results_m.real , s_real );
		benchmark_cps ( &results_m.count , results_m.virtual , s_virtual );
		printf ( "%s:\t%s c/s real, %s c/s virtual\n" , msg_m , s_real , s_virtual );
		if ( ! msg_1 ) {
			putchar ( '\n' );
			continue;
		}

		benchmark_cps ( &results_1.count , results_1.real , s_real );
		benchmark_cps ( &results_1.count , results_1.virtual , s_virtual );
		printf ( "%s:\t%s c/s real, %s c/s virtual\n\n" , msg_1 , s_real , s_virtual );
	}

	while ( ( format = format -> next ) && ! event_abort );
	if ( failed && total > 1 && ! event_abort ) printf ( "%u out of %u tests have FAILED\n" , failed , total );
	return failed || event_abort;
}

static struct fmt_tests BF_fmt_tests [ ] = {
	{
		"$2a$05$CCCCCCCCCCCCCCCCCCCCC.E5YPO9kmyuRGyh0XouQYb4YMJKvyOeW" , "U*U" 	}

	, {
		"$2a$05$CCCCCCCCCCCCCCCCCCCCC.VGOzA784oUp/Z0DY336zx7pLYAy0lwK" , "U*U*" 	}

	, {
		"$2a$05$XXXXXXXXXXXXXXXXXXXXXOAcXxm9kjPGEMsLznoKqmqw7tc8WCx4a" , "U*U*U" 	}

	, {
		"$2a$05$CCCCCCCCCCCCCCCCCCCCC.7uG0VCzI2bS7j6ymqJi9CdcdxiRTWNy" , "" 	}

	, {
		"$2a$05$abcdefghijklmnopqrstuu5s2v8.iXieOjg/.AySBTTZIIVFJeBui" , "0123456789abcdefghijklmnopqrstuvwxyz" "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789" "chars after 72 are ignored" 	}

	, {
		"$2x$05$/OK.fbVrR/bpIqNJ5ianF.CE5elHaaO4EbggVDjb8P19RukzXSM3e" , "\xa3" 	}

	, {
		"$2y$05$/OK.fbVrR/bpIqNJ5ianF.Sa7shbm4.OzKpvFnX1pQLmQW96oUlCq" , "\xa3" 	}

	, {
		"$2x$05$6bNw2HLQYeqHYyBfLMsv/OiwqTymGIGzFsA4hOTWebfehXHNprcAS" , "\xd1\x91" 	}

	, {
		"$2x$05$6bNw2HLQYeqHYyBfLMsv/O9LIGgn8OMzuDoHfof8AQimSGfcSWxnS" , "\xd0\xc1\xd2\xcf\xcc\xd8" 	}

	, {
		"$2a$05$/OK.fbVrR/bpIqNJ5ianF.swQOIzjOiJ9GHEPuhEkvqrUyvWhEMx6" , "\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa" "\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa" "\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa" "\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa" "\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa" "\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa\xaa" "chars after 72 are ignored as usual" 	}

	, {
		"$2a$05$/OK.fbVrR/bpIqNJ5ianF.R9xrDjiycxMbQE2bp.vgqlYpW5wx2yy" , "\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55" "\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55" "\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55" "\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55" "\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55" "\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55\xaa\x55" 	}

	, {
		"$2a$05$CCCCCCCCCCCCCCCCCCCCC.7uG0VCzI2bS7j6ymqJi9CdcdxiRTWNy" , "" 	}

	, {
		"$2a$05$/OK.fbVrR/bpIqNJ5ianF.9tQZzcJfm3uj2NvJ/n5xkhpqLrMpWCe" , "\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff" "\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff" "\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff" "\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff" "\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff" "\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff\x55\xaa\xff" 	}

	, {
		( ( void *) 0 ) , ( ( void *) 0 ) 	}

}

;
static char BF_fmt_saved_key [ 2 ] [ 72 + 1 ];
static char BF_fmt_keys_mode;
static int BF_fmt_sign_extension_bug;
static BF_salt BF_fmt_saved_salt;
static void nm_BF_fmt_init ( void ) {
	BF_fmt_keys_mode = 'y';
	BF_fmt_sign_extension_bug = 0;
}

static int nm_BF_fmt_valid ( char *ciphertext ) {
	int rounds;
	char *pos;
	if ( strncmp ( ciphertext , "$2a$" , 4 ) && strncmp ( ciphertext , "$2x$" , 4 ) && strncmp ( ciphertext , "$2y$" , 4 ) ) return 0;
	if ( ciphertext [ 4 ] < '0' || ciphertext [ 4 ] > '9' ) return 0;
	if ( ciphertext [ 5 ] < '0' || ciphertext [ 5 ] > '9' ) return 0;
	rounds = atoi ( ciphertext + 4 );
	if ( rounds < 4 || rounds > 31 ) return 0;
	if ( ciphertext [ 6 ] != '$' ) return 0;
	for ( pos = & ciphertext [ 7 ];
	atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] != 0x7F;
	pos ++ );
	if ( *pos || pos - ciphertext != 60 ) return 0;
	if ( BF_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *( pos - 1 ) ) ) ] & 3 ) return 0;
	if ( BF_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 28 ] ) ) ] & 0xF ) return 0;
	return 1;
}

static int nm_BF_fmt_binary_hash_0 ( void *binary ) {
	return *( BF_word *) binary & 0xF;
}

static int nm_BF_fmt_binary_hash_1 ( void *binary ) {
	return *( BF_word *) binary & 0xFF;
}

static int nm_BF_fmt_binary_hash_2 ( void *binary ) {
	return *( BF_word *) binary & 0xFFF;
}

static int nm_BF_fmt_binary_hash_3 ( void *binary ) {
	return *( BF_word *) binary & 0xFFFF;
}

static int nm_BF_fmt_binary_hash_4 ( void *binary ) {
	return *( BF_word *) binary & 0xFFFFF;
}

static int nm_BF_fmt_binary_hash_5 ( void *binary ) {
	return *( BF_word *) binary & 0xFFFFFF;
}

static int nm_BF_fmt_binary_hash_6 ( void *binary ) {
	return *( BF_word *) binary & 0x7FFFFFF;
}

static int nm_BF_fmt_get_hash_0 ( int index ) {
	return BF_out [ index ] [ 0 ] & 0xF;
}

static int nm_BF_fmt_get_hash_1 ( int index ) {
	return BF_out [ index ] [ 0 ] & 0xFF;
}

static int nm_BF_fmt_get_hash_2 ( int index ) {
	return BF_out [ index ] [ 0 ] & 0xFFF;
}

static int nm_BF_fmt_get_hash_3 ( int index ) {
	return BF_out [ index ] [ 0 ] & 0xFFFF;
}

static int nm_BF_fmt_get_hash_4 ( int index ) {
	return BF_out [ index ] [ 0 ] & 0xFFFFF;
}

static int nm_BF_fmt_get_hash_5 ( int index ) {
	return BF_out [ index ] [ 0 ] & 0xFFFFFF;
}

static int nm_BF_fmt_get_hash_6 ( int index ) {
	return BF_out [ index ] [ 0 ] & 0x7FFFFFF;
}

static int nm_BF_fmt_salt_hash ( void *salt ) {
	return ( ( BF_salt *) salt ) -> salt [ 0 ] & ( ( 1 << 12 ) - 1 );
}

static void nm_BF_fmt_set_salt ( void *salt ) {
	memcpy ( &BF_fmt_saved_salt , salt , sizeof ( BF_fmt_saved_salt ) );
}

static void nm_BF_fmt_set_key ( char *key , int index ) {
	BF_std_set_key ( key , index , BF_fmt_sign_extension_bug );
	strnzcpy ( BF_fmt_saved_key [ index ] , key , 72 + 1 );
}

static char *nm_BF_fmt_get_key ( int index ) {
	return BF_fmt_saved_key [ index ];
}

static void nm_BF_fmt_crypt_all ( int count ) {
	if ( BF_fmt_keys_mode != BF_fmt_saved_salt.subtype ) {
		int i;
		BF_fmt_keys_mode = BF_fmt_saved_salt.subtype;
		BF_fmt_sign_extension_bug = ( BF_fmt_keys_mode == 'x' );
		for ( i = 0;
		i < count;
		i ++ ) BF_std_set_key ( BF_fmt_saved_key [ i ] , i , BF_fmt_sign_extension_bug );
	}

	BF_std_crypt ( &BF_fmt_saved_salt , count );
}

static int nm_BF_fmt_cmp_all ( void *binary , int count ) {
	return *( BF_word *) binary == BF_out [ 0 ] [ 0 ] || *( BF_word *) binary == BF_out [ 1 ] [ 0 ];
}

static int nm_BF_fmt_cmp_one ( void *binary , int index ) {
	return *( BF_word *) binary == BF_out [ index ] [ 0 ];
}

static int nm_BF_fmt_cmp_exact ( char *source , int index ) {
	BF_std_crypt_exact ( index );
	return ! memcmp ( BF_std_get_binary ( source ) , BF_out [ index ] , sizeof ( BF_binary ) );
}

struct fmt_main fmt_BF = {
	{
		"bf" , "OpenBSD Blowfish" , "32/" "32" " X2" , " (x32)" , - 1 , 72 , 4 , sizeof ( BF_salt ) , 2 , 2 , 0x00000001 | 0x00000002 , BF_fmt_tests 	}

	, {
		nm_BF_fmt_init , nm_BF_fmt_valid , fmt_default_split , BF_std_get_binary , BF_std_get_salt , {
			nm_BF_fmt_binary_hash_0 , nm_BF_fmt_binary_hash_1 , nm_BF_fmt_binary_hash_2 , nm_BF_fmt_binary_hash_3 , nm_BF_fmt_binary_hash_4 , nm_BF_fmt_binary_hash_5 , nm_BF_fmt_binary_hash_6 		}

		, nm_BF_fmt_salt_hash , nm_BF_fmt_set_salt , nm_BF_fmt_set_key , nm_BF_fmt_get_key , fmt_default_clear_keys , nm_BF_fmt_crypt_all , {
			nm_BF_fmt_get_hash_0 , nm_BF_fmt_get_hash_1 , nm_BF_fmt_get_hash_2 , nm_BF_fmt_get_hash_3 , nm_BF_fmt_get_hash_4 , nm_BF_fmt_get_hash_5 , nm_BF_fmt_get_hash_6 		}

		, nm_BF_fmt_cmp_all , nm_BF_fmt_cmp_one , nm_BF_fmt_cmp_exact 	}

	, {
		0 	}

	, ( ( void *) 0 ) }

;
BF_binary BF_out [ 2 ];
typedef BF_word BF_key [ 16 + 2 ];
struct BF_ctx {
	BF_word S [ 4 ] [ 0x100 ];
	BF_key P;
}

;
static struct BF_ctx __attribute__ ( ( aligned ( ( 4 *8 ) ) ) ) BF_std_BF_current [ 2 ];
static BF_key __attribute__ ( ( aligned ( ( 4 *8 ) ) ) ) BF_std_BF_exp_key [ 2 ];
static BF_key __attribute__ ( ( aligned ( ( 4 *8 ) ) ) ) BF_std_BF_init_key [ 2 ];
static BF_word BF_std_BF_magic_w [ 6 ] = {
	0x4F727068 , 0x65616E42 , 0x65686F6C , 0x64657253 , 0x63727944 , 0x6F756274 }

;
static struct BF_ctx BF_std_BF_init_state = {
	{
		{
			0xd1310ba6 , 0x98dfb5ac , 0x2ffd72db , 0xd01adfb7 , 0xb8e1afed , 0x6a267e96 , 0xba7c9045 , 0xf12c7f99 , 0x24a19947 , 0xb3916cf7 , 0x0801f2e2 , 0x858efc16 , 0x636920d8 , 0x71574e69 , 0xa458fea3 , 0xf4933d7e , 0x0d95748f , 0x728eb658 , 0x718bcd58 , 0x82154aee , 0x7b54a41d , 0xc25a59b5 , 0x9c30d539 , 0x2af26013 , 0xc5d1b023 , 0x286085f0 , 0xca417918 , 0xb8db38ef , 0x8e79dcb0 , 0x603a180e , 0x6c9e0e8b , 0xb01e8a3e , 0xd71577c1 , 0xbd314b27 , 0x78af2fda , 0x55605c60 , 0xe65525f3 , 0xaa55ab94 , 0x57489862 , 0x63e81440 , 0x55ca396a , 0x2aab10b6 , 0xb4cc5c34 , 0x1141e8ce , 0xa15486af , 0x7c72e993 , 0xb3ee1411 , 0x636fbc2a , 0x2ba9c55d , 0x741831f6 , 0xce5c3e16 , 0x9b87931e , 0xafd6ba33 , 0x6c24cf5c , 0x7a325381 , 0x28958677 , 0x3b8f4898 , 0x6b4bb9af , 0xc4bfe81b , 0x66282193 , 0x61d809cc , 0xfb21a991 , 0x487cac60 , 0x5dec8032 , 0xef845d5d , 0xe98575b1 , 0xdc262302 , 0xeb651b88 , 0x23893e81 , 0xd396acc5 , 0x0f6d6ff3 , 0x83f44239 , 0x2e0b4482 , 0xa4842004 , 0x69c8f04a , 0x9e1f9b5e , 0x21c66842 , 0xf6e96c9a , 0x670c9c61 , 0xabd388f0 , 0x6a51a0d2 , 0xd8542f68 , 0x960fa728 , 0xab5133a3 , 0x6eef0b6c , 0x137a3be4 , 0xba3bf050 , 0x7efb2a98 , 0xa1f1651d , 0x39af0176 , 0x66ca593e , 0x82430e88 , 0x8cee8619 , 0x456f9fb4 , 0x7d84a5c3 , 0x3b8b5ebe , 0xe06f75d8 , 0x85c12073 , 0x401a449f , 0x56c16aa6 , 0x4ed3aa62 , 0x363f7706 , 0x1bfedf72 , 0x429b023d , 0x37d0d724 , 0xd00a1248 , 0xdb0fead3 , 0x49f1c09b , 0x075372c9 , 0x80991b7b , 0x25d479d8 , 0xf6e8def7 , 0xe3fe501a , 0xb6794c3b , 0x976ce0bd , 0x04c006ba , 0xc1a94fb6 , 0x409f60c4 , 0x5e5c9ec2 , 0x196a2463 , 0x68fb6faf , 0x3e6c53b5 , 0x1339b2eb , 0x3b52ec6f , 0x6dfc511f , 0x9b30952c , 0xcc814544 , 0xaf5ebd09 , 0xbee3d004 , 0xde334afd , 0x660f2807 , 0x192e4bb3 , 0xc0cba857 , 0x45c8740f , 0xd20b5f39 , 0xb9d3fbdb , 0x5579c0bd , 0x1a60320a , 0xd6a100c6 , 0x402c7279 , 0x679f25fe , 0xfb1fa3cc , 0x8ea5e9f8 , 0xdb3222f8 , 0x3c7516df , 0xfd616b15 , 0x2f501ec8 , 0xad0552ab , 0x323db5fa , 0xfd238760 , 0x53317b48 , 0x3e00df82 , 0x9e5c57bb , 0xca6f8ca0 , 0x1a87562e , 0xdf1769db , 0xd542a8f6 , 0x287effc3 , 0xac6732c6 , 0x8c4f5573 , 0x695b27b0 , 0xbbca58c8 , 0xe1ffa35d , 0xb8f011a0 , 0x10fa3d98 , 0xfd2183b8 , 0x4afcb56c , 0x2dd1d35b , 0x9a53e479 , 0xb6f84565 , 0xd28e49bc , 0x4bfb9790 , 0xe1ddf2da , 0xa4cb7e33 , 0x62fb1341 , 0xcee4c6e8 , 0xef20cada , 0x36774c01 , 0xd07e9efe , 0x2bf11fb4 , 0x95dbda4d , 0xae909198 , 0xeaad8e71 , 0x6b93d5a0 , 0xd08ed1d0 , 0xafc725e0 , 0x8e3c5b2f , 0x8e7594b7 , 0x8ff6e2fb , 0xf2122b64 , 0x8888b812 , 0x900df01c , 0x4fad5ea0 , 0x688fc31c , 0xd1cff191 , 0xb3a8c1ad , 0x2f2f2218 , 0xbe0e1777 , 0xea752dfe , 0x8b021fa1 , 0xe5a0cc0f , 0xb56f74e8 , 0x18acf3d6 , 0xce89e299 , 0xb4a84fe0 , 0xfd13e0b7 , 0x7cc43b81 , 0xd2ada8d9 , 0x165fa266 , 0x80957705 , 0x93cc7314 , 0x211a1477 , 0xe6ad2065 , 0x77b5fa86 , 0xc75442f5 , 0xfb9d35cf , 0xebcdaf0c , 0x7b3e89a0 , 0xd6411bd3 , 0xae1e7e49 , 0x00250e2d , 0x2071b35e , 0x226800bb , 0x57b8e0af , 0x2464369b , 0xf009b91e , 0x5563911d , 0x59dfa6aa , 0x78c14389 , 0xd95a537f , 0x207d5ba2 , 0x02e5b9c5 , 0x83260376 , 0x6295cfa9 , 0x11c81968 , 0x4e734a41 , 0xb3472dca , 0x7b14a94a , 0x1b510052 , 0x9a532915 , 0xd60f573f , 0xbc9bc6e4 , 0x2b60a476 , 0x81e67400 , 0x08ba6fb5 , 0x571be91f , 0xf296ec6b , 0x2a0dd915 , 0xb6636521 , 0xe7b9f9b6 , 0xff34052e , 0xc5855664 , 0x53b02d5d , 0xa99f8fa1 , 0x08ba4799 , 0x6e85076a 		}

		, {
			0x4b7a70e9 , 0xb5b32944 , 0xdb75092e , 0xc4192623 , 0xad6ea6b0 , 0x49a7df7d , 0x9cee60b8 , 0x8fedb266 , 0xecaa8c71 , 0x699a17ff , 0x5664526c , 0xc2b19ee1 , 0x193602a5 , 0x75094c29 , 0xa0591340 , 0xe4183a3e , 0x3f54989a , 0x5b429d65 , 0x6b8fe4d6 , 0x99f73fd6 , 0xa1d29c07 , 0xefe830f5 , 0x4d2d38e6 , 0xf0255dc1 , 0x4cdd2086 , 0x8470eb26 , 0x6382e9c6 , 0x021ecc5e , 0x09686b3f , 0x3ebaefc9 , 0x3c971814 , 0x6b6a70a1 , 0x687f3584 , 0x52a0e286 , 0xb79c5305 , 0xaa500737 , 0x3e07841c , 0x7fdeae5c , 0x8e7d44ec , 0x5716f2b8 , 0xb03ada37 , 0xf0500c0d , 0xf01c1f04 , 0x0200b3ff , 0xae0cf51a , 0x3cb574b2 , 0x25837a58 , 0xdc0921bd , 0xd19113f9 , 0x7ca92ff6 , 0x94324773 , 0x22f54701 , 0x3ae5e581 , 0x37c2dadc , 0xc8b57634 , 0x9af3dda7 , 0xa9446146 , 0x0fd0030e , 0xecc8c73e , 0xa4751e41 , 0xe238cd99 , 0x3bea0e2f , 0x3280bba1 , 0x183eb331 , 0x4e548b38 , 0x4f6db908 , 0x6f420d03 , 0xf60a04bf , 0x2cb81290 , 0x24977c79 , 0x5679b072 , 0xbcaf89af , 0xde9a771f , 0xd9930810 , 0xb38bae12 , 0xdccf3f2e , 0x5512721f , 0x2e6b7124 , 0x501adde6 , 0x9f84cd87 , 0x7a584718 , 0x7408da17 , 0xbc9f9abc , 0xe94b7d8c , 0xec7aec3a , 0xdb851dfa , 0x63094366 , 0xc464c3d2 , 0xef1c1847 , 0x3215d908 , 0xdd433b37 , 0x24c2ba16 , 0x12a14d43 , 0x2a65c451 , 0x50940002 , 0x133ae4dd , 0x71dff89e , 0x10314e55 , 0x81ac77d6 , 0x5f11199b , 0x043556f1 , 0xd7a3c76b , 0x3c11183b , 0x5924a509 , 0xf28fe6ed , 0x97f1fbfa , 0x9ebabf2c , 0x1e153c6e , 0x86e34570 , 0xeae96fb1 , 0x860e5e0a , 0x5a3e2ab3 , 0x771fe71c , 0x4e3d06fa , 0x2965dcb9 , 0x99e71d0f , 0x803e89d6 , 0x5266c825 , 0x2e4cc978 , 0x9c10b36a , 0xc6150eba , 0x94e2ea78 , 0xa5fc3c53 , 0x1e0a2df4 , 0xf2f74ea7 , 0x361d2b3d , 0x1939260f , 0x19c27960 , 0x5223a708 , 0xf71312b6 , 0xebadfe6e , 0xeac31f66 , 0xe3bc4595 , 0xa67bc883 , 0xb17f37d1 , 0x018cff28 , 0xc332ddef , 0xbe6c5aa5 , 0x65582185 , 0x68ab9802 , 0xeecea50f , 0xdb2f953b , 0x2aef7dad , 0x5b6e2f84 , 0x1521b628 , 0x29076170 , 0xecdd4775 , 0x619f1510 , 0x13cca830 , 0xeb61bd96 , 0x0334fe1e , 0xaa0363cf , 0xb5735c90 , 0x4c70a239 , 0xd59e9e0b , 0xcbaade14 , 0xeecc86bc , 0x60622ca7 , 0x9cab5cab , 0xb2f3846e , 0x648b1eaf , 0x19bdf0ca , 0xa02369b9 , 0x655abb50 , 0x40685a32 , 0x3c2ab4b3 , 0x319ee9d5 , 0xc021b8f7 , 0x9b540b19 , 0x875fa099 , 0x95f7997e , 0x623d7da8 , 0xf837889a , 0x97e32d77 , 0x11ed935f , 0x16681281 , 0x0e358829 , 0xc7e61fd6 , 0x96dedfa1 , 0x7858ba99 , 0x57f584a5 , 0x1b227263 , 0x9b83c3ff , 0x1ac24696 , 0xcdb30aeb , 0x532e3054 , 0x8fd948e4 , 0x6dbc3128 , 0x58ebf2ef , 0x34c6ffea , 0xfe28ed61 , 0xee7c3c73 , 0x5d4a14d9 , 0xe864b7e3 , 0x42105d14 , 0x203e13e0 , 0x45eee2b6 , 0xa3aaabea , 0xdb6c4f15 , 0xfacb4fd0 , 0xc742f442 , 0xef6abbb5 , 0x654f3b1d , 0x41cd2105 , 0xd81e799e , 0x86854dc7 , 0xe44b476a , 0x3d816250 , 0xcf62a1f2 , 0x5b8d2646 , 0xfc8883a0 , 0xc1c7b6a3 , 0x7f1524c3 , 0x69cb7492 , 0x47848a0b , 0x5692b285 , 0x095bbf00 , 0xad19489d , 0x1462b174 , 0x23820e00 , 0x58428d2a , 0x0c55f5ea , 0x1dadf43e , 0x233f7061 , 0x3372f092 , 0x8d937e41 , 0xd65fecf1 , 0x6c223bdb , 0x7cde3759 , 0xcbee7460 , 0x4085f2a7 , 0xce77326e , 0xa6078084 , 0x19f8509e , 0xe8efd855 , 0x61d99735 , 0xa969a7aa , 0xc50c06c2 , 0x5a04abfc , 0x800bcadc , 0x9e447a2e , 0xc3453484 , 0xfdd56705 , 0x0e1e9ec9 , 0xdb73dbd3 , 0x105588cd , 0x675fda79 , 0xe3674340 , 0xc5c43465 , 0x713e38d8 , 0x3d28f89e , 0xf16dff20 , 0x153e21e7 , 0x8fb03d4a , 0xe6e39f2b , 0xdb83adf7 		}

		, {
			0xe93d5a68 , 0x948140f7 , 0xf64c261c , 0x94692934 , 0x411520f7 , 0x7602d4f7 , 0xbcf46b2e , 0xd4a20068 , 0xd4082471 , 0x3320f46a , 0x43b7d4b7 , 0x500061af , 0x1e39f62e , 0x97244546 , 0x14214f74 , 0xbf8b8840 , 0x4d95fc1d , 0x96b591af , 0x70f4ddd3 , 0x66a02f45 , 0xbfbc09ec , 0x03bd9785 , 0x7fac6dd0 , 0x31cb8504 , 0x96eb27b3 , 0x55fd3941 , 0xda2547e6 , 0xabca0a9a , 0x28507825 , 0x530429f4 , 0x0a2c86da , 0xe9b66dfb , 0x68dc1462 , 0xd7486900 , 0x680ec0a4 , 0x27a18dee , 0x4f3ffea2 , 0xe887ad8c , 0xb58ce006 , 0x7af4d6b6 , 0xaace1e7c , 0xd3375fec , 0xce78a399 , 0x406b2a42 , 0x20fe9e35 , 0xd9f385b9 , 0xee39d7ab , 0x3b124e8b , 0x1dc9faf7 , 0x4b6d1856 , 0x26a36631 , 0xeae397b2 , 0x3a6efa74 , 0xdd5b4332 , 0x6841e7f7 , 0xca7820fb , 0xfb0af54e , 0xd8feb397 , 0x454056ac , 0xba489527 , 0x55533a3a , 0x20838d87 , 0xfe6ba9b7 , 0xd096954b , 0x55a867bc , 0xa1159a58 , 0xcca92963 , 0x99e1db33 , 0xa62a4a56 , 0x3f3125f9 , 0x5ef47e1c , 0x9029317c , 0xfdf8e802 , 0x04272f70 , 0x80bb155c , 0x05282ce3 , 0x95c11548 , 0xe4c66d22 , 0x48c1133f , 0xc70f86dc , 0x07f9c9ee , 0x41041f0f , 0x404779a4 , 0x5d886e17 , 0x325f51eb , 0xd59bc0d1 , 0xf2bcc18f , 0x41113564 , 0x257b7834 , 0x602a9c60 , 0xdff8e8a3 , 0x1f636c1b , 0x0e12b4c2 , 0x02e1329e , 0xaf664fd1 , 0xcad18115 , 0x6b2395e0 , 0x333e92e1 , 0x3b240b62 , 0xeebeb922 , 0x85b2a20e , 0xe6ba0d99 , 0xde720c8c , 0x2da2f728 , 0xd0127845 , 0x95b794fd , 0x647d0862 , 0xe7ccf5f0 , 0x5449a36f , 0x877d48fa , 0xc39dfd27 , 0xf33e8d1e , 0x0a476341 , 0x992eff74 , 0x3a6f6eab , 0xf4f8fd37 , 0xa812dc60 , 0xa1ebddf8 , 0x991be14c , 0xdb6e6b0d , 0xc67b5510 , 0x6d672c37 , 0x2765d43b , 0xdcd0e804 , 0xf1290dc7 , 0xcc00ffa3 , 0xb5390f92 , 0x690fed0b , 0x667b9ffb , 0xcedb7d9c , 0xa091cf0b , 0xd9155ea3 , 0xbb132f88 , 0x515bad24 , 0x7b9479bf , 0x763bd6eb , 0x37392eb3 , 0xcc115979 , 0x8026e297 , 0xf42e312d , 0x6842ada7 , 0xc66a2b3b , 0x12754ccc , 0x782ef11c , 0x6a124237 , 0xb79251e7 , 0x06a1bbe6 , 0x4bfb6350 , 0x1a6b1018 , 0x11caedfa , 0x3d25bdd8 , 0xe2e1c3c9 , 0x44421659 , 0x0a121386 , 0xd90cec6e , 0xd5abea2a , 0x64af674e , 0xda86a85f , 0xbebfe988 , 0x64e4c3fe , 0x9dbc8057 , 0xf0f7c086 , 0x60787bf8 , 0x6003604d , 0xd1fd8346 , 0xf6381fb0 , 0x7745ae04 , 0xd736fccc , 0x83426b33 , 0xf01eab71 , 0xb0804187 , 0x3c005e5f , 0x77a057be , 0xbde8ae24 , 0x55464299 , 0xbf582e61 , 0x4e58f48f , 0xf2ddfda2 , 0xf474ef38 , 0x8789bdc2 , 0x5366f9c3 , 0xc8b38e74 , 0xb475f255 , 0x46fcd9b9 , 0x7aeb2661 , 0x8b1ddf84 , 0x846a0e79 , 0x915f95e2 , 0x466e598e , 0x20b45770 , 0x8cd55591 , 0xc902de4c , 0xb90bace1 , 0xbb8205d0 , 0x11a86248 , 0x7574a99e , 0xb77f19b6 , 0xe0a9dc09 , 0x662d09a1 , 0xc4324633 , 0xe85a1f02 , 0x09f0be8c , 0x4a99a025 , 0x1d6efe10 , 0x1ab93d1d , 0x0ba5a4df , 0xa186f20f , 0x2868f169 , 0xdcb7da83 , 0x573906fe , 0xa1e2ce9b , 0x4fcd7f52 , 0x50115e01 , 0xa70683fa , 0xa002b5c4 , 0x0de6d027 , 0x9af88c27 , 0x773f8641 , 0xc3604c06 , 0x61a806b5 , 0xf0177a28 , 0xc0f586e0 , 0x006058aa , 0x30dc7d62 , 0x11e69ed7 , 0x2338ea63 , 0x53c2dd94 , 0xc2c21634 , 0xbbcbee56 , 0x90bcb6de , 0xebfc7da1 , 0xce591d76 , 0x6f05e409 , 0x4b7c0188 , 0x39720a3d , 0x7c927c24 , 0x86e3725f , 0x724d9db9 , 0x1ac15bb4 , 0xd39eb8fc , 0xed545578 , 0x08fca5b5 , 0xd83d7cd3 , 0x4dad0fc4 , 0x1e50ef5e , 0xb161e6f8 , 0xa28514d9 , 0x6c51133c , 0x6fd5c7e7 , 0x56e14ec4 , 0x362abfce , 0xddc6c837 , 0xd79a3234 , 0x92638212 , 0x670efa8e , 0x406000e0 		}

		, {
			0x3a39ce37 , 0xd3faf5cf , 0xabc27737 , 0x5ac52d1b , 0x5cb0679e , 0x4fa33742 , 0xd3822740 , 0x99bc9bbe , 0xd5118e9d , 0xbf0f7315 , 0xd62d1c7e , 0xc700c47b , 0xb78c1b6b , 0x21a19045 , 0xb26eb1be , 0x6a366eb4 , 0x5748ab2f , 0xbc946e79 , 0xc6a376d2 , 0x6549c2c8 , 0x530ff8ee , 0x468dde7d , 0xd5730a1d , 0x4cd04dc6 , 0x2939bbdb , 0xa9ba4650 , 0xac9526e8 , 0xbe5ee304 , 0xa1fad5f0 , 0x6a2d519a , 0x63ef8ce2 , 0x9a86ee22 , 0xc089c2b8 , 0x43242ef6 , 0xa51e03aa , 0x9cf2d0a4 , 0x83c061ba , 0x9be96a4d , 0x8fe51550 , 0xba645bd6 , 0x2826a2f9 , 0xa73a3ae1 , 0x4ba99586 , 0xef5562e9 , 0xc72fefd3 , 0xf752f7da , 0x3f046f69 , 0x77fa0a59 , 0x80e4a915 , 0x87b08601 , 0x9b09e6ad , 0x3b3ee593 , 0xe990fd5a , 0x9e34d797 , 0x2cf0b7d9 , 0x022b8b51 , 0x96d5ac3a , 0x017da67d , 0xd1cf3ed6 , 0x7c7d2d28 , 0x1f9f25cf , 0xadf2b89b , 0x5ad6b472 , 0x5a88f54c , 0xe029ac71 , 0xe019a5e6 , 0x47b0acfd , 0xed93fa9b , 0xe8d3c48d , 0x283b57cc , 0xf8d56629 , 0x79132e28 , 0x785f0191 , 0xed756055 , 0xf7960e44 , 0xe3d35e8c , 0x15056dd4 , 0x88f46dba , 0x03a16125 , 0x0564f0bd , 0xc3eb9e15 , 0x3c9057a2 , 0x97271aec , 0xa93a072a , 0x1b3f6d9b , 0x1e6321f5 , 0xf59c66fb , 0x26dcf319 , 0x7533d928 , 0xb155fdf5 , 0x03563482 , 0x8aba3cbb , 0x28517711 , 0xc20ad9f8 , 0xabcc5167 , 0xccad925f , 0x4de81751 , 0x3830dc8e , 0x379d5862 , 0x9320f991 , 0xea7a90c2 , 0xfb3e7bce , 0x5121ce64 , 0x774fbe32 , 0xa8b6e37e , 0xc3293d46 , 0x48de5369 , 0x6413e680 , 0xa2ae0810 , 0xdd6db224 , 0x69852dfd , 0x09072166 , 0xb39a460a , 0x6445c0dd , 0x586cdecf , 0x1c20c8ae , 0x5bbef7dd , 0x1b588d40 , 0xccd2017f , 0x6bb4e3bb , 0xdda26a7e , 0x3a59ff45 , 0x3e350a44 , 0xbcb4cdd5 , 0x72eacea8 , 0xfa6484bb , 0x8d6612ae , 0xbf3c6f47 , 0xd29be463 , 0x542f5d9e , 0xaec2771b , 0xf64e6370 , 0x740e0d8d , 0xe75b1357 , 0xf8721671 , 0xaf537d5d , 0x4040cb08 , 0x4eb4e2cc , 0x34d2466a , 0x0115af84 , 0xe1b00428 , 0x95983a1d , 0x06b89fb4 , 0xce6ea048 , 0x6f3f3b82 , 0x3520ab82 , 0x011a1d4b , 0x277227f8 , 0x611560b1 , 0xe7933fdc , 0xbb3a792b , 0x344525bd , 0xa08839e1 , 0x51ce794b , 0x2f32c9b7 , 0xa01fbac9 , 0xe01cc87e , 0xbcc7d1f6 , 0xcf0111c3 , 0xa1e8aac7 , 0x1a908749 , 0xd44fbd9a , 0xd0dadecb , 0xd50ada38 , 0x0339c32a , 0xc6913667 , 0x8df9317c , 0xe0b12b4f , 0xf79e59b7 , 0x43f5bb3a , 0xf2d519ff , 0x27d9459c , 0xbf97222c , 0x15e6fc2a , 0x0f91fc71 , 0x9b941525 , 0xfae59361 , 0xceb69ceb , 0xc2a86459 , 0x12baa8d1 , 0xb6c1075e , 0xe3056a0c , 0x10d25065 , 0xcb03a442 , 0xe0ec6e0e , 0x1698db3b , 0x4c98a0be , 0x3278e964 , 0x9f1f9532 , 0xe0d392df , 0xd3a0342b , 0x8971f21e , 0x1b0a7441 , 0x4ba3348c , 0xc5be7120 , 0xc37632d8 , 0xdf359f8d , 0x9b992f2e , 0xe60b6f47 , 0x0fe3f11d , 0xe54cda54 , 0x1edad891 , 0xce6279cf , 0xcd3e7e6f , 0x1618b166 , 0xfd2c1d05 , 0x848fd2c5 , 0xf6fb2299 , 0xf523f357 , 0xa6327623 , 0x93a83531 , 0x56cccd02 , 0xacf08162 , 0x5a75ebb5 , 0x6e163697 , 0x88d273cc , 0xde966292 , 0x81b949d0 , 0x4c50901b , 0x71c65614 , 0xe6c6c7bd , 0x327a140a , 0x45e1d006 , 0xc3f27b9a , 0xc9aa53fd , 0x62a80f00 , 0xbb25bfe2 , 0x35bdd2f6 , 0x71126905 , 0xb2040222 , 0xb6cbcf7c , 0xcd769c2b , 0x53113ec0 , 0x1640e3d3 , 0x38abbd60 , 0x2547adf0 , 0xba38209c , 0xf746ce76 , 0x77afa1c5 , 0x20756060 , 0x85cbfe4e , 0x8ae88dd8 , 0x7aaaf9b0 , 0x4cf9aa7e , 0x1948c25c , 0x02fb8a8c , 0x01c36ae4 , 0xd6ebe1f9 , 0x90d4f869 , 0xa65cdea0 , 0x3f09252d , 0xc208e69f , 0xb74e6132 , 0xce77e25b , 0x578fdfe3 , 0x3ac372e6 		}

	}

	, {
		0x243f6a88 , 0x85a308d3 , 0x13198a2e , 0x03707344 , 0xa4093822 , 0x299f31d0 , 0x082efa98 , 0xec4e6c89 , 0x452821e6 , 0x38d01377 , 0xbe5466cf , 0x34e90c6c , 0xc0ac29b7 , 0xc97c50dd , 0x3f84d5b5 , 0xb5470917 , 0x9216d5d9 , 0x8979fb1b 	}

}

;
unsigned char BF_atoi64 [ 0x80 ] = {
	64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 0 , 1 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 61 , 62 , 63 , 64 , 64 , 64 , 64 , 64 , 64 , 64 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 64 , 64 , 64 , 64 , 64 , 64 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 53 , 64 , 64 , 64 , 64 , 64 }

;
void BF_std_set_key ( char *key , int index , int sign_extension_bug ) {
	char *ptr = key;
	int i , j;
	BF_word tmp;
	for ( i = 0;
	i < 16 + 2;
	i ++ ) {
		tmp = 0;
		for ( j = 0;
		j < 4;
		j ++ ) {
			tmp <<= 8;
			if ( sign_extension_bug ) tmp |= ( int ) ( signed char ) *ptr;
			else tmp |= ( unsigned char ) *ptr;
			if ( ! *ptr ) ptr = key;
			else ptr ++;
		}

		BF_std_BF_exp_key [ index ] [ i ] = tmp;
		BF_std_BF_init_key [ index ] [ i ] = BF_std_BF_init_state.P [ i ] ^ tmp;
	}

}

void BF_std_crypt ( BF_salt *salt , int n ) {
	{
		BF_word L0 , R0;
		BF_word u1 , u2 , u3 , u4;
		BF_word L1 , R1;
		BF_word v1 , v2 , v3 , v4;
		BF_word *ptr;
		BF_word count;
		int index;
		for ( index = 0;
		index < 2;
		index ++ ) {
			int i;
			memcpy ( BF_std_BF_current [ index ].S , BF_std_BF_init_state.S , sizeof ( BF_std_BF_current [ index ].S ) );
			memcpy ( BF_std_BF_current [ index ].P , BF_std_BF_init_key [ index ] , sizeof ( BF_std_BF_current [ index ].P ) );
			L0 = R0 = 0;
			for ( i = 0;
			i < 16 + 2;
			i += 2 ) {
				L0 ^= salt -> salt [ i & 2 ];
				R0 ^= salt -> salt [ ( i & 2 ) + 1 ];
				L0 ^= BF_std_BF_current [ index ].P [ 0 ];
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 0 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 1 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 2 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 3 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 4 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 5 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 6 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 7 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 8 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 9 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 10 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 11 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 12 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 13 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 14 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 15 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u4 = R0;
				R0 = L0;
				L0 = u4 ^ BF_std_BF_current [ index ].P [ 16 + 1 ];
				;
				BF_std_BF_current [ index ].P [ i ] = L0;
				BF_std_BF_current [ index ].P [ i + 1 ] = R0;
			}

			ptr = BF_std_BF_current [ index ].S [ 0 ];
			do {
				ptr += 4;
				L0 ^= salt -> salt [ ( 16 + 2 ) & 3 ];
				R0 ^= salt -> salt [ ( 16 + 3 ) & 3 ];
				L0 ^= BF_std_BF_current [ index ].P [ 0 ];
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 0 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 1 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 2 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 3 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 4 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 5 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 6 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 7 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 8 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 9 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 10 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 11 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 12 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 13 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 14 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 15 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u4 = R0;
				R0 = L0;
				L0 = u4 ^ BF_std_BF_current [ index ].P [ 16 + 1 ];
				;
				*( ptr - 4 ) = L0;
				*( ptr - 3 ) = R0;
				L0 ^= salt -> salt [ ( 16 + 4 ) & 3 ];
				R0 ^= salt -> salt [ ( 16 + 5 ) & 3 ];
				L0 ^= BF_std_BF_current [ index ].P [ 0 ];
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 0 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 1 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 2 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 3 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 4 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 5 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 6 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 7 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 8 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 9 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 10 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 11 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 12 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 13 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 14 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 15 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u4 = R0;
				R0 = L0;
				L0 = u4 ^ BF_std_BF_current [ index ].P [ 16 + 1 ];
				;
				*( ptr - 2 ) = L0;
				*( ptr - 1 ) = R0;
			}

			while ( ptr < & BF_std_BF_current [ index ].S [ 3 ] [ 0xFF ] );
		}

		count = 1 << salt -> rounds;
		do {
			for ( index = 0;
			index < 2;
			index ++ ) {
				BF_std_BF_current [ index ].P [ 0 ] ^= BF_std_BF_exp_key [ index ] [ 0 ];
				BF_std_BF_current [ index ].P [ 1 ] ^= BF_std_BF_exp_key [ index ] [ 1 ];
				BF_std_BF_current [ index ].P [ 2 ] ^= BF_std_BF_exp_key [ index ] [ 2 ];
				BF_std_BF_current [ index ].P [ 3 ] ^= BF_std_BF_exp_key [ index ] [ 3 ];
				BF_std_BF_current [ index ].P [ 4 ] ^= BF_std_BF_exp_key [ index ] [ 4 ];
				BF_std_BF_current [ index ].P [ 5 ] ^= BF_std_BF_exp_key [ index ] [ 5 ];
				BF_std_BF_current [ index ].P [ 6 ] ^= BF_std_BF_exp_key [ index ] [ 6 ];
				BF_std_BF_current [ index ].P [ 7 ] ^= BF_std_BF_exp_key [ index ] [ 7 ];
				BF_std_BF_current [ index ].P [ 8 ] ^= BF_std_BF_exp_key [ index ] [ 8 ];
				BF_std_BF_current [ index ].P [ 9 ] ^= BF_std_BF_exp_key [ index ] [ 9 ];
				BF_std_BF_current [ index ].P [ 10 ] ^= BF_std_BF_exp_key [ index ] [ 10 ];
				BF_std_BF_current [ index ].P [ 11 ] ^= BF_std_BF_exp_key [ index ] [ 11 ];
				BF_std_BF_current [ index ].P [ 12 ] ^= BF_std_BF_exp_key [ index ] [ 12 ];
				BF_std_BF_current [ index ].P [ 13 ] ^= BF_std_BF_exp_key [ index ] [ 13 ];
				BF_std_BF_current [ index ].P [ 14 ] ^= BF_std_BF_exp_key [ index ] [ 14 ];
				BF_std_BF_current [ index ].P [ 15 ] ^= BF_std_BF_exp_key [ index ] [ 15 ];
				BF_std_BF_current [ index ].P [ 16 ] ^= BF_std_BF_exp_key [ index ] [ 16 ];
				BF_std_BF_current [ index ].P [ 17 ] ^= BF_std_BF_exp_key [ index ] [ 17 ];
			}

			L0 = R0 = L1 = R1 = 0;
			ptr = BF_std_BF_current [ 0 ].P;
			do {
				L0 ^= BF_std_BF_current [ 0 ].P [ 0 ];
				L1 ^= BF_std_BF_current [ 1 ].P [ 0 ];
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 0 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 0 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 1 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 1 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 2 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 2 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 3 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 3 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 4 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 4 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 5 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 5 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 6 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 6 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 7 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 7 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 8 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 8 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 9 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 9 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 10 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 10 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 11 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 11 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 12 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 12 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 13 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 13 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 14 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 14 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 15 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 15 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u4 = R0;
				v4 = R1;
				R0 = L0;
				R1 = L1;
				L0 = u4 ^ BF_std_BF_current [ 0 ].P [ 16 + 1 ];
				L1 = v4 ^ BF_std_BF_current [ 1 ].P [ 16 + 1 ];
				;
				*ptr = L0;
				*( ptr + 1 ) = R0;
				*( ptr + ( BF_std_BF_current [ 1 ].P - BF_std_BF_current [ 0 ].P ) ) = L1;
				*( ptr + ( BF_std_BF_current [ 1 ].P - BF_std_BF_current [ 0 ].P ) + 1 ) = R1;
				ptr += 2;
			}

			while ( ptr < & BF_std_BF_current [ 0 ].P [ 16 + 2 ] );
			ptr = BF_std_BF_current [ 0 ].S [ 0 ];
			do {
				ptr += 2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 0 ];
				L1 ^= BF_std_BF_current [ 1 ].P [ 0 ];
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 0 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 0 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 1 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 1 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 2 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 2 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 3 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 3 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 4 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 4 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 5 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 5 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 6 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 6 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 7 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 7 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 8 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 8 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 9 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 9 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 10 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 10 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 11 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 11 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 12 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 12 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 13 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 13 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 14 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 14 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 15 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 15 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u4 = R0;
				v4 = R1;
				R0 = L0;
				R1 = L1;
				L0 = u4 ^ BF_std_BF_current [ 0 ].P [ 16 + 1 ];
				L1 = v4 ^ BF_std_BF_current [ 1 ].P [ 16 + 1 ];
				;
				*( ptr - 2 ) = L0;
				*( ptr - 1 ) = R0;
				*( ptr - 2 + ( BF_std_BF_current [ 1 ].S [ 0 ] - BF_std_BF_current [ 0 ].S [ 0 ] ) ) = L1;
				*( ptr - 1 + ( BF_std_BF_current [ 1 ].S [ 0 ] - BF_std_BF_current [ 0 ].S [ 0 ] ) ) = R1;
			}

			while ( ptr < & BF_std_BF_current [ 0 ].S [ 3 ] [ 0xFF ] );
			;
			u1 = salt -> salt [ 0 ];
			u2 = salt -> salt [ 1 ];
			u3 = salt -> salt [ 2 ];
			u4 = salt -> salt [ 3 ];
			for ( index = 0;
			index < 2;
			index ++ ) {
				BF_std_BF_current [ index ].P [ 0 ] ^= u1;
				BF_std_BF_current [ index ].P [ 1 ] ^= u2;
				BF_std_BF_current [ index ].P [ 2 ] ^= u3;
				BF_std_BF_current [ index ].P [ 3 ] ^= u4;
				BF_std_BF_current [ index ].P [ 4 ] ^= u1;
				BF_std_BF_current [ index ].P [ 5 ] ^= u2;
				BF_std_BF_current [ index ].P [ 6 ] ^= u3;
				BF_std_BF_current [ index ].P [ 7 ] ^= u4;
				BF_std_BF_current [ index ].P [ 8 ] ^= u1;
				BF_std_BF_current [ index ].P [ 9 ] ^= u2;
				BF_std_BF_current [ index ].P [ 10 ] ^= u3;
				BF_std_BF_current [ index ].P [ 11 ] ^= u4;
				BF_std_BF_current [ index ].P [ 12 ] ^= u1;
				BF_std_BF_current [ index ].P [ 13 ] ^= u2;
				BF_std_BF_current [ index ].P [ 14 ] ^= u3;
				BF_std_BF_current [ index ].P [ 15 ] ^= u4;
				BF_std_BF_current [ index ].P [ 16 ] ^= u1;
				BF_std_BF_current [ index ].P [ 17 ] ^= u2;
			}

			L0 = R0 = L1 = R1 = 0;
			ptr = BF_std_BF_current [ 0 ].P;
			do {
				L0 ^= BF_std_BF_current [ 0 ].P [ 0 ];
				L1 ^= BF_std_BF_current [ 1 ].P [ 0 ];
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 0 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 0 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 1 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 1 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 2 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 2 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 3 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 3 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 4 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 4 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 5 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 5 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 6 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 6 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 7 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 7 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 8 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 8 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 9 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 9 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 10 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 10 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 11 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 11 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 12 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 12 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 13 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 13 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 14 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 14 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 15 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 15 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u4 = R0;
				v4 = R1;
				R0 = L0;
				R1 = L1;
				L0 = u4 ^ BF_std_BF_current [ 0 ].P [ 16 + 1 ];
				L1 = v4 ^ BF_std_BF_current [ 1 ].P [ 16 + 1 ];
				;
				*ptr = L0;
				*( ptr + 1 ) = R0;
				*( ptr + ( BF_std_BF_current [ 1 ].P - BF_std_BF_current [ 0 ].P ) ) = L1;
				*( ptr + ( BF_std_BF_current [ 1 ].P - BF_std_BF_current [ 0 ].P ) + 1 ) = R1;
				ptr += 2;
			}

			while ( ptr < & BF_std_BF_current [ 0 ].P [ 16 + 2 ] );
			ptr = BF_std_BF_current [ 0 ].S [ 0 ];
			do {
				ptr += 2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 0 ];
				L1 ^= BF_std_BF_current [ 1 ].P [ 0 ];
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 0 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 0 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 1 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 1 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 2 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 2 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 3 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 3 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 4 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 4 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 5 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 5 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 6 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 6 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 7 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 7 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 8 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 8 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 9 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 9 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 10 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 10 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 11 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 11 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 12 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 12 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 13 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 13 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ 0 ].P [ 14 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				v1 = L1 & 0xFF;
				v2 = L1 >> 8;
				v2 &= 0xFF;
				v3 = L1 >> 16;
				v3 &= 0xFF;
				v4 = L1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				R1 ^= BF_std_BF_current [ 1 ].P [ 14 + 1 ];
				v3 += v1;
				R1 ^= v3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ 0 ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ 0 ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ 0 ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ 0 ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ 0 ].P [ 15 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				v1 = R1 & 0xFF;
				v2 = R1 >> 8;
				v2 &= 0xFF;
				v3 = R1 >> 16;
				v3 &= 0xFF;
				v4 = R1 >> 24;
				v1 = BF_std_BF_current [ 1 ].S [ 3 ] [ v1 ];
				v2 = BF_std_BF_current [ 1 ].S [ 2 ] [ v2 ];
				v3 = BF_std_BF_current [ 1 ].S [ 1 ] [ v3 ];
				v3 += BF_std_BF_current [ 1 ].S [ 0 ] [ v4 ];
				v3 ^= v2;
				L1 ^= BF_std_BF_current [ 1 ].P [ 15 + 1 ];
				v3 += v1;
				L1 ^= v3;
				;
				u4 = R0;
				v4 = R1;
				R0 = L0;
				R1 = L1;
				L0 = u4 ^ BF_std_BF_current [ 0 ].P [ 16 + 1 ];
				L1 = v4 ^ BF_std_BF_current [ 1 ].P [ 16 + 1 ];
				;
				*( ptr - 2 ) = L0;
				*( ptr - 1 ) = R0;
				*( ptr - 2 + ( BF_std_BF_current [ 1 ].S [ 0 ] - BF_std_BF_current [ 0 ].S [ 0 ] ) ) = L1;
				*( ptr - 1 + ( BF_std_BF_current [ 1 ].S [ 0 ] - BF_std_BF_current [ 0 ].S [ 0 ] ) ) = R1;
			}

			while ( ptr < & BF_std_BF_current [ 0 ].S [ 3 ] [ 0xFF ] );
			;
		}

		while ( -- count );
		for ( index = 0;
		index < 2;
		index ++ ) {
			L0 = BF_std_BF_magic_w [ 0 ];
			R0 = BF_std_BF_magic_w [ 1 ];
			count = 64;
			do {
				L0 ^= BF_std_BF_current [ index ].P [ 0 ];
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 0 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 1 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 2 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 3 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 4 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 5 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 6 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 7 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 8 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 9 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 10 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 11 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 12 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 13 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u1 = L0 & 0xFF;
				u2 = L0 >> 8;
				u2 &= 0xFF;
				u3 = L0 >> 16;
				u3 &= 0xFF;
				u4 = L0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				R0 ^= BF_std_BF_current [ index ].P [ 14 + 1 ];
				u3 += u1;
				R0 ^= u3;
				;
				u1 = R0 & 0xFF;
				u2 = R0 >> 8;
				u2 &= 0xFF;
				u3 = R0 >> 16;
				u3 &= 0xFF;
				u4 = R0 >> 24;
				u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
				u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
				u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
				u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
				u3 ^= u2;
				L0 ^= BF_std_BF_current [ index ].P [ 15 + 1 ];
				u3 += u1;
				L0 ^= u3;
				;
				u4 = R0;
				R0 = L0;
				L0 = u4 ^ BF_std_BF_current [ index ].P [ 16 + 1 ];
				;
			}

			while ( -- count );
			BF_out [ index ] [ 0 ] = L0;
			BF_out [ index ] [ 1 ] = R0;
		}

	}

}

void BF_std_crypt_exact ( int index ) {
	BF_word L , R;
	BF_word u1 , u2 , u3 , u4;
	BF_word count;
	int i;
	memcpy ( &BF_out [ index ] [ 2 ] , &BF_std_BF_magic_w [ 2 ] , sizeof ( BF_word ) *4 );
	count = 64;
	do for ( i = 2;
	i < 6;
	i += 2 ) {
		L = BF_out [ index ] [ i ];
		R = BF_out [ index ] [ i + 1 ];
		L ^= BF_std_BF_current [ index ].P [ 0 ];
		u1 = L & 0xFF;
		u2 = L >> 8;
		u2 &= 0xFF;
		u3 = L >> 16;
		u3 &= 0xFF;
		u4 = L >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		R ^= BF_std_BF_current [ index ].P [ 0 + 1 ];
		u3 += u1;
		R ^= u3;
		;
		u1 = R & 0xFF;
		u2 = R >> 8;
		u2 &= 0xFF;
		u3 = R >> 16;
		u3 &= 0xFF;
		u4 = R >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		L ^= BF_std_BF_current [ index ].P [ 1 + 1 ];
		u3 += u1;
		L ^= u3;
		;
		u1 = L & 0xFF;
		u2 = L >> 8;
		u2 &= 0xFF;
		u3 = L >> 16;
		u3 &= 0xFF;
		u4 = L >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		R ^= BF_std_BF_current [ index ].P [ 2 + 1 ];
		u3 += u1;
		R ^= u3;
		;
		u1 = R & 0xFF;
		u2 = R >> 8;
		u2 &= 0xFF;
		u3 = R >> 16;
		u3 &= 0xFF;
		u4 = R >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		L ^= BF_std_BF_current [ index ].P [ 3 + 1 ];
		u3 += u1;
		L ^= u3;
		;
		u1 = L & 0xFF;
		u2 = L >> 8;
		u2 &= 0xFF;
		u3 = L >> 16;
		u3 &= 0xFF;
		u4 = L >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		R ^= BF_std_BF_current [ index ].P [ 4 + 1 ];
		u3 += u1;
		R ^= u3;
		;
		u1 = R & 0xFF;
		u2 = R >> 8;
		u2 &= 0xFF;
		u3 = R >> 16;
		u3 &= 0xFF;
		u4 = R >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		L ^= BF_std_BF_current [ index ].P [ 5 + 1 ];
		u3 += u1;
		L ^= u3;
		;
		u1 = L & 0xFF;
		u2 = L >> 8;
		u2 &= 0xFF;
		u3 = L >> 16;
		u3 &= 0xFF;
		u4 = L >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		R ^= BF_std_BF_current [ index ].P [ 6 + 1 ];
		u3 += u1;
		R ^= u3;
		;
		u1 = R & 0xFF;
		u2 = R >> 8;
		u2 &= 0xFF;
		u3 = R >> 16;
		u3 &= 0xFF;
		u4 = R >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		L ^= BF_std_BF_current [ index ].P [ 7 + 1 ];
		u3 += u1;
		L ^= u3;
		;
		u1 = L & 0xFF;
		u2 = L >> 8;
		u2 &= 0xFF;
		u3 = L >> 16;
		u3 &= 0xFF;
		u4 = L >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		R ^= BF_std_BF_current [ index ].P [ 8 + 1 ];
		u3 += u1;
		R ^= u3;
		;
		u1 = R & 0xFF;
		u2 = R >> 8;
		u2 &= 0xFF;
		u3 = R >> 16;
		u3 &= 0xFF;
		u4 = R >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		L ^= BF_std_BF_current [ index ].P [ 9 + 1 ];
		u3 += u1;
		L ^= u3;
		;
		u1 = L & 0xFF;
		u2 = L >> 8;
		u2 &= 0xFF;
		u3 = L >> 16;
		u3 &= 0xFF;
		u4 = L >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		R ^= BF_std_BF_current [ index ].P [ 10 + 1 ];
		u3 += u1;
		R ^= u3;
		;
		u1 = R & 0xFF;
		u2 = R >> 8;
		u2 &= 0xFF;
		u3 = R >> 16;
		u3 &= 0xFF;
		u4 = R >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		L ^= BF_std_BF_current [ index ].P [ 11 + 1 ];
		u3 += u1;
		L ^= u3;
		;
		u1 = L & 0xFF;
		u2 = L >> 8;
		u2 &= 0xFF;
		u3 = L >> 16;
		u3 &= 0xFF;
		u4 = L >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		R ^= BF_std_BF_current [ index ].P [ 12 + 1 ];
		u3 += u1;
		R ^= u3;
		;
		u1 = R & 0xFF;
		u2 = R >> 8;
		u2 &= 0xFF;
		u3 = R >> 16;
		u3 &= 0xFF;
		u4 = R >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		L ^= BF_std_BF_current [ index ].P [ 13 + 1 ];
		u3 += u1;
		L ^= u3;
		;
		u1 = L & 0xFF;
		u2 = L >> 8;
		u2 &= 0xFF;
		u3 = L >> 16;
		u3 &= 0xFF;
		u4 = L >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		R ^= BF_std_BF_current [ index ].P [ 14 + 1 ];
		u3 += u1;
		R ^= u3;
		;
		u1 = R & 0xFF;
		u2 = R >> 8;
		u2 &= 0xFF;
		u3 = R >> 16;
		u3 &= 0xFF;
		u4 = R >> 24;
		u1 = BF_std_BF_current [ index ].S [ 3 ] [ u1 ];
		u2 = BF_std_BF_current [ index ].S [ 2 ] [ u2 ];
		u3 = BF_std_BF_current [ index ].S [ 1 ] [ u3 ];
		u3 += BF_std_BF_current [ index ].S [ 0 ] [ u4 ];
		u3 ^= u2;
		L ^= BF_std_BF_current [ index ].P [ 15 + 1 ];
		u3 += u1;
		L ^= u3;
		;
		u4 = R;
		R = L;
		L = u4 ^ BF_std_BF_current [ index ].P [ 16 + 1 ];
		;
		BF_out [ index ] [ i ] = L;
		BF_out [ index ] [ i + 1 ] = R;
	}

	while ( -- count );
	BF_out [ index ] [ 5 ] &= ~ ( BF_word ) 0xFF;
}

static void nm_BF_std_BF_decode ( BF_word *dst , char *src , int size ) {
	unsigned char *dptr = ( unsigned char *) dst;
	unsigned char *end = dptr + size;
	unsigned char *sptr = ( unsigned char *) src;
	unsigned int c1 , c2 , c3 , c4;
	do {
		c1 = BF_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *sptr ++ ) ) ];
		c2 = BF_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *sptr ++ ) ) ];
		*dptr ++ = ( c1 << 2 ) | ( ( c2 & 0x30 ) >> 4 );
		if ( dptr >= end ) break;
		c3 = BF_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *sptr ++ ) ) ];
		*dptr ++ = ( ( c2 & 0x0F ) << 4 ) | ( ( c3 & 0x3C ) >> 2 );
		if ( dptr >= end ) break;
		c4 = BF_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *sptr ++ ) ) ];
		*dptr ++ = ( ( c3 & 0x03 ) << 6 ) | c4;
	}

	while ( dptr < end );
}

void *BF_std_get_salt ( char *ciphertext ) {
	static BF_salt salt;
	nm_BF_std_BF_decode ( salt.salt , &ciphertext [ 7 ] , 16 );
	;
	salt.rounds = atoi ( &ciphertext [ 4 ] );
	if ( ciphertext [ 2 ] == 'a' ) salt.subtype = 'y';
	else salt.subtype = ciphertext [ 2 ];
	return & salt;
}

void *BF_std_get_binary ( char *ciphertext ) {
	static BF_binary binary;
	binary [ 5 ] = 0;
	nm_BF_std_BF_decode ( binary , &ciphertext [ 29 ] , 23 );
	;
	binary [ 5 ] &= ~ ( BF_word ) 0xFF;
	return & binary;
}

static struct fmt_tests BSDI_fmt_tests [ ] = {
	{
		"_J9..CCCCXBrJUJV154M" , "U*U*U*U*" 	}

	, {
		"_J9..CCCCXUhOBTXzaiE" , "U*U***U" 	}

	, {
		"_J9..CCCC4gQ.mB/PffM" , "U*U***U*" 	}

	, {
		"_J9..XXXXvlzQGqpPPdk" , "*U*U*U*U" 	}

	, {
		"_J9..XXXXsqM/YSSP..Y" , "*U*U*U*U*" 	}

	, {
		"_J9..XXXXVL7qJCnku0I" , "*U*U*U*U*U*U*U*U" 	}

	, {
		"_J9..XXXXAj8cFbP5scI" , "*U*U*U*U*U*U*U*U*" 	}

	, {
		"_J9..SDizh.vll5VED9g" , "ab1234567" 	}

	, {
		"_J9..SDizRjWQ/zePPHc" , "cr1234567" 	}

	, {
		"_J9..SDizxmRI1GjnQuE" , "zxyDPWgydbQjgq" 	}

	, {
		"_K9..SaltNrQgIYUAeoY" , "726 even" 	}

	, {
		"_J9..SDSD5YGyRCr4W4c" , "" 	}

	, {
		( ( void *) 0 ) , ( ( void *) 0 ) 	}

}

;
static int BSDI_fmt_saved_count;
static struct {
	char key [ 64 ];
}

*BSDI_fmt_buffer;
struct fmt_main fmt_BSDI;
static void nm_BSDI_fmt_init ( void ) {
	DES_std_init ( );
	DES_bs_init ( 0 , ( 1 + 28 ) / 29 );
	DES_std_set_salt ( 0 );
	DES_count = 1;
	BSDI_fmt_buffer = mem_alloc_tiny ( sizeof ( *BSDI_fmt_buffer ) *fmt_BSDI.params.max_keys_per_crypt , ( 4 *8 ) );
}

static int nm_BSDI_fmt_valid ( char *ciphertext ) {
	char *pos;
	if ( ciphertext [ 0 ] != '_' ) return 0;
	for ( pos = & ciphertext [ 1 ];
	pos < & ciphertext [ 9 ];
	pos ++ ) if ( ! *pos ) return 0;
	for ( pos = & ciphertext [ 9 ];
	atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] != 0x7F;
	pos ++ );
	if ( *pos || pos - ciphertext != 20 ) return 0;
	if ( atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *( pos - 1 ) ) ) ] & 3 ) return 0;
	return 1;
}

static void *nm_BSDI_fmt_salt ( char *ciphertext ) {
	static long out [ 2 ];
	out [ 0 ] = DES_raw_get_salt ( ciphertext );
	out [ 1 ] = DES_raw_get_count ( ciphertext );
	return out;
}

static int nm_BSDI_fmt_binary_hash_0 ( void *binary ) {
	return *( long *) binary & 0xF;
}

static int nm_BSDI_fmt_binary_hash_1 ( void *binary ) {
	return *( long *) binary & 0xFF;
}

static int nm_BSDI_fmt_binary_hash_2 ( void *binary ) {
	return *( long *) binary & 0xFFF;
}

static int nm_BSDI_fmt_binary_hash_3 ( void *binary ) {
	return *( long *) binary & 0xFFFF;
}

static int nm_BSDI_fmt_binary_hash_4 ( void *binary ) {
	return *( long *) binary & 0xFFFFF;
}

static int nm_BSDI_fmt_binary_hash_5 ( void *binary ) {
	return *( long *) binary & 0xFFFFFF;
}

static int nm_BSDI_fmt_binary_hash_6 ( void *binary ) {
	return *( long *) binary & 0x7FFFFFF;
}

static int nm_BSDI_fmt_salt_hash ( void *salt ) {
	return *( long *) salt & ( ( 1 << 12 ) - 1 );
}

static void nm_BSDI_fmt_set_salt ( void *salt ) {
	DES_bs_set_salt ( *( long *) salt );
	BSDI_fmt_saved_count = ( ( long *) salt ) [ 1 ];
}

static void nm_BSDI_fmt_set_key ( char *key , int index ) {
	char *ptr , *chr;
	int pos , word;
	unsigned long block [ 2 ];
	union {
		double dummy;
		DES_binary binary;
	}

	aligned;
	char chars [ 8 ];
	char *final = key;
	DES_std_set_key ( key );
	for ( pos = 0 , ptr = key;
	pos < 8 && *ptr;
	pos ++ , ptr ++ );
	block [ 1 ] = block [ 0 ] = 0;
	while ( *ptr ) {
		ptr -= 8;
		for ( word = 0;
		word < 2;
		word ++ ) for ( pos = 0;
		pos < 4;
		pos ++ ) block [ word ] ^= ( long ) *ptr ++ << ( 1 + ( pos << 3 ) );
		DES_std_set_block ( block [ 0 ] , block [ 1 ] );
		DES_std_crypt ( DES_KS_current , aligned.binary );
		DES_std_get_block ( aligned.binary , block );
		chr = chars;
		for ( word = 0;
		word < 2;
		word ++ ) for ( pos = 0;
		pos < 4;
		pos ++ ) {
			*chr ++ = 0x80 | ( ( block [ word ] >> ( 1 + ( pos << 3 ) ) ) ^ *ptr );
			if ( *ptr ) ptr ++;
		}

		final = chars;
		if ( *ptr ) DES_raw_set_key ( chars );
	}

	DES_bs_set_key ( final , index );
	strnfcpy ( BSDI_fmt_buffer [ index ].key , key , 64 );
}

static char *nm_BSDI_fmt_get_key ( int index ) {
	static char out [ 64 + 1 ];
	return strnzcpy ( out , BSDI_fmt_buffer [ index ].key , 64 + 1 );
}

static void nm_BSDI_fmt_crypt_all ( int count ) {
	DES_bs_crypt ( BSDI_fmt_saved_count , count );
}

static int nm_BSDI_fmt_cmp_one ( void *binary , int index ) {
	return DES_bs_cmp_one ( ( long *) binary , 32 , index );
}

static int nm_BSDI_fmt_cmp_exact ( char *source , int index ) {
	return DES_bs_cmp_one ( DES_bs_get_binary ( source ) , 64 , index );
}

struct fmt_main fmt_BSDI = {
	{
		"bsdi" , "BSDI DES" , "Bitslice DES" , " (x725)" , 0 , 64 , 4 , ( 4 *2 ) , 32 , 32 , 0x00000001 | 0x00010000 , BSDI_fmt_tests 	}

	, {
		nm_BSDI_fmt_init , nm_BSDI_fmt_valid , fmt_default_split , ( void *( *) ( char *) ) DES_bs_get_binary , nm_BSDI_fmt_salt , {
			nm_BSDI_fmt_binary_hash_0 , nm_BSDI_fmt_binary_hash_1 , nm_BSDI_fmt_binary_hash_2 , nm_BSDI_fmt_binary_hash_3 , nm_BSDI_fmt_binary_hash_4 , nm_BSDI_fmt_binary_hash_5 , nm_BSDI_fmt_binary_hash_6 		}

		, nm_BSDI_fmt_salt_hash , nm_BSDI_fmt_set_salt , nm_BSDI_fmt_set_key , nm_BSDI_fmt_get_key , fmt_default_clear_keys , nm_BSDI_fmt_crypt_all , {
			DES_bs_get_hash_0 , DES_bs_get_hash_1 , DES_bs_get_hash_2 , DES_bs_get_hash_3 , DES_bs_get_hash_4 , DES_bs_get_hash_5 , DES_bs_get_hash_6 		}

		, ( int ( *) ( void *, int ) ) DES_bs_cmp_all , nm_BSDI_fmt_cmp_one , nm_BSDI_fmt_cmp_exact 	}

	, {
		0 	}

	, ( ( void *) 0 ) }

;
typedef unsigned int ( *char_counters ) [ ( 0x7E - ' ' + 1 ) + 1 ] [ ( 0x7E - ' ' + 1 ) + 1 ] [ ( 0x7E - ' ' + 1 ) ];
typedef unsigned int ( *crack_counters ) [ 8 ] [ 8 ] [ ( 0x7E - ' ' + 1 ) ];
static CRC32_t charset_checksum;
static void nm_charset_charset_filter_plaintexts ( struct db_main *db ) {
	struct list_entry *current , *last;
	unsigned char *ptr;
	char key [ 0x80 ];
	last = ( ( void *) 0 );
	if ( ( current = db -> plaintexts -> head ) ) do {
		if ( ! current -> data [ 0 ] ) {
			list_del_next ( db -> plaintexts , last );
			continue;
		}

		for ( ptr = ( unsigned char *) current -> data;
		*ptr;
		ptr ++ ) if ( *ptr < ' ' || *ptr > 0x7E ) {
			list_del_next ( db -> plaintexts , last );
			break;
		}

		if ( *ptr ) continue;
		strnzcpy ( key , current -> data , 0x80 );
		if ( ( ! f_filter || ext_filter_body ( key , key ) ) ) {
			if ( strlen ( key ) <= strlen ( current -> data ) ) strcpy ( current -> data , key );
		}

		else {
			list_del_next ( db -> plaintexts , last );
			continue;
		}

		last = current;
	}

	while ( ( current = current -> next ) );
}

static int nm_charset_cfputc ( int c , FILE *stream ) {
	unsigned char ch;
	ch = c;
	CRC32_Update ( &charset_checksum , &ch , 1 );
	return fputc ( c , stream );
}

static void nm_charset_charset_checksum_header ( struct charset_header *header ) {
	CRC32_Update ( &charset_checksum , header -> version , sizeof ( header -> version ) );
	CRC32_Update ( &charset_checksum , &header -> min , 1 );
	CRC32_Update ( &charset_checksum , &header -> max , 1 );
	CRC32_Update ( &charset_checksum , &header -> length , 1 );
	CRC32_Update ( &charset_checksum , &header -> count , 1 );
	CRC32_Update ( &charset_checksum , header -> offsets , sizeof ( header -> offsets ) );
	CRC32_Update ( &charset_checksum , header -> order , sizeof ( header -> order ) );
	CRC32_Final ( header -> check , charset_checksum );
}

static void nm_charset_charset_write_header ( FILE *file , struct charset_header *header ) {
	fwrite ( header -> version , sizeof ( header -> version ) , 1 , file );
	fwrite ( header -> check , sizeof ( header -> check ) , 1 , file );
	fputc ( header -> min , file );
	fputc ( header -> max , file );
	fputc ( header -> length , file );
	fputc ( header -> count , file );
	fwrite ( header -> offsets , sizeof ( header -> offsets ) , 1 , file );
	fwrite ( header -> order , sizeof ( header -> order ) , 1 , file );
}

int charset_read_header ( FILE *file , struct charset_header *header ) {
	if ( fread ( header -> version , sizeof ( header -> version ) , 1 , file ) != 1 ) return - 1;
	memset ( header -> check , 0 , sizeof ( header -> check ) );
	if ( memcmp ( header -> version , "CHR1" , sizeof ( header -> version ) ) && fread ( header -> check , sizeof ( header -> check ) , 1 , file ) != 1 ) return - 1;
	{
		unsigned char values [ 4 ];
		if ( fread ( values , sizeof ( values ) , 1 , file ) != 1 ) return - 1;
		header -> min = values [ 0 ];
		header -> max = values [ 1 ];
		header -> length = values [ 2 ];
		header -> count = values [ 3 ];
	}

	return fread ( header -> offsets , sizeof ( header -> offsets ) , 1 , file ) != 1 || fread ( header -> order , sizeof ( header -> order ) , 1 , file ) != 1;
}

static int nm_charset_charset_new_length ( int length , struct charset_header *header , FILE *file ) {
	int result;
	long offset;
	if ( ( result = length < 8 ) ) {
		printf ( "%d " , length + 1 );
		fflush ( stdout );
		if ( ( offset = ftell ( file ) ) < 0 ) pexit ( "ftell" );
		header -> offsets [ length ] [ 0 ] = offset;
		header -> offsets [ length ] [ 1 ] = offset >> 8;
		header -> offsets [ length ] [ 2 ] = offset >> 16;
		header -> offsets [ length ] [ 3 ] = offset >> 24;
	}

	return result;
}

static void nm_charset_charset_generate_chars ( struct list_entry *plaintexts , FILE *file , struct charset_header *header , char_counters chars , crack_counters cracks ) {
	struct list_entry *current;
	unsigned char *ptr;
	unsigned char buffer [ ( 0x7E - ' ' + 1 ) ];
	int length , pos , best , count;
	unsigned int value , max;
	int i , j , k;
	current = plaintexts;
	do {
		for ( ptr = ( unsigned char *) current -> data;
		*ptr;
		ptr ++ ) ( *chars ) [ 0 ] [ 0 ] [ ( ( unsigned int ) ( unsigned char ) ( *ptr - ' ' ) ) ] ++;
	}

	while ( ( current = current -> next ) );
	count = 0;
	best = 0;
	do {
		max = 0;
		for ( k = 0;
		k < ( 0x7E - ' ' + 1 );
		k ++ ) if ( ( value = ( *chars ) [ 0 ] [ 0 ] [ k ] ) > max ) {
			max = value;
			best = k;
		}

		if ( ! max ) break;
		( *chars ) [ 0 ] [ 0 ] [ best ] = 0;
		buffer [ count ++ ] = ' ' + best;
	}

	while ( 1 );
	header -> count = count;
	fwrite ( buffer , 1 , count , file );
	CRC32_Update ( &charset_checksum , buffer , count );
	for ( length = 0;
	nm_charset_charset_new_length ( length , header , file );
	length ++ ) for ( pos = 0;
	pos <= length;
	pos ++ ) {
		if ( event_abort ) return;
		nm_charset_cfputc ( 0 , file );
		nm_charset_cfputc ( 1 , file );
		nm_charset_cfputc ( length , file );
		nm_charset_cfputc ( pos , file );
		memset ( chars , 0 , sizeof ( *chars ) );
		current = plaintexts;
		do if ( ( int ) strlen ( current -> data ) == length + 1 ) {
			ptr = ( unsigned char *) current -> data;
			( *chars ) [ ( 0x7E - ' ' + 1 ) ] [ ( 0x7E - ' ' + 1 ) ] [ ( ( unsigned int ) ( unsigned char ) ( ptr [ pos ] - ' ' ) ) ] ++;
			if ( pos ) ( *chars ) [ ( 0x7E - ' ' + 1 ) ] [ ( ( unsigned int ) ( unsigned char ) ( ptr [ pos - 1 ] - ' ' ) ) ] [ ( ( unsigned int ) ( unsigned char ) ( ptr [ pos ] - ' ' ) ) ] ++;
			if ( pos > 1 ) ( *chars ) [ ( ( unsigned int ) ( unsigned char ) ( ptr [ pos - 2 ] - ' ' ) ) ] [ ( ( unsigned int ) ( unsigned char ) ( ptr [ pos - 1 ] - ' ' ) ) ] [ ( ( unsigned int ) ( unsigned char ) ( ptr [ pos ] - ' ' ) ) ] ++;
		}

		while ( ( current = current -> next ) );
		for ( i = ( pos > 1 ? 0 : ( 0x7E - ' ' + 1 ) );
		i <= ( 0x7E - ' ' + 1 );
		i ++ ) for ( j = ( pos ? 0 : ( 0x7E - ' ' + 1 ) );
		j <= ( 0x7E - ' ' + 1 );
		j ++ ) {
			count = 0;
			do {
				max = 0;
				for ( k = 0;
				k < ( 0x7E - ' ' + 1 );
				k ++ ) if ( ( value = ( *chars ) [ i ] [ j ] [ k ] ) > max ) {
					max = value;
					best = k;
				}

				if ( i == ( 0x7E - ' ' + 1 ) && j == ( 0x7E - ' ' + 1 ) ) ( *cracks ) [ length ] [ pos ] [ count ] = max;
				if ( ! max ) break;
				( *chars ) [ i ] [ j ] [ best ] = 0;
				buffer [ count ++ ] = ' ' + best;
			}

			while ( 1 );
			if ( count ) {
				nm_charset_cfputc ( 0 , file );
				nm_charset_cfputc ( 2 , file );
				nm_charset_cfputc ( i , file );
				nm_charset_cfputc ( j , file );
				fwrite ( buffer , 1 , count , file );
				CRC32_Update ( &charset_checksum , buffer , count );
			}

		}

	}

	nm_charset_cfputc ( 0 , file );
	nm_charset_cfputc ( 1 , file );
	nm_charset_cfputc ( 8 , file );
}

static double nm_charset_powi ( int x , unsigned int y ) {
	double a = 1.0;
	if ( y ) {
		double b = x;
		do {
			if ( y & 1 ) a *= b;
			if ( ! ( y >>= 1 ) ) break;
			b *= b;
		}

		while ( 1 );
	}

	return a;
}

static void nm_charset_charset_generate_order ( crack_counters cracks , unsigned char *order , int size ) {
	int length , pos , count;
	int best_length , best_pos , best_count;
	double total , min , value;
	unsigned char *ptr;
	double ( *ratios ) [ 8 ] [ 8 ] [ ( 0x7E - ' ' + 1 ) ];
	ratios = mem_alloc ( sizeof ( *ratios ) );
	for ( length = 0;
	length < 8;
	length ++ ) for ( count = 0;
	count < ( 0x7E - ' ' + 1 );
	count ++ ) {
		total = nm_charset_powi ( count + 1 , length + 1 ) - nm_charset_powi ( count , length + 1 );
		if ( count ) total /= length + 1;
		for ( pos = 0;
		pos <= length;
		pos ++ ) {
			double ratio = total;
			unsigned int div = ( *cracks ) [ length ] [ pos ] [ count ];
			if ( div ) ratio /= div;
			( *ratios ) [ length ] [ pos ] [ count ] = ratio;
		}

	}

	ptr = order;
	best_length = best_pos = best_count = 0;
	do {
		int found = 0;
		min = 0.0;
		for ( length = 0;
		length < 8;
		length ++ ) for ( count = 0;
		count < ( 0x7E - ' ' + 1 );
		count ++ ) for ( pos = 0;
		pos <= length;
		pos ++ ) {
			value = ( *ratios ) [ length ] [ pos ] [ count ];
			if ( value >= 0.0 && ( ! found || value < min ) ) {
				found = 1;
				min = value;
				best_length = length;
				best_pos = pos;
				best_count = count;
			}

		}

		if ( ! found ) break;
		( *ratios ) [ best_length ] [ best_pos ] [ best_count ] = - 1.0;
		( ( ptr <= order + size - 3 ) ? ( void ) ( 0 ) : __assert_fail ( "ptr <= order + size - 3" , "src/charset.c" , 344 , __PRETTY_FUNCTION__ ) );
		*ptr ++ = best_length;
		*ptr ++ = best_pos;
		*ptr ++ = best_count;
	}

	while ( ! event_abort );
	( ( event_abort || ptr == order + size ) ? ( void ) ( 0 ) : __assert_fail ( "event_abort || ptr == order + size" , "src/charset.c" , 350 , __PRETTY_FUNCTION__ ) );
	{
		if ( ( ratios ) ) {
			free ( ( ratios ) );
			( ratios ) = ( ( void *) 0 );
		}

	}

	;
}

static void nm_charset_charset_generate_all ( struct list_entry *plaintexts , char *charset ) {
	FILE *file;
	int was_error;
	struct charset_header *header;
	char_counters chars;
	crack_counters cracks;
	header = ( struct charset_header *) mem_alloc ( sizeof ( *header ) );
	memset ( header , 0 , sizeof ( *header ) );
	chars = ( char_counters ) mem_alloc ( sizeof ( *chars ) );
	memset ( chars , 0 , sizeof ( *chars ) );
	cracks = ( crack_counters ) mem_alloc ( sizeof ( *cracks ) );
	if ( ! ( file = fopen ( path_expand ( charset ) , "wb" ) ) ) pexit ( "fopen: %s" , path_expand ( charset ) );
	nm_charset_charset_write_header ( file , header );
	printf ( "Generating charsets... " );
	fflush ( stdout );
	nm_charset_charset_generate_chars ( plaintexts , file , header , chars , cracks );
	if ( event_abort ) {
		fclose ( file );
		unlink ( charset );
		putchar ( '\n' );
		check_abort ( 0 );
	}

	printf ( "DONE\nGenerating cracking order... " );
	fflush ( stdout );
	nm_charset_charset_generate_order ( cracks , header -> order , sizeof ( header -> order ) );
	if ( event_abort ) {
		fclose ( file );
		unlink ( charset );
		putchar ( '\n' );
		check_abort ( 0 );
	}

	puts ( "DONE" );
	fflush ( file );
	if ( ! ferror ( file ) && ! fseek ( file , 0 , 0 ) ) {
		strncpy ( header -> version , "CHR2" , sizeof ( header -> version ) );
		header -> min = ' ';
		header -> max = 0x7E;
		header -> length = 8;
		nm_charset_charset_checksum_header ( header );
		nm_charset_charset_write_header ( file , header );
	}

	{
		if ( ( cracks ) ) {
			free ( ( cracks ) );
			( cracks ) = ( ( void *) 0 );
		}

	}

	;
	{
		if ( ( chars ) ) {
			free ( ( chars ) );
			( chars ) = ( ( void *) 0 );
		}

	}

	;
	was_error = ferror ( file );
	if ( fclose ( file ) || was_error ) {
		unlink ( charset );
		fprintf ( stderr , "Failed to write charset file: %s\n" , charset );
		error ( );
	}

	printf ( "Successfully written charset file: %s (%d character%s)\n" , charset , header -> count , header -> count != 1 ? "s" : "" );
	{
		if ( ( header ) ) {
			free ( ( header ) );
			( header ) = ( ( void *) 0 );
		}

	}

	;
}

void do_makechars ( struct db_main *db , char *charset ) {
	nm_charset_charset_filter_plaintexts ( db );
	printf ( "Loaded %d plaintext%s%s\n" , db -> plaintexts -> count , db -> plaintexts -> count != 1 ? "s" : "" , db -> plaintexts -> count ? "" : ", exiting..." );
	if ( ! db -> plaintexts -> count ) return;
	CRC32_Init ( &charset_checksum );
	nm_charset_charset_generate_all ( db -> plaintexts -> head , charset );
}

char itoa64 [ 64 ] = "./0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char atoi64 [ 0x100 ];
char itoa16 [ 16 ] = "0123456789abcdef";
char atoi16 [ 0x100 ];
static int common_initialized = 0;
void common_init ( void ) {
	char *pos;
	if ( common_initialized ) return;
	memset ( atoi64 , 0x7F , sizeof ( atoi64 ) );
	for ( pos = itoa64;
	pos <= & itoa64 [ 63 ];
	pos ++ ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] = pos - itoa64;
	memset ( atoi16 , 0x7F , sizeof ( atoi16 ) );
	for ( pos = itoa16;
	pos <= & itoa16 [ 15 ];
	pos ++ ) atoi16 [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] = pos - itoa16;
	atoi16 [ 'A' ] = atoi16 [ 'a' ];
	atoi16 [ 'B' ] = atoi16 [ 'b' ];
	atoi16 [ 'C' ] = atoi16 [ 'c' ];
	atoi16 [ 'D' ] = atoi16 [ 'd' ];
	atoi16 [ 'E' ] = atoi16 [ 'e' ];
	atoi16 [ 'F' ] = atoi16 [ 'f' ];
	common_initialized = 1;
}

char *c_errors [ ] = {
	( ( void *) 0 ) , "Unknown identifier" , "Unexpected character" , "Error in expression" , "Identifier is too long" , "Expression is too complex" , "Invalid array size" , "Data section is too large" , "Integer constant out of range" , "Duplicate identifier" , "Keyword is used as an identifier" , "Not in a function" , "Nested functions are not supported" , "Not in an if statement" , "Not in a loop" , "Unexpected end of source" , "Internal compiler error" }

;
int c_errno;
union c_insn {
	void ( *op ) ( void );
	c_int *mem;
	c_int imm;
	union c_insn *pc;
}

;
struct c_fixup {
	struct c_fixup *next;
	union c_insn *pc;
}

;
static int compiler_c_pass;
static union c_insn *compiler_c_code_start;
static union c_insn *compiler_c_code_ptr;
static union c_insn *compiler_c_pc;
static c_int *compiler_c_data_start;
static c_int *compiler_c_data_ptr;
static union c_insn compiler_c_stack [ ( ( 0x100 + 4 ) *4 ) ];
static union c_insn *compiler_c_sp;
static union c_insn *compiler_c_loop_start;
static struct c_fixup *compiler_c_break_fixups;
static struct c_ident *compiler_c_funcs;
static char compiler_c_unget_buffer [ ( 0x100 + 4 ) ];
static int compiler_c_unget_count;
static char compiler_c_isident [ 0x100 ];
static int compiler_c_EOF;
static int ( *nm_compiler_c_ext_getchar ) ( void );
static void ( *nm_compiler_c_ext_rewind ) ( void );
static char *compiler_c_reserved [ ] = {
	"void" , "int" , "if" , "else" , "while" , "continue" , "break" , "return" , ( ( void *) 0 ) }

;
struct c_op {
	int prec;
	int dir;
	int class;
	char *name;
	void ( *op ) ( void );
}

;
static struct c_op compiler_c_ops [ ];
static void nm_compiler_c_init ( void ) {
	int c;
	for ( c = 0;
	c < 0x100;
	c ++ ) if ( c < 0x80 ) compiler_c_isident [ c ] = ( ( ( *__ctype_b_loc ( ) ) [ ( int ) ( ( c ) ) ] & ( unsigned short int ) _ISalpha ) || ( ( *__ctype_b_loc ( ) ) [ ( int ) ( ( c ) ) ] & ( unsigned short int ) _ISdigit ) || c == '_' ) ? 1 : 0;
	else compiler_c_isident [ c ] = 0;
	compiler_c_code_ptr = compiler_c_code_start;
	compiler_c_data_ptr = compiler_c_data_start;
	compiler_c_loop_start = ( ( void *) 0 );
	compiler_c_break_fixups = ( ( void *) 0 );
	compiler_c_funcs = ( ( void *) 0 );
	compiler_c_unget_count = 0;
	compiler_c_EOF = 0;
	c_errno = 0;
	nm_compiler_c_ext_rewind ( );
}

static void nm_compiler_c_ungetchar ( char c ) {
	if ( compiler_c_unget_count >= ( 0x100 + 4 ) ) c_errno = 16;
	else compiler_c_unget_buffer [ compiler_c_unget_count ++ ] = c;
}

static char nm_compiler_c_buffer_getchar ( void ) {
	int c;
	if ( compiler_c_unget_count ) return compiler_c_unget_buffer [ -- compiler_c_unget_count ];
	if ( ( c = nm_compiler_c_ext_getchar ( ) ) > 0 ) return c;
	compiler_c_EOF = 1;
	c_errno = 15;
	return ' ';
}

static char nm_compiler_c_getchar ( int quote ) {
	int c;
	int space = 0;
	do {
		c = ( unsigned char ) nm_compiler_c_buffer_getchar ( );
		if ( quote || compiler_c_EOF ) return c;
		if ( c <= ' ' ) space = 1;
		else if ( c == '/' ) switch ( ( c = nm_compiler_c_buffer_getchar ( ) ) ) {
			case '/' : do {
				c = nm_compiler_c_buffer_getchar ( );
			}

			while ( ! compiler_c_EOF && c != '\n' && c != '\r' );
			c = ' ';
			space = 1;
			break;
			case '*' : do {
				if ( ( c = nm_compiler_c_buffer_getchar ( ) ) == '*' ) if ( ( c = nm_compiler_c_buffer_getchar ( ) ) == '/' ) break;
			}

			while ( ! compiler_c_EOF );
			c = ' ';
			space = 1;
			break;
			default : nm_compiler_c_ungetchar ( c );
			c = '/';
		}

	}

	while ( c <= ' ' );
	if ( space ) {
		nm_compiler_c_ungetchar ( c );
		c = ' ';
	}

	return c;
}

static char *nm_compiler_c_gettoken ( void ) {
	static char token [ 0x100 ];
	int pos = 0;
	while ( compiler_c_isident [ ( ( unsigned int ) ( unsigned char ) ( token [ pos ++ ] = nm_compiler_c_getchar ( 0 ) ) ) ] ) if ( pos >= 0x100 ) {
		c_errno = 4;
		break;
	}

	if ( pos != 1 ) nm_compiler_c_ungetchar ( token [ -- pos ] );
	token [ pos ] = 0;
	return token;
}

static c_int nm_compiler_c_getint ( char *token ) {
	c_int value;
	long l_value;
	char *error;
	if ( token [ 0 ] == '\'' ) {
		if ( ( value = nm_compiler_c_getchar ( 1 ) ) == '\'' ) c_errno = 2;
		else if ( value == '\\' ) value = nm_compiler_c_getchar ( 1 );
		if ( nm_compiler_c_getchar ( 1 ) != '\'' ) c_errno = 2;
	}

	else {
		( *__errno_location ( ) ) = 0;
		l_value = strtol ( token , &error , 0 );
		value = ( c_int ) l_value;
		if ( ( *__errno_location ( ) ) == 34 || ( long ) value != l_value ) c_errno = 8;
		else if ( ! *token || *error || ( *__errno_location ( ) ) ) c_errno = 2;
	}

	return value;
}

static char nm_compiler_c_skip_space ( void ) {
	char c;
	if ( ( c = nm_compiler_c_getchar ( 0 ) ) == ' ' ) c = nm_compiler_c_getchar ( 0 );
	return c;
}

static int nm_compiler_c_expect ( char expected ) {
	char c;
	if ( ( c = nm_compiler_c_getchar ( 0 ) ) == ' ' ) if ( expected != ' ' ) c = nm_compiler_c_getchar ( 0 );
	if ( c != expected ) c_errno = 2;
	return c_errno;
}

static struct c_ident *nm_compiler_c_find_ident ( struct c_ident *list , struct c_ident *globals , char *name ) {
	struct c_ident *current;
	if ( ( current = list ) != globals ) do {
		if ( ! strcmp ( name , current -> name ) ) break;
	}

	while ( ( current = current -> next ) != globals );
	if ( current != globals ) return current;
	else return ( ( void *) 0 );
}

static int nm_compiler_c_alloc_ident ( struct c_ident **list , struct c_ident *globals , char *name , void *addr ) {
	char **current;
	struct c_ident *last;
	current = compiler_c_reserved;
	do {
		if ( ! strcmp ( name , *current ) ) return c_errno = 10;
	}

	while ( *++ current );
	if ( nm_compiler_c_find_ident ( *list , globals , name ) ) return c_errno = 9;
	last = *list;
	*list = ( struct c_ident *) mem_alloc ( sizeof ( struct c_ident ) );
	( *list ) -> next = last;
	strcpy ( ( *list ) -> name = ( char *) mem_alloc ( strlen ( name ) + 1 ) , name );
	( *list ) -> addr = addr;
	return c_errno;
}

static void nm_compiler_c_free_ident ( struct c_ident *list , struct c_ident *globals ) {
	struct c_ident *current;
	while ( ( current = list ) != globals ) {
		list = list -> next;
		{
			if ( ( current -> name ) ) {
				free ( ( current -> name ) );
				( current -> name ) = ( ( void *) 0 );
			}

		}

		;
		{
			if ( ( current ) ) {
				free ( ( current ) );
				( current ) = ( ( void *) 0 );
			}

		}

		;
	}

}

static int nm_compiler_c_find_op ( char *token , int left ) {
	int best = - 1;
	int op = 0;
	do {
		if ( ( compiler_c_ops [ op ].class != 1 && left ) || ( compiler_c_ops [ op ].class == 1 && ! left ) ) if ( ! memcmp ( compiler_c_ops [ op ].name , token , strlen ( compiler_c_ops [ op ].name ) ) ) if ( best < 0 || strlen ( compiler_c_ops [ op ].name ) > strlen ( compiler_c_ops [ best ].name ) ) best = op;
	}

	while ( compiler_c_ops [ ++ op ].prec );
	return best;
}

static void nm_compiler_c_free_fixup ( struct c_fixup *list , union c_insn *pc ) {
	struct c_fixup *current;
	while ( ( current = list ) ) {
		if ( compiler_c_pass ) current -> pc -> pc = pc;
		list = list -> next;
		{
			if ( ( current ) ) {
				free ( ( current ) );
				( current ) = ( ( void *) 0 );
			}

		}

		;
	}

}

static void ( *compiler_c_op_return ) ( void );
static void ( *compiler_c_op_bz ) ( void );
static void ( *compiler_c_op_ba ) ( void );
static void ( *compiler_c_op_push_imm ) ( void );
static void ( *compiler_c_op_push_mem ) ( void );
static void ( *compiler_c_op_pop ) ( void );
static void ( *compiler_c_op_push_imm_imm ) ( void );
static void ( *compiler_c_op_push_imm_mem ) ( void );
static void ( *compiler_c_op_push_mem_imm ) ( void );
static void ( *compiler_c_op_push_mem_mem ) ( void );
static void ( *compiler_c_op_push_mem_mem_mem ) ( void );
static void ( *compiler_c_op_push_mem_mem_mem_imm ) ( void );
static void ( *compiler_c_op_push_mem_mem_mem_mem ) ( void );
static void ( *compiler_c_op_assign ) ( void );
static void ( *compiler_c_op_assign_pop ) ( void );
static void ( *nm_compiler_c_push ( void ( *last ) ( void ) , void ( *op ) ( void ) , union c_insn *value ) ) ( void ) {
	if ( last == compiler_c_op_push_imm || last == compiler_c_op_push_mem ) {
		if ( last == compiler_c_op_push_imm ) {
			if ( op == compiler_c_op_push_imm ) last = compiler_c_op_push_imm_imm;
			else last = compiler_c_op_push_imm_mem;
		}

		else {
			if ( op == compiler_c_op_push_imm ) last = compiler_c_op_push_mem_imm;
			else last = compiler_c_op_push_mem_mem;
		}

		if ( compiler_c_pass ) {
			( compiler_c_code_ptr - 2 ) -> op = last;
			*compiler_c_code_ptr = *value;
		}

		compiler_c_code_ptr ++;
	}

	else if ( last == compiler_c_op_push_mem_mem && op == compiler_c_op_push_mem ) {
		last = compiler_c_op_push_mem_mem_mem;
		if ( compiler_c_pass ) {
			( compiler_c_code_ptr - 3 ) -> op = last;
			*compiler_c_code_ptr = *value;
		}

		compiler_c_code_ptr ++;
	}

	else if ( last == compiler_c_op_push_mem_mem_mem ) {
		if ( op == compiler_c_op_push_imm ) last = compiler_c_op_push_mem_mem_mem_imm;
		else last = compiler_c_op_push_mem_mem_mem_mem;
		if ( compiler_c_pass ) {
			( compiler_c_code_ptr - 4 ) -> op = last;
			*compiler_c_code_ptr = *value;
		}

		compiler_c_code_ptr ++;
	}

	else {
		last = op;
		if ( compiler_c_pass ) {
			( compiler_c_code_ptr ++ ) -> op = op;
			*compiler_c_code_ptr ++ = *value;
		}

		else compiler_c_code_ptr += 2;
	}

	return last;
}

static int nm_compiler_c_block ( char term , struct c_ident *vars );
static int nm_compiler_c_define ( char term , struct c_ident **vars , struct c_ident *globals ) {
	char *token;
	char c;
	c_int size;
	nm_compiler_c_expect ( ' ' );
	token = nm_compiler_c_gettoken ( );
	if ( ! ( compiler_c_isident [ ( ( unsigned int ) ( unsigned char ) ( *token ) ) ] && ( ( *token ) < '0' || ( *token ) > '9' ) ) ) c_errno = 2;
	do if ( *token != ' ' ) {
		if ( ! ( compiler_c_isident [ ( ( unsigned int ) ( unsigned char ) ( *token ) ) ] && ( ( *token ) < '0' || ( *token ) > '9' ) ) ) c_errno = 2;
		if ( c_errno ) return c_errno;
		if ( ( c = nm_compiler_c_skip_space ( ) ) == '(' ) {
			if ( term ) return c_errno = 12;
			if ( nm_compiler_c_alloc_ident ( &compiler_c_funcs , ( ( void *) 0 ) , token , compiler_c_code_ptr ) ) return c_errno;
			nm_compiler_c_expect ( ')' );
			if ( nm_compiler_c_expect ( '{' ) ) return c_errno;
			nm_compiler_c_block ( '}' , *vars );
			if ( compiler_c_pass ) compiler_c_code_ptr -> op = compiler_c_op_return;
			compiler_c_code_ptr ++;
			break;
		}

		else {
			if ( nm_compiler_c_alloc_ident ( vars , globals , token , compiler_c_data_ptr ++ ) ) return c_errno;
			if ( c == '[' ) {
				size = nm_compiler_c_getint ( nm_compiler_c_gettoken ( ) );
				if ( c_errno ) return c_errno;
				if ( size < 1 || size > 0x1000000 ) return c_errno = 6;
				compiler_c_data_ptr += size - 1;
				if ( compiler_c_data_ptr - compiler_c_data_start > 0x8000000 ) return c_errno = 7;
				nm_compiler_c_expect ( ']' );
				c = nm_compiler_c_skip_space ( );
			}

			if ( c == ';' ) break;
			if ( c != ',' ) c_errno = 2;
		}

	}

	while ( ! c_errno && *( token = nm_compiler_c_gettoken ( ) ) != ';' );
	return c_errno;
}

static int nm_compiler_c_expr ( char term , struct c_ident *vars , char *token , int pop ) {
	char c;
	struct c_ident *var;
	int lookahead , op;
	struct c_op *op1 , *op2;
	union c_insn value;
	int stack [ 0x100 ];
	int sp = 0;
	int balance = - 1;
	int left = 0;
	void ( *last ) ( void ) = ( void ( *) ( void ) ) 0;
	if ( term == ')' ) stack [ sp ++ ] = - 1;
	do {
		c = *token;
		if ( c == ')' || c == ']' || c == ';' || c == term ) {
			while ( sp ) {
				if ( stack [ -- sp ] < 0 ) break;
				if ( compiler_c_ops [ stack [ sp ] ].class == 0 ) balance --;
				last = compiler_c_ops [ stack [ sp ] ].op;
				if ( compiler_c_pass ) compiler_c_code_ptr -> op = last;
				compiler_c_code_ptr ++;
				if ( ! stack [ sp ] ) break;
			}

			if ( ( c == ')' && stack [ sp ] >= 0 ) || ( c == ']' && stack [ sp ] ) || ( ( c == ';' || ( term != ')' && c == term ) ) && sp ) ) c_errno = 3;
			if ( c_errno || ( ! sp && c == term ) ) break;
			left = 1;
		}

		else if ( ( c >= '0' && c <= '9' ) || c == '\'' ) {
			value.imm = nm_compiler_c_getint ( token );
			last = nm_compiler_c_push ( last , compiler_c_op_push_imm , &value );
			left = 1;
			balance ++;
		}

		else if ( c == '(' || c == '[' ) {
			if ( sp >= 0x100 ) c_errno = 5;
			else stack [ sp ++ ] = ( c == '(' ) ? - 1 : 0;
			left = 0;
		}

		else if ( c != ' ' ) {
			if ( compiler_c_isident [ ( ( unsigned int ) ( unsigned char ) ( c ) ) ] ) var = nm_compiler_c_find_ident ( vars , ( ( void *) 0 ) , token );
			else var = ( ( void *) 0 );
			if ( var ) {
				value.mem = var -> addr;
				last = nm_compiler_c_push ( last , compiler_c_op_push_mem , &value );
				left = 1;
				balance ++;
			}

			else {
				if ( ( lookahead = ! token [ 1 ] ) ) {
					token [ 1 ] = nm_compiler_c_getchar ( 0 );
					token [ 2 ] = nm_compiler_c_getchar ( 0 );
					token [ 3 ] = 0;
				}

				if ( ( op = nm_compiler_c_find_op ( token , left ) ) < 0 ) {
					if ( compiler_c_isident [ ( ( unsigned int ) ( unsigned char ) ( c ) ) ] ) c_errno = 1;
					else c_errno = 2;
					return c_errno;
				}

				if ( lookahead ) if ( strlen ( compiler_c_ops [ op ].name ) < 3 ) {
					nm_compiler_c_ungetchar ( token [ 2 ] );
					if ( ! compiler_c_ops [ op ].name [ 1 ] ) nm_compiler_c_ungetchar ( token [ 1 ] );
				}

				op1 = & compiler_c_ops [ op ];
				while ( sp && stack [ sp - 1 ] >= 0 ) {
					op2 = & compiler_c_ops [ stack [ sp - 1 ] ];
					if ( op2 -> dir == 1 ) if ( op2 -> prec <= op1 -> prec ) break;
					if ( op2 -> dir == 0 ) if ( op2 -> prec < op1 -> prec ) break;
					if ( op2 -> class == 0 ) balance --;
					last = op2 -> op;
					if ( compiler_c_pass ) compiler_c_code_ptr -> op = last;
					compiler_c_code_ptr ++;
					sp --;
				}

				if ( sp >= 0x100 ) c_errno = 5;
				else {
					stack [ sp ++ ] = op;
					left = op1 -> class == 2;
				}

			}

		}

		if ( c_errno || c == ';' || ( c == term && c != ')' ) ) break;
		token = nm_compiler_c_gettoken ( );
	}

	while ( ! c_errno );
	if ( c_errno ) return c_errno;
	if ( sp || balance ) c_errno = 3;
	if ( pop ) {
		if ( last == compiler_c_op_assign ) {
			if ( compiler_c_pass ) ( compiler_c_code_ptr - 1 ) -> op = compiler_c_op_assign_pop;
		}

		else {
			if ( compiler_c_pass ) compiler_c_code_ptr -> op = compiler_c_op_pop;
			compiler_c_code_ptr ++;
		}

	}

	if ( ! term && ! c_errno ) c_errno = 11;
	if ( *token == term ) return - 1;
	return c_errno;
}

static int nm_compiler_c_cond ( char term , struct c_ident *vars , char *token ) {
	char c;
	char *pos;
	union c_insn *start , *outer_loop_start , *fixup;
	struct c_fixup *outer_loop_break_fixups;
	if ( ! term ) return c_errno = 11;
	c = *token;
	start = compiler_c_code_ptr;
	if ( nm_compiler_c_expect ( '(' ) ) return c_errno;
	switch ( nm_compiler_c_expr ( ')' , vars , nm_compiler_c_gettoken ( ) , 0 ) ) {
		case - 1 : break;
		case 0 : c_errno = 2;
		default : return c_errno;
	}

	if ( compiler_c_pass ) compiler_c_code_ptr -> op = compiler_c_op_bz;
	compiler_c_code_ptr ++;
	fixup = compiler_c_code_ptr ++;
	outer_loop_start = compiler_c_loop_start;
	outer_loop_break_fixups = compiler_c_break_fixups;
	if ( c == 'w' ) {
		compiler_c_loop_start = start;
		compiler_c_break_fixups = ( ( void *) 0 );
	}

	if ( nm_compiler_c_block ( ';' , vars ) ) {
		if ( c == 'w' ) {
			nm_compiler_c_free_fixup ( compiler_c_break_fixups , ( ( void *) 0 ) );
			compiler_c_break_fixups = outer_loop_break_fixups;
		}

		return c_errno;
	}

	if ( c == 'w' ) {
		compiler_c_loop_start = outer_loop_start;
		if ( compiler_c_pass ) {
			( compiler_c_code_ptr ++ ) -> op = compiler_c_op_ba;
			( compiler_c_code_ptr ++ ) -> pc = start;
		}

		else compiler_c_code_ptr += 2;
		nm_compiler_c_free_fixup ( compiler_c_break_fixups , compiler_c_code_ptr );
		compiler_c_break_fixups = outer_loop_break_fixups;
	}

	else {
		while ( *( token = nm_compiler_c_gettoken ( ) ) == ' ' ) if ( c_errno ) return c_errno;
		if ( ! strcmp ( token , "else" ) ) {
			if ( compiler_c_pass ) {
				( compiler_c_code_ptr ++ ) -> op = compiler_c_op_ba;
				fixup -> pc = compiler_c_code_ptr + 1;
				fixup = compiler_c_code_ptr ++;
			}

			else compiler_c_code_ptr += 2;
			if ( nm_compiler_c_block ( ';' , vars ) ) return c_errno;
		}

		else {
			pos = token + strlen ( token );
			while ( pos > token ) nm_compiler_c_ungetchar ( *-- pos );
		}

	}

	if ( compiler_c_pass ) fixup -> pc = compiler_c_code_ptr;
	nm_compiler_c_ungetchar ( ';' );
	return c_errno;
}

static int nm_compiler_c_continue ( void ) {
	if ( ! compiler_c_loop_start ) return c_errno = 14;
	if ( compiler_c_pass ) {
		( compiler_c_code_ptr ++ ) -> op = compiler_c_op_ba;
		( compiler_c_code_ptr ++ ) -> pc = compiler_c_loop_start;
	}

	else compiler_c_code_ptr += 2;
	nm_compiler_c_expect ( ';' );
	nm_compiler_c_ungetchar ( ';' );
	return c_errno;
}

static int nm_compiler_c_break ( void ) {
	struct c_fixup *fixup;
	if ( ! compiler_c_loop_start ) return c_errno = 14;
	nm_compiler_c_expect ( ';' );
	nm_compiler_c_ungetchar ( ';' );
	fixup = compiler_c_break_fixups;
	compiler_c_break_fixups = ( struct c_fixup *) mem_alloc ( sizeof ( struct c_fixup ) );
	compiler_c_break_fixups -> next = fixup;
	if ( compiler_c_pass ) compiler_c_code_ptr -> op = compiler_c_op_ba;
	compiler_c_break_fixups -> pc = compiler_c_code_ptr + 1;
	compiler_c_code_ptr += 2;
	return c_errno;
}

static int nm_compiler_c_return ( char term ) {
	if ( ! term ) return c_errno = 11;
	if ( compiler_c_pass ) compiler_c_code_ptr -> op = compiler_c_op_return;
	compiler_c_code_ptr ++;
	nm_compiler_c_expect ( ';' );
	nm_compiler_c_ungetchar ( ';' );
	return c_errno;
}

static int nm_compiler_c_block ( char term , struct c_ident *vars ) {
	struct c_ident *locals = vars;
	char *token;
	while ( *( token = nm_compiler_c_gettoken ( ) ) != term ) {
		if ( c_errno ) {
			if ( ! term && c_errno == 15 ) c_errno = 0;
			break;
		}

		if ( *token == ' ' ) continue;
		if ( *token == '{' ) {
			if ( ! term ) return c_errno = 11;
			if ( term == ';' ) term = '}';
			else if ( nm_compiler_c_block ( '}' , locals ) ) break;
			else continue;
		}

		else if ( ! strcmp ( token , "void" ) || ! strcmp ( token , "int" ) ) {
			if ( nm_compiler_c_define ( term , &locals , vars ) ) break;
		}

		else if ( ! strcmp ( token , "if" ) || ! strcmp ( token , "while" ) ) {
			if ( nm_compiler_c_cond ( term , locals , token ) ) break;
		}

		else if ( ! strcmp ( token , "else" ) ) return c_errno = 13;
		else if ( ! strcmp ( token , "continue" ) ) {
			if ( nm_compiler_c_continue ( ) ) break;
		}

		else if ( ! strcmp ( token , "break" ) ) {
			if ( nm_compiler_c_break ( ) ) break;
		}

		else if ( ! strcmp ( token , "return" ) ) {
			if ( nm_compiler_c_return ( term ) ) break;
		}

		else if ( *token != ';' ) if ( nm_compiler_c_expr ( term , locals , token , 1 ) ) break;
		if ( c_errno ) break;
	}

	nm_compiler_c_free_ident ( locals , vars );
	if ( c_errno && compiler_c_EOF ) c_errno = 15;
	return c_errno;
}

int c_compile ( int ( *ext_getchar ) ( void ) , void ( *ext_rewind ) ( void ) , struct c_ident *externs ) {
	c_execute_fast ( ( ( void *) 0 ) );
	nm_compiler_c_ext_getchar = ext_getchar;
	nm_compiler_c_ext_rewind = ext_rewind;
	compiler_c_code_start = ( ( void *) 0 );
	compiler_c_data_start = ( ( void *) 0 );
	for ( compiler_c_pass = 0;
	compiler_c_pass < 2;
	compiler_c_pass ++ ) {
		nm_compiler_c_init ( );
		nm_compiler_c_block ( 0 , externs );
		if ( ! compiler_c_pass ) {
			nm_compiler_c_free_ident ( compiler_c_funcs , ( ( void *) 0 ) );
			nm_compiler_c_free_fixup ( compiler_c_break_fixups , ( ( void *) 0 ) );
		}

		if ( c_errno || compiler_c_pass ) break;
		compiler_c_code_start = mem_alloc ( ( size_t ) compiler_c_code_ptr );
		compiler_c_data_start = mem_alloc ( ( size_t ) compiler_c_data_ptr );
	}

	return c_errno;
}

void *c_lookup ( char *name ) {
	struct c_ident *f = nm_compiler_c_find_ident ( compiler_c_funcs , ( ( void *) 0 ) , name );
	if ( f ) return f -> addr;
	return ( ( void *) 0 );
}

void c_execute_fast ( void *addr ) {
	union c_insn *pc = addr;
	union c_insn *sp = compiler_c_stack;
	c_int imm = 0;
	static void *ops [ ] = {
		&& op_index , && op_assign , && op_add_a , && op_sub_a , && op_mul_a , && op_div_a , && op_mod_a , && op_or_a , && op_xor_a , && op_and_a , && op_shl_a , && op_shr_a , && op_or_i , && op_and_b , && op_not_b , && op_eq , && op_sub , && op_gt , && op_lt , && op_ge , && op_le , && op_or_i , && op_xor_i , && op_and_i , && op_shl , && op_shr , && op_add , && op_sub , && op_mul , && op_div , && op_mod , && op_not_i , && op_neg , && op_inc_l , && op_dec_l , && op_inc_r , && op_dec_r 	}

	;
	if ( __builtin_expect ( addr == ( ( void *) 0 ) , 0 ) ) {
		int op = 0;
		( ( compiler_c_op_return != && op_return ) ? ( void ) ( 0 ) : __assert_fail ( "c_op_return != &&op_return" , "src/compiler.c" , 942 , __PRETTY_FUNCTION__ ) );
		compiler_c_op_return = && op_return;
		compiler_c_op_bz = && op_bz;
		compiler_c_op_ba = && op_ba;
		compiler_c_op_push_imm = && op_push_imm;
		compiler_c_op_push_mem = && op_push_mem;
		compiler_c_op_pop = && op_pop;
		compiler_c_op_push_imm_imm = && op_push_imm_imm;
		compiler_c_op_push_imm_mem = && op_push_imm_mem;
		compiler_c_op_push_mem_imm = && op_push_mem_imm;
		compiler_c_op_push_mem_mem = && op_push_mem_mem;
		compiler_c_op_push_mem_mem_mem = && op_push_mem_mem_mem;
		compiler_c_op_push_mem_mem_mem_imm = && op_push_mem_mem_mem_imm;
		compiler_c_op_push_mem_mem_mem_mem = && op_push_mem_mem_mem_mem;
		compiler_c_op_assign = && op_assign;
		compiler_c_op_assign_pop = && op_assign_pop;
		do {
			compiler_c_ops [ op ].op = ops [ op ];
		}

		while ( compiler_c_ops [ ++ op ].prec );
		return;
	}

	goto *( pc ++ ) -> op;
	op_return : return;
	op_bz : sp -= 2;
	if ( __builtin_expect ( imm != 0 , 1 ) ) {
		pc += 2;
		goto *( pc - 1 ) -> op;
	}

	op_ba : pc = pc -> pc;
	goto *( pc ++ ) -> op;
	op_push_imm : ( sp - 2 ) -> imm = imm;
	imm = pc -> imm;
	pc += 2;
	sp += 2;
	goto *( pc - 1 ) -> op;
	op_push_mem : ( sp - 2 ) -> imm = imm;
	imm = *( ( sp + 1 ) -> mem = pc -> mem );
	pc += 2;
	sp += 2;
	goto *( pc - 1 ) -> op;
	op_pop : sp -= 2;
	goto *( pc ++ ) -> op;
	op_push_imm_imm : ( sp - 2 ) -> imm = imm;
	sp -> imm = pc -> imm;
	imm = ( pc + 1 ) -> imm;
	pc += 3;
	sp += 4;
	goto *( pc - 1 ) -> op;
	op_push_imm_mem : ( sp - 2 ) -> imm = imm;
	sp -> imm = pc -> imm;
	imm = *( ( sp + 3 ) -> mem = ( pc + 1 ) -> mem );
	pc += 3;
	sp += 4;
	goto *( pc - 1 ) -> op;
	op_push_mem_imm : ( sp - 2 ) -> imm = imm;
	sp -> imm = *( ( sp + 1 ) -> mem = pc -> mem );
	imm = ( pc + 1 ) -> imm;
	pc += 3;
	sp += 4;
	goto *( pc - 1 ) -> op;
	op_push_mem_mem : ( sp - 2 ) -> imm = imm;
	sp -> imm = *( ( sp + 1 ) -> mem = pc -> mem );
	imm = *( ( sp + 3 ) -> mem = ( pc + 1 ) -> mem );
	pc += 3;
	sp += 4;
	goto *( pc - 1 ) -> op;
	op_push_mem_mem_mem : ( sp - 2 ) -> imm = imm;
	sp -> imm = *( ( sp + 1 ) -> mem = pc -> mem );
	( sp + 2 ) -> imm = *( ( sp + 3 ) -> mem = ( pc + 1 ) -> mem );
	imm = *( ( sp + 5 ) -> mem = ( pc + 2 ) -> mem );
	pc += 4;
	sp += 6;
	goto *( pc - 1 ) -> op;
	op_push_mem_mem_mem_imm : ( sp - 2 ) -> imm = imm;
	sp -> imm = *( ( sp + 1 ) -> mem = pc -> mem );
	( sp + 2 ) -> imm = *( ( sp + 3 ) -> mem = ( pc + 1 ) -> mem );
	( sp + 4 ) -> imm = *( ( sp + 5 ) -> mem = ( pc + 2 ) -> mem );
	imm = ( pc + 3 ) -> imm;
	pc += 5;
	sp += 8;
	goto *( pc - 1 ) -> op;
	op_push_mem_mem_mem_mem : ( sp - 2 ) -> imm = imm;
	sp -> imm = *( ( sp + 1 ) -> mem = pc -> mem );
	( sp + 2 ) -> imm = *( ( sp + 3 ) -> mem = ( pc + 1 ) -> mem );
	( sp + 4 ) -> imm = *( ( sp + 5 ) -> mem = ( pc + 2 ) -> mem );
	imm = *( ( sp + 7 ) -> mem = ( pc + 3 ) -> mem );
	pc += 5;
	sp += 8;
	goto *( pc - 1 ) -> op;
	op_index : imm = *( ( sp - 3 ) -> mem += imm );
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_assign : *( sp - 3 ) -> mem = imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_assign_pop : *( sp - 3 ) -> mem = imm;
	sp -= 4;
	goto *( pc ++ ) -> op;
	op_add_a : imm = *( sp - 3 ) -> mem += imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_sub_a : imm = *( sp - 3 ) -> mem -= imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_mul_a : imm = *( sp - 3 ) -> mem *= imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_div_a : imm = *( sp - 3 ) -> mem /= imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_mod_a : imm = *( sp - 3 ) -> mem %= imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_or_a : imm = *( sp - 3 ) -> mem |= imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_xor_a : imm = *( sp - 3 ) -> mem ^= imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_and_a : imm = *( sp - 3 ) -> mem &= imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_shl_a : imm = *( sp - 3 ) -> mem <<= imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_shr_a : imm = *( sp - 3 ) -> mem >>= imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_or_i : imm |= ( sp - 4 ) -> imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_and_b : imm = ( sp - 4 ) -> imm && imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_not_b : imm = ! imm;
	goto *( pc ++ ) -> op;
	op_eq : imm = ( sp - 4 ) -> imm == imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_gt : imm = ( sp - 4 ) -> imm > imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_lt : imm = ( sp - 4 ) -> imm < imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_ge : imm = ( sp - 4 ) -> imm >= imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_le : imm = ( sp - 4 ) -> imm <= imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_xor_i : imm ^= ( sp - 4 ) -> imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_and_i : imm &= ( sp - 4 ) -> imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_shl : imm = ( sp - 4 ) -> imm << imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_shr : imm = ( sp - 4 ) -> imm >> imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_add : imm += ( sp - 4 ) -> imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_sub : imm = ( sp - 4 ) -> imm - imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_mul : imm *= ( sp - 4 ) -> imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_div : imm = ( sp - 4 ) -> imm / imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_mod : imm = ( sp - 4 ) -> imm % imm;
	sp -= 2;
	goto *( pc ++ ) -> op;
	op_not_i : imm = ~ imm;
	goto *( pc ++ ) -> op;
	op_neg : imm = - imm;
	goto *( pc ++ ) -> op;
	op_inc_l : *( sp - 1 ) -> mem = ++ imm;
	goto *( pc ++ ) -> op;
	op_dec_l : *( sp - 1 ) -> mem = -- imm;
	goto *( pc ++ ) -> op;
	op_inc_r : *( sp - 1 ) -> mem = imm + 1;
	goto *( pc ++ ) -> op;
	op_dec_r : *( sp - 1 ) -> mem = imm - 1;
	goto *( pc ++ ) -> op;
}

static void nm_compiler_c_f_op_return ( void ) {
	compiler_c_pc = ( compiler_c_sp -= 2 ) -> pc;
}

static void nm_compiler_c_f_op_bz ( void ) {
	if ( ( compiler_c_sp -= 2 ) -> imm ) compiler_c_pc ++;
	else compiler_c_pc = compiler_c_pc -> pc;
}

static void nm_compiler_c_f_op_ba ( void ) {
	compiler_c_pc = compiler_c_pc -> pc;
}

static void nm_compiler_c_f_op_push_imm ( void ) {
	compiler_c_sp -> imm = ( compiler_c_pc ++ ) -> imm;
	compiler_c_sp += 2;
}

static void nm_compiler_c_f_op_push_mem ( void ) {
	( compiler_c_sp ++ ) -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp ++ ) -> mem = ( compiler_c_pc ++ ) -> mem;
}

static void nm_compiler_c_f_op_pop ( void ) {
	compiler_c_sp -= 2;
}

static void nm_compiler_c_f_op_push_imm_imm ( void ) {
	compiler_c_sp -> imm = ( compiler_c_pc ++ ) -> imm;
	( compiler_c_sp + 2 ) -> imm = ( compiler_c_pc ++ ) -> imm;
	compiler_c_sp += 4;
}

static void nm_compiler_c_f_op_push_imm_mem ( void ) {
	compiler_c_sp -> imm = ( compiler_c_pc ++ ) -> imm;
	( compiler_c_sp + 2 ) -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 3 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	compiler_c_sp += 4;
}

static void nm_compiler_c_f_op_push_mem_imm ( void ) {
	compiler_c_sp -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 1 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	( compiler_c_sp + 2 ) -> imm = ( compiler_c_pc ++ ) -> imm;
	compiler_c_sp += 4;
}

static void nm_compiler_c_f_op_push_mem_mem ( void ) {
	compiler_c_sp -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 1 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	( compiler_c_sp + 2 ) -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 3 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	compiler_c_sp += 4;
}

static void nm_compiler_c_f_op_push_mem_mem_mem ( void ) {
	compiler_c_sp -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 1 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	( compiler_c_sp + 2 ) -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 3 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	( compiler_c_sp + 4 ) -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 5 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	compiler_c_sp += 6;
}

static void nm_compiler_c_f_op_push_mem_mem_mem_imm ( void ) {
	compiler_c_sp -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 1 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	( compiler_c_sp + 2 ) -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 3 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	( compiler_c_sp + 4 ) -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 5 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	( compiler_c_sp + 6 ) -> imm = ( compiler_c_pc ++ ) -> imm;
	compiler_c_sp += 8;
}

static void nm_compiler_c_f_op_push_mem_mem_mem_mem ( void ) {
	compiler_c_sp -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 1 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	( compiler_c_sp + 2 ) -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 3 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	( compiler_c_sp + 4 ) -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 5 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	( compiler_c_sp + 6 ) -> imm = *compiler_c_pc -> mem;
	( compiler_c_sp + 7 ) -> mem = ( compiler_c_pc ++ ) -> mem;
	compiler_c_sp += 8;
}

static void nm_compiler_c_op_index ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( ( compiler_c_sp - 1 ) -> mem += compiler_c_sp -> imm );
}

static void nm_compiler_c_f_op_assign ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( compiler_c_sp - 1 ) -> mem = compiler_c_sp -> imm;
}

static void nm_compiler_c_f_op_assign_pop ( void ) {
	compiler_c_sp -= 4;
	*( compiler_c_sp + 1 ) -> mem = ( compiler_c_sp + 2 ) -> imm;
}

static void nm_compiler_c_op_add_a ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( compiler_c_sp - 1 ) -> mem += compiler_c_sp -> imm;
}

static void nm_compiler_c_op_sub_a ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( compiler_c_sp - 1 ) -> mem -= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_mul_a ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( compiler_c_sp - 1 ) -> mem *= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_div_a ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( compiler_c_sp - 1 ) -> mem /= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_mod_a ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( compiler_c_sp - 1 ) -> mem %= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_or_a ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( compiler_c_sp - 1 ) -> mem |= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_xor_a ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( compiler_c_sp - 1 ) -> mem ^= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_and_a ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( compiler_c_sp - 1 ) -> mem &= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_shl_a ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( compiler_c_sp - 1 ) -> mem <<= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_shr_a ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = *( compiler_c_sp - 1 ) -> mem >>= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_or_i ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm |= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_and_b ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = ( compiler_c_sp - 2 ) -> imm && compiler_c_sp -> imm;
}

static void nm_compiler_c_op_not_b ( void ) {
	( compiler_c_sp - 2 ) -> imm = ! ( compiler_c_sp - 2 ) -> imm;
}

static void nm_compiler_c_op_eq ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = ( compiler_c_sp - 2 ) -> imm == compiler_c_sp -> imm;
}

static void nm_compiler_c_op_gt ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = ( compiler_c_sp - 2 ) -> imm > compiler_c_sp -> imm;
}

static void nm_compiler_c_op_lt ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = ( compiler_c_sp - 2 ) -> imm < compiler_c_sp -> imm;
}

static void nm_compiler_c_op_ge ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = ( compiler_c_sp - 2 ) -> imm >= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_le ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm = ( compiler_c_sp - 2 ) -> imm <= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_xor_i ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm ^= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_and_i ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm &= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_shl ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm <<= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_shr ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm >>= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_add ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm += compiler_c_sp -> imm;
}

static void nm_compiler_c_op_sub ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm -= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_mul ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm *= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_div ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm /= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_mod ( void ) {
	compiler_c_sp -= 2;
	( compiler_c_sp - 2 ) -> imm %= compiler_c_sp -> imm;
}

static void nm_compiler_c_op_not_i ( void ) {
	( compiler_c_sp - 2 ) -> imm = ~ ( compiler_c_sp - 2 ) -> imm;
}

static void nm_compiler_c_op_neg ( void ) {
	( compiler_c_sp - 2 ) -> imm = - ( compiler_c_sp - 2 ) -> imm;
}

static void nm_compiler_c_op_inc_l ( void ) {
	*( compiler_c_sp - 1 ) -> mem = ++ ( compiler_c_sp - 2 ) -> imm;
}

static void nm_compiler_c_op_dec_l ( void ) {
	*( compiler_c_sp - 1 ) -> mem = -- ( compiler_c_sp - 2 ) -> imm;
}

static void nm_compiler_c_op_inc_r ( void ) {
	*( compiler_c_sp - 1 ) -> mem = ( compiler_c_sp - 2 ) -> imm + 1;
}

static void nm_compiler_c_op_dec_r ( void ) {
	*( compiler_c_sp - 1 ) -> mem = ( compiler_c_sp - 2 ) -> imm - 1;
}

static void ( *compiler_c_op_return ) ( void ) = nm_compiler_c_f_op_return;
static void ( *compiler_c_op_bz ) ( void ) = nm_compiler_c_f_op_bz;
static void ( *compiler_c_op_ba ) ( void ) = nm_compiler_c_f_op_ba;
static void ( *compiler_c_op_push_imm ) ( void ) = nm_compiler_c_f_op_push_imm;
static void ( *compiler_c_op_push_mem ) ( void ) = nm_compiler_c_f_op_push_mem;
static void ( *compiler_c_op_pop ) ( void ) = nm_compiler_c_f_op_pop;
static void ( *compiler_c_op_push_imm_imm ) ( void ) = nm_compiler_c_f_op_push_imm_imm;
static void ( *compiler_c_op_push_imm_mem ) ( void ) = nm_compiler_c_f_op_push_imm_mem;
static void ( *compiler_c_op_push_mem_imm ) ( void ) = nm_compiler_c_f_op_push_mem_imm;
static void ( *compiler_c_op_push_mem_mem ) ( void ) = nm_compiler_c_f_op_push_mem_mem;
static void ( *compiler_c_op_push_mem_mem_mem ) ( void ) = nm_compiler_c_f_op_push_mem_mem_mem;
static void ( *compiler_c_op_push_mem_mem_mem_imm ) ( void ) = nm_compiler_c_f_op_push_mem_mem_mem_imm;
static void ( *compiler_c_op_push_mem_mem_mem_mem ) ( void ) = nm_compiler_c_f_op_push_mem_mem_mem_mem;
static void ( *compiler_c_op_assign ) ( void ) = nm_compiler_c_f_op_assign;
static void ( *compiler_c_op_assign_pop ) ( void ) = nm_compiler_c_f_op_assign_pop;
static struct c_op compiler_c_ops [ ] = {
	{
		1 , 0 , 0 , "[" , nm_compiler_c_op_index 	}

	, {
		2 , 1 , 0 , "=" , nm_compiler_c_f_op_assign 	}

	, {
		2 , 1 , 0 , "+=" , nm_compiler_c_op_add_a 	}

	, {
		2 , 1 , 0 , "-=" , nm_compiler_c_op_sub_a 	}

	, {
		2 , 1 , 0 , "*=" , nm_compiler_c_op_mul_a 	}

	, {
		2 , 1 , 0 , "/=" , nm_compiler_c_op_div_a 	}

	, {
		2 , 1 , 0 , "%=" , nm_compiler_c_op_mod_a 	}

	, {
		2 , 1 , 0 , "|=" , nm_compiler_c_op_or_a 	}

	, {
		2 , 1 , 0 , "^=" , nm_compiler_c_op_xor_a 	}

	, {
		2 , 1 , 0 , "&=" , nm_compiler_c_op_and_a 	}

	, {
		2 , 1 , 0 , "<<=" , nm_compiler_c_op_shl_a 	}

	, {
		2 , 1 , 0 , ">>=" , nm_compiler_c_op_shr_a 	}

	, {
		3 , 0 , 0 , "||" , nm_compiler_c_op_or_i 	}

	, {
		4 , 0 , 0 , "&&" , nm_compiler_c_op_and_b 	}

	, {
		5 , 1 , 1 , "!" , nm_compiler_c_op_not_b 	}

	, {
		6 , 0 , 0 , "==" , nm_compiler_c_op_eq 	}

	, {
		6 , 0 , 0 , "!=" , nm_compiler_c_op_sub 	}

	, {
		6 , 0 , 0 , ">" , nm_compiler_c_op_gt 	}

	, {
		6 , 0 , 0 , "<" , nm_compiler_c_op_lt 	}

	, {
		6 , 0 , 0 , ">=" , nm_compiler_c_op_ge 	}

	, {
		6 , 0 , 0 , "<=" , nm_compiler_c_op_le 	}

	, {
		7 , 0 , 0 , "|" , nm_compiler_c_op_or_i 	}

	, {
		7 , 0 , 0 , "^" , nm_compiler_c_op_xor_i 	}

	, {
		8 , 0 , 0 , "&" , nm_compiler_c_op_and_i 	}

	, {
		9 , 0 , 0 , "<<" , nm_compiler_c_op_shl 	}

	, {
		9 , 0 , 0 , ">>" , nm_compiler_c_op_shr 	}

	, {
		10 , 0 , 0 , "+" , nm_compiler_c_op_add 	}

	, {
		10 , 0 , 0 , "-" , nm_compiler_c_op_sub 	}

	, {
		11 , 0 , 0 , "*" , nm_compiler_c_op_mul 	}

	, {
		11 , 0 , 0 , "/" , nm_compiler_c_op_div 	}

	, {
		11 , 0 , 0 , "%" , nm_compiler_c_op_mod 	}

	, {
		12 , 1 , 1 , "~" , nm_compiler_c_op_not_i 	}

	, {
		12 , 1 , 1 , "-" , nm_compiler_c_op_neg 	}

	, {
		12 , 0 , 1 , "++" , nm_compiler_c_op_inc_l 	}

	, {
		12 , 0 , 1 , "--" , nm_compiler_c_op_dec_l 	}

	, {
		12 , 0 , 2 , "++" , nm_compiler_c_op_inc_r 	}

	, {
		12 , 0 , 2 , "--" , nm_compiler_c_op_dec_r 	}

	, {
		0 , 0 , 0 , ( ( void *) 0 ) , 0 	}

}

;
char *cfg_name = ( ( void *) 0 );
static struct cfg_section *config_cfg_database = ( ( void *) 0 );
static char *nm_config_trim ( char *s ) {
	char *e;
	while ( *s && ( *s == ' ' || *s == '\t' ) ) s ++;
	if ( ! *s ) return s;
	e = s + strlen ( s ) - 1;
	while ( e >= s && ( *e == ' ' || *e == '\t' ) ) e --;
	*++ e = 0;
	return s;
}

static void nm_config_cfg_add_section ( char *name ) {
	struct cfg_section *last;
	last = config_cfg_database;
	config_cfg_database = mem_alloc_tiny ( sizeof ( struct cfg_section ) , 4 );
	config_cfg_database -> next = last;
	config_cfg_database -> name = str_alloc_copy ( name );
	config_cfg_database -> params = ( ( void *) 0 );
	if ( ! strncmp ( name , "list." , 5 ) ) {
		config_cfg_database -> list = mem_alloc_tiny ( sizeof ( struct cfg_list ) , 4 );
		config_cfg_database -> list -> head = config_cfg_database -> list -> tail = ( ( void *) 0 );
	}

	else {
		config_cfg_database -> list = ( ( void *) 0 );
	}

}

static void nm_config_cfg_add_line ( char *line , int number ) {
	struct cfg_list *list;
	struct cfg_line *entry;
	entry = mem_alloc_tiny ( sizeof ( struct cfg_line ) , 4 );
	entry -> next = ( ( void *) 0 );
	entry -> data = str_alloc_copy ( line );
	entry -> number = number;
	list = config_cfg_database -> list;
	if ( list -> tail ) list -> tail = list -> tail -> next = entry;
	else list -> tail = list -> head = entry;
}

static void nm_config_cfg_add_param ( char *name , char *value ) {
	struct cfg_param *current , *last;
	last = config_cfg_database -> params;
	current = config_cfg_database -> params = mem_alloc_tiny ( sizeof ( struct cfg_param ) , 4 );
	current -> next = last;
	current -> name = str_alloc_copy ( name );
	current -> value = str_alloc_copy ( value );
}

static int nm_config_cfg_process_line ( char *line , int number ) {
	char *p;
	line = nm_config_trim ( line );
	if ( ! *line || *line == '#' || *line == ';' ) return 0;
	if ( *line == '[' ) {
		if ( ( p = strchr ( line , ']' ) ) ) *p = 0;
		else return 1;
		nm_config_cfg_add_section ( strlwr ( nm_config_trim ( line + 1 ) ) );
	}

	else if ( config_cfg_database && config_cfg_database -> list ) {
		nm_config_cfg_add_line ( line , number );
	}

	else if ( config_cfg_database && ( p = strchr ( line , '=' ) ) ) {
		*p ++ = 0;
		nm_config_cfg_add_param ( strlwr ( nm_config_trim ( line ) ) , nm_config_trim ( p ) );
	}

	else {
		return 1;
	}

	return 0;
}

static void nm_config_cfg_error ( char *name , int number ) {
	fprintf ( stderr , "Error in %s at line %d\n" , path_expand ( name ) , number );
	error ( );
}

void cfg_init ( char *name , int allow_missing ) {
	FILE *file;
	char line [ 0x400 ];
	int number;
	if ( config_cfg_database ) return;
	if ( ! ( file = fopen ( path_expand ( name ) , "r" ) ) ) {
		if ( allow_missing && ( *__errno_location ( ) ) == 2 ) return;
		pexit ( "fopen: %s" , path_expand ( name ) );
	}

	number = 0;
	while ( fgetl ( line , sizeof ( line ) , file ) ) if ( nm_config_cfg_process_line ( line , ++ number ) ) nm_config_cfg_error ( name , number );
	if ( ferror ( file ) ) pexit ( "fgets" );
	if ( fclose ( file ) ) pexit ( "fclose" );
	cfg_name = str_alloc_copy ( path_expand ( name ) );
}

static struct cfg_section *nm_config_cfg_get_section ( char *section , char *subsection ) {
	struct cfg_section *current;
	char *p1 , *p2;
	if ( ( current = config_cfg_database ) ) do {
		p1 = current -> name;
		p2 = section;
		while ( *p1 && *p1 == tolower ( ( int ) ( unsigned char ) *p2 ) ) {
			p1 ++;
			p2 ++;
		}

		if ( *p2 ) continue;
		if ( ( p2 = subsection ) ) while ( *p1 && *p1 == tolower ( ( int ) ( unsigned char ) *p2 ) ) {
			p1 ++;
			p2 ++;
		}

		if ( *p1 ) continue;
		if ( p2 ) if ( *p2 ) continue;
		return current;
	}

	while ( ( current = current -> next ) );
	return ( ( void *) 0 );
}

struct cfg_list *cfg_get_list ( char *section , char *subsection ) {
	struct cfg_section *current;
	if ( ( current = nm_config_cfg_get_section ( section , subsection ) ) ) return current -> list;
	return ( ( void *) 0 );
}

char *cfg_get_param ( char *section , char *subsection , char *param ) {
	struct cfg_section *current_section;
	struct cfg_param *current_param;
	char *p1 , *p2;
	if ( ( current_section = nm_config_cfg_get_section ( section , subsection ) ) ) if ( ( current_param = current_section -> params ) ) do {
		p1 = current_param -> name;
		p2 = param;
		while ( *p1 && *p1 == tolower ( ( int ) ( unsigned char ) *p2 ) ) {
			p1 ++;
			p2 ++;
		}

		if ( *p1 || *p2 ) continue;
		return current_param -> value;
	}

	while ( ( current_param = current_param -> next ) );
	return ( ( void *) 0 );
}

int cfg_get_int ( char *section , char *subsection , char *param ) {
	char *s_value , *error;
	long l_value;
	if ( ( s_value = cfg_get_param ( section , subsection , param ) ) ) {
		l_value = strtol ( s_value , &error , 10 );
		if ( ! *s_value || *error || ( l_value & ~ 0x3FFFFFFFL ) ) return - 1;
		return ( int ) l_value;
	}

	return - 1;
}

int cfg_get_bool ( char *section , char *subsection , char *param , int def ) {
	char *value;
	if ( ! ( value = cfg_get_param ( section , subsection , param ) ) ) return def;
	switch ( *value ) {
		case 'y' : case 'Y' : case 't' : case 'T' : case '1' : return 1;
	}

	return 0;
}

static struct db_main *cracker_crk_db;
static struct fmt_params cracker_crk_params;
static struct fmt_methods cracker_crk_methods;
static int cracker_crk_key_index , cracker_crk_last_key;
static void *cracker_crk_last_salt;
static void ( *nm_cracker_crk_fix_state ) ( void );
static struct db_keys *cracker_crk_guesses;
static _john_int64_t *cracker_crk_timestamps;
static char cracker_crk_stdout_key [ 0x80 ];
static void nm_cracker_crk_dummy_set_salt ( void *salt ) {
	}

static void nm_cracker_crk_dummy_fix_state ( void ) {
	}

static void nm_cracker_crk_init_salt ( void ) {
	if ( ! cracker_crk_db -> salts -> next ) {
		cracker_crk_methods.set_salt ( cracker_crk_db -> salts -> salt );
		cracker_crk_methods.set_salt = nm_cracker_crk_dummy_set_salt;
	}

}

void crk_init ( struct db_main *db , void ( *fix_state ) ( void ) , struct db_keys *guesses ) {
	char *where;
	size_t size;
	if ( db -> loaded ) if ( ( where = fmt_self_test ( db -> format ) ) ) {
		log_event ( "! Self test failed (%s)" , where );
		fprintf ( stderr , "Self test failed (%s)\n" , where );
		error ( );
	}

	cracker_crk_db = db;
	memcpy ( &cracker_crk_params , &db -> format -> params , sizeof ( struct fmt_params ) );
	memcpy ( &cracker_crk_methods , &db -> format -> methods , sizeof ( struct fmt_methods ) );
	if ( db -> loaded ) nm_cracker_crk_init_salt ( );
	cracker_crk_last_key = cracker_crk_key_index = 0;
	cracker_crk_last_salt = ( ( void *) 0 );
	if ( fix_state ) ( nm_cracker_crk_fix_state = fix_state ) ( );
	else nm_cracker_crk_fix_state = nm_cracker_crk_dummy_fix_state;
	cracker_crk_guesses = guesses;
	if ( db -> loaded ) {
		size = cracker_crk_params.max_keys_per_crypt *sizeof ( _john_int64_t );
		memset ( cracker_crk_timestamps = mem_alloc ( size ) , - 1 , size );
	}

	else cracker_crk_stdout_key [ 0 ] = 0;
	rec_save ( );
}

static void nm_cracker_crk_remove_salt ( struct db_salt *salt ) {
	struct db_salt **current;
	cracker_crk_db -> salt_count --;
	current = & cracker_crk_db -> salts;
	while ( *current != salt ) current = & ( *current ) -> next;
	*current = salt -> next;
}

void crk_remove_hash ( struct db_salt *salt , struct db_password *pw ) {
	struct db_password **current;
	int hash;
	cracker_crk_db -> password_count --;
	if ( ! -- salt -> count ) {
		salt -> list = ( ( void *) 0 );
		nm_cracker_crk_remove_salt ( salt );
		return;
	}

	if ( salt -> hash_size < 0 ) {
		current = & salt -> list;
		while ( *current != pw ) current = & ( *current ) -> next;
		*current = pw -> next;
		pw -> binary = ( ( void *) 0 );
		return;
	}

	hash = cracker_crk_db -> format -> methods.binary_hash [ salt -> hash_size ] ( pw -> binary );
	current = & salt -> hash [ hash ];
	while ( *current != pw ) current = & ( *current ) -> next_hash;
	*current = pw -> next_hash;
	pw -> binary = ( ( void *) 0 );
}

static int nm_cracker_crk_process_guess ( struct db_salt *salt , struct db_password *pw , int index ) {
	int dupe;
	char *key;
	dupe = ! memcmp ( &cracker_crk_timestamps [ index ] , &status.crypts , sizeof ( _john_int64_t ) );
	cracker_crk_timestamps [ index ] = status.crypts;
	key = cracker_crk_methods.get_key ( index );
	log_guess ( cracker_crk_db -> options -> flags & 0x00000001 ? pw -> login : "?" , dupe ? ( ( void *) 0 ) : pw -> source , key );
	cracker_crk_db -> guess_count ++;
	status.guess_count ++;
	if ( cracker_crk_guesses && ! dupe ) {
		strnfcpy ( cracker_crk_guesses -> ptr , key , cracker_crk_params.plaintext_length );
		cracker_crk_guesses -> ptr += cracker_crk_params.plaintext_length;
		cracker_crk_guesses -> count ++;
	}

	crk_remove_hash ( salt , pw );
	if ( ! cracker_crk_db -> salts ) return 1;
	nm_cracker_crk_init_salt ( );
	return 0;
}

static int nm_cracker_crk_process_event ( void ) {
	event_pending = 0;
	if ( event_save ) {
		event_save = 0;
		rec_save ( );
	}

	if ( event_status ) {
		event_status = 0;
		status_print ( );
	}

	if ( event_ticksafety ) {
		event_ticksafety = 0;
		status_ticks_overflow_safety ( );
	}

	return event_abort;
}

static int nm_cracker_crk_password_loop ( struct db_salt *salt ) {
	struct db_password *pw;
	int index;
	sig_timer_emu_tick ( );
	if ( event_pending ) if ( nm_cracker_crk_process_event ( ) ) return 1;
	cracker_crk_methods.crypt_all ( cracker_crk_key_index );
	status_update_crypts ( salt -> count *cracker_crk_key_index );
	if ( salt -> hash_size < 0 ) {
		pw = salt -> list;
		do {
			if ( cracker_crk_methods.cmp_all ( pw -> binary , cracker_crk_key_index ) ) for ( index = 0;
			index < cracker_crk_key_index;
			index ++ ) if ( cracker_crk_methods.cmp_one ( pw -> binary , index ) ) if ( cracker_crk_methods.cmp_exact ( pw -> source , index ) ) {
				if ( nm_cracker_crk_process_guess ( salt , pw , index ) ) return 1;
				else break;
			}

		}

		while ( ( pw = pw -> next ) );
	}

	else for ( index = 0;
	index < cracker_crk_key_index;
	index ++ ) {
		if ( ( pw = salt -> hash [ salt -> index ( index ) ] ) ) do {
			if ( cracker_crk_methods.cmp_one ( pw -> binary , index ) ) if ( cracker_crk_methods.cmp_exact ( pw -> source , index ) ) if ( nm_cracker_crk_process_guess ( salt , pw , index ) ) return 1;
		}

		while ( ( pw = pw -> next_hash ) );
	}

	return 0;
}

static int nm_cracker_crk_salt_loop ( void ) {
	struct db_salt *salt;
	salt = cracker_crk_db -> salts;
	do {
		cracker_crk_methods.set_salt ( salt -> salt );
		if ( nm_cracker_crk_password_loop ( salt ) ) return 1;
	}

	while ( ( salt = salt -> next ) );
	cracker_crk_last_key = cracker_crk_key_index;
	cracker_crk_key_index = 0;
	cracker_crk_last_salt = ( ( void *) 0 );
	nm_cracker_crk_fix_state ( );
	cracker_crk_methods.clear_keys ( );
	if ( ext_abort ) event_abort = 1;
	if ( ext_status && ! event_abort ) {
		ext_status = 0;
		event_status = 0;
		status_print ( );
	}

	return ext_abort;
}

int crk_process_key ( char *key ) {
	if ( cracker_crk_db -> loaded ) {
		cracker_crk_methods.set_key ( key , cracker_crk_key_index ++ );
		if ( cracker_crk_key_index >= cracker_crk_params.max_keys_per_crypt ) return nm_cracker_crk_salt_loop ( );
		return 0;
	}

	sig_timer_emu_tick ( );
	if ( event_pending ) if ( nm_cracker_crk_process_event ( ) ) return 1;
	puts ( strnzcpy ( cracker_crk_stdout_key , key , cracker_crk_params.plaintext_length + 1 ) );
	status_update_crypts ( 1 );
	nm_cracker_crk_fix_state ( );
	if ( ext_abort ) event_abort = 1;
	if ( ext_status && ! event_abort ) {
		ext_status = 0;
		event_status = 0;
		status_print ( );
	}

	return ext_abort;
}

int crk_process_salt ( struct db_salt *salt ) {
	char *ptr;
	char key [ 0x80 ];
	int count , index;
	if ( cracker_crk_guesses ) {
		cracker_crk_guesses -> count = 0;
		cracker_crk_guesses -> ptr = cracker_crk_guesses -> buffer;
	}

	if ( cracker_crk_last_salt != salt -> salt ) cracker_crk_methods.set_salt ( cracker_crk_last_salt = salt -> salt );
	ptr = salt -> keys -> buffer;
	count = salt -> keys -> count;
	index = 0;
	cracker_crk_methods.clear_keys ( );
	while ( count -- ) {
		strnzcpy ( key , ptr , cracker_crk_params.plaintext_length + 1 );
		ptr += cracker_crk_params.plaintext_length;
		cracker_crk_methods.set_key ( key , index ++ );
		if ( index >= cracker_crk_params.max_keys_per_crypt || ! count ) {
			cracker_crk_key_index = index;
			if ( nm_cracker_crk_password_loop ( salt ) ) return 1;
			if ( ! salt -> list ) return 0;
			index = 0;
		}

	}

	return 0;
}

char *crk_get_key1 ( void ) {
	if ( cracker_crk_db -> loaded ) return cracker_crk_methods.get_key ( 0 );
	else return cracker_crk_stdout_key;
}

char *crk_get_key2 ( void ) {
	if ( cracker_crk_key_index > 1 ) return cracker_crk_methods.get_key ( cracker_crk_key_index - 1 );
	else if ( cracker_crk_last_key > 1 ) return cracker_crk_methods.get_key ( cracker_crk_last_key - 1 );
	else return ( ( void *) 0 );
}

void crk_done ( void ) {
	if ( cracker_crk_db -> loaded ) {
		if ( cracker_crk_key_index && cracker_crk_db -> salts && ! event_abort ) nm_cracker_crk_salt_loop ( );
		{
			if ( ( cracker_crk_timestamps ) ) {
				free ( ( cracker_crk_timestamps ) );
				( cracker_crk_timestamps ) = ( ( void *) 0 );
			}

		}

		;
	}

}

static CRC32_t *crc32_table = ( ( void *) 0 );
void CRC32_Init ( CRC32_t *value ) {
	unsigned int index , bit;
	CRC32_t entry;
	*value = 0xFFFFFFFF;
	if ( crc32_table ) return;
	crc32_table = mem_alloc ( sizeof ( *crc32_table ) *0x100 );
	for ( index = 0;
	index < 0x100;
	index ++ ) {
		entry = index;
		for ( bit = 0;
		bit < 8;
		bit ++ ) if ( entry & 1 ) {
			entry >>= 1;
			entry ^= 0xEDB88320;
		}

		else entry >>= 1;
		crc32_table [ index ] = entry;
	}

}

void CRC32_Update ( CRC32_t *value , void *data , unsigned int size ) {
	unsigned char *ptr;
	unsigned int count;
	CRC32_t result;
	result = *value;
	ptr = data;
	count = size;
	if ( count ) do {
		result = ( result >> 8 ) ^ crc32_table [ ( result ^ *ptr ++ ) & 0xFF ];
	}

	while ( -- count );
	*value = result;
}

void CRC32_Final ( unsigned char *out , CRC32_t value ) {
	value = ~ value;
	out [ 0 ] = value;
	out [ 1 ] = value >> 8;
	out [ 2 ] = value >> 16;
	out [ 3 ] = value >> 24;
}

static __attribute__ ( ( always_inline ) ) void nm_DES_bs_b_DES_bs_finalize_keys ( void ) {
	{
		long *kp = ( long *) & DES_bs_all.K [ 0 ];
		int ic;
		for ( ic = 0;
		ic < 8;
		ic ++ ) {
			long *vp = ( long *) & DES_bs_all.xkeys.v [ ic ] [ 0 ];
			vtype v0 = *( vtype *) & vp [ 0 ];
			vtype v1 = *( vtype *) & vp [ 1 ];
			vtype v2 = *( vtype *) & vp [ 2 ];
			vtype v3 = *( vtype *) & vp [ 3 ];
			vtype v4 = *( vtype *) & vp [ 4 ];
			vtype v5 = *( vtype *) & vp [ 5 ];
			vtype v6 = *( vtype *) & vp [ 6 ];
			vtype v7 = *( vtype *) & vp [ 7 ];
			{
				vtype m = 0x0101010101010101UL , va , vb , tmp;
				( va ) = ( v0 ) & ( m );
				( tmp ) = ( v1 ) & ( m );
				( ( vb ) ) = ( ( tmp ) ) << ( 1 );
				( tmp ) = ( v2 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( tmp ) = ( tmp ) << ( 3 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( tmp ) = ( tmp ) << ( 4 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( tmp ) = ( tmp ) << ( 5 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( tmp ) = ( tmp ) << ( 6 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 7 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 1 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 1 );
				( vb ) = ( v1 ) & ( m );
				( tmp ) = ( v2 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( tmp ) = ( tmp ) << ( 3 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( tmp ) = ( tmp ) << ( 4 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( tmp ) = ( tmp ) << ( 5 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 6 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 2 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 2 );
				( tmp ) = ( v1 ) & ( m );
				( vb ) = ( tmp ) >> ( 1 );
				( tmp ) = ( v2 ) & ( m );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( tmp ) = ( tmp ) << ( 3 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( tmp ) = ( tmp ) << ( 4 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 5 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 3 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 3 );
				( tmp ) = ( v1 ) & ( m );
				( vb ) = ( tmp ) >> ( 2 );
				( tmp ) = ( v2 ) & ( m );
				( tmp ) = ( tmp ) >> ( 1 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( tmp ) = ( tmp ) << ( 3 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 4 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 4 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 4 );
				( tmp ) = ( v1 ) & ( m );
				( vb ) = ( tmp ) >> ( 3 );
				( tmp ) = ( v2 ) & ( m );
				( tmp ) = ( tmp ) >> ( 2 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( tmp ) = ( tmp ) >> ( 1 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 3 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 5 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 5 );
				( tmp ) = ( v1 ) & ( m );
				( vb ) = ( tmp ) >> ( 4 );
				( tmp ) = ( v2 ) & ( m );
				( tmp ) = ( tmp ) >> ( 3 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( tmp ) = ( tmp ) >> ( 2 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( tmp ) = ( tmp ) >> ( 1 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 6 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 6 );
				( tmp ) = ( v1 ) & ( m );
				( vb ) = ( tmp ) >> ( 5 );
				( tmp ) = ( v2 ) & ( m );
				( tmp ) = ( tmp ) >> ( 4 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( tmp ) = ( tmp ) >> ( 3 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( tmp ) = ( tmp ) >> ( 2 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( tmp ) = ( tmp ) >> ( 1 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

		}

	}

}

void DES_bs_set_salt ( long salt ) {
	unsigned int new = salt;
	unsigned int old = DES_bs_all.salt;
	int dst;
	DES_bs_all.salt = new;
	for ( dst = 0;
	dst < 24;
	dst ++ ) {
		if ( ( new ^ old ) & 1 ) {
			long *sp1 , *sp2;
			int src1 = dst;
			int src2 = dst + 24;
			if ( new & 1 ) {
				src1 = src2;
				src2 = dst;
			}

			sp1 = DES_bs_all.Ens [ src1 ];
			sp2 = DES_bs_all.Ens [ src2 ];
			DES_bs_all.E.E [ dst ] = ( long *) sp1;
			DES_bs_all.E.E [ dst + 24 ] = ( long *) sp2;
			DES_bs_all.E.E [ dst + 48 ] = ( long *) ( sp1 + 32 );
			DES_bs_all.E.E [ dst + 72 ] = ( long *) ( sp2 + 32 );
		}

		new >>= 1;
		old >>= 1;
		if ( new == old ) break;
	}

}

__attribute__ ( ( always_inline ) ) static void nm_DES_bs_b_s1 ( vtype a1 , vtype a2 , vtype a3 , vtype a4 , vtype a5 , vtype a6 , vtype *out1 , vtype *out2 , vtype *out3 , vtype *out4 ) {
	vtype x55005500 , x5A0F5A0F , x3333FFFF , x66666666 , x22226666 , x2D2D6969 , x25202160;
	vtype x00FFFF00 , x33CCCC33 , x4803120C , x2222FFFF , x6A21EDF3 , x4A01CC93;
	vtype x5555FFFF , x7F75FFFF , x00D20096 , x7FA7FF69;
	vtype x0A0A0000 , x0AD80096 , x00999900 , x0AD99996;
	vtype x22332233 , x257AA5F0 , x054885C0 , xFAB77A3F , x2221EDF3 , xD89697CC;
	vtype x05B77AC0 , x05F77AD6 , x36C48529 , x6391D07C , xBB0747B0;
	vtype x4C460000 , x4EDF9996 , x2D4E49EA , xBBFFFFB0 , x96B1B65A;
	vtype x5AFF5AFF , x52B11215 , x4201C010 , x10B0D205;
	vtype x00 , x01 , x10 , x11 , x20 , x21 , x30 , x31;
	( x55005500 ) = ( a1 ) & ~ ( a5 );
	( x5A0F5A0F ) = ( ( ( a4 ) ) ^ ( ( x55005500 ) ) );
	( x3333FFFF ) = ( a3 ) | ( a6 );
	( x66666666 ) = ( ( ( a1 ) ) ^ ( ( a3 ) ) );
	( x22226666 ) = ( x3333FFFF ) & ( x66666666 );
	( x2D2D6969 ) = ( ( ( a4 ) ) ^ ( ( x22226666 ) ) );
	( x25202160 ) = ( x2D2D6969 ) & ~ ( x5A0F5A0F );
	( x00FFFF00 ) = ( ( ( a5 ) ) ^ ( ( a6 ) ) );
	( x33CCCC33 ) = ( ( ( a3 ) ) ^ ( ( x00FFFF00 ) ) );
	( x4803120C ) = ( x5A0F5A0F ) & ~ ( x33CCCC33 );
	( x2222FFFF ) = ( a6 ) | ( x22226666 );
	( x6A21EDF3 ) = ( ( ( x4803120C ) ) ^ ( ( x2222FFFF ) ) );
	( x4A01CC93 ) = ( x6A21EDF3 ) & ~ ( x25202160 );
	( x5555FFFF ) = ( a1 ) | ( a6 );
	( x7F75FFFF ) = ( x6A21EDF3 ) | ( x5555FFFF );
	( x00D20096 ) = ( a5 ) & ~ ( x2D2D6969 );
	( x7FA7FF69 ) = ( ( ( x7F75FFFF ) ) ^ ( ( x00D20096 ) ) );
	( x0A0A0000 ) = ( a4 ) & ~ ( x5555FFFF );
	( x0AD80096 ) = ( ( ( x00D20096 ) ) ^ ( ( x0A0A0000 ) ) );
	( x00999900 ) = ( x00FFFF00 ) & ~ ( x66666666 );
	( x0AD99996 ) = ( x0AD80096 ) | ( x00999900 );
	( x22332233 ) = ( a3 ) & ~ ( x55005500 );
	( x257AA5F0 ) = ( ( ( x5A0F5A0F ) ) ^ ( ( x7F75FFFF ) ) );
	( x054885C0 ) = ( x257AA5F0 ) & ~ ( x22332233 );
	( xFAB77A3F ) = ~ ( x054885C0 );
	( x2221EDF3 ) = ( x3333FFFF ) & ( x6A21EDF3 );
	( xD89697CC ) = ( ( ( xFAB77A3F ) ) ^ ( ( x2221EDF3 ) ) );
	( x20 ) = ( x7FA7FF69 ) & ~ ( a2 );
	( x21 ) = ( ( ( x20 ) ) ^ ( ( xD89697CC ) ) );
	( *out3 ) = ( ( ( *out3 ) ) ^ ( ( x21 ) ) );
	( x05B77AC0 ) = ( ( ( x00FFFF00 ) ) ^ ( ( x054885C0 ) ) );
	( x05F77AD6 ) = ( x00D20096 ) | ( x05B77AC0 );
	( x36C48529 ) = ( ( ( x3333FFFF ) ) ^ ( ( x05F77AD6 ) ) );
	( x6391D07C ) = ( ( ( a1 ) ) ^ ( ( x36C48529 ) ) );
	( xBB0747B0 ) = ( ( ( xD89697CC ) ) ^ ( ( x6391D07C ) ) );
	( x00 ) = ( x25202160 ) | ( a2 );
	( x01 ) = ( ( ( x00 ) ) ^ ( ( xBB0747B0 ) ) );
	( *out1 ) = ( ( ( *out1 ) ) ^ ( ( x01 ) ) );
	( x4C460000 ) = ( ( ( x3333FFFF ) ) ^ ( ( x7F75FFFF ) ) );
	( x4EDF9996 ) = ( x0AD99996 ) | ( x4C460000 );
	( x2D4E49EA ) = ( ( ( x6391D07C ) ) ^ ( ( x4EDF9996 ) ) );
	( xBBFFFFB0 ) = ( x00FFFF00 ) | ( xBB0747B0 );
	( x96B1B65A ) = ( ( ( x2D4E49EA ) ) ^ ( ( xBBFFFFB0 ) ) );
	( x10 ) = ( x4A01CC93 ) | ( a2 );
	( x11 ) = ( ( ( x10 ) ) ^ ( ( x96B1B65A ) ) );
	( *out2 ) = ( ( ( *out2 ) ) ^ ( ( x11 ) ) );
	( x5AFF5AFF ) = ( a5 ) | ( x5A0F5A0F );
	( x52B11215 ) = ( x5AFF5AFF ) & ~ ( x2D4E49EA );
	( x4201C010 ) = ( x4A01CC93 ) & ( x6391D07C );
	( x10B0D205 ) = ( ( ( x52B11215 ) ) ^ ( ( x4201C010 ) ) );
	( x30 ) = ( x10B0D205 ) | ( a2 );
	( x31 ) = ( ( ( x30 ) ) ^ ( ( x0AD99996 ) ) );
	( *out4 ) = ( ( ( *out4 ) ) ^ ( ( x31 ) ) );
}

__attribute__ ( ( always_inline ) ) static void nm_DES_bs_b_s2 ( vtype a1 , vtype a2 , vtype a3 , vtype a4 , vtype a5 , vtype a6 , vtype *out1 , vtype *out2 , vtype *out3 , vtype *out4 ) {
	vtype x33CC33CC;
	vtype x55550000 , x00AA00FF , x33BB33FF;
	vtype x33CC0000 , x11441144 , x11BB11BB , x003311BB;
	vtype x00000F0F , x336600FF , x332200FF , x332200F0;
	vtype x0302000F , xAAAAAAAA , xA9A8AAA5 , x33CCCC33 , x33CCC030 , x9A646A95;
	vtype x00333303 , x118822B8 , xA8208805 , x3CC3C33C , x94E34B39;
	vtype x0331330C , x3FF3F33C , xA9DF596A , xA9DF5F6F , x962CAC53;
	vtype x97D27835 , x81D25825 , x812D58DA , x802158DA , x1A45324F;
	vtype x0A451047 , xBBDFDD7B , xB19ACD3C;
	vtype x00 , x01 , x10 , x11 , x20 , x21 , x30 , x31;
	( x33CC33CC ) = ( ( ( a2 ) ) ^ ( ( a5 ) ) );
	( x55550000 ) = ( a1 ) & ~ ( a6 );
	( x00AA00FF ) = ( a5 ) & ~ ( x55550000 );
	( x33BB33FF ) = ( a2 ) | ( x00AA00FF );
	( x33CC0000 ) = ( x33CC33CC ) & ~ ( a6 );
	( x11441144 ) = ( a1 ) & ( x33CC33CC );
	( x11BB11BB ) = ( ( ( a5 ) ) ^ ( ( x11441144 ) ) );
	( x003311BB ) = ( x11BB11BB ) & ~ ( x33CC0000 );
	( x00000F0F ) = ( a3 ) & ( a6 );
	( x336600FF ) = ( ( ( x00AA00FF ) ) ^ ( ( x33CC0000 ) ) );
	( x332200FF ) = ( x33BB33FF ) & ( x336600FF );
	( x332200F0 ) = ( x332200FF ) & ~ ( x00000F0F );
	( x0302000F ) = ( a3 ) & ( x332200FF );
	( xAAAAAAAA ) = ~ ( a1 );
	( xA9A8AAA5 ) = ( ( ( x0302000F ) ) ^ ( ( xAAAAAAAA ) ) );
	( x33CCCC33 ) = ( ( ( a6 ) ) ^ ( ( x33CC33CC ) ) );
	( x33CCC030 ) = ( x33CCCC33 ) & ~ ( x00000F0F );
	( x9A646A95 ) = ( ( ( xA9A8AAA5 ) ) ^ ( ( x33CCC030 ) ) );
	( x10 ) = ( a4 ) & ~ ( x332200F0 );
	( x11 ) = ( ( ( x10 ) ) ^ ( ( x9A646A95 ) ) );
	( *out2 ) = ( ( ( *out2 ) ) ^ ( ( x11 ) ) );
	( x00333303 ) = ( a2 ) & ~ ( x33CCC030 );
	( x118822B8 ) = ( ( ( x11BB11BB ) ) ^ ( ( x00333303 ) ) );
	( xA8208805 ) = ( xA9A8AAA5 ) & ~ ( x118822B8 );
	( x3CC3C33C ) = ( ( ( a3 ) ) ^ ( ( x33CCCC33 ) ) );
	( x94E34B39 ) = ( ( ( xA8208805 ) ) ^ ( ( x3CC3C33C ) ) );
	( x00 ) = ( x33BB33FF ) & ~ ( a4 );
	( x01 ) = ( ( ( x00 ) ) ^ ( ( x94E34B39 ) ) );
	( *out1 ) = ( ( ( *out1 ) ) ^ ( ( x01 ) ) );
	( x0331330C ) = ( ( ( x0302000F ) ) ^ ( ( x00333303 ) ) );
	( x3FF3F33C ) = ( x3CC3C33C ) | ( x0331330C );
	( xA9DF596A ) = ( ( ( x33BB33FF ) ) ^ ( ( x9A646A95 ) ) );
	( xA9DF5F6F ) = ( x00000F0F ) | ( xA9DF596A );
	( x962CAC53 ) = ( ( ( x3FF3F33C ) ) ^ ( ( xA9DF5F6F ) ) );
	( x97D27835 ) = ( ( ( x94E34B39 ) ) ^ ( ( x0331330C ) ) );
	( x81D25825 ) = ( xA9DF5F6F ) & ( x97D27835 );
	( x812D58DA ) = ( ( ( a5 ) ) ^ ( ( x81D25825 ) ) );
	( x802158DA ) = ( x812D58DA ) & ~ ( x33CC0000 );
	( x1A45324F ) = ( ( ( x9A646A95 ) ) ^ ( ( x802158DA ) ) );
	( x20 ) = ( x1A45324F ) | ( a4 );
	( x21 ) = ( ( ( x20 ) ) ^ ( ( x962CAC53 ) ) );
	( *out3 ) = ( ( ( *out3 ) ) ^ ( ( x21 ) ) );
	( x0A451047 ) = ( x1A45324F ) & ~ ( x118822B8 );
	( xBBDFDD7B ) = ( x33CCCC33 ) | ( xA9DF596A );
	( xB19ACD3C ) = ( ( ( x0A451047 ) ) ^ ( ( xBBDFDD7B ) ) );
	( x30 ) = ( x003311BB ) | ( a4 );
	( x31 ) = ( ( ( x30 ) ) ^ ( ( xB19ACD3C ) ) );
	( *out4 ) = ( ( ( *out4 ) ) ^ ( ( x31 ) ) );
}

__attribute__ ( ( always_inline ) ) static void nm_DES_bs_b_s3 ( vtype a1 , vtype a2 , vtype a3 , vtype a4 , vtype a5 , vtype a6 , vtype *out1 , vtype *out2 , vtype *out3 , vtype *out4 ) {
	vtype x44444444 , x0F0FF0F0 , x4F4FF4F4 , x00FFFF00 , x00AAAA00 , x4FE55EF4;
	vtype x3C3CC3C3 , x3C3C0000 , x7373F4F4 , x0C840A00;
	vtype x00005EF4 , x00FF5EFF , x00555455 , x3C699796;
	vtype x000FF000 , x55AA55AA , x26D9A15E , x2FDFAF5F , x2FD00F5F;
	vtype x55AAFFAA , x28410014 , x000000FF , x000000CC , x284100D8;
	vtype x204000D0 , x3C3CC3FF , x1C3CC32F , x4969967A;
	vtype x4CC44CC4 , x40C040C0 , x69963C69 , x9669C396 , xD6A98356;
	vtype x000F00F0 , xFEBDC3D7 , xFEB0C307 , x4CEEEEC4 , xB25E2DC3;
	vtype x00 , x01 , x10 , x11 , x20 , x21 , x30 , x31;
	( x44444444 ) = ( a1 ) & ~ ( a2 );
	( x0F0FF0F0 ) = ( ( ( a3 ) ) ^ ( ( a6 ) ) );
	( x4F4FF4F4 ) = ( x44444444 ) | ( x0F0FF0F0 );
	( x00FFFF00 ) = ( ( ( a4 ) ) ^ ( ( a6 ) ) );
	( x00AAAA00 ) = ( x00FFFF00 ) & ~ ( a1 );
	( x4FE55EF4 ) = ( ( ( x4F4FF4F4 ) ) ^ ( ( x00AAAA00 ) ) );
	( x3C3CC3C3 ) = ( ( ( a2 ) ) ^ ( ( x0F0FF0F0 ) ) );
	( x3C3C0000 ) = ( x3C3CC3C3 ) & ~ ( a6 );
	( x7373F4F4 ) = ( ( ( x4F4FF4F4 ) ) ^ ( ( x3C3C0000 ) ) );
	( x0C840A00 ) = ( x4FE55EF4 ) & ~ ( x7373F4F4 );
	( x00005EF4 ) = ( a6 ) & ( x4FE55EF4 );
	( x00FF5EFF ) = ( a4 ) | ( x00005EF4 );
	( x00555455 ) = ( a1 ) & ( x00FF5EFF );
	( x3C699796 ) = ( ( ( x3C3CC3C3 ) ) ^ ( ( x00555455 ) ) );
	( x30 ) = ( x4FE55EF4 ) & ~ ( a5 );
	( x31 ) = ( ( ( x30 ) ) ^ ( ( x3C699796 ) ) );
	( *out4 ) = ( ( ( *out4 ) ) ^ ( ( x31 ) ) );
	( x000FF000 ) = ( x0F0FF0F0 ) & ( x00FFFF00 );
	( x55AA55AA ) = ( ( ( a1 ) ) ^ ( ( a4 ) ) );
	( x26D9A15E ) = ( ( ( x7373F4F4 ) ) ^ ( ( x55AA55AA ) ) );
	( x2FDFAF5F ) = ( a3 ) | ( x26D9A15E );
	( x2FD00F5F ) = ( x2FDFAF5F ) & ~ ( x000FF000 );
	( x55AAFFAA ) = ( x00AAAA00 ) | ( x55AA55AA );
	( x28410014 ) = ( x3C699796 ) & ~ ( x55AAFFAA );
	( x000000FF ) = ( a4 ) & ( a6 );
	( x000000CC ) = ( x000000FF ) & ~ ( a2 );
	( x284100D8 ) = ( ( ( x28410014 ) ) ^ ( ( x000000CC ) ) );
	( x204000D0 ) = ( x284100D8 ) & ~ ( a3 );
	( x3C3CC3FF ) = ( x3C3CC3C3 ) | ( x000000FF );
	( x1C3CC32F ) = ( x3C3CC3FF ) & ~ ( x204000D0 );
	( x4969967A ) = ( ( ( a1 ) ) ^ ( ( x1C3CC32F ) ) );
	( x10 ) = ( x2FD00F5F ) & ( a5 );
	( x11 ) = ( ( ( x10 ) ) ^ ( ( x4969967A ) ) );
	( *out2 ) = ( ( ( *out2 ) ) ^ ( ( x11 ) ) );
	( x4CC44CC4 ) = ( x4FE55EF4 ) & ~ ( a2 );
	( x40C040C0 ) = ( x4CC44CC4 ) & ~ ( a3 );
	( x69963C69 ) = ( ( ( x3C3CC3C3 ) ) ^ ( ( x55AAFFAA ) ) );
	( x9669C396 ) = ~ ( x69963C69 );
	( xD6A98356 ) = ( ( ( x40C040C0 ) ) ^ ( ( x9669C396 ) ) );
	( x00 ) = ( a5 ) & ~ ( x0C840A00 );
	( x01 ) = ( ( ( x00 ) ) ^ ( ( xD6A98356 ) ) );
	( *out1 ) = ( ( ( *out1 ) ) ^ ( ( x01 ) ) );
	( x000F00F0 ) = ( a4 ) & ( x0F0FF0F0 );
	( xFEBDC3D7 ) = ( x3C3CC3C3 ) | ( xD6A98356 );
	( xFEB0C307 ) = ( xFEBDC3D7 ) & ~ ( x000F00F0 );
	( x4CEEEEC4 ) = ( x00AAAA00 ) | ( x4CC44CC4 );
	( xB25E2DC3 ) = ( ( ( xFEB0C307 ) ) ^ ( ( x4CEEEEC4 ) ) );
	( x20 ) = ( x284100D8 ) | ( a5 );
	( x21 ) = ( ( ( x20 ) ) ^ ( ( xB25E2DC3 ) ) );
	( *out3 ) = ( ( ( *out3 ) ) ^ ( ( x21 ) ) );
}

__attribute__ ( ( always_inline ) ) static void nm_DES_bs_b_s4 ( vtype a1 , vtype a2 , vtype a3 , vtype a4 , vtype a5 , vtype a6 , vtype *out1 , vtype *out2 , vtype *out3 , vtype *out4 ) {
	vtype x5A5A5A5A , x0F0FF0F0;
	vtype x33FF33FF , x33FFCC00 , x0C0030F0 , x0C0CC0C0 , x0CF3C03F , x5EFBDA7F , x52FBCA0F , x61C8F93C;
	vtype x00C0C03C , x0F0F30C0 , x3B92A366 , x30908326 , x3C90B3D6;
	vtype x33CC33CC , x0C0CFFFF , x379E5C99 , x04124C11 , x56E9861E , xA91679E1;
	vtype x9586CA37 , x8402C833 , x84C2C83F , xB35C94A6;
	vtype x00 , x01 , x10 , x11 , x20 , x21 , x30 , x31;
	( x5A5A5A5A ) = ( ( ( a1 ) ) ^ ( ( a3 ) ) );
	( x0F0FF0F0 ) = ( ( ( a3 ) ) ^ ( ( a5 ) ) );
	( x33FF33FF ) = ( a2 ) | ( a4 );
	( x33FFCC00 ) = ( ( ( a5 ) ) ^ ( ( x33FF33FF ) ) );
	( x0C0030F0 ) = ( x0F0FF0F0 ) & ~ ( x33FFCC00 );
	( x0C0CC0C0 ) = ( x0F0FF0F0 ) & ~ ( a2 );
	( x0CF3C03F ) = ( ( ( a4 ) ) ^ ( ( x0C0CC0C0 ) ) );
	( x5EFBDA7F ) = ( x5A5A5A5A ) | ( x0CF3C03F );
	( x52FBCA0F ) = ( x5EFBDA7F ) & ~ ( x0C0030F0 );
	( x61C8F93C ) = ( ( ( a2 ) ) ^ ( ( x52FBCA0F ) ) );
	( x00C0C03C ) = ( x0CF3C03F ) & ( x61C8F93C );
	( x0F0F30C0 ) = ( x0F0FF0F0 ) & ~ ( x00C0C03C );
	( x3B92A366 ) = ( ( ( x5A5A5A5A ) ) ^ ( ( x61C8F93C ) ) );
	( x30908326 ) = ( x3B92A366 ) & ~ ( x0F0F30C0 );
	( x3C90B3D6 ) = ( ( ( x0C0030F0 ) ) ^ ( ( x30908326 ) ) );
	( x33CC33CC ) = ( ( ( a2 ) ) ^ ( ( a4 ) ) );
	( x0C0CFFFF ) = ( a5 ) | ( x0C0CC0C0 );
	( x379E5C99 ) = ( ( ( x3B92A366 ) ) ^ ( ( x0C0CFFFF ) ) );
	( x04124C11 ) = ( x379E5C99 ) & ~ ( x33CC33CC );
	( x56E9861E ) = ( ( ( x52FBCA0F ) ) ^ ( ( x04124C11 ) ) );
	( x00 ) = ( a6 ) & ~ ( x3C90B3D6 );
	( x01 ) = ( ( ( x00 ) ) ^ ( ( x56E9861E ) ) );
	( *out1 ) = ( ( ( *out1 ) ) ^ ( ( x01 ) ) );
	( xA91679E1 ) = ~ ( x56E9861E );
	( x10 ) = ( x3C90B3D6 ) & ~ ( a6 );
	( x11 ) = ( ( ( x10 ) ) ^ ( ( xA91679E1 ) ) );
	( *out2 ) = ( ( ( *out2 ) ) ^ ( ( x11 ) ) );
	( x9586CA37 ) = ( ( ( x3C90B3D6 ) ) ^ ( ( xA91679E1 ) ) );
	( x8402C833 ) = ( x9586CA37 ) & ~ ( x33CC33CC );
	( x84C2C83F ) = ( x00C0C03C ) | ( x8402C833 );
	( xB35C94A6 ) = ( ( ( x379E5C99 ) ) ^ ( ( x84C2C83F ) ) );
	( x20 ) = ( x61C8F93C ) | ( a6 );
	( x21 ) = ( ( ( x20 ) ) ^ ( ( xB35C94A6 ) ) );
	( *out3 ) = ( ( ( *out3 ) ) ^ ( ( x21 ) ) );
	( x30 ) = ( a6 ) & ( x61C8F93C );
	( x31 ) = ( ( ( x30 ) ) ^ ( ( xB35C94A6 ) ) );
	( *out4 ) = ( ( ( *out4 ) ) ^ ( ( x31 ) ) );
}

__attribute__ ( ( always_inline ) ) static void nm_DES_bs_b_s5 ( vtype a1 , vtype a2 , vtype a3 , vtype a4 , vtype a5 , vtype a6 , vtype *out1 , vtype *out2 , vtype *out3 , vtype *out4 ) {
	vtype x77777777 , x77770000 , x22225555 , x11116666 , x1F1F6F6F;
	vtype x70700000 , x43433333 , x00430033 , x55557777 , x55167744 , x5A19784B;
	vtype x5A1987B4 , x7A3BD7F5 , x003B00F5 , x221955A0 , x05050707 , x271C52A7;
	vtype x2A2A82A0 , x6969B193 , x1FE06F90 , x16804E00 , xE97FB1FF;
	vtype x43403302 , x35CAED30 , x37DEFFB7 , x349ECCB5 , x0B01234A;
	vtype x101884B4 , x0FF8EB24 , x41413333 , x4FF9FB37 , x4FC2FBC2;
	vtype x22222222 , x16BCEE97 , x0F080B04 , x19B4E593;
	vtype x5C5C5C5C , x4448184C , x2DDABE71 , x6992A63D;
	vtype x00 , x01 , x10 , x11 , x20 , x21 , x30 , x31;
	( x77777777 ) = ( a1 ) | ( a3 );
	( x77770000 ) = ( x77777777 ) & ~ ( a6 );
	( x22225555 ) = ( ( ( a1 ) ) ^ ( ( x77770000 ) ) );
	( x11116666 ) = ( ( ( a3 ) ) ^ ( ( x22225555 ) ) );
	( x1F1F6F6F ) = ( a4 ) | ( x11116666 );
	( x70700000 ) = ( x77770000 ) & ~ ( a4 );
	( x43433333 ) = ( ( ( a3 ) ) ^ ( ( x70700000 ) ) );
	( x00430033 ) = ( a5 ) & ( x43433333 );
	( x55557777 ) = ( a1 ) | ( x11116666 );
	( x55167744 ) = ( ( ( x00430033 ) ) ^ ( ( x55557777 ) ) );
	( x5A19784B ) = ( ( ( a4 ) ) ^ ( ( x55167744 ) ) );
	( x5A1987B4 ) = ( ( ( a6 ) ) ^ ( ( x5A19784B ) ) );
	( x7A3BD7F5 ) = ( x22225555 ) | ( x5A1987B4 );
	( x003B00F5 ) = ( a5 ) & ( x7A3BD7F5 );
	( x221955A0 ) = ( ( ( x22225555 ) ) ^ ( ( x003B00F5 ) ) );
	( x05050707 ) = ( a4 ) & ( x55557777 );
	( x271C52A7 ) = ( ( ( x221955A0 ) ) ^ ( ( x05050707 ) ) );
	( x2A2A82A0 ) = ( x7A3BD7F5 ) & ~ ( a1 );
	( x6969B193 ) = ( ( ( x43433333 ) ) ^ ( ( x2A2A82A0 ) ) );
	( x1FE06F90 ) = ( ( ( a5 ) ) ^ ( ( x1F1F6F6F ) ) );
	( x16804E00 ) = ( x1FE06F90 ) & ~ ( x6969B193 );
	( xE97FB1FF ) = ~ ( x16804E00 );
	( x20 ) = ( xE97FB1FF ) & ~ ( a2 );
	( x21 ) = ( ( ( x20 ) ) ^ ( ( x5A19784B ) ) );
	( *out3 ) = ( ( ( *out3 ) ) ^ ( ( x21 ) ) );
	( x43403302 ) = ( x43433333 ) & ~ ( x003B00F5 );
	( x35CAED30 ) = ( ( ( x2A2A82A0 ) ) ^ ( ( x1FE06F90 ) ) );
	( x37DEFFB7 ) = ( x271C52A7 ) | ( x35CAED30 );
	( x349ECCB5 ) = ( x37DEFFB7 ) & ~ ( x43403302 );
	( x0B01234A ) = ( x1F1F6F6F ) & ~ ( x349ECCB5 );
	( x101884B4 ) = ( x5A1987B4 ) & ( x349ECCB5 );
	( x0FF8EB24 ) = ( ( ( x1FE06F90 ) ) ^ ( ( x101884B4 ) ) );
	( x41413333 ) = ( x43433333 ) & ( x55557777 );
	( x4FF9FB37 ) = ( x0FF8EB24 ) | ( x41413333 );
	( x4FC2FBC2 ) = ( ( ( x003B00F5 ) ) ^ ( ( x4FF9FB37 ) ) );
	( x30 ) = ( x4FC2FBC2 ) & ( a2 );
	( x31 ) = ( ( ( x30 ) ) ^ ( ( x271C52A7 ) ) );
	( *out4 ) = ( ( ( *out4 ) ) ^ ( ( x31 ) ) );
	( x22222222 ) = ( ( ( a1 ) ) ^ ( ( x77777777 ) ) );
	( x16BCEE97 ) = ( ( ( x349ECCB5 ) ) ^ ( ( x22222222 ) ) );
	( x0F080B04 ) = ( a4 ) & ( x0FF8EB24 );
	( x19B4E593 ) = ( ( ( x16BCEE97 ) ) ^ ( ( x0F080B04 ) ) );
	( x00 ) = ( x0B01234A ) | ( a2 );
	( x01 ) = ( ( ( x00 ) ) ^ ( ( x19B4E593 ) ) );
	( *out1 ) = ( ( ( *out1 ) ) ^ ( ( x01 ) ) );
	( x5C5C5C5C ) = ( ( ( x1F1F6F6F ) ) ^ ( ( x43433333 ) ) );
	( x4448184C ) = ( x5C5C5C5C ) & ~ ( x19B4E593 );
	( x2DDABE71 ) = ( ( ( x22225555 ) ) ^ ( ( x0FF8EB24 ) ) );
	( x6992A63D ) = ( ( ( x4448184C ) ) ^ ( ( x2DDABE71 ) ) );
	( x10 ) = ( x1F1F6F6F ) & ( a2 );
	( x11 ) = ( ( ( x10 ) ) ^ ( ( x6992A63D ) ) );
	( *out2 ) = ( ( ( *out2 ) ) ^ ( ( x11 ) ) );
}

__attribute__ ( ( always_inline ) ) static void nm_DES_bs_b_s6 ( vtype a1 , vtype a2 , vtype a3 , vtype a4 , vtype a5 , vtype a6 , vtype *out1 , vtype *out2 , vtype *out3 , vtype *out4 ) {
	vtype x33CC33CC;
	vtype x3333FFFF , x11115555 , x22DD6699 , x22DD9966 , x00220099;
	vtype x00551144 , x33662277 , x5A5A5A5A , x7B7E7A7F , x59A31CE6;
	vtype x09030C06 , x09030000 , x336622FF , x3A6522FF;
	vtype x484D494C , x0000B6B3 , x0F0FB9BC , x00FC00F9 , x0FFFB9FD;
	vtype x5DF75DF7 , x116600F7 , x1E69B94B , x1668B94B;
	vtype x7B7B7B7B , x411E5984 , x1FFFFDFD , x5EE1A479;
	vtype x3CB4DFD2 , x004B002D , xB7B2B6B3 , xCCC9CDC8 , xCC82CDE5;
	vtype x0055EEBB , x5A5AECE9 , x0050ECA9 , xC5CAC1CE , xC59A2D67;
	vtype x00 , x01 , x10 , x11 , x20 , x21 , x30 , x31;
	( x33CC33CC ) = ( ( ( a2 ) ) ^ ( ( a5 ) ) );
	( x3333FFFF ) = ( a2 ) | ( a6 );
	( x11115555 ) = ( a1 ) & ( x3333FFFF );
	( x22DD6699 ) = ( ( ( x33CC33CC ) ) ^ ( ( x11115555 ) ) );
	( x22DD9966 ) = ( ( ( a6 ) ) ^ ( ( x22DD6699 ) ) );
	( x00220099 ) = ( a5 ) & ~ ( x22DD9966 );
	( x00551144 ) = ( a1 ) & ( x22DD9966 );
	( x33662277 ) = ( ( ( a2 ) ) ^ ( ( x00551144 ) ) );
	( x5A5A5A5A ) = ( ( ( a1 ) ) ^ ( ( a3 ) ) );
	( x7B7E7A7F ) = ( x33662277 ) | ( x5A5A5A5A );
	( x59A31CE6 ) = ( ( ( x22DD6699 ) ) ^ ( ( x7B7E7A7F ) ) );
	( x09030C06 ) = ( a3 ) & ( x59A31CE6 );
	( x09030000 ) = ( x09030C06 ) & ~ ( a6 );
	( x336622FF ) = ( x00220099 ) | ( x33662277 );
	( x3A6522FF ) = ( ( ( x09030000 ) ) ^ ( ( x336622FF ) ) );
	( x30 ) = ( x3A6522FF ) & ( a4 );
	( x31 ) = ( ( ( x30 ) ) ^ ( ( x59A31CE6 ) ) );
	( *out4 ) = ( ( ( *out4 ) ) ^ ( ( x31 ) ) );
	( x484D494C ) = ( ( ( a2 ) ) ^ ( ( x7B7E7A7F ) ) );
	( x0000B6B3 ) = ( a6 ) & ~ ( x484D494C );
	( x0F0FB9BC ) = ( ( ( a3 ) ) ^ ( ( x0000B6B3 ) ) );
	( x00FC00F9 ) = ( a5 ) & ~ ( x09030C06 );
	( x0FFFB9FD ) = ( x0F0FB9BC ) | ( x00FC00F9 );
	( x5DF75DF7 ) = ( a1 ) | ( x59A31CE6 );
	( x116600F7 ) = ( x336622FF ) & ( x5DF75DF7 );
	( x1E69B94B ) = ( ( ( x0F0FB9BC ) ) ^ ( ( x116600F7 ) ) );
	( x1668B94B ) = ( x1E69B94B ) & ~ ( x09030000 );
	( x20 ) = ( x00220099 ) | ( a4 );
	( x21 ) = ( ( ( x20 ) ) ^ ( ( x1668B94B ) ) );
	( *out3 ) = ( ( ( *out3 ) ) ^ ( ( x21 ) ) );
	( x7B7B7B7B ) = ( a2 ) | ( x5A5A5A5A );
	( x411E5984 ) = ( ( ( x3A6522FF ) ) ^ ( ( x7B7B7B7B ) ) );
	( x1FFFFDFD ) = ( x11115555 ) | ( x0FFFB9FD );
	( x5EE1A479 ) = ( ( ( x411E5984 ) ) ^ ( ( x1FFFFDFD ) ) );
	( x3CB4DFD2 ) = ( ( ( x22DD6699 ) ) ^ ( ( x1E69B94B ) ) );
	( x004B002D ) = ( a5 ) & ~ ( x3CB4DFD2 );
	( xB7B2B6B3 ) = ~ ( x484D494C );
	( xCCC9CDC8 ) = ( ( ( x7B7B7B7B ) ) ^ ( ( xB7B2B6B3 ) ) );
	( xCC82CDE5 ) = ( ( ( x004B002D ) ) ^ ( ( xCCC9CDC8 ) ) );
	( x10 ) = ( xCC82CDE5 ) & ~ ( a4 );
	( x11 ) = ( ( ( x10 ) ) ^ ( ( x5EE1A479 ) ) );
	( *out2 ) = ( ( ( *out2 ) ) ^ ( ( x11 ) ) );
	( x0055EEBB ) = ( ( ( a6 ) ) ^ ( ( x00551144 ) ) );
	( x5A5AECE9 ) = ( ( ( a1 ) ) ^ ( ( x0F0FB9BC ) ) );
	( x0050ECA9 ) = ( x0055EEBB ) & ( x5A5AECE9 );
	( xC5CAC1CE ) = ( ( ( x09030C06 ) ) ^ ( ( xCCC9CDC8 ) ) );
	( xC59A2D67 ) = ( ( ( x0050ECA9 ) ) ^ ( ( xC5CAC1CE ) ) );
	( x00 ) = ( x0FFFB9FD ) & ~ ( a4 );
	( x01 ) = ( ( ( x00 ) ) ^ ( ( xC59A2D67 ) ) );
	( *out1 ) = ( ( ( *out1 ) ) ^ ( ( x01 ) ) );
}

__attribute__ ( ( always_inline ) ) static void nm_DES_bs_b_s7 ( vtype a1 , vtype a2 , vtype a3 , vtype a4 , vtype a5 , vtype a6 , vtype *out1 , vtype *out2 , vtype *out3 , vtype *out4 ) {
	vtype x0FF00FF0 , x3CC33CC3 , x00003CC3 , x0F000F00 , x5A555A55 , x00001841;
	vtype x00000F00 , x33333C33 , x7B777E77 , x0FF0F00F , x74878E78;
	vtype x003C003C , x5A7D5A7D , x333300F0 , x694E5A8D;
	vtype x0FF0CCCC , x000F0303 , x5A505854 , x33CC000F , x699C585B;
	vtype x7F878F78 , x21101013 , x7F979F7B , x30030CC0 , x4F9493BB;
	vtype x6F9CDBFB , x0000DBFB , x00005151 , x26DAC936 , x26DA9867;
	vtype x21FF10FF , x21FFCB04 , x2625C9C9 , x27FFCBCD;
	vtype x27FF1036 , x27FF103E , xB06B6C44 , x97947C7A;
	vtype x00 , x01 , x10 , x11 , x20 , x21 , x30 , x31;
	( x0FF00FF0 ) = ( ( ( a4 ) ) ^ ( ( a5 ) ) );
	( x3CC33CC3 ) = ( ( ( a3 ) ) ^ ( ( x0FF00FF0 ) ) );
	( x00003CC3 ) = ( a6 ) & ( x3CC33CC3 );
	( x0F000F00 ) = ( a4 ) & ( x0FF00FF0 );
	( x5A555A55 ) = ( ( ( a2 ) ) ^ ( ( x0F000F00 ) ) );
	( x00001841 ) = ( x00003CC3 ) & ( x5A555A55 );
	( x00000F00 ) = ( a6 ) & ( x0F000F00 );
	( x33333C33 ) = ( ( ( a3 ) ) ^ ( ( x00000F00 ) ) );
	( x7B777E77 ) = ( x5A555A55 ) | ( x33333C33 );
	( x0FF0F00F ) = ( ( ( a6 ) ) ^ ( ( x0FF00FF0 ) ) );
	( x74878E78 ) = ( ( ( x7B777E77 ) ) ^ ( ( x0FF0F00F ) ) );
	( x30 ) = ( a1 ) & ~ ( x00001841 );
	( x31 ) = ( ( ( x30 ) ) ^ ( ( x74878E78 ) ) );
	( *out4 ) = ( ( ( *out4 ) ) ^ ( ( x31 ) ) );
	( x003C003C ) = ( a5 ) & ~ ( x3CC33CC3 );
	( x5A7D5A7D ) = ( x5A555A55 ) | ( x003C003C );
	( x333300F0 ) = ( ( ( x00003CC3 ) ) ^ ( ( x33333C33 ) ) );
	( x694E5A8D ) = ( ( ( x5A7D5A7D ) ) ^ ( ( x333300F0 ) ) );
	( x0FF0CCCC ) = ( ( ( x00003CC3 ) ) ^ ( ( x0FF0F00F ) ) );
	( x000F0303 ) = ( a4 ) & ~ ( x0FF0CCCC );
	( x5A505854 ) = ( x5A555A55 ) & ~ ( x000F0303 );
	( x33CC000F ) = ( ( ( a5 ) ) ^ ( ( x333300F0 ) ) );
	( x699C585B ) = ( ( ( x5A505854 ) ) ^ ( ( x33CC000F ) ) );
	( x7F878F78 ) = ( x0F000F00 ) | ( x74878E78 );
	( x21101013 ) = ( a3 ) & ( x699C585B );
	( x7F979F7B ) = ( x7F878F78 ) | ( x21101013 );
	( x30030CC0 ) = ( x3CC33CC3 ) & ~ ( x0FF0F00F );
	( x4F9493BB ) = ( ( ( x7F979F7B ) ) ^ ( ( x30030CC0 ) ) );
	( x00 ) = ( x4F9493BB ) & ~ ( a1 );
	( x01 ) = ( ( ( x00 ) ) ^ ( ( x694E5A8D ) ) );
	( *out1 ) = ( ( ( *out1 ) ) ^ ( ( x01 ) ) );
	( x6F9CDBFB ) = ( x699C585B ) | ( x4F9493BB );
	( x0000DBFB ) = ( a6 ) & ( x6F9CDBFB );
	( x00005151 ) = ( a2 ) & ( x0000DBFB );
	( x26DAC936 ) = ( ( ( x694E5A8D ) ) ^ ( ( x4F9493BB ) ) );
	( x26DA9867 ) = ( ( ( x00005151 ) ) ^ ( ( x26DAC936 ) ) );
	( x21FF10FF ) = ( a5 ) | ( x21101013 );
	( x21FFCB04 ) = ( ( ( x0000DBFB ) ) ^ ( ( x21FF10FF ) ) );
	( x2625C9C9 ) = ( ( ( a5 ) ) ^ ( ( x26DAC936 ) ) );
	( x27FFCBCD ) = ( x21FFCB04 ) | ( x2625C9C9 );
	( x20 ) = ( x27FFCBCD ) & ( a1 );
	( x21 ) = ( ( ( x20 ) ) ^ ( ( x699C585B ) ) );
	( *out3 ) = ( ( ( *out3 ) ) ^ ( ( x21 ) ) );
	( x27FF1036 ) = ( ( ( x0000DBFB ) ) ^ ( ( x27FFCBCD ) ) );
	( x27FF103E ) = ( x003C003C ) | ( x27FF1036 );
	( xB06B6C44 ) = ~ ( x4F9493BB );
	( x97947C7A ) = ( ( ( x27FF103E ) ) ^ ( ( xB06B6C44 ) ) );
	( x10 ) = ( x97947C7A ) & ~ ( a1 );
	( x11 ) = ( ( ( x10 ) ) ^ ( ( x26DA9867 ) ) );
	( *out2 ) = ( ( ( *out2 ) ) ^ ( ( x11 ) ) );
}

__attribute__ ( ( always_inline ) ) static void nm_DES_bs_b_s8 ( vtype a1 , vtype a2 , vtype a3 , vtype a4 , vtype a5 , vtype a6 , vtype *out1 , vtype *out2 , vtype *out3 , vtype *out4 ) {
	vtype x0C0C0C0C , x0000F0F0 , x00FFF00F , x00555005 , x00515001;
	vtype x33000330 , x77555775 , x30303030 , x3030CFCF , x30104745 , x30555745;
	vtype xFF000FF0 , xCF1048B5 , x080A080A , xC71A40BF , xCB164CB3;
	vtype x9E4319E6 , x000019E6 , xF429738C , xF4296A6A , xC729695A;
	vtype xC47C3D2F , xF77F3F3F , x9E43E619 , x693CD926;
	vtype xF719A695 , xF4FF73FF , x03E6D56A , x56B3803F;
	vtype xF700A600 , x61008000 , x03B7856B , x62B7056B;
	vtype x00 , x01 , x10 , x11 , x20 , x21 , x30 , x31;
	( x0C0C0C0C ) = ( a3 ) & ~ ( a2 );
	( x0000F0F0 ) = ( a5 ) & ~ ( a3 );
	( x00FFF00F ) = ( ( ( a4 ) ) ^ ( ( x0000F0F0 ) ) );
	( x00555005 ) = ( a1 ) & ( x00FFF00F );
	( x00515001 ) = ( x00555005 ) & ~ ( x0C0C0C0C );
	( x33000330 ) = ( a2 ) & ~ ( x00FFF00F );
	( x77555775 ) = ( a1 ) | ( x33000330 );
	( x30303030 ) = ( a2 ) & ~ ( a3 );
	( x3030CFCF ) = ( ( ( a5 ) ) ^ ( ( x30303030 ) ) );
	( x30104745 ) = ( x77555775 ) & ( x3030CFCF );
	( x30555745 ) = ( x00555005 ) | ( x30104745 );
	( xFF000FF0 ) = ~ ( x00FFF00F );
	( xCF1048B5 ) = ( ( ( x30104745 ) ) ^ ( ( xFF000FF0 ) ) );
	( x080A080A ) = ( a3 ) & ~ ( x77555775 );
	( xC71A40BF ) = ( ( ( xCF1048B5 ) ) ^ ( ( x080A080A ) ) );
	( xCB164CB3 ) = ( ( ( x0C0C0C0C ) ) ^ ( ( xC71A40BF ) ) );
	( x10 ) = ( x00515001 ) | ( a6 );
	( x11 ) = ( ( ( x10 ) ) ^ ( ( xCB164CB3 ) ) );
	( *out2 ) = ( ( ( *out2 ) ) ^ ( ( x11 ) ) );
	( x9E4319E6 ) = ( ( ( a1 ) ) ^ ( ( xCB164CB3 ) ) );
	( x000019E6 ) = ( a5 ) & ( x9E4319E6 );
	( xF429738C ) = ( ( ( a2 ) ) ^ ( ( xC71A40BF ) ) );
	( xF4296A6A ) = ( ( ( x000019E6 ) ) ^ ( ( xF429738C ) ) );
	( xC729695A ) = ( ( ( x33000330 ) ) ^ ( ( xF4296A6A ) ) );
	( xC47C3D2F ) = ( ( ( x30555745 ) ) ^ ( ( xF4296A6A ) ) );
	( xF77F3F3F ) = ( a2 ) | ( xC47C3D2F );
	( x9E43E619 ) = ( ( ( a5 ) ) ^ ( ( x9E4319E6 ) ) );
	( x693CD926 ) = ( ( ( xF77F3F3F ) ) ^ ( ( x9E43E619 ) ) );
	( x20 ) = ( x30555745 ) & ( a6 );
	( x21 ) = ( ( ( x20 ) ) ^ ( ( x693CD926 ) ) );
	( *out3 ) = ( ( ( *out3 ) ) ^ ( ( x21 ) ) );
	( xF719A695 ) = ( ( ( x3030CFCF ) ) ^ ( ( xC729695A ) ) );
	( xF4FF73FF ) = ( a4 ) | ( xF429738C );
	( x03E6D56A ) = ( ( ( xF719A695 ) ) ^ ( ( xF4FF73FF ) ) );
	( x56B3803F ) = ( ( ( a1 ) ) ^ ( ( x03E6D56A ) ) );
	( x30 ) = ( x56B3803F ) & ( a6 );
	( x31 ) = ( ( ( x30 ) ) ^ ( ( xC729695A ) ) );
	( *out4 ) = ( ( ( *out4 ) ) ^ ( ( x31 ) ) );
	( xF700A600 ) = ( xF719A695 ) & ~ ( a4 );
	( x61008000 ) = ( x693CD926 ) & ( xF700A600 );
	( x03B7856B ) = ( ( ( x00515001 ) ) ^ ( ( x03E6D56A ) ) );
	( x62B7056B ) = ( ( ( x61008000 ) ) ^ ( ( x03B7856B ) ) );
	( x00 ) = ( x62B7056B ) | ( a6 );
	( x01 ) = ( ( ( x00 ) ) ^ ( ( xC729695A ) ) );
	( *out1 ) = ( ( ( *out1 ) ) ^ ( ( x01 ) ) );
}

void DES_bs_crypt_25 ( int keys_count ) {
	{
		long **k;
		int iterations , rounds_and_swapped;
		if ( DES_bs_all.keys_changed ) goto finalize_keys;
		body : {
			vtype zero = 0;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
		}

		k = DES_bs_all.KS.p;
		rounds_and_swapped = 8;
		iterations = 25;
		start : nm_DES_bs_b_s1 ( ( ( *( vtype *) & DES_bs_all.E.E [ 0 ] [ 0 ] ) ^ ( *( vtype *) & k [ 0 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 1 ] [ 0 ] ) ^ ( *( vtype *) & k [ 1 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 2 ] [ 0 ] ) ^ ( *( vtype *) & k [ 2 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 3 ] [ 0 ] ) ^ ( *( vtype *) & k [ 3 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 4 ] [ 0 ] ) ^ ( *( vtype *) & k [ 4 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 5 ] [ 0 ] ) ^ ( *( vtype *) & k [ 5 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 40 ] ) , ( ( vtype *) & DES_bs_all.B [ 48 ] ) , ( ( vtype *) & DES_bs_all.B [ 54 ] ) , ( ( vtype *) & DES_bs_all.B [ 62 ] ) );
		nm_DES_bs_b_s2 ( ( ( *( vtype *) & DES_bs_all.E.E [ 6 ] [ 0 ] ) ^ ( *( vtype *) & k [ 6 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 7 ] [ 0 ] ) ^ ( *( vtype *) & k [ 7 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 8 ] [ 0 ] ) ^ ( *( vtype *) & k [ 8 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 9 ] [ 0 ] ) ^ ( *( vtype *) & k [ 9 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 10 ] [ 0 ] ) ^ ( *( vtype *) & k [ 10 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 11 ] [ 0 ] ) ^ ( *( vtype *) & k [ 11 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 44 ] ) , ( ( vtype *) & DES_bs_all.B [ 59 ] ) , ( ( vtype *) & DES_bs_all.B [ 33 ] ) , ( ( vtype *) & DES_bs_all.B [ 49 ] ) );
		nm_DES_bs_b_s3 ( ( ( *( vtype *) & DES_bs_all.B [ 7 ] ) ^ ( *( vtype *) & k [ 12 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 8 ] ) ^ ( *( vtype *) & k [ 13 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 9 ] ) ^ ( *( vtype *) & k [ 14 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 10 ] ) ^ ( *( vtype *) & k [ 15 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 11 ] ) ^ ( *( vtype *) & k [ 16 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 12 ] ) ^ ( *( vtype *) & k [ 17 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 55 ] ) , ( ( vtype *) & DES_bs_all.B [ 47 ] ) , ( ( vtype *) & DES_bs_all.B [ 61 ] ) , ( ( vtype *) & DES_bs_all.B [ 37 ] ) );
		nm_DES_bs_b_s4 ( ( ( *( vtype *) & DES_bs_all.B [ 11 ] ) ^ ( *( vtype *) & k [ 18 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 12 ] ) ^ ( *( vtype *) & k [ 19 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 13 ] ) ^ ( *( vtype *) & k [ 20 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 14 ] ) ^ ( *( vtype *) & k [ 21 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 15 ] ) ^ ( *( vtype *) & k [ 22 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 16 ] ) ^ ( *( vtype *) & k [ 23 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 57 ] ) , ( ( vtype *) & DES_bs_all.B [ 51 ] ) , ( ( vtype *) & DES_bs_all.B [ 41 ] ) , ( ( vtype *) & DES_bs_all.B [ 32 ] ) );
		nm_DES_bs_b_s5 ( ( ( *( vtype *) & DES_bs_all.E.E [ 24 ] [ 0 ] ) ^ ( *( vtype *) & k [ 24 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 25 ] [ 0 ] ) ^ ( *( vtype *) & k [ 25 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 26 ] [ 0 ] ) ^ ( *( vtype *) & k [ 26 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 27 ] [ 0 ] ) ^ ( *( vtype *) & k [ 27 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 28 ] [ 0 ] ) ^ ( *( vtype *) & k [ 28 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 29 ] [ 0 ] ) ^ ( *( vtype *) & k [ 29 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 39 ] ) , ( ( vtype *) & DES_bs_all.B [ 45 ] ) , ( ( vtype *) & DES_bs_all.B [ 56 ] ) , ( ( vtype *) & DES_bs_all.B [ 34 ] ) );
		nm_DES_bs_b_s6 ( ( ( *( vtype *) & DES_bs_all.E.E [ 30 ] [ 0 ] ) ^ ( *( vtype *) & k [ 30 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 31 ] [ 0 ] ) ^ ( *( vtype *) & k [ 31 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 32 ] [ 0 ] ) ^ ( *( vtype *) & k [ 32 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 33 ] [ 0 ] ) ^ ( *( vtype *) & k [ 33 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 34 ] [ 0 ] ) ^ ( *( vtype *) & k [ 34 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 35 ] [ 0 ] ) ^ ( *( vtype *) & k [ 35 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 35 ] ) , ( ( vtype *) & DES_bs_all.B [ 60 ] ) , ( ( vtype *) & DES_bs_all.B [ 42 ] ) , ( ( vtype *) & DES_bs_all.B [ 50 ] ) );
		nm_DES_bs_b_s7 ( ( ( *( vtype *) & DES_bs_all.B [ 23 ] ) ^ ( *( vtype *) & k [ 36 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 24 ] ) ^ ( *( vtype *) & k [ 37 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 25 ] ) ^ ( *( vtype *) & k [ 38 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 26 ] ) ^ ( *( vtype *) & k [ 39 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 27 ] ) ^ ( *( vtype *) & k [ 40 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 28 ] ) ^ ( *( vtype *) & k [ 41 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 63 ] ) , ( ( vtype *) & DES_bs_all.B [ 43 ] ) , ( ( vtype *) & DES_bs_all.B [ 53 ] ) , ( ( vtype *) & DES_bs_all.B [ 38 ] ) );
		nm_DES_bs_b_s8 ( ( ( *( vtype *) & DES_bs_all.B [ 27 ] ) ^ ( *( vtype *) & k [ 42 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 28 ] ) ^ ( *( vtype *) & k [ 43 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 29 ] ) ^ ( *( vtype *) & k [ 44 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 30 ] ) ^ ( *( vtype *) & k [ 45 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 31 ] ) ^ ( *( vtype *) & k [ 46 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 0 ] ) ^ ( *( vtype *) & k [ 47 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 36 ] ) , ( ( vtype *) & DES_bs_all.B [ 58 ] ) , ( ( vtype *) & DES_bs_all.B [ 46 ] ) , ( ( vtype *) & DES_bs_all.B [ 52 ] ) );
		if ( rounds_and_swapped == 0x100 ) goto next;
		swap : nm_DES_bs_b_s1 ( ( ( *( vtype *) & DES_bs_all.E.E [ 48 ] [ 0 ] ) ^ ( *( vtype *) & k [ 48 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 49 ] [ 0 ] ) ^ ( *( vtype *) & k [ 49 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 50 ] [ 0 ] ) ^ ( *( vtype *) & k [ 50 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 51 ] [ 0 ] ) ^ ( *( vtype *) & k [ 51 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 52 ] [ 0 ] ) ^ ( *( vtype *) & k [ 52 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 53 ] [ 0 ] ) ^ ( *( vtype *) & k [ 53 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 8 ] ) , ( ( vtype *) & DES_bs_all.B [ 16 ] ) , ( ( vtype *) & DES_bs_all.B [ 22 ] ) , ( ( vtype *) & DES_bs_all.B [ 30 ] ) );
		nm_DES_bs_b_s2 ( ( ( *( vtype *) & DES_bs_all.E.E [ 54 ] [ 0 ] ) ^ ( *( vtype *) & k [ 54 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 55 ] [ 0 ] ) ^ ( *( vtype *) & k [ 55 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 56 ] [ 0 ] ) ^ ( *( vtype *) & k [ 56 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 57 ] [ 0 ] ) ^ ( *( vtype *) & k [ 57 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 58 ] [ 0 ] ) ^ ( *( vtype *) & k [ 58 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 59 ] [ 0 ] ) ^ ( *( vtype *) & k [ 59 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 12 ] ) , ( ( vtype *) & DES_bs_all.B [ 27 ] ) , ( ( vtype *) & DES_bs_all.B [ 1 ] ) , ( ( vtype *) & DES_bs_all.B [ 17 ] ) );
		nm_DES_bs_b_s3 ( ( ( *( vtype *) & DES_bs_all.B [ 39 ] ) ^ ( *( vtype *) & k [ 60 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 40 ] ) ^ ( *( vtype *) & k [ 61 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 41 ] ) ^ ( *( vtype *) & k [ 62 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 42 ] ) ^ ( *( vtype *) & k [ 63 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 43 ] ) ^ ( *( vtype *) & k [ 64 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 44 ] ) ^ ( *( vtype *) & k [ 65 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 23 ] ) , ( ( vtype *) & DES_bs_all.B [ 15 ] ) , ( ( vtype *) & DES_bs_all.B [ 29 ] ) , ( ( vtype *) & DES_bs_all.B [ 5 ] ) );
		nm_DES_bs_b_s4 ( ( ( *( vtype *) & DES_bs_all.B [ 43 ] ) ^ ( *( vtype *) & k [ 66 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 44 ] ) ^ ( *( vtype *) & k [ 67 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 45 ] ) ^ ( *( vtype *) & k [ 68 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 46 ] ) ^ ( *( vtype *) & k [ 69 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 47 ] ) ^ ( *( vtype *) & k [ 70 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 48 ] ) ^ ( *( vtype *) & k [ 71 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 25 ] ) , ( ( vtype *) & DES_bs_all.B [ 19 ] ) , ( ( vtype *) & DES_bs_all.B [ 9 ] ) , ( ( vtype *) & DES_bs_all.B [ 0 ] ) );
		nm_DES_bs_b_s5 ( ( ( *( vtype *) & DES_bs_all.E.E [ 72 ] [ 0 ] ) ^ ( *( vtype *) & k [ 72 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 73 ] [ 0 ] ) ^ ( *( vtype *) & k [ 73 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 74 ] [ 0 ] ) ^ ( *( vtype *) & k [ 74 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 75 ] [ 0 ] ) ^ ( *( vtype *) & k [ 75 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 76 ] [ 0 ] ) ^ ( *( vtype *) & k [ 76 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 77 ] [ 0 ] ) ^ ( *( vtype *) & k [ 77 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 7 ] ) , ( ( vtype *) & DES_bs_all.B [ 13 ] ) , ( ( vtype *) & DES_bs_all.B [ 24 ] ) , ( ( vtype *) & DES_bs_all.B [ 2 ] ) );
		nm_DES_bs_b_s6 ( ( ( *( vtype *) & DES_bs_all.E.E [ 78 ] [ 0 ] ) ^ ( *( vtype *) & k [ 78 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 79 ] [ 0 ] ) ^ ( *( vtype *) & k [ 79 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 80 ] [ 0 ] ) ^ ( *( vtype *) & k [ 80 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 81 ] [ 0 ] ) ^ ( *( vtype *) & k [ 81 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 82 ] [ 0 ] ) ^ ( *( vtype *) & k [ 82 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 83 ] [ 0 ] ) ^ ( *( vtype *) & k [ 83 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 3 ] ) , ( ( vtype *) & DES_bs_all.B [ 28 ] ) , ( ( vtype *) & DES_bs_all.B [ 10 ] ) , ( ( vtype *) & DES_bs_all.B [ 18 ] ) );
		nm_DES_bs_b_s7 ( ( ( *( vtype *) & DES_bs_all.B [ 55 ] ) ^ ( *( vtype *) & k [ 84 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 56 ] ) ^ ( *( vtype *) & k [ 85 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 57 ] ) ^ ( *( vtype *) & k [ 86 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 58 ] ) ^ ( *( vtype *) & k [ 87 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 59 ] ) ^ ( *( vtype *) & k [ 88 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 60 ] ) ^ ( *( vtype *) & k [ 89 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 31 ] ) , ( ( vtype *) & DES_bs_all.B [ 11 ] ) , ( ( vtype *) & DES_bs_all.B [ 21 ] ) , ( ( vtype *) & DES_bs_all.B [ 6 ] ) );
		nm_DES_bs_b_s8 ( ( ( *( vtype *) & DES_bs_all.B [ 59 ] ) ^ ( *( vtype *) & k [ 90 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 60 ] ) ^ ( *( vtype *) & k [ 91 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 61 ] ) ^ ( *( vtype *) & k [ 92 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 62 ] ) ^ ( *( vtype *) & k [ 93 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 63 ] ) ^ ( *( vtype *) & k [ 94 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 32 ] ) ^ ( *( vtype *) & k [ 95 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 4 ] ) , ( ( vtype *) & DES_bs_all.B [ 26 ] ) , ( ( vtype *) & DES_bs_all.B [ 14 ] ) , ( ( vtype *) & DES_bs_all.B [ 20 ] ) );
		k += 96;
		if ( -- rounds_and_swapped ) goto start;
		k -= ( 0x300 + 48 );
		rounds_and_swapped = 0x108;
		if ( -- iterations ) goto swap;
		return;
		next : k -= ( 0x300 - 48 );
		rounds_and_swapped = 8;
		iterations --;
		goto start;
		finalize_keys : DES_bs_all.keys_changed = 0;
		nm_DES_bs_b_DES_bs_finalize_keys ( );
		goto body;
	}

}

void DES_bs_crypt ( int count , int keys_count ) {
	{
		long **k;
		int iterations , rounds_and_swapped;
		if ( DES_bs_all.keys_changed ) goto finalize_keys;
		body : {
			vtype zero = 0;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 0 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 1 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 2 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 3 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 4 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 5 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 6 ) ) ) = ( zero );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 7 ) ) ) = ( zero );
			}

			;
		}

		k = DES_bs_all.KS.p;
		rounds_and_swapped = 8;
		iterations = count;
		start : nm_DES_bs_b_s1 ( ( ( *( vtype *) & DES_bs_all.E.E [ 0 ] [ 0 ] ) ^ ( *( vtype *) & k [ 0 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 1 ] [ 0 ] ) ^ ( *( vtype *) & k [ 1 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 2 ] [ 0 ] ) ^ ( *( vtype *) & k [ 2 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 3 ] [ 0 ] ) ^ ( *( vtype *) & k [ 3 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 4 ] [ 0 ] ) ^ ( *( vtype *) & k [ 4 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 5 ] [ 0 ] ) ^ ( *( vtype *) & k [ 5 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 40 ] ) , ( ( vtype *) & DES_bs_all.B [ 48 ] ) , ( ( vtype *) & DES_bs_all.B [ 54 ] ) , ( ( vtype *) & DES_bs_all.B [ 62 ] ) );
		nm_DES_bs_b_s2 ( ( ( *( vtype *) & DES_bs_all.E.E [ 6 ] [ 0 ] ) ^ ( *( vtype *) & k [ 6 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 7 ] [ 0 ] ) ^ ( *( vtype *) & k [ 7 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 8 ] [ 0 ] ) ^ ( *( vtype *) & k [ 8 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 9 ] [ 0 ] ) ^ ( *( vtype *) & k [ 9 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 10 ] [ 0 ] ) ^ ( *( vtype *) & k [ 10 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 11 ] [ 0 ] ) ^ ( *( vtype *) & k [ 11 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 44 ] ) , ( ( vtype *) & DES_bs_all.B [ 59 ] ) , ( ( vtype *) & DES_bs_all.B [ 33 ] ) , ( ( vtype *) & DES_bs_all.B [ 49 ] ) );
		nm_DES_bs_b_s3 ( ( ( *( vtype *) & DES_bs_all.E.E [ 12 ] [ 0 ] ) ^ ( *( vtype *) & k [ 12 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 13 ] [ 0 ] ) ^ ( *( vtype *) & k [ 13 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 14 ] [ 0 ] ) ^ ( *( vtype *) & k [ 14 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 15 ] [ 0 ] ) ^ ( *( vtype *) & k [ 15 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 16 ] [ 0 ] ) ^ ( *( vtype *) & k [ 16 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 17 ] [ 0 ] ) ^ ( *( vtype *) & k [ 17 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 55 ] ) , ( ( vtype *) & DES_bs_all.B [ 47 ] ) , ( ( vtype *) & DES_bs_all.B [ 61 ] ) , ( ( vtype *) & DES_bs_all.B [ 37 ] ) );
		nm_DES_bs_b_s4 ( ( ( *( vtype *) & DES_bs_all.E.E [ 18 ] [ 0 ] ) ^ ( *( vtype *) & k [ 18 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 19 ] [ 0 ] ) ^ ( *( vtype *) & k [ 19 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 20 ] [ 0 ] ) ^ ( *( vtype *) & k [ 20 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 21 ] [ 0 ] ) ^ ( *( vtype *) & k [ 21 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 22 ] [ 0 ] ) ^ ( *( vtype *) & k [ 22 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 23 ] [ 0 ] ) ^ ( *( vtype *) & k [ 23 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 57 ] ) , ( ( vtype *) & DES_bs_all.B [ 51 ] ) , ( ( vtype *) & DES_bs_all.B [ 41 ] ) , ( ( vtype *) & DES_bs_all.B [ 32 ] ) );
		nm_DES_bs_b_s5 ( ( ( *( vtype *) & DES_bs_all.E.E [ 24 ] [ 0 ] ) ^ ( *( vtype *) & k [ 24 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 25 ] [ 0 ] ) ^ ( *( vtype *) & k [ 25 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 26 ] [ 0 ] ) ^ ( *( vtype *) & k [ 26 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 27 ] [ 0 ] ) ^ ( *( vtype *) & k [ 27 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 28 ] [ 0 ] ) ^ ( *( vtype *) & k [ 28 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 29 ] [ 0 ] ) ^ ( *( vtype *) & k [ 29 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 39 ] ) , ( ( vtype *) & DES_bs_all.B [ 45 ] ) , ( ( vtype *) & DES_bs_all.B [ 56 ] ) , ( ( vtype *) & DES_bs_all.B [ 34 ] ) );
		nm_DES_bs_b_s6 ( ( ( *( vtype *) & DES_bs_all.E.E [ 30 ] [ 0 ] ) ^ ( *( vtype *) & k [ 30 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 31 ] [ 0 ] ) ^ ( *( vtype *) & k [ 31 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 32 ] [ 0 ] ) ^ ( *( vtype *) & k [ 32 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 33 ] [ 0 ] ) ^ ( *( vtype *) & k [ 33 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 34 ] [ 0 ] ) ^ ( *( vtype *) & k [ 34 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 35 ] [ 0 ] ) ^ ( *( vtype *) & k [ 35 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 35 ] ) , ( ( vtype *) & DES_bs_all.B [ 60 ] ) , ( ( vtype *) & DES_bs_all.B [ 42 ] ) , ( ( vtype *) & DES_bs_all.B [ 50 ] ) );
		nm_DES_bs_b_s7 ( ( ( *( vtype *) & DES_bs_all.E.E [ 36 ] [ 0 ] ) ^ ( *( vtype *) & k [ 36 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 37 ] [ 0 ] ) ^ ( *( vtype *) & k [ 37 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 38 ] [ 0 ] ) ^ ( *( vtype *) & k [ 38 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 39 ] [ 0 ] ) ^ ( *( vtype *) & k [ 39 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 40 ] [ 0 ] ) ^ ( *( vtype *) & k [ 40 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 41 ] [ 0 ] ) ^ ( *( vtype *) & k [ 41 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 63 ] ) , ( ( vtype *) & DES_bs_all.B [ 43 ] ) , ( ( vtype *) & DES_bs_all.B [ 53 ] ) , ( ( vtype *) & DES_bs_all.B [ 38 ] ) );
		nm_DES_bs_b_s8 ( ( ( *( vtype *) & DES_bs_all.E.E [ 42 ] [ 0 ] ) ^ ( *( vtype *) & k [ 42 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 43 ] [ 0 ] ) ^ ( *( vtype *) & k [ 43 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 44 ] [ 0 ] ) ^ ( *( vtype *) & k [ 44 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 45 ] [ 0 ] ) ^ ( *( vtype *) & k [ 45 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 46 ] [ 0 ] ) ^ ( *( vtype *) & k [ 46 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 47 ] [ 0 ] ) ^ ( *( vtype *) & k [ 47 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 36 ] ) , ( ( vtype *) & DES_bs_all.B [ 58 ] ) , ( ( vtype *) & DES_bs_all.B [ 46 ] ) , ( ( vtype *) & DES_bs_all.B [ 52 ] ) );
		if ( rounds_and_swapped == 0x100 ) goto next;
		swap : nm_DES_bs_b_s1 ( ( ( *( vtype *) & DES_bs_all.E.E [ 48 ] [ 0 ] ) ^ ( *( vtype *) & k [ 48 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 49 ] [ 0 ] ) ^ ( *( vtype *) & k [ 49 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 50 ] [ 0 ] ) ^ ( *( vtype *) & k [ 50 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 51 ] [ 0 ] ) ^ ( *( vtype *) & k [ 51 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 52 ] [ 0 ] ) ^ ( *( vtype *) & k [ 52 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 53 ] [ 0 ] ) ^ ( *( vtype *) & k [ 53 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 8 ] ) , ( ( vtype *) & DES_bs_all.B [ 16 ] ) , ( ( vtype *) & DES_bs_all.B [ 22 ] ) , ( ( vtype *) & DES_bs_all.B [ 30 ] ) );
		nm_DES_bs_b_s2 ( ( ( *( vtype *) & DES_bs_all.E.E [ 54 ] [ 0 ] ) ^ ( *( vtype *) & k [ 54 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 55 ] [ 0 ] ) ^ ( *( vtype *) & k [ 55 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 56 ] [ 0 ] ) ^ ( *( vtype *) & k [ 56 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 57 ] [ 0 ] ) ^ ( *( vtype *) & k [ 57 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 58 ] [ 0 ] ) ^ ( *( vtype *) & k [ 58 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 59 ] [ 0 ] ) ^ ( *( vtype *) & k [ 59 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 12 ] ) , ( ( vtype *) & DES_bs_all.B [ 27 ] ) , ( ( vtype *) & DES_bs_all.B [ 1 ] ) , ( ( vtype *) & DES_bs_all.B [ 17 ] ) );
		nm_DES_bs_b_s3 ( ( ( *( vtype *) & DES_bs_all.E.E [ 60 ] [ 0 ] ) ^ ( *( vtype *) & k [ 60 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 61 ] [ 0 ] ) ^ ( *( vtype *) & k [ 61 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 62 ] [ 0 ] ) ^ ( *( vtype *) & k [ 62 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 63 ] [ 0 ] ) ^ ( *( vtype *) & k [ 63 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 64 ] [ 0 ] ) ^ ( *( vtype *) & k [ 64 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 65 ] [ 0 ] ) ^ ( *( vtype *) & k [ 65 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 23 ] ) , ( ( vtype *) & DES_bs_all.B [ 15 ] ) , ( ( vtype *) & DES_bs_all.B [ 29 ] ) , ( ( vtype *) & DES_bs_all.B [ 5 ] ) );
		nm_DES_bs_b_s4 ( ( ( *( vtype *) & DES_bs_all.E.E [ 66 ] [ 0 ] ) ^ ( *( vtype *) & k [ 66 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 67 ] [ 0 ] ) ^ ( *( vtype *) & k [ 67 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 68 ] [ 0 ] ) ^ ( *( vtype *) & k [ 68 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 69 ] [ 0 ] ) ^ ( *( vtype *) & k [ 69 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 70 ] [ 0 ] ) ^ ( *( vtype *) & k [ 70 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 71 ] [ 0 ] ) ^ ( *( vtype *) & k [ 71 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 25 ] ) , ( ( vtype *) & DES_bs_all.B [ 19 ] ) , ( ( vtype *) & DES_bs_all.B [ 9 ] ) , ( ( vtype *) & DES_bs_all.B [ 0 ] ) );
		nm_DES_bs_b_s5 ( ( ( *( vtype *) & DES_bs_all.E.E [ 72 ] [ 0 ] ) ^ ( *( vtype *) & k [ 72 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 73 ] [ 0 ] ) ^ ( *( vtype *) & k [ 73 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 74 ] [ 0 ] ) ^ ( *( vtype *) & k [ 74 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 75 ] [ 0 ] ) ^ ( *( vtype *) & k [ 75 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 76 ] [ 0 ] ) ^ ( *( vtype *) & k [ 76 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 77 ] [ 0 ] ) ^ ( *( vtype *) & k [ 77 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 7 ] ) , ( ( vtype *) & DES_bs_all.B [ 13 ] ) , ( ( vtype *) & DES_bs_all.B [ 24 ] ) , ( ( vtype *) & DES_bs_all.B [ 2 ] ) );
		nm_DES_bs_b_s6 ( ( ( *( vtype *) & DES_bs_all.E.E [ 78 ] [ 0 ] ) ^ ( *( vtype *) & k [ 78 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 79 ] [ 0 ] ) ^ ( *( vtype *) & k [ 79 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 80 ] [ 0 ] ) ^ ( *( vtype *) & k [ 80 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 81 ] [ 0 ] ) ^ ( *( vtype *) & k [ 81 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 82 ] [ 0 ] ) ^ ( *( vtype *) & k [ 82 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 83 ] [ 0 ] ) ^ ( *( vtype *) & k [ 83 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 3 ] ) , ( ( vtype *) & DES_bs_all.B [ 28 ] ) , ( ( vtype *) & DES_bs_all.B [ 10 ] ) , ( ( vtype *) & DES_bs_all.B [ 18 ] ) );
		nm_DES_bs_b_s7 ( ( ( *( vtype *) & DES_bs_all.E.E [ 84 ] [ 0 ] ) ^ ( *( vtype *) & k [ 84 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 85 ] [ 0 ] ) ^ ( *( vtype *) & k [ 85 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 86 ] [ 0 ] ) ^ ( *( vtype *) & k [ 86 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 87 ] [ 0 ] ) ^ ( *( vtype *) & k [ 87 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 88 ] [ 0 ] ) ^ ( *( vtype *) & k [ 88 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 89 ] [ 0 ] ) ^ ( *( vtype *) & k [ 89 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 31 ] ) , ( ( vtype *) & DES_bs_all.B [ 11 ] ) , ( ( vtype *) & DES_bs_all.B [ 21 ] ) , ( ( vtype *) & DES_bs_all.B [ 6 ] ) );
		nm_DES_bs_b_s8 ( ( ( *( vtype *) & DES_bs_all.E.E [ 90 ] [ 0 ] ) ^ ( *( vtype *) & k [ 90 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 91 ] [ 0 ] ) ^ ( *( vtype *) & k [ 91 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 92 ] [ 0 ] ) ^ ( *( vtype *) & k [ 92 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 93 ] [ 0 ] ) ^ ( *( vtype *) & k [ 93 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 94 ] [ 0 ] ) ^ ( *( vtype *) & k [ 94 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.E.E [ 95 ] [ 0 ] ) ^ ( *( vtype *) & k [ 95 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 4 ] ) , ( ( vtype *) & DES_bs_all.B [ 26 ] ) , ( ( vtype *) & DES_bs_all.B [ 14 ] ) , ( ( vtype *) & DES_bs_all.B [ 20 ] ) );
		k += 96;
		if ( -- rounds_and_swapped ) goto start;
		k -= ( 0x300 + 48 );
		rounds_and_swapped = 0x108;
		if ( -- iterations ) goto swap;
		return;
		next : k -= ( 0x300 - 48 );
		rounds_and_swapped = 8;
		if ( -- iterations ) goto start;
		return;
		finalize_keys : DES_bs_all.keys_changed = 0;
		nm_DES_bs_b_DES_bs_finalize_keys ( );
		goto body;
	}

}

static __attribute__ ( ( always_inline ) ) void nm_DES_bs_b_DES_bs_finalize_keys_LM ( void ) {
	{
		long *kp = ( long *) & DES_bs_all.K [ 0 ];
		int ic;
		for ( ic = 0;
		ic < 7;
		ic ++ ) {
			long *vp = ( long *) & DES_bs_all.xkeys.v [ ic ] [ 0 ];
			vtype v0 = *( vtype *) & vp [ 0 ];
			vtype v1 = *( vtype *) & vp [ 1 ];
			vtype v2 = *( vtype *) & vp [ 2 ];
			vtype v3 = *( vtype *) & vp [ 3 ];
			vtype v4 = *( vtype *) & vp [ 4 ];
			vtype v5 = *( vtype *) & vp [ 5 ];
			vtype v6 = *( vtype *) & vp [ 6 ];
			vtype v7 = *( vtype *) & vp [ 7 ];
			{
				vtype m = 0x0101010101010101UL , va , vb , tmp;
				( va ) = ( v0 ) & ( m );
				( tmp ) = ( v1 ) & ( m );
				( ( vb ) ) = ( ( tmp ) ) << ( 1 );
				( tmp ) = ( v2 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( tmp ) = ( tmp ) << ( 3 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( tmp ) = ( tmp ) << ( 4 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( tmp ) = ( tmp ) << ( 5 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( tmp ) = ( tmp ) << ( 6 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 7 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 1 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 1 );
				( vb ) = ( v1 ) & ( m );
				( tmp ) = ( v2 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( tmp ) = ( tmp ) << ( 3 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( tmp ) = ( tmp ) << ( 4 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( tmp ) = ( tmp ) << ( 5 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 6 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 2 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 2 );
				( tmp ) = ( v1 ) & ( m );
				( vb ) = ( tmp ) >> ( 1 );
				( tmp ) = ( v2 ) & ( m );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( tmp ) = ( tmp ) << ( 3 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( tmp ) = ( tmp ) << ( 4 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 5 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 3 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 3 );
				( tmp ) = ( v1 ) & ( m );
				( vb ) = ( tmp ) >> ( 2 );
				( tmp ) = ( v2 ) & ( m );
				( tmp ) = ( tmp ) >> ( 1 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( tmp ) = ( tmp ) << ( 3 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 4 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 4 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 4 );
				( tmp ) = ( v1 ) & ( m );
				( vb ) = ( tmp ) >> ( 3 );
				( tmp ) = ( v2 ) & ( m );
				( tmp ) = ( tmp ) >> ( 2 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( tmp ) = ( tmp ) >> ( 1 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 3 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 5 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 5 );
				( tmp ) = ( v1 ) & ( m );
				( vb ) = ( tmp ) >> ( 4 );
				( tmp ) = ( v2 ) & ( m );
				( tmp ) = ( tmp ) >> ( 3 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( tmp ) = ( tmp ) >> ( 2 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( tmp ) = ( tmp ) >> ( 1 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( tmp ) = ( tmp ) << ( 2 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 6 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 6 );
				( tmp ) = ( v1 ) & ( m );
				( vb ) = ( tmp ) >> ( 5 );
				( tmp ) = ( v2 ) & ( m );
				( tmp ) = ( tmp ) >> ( 4 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( tmp ) = ( tmp ) >> ( 3 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( tmp ) = ( tmp ) >> ( 2 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( tmp ) = ( tmp ) >> ( 1 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( ( tmp ) ) = ( ( tmp ) ) << ( 1 );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

			{
				vtype m = ( 0x0101010101010101UL << 7 ) , va , vb , tmp;
				( tmp ) = ( v0 ) & ( m );
				( va ) = ( tmp ) >> ( 7 );
				( tmp ) = ( v1 ) & ( m );
				( vb ) = ( tmp ) >> ( 6 );
				( tmp ) = ( v2 ) & ( m );
				( tmp ) = ( tmp ) >> ( 5 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v3 ) & ( m );
				( tmp ) = ( tmp ) >> ( 4 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v4 ) & ( m );
				( tmp ) = ( tmp ) >> ( 3 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v5 ) & ( m );
				( tmp ) = ( tmp ) >> ( 2 );
				( vb ) = ( vb ) | ( tmp );
				( tmp ) = ( v6 ) & ( m );
				( tmp ) = ( tmp ) >> ( 1 );
				( va ) = ( va ) | ( tmp );
				( tmp ) = ( v7 ) & ( m );
				( vb ) = ( vb ) | ( tmp );
				( *( vtype *) kp ) = ( va ) | ( vb );
				kp ++;
			}

		}

	}

}

void DES_bs_crypt_LM ( int keys_count ) {
	{
		long **k;
		int rounds;
		{
			vtype z = 0 , o = ( ~ ( vtype ) 0 );
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 0 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 1 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 2 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 3 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 4 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 5 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 6 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 0 ] ) + ( 7 ) ) ) = ( z );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 0 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 1 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 2 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 3 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 4 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 5 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 6 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 8 ] ) + ( 7 ) ) ) = ( z );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 0 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 1 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 2 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 3 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 4 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 5 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 6 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 16 ] ) + ( 7 ) ) ) = ( o );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 0 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 1 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 2 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 3 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 4 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 5 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 6 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 24 ] ) + ( 7 ) ) ) = ( o );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 0 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 1 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 2 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 3 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 4 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 5 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 6 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 32 ] ) + ( 7 ) ) ) = ( o );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 0 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 1 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 2 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 3 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 4 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 5 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 6 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 40 ] ) + ( 7 ) ) ) = ( z );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 0 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 1 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 2 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 3 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 4 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 5 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 6 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 48 ] ) + ( 7 ) ) ) = ( z );
			}

			;
			{
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 0 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 1 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 2 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 3 ) ) ) = ( z );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 4 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 5 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 6 ) ) ) = ( o );
				*( ( vtype *) ( ( long *) & ( DES_bs_all.B [ 56 ] ) + ( 7 ) ) ) = ( o );
			}

			;
		}

		nm_DES_bs_b_DES_bs_finalize_keys_LM ( );
		k = DES_bs_all.KS.p;
		rounds = 8;
		do {
			nm_DES_bs_b_s1 ( ( ( *( vtype *) & DES_bs_all.B [ 31 ] ) ^ ( *( vtype *) & k [ 0 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 0 ] ) ^ ( *( vtype *) & k [ 1 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 1 ] ) ^ ( *( vtype *) & k [ 2 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 2 ] ) ^ ( *( vtype *) & k [ 3 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 3 ] ) ^ ( *( vtype *) & k [ 4 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 4 ] ) ^ ( *( vtype *) & k [ 5 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 40 ] ) , ( ( vtype *) & DES_bs_all.B [ 48 ] ) , ( ( vtype *) & DES_bs_all.B [ 54 ] ) , ( ( vtype *) & DES_bs_all.B [ 62 ] ) );
			nm_DES_bs_b_s2 ( ( ( *( vtype *) & DES_bs_all.B [ 3 ] ) ^ ( *( vtype *) & k [ 6 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 4 ] ) ^ ( *( vtype *) & k [ 7 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 5 ] ) ^ ( *( vtype *) & k [ 8 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 6 ] ) ^ ( *( vtype *) & k [ 9 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 7 ] ) ^ ( *( vtype *) & k [ 10 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 8 ] ) ^ ( *( vtype *) & k [ 11 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 44 ] ) , ( ( vtype *) & DES_bs_all.B [ 59 ] ) , ( ( vtype *) & DES_bs_all.B [ 33 ] ) , ( ( vtype *) & DES_bs_all.B [ 49 ] ) );
			nm_DES_bs_b_s3 ( ( ( *( vtype *) & DES_bs_all.B [ 7 ] ) ^ ( *( vtype *) & k [ 12 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 8 ] ) ^ ( *( vtype *) & k [ 13 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 9 ] ) ^ ( *( vtype *) & k [ 14 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 10 ] ) ^ ( *( vtype *) & k [ 15 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 11 ] ) ^ ( *( vtype *) & k [ 16 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 12 ] ) ^ ( *( vtype *) & k [ 17 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 55 ] ) , ( ( vtype *) & DES_bs_all.B [ 47 ] ) , ( ( vtype *) & DES_bs_all.B [ 61 ] ) , ( ( vtype *) & DES_bs_all.B [ 37 ] ) );
			nm_DES_bs_b_s4 ( ( ( *( vtype *) & DES_bs_all.B [ 11 ] ) ^ ( *( vtype *) & k [ 18 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 12 ] ) ^ ( *( vtype *) & k [ 19 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 13 ] ) ^ ( *( vtype *) & k [ 20 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 14 ] ) ^ ( *( vtype *) & k [ 21 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 15 ] ) ^ ( *( vtype *) & k [ 22 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 16 ] ) ^ ( *( vtype *) & k [ 23 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 57 ] ) , ( ( vtype *) & DES_bs_all.B [ 51 ] ) , ( ( vtype *) & DES_bs_all.B [ 41 ] ) , ( ( vtype *) & DES_bs_all.B [ 32 ] ) );
			nm_DES_bs_b_s5 ( ( ( *( vtype *) & DES_bs_all.B [ 15 ] ) ^ ( *( vtype *) & k [ 24 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 16 ] ) ^ ( *( vtype *) & k [ 25 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 17 ] ) ^ ( *( vtype *) & k [ 26 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 18 ] ) ^ ( *( vtype *) & k [ 27 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 19 ] ) ^ ( *( vtype *) & k [ 28 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 20 ] ) ^ ( *( vtype *) & k [ 29 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 39 ] ) , ( ( vtype *) & DES_bs_all.B [ 45 ] ) , ( ( vtype *) & DES_bs_all.B [ 56 ] ) , ( ( vtype *) & DES_bs_all.B [ 34 ] ) );
			nm_DES_bs_b_s6 ( ( ( *( vtype *) & DES_bs_all.B [ 19 ] ) ^ ( *( vtype *) & k [ 30 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 20 ] ) ^ ( *( vtype *) & k [ 31 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 21 ] ) ^ ( *( vtype *) & k [ 32 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 22 ] ) ^ ( *( vtype *) & k [ 33 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 23 ] ) ^ ( *( vtype *) & k [ 34 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 24 ] ) ^ ( *( vtype *) & k [ 35 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 35 ] ) , ( ( vtype *) & DES_bs_all.B [ 60 ] ) , ( ( vtype *) & DES_bs_all.B [ 42 ] ) , ( ( vtype *) & DES_bs_all.B [ 50 ] ) );
			nm_DES_bs_b_s7 ( ( ( *( vtype *) & DES_bs_all.B [ 23 ] ) ^ ( *( vtype *) & k [ 36 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 24 ] ) ^ ( *( vtype *) & k [ 37 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 25 ] ) ^ ( *( vtype *) & k [ 38 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 26 ] ) ^ ( *( vtype *) & k [ 39 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 27 ] ) ^ ( *( vtype *) & k [ 40 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 28 ] ) ^ ( *( vtype *) & k [ 41 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 63 ] ) , ( ( vtype *) & DES_bs_all.B [ 43 ] ) , ( ( vtype *) & DES_bs_all.B [ 53 ] ) , ( ( vtype *) & DES_bs_all.B [ 38 ] ) );
			nm_DES_bs_b_s8 ( ( ( *( vtype *) & DES_bs_all.B [ 27 ] ) ^ ( *( vtype *) & k [ 42 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 28 ] ) ^ ( *( vtype *) & k [ 43 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 29 ] ) ^ ( *( vtype *) & k [ 44 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 30 ] ) ^ ( *( vtype *) & k [ 45 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 31 ] ) ^ ( *( vtype *) & k [ 46 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 0 ] ) ^ ( *( vtype *) & k [ 47 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 36 ] ) , ( ( vtype *) & DES_bs_all.B [ 58 ] ) , ( ( vtype *) & DES_bs_all.B [ 46 ] ) , ( ( vtype *) & DES_bs_all.B [ 52 ] ) );
			nm_DES_bs_b_s1 ( ( ( *( vtype *) & DES_bs_all.B [ 63 ] ) ^ ( *( vtype *) & k [ 48 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 32 ] ) ^ ( *( vtype *) & k [ 49 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 33 ] ) ^ ( *( vtype *) & k [ 50 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 34 ] ) ^ ( *( vtype *) & k [ 51 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 35 ] ) ^ ( *( vtype *) & k [ 52 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 36 ] ) ^ ( *( vtype *) & k [ 53 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 8 ] ) , ( ( vtype *) & DES_bs_all.B [ 16 ] ) , ( ( vtype *) & DES_bs_all.B [ 22 ] ) , ( ( vtype *) & DES_bs_all.B [ 30 ] ) );
			nm_DES_bs_b_s2 ( ( ( *( vtype *) & DES_bs_all.B [ 35 ] ) ^ ( *( vtype *) & k [ 54 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 36 ] ) ^ ( *( vtype *) & k [ 55 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 37 ] ) ^ ( *( vtype *) & k [ 56 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 38 ] ) ^ ( *( vtype *) & k [ 57 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 39 ] ) ^ ( *( vtype *) & k [ 58 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 40 ] ) ^ ( *( vtype *) & k [ 59 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 12 ] ) , ( ( vtype *) & DES_bs_all.B [ 27 ] ) , ( ( vtype *) & DES_bs_all.B [ 1 ] ) , ( ( vtype *) & DES_bs_all.B [ 17 ] ) );
			nm_DES_bs_b_s3 ( ( ( *( vtype *) & DES_bs_all.B [ 39 ] ) ^ ( *( vtype *) & k [ 60 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 40 ] ) ^ ( *( vtype *) & k [ 61 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 41 ] ) ^ ( *( vtype *) & k [ 62 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 42 ] ) ^ ( *( vtype *) & k [ 63 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 43 ] ) ^ ( *( vtype *) & k [ 64 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 44 ] ) ^ ( *( vtype *) & k [ 65 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 23 ] ) , ( ( vtype *) & DES_bs_all.B [ 15 ] ) , ( ( vtype *) & DES_bs_all.B [ 29 ] ) , ( ( vtype *) & DES_bs_all.B [ 5 ] ) );
			nm_DES_bs_b_s4 ( ( ( *( vtype *) & DES_bs_all.B [ 43 ] ) ^ ( *( vtype *) & k [ 66 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 44 ] ) ^ ( *( vtype *) & k [ 67 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 45 ] ) ^ ( *( vtype *) & k [ 68 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 46 ] ) ^ ( *( vtype *) & k [ 69 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 47 ] ) ^ ( *( vtype *) & k [ 70 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 48 ] ) ^ ( *( vtype *) & k [ 71 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 25 ] ) , ( ( vtype *) & DES_bs_all.B [ 19 ] ) , ( ( vtype *) & DES_bs_all.B [ 9 ] ) , ( ( vtype *) & DES_bs_all.B [ 0 ] ) );
			nm_DES_bs_b_s5 ( ( ( *( vtype *) & DES_bs_all.B [ 47 ] ) ^ ( *( vtype *) & k [ 72 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 48 ] ) ^ ( *( vtype *) & k [ 73 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 49 ] ) ^ ( *( vtype *) & k [ 74 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 50 ] ) ^ ( *( vtype *) & k [ 75 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 51 ] ) ^ ( *( vtype *) & k [ 76 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 52 ] ) ^ ( *( vtype *) & k [ 77 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 7 ] ) , ( ( vtype *) & DES_bs_all.B [ 13 ] ) , ( ( vtype *) & DES_bs_all.B [ 24 ] ) , ( ( vtype *) & DES_bs_all.B [ 2 ] ) );
			nm_DES_bs_b_s6 ( ( ( *( vtype *) & DES_bs_all.B [ 51 ] ) ^ ( *( vtype *) & k [ 78 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 52 ] ) ^ ( *( vtype *) & k [ 79 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 53 ] ) ^ ( *( vtype *) & k [ 80 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 54 ] ) ^ ( *( vtype *) & k [ 81 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 55 ] ) ^ ( *( vtype *) & k [ 82 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 56 ] ) ^ ( *( vtype *) & k [ 83 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 3 ] ) , ( ( vtype *) & DES_bs_all.B [ 28 ] ) , ( ( vtype *) & DES_bs_all.B [ 10 ] ) , ( ( vtype *) & DES_bs_all.B [ 18 ] ) );
			nm_DES_bs_b_s7 ( ( ( *( vtype *) & DES_bs_all.B [ 55 ] ) ^ ( *( vtype *) & k [ 84 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 56 ] ) ^ ( *( vtype *) & k [ 85 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 57 ] ) ^ ( *( vtype *) & k [ 86 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 58 ] ) ^ ( *( vtype *) & k [ 87 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 59 ] ) ^ ( *( vtype *) & k [ 88 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 60 ] ) ^ ( *( vtype *) & k [ 89 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 31 ] ) , ( ( vtype *) & DES_bs_all.B [ 11 ] ) , ( ( vtype *) & DES_bs_all.B [ 21 ] ) , ( ( vtype *) & DES_bs_all.B [ 6 ] ) );
			nm_DES_bs_b_s8 ( ( ( *( vtype *) & DES_bs_all.B [ 59 ] ) ^ ( *( vtype *) & k [ 90 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 60 ] ) ^ ( *( vtype *) & k [ 91 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 61 ] ) ^ ( *( vtype *) & k [ 92 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 62 ] ) ^ ( *( vtype *) & k [ 93 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 63 ] ) ^ ( *( vtype *) & k [ 94 ] [ 0 ] ) ) , ( ( *( vtype *) & DES_bs_all.B [ 32 ] ) ^ ( *( vtype *) & k [ 95 ] [ 0 ] ) ) , ( ( vtype *) & DES_bs_all.B [ 4 ] ) , ( ( vtype *) & DES_bs_all.B [ 26 ] ) , ( ( vtype *) & DES_bs_all.B [ 14 ] ) , ( ( vtype *) & DES_bs_all.B [ 20 ] ) );
			k += 96;
		}

		while ( -- rounds );
	}

}

DES_bs_combined __attribute__ ( ( aligned ( ( 4 *8 ) ) ) ) DES_bs_all;
static unsigned char DES_bs_DES_LM_KP [ 56 ] = {
	1 , 2 , 3 , 4 , 5 , 6 , 7 , 10 , 11 , 12 , 13 , 14 , 15 , 0 , 19 , 20 , 21 , 22 , 23 , 8 , 9 , 28 , 29 , 30 , 31 , 16 , 17 , 18 , 37 , 38 , 39 , 24 , 25 , 26 , 27 , 46 , 47 , 32 , 33 , 34 , 35 , 36 , 55 , 40 , 41 , 42 , 43 , 44 , 45 , 48 , 49 , 50 , 51 , 52 , 53 , 54 }

;
static unsigned char DES_bs_DES_LM_reverse [ 16 ] = {
	0 , 8 , 4 , 12 , 2 , 10 , 6 , 14 , 1 , 9 , 5 , 13 , 3 , 11 , 7 , 15 }

;
void DES_bs_init ( int LM , int cpt ) {
	long **k;
	int round , index , bit;
	int p , q , s;
	int c;
	{
		k = DES_bs_all.KS.p;
		s = 0;
		for ( round = 0;
		round < 16;
		round ++ ) {
			s += DES_ROT [ round ];
			for ( index = 0;
			index < 48;
			index ++ ) {
				p = DES_PC2 [ index ];
				q = p < 28 ? 0 : 28;
				p += s;
				while ( p >= 28 ) p -= 28;
				bit = DES_PC1 [ p + q ];
				bit ^= 070;
				bit -= bit >> 3;
				bit = 55 - bit;
				if ( LM ) bit = DES_bs_DES_LM_KP [ bit ];
				*k ++ = & DES_bs_all.K [ bit ];
			}

		}

		for ( index = 0;
		index < 32;
		index ++ ) DES_bs_all.pxkeys [ index ] = & DES_bs_all.xkeys.c [ 0 ] [ index & 7 ] [ index >> 3 ];
		if ( LM ) {
			for ( c = 0;
			c < 0x100;
			c ++ ) if ( c >= 'a' && c <= 'z' ) DES_bs_all.E.u [ c ] = c & ~ 0x20;
			else DES_bs_all.E.u [ c ] = c;
		}

		else {
			for ( index = 0;
			index < 48;
			index ++ ) DES_bs_all.Ens [ index ] = & DES_bs_all.B [ DES_E [ index ] ];
			DES_bs_all.salt = 0xffffff;
			DES_bs_set_salt ( 0 );
		}

		memset ( &DES_bs_all.zero , 0 , sizeof ( DES_bs_all.zero ) );
		memset ( &DES_bs_all.ones , - 1 , sizeof ( DES_bs_all.ones ) );
		for ( bit = 0;
		bit < 8;
		bit ++ ) memset ( &DES_bs_all.masks [ bit ] , 1 << bit , sizeof ( DES_bs_all.masks [ bit ] ) );
	}

}

void DES_bs_set_key ( char *key , int index ) {
	unsigned char *dst;
	;
	dst = DES_bs_all.pxkeys [ index ];
	DES_bs_all.keys_changed = 1;
	if ( ! key [ 0 ] ) goto fill8;
	*dst = key [ 0 ];
	*( dst + sizeof ( long ) *8 ) = key [ 1 ];
	*( dst + sizeof ( long ) *8 *2 ) = key [ 2 ];
	if ( ! key [ 1 ] ) goto fill6;
	if ( ! key [ 2 ] ) goto fill5;
	*( dst + sizeof ( long ) *8 *3 ) = key [ 3 ];
	*( dst + sizeof ( long ) *8 *4 ) = key [ 4 ];
	if ( ! key [ 3 ] ) goto fill4;
	if ( ! key [ 4 ] || ! key [ 5 ] ) goto fill3;
	*( dst + sizeof ( long ) *8 *5 ) = key [ 5 ];
	if ( ! key [ 6 ] ) goto fill2;
	*( dst + sizeof ( long ) *8 *6 ) = key [ 6 ];
	*( dst + sizeof ( long ) *8 *7 ) = key [ 7 ];
	return;
	fill8 : dst [ 0 ] = 0;
	dst [ sizeof ( long ) *8 ] = 0;
	fill6 : dst [ sizeof ( long ) *8 *2 ] = 0;
	fill5 : dst [ sizeof ( long ) *8 *3 ] = 0;
	fill4 : dst [ sizeof ( long ) *8 *4 ] = 0;
	fill3 : dst [ sizeof ( long ) *8 *5 ] = 0;
	fill2 : dst [ sizeof ( long ) *8 *6 ] = 0;
	dst [ sizeof ( long ) *8 *7 ] = 0;
}

void DES_bs_set_key_LM ( char *key , int index ) {
	unsigned long c;
	unsigned char *dst;
	;
	dst = DES_bs_all.pxkeys [ index ];
	c = ( unsigned char ) key [ 0 ];
	if ( ! c ) goto fill7;
	*dst = DES_bs_all.E.u [ c ];
	c = ( unsigned char ) key [ 1 ];
	if ( ! c ) goto fill6;
	*( dst + sizeof ( long ) *8 ) = DES_bs_all.E.u [ c ];
	c = ( unsigned char ) key [ 2 ];
	if ( ! c ) goto fill5;
	*( dst + sizeof ( long ) *8 *2 ) = DES_bs_all.E.u [ c ];
	c = ( unsigned char ) key [ 3 ];
	if ( ! c ) goto fill4;
	*( dst + sizeof ( long ) *8 *3 ) = DES_bs_all.E.u [ c ];
	c = ( unsigned char ) key [ 4 ];
	if ( ! c ) goto fill3;
	*( dst + sizeof ( long ) *8 *4 ) = DES_bs_all.E.u [ c ];
	c = ( unsigned char ) key [ 5 ];
	if ( ! c ) goto fill2;
	*( dst + sizeof ( long ) *8 *5 ) = DES_bs_all.E.u [ c ];
	c = ( unsigned char ) key [ 6 ];
	*( dst + sizeof ( long ) *8 *6 ) = DES_bs_all.E.u [ c ];
	return;
	fill7 : dst [ 0 ] = 0;
	fill6 : dst [ sizeof ( long ) *8 ] = 0;
	fill5 : dst [ sizeof ( long ) *8 *2 ] = 0;
	fill4 : dst [ sizeof ( long ) *8 *3 ] = 0;
	fill3 : dst [ sizeof ( long ) *8 *4 ] = 0;
	fill2 : dst [ sizeof ( long ) *8 *5 ] = 0;
	dst [ sizeof ( long ) *8 *6 ] = 0;
}

static long *nm_DES_bs_DES_bs_get_binary_raw ( long *raw , int count ) {
	static long out [ 2 ];
	count &= 1;
	out [ count ] = raw [ 0 ];
	out [ count ^ 1 ] = raw [ 1 ];
	return out;
}

long *DES_bs_get_binary ( char *ciphertext ) {
	return nm_DES_bs_DES_bs_get_binary_raw ( DES_raw_get_binary ( ciphertext ) , DES_raw_get_count ( ciphertext ) );
}

long *DES_bs_get_binary_LM ( char *ciphertext ) {
	long block [ 2 ] , value;
	int l , h;
	int index;
	block [ 0 ] = block [ 1 ] = 0;
	for ( index = 0;
	index < 16;
	index += 2 ) {
		l = atoi16 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ index ] ) ) ];
		h = atoi16 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ index + 1 ] ) ) ];
		value = DES_bs_DES_LM_reverse [ l ] | ( DES_bs_DES_LM_reverse [ h ] << 4 );
		block [ index >> 3 ] |= value << ( ( index << 2 ) & 0x18 );
	}

	return nm_DES_bs_DES_bs_get_binary_raw ( DES_do_IP ( block ) , 1 );
}

static __attribute__ ( ( always_inline ) ) int nm_DES_bs_DES_bs_get_hash ( int index , int count ) {
	int result;
	long *b;
	int depth;
	;
	depth = index >> 3;
	index &= 7;
	b = ( long *) ( ( unsigned char *) & DES_bs_all.B [ 0 ] + depth );
	result = ( ( ( unsigned int ) *( unsigned char *) & b [ ( 0 ) ] >> index ) & 1 );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 1 ) ] >> index ) & 1 ) << ( 1 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 2 ) ] >> index ) & 1 ) << ( 2 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 3 ) ] >> index ) & 1 ) << ( 3 ) );
	if ( count == 4 ) return result;
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 4 ) ] >> index ) & 1 ) << ( 4 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 5 ) ] >> index ) & 1 ) << ( 5 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 6 ) ] >> index ) & 1 ) << ( 6 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 7 ) ] >> index ) & 1 ) << ( 7 ) );
	if ( count == 8 ) return result;
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 8 ) ] >> index ) & 1 ) << ( 8 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 9 ) ] >> index ) & 1 ) << ( 9 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 10 ) ] >> index ) & 1 ) << ( 10 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 11 ) ] >> index ) & 1 ) << ( 11 ) );
	if ( count == 12 ) return result;
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 12 ) ] >> index ) & 1 ) << ( 12 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 13 ) ] >> index ) & 1 ) << ( 13 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 14 ) ] >> index ) & 1 ) << ( 14 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 15 ) ] >> index ) & 1 ) << ( 15 ) );
	if ( count == 16 ) return result;
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 16 ) ] >> index ) & 1 ) << ( 16 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 17 ) ] >> index ) & 1 ) << ( 17 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 18 ) ] >> index ) & 1 ) << ( 18 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 19 ) ] >> index ) & 1 ) << ( 19 ) );
	if ( count == 20 ) return result;
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 20 ) ] >> index ) & 1 ) << ( 20 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 21 ) ] >> index ) & 1 ) << ( 21 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 22 ) ] >> index ) & 1 ) << ( 22 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 23 ) ] >> index ) & 1 ) << ( 23 ) );
	if ( count == 24 ) return result;
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 24 ) ] >> index ) & 1 ) << ( 24 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 25 ) ] >> index ) & 1 ) << ( 25 ) );
	result |= ( ( ( ( unsigned int ) *( unsigned char *) & b [ ( 26 ) ] >> index ) & 1 ) << ( 26 ) );
	return result;
}

int DES_bs_get_hash_0 ( int index ) {
	return nm_DES_bs_DES_bs_get_hash ( index , 4 );
}

int DES_bs_get_hash_1 ( int index ) {
	return nm_DES_bs_DES_bs_get_hash ( index , 8 );
}

int DES_bs_get_hash_2 ( int index ) {
	return nm_DES_bs_DES_bs_get_hash ( index , 12 );
}

int DES_bs_get_hash_3 ( int index ) {
	return nm_DES_bs_DES_bs_get_hash ( index , 16 );
}

int DES_bs_get_hash_4 ( int index ) {
	return nm_DES_bs_DES_bs_get_hash ( index , 20 );
}

int DES_bs_get_hash_5 ( int index ) {
	return nm_DES_bs_DES_bs_get_hash ( index , 24 );
}

int DES_bs_get_hash_6 ( int index ) {
	return nm_DES_bs_DES_bs_get_hash ( index , 27 );
}

int DES_bs_cmp_all ( long *binary , int count ) {
	long value , mask;
	int bit;
	long *b;
	{
		value = binary [ 0 ];
		b = ( long *) & DES_bs_all.B [ 0 ];
		mask = b [ 0 ] ^ - ( value & 1 );
		mask |= b [ 1 ] ^ - ( ( value >> 1 ) & 1 );
		if ( mask == ~ ( long ) 0 ) goto next_depth;
		mask |= b [ 2 ] ^ - ( ( value >> 2 ) & 1 );
		mask |= b [ 3 ] ^ - ( ( value >> 3 ) & 1 );
		if ( mask == ~ ( long ) 0 ) goto next_depth;
		value >>= 4;
		b += 4;
		for ( bit = 4;
		bit < 32;
		bit += 2 ) {
			mask |= b [ 0 ] ^ - ( value & 1 );
			if ( mask == ~ ( long ) 0 ) goto next_depth;
			mask |= b [ 1 ] ^ - ( ( value >> 1 ) & 1 );
			if ( mask == ~ ( long ) 0 ) goto next_depth;
			value >>= 2;
			b += 2;
		}

		return 1;
		next_depth :;
	}

	return 0;
}

int DES_bs_cmp_one ( long *binary , int count , int index ) {
	int bit;
	long *b;
	int depth;
	;
	depth = index >> 3;
	index &= 7;
	b = ( long *) ( ( unsigned char *) & DES_bs_all.B [ 0 ] + depth );
	for ( bit = 0;
	bit < 31;
	bit ++ , b ++ ) if ( ( ( ( unsigned long ) *( unsigned char *) & b [ 0 ] >> index ) ^ ( binary [ 0 ] >> bit ) ) & 1 ) return 0;
	for (;
	bit < count;
	bit ++ , b ++ ) if ( ( ( ( unsigned long ) *( unsigned char *) & b [ 0 ] >> index ) ^ ( binary [ bit >> 5 ] >> ( bit & 0x1F ) ) ) & 1 ) return 0;
	return 1;
}

static struct fmt_tests DES_fmt_tests [ ] = {
	{
		"CCNf8Sbh3HDfQ" , "U*U*U*U*" 	}

	, {
		"CCX.K.MFy4Ois" , "U*U***U" 	}

	, {
		"CC4rMpbg9AMZ." , "U*U***U*" 	}

	, {
		"XXxzOu6maQKqQ" , "*U*U*U*U" 	}

	, {
		"SDbsugeBiC58A" , "" 	}

	, {
		( ( void *) 0 ) , ( ( void *) 0 ) 	}

}

;
static void nm_DES_fmt_init ( void ) {
	DES_bs_init ( 0 , 1 );
}

static int nm_DES_fmt_valid ( char *ciphertext ) {
	char *pos;
	if ( ! ciphertext [ 0 ] || ! ciphertext [ 1 ] ) return 0;
	for ( pos = & ciphertext [ 2 ];
	atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] != 0x7F;
	pos ++ );
	if ( *pos && *pos != ',' ) return 0;
	if ( atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *( pos - 1 ) ) ) ] & 3 ) return 0;
	switch ( pos - ciphertext ) {
		case 13 : return 1;
		case 24 : if ( atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 12 ] ) ) ] & 3 ) return 0;
		return 2;
		default : return 0;
	}

}

static char *nm_DES_fmt_split ( char *ciphertext , int index ) {
	static char out [ 14 ];
	if ( index ) {
		memcpy ( out , &ciphertext [ 2 ] , 2 );
		memcpy ( &out [ 2 ] , &ciphertext [ 13 ] , 11 );
	}

	else memcpy ( out , ciphertext , 13 );
	out [ 13 ] = 0;
	return out;
}

static void *nm_DES_fmt_salt ( char *ciphertext ) {
	static long out;
	out = DES_raw_get_salt ( ciphertext );
	return & out;
}

static int nm_DES_fmt_binary_hash_0 ( void *binary ) {
	return *( long *) binary & 0xF;
}

static int nm_DES_fmt_binary_hash_1 ( void *binary ) {
	return *( long *) binary & 0xFF;
}

static int nm_DES_fmt_binary_hash_2 ( void *binary ) {
	return *( long *) binary & 0xFFF;
}

static int nm_DES_fmt_binary_hash_3 ( void *binary ) {
	return *( long *) binary & 0xFFFF;
}

static int nm_DES_fmt_binary_hash_4 ( void *binary ) {
	return *( long *) binary & 0xFFFFF;
}

static int nm_DES_fmt_binary_hash_5 ( void *binary ) {
	return *( long *) binary & 0xFFFFFF;
}

static int nm_DES_fmt_binary_hash_6 ( void *binary ) {
	return *( long *) binary & 0x7FFFFFF;
}

static int nm_DES_fmt_salt_hash ( void *salt ) {
	return *( long *) salt & ( ( 1 << 12 ) - 1 );
}

static void nm_DES_fmt_set_salt ( void *salt ) {
	DES_bs_set_salt ( *( long *) salt );
}

static int nm_DES_fmt_cmp_one ( void *binary , int index ) {
	return DES_bs_cmp_one ( ( long *) binary , 32 , index );
}

static int nm_DES_fmt_cmp_exact ( char *source , int index ) {
	return DES_bs_cmp_one ( DES_bs_get_binary ( source ) , 64 , index );
}

static char *nm_DES_fmt_get_key ( int index ) {
	static char out [ 8 + 1 ];
	unsigned char *src;
	char *dst;
	;
	src = DES_bs_all.pxkeys [ index ];
	dst = out;
	while ( dst < & out [ 8 ] && ( *dst = *src ) ) {
		src += sizeof ( long ) *8;
		dst ++;
	}

	*dst = 0;
	return out;
}

struct fmt_main fmt_DES = {
	{
		"des" , "Traditional DES" , "Bitslice DES" , "" , 0 , 8 , 4 , 4 , 32 , 32 , 0x00000001 | 0x00010000 , DES_fmt_tests 	}

	, {
		nm_DES_fmt_init , nm_DES_fmt_valid , nm_DES_fmt_split , ( void *( *) ( char *) ) DES_bs_get_binary , nm_DES_fmt_salt , {
			nm_DES_fmt_binary_hash_0 , nm_DES_fmt_binary_hash_1 , nm_DES_fmt_binary_hash_2 , nm_DES_fmt_binary_hash_3 , nm_DES_fmt_binary_hash_4 , nm_DES_fmt_binary_hash_5 , nm_DES_fmt_binary_hash_6 		}

		, nm_DES_fmt_salt_hash , nm_DES_fmt_set_salt , DES_bs_set_key , nm_DES_fmt_get_key , fmt_default_clear_keys , DES_bs_crypt_25 , {
			DES_bs_get_hash_0 , DES_bs_get_hash_1 , DES_bs_get_hash_2 , DES_bs_get_hash_3 , DES_bs_get_hash_4 , DES_bs_get_hash_5 , DES_bs_get_hash_6 		}

		, ( int ( *) ( void *, int ) ) DES_bs_cmp_all , nm_DES_fmt_cmp_one , nm_DES_fmt_cmp_exact 	}

	, {
		0 	}

	, ( ( void *) 0 ) }

;
static union {
	double dummy;
	struct {
		DES_KS KS;
		long SPE_L [ 8 ] [ 64 ];
		long cache_bank_shift;
		long SPE_H [ 8 ] [ 64 ];
	}

	data;
}

__attribute__ ( ( aligned ( ( 4 *8 ) ) ) ) DES_std_DES_all;
static long DES_std_DES_SPE [ 8 ] [ 64 ] [ 2 ];
DES_binary DES_IV;
long DES_count;
DES_KS __attribute__ ( ( aligned ( ( 4 *8 ) ) ) ) DES_KS_current;
DES_KS __attribute__ ( ( aligned ( ( 4 *8 ) ) ) ) DES_KS_table [ 8 ] [ 128 ];
static int DES_std_DES_KS_updates;
static char DES_std_DES_key [ 16 ];
unsigned long *DES_out;
extern DES_KS DES_KS_table [ 8 ] [ 128 ];
static long DES_std_DES_IP_E [ 8 ] [ 16 ] [ 2 ] , DES_std_DES_C_FP [ 16 ] [ 16 ] [ 2 ];
static unsigned char DES_std_DES_S [ 8 ] [ 4 ] [ 16 ] = {
	{
		{
			14 , 4 , 13 , 1 , 2 , 15 , 11 , 8 , 3 , 10 , 6 , 12 , 5 , 9 , 0 , 7 		}

		, {
			0 , 15 , 7 , 4 , 14 , 2 , 13 , 1 , 10 , 6 , 12 , 11 , 9 , 5 , 3 , 8 		}

		, {
			4 , 1 , 14 , 8 , 13 , 6 , 2 , 11 , 15 , 12 , 9 , 7 , 3 , 10 , 5 , 0 		}

		, {
			15 , 12 , 8 , 2 , 4 , 9 , 1 , 7 , 5 , 11 , 3 , 14 , 10 , 0 , 6 , 13 		}

	}

	, {
		{
			15 , 1 , 8 , 14 , 6 , 11 , 3 , 4 , 9 , 7 , 2 , 13 , 12 , 0 , 5 , 10 		}

		, {
			3 , 13 , 4 , 7 , 15 , 2 , 8 , 14 , 12 , 0 , 1 , 10 , 6 , 9 , 11 , 5 		}

		, {
			0 , 14 , 7 , 11 , 10 , 4 , 13 , 1 , 5 , 8 , 12 , 6 , 9 , 3 , 2 , 15 		}

		, {
			13 , 8 , 10 , 1 , 3 , 15 , 4 , 2 , 11 , 6 , 7 , 12 , 0 , 5 , 14 , 9 		}

	}

	, {
		{
			10 , 0 , 9 , 14 , 6 , 3 , 15 , 5 , 1 , 13 , 12 , 7 , 11 , 4 , 2 , 8 		}

		, {
			13 , 7 , 0 , 9 , 3 , 4 , 6 , 10 , 2 , 8 , 5 , 14 , 12 , 11 , 15 , 1 		}

		, {
			13 , 6 , 4 , 9 , 8 , 15 , 3 , 0 , 11 , 1 , 2 , 12 , 5 , 10 , 14 , 7 		}

		, {
			1 , 10 , 13 , 0 , 6 , 9 , 8 , 7 , 4 , 15 , 14 , 3 , 11 , 5 , 2 , 12 		}

	}

	, {
		{
			7 , 13 , 14 , 3 , 0 , 6 , 9 , 10 , 1 , 2 , 8 , 5 , 11 , 12 , 4 , 15 		}

		, {
			13 , 8 , 11 , 5 , 6 , 15 , 0 , 3 , 4 , 7 , 2 , 12 , 1 , 10 , 14 , 9 		}

		, {
			10 , 6 , 9 , 0 , 12 , 11 , 7 , 13 , 15 , 1 , 3 , 14 , 5 , 2 , 8 , 4 		}

		, {
			3 , 15 , 0 , 6 , 10 , 1 , 13 , 8 , 9 , 4 , 5 , 11 , 12 , 7 , 2 , 14 		}

	}

	, {
		{
			2 , 12 , 4 , 1 , 7 , 10 , 11 , 6 , 8 , 5 , 3 , 15 , 13 , 0 , 14 , 9 		}

		, {
			14 , 11 , 2 , 12 , 4 , 7 , 13 , 1 , 5 , 0 , 15 , 10 , 3 , 9 , 8 , 6 		}

		, {
			4 , 2 , 1 , 11 , 10 , 13 , 7 , 8 , 15 , 9 , 12 , 5 , 6 , 3 , 0 , 14 		}

		, {
			11 , 8 , 12 , 7 , 1 , 14 , 2 , 13 , 6 , 15 , 0 , 9 , 10 , 4 , 5 , 3 		}

	}

	, {
		{
			12 , 1 , 10 , 15 , 9 , 2 , 6 , 8 , 0 , 13 , 3 , 4 , 14 , 7 , 5 , 11 		}

		, {
			10 , 15 , 4 , 2 , 7 , 12 , 9 , 5 , 6 , 1 , 13 , 14 , 0 , 11 , 3 , 8 		}

		, {
			9 , 14 , 15 , 5 , 2 , 8 , 12 , 3 , 7 , 0 , 4 , 10 , 1 , 13 , 11 , 6 		}

		, {
			4 , 3 , 2 , 12 , 9 , 5 , 15 , 10 , 11 , 14 , 1 , 7 , 6 , 0 , 8 , 13 		}

	}

	, {
		{
			4 , 11 , 2 , 14 , 15 , 0 , 8 , 13 , 3 , 12 , 9 , 7 , 5 , 10 , 6 , 1 		}

		, {
			13 , 0 , 11 , 7 , 4 , 9 , 1 , 10 , 14 , 3 , 5 , 12 , 2 , 15 , 8 , 6 		}

		, {
			1 , 4 , 11 , 13 , 12 , 3 , 7 , 14 , 10 , 15 , 6 , 8 , 0 , 5 , 9 , 2 		}

		, {
			6 , 11 , 13 , 8 , 1 , 4 , 10 , 7 , 9 , 5 , 0 , 15 , 14 , 2 , 3 , 12 		}

	}

	, {
		{
			13 , 2 , 8 , 4 , 6 , 15 , 11 , 1 , 10 , 9 , 3 , 14 , 5 , 0 , 12 , 7 		}

		, {
			1 , 15 , 13 , 8 , 10 , 3 , 7 , 4 , 12 , 5 , 6 , 11 , 0 , 14 , 9 , 2 		}

		, {
			7 , 11 , 4 , 1 , 9 , 12 , 14 , 2 , 0 , 6 , 10 , 13 , 15 , 3 , 5 , 8 		}

		, {
			2 , 1 , 14 , 7 , 4 , 10 , 8 , 13 , 15 , 12 , 9 , 0 , 3 , 5 , 6 , 11 		}

	}

}

;
static unsigned char DES_std_DES_P [ 32 ] = {
	15 , 6 , 19 , 20 , 28 , 11 , 27 , 16 , 0 , 14 , 22 , 25 , 4 , 17 , 30 , 9 , 1 , 7 , 23 , 13 , 31 , 26 , 2 , 8 , 18 , 12 , 29 , 5 , 21 , 10 , 3 , 24 }

;
unsigned char DES_E [ 48 ] = {
	31 , 0 , 1 , 2 , 3 , 4 , 3 , 4 , 5 , 6 , 7 , 8 , 7 , 8 , 9 , 10 , 11 , 12 , 11 , 12 , 13 , 14 , 15 , 16 , 15 , 16 , 17 , 18 , 19 , 20 , 19 , 20 , 21 , 22 , 23 , 24 , 23 , 24 , 25 , 26 , 27 , 28 , 27 , 28 , 29 , 30 , 31 , 0 }

;
static unsigned char DES_std_DES_IP [ 64 ] = {
	57 , 49 , 41 , 33 , 25 , 17 , 9 , 1 , 59 , 51 , 43 , 35 , 27 , 19 , 11 , 3 , 61 , 53 , 45 , 37 , 29 , 21 , 13 , 5 , 63 , 55 , 47 , 39 , 31 , 23 , 15 , 7 , 56 , 48 , 40 , 32 , 24 , 16 , 8 , 0 , 58 , 50 , 42 , 34 , 26 , 18 , 10 , 2 , 60 , 52 , 44 , 36 , 28 , 20 , 12 , 4 , 62 , 54 , 46 , 38 , 30 , 22 , 14 , 6 }

;
static unsigned char DES_std_DES_C [ 64 ] = {
	0 , 1 , 2 , 3 , 16 , 17 , 18 , 19 , 4 , 5 , 6 , 7 , 20 , 21 , 22 , 23 , 8 , 9 , 10 , 11 , 24 , 25 , 26 , 27 , 12 , 13 , 14 , 15 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 48 , 49 , 50 , 51 , 36 , 37 , 38 , 39 , 52 , 53 , 54 , 55 , 40 , 41 , 42 , 43 , 56 , 57 , 58 , 59 , 44 , 45 , 46 , 47 , 60 , 61 , 62 , 63 }

;
unsigned char DES_PC1 [ 56 ] = {
	56 , 48 , 40 , 32 , 24 , 16 , 8 , 0 , 57 , 49 , 41 , 33 , 25 , 17 , 9 , 1 , 58 , 50 , 42 , 34 , 26 , 18 , 10 , 2 , 59 , 51 , 43 , 35 , 62 , 54 , 46 , 38 , 30 , 22 , 14 , 6 , 61 , 53 , 45 , 37 , 29 , 21 , 13 , 5 , 60 , 52 , 44 , 36 , 28 , 20 , 12 , 4 , 27 , 19 , 11 , 3 }

;
unsigned char DES_ROT [ 16 ] = {
	1 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 1 , 2 , 2 , 2 , 2 , 2 , 2 , 1 }

;
unsigned char DES_PC2 [ 48 ] = {
	13 , 16 , 10 , 23 , 0 , 4 , 2 , 27 , 14 , 5 , 20 , 9 , 22 , 18 , 11 , 3 , 25 , 7 , 15 , 6 , 26 , 19 , 12 , 1 , 40 , 51 , 30 , 36 , 46 , 54 , 29 , 39 , 50 , 44 , 32 , 47 , 43 , 48 , 38 , 55 , 33 , 52 , 45 , 41 , 49 , 35 , 28 , 31 }

;
static void nm_DES_std_init_SPE ( void ) {
	int box , index , row , column , bit;
	unsigned int mask , l , h;
	for ( box = 0;
	box < 8;
	box ++ ) for ( index = 0;
	index < 64;
	index ++ ) {
		row = ( ( index & 1 ) << 1 ) | ( index >> 5 );
		column = ( ( ( index >> 1 ) & 1 ) << 3 ) | ( ( ( index >> 2 ) & 1 ) << 2 ) | ( ( ( index >> 3 ) & 1 ) << 1 ) | ( ( index >> 4 ) & 1 );
		mask = ( long ) DES_std_DES_S [ box ] [ row ] [ column ] << ( ( 7 - box ) << 2 );
		h = l = 0;
		for ( bit = 0;
		bit < 24;
		bit ++ ) {
			if ( ( ( unsigned int ) 0x80000000 >> DES_std_DES_P [ ( ( unsigned int ) ( unsigned char ) ( DES_E [ bit ] ) ) ] ) & mask ) l |= 1 << bit;
			if ( ( ( unsigned int ) 0x80000000 >> DES_std_DES_P [ ( ( unsigned int ) ( unsigned char ) ( DES_E [ bit + 24 ] ) ) ] ) & mask ) h |= 1 << bit;
		}

		l = ( ( ( l ) & 077 ) | ( ( ( l ) & 07700 ) << 2 ) | ( ( ( l ) & 0770000 ) << 4 ) | ( ( ( l ) & 077000000 ) << 6 ) );
		h = ( ( ( h ) & 077 ) | ( ( ( h ) & 07700 ) << 2 ) | ( ( ( h ) & 0770000 ) << 4 ) | ( ( ( h ) & 077000000 ) << 6 ) );
		DES_std_DES_SPE [ box ] [ index ] [ 0 ] = ( ( l ) << 2 );
		DES_std_DES_SPE [ box ] [ index ] [ 1 ] = ( ( h ) << 2 );
	}

}

static void nm_DES_std_init_IP_E ( void ) {
	int src , dst , dst1 , dst2;
	int chunk , mask , value;
	memset ( DES_std_DES_IP_E , 0 , sizeof ( DES_std_DES_IP_E ) );
	for ( dst1 = 0;
	dst1 < 8;
	dst1 ++ ) for ( dst2 = 0;
	dst2 < 6;
	dst2 ++ ) {
		dst = ( dst1 << 3 ) + dst2;
		src = DES_std_DES_IP [ ( ( unsigned int ) ( unsigned char ) ( DES_E [ dst1 *6 + dst2 ] ) ) ];
		if ( src >= 32 ) src -= 32;
		else src --;
		src ^= 7;
		chunk = src >> 2;
		mask = 1 << ( src & 3 );
		for ( value = 0;
		value < 16;
		value ++ ) if ( value & mask ) DES_std_DES_IP_E [ chunk ] [ value ] [ dst >> 5 ] |= ( long ) 1 << ( dst & 0x1F );
	}

}

static void nm_DES_std_init_C_FP ( void ) {
	int src , dst;
	int chunk , mask , value;
	memset ( DES_std_DES_C_FP , 0 , sizeof ( DES_std_DES_C_FP ) );
	for ( src = 0;
	src < 64;
	src ++ ) {
		dst = DES_std_DES_IP [ ( ( unsigned int ) ( unsigned char ) ( DES_std_DES_C [ src ] ) ) ] ^ 7;
		chunk = src >> 2;
		mask = 1 << ( src & 3 );
		for ( value = 0;
		value < 16;
		value ++ ) if ( value & mask ) DES_std_DES_C_FP [ chunk ] [ value ] [ dst >> 5 ] |= ( long ) 1 << ( dst & 0x1F );
	}

}

static void nm_DES_std_init_KS ( void ) {
	int pos , chr , round , bit , ofs;
	unsigned char block [ 64 ];
	long value [ 2 ];
	int k , p , q , r , s;
	memset ( block , 0 , sizeof ( block ) );
	for ( pos = 0;
	pos < 8;
	pos ++ ) for ( chr = 0x7F;
	chr >= 0;
	chr -- ) {
		for ( bit = 0;
		bit < 7;
		bit ++ ) block [ ( pos << 3 ) + bit ] = ( chr >> ( 6 - bit ) ) & 1;
		s = 0;
		for ( round = 0;
		round < 16;
		round ++ ) {
			s += DES_ROT [ round ];
			value [ 0 ] = value [ 1 ] = 0;
			k = 0;
			for ( ofs = 0;
			ofs < 64;
			ofs += 8 ) for ( bit = 0;
			bit < 6;
			bit ++ ) {
				p = DES_PC2 [ k ++ ];
				q = p < 28 ? 0 : 28;
				p += s;
				while ( p >= 28 ) p -= 28;
				r = DES_PC1 [ p + q ];
				value [ ofs >> 5 ] |= ( long ) block [ r ] << ( ( ofs & 31 ) + bit );
			}

			DES_KS_table [ pos ] [ chr ] [ round << 1 ] = ( ( value [ 0 ] ) << 2 );
			DES_KS_table [ pos ] [ chr ] [ ( round << 1 ) + 1 ] = ( ( value [ 1 ] ) << 2 );
		}

	}

	DES_std_DES_KS_updates = 0;
	memset ( DES_std_DES_key , 0 , sizeof ( DES_std_DES_key ) );
	memcpy ( DES_KS_current , DES_KS_table , sizeof ( DES_KS ) );
}

void DES_std_init ( void ) {
	nm_DES_std_init_SPE ( );
	nm_DES_std_init_IP_E ( );
	nm_DES_std_init_C_FP ( );
	nm_DES_std_init_KS ( );
	memset ( DES_IV , 0 , sizeof ( DES_IV ) );
	DES_count = 25;
}

void DES_std_set_salt ( long salt ) {
	int box , index;
	long xor;
	long l , h;
	for ( box = 0;
	box < 8;
	box ++ ) for ( index = 0;
	index < 64;
	index ++ ) {
		l = DES_std_DES_SPE [ box ] [ index ] [ 0 ];
		h = DES_std_DES_SPE [ box ] [ index ] [ 1 ];
		xor = ( l ^ h ) & salt;
		DES_std_DES_all.data.SPE_L [ box ] [ index ] = l ^ xor;
		DES_std_DES_all.data.SPE_H [ box ] [ index ] = h ^ xor;
	}

}

void DES_raw_set_key ( char *key ) {
	int i;
	DES_KS *pos;
	long *value1;
	memcpy ( DES_KS_current , DES_KS_table [ 0 ] [ ( ( unsigned int ) ( unsigned char ) ( DES_std_DES_key [ 0 ] = key [ 0 ] & 0x7F ) ) ] , sizeof ( DES_KS ) );
	pos = ( DES_KS *) DES_KS_table [ 1 ] [ 0 ];
	for ( i = 1;
	i < 8;
	i ++ ) {
		{
			value1 = pos [ ( ( unsigned int ) ( unsigned char ) ( DES_std_DES_key [ i ] = key [ i ] & 0x7F ) ) ];
			DES_KS_current [ 0 ] ^= value1 [ 0 ];
			;
			DES_KS_current [ 0 + 1 ] ^= value1 [ 0 + 1 ];
			;
			DES_KS_current [ 0 + 2 ] ^= value1 [ 0 + 2 ];
			;
			DES_KS_current [ 0 + 3 ] ^= value1 [ 0 + 3 ];
			;
			;
			DES_KS_current [ 0 + 4 ] ^= value1 [ 0 + 4 ];
			;
			DES_KS_current [ 0 + 4 + 1 ] ^= value1 [ 0 + 4 + 1 ];
			;
			DES_KS_current [ 0 + 4 + 2 ] ^= value1 [ 0 + 4 + 2 ];
			;
			DES_KS_current [ 0 + 4 + 3 ] ^= value1 [ 0 + 4 + 3 ];
			;
			;
			DES_KS_current [ 0 + 8 ] ^= value1 [ 0 + 8 ];
			;
			DES_KS_current [ 0 + 8 + 1 ] ^= value1 [ 0 + 8 + 1 ];
			;
			DES_KS_current [ 0 + 8 + 2 ] ^= value1 [ 0 + 8 + 2 ];
			;
			DES_KS_current [ 0 + 8 + 3 ] ^= value1 [ 0 + 8 + 3 ];
			;
			;
			DES_KS_current [ 0 + 12 ] ^= value1 [ 0 + 12 ];
			;
			DES_KS_current [ 0 + 12 + 1 ] ^= value1 [ 0 + 12 + 1 ];
			;
			DES_KS_current [ 0 + 12 + 2 ] ^= value1 [ 0 + 12 + 2 ];
			;
			DES_KS_current [ 0 + 12 + 3 ] ^= value1 [ 0 + 12 + 3 ];
			;
			;
			;
			DES_KS_current [ 16 ] ^= value1 [ 16 ];
			;
			DES_KS_current [ 16 + 1 ] ^= value1 [ 16 + 1 ];
			;
			DES_KS_current [ 16 + 2 ] ^= value1 [ 16 + 2 ];
			;
			DES_KS_current [ 16 + 3 ] ^= value1 [ 16 + 3 ];
			;
			;
			DES_KS_current [ 16 + 4 ] ^= value1 [ 16 + 4 ];
			;
			DES_KS_current [ 16 + 4 + 1 ] ^= value1 [ 16 + 4 + 1 ];
			;
			DES_KS_current [ 16 + 4 + 2 ] ^= value1 [ 16 + 4 + 2 ];
			;
			DES_KS_current [ 16 + 4 + 3 ] ^= value1 [ 16 + 4 + 3 ];
			;
			;
			DES_KS_current [ 16 + 8 ] ^= value1 [ 16 + 8 ];
			;
			DES_KS_current [ 16 + 8 + 1 ] ^= value1 [ 16 + 8 + 1 ];
			;
			DES_KS_current [ 16 + 8 + 2 ] ^= value1 [ 16 + 8 + 2 ];
			;
			DES_KS_current [ 16 + 8 + 3 ] ^= value1 [ 16 + 8 + 3 ];
			;
			;
			DES_KS_current [ 16 + 12 ] ^= value1 [ 16 + 12 ];
			;
			DES_KS_current [ 16 + 12 + 1 ] ^= value1 [ 16 + 12 + 1 ];
			;
			DES_KS_current [ 16 + 12 + 2 ] ^= value1 [ 16 + 12 + 2 ];
			;
			DES_KS_current [ 16 + 12 + 3 ] ^= value1 [ 16 + 12 + 3 ];
			;
			;
			;
		}

		;
		pos += 128;
	}

}

void DES_std_set_key ( char *key ) {
	int i , j , k , l;
	long *value1 , *value2;
	j = key [ 0 ];
	for ( k = i = 0;
	( l = DES_std_DES_key [ i ] ) && ( j = key [ i ] );
	i ++ ) if ( j != l ) k += 3;
	if ( j ) {
		while ( i < 8 && key [ i ] ) {
			i ++;
			k += 2;
		}

		j = i;
	}

	else {
		j = i;
		while ( DES_std_DES_key [ i ++ ] ) k += 2;
	}

	if ( ( k < ( j << 1 ) ) && ( ++ DES_std_DES_KS_updates & 0xFFF ) ) {
		j = 0;
		l = 1;
		for ( i = 0;
		i < 8 && ( k = key [ i ] );
		i ++ ) {
			if ( l ) if ( k == ( l = DES_std_DES_key [ j ++ ] ) ) continue;
			if ( l ) {
				{
					value1 = DES_KS_table [ i ] [ l ];
					value2 = DES_KS_table [ i ] [ k & 0x7F ];
					DES_KS_current [ 0 ] ^= value1 [ 0 ] ^ value2 [ 0 ];
					;
					DES_KS_current [ 0 + 1 ] ^= value1 [ 0 + 1 ] ^ value2 [ 0 + 1 ];
					;
					DES_KS_current [ 0 + 2 ] ^= value1 [ 0 + 2 ] ^ value2 [ 0 + 2 ];
					;
					DES_KS_current [ 0 + 3 ] ^= value1 [ 0 + 3 ] ^ value2 [ 0 + 3 ];
					;
					;
					DES_KS_current [ 0 + 4 ] ^= value1 [ 0 + 4 ] ^ value2 [ 0 + 4 ];
					;
					DES_KS_current [ 0 + 4 + 1 ] ^= value1 [ 0 + 4 + 1 ] ^ value2 [ 0 + 4 + 1 ];
					;
					DES_KS_current [ 0 + 4 + 2 ] ^= value1 [ 0 + 4 + 2 ] ^ value2 [ 0 + 4 + 2 ];
					;
					DES_KS_current [ 0 + 4 + 3 ] ^= value1 [ 0 + 4 + 3 ] ^ value2 [ 0 + 4 + 3 ];
					;
					;
					DES_KS_current [ 0 + 8 ] ^= value1 [ 0 + 8 ] ^ value2 [ 0 + 8 ];
					;
					DES_KS_current [ 0 + 8 + 1 ] ^= value1 [ 0 + 8 + 1 ] ^ value2 [ 0 + 8 + 1 ];
					;
					DES_KS_current [ 0 + 8 + 2 ] ^= value1 [ 0 + 8 + 2 ] ^ value2 [ 0 + 8 + 2 ];
					;
					DES_KS_current [ 0 + 8 + 3 ] ^= value1 [ 0 + 8 + 3 ] ^ value2 [ 0 + 8 + 3 ];
					;
					;
					DES_KS_current [ 0 + 12 ] ^= value1 [ 0 + 12 ] ^ value2 [ 0 + 12 ];
					;
					DES_KS_current [ 0 + 12 + 1 ] ^= value1 [ 0 + 12 + 1 ] ^ value2 [ 0 + 12 + 1 ];
					;
					DES_KS_current [ 0 + 12 + 2 ] ^= value1 [ 0 + 12 + 2 ] ^ value2 [ 0 + 12 + 2 ];
					;
					DES_KS_current [ 0 + 12 + 3 ] ^= value1 [ 0 + 12 + 3 ] ^ value2 [ 0 + 12 + 3 ];
					;
					;
					;
					DES_KS_current [ 16 ] ^= value1 [ 16 ] ^ value2 [ 16 ];
					;
					DES_KS_current [ 16 + 1 ] ^= value1 [ 16 + 1 ] ^ value2 [ 16 + 1 ];
					;
					DES_KS_current [ 16 + 2 ] ^= value1 [ 16 + 2 ] ^ value2 [ 16 + 2 ];
					;
					DES_KS_current [ 16 + 3 ] ^= value1 [ 16 + 3 ] ^ value2 [ 16 + 3 ];
					;
					;
					DES_KS_current [ 16 + 4 ] ^= value1 [ 16 + 4 ] ^ value2 [ 16 + 4 ];
					;
					DES_KS_current [ 16 + 4 + 1 ] ^= value1 [ 16 + 4 + 1 ] ^ value2 [ 16 + 4 + 1 ];
					;
					DES_KS_current [ 16 + 4 + 2 ] ^= value1 [ 16 + 4 + 2 ] ^ value2 [ 16 + 4 + 2 ];
					;
					DES_KS_current [ 16 + 4 + 3 ] ^= value1 [ 16 + 4 + 3 ] ^ value2 [ 16 + 4 + 3 ];
					;
					;
					DES_KS_current [ 16 + 8 ] ^= value1 [ 16 + 8 ] ^ value2 [ 16 + 8 ];
					;
					DES_KS_current [ 16 + 8 + 1 ] ^= value1 [ 16 + 8 + 1 ] ^ value2 [ 16 + 8 + 1 ];
					;
					DES_KS_current [ 16 + 8 + 2 ] ^= value1 [ 16 + 8 + 2 ] ^ value2 [ 16 + 8 + 2 ];
					;
					DES_KS_current [ 16 + 8 + 3 ] ^= value1 [ 16 + 8 + 3 ] ^ value2 [ 16 + 8 + 3 ];
					;
					;
					DES_KS_current [ 16 + 12 ] ^= value1 [ 16 + 12 ] ^ value2 [ 16 + 12 ];
					;
					DES_KS_current [ 16 + 12 + 1 ] ^= value1 [ 16 + 12 + 1 ] ^ value2 [ 16 + 12 + 1 ];
					;
					DES_KS_current [ 16 + 12 + 2 ] ^= value1 [ 16 + 12 + 2 ] ^ value2 [ 16 + 12 + 2 ];
					;
					DES_KS_current [ 16 + 12 + 3 ] ^= value1 [ 16 + 12 + 3 ] ^ value2 [ 16 + 12 + 3 ];
					;
					;
					;
				}

				;
			}

			else {
				value1 = DES_KS_table [ i ] [ k & 0x7F ];
				DES_KS_current [ 0 ] ^= value1 [ 0 ];
				;
				DES_KS_current [ 0 + 1 ] ^= value1 [ 0 + 1 ];
				;
				DES_KS_current [ 0 + 2 ] ^= value1 [ 0 + 2 ];
				;
				DES_KS_current [ 0 + 3 ] ^= value1 [ 0 + 3 ];
				;
				;
				DES_KS_current [ 0 + 4 ] ^= value1 [ 0 + 4 ];
				;
				DES_KS_current [ 0 + 4 + 1 ] ^= value1 [ 0 + 4 + 1 ];
				;
				DES_KS_current [ 0 + 4 + 2 ] ^= value1 [ 0 + 4 + 2 ];
				;
				DES_KS_current [ 0 + 4 + 3 ] ^= value1 [ 0 + 4 + 3 ];
				;
				;
				DES_KS_current [ 0 + 8 ] ^= value1 [ 0 + 8 ];
				;
				DES_KS_current [ 0 + 8 + 1 ] ^= value1 [ 0 + 8 + 1 ];
				;
				DES_KS_current [ 0 + 8 + 2 ] ^= value1 [ 0 + 8 + 2 ];
				;
				DES_KS_current [ 0 + 8 + 3 ] ^= value1 [ 0 + 8 + 3 ];
				;
				;
				DES_KS_current [ 0 + 12 ] ^= value1 [ 0 + 12 ];
				;
				DES_KS_current [ 0 + 12 + 1 ] ^= value1 [ 0 + 12 + 1 ];
				;
				DES_KS_current [ 0 + 12 + 2 ] ^= value1 [ 0 + 12 + 2 ];
				;
				DES_KS_current [ 0 + 12 + 3 ] ^= value1 [ 0 + 12 + 3 ];
				;
				;
				;
				DES_KS_current [ 16 ] ^= value1 [ 16 ];
				;
				DES_KS_current [ 16 + 1 ] ^= value1 [ 16 + 1 ];
				;
				DES_KS_current [ 16 + 2 ] ^= value1 [ 16 + 2 ];
				;
				DES_KS_current [ 16 + 3 ] ^= value1 [ 16 + 3 ];
				;
				;
				DES_KS_current [ 16 + 4 ] ^= value1 [ 16 + 4 ];
				;
				DES_KS_current [ 16 + 4 + 1 ] ^= value1 [ 16 + 4 + 1 ];
				;
				DES_KS_current [ 16 + 4 + 2 ] ^= value1 [ 16 + 4 + 2 ];
				;
				DES_KS_current [ 16 + 4 + 3 ] ^= value1 [ 16 + 4 + 3 ];
				;
				;
				DES_KS_current [ 16 + 8 ] ^= value1 [ 16 + 8 ];
				;
				DES_KS_current [ 16 + 8 + 1 ] ^= value1 [ 16 + 8 + 1 ];
				;
				DES_KS_current [ 16 + 8 + 2 ] ^= value1 [ 16 + 8 + 2 ];
				;
				DES_KS_current [ 16 + 8 + 3 ] ^= value1 [ 16 + 8 + 3 ];
				;
				;
				DES_KS_current [ 16 + 12 ] ^= value1 [ 16 + 12 ];
				;
				DES_KS_current [ 16 + 12 + 1 ] ^= value1 [ 16 + 12 + 1 ];
				;
				DES_KS_current [ 16 + 12 + 2 ] ^= value1 [ 16 + 12 + 2 ];
				;
				DES_KS_current [ 16 + 12 + 3 ] ^= value1 [ 16 + 12 + 3 ];
				;
				;
				;
			}

			;
		}

		if ( l ) for (;
		j < 8 && ( l = DES_std_DES_key [ j ] );
		j ++ ) {
			value1 = DES_KS_table [ j ] [ l ];
			DES_KS_current [ 0 ] ^= value1 [ 0 ];
			;
			DES_KS_current [ 0 + 1 ] ^= value1 [ 0 + 1 ];
			;
			DES_KS_current [ 0 + 2 ] ^= value1 [ 0 + 2 ];
			;
			DES_KS_current [ 0 + 3 ] ^= value1 [ 0 + 3 ];
			;
			;
			DES_KS_current [ 0 + 4 ] ^= value1 [ 0 + 4 ];
			;
			DES_KS_current [ 0 + 4 + 1 ] ^= value1 [ 0 + 4 + 1 ];
			;
			DES_KS_current [ 0 + 4 + 2 ] ^= value1 [ 0 + 4 + 2 ];
			;
			DES_KS_current [ 0 + 4 + 3 ] ^= value1 [ 0 + 4 + 3 ];
			;
			;
			DES_KS_current [ 0 + 8 ] ^= value1 [ 0 + 8 ];
			;
			DES_KS_current [ 0 + 8 + 1 ] ^= value1 [ 0 + 8 + 1 ];
			;
			DES_KS_current [ 0 + 8 + 2 ] ^= value1 [ 0 + 8 + 2 ];
			;
			DES_KS_current [ 0 + 8 + 3 ] ^= value1 [ 0 + 8 + 3 ];
			;
			;
			DES_KS_current [ 0 + 12 ] ^= value1 [ 0 + 12 ];
			;
			DES_KS_current [ 0 + 12 + 1 ] ^= value1 [ 0 + 12 + 1 ];
			;
			DES_KS_current [ 0 + 12 + 2 ] ^= value1 [ 0 + 12 + 2 ];
			;
			DES_KS_current [ 0 + 12 + 3 ] ^= value1 [ 0 + 12 + 3 ];
			;
			;
			;
			DES_KS_current [ 16 ] ^= value1 [ 16 ];
			;
			DES_KS_current [ 16 + 1 ] ^= value1 [ 16 + 1 ];
			;
			DES_KS_current [ 16 + 2 ] ^= value1 [ 16 + 2 ];
			;
			DES_KS_current [ 16 + 3 ] ^= value1 [ 16 + 3 ];
			;
			;
			DES_KS_current [ 16 + 4 ] ^= value1 [ 16 + 4 ];
			;
			DES_KS_current [ 16 + 4 + 1 ] ^= value1 [ 16 + 4 + 1 ];
			;
			DES_KS_current [ 16 + 4 + 2 ] ^= value1 [ 16 + 4 + 2 ];
			;
			DES_KS_current [ 16 + 4 + 3 ] ^= value1 [ 16 + 4 + 3 ];
			;
			;
			DES_KS_current [ 16 + 8 ] ^= value1 [ 16 + 8 ];
			;
			DES_KS_current [ 16 + 8 + 1 ] ^= value1 [ 16 + 8 + 1 ];
			;
			DES_KS_current [ 16 + 8 + 2 ] ^= value1 [ 16 + 8 + 2 ];
			;
			DES_KS_current [ 16 + 8 + 3 ] ^= value1 [ 16 + 8 + 3 ];
			;
			;
			DES_KS_current [ 16 + 12 ] ^= value1 [ 16 + 12 ];
			;
			DES_KS_current [ 16 + 12 + 1 ] ^= value1 [ 16 + 12 + 1 ];
			;
			DES_KS_current [ 16 + 12 + 2 ] ^= value1 [ 16 + 12 + 2 ];
			;
			DES_KS_current [ 16 + 12 + 3 ] ^= value1 [ 16 + 12 + 3 ];
			;
			;
			;
		}

		;
	}

	else {
		memcpy ( DES_KS_current , DES_KS_table [ 0 ] [ ( k = key [ 0 ] ) & 0x7F ] , sizeof ( DES_KS ) );
		if ( k ) for ( i = 1;
		i < 8 && ( k = key [ i ] );
		i ++ ) {
			value1 = DES_KS_table [ i ] [ k & 0x7F ];
			DES_KS_current [ 0 ] ^= value1 [ 0 ];
			;
			DES_KS_current [ 0 + 1 ] ^= value1 [ 0 + 1 ];
			;
			DES_KS_current [ 0 + 2 ] ^= value1 [ 0 + 2 ];
			;
			DES_KS_current [ 0 + 3 ] ^= value1 [ 0 + 3 ];
			;
			;
			DES_KS_current [ 0 + 4 ] ^= value1 [ 0 + 4 ];
			;
			DES_KS_current [ 0 + 4 + 1 ] ^= value1 [ 0 + 4 + 1 ];
			;
			DES_KS_current [ 0 + 4 + 2 ] ^= value1 [ 0 + 4 + 2 ];
			;
			DES_KS_current [ 0 + 4 + 3 ] ^= value1 [ 0 + 4 + 3 ];
			;
			;
			DES_KS_current [ 0 + 8 ] ^= value1 [ 0 + 8 ];
			;
			DES_KS_current [ 0 + 8 + 1 ] ^= value1 [ 0 + 8 + 1 ];
			;
			DES_KS_current [ 0 + 8 + 2 ] ^= value1 [ 0 + 8 + 2 ];
			;
			DES_KS_current [ 0 + 8 + 3 ] ^= value1 [ 0 + 8 + 3 ];
			;
			;
			DES_KS_current [ 0 + 12 ] ^= value1 [ 0 + 12 ];
			;
			DES_KS_current [ 0 + 12 + 1 ] ^= value1 [ 0 + 12 + 1 ];
			;
			DES_KS_current [ 0 + 12 + 2 ] ^= value1 [ 0 + 12 + 2 ];
			;
			DES_KS_current [ 0 + 12 + 3 ] ^= value1 [ 0 + 12 + 3 ];
			;
			;
			;
			DES_KS_current [ 16 ] ^= value1 [ 16 ];
			;
			DES_KS_current [ 16 + 1 ] ^= value1 [ 16 + 1 ];
			;
			DES_KS_current [ 16 + 2 ] ^= value1 [ 16 + 2 ];
			;
			DES_KS_current [ 16 + 3 ] ^= value1 [ 16 + 3 ];
			;
			;
			DES_KS_current [ 16 + 4 ] ^= value1 [ 16 + 4 ];
			;
			DES_KS_current [ 16 + 4 + 1 ] ^= value1 [ 16 + 4 + 1 ];
			;
			DES_KS_current [ 16 + 4 + 2 ] ^= value1 [ 16 + 4 + 2 ];
			;
			DES_KS_current [ 16 + 4 + 3 ] ^= value1 [ 16 + 4 + 3 ];
			;
			;
			DES_KS_current [ 16 + 8 ] ^= value1 [ 16 + 8 ];
			;
			DES_KS_current [ 16 + 8 + 1 ] ^= value1 [ 16 + 8 + 1 ];
			;
			DES_KS_current [ 16 + 8 + 2 ] ^= value1 [ 16 + 8 + 2 ];
			;
			DES_KS_current [ 16 + 8 + 3 ] ^= value1 [ 16 + 8 + 3 ];
			;
			;
			DES_KS_current [ 16 + 12 ] ^= value1 [ 16 + 12 ];
			;
			DES_KS_current [ 16 + 12 + 1 ] ^= value1 [ 16 + 12 + 1 ];
			;
			DES_KS_current [ 16 + 12 + 2 ] ^= value1 [ 16 + 12 + 2 ];
			;
			DES_KS_current [ 16 + 12 + 3 ] ^= value1 [ 16 + 12 + 3 ];
			;
			;
			;
		}

		;
	}

	DES_std_DES_key [ 0 ] = key [ 0 ] & 0x7F;
	DES_std_DES_key [ 1 ] = key [ 1 ] & 0x7F;
	DES_std_DES_key [ 2 ] = key [ 2 ] & 0x7F;
	DES_std_DES_key [ 3 ] = key [ 3 ] & 0x7F;
	DES_std_DES_key [ 4 ] = key [ 4 ] & 0x7F;
	DES_std_DES_key [ 5 ] = key [ 5 ] & 0x7F;
	DES_std_DES_key [ 6 ] = key [ 6 ] & 0x7F;
	DES_std_DES_key [ 7 ] = key [ 7 ] & 0x7F;
}

void DES_std_set_block ( long R , long L ) {
	long Rl , Rh , Ll , Lh;
	unsigned long C;
	long *mask;
	int chunk;
	C = ( R & 0xAAAAAAAA ) | ( ( L & 0xAAAAAAAA ) >> 1 );
	Rh = Rl = 0;
	for ( chunk = 0;
	chunk < 8;
	chunk ++ ) {
		mask = DES_std_DES_IP_E [ chunk ] [ C & 0xF ];
		Rl |= mask [ 0 ];
		Rh |= mask [ 1 ];
		C >>= 4;
	}

	C = ( ( R & 0x55555555 ) << 1 ) | ( L & 0x55555555 );
	Lh = Ll = 0;
	for ( chunk = 0;
	chunk < 8;
	chunk ++ ) {
		mask = DES_std_DES_IP_E [ chunk ] [ C & 0xF ];
		Ll |= mask [ 0 ];
		Lh |= mask [ 1 ];
		C >>= 4;
	}

	Rl = ( ( Rl ) << 2 );
	Rh = ( ( Rh ) << 2 );
	Ll = ( ( Ll ) << 2 );
	Lh = ( ( Lh ) << 2 );
	DES_IV [ 0 ] = Rl;
	DES_IV [ 1 ] = Rh;
	DES_IV [ 2 ] = Ll;
	DES_IV [ 3 ] = Lh;
}

void DES_std_get_block ( DES_binary binary , unsigned long out [ 2 ] ) {
	long Rl , Rh , Ll , Lh;
	long R , L;
	unsigned long C;
	long *mask;
	int chunk;
	Rl = binary [ 0 ];
	Rh = binary [ 1 ];
	Ll = binary [ 2 ];
	Lh = binary [ 3 ];
	Rl = ( ( Rl ) >> 2 );
	Rh = ( ( Rh ) >> 2 );
	Ll = ( ( Ll ) >> 2 );
	Lh = ( ( Lh ) >> 2 );
	R = L = 0;
	C = ( ( Ll >> 1 ) & 0x0F0F0F0F ) | ( ( Lh << 3 ) & 0xF0F0F0F0 );
	for ( chunk = 0;
	chunk < 16;
	chunk ++ ) {
		if ( chunk == 8 ) C = ( ( Rl >> 1 ) & 0x0F0F0F0F ) | ( ( Rh << 3 ) & 0xF0F0F0F0 );
		mask = DES_std_DES_C_FP [ chunk ] [ C & 0xF ];
		R |= mask [ 0 ];
		L |= mask [ 1 ];
		C >>= 4;
	}

	out [ 0 ] = R;
	out [ 1 ] = L;
}

static void nm_DES_std_crypt_body ( void ) {
	unsigned long DES_Dl , DES_Dh;
	long Rl , Rh , Ll , Lh;
	int count;
	Rl = DES_IV [ 0 ];
	Rh = DES_IV [ 1 ];
	Ll = DES_IV [ 2 ];
	Lh = DES_IV [ 3 ];
	count = DES_count;
	do {
		DES_Dl = Rl ^ ( DES_std_DES_all.data.KS + ( 0 *( 16 / 4 ) ) ) [ 0 ];
		DES_Dh = Rh ^ ( DES_std_DES_all.data.KS + ( 0 *( 16 / 4 ) ) ) [ 1 ];
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		DES_Dl = Ll ^ ( DES_std_DES_all.data.KS + ( 0 *( 16 / 4 ) ) ) [ 2 ];
		DES_Dh = Lh ^ ( DES_std_DES_all.data.KS + ( 0 *( 16 / 4 ) ) ) [ 3 ];
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		;
		DES_Dl = Rl ^ ( DES_std_DES_all.data.KS + ( 1 *( 16 / 4 ) ) ) [ 0 ];
		DES_Dh = Rh ^ ( DES_std_DES_all.data.KS + ( 1 *( 16 / 4 ) ) ) [ 1 ];
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		DES_Dl = Ll ^ ( DES_std_DES_all.data.KS + ( 1 *( 16 / 4 ) ) ) [ 2 ];
		DES_Dh = Lh ^ ( DES_std_DES_all.data.KS + ( 1 *( 16 / 4 ) ) ) [ 3 ];
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		;
		DES_Dl = Rl ^ ( DES_std_DES_all.data.KS + ( 2 *( 16 / 4 ) ) ) [ 0 ];
		DES_Dh = Rh ^ ( DES_std_DES_all.data.KS + ( 2 *( 16 / 4 ) ) ) [ 1 ];
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		DES_Dl = Ll ^ ( DES_std_DES_all.data.KS + ( 2 *( 16 / 4 ) ) ) [ 2 ];
		DES_Dh = Lh ^ ( DES_std_DES_all.data.KS + ( 2 *( 16 / 4 ) ) ) [ 3 ];
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		;
		DES_Dl = Rl ^ ( DES_std_DES_all.data.KS + ( 3 *( 16 / 4 ) ) ) [ 0 ];
		DES_Dh = Rh ^ ( DES_std_DES_all.data.KS + ( 3 *( 16 / 4 ) ) ) [ 1 ];
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		DES_Dl = Ll ^ ( DES_std_DES_all.data.KS + ( 3 *( 16 / 4 ) ) ) [ 2 ];
		DES_Dh = Lh ^ ( DES_std_DES_all.data.KS + ( 3 *( 16 / 4 ) ) ) [ 3 ];
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		;
		DES_Dl = Rl ^ ( DES_std_DES_all.data.KS + ( 4 *( 16 / 4 ) ) ) [ 0 ];
		DES_Dh = Rh ^ ( DES_std_DES_all.data.KS + ( 4 *( 16 / 4 ) ) ) [ 1 ];
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		DES_Dl = Ll ^ ( DES_std_DES_all.data.KS + ( 4 *( 16 / 4 ) ) ) [ 2 ];
		DES_Dh = Lh ^ ( DES_std_DES_all.data.KS + ( 4 *( 16 / 4 ) ) ) [ 3 ];
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		;
		DES_Dl = Rl ^ ( DES_std_DES_all.data.KS + ( 5 *( 16 / 4 ) ) ) [ 0 ];
		DES_Dh = Rh ^ ( DES_std_DES_all.data.KS + ( 5 *( 16 / 4 ) ) ) [ 1 ];
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		DES_Dl = Ll ^ ( DES_std_DES_all.data.KS + ( 5 *( 16 / 4 ) ) ) [ 2 ];
		DES_Dh = Lh ^ ( DES_std_DES_all.data.KS + ( 5 *( 16 / 4 ) ) ) [ 3 ];
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		;
		DES_Dl = Rl ^ ( DES_std_DES_all.data.KS + ( 6 *( 16 / 4 ) ) ) [ 0 ];
		DES_Dh = Rh ^ ( DES_std_DES_all.data.KS + ( 6 *( 16 / 4 ) ) ) [ 1 ];
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		DES_Dl = Ll ^ ( DES_std_DES_all.data.KS + ( 6 *( 16 / 4 ) ) ) [ 2 ];
		DES_Dh = Lh ^ ( DES_std_DES_all.data.KS + ( 6 *( 16 / 4 ) ) ) [ 3 ];
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		;
		DES_Dl = Rl ^ ( DES_std_DES_all.data.KS + ( 7 *( 16 / 4 ) ) ) [ 0 ];
		DES_Dh = Rh ^ ( DES_std_DES_all.data.KS + ( 7 *( 16 / 4 ) ) ) [ 1 ];
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Ll ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Lh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		DES_Dl = Ll ^ ( DES_std_DES_all.data.KS + ( 7 *( 16 / 4 ) ) ) [ 2 ];
		DES_Dh = Lh ^ ( DES_std_DES_all.data.KS + ( 7 *( 16 / 4 ) ) ) [ 3 ];
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 0 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 1 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 1 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 2 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 2 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 3 ] ) + ( ( DES_Dl >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 3 ] ) + ( DES_Dl & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 4 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 5 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 5 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 6 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 6 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rl ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_L [ 7 ] ) + ( ( DES_Dh >>= 8 ) & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		Rh ^= ( *( ( long *) ( ( ( unsigned char *) DES_std_DES_all.data.SPE_H [ 7 ] ) + ( DES_Dh & ( ( 0x3F << 2 ) | 0xFF ) ) ) ) );
		;
		;
		Ll ^= Rl;
		Lh ^= Rh;
		Rl ^= Ll;
		Rh ^= Lh;
		Ll ^= Rl;
		Lh ^= Rh;
	}

	while ( -- count );
	DES_out [ 0 ] = Rl;
	DES_out [ 1 ] = Rh;
	DES_out [ 2 ] = Ll;
	DES_out [ 3 ] = Lh;
}

void DES_std_crypt ( DES_KS KS , DES_binary out ) {
	memcpy ( DES_std_DES_all.data.KS , KS , sizeof ( DES_KS ) );
	DES_out = out;
	nm_DES_std_crypt_body ( );
}

static unsigned char DES_std_DES_atoi64 [ 0x100 ] = {
	18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 61 , 62 , 63 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 61 , 62 , 63 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 61 , 62 , 63 , 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 , 58 , 59 , 60 , 61 , 62 , 63 , 0 , 1 , 2 , 3 , 4 }

;
long DES_raw_get_salt ( char *ciphertext ) {
	if ( ciphertext [ 13 ] ) return DES_std_DES_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 5 ] ) ) ] | ( ( long ) DES_std_DES_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 6 ] ) ) ] << 6 ) | ( ( long ) DES_std_DES_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 7 ] ) ) ] << 12 ) | ( ( long ) DES_std_DES_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 8 ] ) ) ] << 18 );
	else return DES_std_DES_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 0 ] ) ) ] | ( ( long ) DES_std_DES_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 1 ] ) ) ] << 6 );
}

long DES_std_get_salt ( char *ciphertext ) {
	unsigned int salt;
	salt = DES_raw_get_salt ( ciphertext );
	salt = ( ( ( salt ) & 077 ) | ( ( ( salt ) & 07700 ) << 2 ) | ( ( ( salt ) & 0770000 ) << 4 ) | ( ( ( salt ) & 077000000 ) << 6 ) );
	return ( long ) ( ( salt ) << 2 );
}

long DES_raw_get_count ( char *ciphertext ) {
	if ( ciphertext [ 13 ] ) return DES_std_DES_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 1 ] ) ) ] | ( ( long ) DES_std_DES_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 2 ] ) ) ] << 6 ) | ( ( long ) DES_std_DES_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 3 ] ) ) ] << 12 ) | ( ( long ) DES_std_DES_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ 4 ] ) ) ] << 18 );
	else return 25;
}

long *DES_do_IP ( long in [ 2 ] ) {
	static long out [ 2 ];
	int src , dst;
	out [ 0 ] = out [ 1 ] = 0;
	for ( dst = 0;
	dst < 64;
	dst ++ ) {
		src = DES_std_DES_IP [ dst ^ 0x20 ];
		if ( in [ src >> 5 ] & ( 1 << ( src & 0x1F ) ) ) out [ dst >> 5 ] |= 1 << ( dst & 0x1F );
	}

	return out;
}

long *DES_raw_get_binary ( char *ciphertext ) {
	long block [ 3 ];
	long mask;
	int ofs , chr , src , dst , value;
	if ( ciphertext [ 13 ] ) ofs = 9;
	else ofs = 2;
	block [ 0 ] = block [ 1 ] = 0;
	dst = 0;
	for ( chr = 0;
	chr < 11;
	chr ++ ) {
		value = DES_std_DES_atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ciphertext [ chr + ofs ] ) ) ];
		mask = 0x20;
		for ( src = 0;
		src < 6;
		src ++ ) {
			if ( value & mask ) block [ dst >> 5 ] |= 1 << ( dst & 0x1F );
			mask >>= 1;
			dst ++;
		}

	}

	return DES_do_IP ( block );
}

long *DES_std_get_binary ( char *ciphertext ) {
	static long out [ 4 ];
	long *raw;
	long salt , mask;
	raw = DES_raw_get_binary ( ciphertext );
	out [ 0 ] = ( ( ( ( raw [ 0 ] ) & 0xF ) << 1 ) | ( ( ( raw [ 0 ] ) & 0xF0 ) << 5 ) | ( ( ( raw [ 0 ] ) & 0xF00 ) << 9 ) | ( ( ( raw [ 0 ] ) & 0xF000 ) << 13 ) );
	out [ 1 ] = ( ( ( ( raw [ 0 ] >> 16 ) & 0xF ) << 1 ) | ( ( ( raw [ 0 ] >> 16 ) & 0xF0 ) << 5 ) | ( ( ( raw [ 0 ] >> 16 ) & 0xF00 ) << 9 ) | ( ( ( raw [ 0 ] >> 16 ) & 0xF000 ) << 13 ) );
	out [ 2 ] = ( ( ( ( raw [ 1 ] ) & 0xF ) << 1 ) | ( ( ( raw [ 1 ] ) & 0xF0 ) << 5 ) | ( ( ( raw [ 1 ] ) & 0xF00 ) << 9 ) | ( ( ( raw [ 1 ] ) & 0xF000 ) << 13 ) );
	out [ 3 ] = ( ( ( ( raw [ 1 ] >> 16 ) & 0xF ) << 1 ) | ( ( ( raw [ 1 ] >> 16 ) & 0xF0 ) << 5 ) | ( ( ( raw [ 1 ] >> 16 ) & 0xF00 ) << 9 ) | ( ( ( raw [ 1 ] >> 16 ) & 0xF000 ) << 13 ) );
	out [ 0 ] = ( ( out [ 0 ] ) << 2 );
	out [ 1 ] = ( ( out [ 1 ] ) << 2 );
	out [ 2 ] = ( ( out [ 2 ] ) << 2 );
	out [ 3 ] = ( ( out [ 3 ] ) << 2 );
	salt = DES_std_get_salt ( ciphertext );
	mask = ( out [ 0 ] ^ out [ 1 ] ) & salt;
	out [ 0 ] ^= mask;
	out [ 1 ] ^= mask;
	mask = ( out [ 2 ] ^ out [ 3 ] ) & salt;
	out [ 2 ] ^= mask;
	out [ 3 ] ^= mask;
	return out;
}

typedef struct {
	ARCH_WORD_32 hash;
	char c0;
}

dummy_binary;
static struct fmt_tests dummy_tests [ ] = {
	{
		"$dummy$64756d6d79" , "dummy" 	}

	, {
		"$dummy$" , "" 	}

	, {
		"$dummy$70617373776f7264" , "password" 	}

	, {
		( ( void *) 0 ) , ( ( void *) 0 ) 	}

}

;
static char dummy_saved_key [ ( 0x4000 / ( 95 + 1 ) ) ] [ 95 + 1 ];
static int nm_dummy_valid ( char *ciphertext ) {
	char *p , *q , c;
	if ( strncmp ( ciphertext , "$dummy$" , 7 ) ) return 0;
	p = strrchr ( ciphertext , '$' );
	if ( p - ciphertext != 6 ) return 0;
	q = ++ p;
	while ( ( c = *q ) ) {
		q ++;
		if ( atoi16 [ ( ( unsigned int ) ( unsigned char ) ( c ) ) ] == 0x7F ) return 0;
		if ( c >= 'A' && c <= 'F' ) return 0;
	}

	if ( ( q - p ) & 1 ) return 0;
	if ( ( ( q - p ) >> 1 ) > 95 ) return 0;
	return 1;
}

static char *nm_dummy_decode ( char *ciphertext ) {
	static char out [ 95 + 1 ];
	char *p , *q , c;
	p = strrchr ( ciphertext , '$' ) + 1;
	q = out;
	while ( ( c = *p ) ) {
		p ++;
		*q ++ = ( atoi16 [ ( ( unsigned int ) ( unsigned char ) ( c ) ) ] << 4 ) | atoi16 [ ( ( unsigned int ) ( unsigned char ) ( *p ++ ) ) ];
	}

	*q = 0;
	return out;
}

__attribute__ ( ( always_inline ) ) static ARCH_WORD_32 nm_dummy_string_hash ( char *s ) {
	ARCH_WORD_32 hash , extra;
	char *p;
	p = s + 2;
	hash = ( unsigned char ) s [ 0 ];
	if ( ! hash ) goto out;
	extra = ( unsigned char ) s [ 1 ];
	if ( ! extra ) goto out;
	while ( *p ) {
		hash <<= 3;
		extra <<= 2;
		hash += ( unsigned char ) p [ 0 ];
		if ( ! p [ 1 ] ) break;
		extra += ( unsigned char ) p [ 1 ];
		p += 2;
		if ( hash & 0xe0000000 ) {
			hash ^= hash >> 20;
			extra ^= extra >> 20;
			hash &= 0xfffff;
		}

	}

	hash -= extra;
	hash ^= extra << 10;
	hash ^= hash >> 16;
	out : return hash;
}

static void *nm_dummy_binary ( char *ciphertext ) {
	static dummy_binary out;
	char *decoded;
	decoded = nm_dummy_decode ( ciphertext );
	out.hash = nm_dummy_string_hash ( decoded );
	out.c0 = decoded [ 0 ];
	return & out;
}

static int nm_dummy_binary_hash_0 ( void *binary ) {
	ARCH_WORD_32 hash = ( ( dummy_binary *) binary ) -> hash;
	hash ^= hash >> 8;
	return ( hash ^ ( hash >> 4 ) ) & 0xf;
}

static int nm_dummy_binary_hash_1 ( void *binary ) {
	ARCH_WORD_32 hash = ( ( dummy_binary *) binary ) -> hash;
	return ( hash ^ ( hash >> 8 ) ) & 0xff;
}

static int nm_dummy_binary_hash_2 ( void *binary ) {
	ARCH_WORD_32 hash = ( ( dummy_binary *) binary ) -> hash;
	return ( hash ^ ( hash >> 12 ) ) & 0xfff;
}

static int nm_dummy_binary_hash_3 ( void *binary ) {
	return ( ( dummy_binary *) binary ) -> hash & 0xffff;
}

static int nm_dummy_binary_hash_4 ( void *binary ) {
	return ( ( dummy_binary *) binary ) -> hash & 0xfffff;
}

static int nm_dummy_get_hash_0 ( int index ) {
	ARCH_WORD_32 hash = nm_dummy_string_hash ( dummy_saved_key [ index ] );
	hash ^= hash >> 8;
	return ( hash ^ ( hash >> 4 ) ) & 0xf;
}

static int nm_dummy_get_hash_1 ( int index ) {
	ARCH_WORD_32 hash = nm_dummy_string_hash ( dummy_saved_key [ index ] );
	return ( hash ^ ( hash >> 8 ) ) & 0xff;
}

static int nm_dummy_get_hash_2 ( int index ) {
	ARCH_WORD_32 hash = nm_dummy_string_hash ( dummy_saved_key [ index ] );
	return ( hash ^ ( hash >> 12 ) ) & 0xfff;
}

static int nm_dummy_get_hash_3 ( int index ) {
	return nm_dummy_string_hash ( dummy_saved_key [ index ] ) & 0xffff;
}

static int nm_dummy_get_hash_4 ( int index ) {
	return nm_dummy_string_hash ( dummy_saved_key [ index ] ) & 0xfffff;
}

static void nm_dummy_set_key ( char *key , int index ) {
	char *p = dummy_saved_key [ index ];
	*p = 0;
	strncat ( p , key , 95 );
}

static char *nm_dummy_get_key ( int index ) {
	return dummy_saved_key [ index ];
}

static void nm_dummy_crypt_all ( int count ) {
	}

static int nm_dummy_cmp_all ( void *binary , int count ) {
	int i;
	for ( i = 0;
	i < count;
	i ++ ) {
		if ( ( ( dummy_binary *) binary ) -> c0 != dummy_saved_key [ i ] [ 0 ] ) continue;
		if ( ( ( dummy_binary *) binary ) -> hash == nm_dummy_string_hash ( dummy_saved_key [ i ] ) ) return 1;
	}

	return 0;
}

static int nm_dummy_cmp_one ( void *binary , int index ) {
	return ( ( dummy_binary *) binary ) -> c0 == dummy_saved_key [ index ] [ 0 ] && ( ( dummy_binary *) binary ) -> hash == nm_dummy_string_hash ( dummy_saved_key [ index ] );
}

static int nm_dummy_cmp_exact ( char *source , int index ) {
	return ! strcmp ( nm_dummy_decode ( source ) , dummy_saved_key [ index ] );
}

struct fmt_main fmt_dummy = {
	{
		"dummy" , "dummy" , "N/A" , "" , - 1 , 95 , sizeof ( dummy_binary ) , 0 , 1 , ( 0x4000 / ( 95 + 1 ) ) , 0x00000001 | 0x00000002 , dummy_tests 	}

	, {
		fmt_default_init , nm_dummy_valid , fmt_default_split , nm_dummy_binary , fmt_default_salt , {
			nm_dummy_binary_hash_0 , nm_dummy_binary_hash_1 , nm_dummy_binary_hash_2 , nm_dummy_binary_hash_3 , nm_dummy_binary_hash_4 		}

		, fmt_default_salt_hash , fmt_default_set_salt , nm_dummy_set_key , nm_dummy_get_key , fmt_default_clear_keys , nm_dummy_crypt_all , {
			nm_dummy_get_hash_0 , nm_dummy_get_hash_1 , nm_dummy_get_hash_2 , nm_dummy_get_hash_3 , nm_dummy_get_hash_4 		}

		, nm_dummy_cmp_all , nm_dummy_cmp_one , nm_dummy_cmp_exact 	}

	, {
		0 	}

	, ( ( void *) 0 ) }

;
static char external_int_word [ 0x80 ];
static char external_rec_word [ 0x80 ];
unsigned int ext_flags = 0;
static char *external_ext_mode;
static c_int external_ext_word [ 0x80 ];
c_int ext_abort , ext_status;
static struct c_ident external_ext_ident_status = {
	( ( void *) 0 ) , "status" , &ext_status }

;
static struct c_ident external_ext_ident_abort = {
	& external_ext_ident_status , "abort" , &ext_abort }

;
static struct c_ident external_ext_globals = {
	& external_ext_ident_abort , "word" , external_ext_word }

;
static void *external_f_generate;
void *f_filter = ( ( void *) 0 );
static struct cfg_list *external_ext_source;
static struct cfg_line *external_ext_line;
static int external_ext_pos;
static int nm_external_ext_getchar ( void ) {
	unsigned char c;
	if ( ! external_ext_line || ! external_ext_line -> data ) return - 1;
	if ( ( c = ( unsigned char ) external_ext_line -> data [ external_ext_pos ++ ] ) ) return c;
	external_ext_line = external_ext_line -> next;
	external_ext_pos = 0;
	return '\n';
}

static void nm_external_ext_rewind ( void ) {
	external_ext_line = external_ext_source -> head;
	external_ext_pos = 0;
}

void ext_init ( char *mode ) {
	if ( ! ( external_ext_source = cfg_get_list ( "List.External:" , mode ) ) ) {
		fprintf ( stderr , "Unknown external mode: %s\n" , mode );
		error ( );
	}

	if ( c_compile ( nm_external_ext_getchar , nm_external_ext_rewind , &external_ext_globals ) ) {
		if ( ! external_ext_line ) external_ext_line = external_ext_source -> tail;
		fprintf ( stderr , "Compiler error in %s at line %d: %s\n" , cfg_name , external_ext_line -> number , c_errors [ c_errno ] );
		error ( );
	}

	external_ext_word [ 0 ] = 0;
	if ( c_lookup ( "init" ) ) c_execute_fast ( c_lookup ( "init" ) );
	external_f_generate = c_lookup ( "generate" );
	f_filter = c_lookup ( "filter" );
	if ( ( ext_flags & 0x00000001 ) && ! external_f_generate ) {
		fprintf ( stderr , "No generate() for external mode: %s\n" , mode );
		error ( );
	}

	if ( ( ext_flags & 0x00000002 ) && ! f_filter ) {
		fprintf ( stderr , "No filter() for external mode: %s\n" , mode );
		error ( );
	}

	if ( ( ext_flags & ( 0x00010000 | 0x00020000 ) ) == 0x00020000 && external_f_generate ) fprintf ( stderr , "Warning: external mode defines generate(), " "but is only used for filter()\n" );
	external_ext_mode = mode;
}

int ext_filter_body ( char *in , char *out ) {
	unsigned char *internal;
	c_int *external;
	internal = ( unsigned char *) in;
	external = external_ext_word;
	external [ 0 ] = internal [ 0 ];
	external [ 1 ] = internal [ 1 ];
	external [ 2 ] = internal [ 2 ];
	external [ 3 ] = internal [ 3 ];
	if ( external [ 0 ] && external [ 1 ] && external [ 2 ] && external [ 3 ] ) do {
		if ( ! ( external [ 4 ] = internal [ 4 ] ) ) break;
		if ( ! ( external [ 5 ] = internal [ 5 ] ) ) break;
		if ( ! ( external [ 6 ] = internal [ 6 ] ) ) break;
		if ( ! ( external [ 7 ] = internal [ 7 ] ) ) break;
		internal += 4;
		external += 4;
	}

	while ( 1 );
	c_execute_fast ( f_filter );
	if ( ! external_ext_word [ 0 ] && in [ 0 ] ) return 0;
	internal = ( unsigned char *) out;
	external = external_ext_word;
	internal [ 0 ] = external [ 0 ];
	internal [ 1 ] = external [ 1 ];
	internal [ 2 ] = external [ 2 ];
	internal [ 3 ] = external [ 3 ];
	if ( external [ 0 ] && external [ 1 ] && external [ 2 ] && external [ 3 ] ) do {
		if ( ! ( internal [ 4 ] = external [ 4 ] ) ) break;
		if ( ! ( internal [ 5 ] = external [ 5 ] ) ) break;
		if ( ! ( internal [ 6 ] = external [ 6 ] ) ) break;
		if ( ! ( internal [ 7 ] = external [ 7 ] ) ) break;
		internal += 4;
		external += 4;
	}

	while ( 1 );
	return 1;
}

static void nm_external_save_state ( FILE *file ) {
	unsigned char *ptr;
	ptr = ( unsigned char *) external_rec_word;
	do {
		fprintf ( file , "%d\n" , ( int ) *ptr );
	}

	while ( *ptr ++ );
}

static int nm_external_restore_state ( FILE *file ) {
	int c;
	unsigned char *internal;
	c_int *external;
	int count;
	internal = ( unsigned char *) external_int_word;
	external = external_ext_word;
	count = 0;
	do {
		if ( fscanf ( file , "%d\n" , &c ) != 1 ) return 1;
		if ( ++ count >= 0x80 ) return 1;
	}

	while ( ( *internal ++ = *external ++ = c ) );
	if ( c_lookup ( "restore" ) ) c_execute_fast ( c_lookup ( "restore" ) );
	return 0;
}

static void nm_external_fix_state ( void ) {
	strcpy ( external_rec_word , external_int_word );
}

void do_external_crack ( struct db_main *db ) {
	unsigned char *internal;
	c_int *external;
	log_event ( "Proceeding with external mode: %.100s" , external_ext_mode );
	internal = ( unsigned char *) external_int_word;
	external = external_ext_word;
	while ( *external ) *internal ++ = *external ++;
	*internal = 0;
	status_init ( ( ( void *) 0 ) , 0 );
	rec_restore_mode ( nm_external_restore_state );
	rec_init ( db , nm_external_save_state );
	crk_init ( db , nm_external_fix_state , ( ( void *) 0 ) );
	do {
		c_execute_fast ( external_f_generate );
		if ( ! external_ext_word [ 0 ] ) break;
		if ( f_filter ) {
			c_execute_fast ( f_filter );
			if ( ! external_ext_word [ 0 ] ) continue;
		}

		external_int_word [ 0 ] = external_ext_word [ 0 ];
		if ( ( external_int_word [ 1 ] = external_ext_word [ 1 ] ) ) {
			internal = ( unsigned char *) & external_int_word [ 2 ];
			external = & external_ext_word [ 2 ];
			do {
				if ( ! ( internal [ 0 ] = external [ 0 ] ) ) break;
				if ( ! ( internal [ 1 ] = external [ 1 ] ) ) break;
				if ( ! ( internal [ 2 ] = external [ 2 ] ) ) break;
				if ( ! ( internal [ 3 ] = external [ 3 ] ) ) break;
				internal += 4;
				external += 4;
			}

			while ( 1 );
		}

		if ( crk_process_key ( external_int_word ) ) break;
	}

	while ( 1 );
	crk_done ( );
	rec_done ( event_abort );
}

struct fmt_main *fmt_list = ( ( void *) 0 );
static struct fmt_main **formats_fmt_tail = & fmt_list;
void fmt_register ( struct fmt_main *format ) {
	format -> private.initialized = 0;
	format -> next = ( ( void *) 0 );
	*formats_fmt_tail = format;
	formats_fmt_tail = & format -> next;
}

void fmt_init ( struct fmt_main *format ) {
	if ( ! format -> private.initialized ) {
		format -> methods.init ( );
		format -> private.initialized = 1;
	}

}

char *fmt_self_test ( struct fmt_main *format ) {
	static char s_size [ 32 ];
	struct fmt_tests *current;
	char *ciphertext , *plaintext;
	int ntests , done , index , max , size;
	void *binary , *salt;
	if ( format -> params.plaintext_length > 0x80 - 3 ) return "length";
	if ( format -> methods.valid ( "*" ) ) return "valid";
	fmt_init ( format );
	if ( ! ( current = format -> params.tests ) ) return ( ( void *) 0 );
	ntests = 0;
	while ( ( current ++ ) -> ciphertext ) ntests ++;
	current = format -> params.tests;
	done = 0;
	index = 0;
	max = format -> params.max_keys_per_crypt;
	do {
		if ( format -> methods.valid ( current -> ciphertext ) != 1 ) return "valid";
		ciphertext = format -> methods.split ( current -> ciphertext , 0 );
		plaintext = current -> plaintext;
		binary = format -> methods.binary ( ciphertext );
		salt = format -> methods.salt ( ciphertext );
		if ( ( unsigned int ) format -> methods.salt_hash ( salt ) >= ( 1 << 12 ) ) return "salt_hash";
		format -> methods.set_salt ( salt );
		format -> methods.set_key ( current -> plaintext , index );
		format -> methods.crypt_all ( index + 1 );
		for ( size = 0;
		size < 7;
		size ++ ) if ( format -> methods.binary_hash [ size ] && format -> methods.get_hash [ size ] ( index ) != format -> methods.binary_hash [ size ] ( binary ) ) {
			sprintf ( s_size , "get_hash[%d](%d)" , size , index );
			return s_size;
		}

		if ( ! format -> methods.cmp_all ( binary , index + 1 ) ) return "cmp_all";
		if ( ! format -> methods.cmp_one ( binary , index ) ) return "cmp_one";
		if ( ! format -> methods.cmp_exact ( ciphertext , index ) ) return "cmp_exact";
		if ( strncmp ( format -> methods.get_key ( index ) , plaintext , format -> params.plaintext_length ) ) return "get_key";
		if ( index & 1 ) format -> methods.set_key ( "" , index );
		if ( index >= 2 && max > ntests ) index += index >> 1;
		else index ++;
		if ( index >= max ) {
			index = ( max > 5 && max > ntests && done != 1 ) ? 5 : 0;
			done |= 1;
		}

		if ( ! ( ++ current ) -> ciphertext ) {
			if ( ! ( format -> params.flags & 0x00010000 ) && ( ! strcmp ( format -> params.label , "des" ) || ! strcmp ( format -> params.label , "bsdi" ) || ! strcmp ( format -> params.label , "afs" ) ) ) index = max - 1;
			current = format -> params.tests;
			done |= 2;
		}

	}

	while ( done != 3 );
	return ( ( void *) 0 );
}

void fmt_default_init ( void ) {
	}

int fmt_default_valid ( char *ciphertext ) {
	return 0;
}

char *fmt_default_split ( char *ciphertext , int index ) {
	return ciphertext;
}

void *fmt_default_binary ( char *ciphertext ) {
	return ciphertext;
}

void *fmt_default_salt ( char *ciphertext ) {
	return ciphertext;
}

int fmt_default_binary_hash ( void *binary ) {
	return 0;
}

int fmt_default_salt_hash ( void *salt ) {
	return 0;
}

void fmt_default_set_salt ( void *salt ) {
	}

void fmt_default_clear_keys ( void ) {
	}

int fmt_default_get_hash ( int index ) {
	return 0;
}

static char *getopt_opt_errors [ ] = {
	( ( void *) 0 ) , "Unknown option" , "Option requires a parameter" , "Invalid option parameter" , "Extra parameter for option" , "Invalid options combination or duplicate option" }

;
static char *nm_getopt_opt_find ( struct opt_entry *list , char *opt , struct opt_entry **entry ) {
	char *name , *param;
	size_t length;
	struct opt_entry *found;
	if ( opt [ 0 ] == '-' ) {
		if ( *( name = opt + 1 ) == '-' ) name ++;
		if ( ! ( param = strchr ( name , '=' ) ) ) param = strchr ( name , ':' );
		if ( param ) {
			length = param - name;
			if ( ! *++ param ) param = ( ( void *) 0 );
		}

		else length = strlen ( name );
		found = ( ( void *) 0 );
		do {
			if ( length <= strlen ( list -> name ) ) if ( ! strncmp ( name , list -> name , length ) ) {
				if ( ! found ) found = list;
				else {
					*entry = ( ( void *) 0 );
					return ( ( void *) 0 );
				}

			}

		}

		while ( ( ++ list ) -> name );
		if ( ( *entry = found ) ) return param;
		else return ( ( void *) 0 );
	}

	else {
		*entry = list;
		return opt;
	}

}

static int nm_getopt_opt_process_param ( char *param , char *format , void *buffer ) {
	if ( format [ 0 ] == "S" [ 0 ] ) {
		*( char **) buffer = str_alloc_copy ( param );
		return 0;
	}

	else if ( format [ 0 ] == "L" [ 0 ] ) {
		list_add ( *( struct list_main **) buffer , param );
		return 0;
	}

	else if ( format [ 0 ] == "M" [ 0 ] ) {
		list_add_multi ( *( struct list_main **) buffer , param );
		return 0;
	}

	else return sscanf ( param , format , buffer ) != 1;
}

static int nm_getopt_opt_process_one ( struct opt_entry *list , opt_flags *flg , char *opt ) {
	char *param;
	struct opt_entry *entry;
	param = nm_getopt_opt_find ( list , opt , &entry );
	if ( ! entry ) return 1;
	if ( *flg & entry -> flg_set & entry -> flg_clr ) return 5;
	*flg &= ~ entry -> flg_clr;
	*flg |= entry -> flg_set;
	if ( entry -> format ) {
		if ( ! param ) {
			if ( entry -> req_clr & 0x80000000 ) return 2;
		}

		else if ( nm_getopt_opt_process_param ( param , entry -> format , entry -> param ) ) return 3;
	}

	else if ( param ) return 4;
	return 0;
}

static int nm_getopt_opt_check_one ( struct opt_entry *list , opt_flags flg , char *opt ) {
	struct opt_entry *entry;
	nm_getopt_opt_find ( list , opt , &entry );
	if ( ! entry ) return 1;
	if ( ( flg & entry -> req_set ) != entry -> req_set || ( flg & entry -> req_clr ) ) return 5;
	return 0;
}

void opt_process ( struct opt_entry *list , opt_flags *flg , char **argv ) {
	char **opt;
	int res;
	if ( *( opt = argv ) ) while ( *++ opt ) if ( ( res = nm_getopt_opt_process_one ( list , flg , *opt ) ) ) {
		fprintf ( stderr , "%s: \"%s\"\n" , getopt_opt_errors [ res ] , *opt );
		error ( );
	}

}

void opt_check ( struct opt_entry *list , opt_flags flg , char **argv ) {
	char **opt;
	int res;
	if ( *( opt = argv ) ) while ( *++ opt ) if ( ( res = nm_getopt_opt_check_one ( list , flg , *opt ) ) ) {
		fprintf ( stderr , "%s: \"%s\"\n" , getopt_opt_errors [ res ] , *opt );
		error ( );
	}

}

extern struct fmt_main fmt_LM;
typedef char ( *char2_table ) [ ( 0x7E - ' ' + 1 ) + 1 ] [ ( 0x7E - ' ' + 1 ) + 1 ];
typedef char ( *chars_table ) [ ( 0x7E - ' ' + 1 ) + 1 ] [ ( 0x7E - ' ' + 1 ) + 1 ] [ ( 0x7E - ' ' + 1 ) + 1 ];
static int inc_rec_compat;
static int inc_rec_entry;
static int inc_rec_numbers [ 8 ];
static int inc_entry;
static int inc_numbers [ 8 ];
static void nm_inc_save_state ( FILE *file ) {
	int pos;
	fprintf ( file , "%d\n%d\n%d\n" , inc_rec_entry , inc_rec_compat , 8 );
	for ( pos = 0;
	pos < 8;
	pos ++ ) fprintf ( file , "%d\n" , inc_rec_numbers [ pos ] );
}

static int nm_inc_restore_state ( FILE *file ) {
	int length;
	int pos;
	if ( fscanf ( file , "%d\n" , &inc_rec_entry ) != 1 ) return 1;
	inc_rec_compat = 1;
	length = 8;
	if ( rec_version >= 2 ) {
		if ( fscanf ( file , "%d\n%d\n" , &inc_rec_compat , &length ) != 2 ) return 1;
		if ( ( unsigned int ) inc_rec_compat > 1 ) return 1;
		if ( ( unsigned int ) length > 8 ) return 1;
	}

	for ( pos = 0;
	pos < length;
	pos ++ ) {
		if ( fscanf ( file , "%d\n" , &inc_rec_numbers [ pos ] ) != 1 ) return 1;
		if ( ( unsigned int ) inc_rec_numbers [ pos ] >= ( 0x7E - ' ' + 1 ) ) return 1;
	}

	return 0;
}

static void nm_inc_fix_state ( void ) {
	inc_rec_entry = inc_entry;
	memcpy ( inc_rec_numbers , inc_numbers , sizeof ( inc_rec_numbers ) );
}

static void nm_inc_inc_format_error ( char *charset ) {
	log_event ( "! Incorrect charset file format: %.100s" , charset );
	fprintf ( stderr , "Incorrect charset file format: %s\n" , charset );
	error ( );
}

static int nm_inc_is_mixedcase ( char *chars ) {
	char present [ ( 0x7E - ' ' + 1 ) ];
	char *ptr , c;
	unsigned int i;
	memset ( present , 0 , sizeof ( present ) );
	ptr = chars;
	while ( ( c = *ptr ++ ) ) {
		i = ( ( unsigned int ) ( unsigned char ) ( c ) ) - ' ';
		if ( i >= ( 0x7E - ' ' + 1 ) ) return - 1;
		present [ i ] = 1;
	}

	ptr = chars;
	while ( ( c = *ptr ++ ) ) {
		if ( c >= 'A' && c <= 'Z' ) {
			i = ( ( unsigned int ) ( unsigned char ) ( c | 0x20 ) ) - ' ';
			if ( i < ( 0x7E - ' ' + 1 ) && present [ i ] ) return 1;
		}

	}

	return 0;
}

static void nm_inc_inc_new_length ( unsigned int length , struct charset_header *header , FILE *file , char *charset , char *char1 , char2_table char2 , chars_table *chars ) {
	long offset;
	int value , pos , i , j;
	char *buffer;
	int count;
	log_event ( "- Switching to length %d" , length + 1 );
	char1 [ 0 ] = 0;
	if ( length ) memset ( char2 , 0 , sizeof ( *char2 ) );
	for ( pos = 0;
	pos <= ( int ) length - 2;
	pos ++ ) memset ( chars [ pos ] , 0 , sizeof ( **chars ) );
	offset = ( long ) header -> offsets [ length ] [ 0 ] | ( ( long ) header -> offsets [ length ] [ 1 ] << 8 ) | ( ( long ) header -> offsets [ length ] [ 2 ] << 16 ) | ( ( long ) header -> offsets [ length ] [ 3 ] << 24 );
	if ( fseek ( file , offset , 0 ) ) pexit ( "fseek" );
	i = j = pos = - 1;
	if ( ( value = _IO_getc ( file ) ) != ( - 1 ) ) do {
		if ( value != 0 ) {
			switch ( pos ) {
				case - 1 : nm_inc_inc_format_error ( charset );
				case 0 : buffer = char1;
				break;
				case 1 : if ( j < 0 ) nm_inc_inc_format_error ( charset );
				buffer = ( *char2 ) [ j ];
				break;
				default : if ( i < 0 || j < 0 ) nm_inc_inc_format_error ( charset );
				buffer = ( *chars [ pos - 2 ] ) [ i ] [ j ];
			}

			buffer [ count = 0 ] = value;
			while ( ( value = _IO_getc ( file ) ) != ( - 1 ) ) {
				buffer [ ++ count ] = value;
				if ( value == 0 ) break;
				if ( count >= ( 0x7E - ' ' + 1 ) ) nm_inc_inc_format_error ( charset );
			}

			buffer [ count ] = 0;
			continue;
		}

		if ( ( value = _IO_getc ( file ) ) == ( - 1 ) ) break;
		else if ( value == 1 ) {
			if ( ( value = _IO_getc ( file ) ) != ( int ) length ) break;
			if ( ( value = _IO_getc ( file ) ) == ( - 1 ) ) break;
			if ( value < 0 || value > ( int ) length ) nm_inc_inc_format_error ( charset );
			pos = value;
		}

		else if ( value == 2 ) {
			if ( pos < 0 ) nm_inc_inc_format_error ( charset );
			if ( ( value = _IO_getc ( file ) ) == ( - 1 ) ) break;
			i = value;
			if ( i < 0 || i > ( 0x7E - ' ' + 1 ) ) nm_inc_inc_format_error ( charset );
			if ( ( value = _IO_getc ( file ) ) == ( - 1 ) ) break;
			j = value;
			if ( j < 0 || j > ( 0x7E - ' ' + 1 ) ) nm_inc_inc_format_error ( charset );
		}

		else nm_inc_inc_format_error ( charset );
		value = _IO_getc ( file );
	}

	while ( value != ( - 1 ) );
	if ( value == ( - 1 ) ) {
		if ( ferror ( file ) ) pexit ( "getc" );
		else nm_inc_inc_format_error ( charset );
	}

}

static int nm_inc_expand ( char *dst , char *src , int size ) {
	char present [ ( 0x7E - ' ' + 1 ) ];
	char *dptr = dst , *sptr = src;
	int count = size;
	unsigned int i;
	memset ( present , 0 , sizeof ( present ) );
	while ( *dptr ) {
		if ( -- count <= 1 ) return 0;
		i = ( ( unsigned int ) ( unsigned char ) ( *dptr ++ ) ) - ' ';
		if ( i >= ( 0x7E - ' ' + 1 ) ) return - 1;
		present [ i ] = 1;
	}

	while ( *sptr ) {
		i = ( ( unsigned int ) ( unsigned char ) ( *sptr ) ) - ' ';
		if ( i >= ( 0x7E - ' ' + 1 ) ) return - 1;
		if ( ! present [ i ] ) {
			*dptr ++ = *sptr ++;
			if ( -- count <= 1 ) break;
		}

		else sptr ++;
	}

	*dptr = 0;
	return 0;
}

static void nm_inc_inc_new_count ( unsigned int length , int count , char *charset , char *allchars , char *char1 , char2_table char2 , chars_table *chars ) {
	int pos , i , j;
	int size;
	int error;
	log_event ( "- Expanding tables for length %d to character count %d" , length + 1 , count + 1 );
	size = count + 2;
	error = nm_inc_expand ( char1 , allchars , size );
	if ( length ) error |= nm_inc_expand ( ( *char2 ) [ ( 0x7E - ' ' + 1 ) ] , allchars , size );
	for ( pos = 0;
	pos <= ( int ) length - 2;
	pos ++ ) error |= nm_inc_expand ( ( *chars [ pos ] ) [ ( 0x7E - ' ' + 1 ) ] [ ( 0x7E - ' ' + 1 ) ] , allchars , size );
	for ( i = 0;
	i < ( 0x7E - ' ' + 1 );
	i ++ ) {
		if ( length ) error |= nm_inc_expand ( ( *char2 ) [ i ] , ( *char2 ) [ ( 0x7E - ' ' + 1 ) ] , size );
		for ( j = 0;
		j < ( 0x7E - ' ' + 1 );
		j ++ ) for ( pos = 0;
		pos <= ( int ) length - 2;
		pos ++ ) {
			error |= nm_inc_expand ( ( *chars [ pos ] ) [ i ] [ j ] , ( *chars [ pos ] ) [ ( 0x7E - ' ' + 1 ) ] [ j ] , size );
			error |= nm_inc_expand ( ( *chars [ pos ] ) [ i ] [ j ] , ( *chars [ pos ] ) [ ( 0x7E - ' ' + 1 ) ] [ ( 0x7E - ' ' + 1 ) ] , size );
		}

	}

	if ( error ) nm_inc_inc_format_error ( charset );
}

static int nm_inc_inc_key_loop ( int length , int fixed , int count , char *char1 , char2_table char2 , chars_table *chars ) {
	char key_i [ 0x80 ];
	char key_e [ 0x80 ];
	char *key;
	char *chars_cache;
	int numbers_cache;
	int pos;
	key_i [ length + 1 ] = 0;
	inc_numbers [ fixed ] = count;
	chars_cache = ( ( void *) 0 );
	update_all : pos = 0;
	update_ending : if ( pos < 2 ) {
		if ( pos == 0 ) key_i [ 0 ] = char1 [ inc_numbers [ 0 ] ];
		if ( length ) key_i [ 1 ] = ( *char2 ) [ ( ( unsigned int ) ( unsigned char ) ( key_i [ 0 ] ) ) - ' ' ] [ inc_numbers [ 1 ] ];
		pos = 2;
	}

	while ( pos < length ) {
		key_i [ pos ] = ( *chars [ pos - 2 ] ) [ ( ( unsigned int ) ( unsigned char ) ( key_i [ pos - 2 ] ) ) - ' ' ] [ ( ( unsigned int ) ( unsigned char ) ( key_i [ pos - 1 ] ) ) - ' ' ] [ inc_numbers [ pos ] ];
		pos ++;
	}

	numbers_cache = inc_numbers [ length ];
	if ( pos == length ) {
		chars_cache = ( *chars [ pos - 2 ] ) [ ( ( unsigned int ) ( unsigned char ) ( key_i [ pos - 2 ] ) ) - ' ' ] [ ( ( unsigned int ) ( unsigned char ) ( key_i [ pos - 1 ] ) ) - ' ' ];
		update_last : key_i [ length ] = chars_cache [ numbers_cache ];
	}

	key = key_i;
	if ( ! f_filter || ext_filter_body ( key_i , key = key_e ) ) if ( crk_process_key ( key ) ) return 1;
	if ( inc_rec_compat ) goto compat;
	pos = length;
	if ( fixed < length ) {
		if ( ++ numbers_cache <= count ) {
			if ( length >= 2 ) goto update_last;
			inc_numbers [ length ] = numbers_cache;
			goto update_ending;
		}

		inc_numbers [ pos -- ] = 0;
		while ( pos > fixed ) {
			if ( ++ inc_numbers [ pos ] <= count ) goto update_ending;
			inc_numbers [ pos -- ] = 0;
		}

	}

	while ( pos -- > 0 ) {
		if ( ++ inc_numbers [ pos ] < count ) goto update_ending;
		inc_numbers [ pos ] = 0;
	}

	return 0;
	compat : pos = 0;
	if ( fixed ) {
		if ( ++ inc_numbers [ 0 ] < count ) goto update_all;
		if ( ! length && inc_numbers [ 0 ] <= count ) goto update_all;
		inc_numbers [ 0 ] = 0;
		pos = 1;
		while ( pos < fixed ) {
			if ( ++ inc_numbers [ pos ] < count ) goto update_all;
			inc_numbers [ pos ++ ] = 0;
		}

	}

	while ( ++ pos <= length ) {
		if ( ++ inc_numbers [ pos ] <= count ) goto update_all;
		inc_numbers [ pos ] = 0;
	}

	return 0;
}

void do_incremental_crack ( struct db_main *db , char *mode ) {
	char *charset;
	int min_length , max_length , max_count;
	char *extra;
	FILE *file;
	struct charset_header *header;
	unsigned int check;
	char allchars [ ( 0x7E - ' ' + 1 ) + 1 ];
	char char1 [ ( 0x7E - ' ' + 1 ) + 1 ];
	char2_table char2;
	chars_table chars [ 8 - 2 ];
	unsigned char *ptr;
	unsigned int length , fixed , count;
	unsigned int real_count;
	int last_length , last_count;
	int pos;
	if ( ! mode ) {
		if ( db -> format == & fmt_LM ) mode = "LanMan";
		else mode = "All";
	}

	log_event ( "Proceeding with \"incremental\" mode: %.100s" , mode );
	if ( ! ( charset = cfg_get_param ( "Incremental:" , mode , "File" ) ) ) {
		log_event ( "! No charset defined" );
		fprintf ( stderr , "No charset defined for mode: %s\n" , mode );
		error ( );
	}

	extra = cfg_get_param ( "Incremental:" , mode , "Extra" );
	if ( ( min_length = cfg_get_int ( "Incremental:" , mode , "MinLen" ) ) < 0 ) min_length = 0;
	if ( ( max_length = cfg_get_int ( "Incremental:" , mode , "MaxLen" ) ) < 0 ) max_length = 8;
	max_count = cfg_get_int ( "Incremental:" , mode , "CharCount" );
	if ( min_length > max_length ) {
		log_event ( "! MinLen = %d exceeds MaxLen = %d" , min_length , max_length );
		fprintf ( stderr , "MinLen = %d exceeds MaxLen = %d\n" , min_length , max_length );
		error ( );
	}

	if ( min_length > db -> format -> params.plaintext_length ) {
		log_event ( "! MinLen = %d is too large for this hash type" , min_length );
		fprintf ( stderr , "MinLen = %d exceeds the maximum possible " "length for the current hash type (%d)\n" , min_length , db -> format -> params.plaintext_length );
		error ( );
	}

	if ( max_length > db -> format -> params.plaintext_length ) {
		log_event ( "! MaxLen = %d is too large for this hash type" , max_length );
		fprintf ( stderr , "Warning: " "MaxLen = %d is too large for the current hash type, " "reduced to %d\n" , max_length , db -> format -> params.plaintext_length );
		max_length = db -> format -> params.plaintext_length;
	}

	if ( max_length > 8 ) {
		log_event ( "! MaxLen = %d exceeds the compile-time limit of %d" , max_length , 8 );
		fprintf ( stderr , "\n" "MaxLen = %d exceeds the compile-time limit of %d\n\n" "There are several good reasons why you probably don't " "need to raise it:\n" "- many hash types don't support passwords " "(or password halves) longer than\n" "7 or 8 characters;\n" "- you probably don't have sufficient statistical " "information to generate a\n" "charset file for lengths beyond 8;\n" "- the limitation applies to incremental mode only.\n" , max_length , 8 );
		error ( );
	}

	if ( ! ( file = fopen ( path_expand ( charset ) , "rb" ) ) ) pexit ( "fopen: %s" , path_expand ( charset ) );
	header = ( struct charset_header *) mem_alloc ( sizeof ( *header ) );
	if ( charset_read_header ( file , header ) && ! ferror ( file ) ) nm_inc_inc_format_error ( charset );
	if ( ferror ( file ) ) pexit ( "fread" );
	if ( feof ( file ) || ( memcmp ( header -> version , "CHR1" , sizeof ( header -> version ) ) && memcmp ( header -> version , "CHR2" , sizeof ( header -> version ) ) ) || ! header -> count ) nm_inc_inc_format_error ( charset );
	if ( header -> min != ' ' || header -> max != 0x7E || header -> length != 8 ) {
		log_event ( "! Incompatible charset file: %.100s" , charset );
		fprintf ( stderr , "Incompatible charset file: %s\n" , charset );
		error ( );
	}

	if ( header -> count > ( 0x7E - ' ' + 1 ) ) nm_inc_inc_format_error ( charset );
	check = ( unsigned int ) header -> check [ 0 ] | ( ( unsigned int ) header -> check [ 1 ] << 8 ) | ( ( unsigned int ) header -> check [ 2 ] << 16 ) | ( ( unsigned int ) header -> check [ 3 ] << 24 );
	if ( ! rec_restoring_now ) rec_check = check;
	if ( rec_check != check ) {
		log_event ( "! Charset file has changed: %.100s" , charset );
		fprintf ( stderr , "Charset file has changed: %s\n" , charset );
		error ( );
	}

	if ( fread ( allchars , header -> count , 1 , file ) != 1 ) {
		if ( ferror ( file ) ) pexit ( "fread" );
		nm_inc_inc_format_error ( charset );
	}

	allchars [ header -> count ] = 0;
	if ( nm_inc_expand ( allchars , "" , sizeof ( allchars ) ) ) nm_inc_inc_format_error ( charset );
	if ( extra && nm_inc_expand ( allchars , extra , sizeof ( allchars ) ) ) {
		log_event ( "! Extra characters not in compile-time " "specified range ('\\x%02x' to '\\x%02x')" , ' ' , 0x7E );
		fprintf ( stderr , "Extra characters not in compile-time " "specified range ('\\x%02x' to '\\x%02x')\n" , ' ' , 0x7E );
		error ( );
	}

	real_count = strlen ( allchars );
	if ( max_count < 0 ) max_count = ( 0x7E - ' ' + 1 );
	if ( min_length != max_length ) log_event ( "- Lengths %d to %d, up to %d different characters" , min_length , max_length , max_count );
	else log_event ( "- Length %d, up to %d different characters" , min_length , max_count );
	if ( ( unsigned int ) max_count > real_count ) {
		log_event ( "! Only %u characters available" , real_count );
		fprintf ( stderr , "Warning: only %u characters available\n" , real_count );
	}

	if ( ! ( db -> format -> params.flags & 0x00000001 ) ) switch ( nm_inc_is_mixedcase ( allchars ) ) {
		case - 1 : nm_inc_inc_format_error ( charset );
		case 1 : log_event ( "! Mixed-case charset, " "but the hash type is case-insensitive" );
		fprintf ( stderr , "Warning: mixed-case charset, " "but the current hash type is case-insensitive;\n" "some candidate passwords may be unnecessarily " "tried more than once.\n" );
	}

	if ( header -> length >= 2 ) char2 = ( char2_table ) mem_alloc ( sizeof ( *char2 ) );
	else char2 = ( ( void *) 0 );
	for ( pos = 0;
	pos < ( int ) header -> length - 2;
	pos ++ ) chars [ pos ] = ( chars_table ) mem_alloc ( sizeof ( *chars [ 0 ] ) );
	inc_rec_compat = 0;
	inc_rec_entry = 0;
	memset ( inc_rec_numbers , 0 , sizeof ( inc_rec_numbers ) );
	status_init ( ( ( void *) 0 ) , 0 );
	rec_restore_mode ( nm_inc_restore_state );
	rec_init ( db , nm_inc_save_state );
	ptr = header -> order + ( inc_entry = inc_rec_entry ) *3;
	memcpy ( inc_numbers , inc_rec_numbers , sizeof ( inc_numbers ) );
	crk_init ( db , nm_inc_fix_state , ( ( void *) 0 ) );
	last_count = last_length = - 1;
	inc_entry --;
	while ( ptr < & header -> order [ sizeof ( header -> order ) - 1 ] ) {
		inc_entry ++;
		length = *ptr ++;
		fixed = *ptr ++;
		count = *ptr ++;
		if ( length >= 8 || fixed > length || count >= ( 0x7E - ' ' + 1 ) ) nm_inc_inc_format_error ( charset );
		if ( inc_entry != inc_rec_entry ) memset ( inc_numbers , 0 , sizeof ( inc_numbers ) );
		if ( count >= real_count || ( fixed && ! count ) ) continue;
		if ( ( int ) length + 1 < min_length || ( int ) length >= max_length || ( int ) count >= max_count ) continue;
		if ( ( int ) length != last_length ) {
			nm_inc_inc_new_length ( last_length = length , header , file , charset , char1 , char2 , chars );
			last_count = - 1;
		}

		if ( ( int ) count > last_count ) nm_inc_inc_new_count ( length , last_count = count , charset , allchars , char1 , char2 , chars );
		if ( ! length && ! min_length ) {
			min_length = 1;
			if ( crk_process_key ( "" ) ) break;
		}

		log_event ( "- Trying length %d, fixed @%d, character count %d" , length + 1 , fixed + 1 , count + 1 );
		if ( nm_inc_inc_key_loop ( length , fixed , count , char1 , char2 , chars ) ) break;
	}

	crk_done ( );
	rec_done ( event_abort );
	for ( pos = 0;
	pos < ( int ) header -> length - 2;
	pos ++ ) {
		if ( ( chars [ pos ] ) ) {
			free ( ( chars [ pos ] ) );
			( chars [ pos ] ) = ( ( void *) 0 );
		}

	}

	;
	{
		if ( ( char2 ) ) {
			free ( ( char2 ) );
			( char2 ) = ( ( void *) 0 );
		}

	}

	;
	{
		if ( ( header ) ) {
			free ( ( header ) );
			( header ) = ( ( void *) 0 );
		}

	}

	;
	fclose ( file );
}

extern struct fmt_main fmt_DES , fmt_BSDI , fmt_MD5 , fmt_BF;
extern struct fmt_main fmt_AFS , fmt_LM;
extern struct fmt_main fmt_trip;
extern struct fmt_main fmt_dummy;
extern int unshadow ( int argc , char **argv );
extern int unafs ( int argc , char **argv );
extern int unique ( int argc , char **argv );
static struct db_main john_database;
static struct fmt_main john_dummy_format;
static int john_exit_status = 0;
static void nm_john_john_register_one ( struct fmt_main *format ) {
	if ( options.format ) if ( strcmp ( options.format , format -> params.label ) ) return;
	fmt_register ( format );
}

static void nm_john_john_register_all ( void ) {
	if ( options.format ) strlwr ( options.format );
	nm_john_john_register_one ( &fmt_DES );
	nm_john_john_register_one ( &fmt_BSDI );
	nm_john_john_register_one ( &fmt_MD5 );
	nm_john_john_register_one ( &fmt_BF );
	nm_john_john_register_one ( &fmt_AFS );
	nm_john_john_register_one ( &fmt_LM );
	nm_john_john_register_one ( &fmt_trip );
	nm_john_john_register_one ( &fmt_dummy );
	if ( ! fmt_list ) {
		fprintf ( stderr , "Unknown ciphertext format name requested\n" );
		error ( );
	}

}

static void nm_john_john_log_format ( void ) {
	int min_chunk , chunk;
	log_event ( "- Hash type: %.100s (lengths up to %d%s)" , john_database.format -> params.format_name , john_database.format -> params.plaintext_length , john_database.format -> methods.split != fmt_default_split ? ", longer passwords split" : "" );
	log_event ( "- Algorithm: %.100s" , john_database.format -> params.algorithm_name );
	chunk = min_chunk = john_database.format -> params.max_keys_per_crypt;
	if ( options.flags & ( 0x00000400 | 0x00004000 ) && chunk < 8 ) chunk = 8;
	if ( chunk > 1 ) log_event ( "- Candidate passwords %s be buffered and " "tried in chunks of %d" , min_chunk > 1 ? "will" : "may" , chunk );
}

static char *nm_john_john_loaded_counts ( void ) {
	static char s_loaded_counts [ 80 ];
	if ( john_database.password_count == 1 ) return "1 password hash";
	sprintf ( s_loaded_counts , john_database.salt_count > 1 ? "%d password hashes with %d different salts" : "%d password hashes with no different salts" , john_database.password_count , john_database.salt_count );
	return s_loaded_counts;
}

static void nm_john_john_load ( void ) {
	struct list_entry *current;
	umask ( 077 );
	if ( options.flags & 0x00001000 ) ext_init ( options.external );
	if ( options.flags & 0x00100000 ) {
		options.loader.flags |= 0x00000100;
		ldr_init_database ( &john_database , &options.loader );
		if ( options.flags & 0x00000002 ) {
			ldr_show_pot_file ( &john_database , "$JOHN/john.pot" );
			john_database.options -> flags |= 0x00000200;
			if ( ( current = options.passwd -> head ) ) do {
				ldr_show_pw_file ( &john_database , current -> data );
			}

			while ( ( current = current -> next ) );
		}

		else {
			john_database.options -> flags |= 0x00000200;
			ldr_show_pot_file ( &john_database , "$JOHN/john.pot" );
		}

		return;
	}

	if ( options.flags & 0x00008000 ) {
		ldr_init_database ( &john_database , &options.loader );
		john_database.format = & john_dummy_format;
		memset ( &john_dummy_format , 0 , sizeof ( john_dummy_format ) );
		john_dummy_format.params.plaintext_length = options.length;
		john_dummy_format.params.flags = 0x00000001 | 0x00000002;
	}

	if ( options.flags & 0x00000002 ) {
		int total;
		if ( options.flags & 0x00200000 ) {
			options.loader.flags |= 0x00000100;
			ldr_init_database ( &john_database , &options.loader );
			ldr_show_pot_file ( &john_database , "$JOHN/john.pot" );
			if ( ( current = options.passwd -> head ) ) do {
				ldr_show_pw_file ( &john_database , current -> data );
			}

			while ( ( current = current -> next ) );
			printf ( "%s%d password hash%s cracked, %d left\n" , john_database.guess_count ? "\n" : "" , john_database.guess_count , john_database.guess_count != 1 ? "es" : "" , john_database.password_count - john_database.guess_count );
			return;
		}

		if ( options.flags & ( 0x00000400 | 0x00004000 ) && status.pass <= 1 ) options.loader.flags |= 0x00000002;
		else if ( mem_saving_level ) options.loader.flags &= ~ 0x00000001;
		ldr_init_database ( &john_database , &options.loader );
		if ( ( current = options.passwd -> head ) ) do {
			ldr_load_pw_file ( &john_database , current -> data );
		}

		while ( ( current = current -> next ) );
		if ( ( options.flags & 0x00000020 ) && john_database.password_count ) {
			log_init ( "$JOHN/john.log" , ( ( void *) 0 ) , options.session );
			if ( status_restored_time ) log_event ( "Continuing an interrupted session" );
			else log_event ( "Starting a new session" );
			log_event ( "Loaded a total of %s" , nm_john_john_loaded_counts ( ) );
			printf ( "Loaded %s (%s [%s])\n" , nm_john_john_loaded_counts ( ) , john_database.format -> params.format_name , john_database.format -> params.algorithm_name );
		}

		total = john_database.password_count;
		ldr_load_pot_file ( &john_database , "$JOHN/john.pot" );
		ldr_fix_database ( &john_database );
		if ( ! john_database.password_count ) {
			log_discard ( );
			printf ( "No password hashes %s (see FAQ)\n" , total ? "left to crack" : "loaded" );
		}

		else if ( john_database.password_count < total ) {
			log_event ( "Remaining %s" , nm_john_john_loaded_counts ( ) );
			printf ( "Remaining %s\n" , nm_john_john_loaded_counts ( ) );
		}

		if ( ( options.flags & ( 0x00000008 | 0x00000004 ) ) && ! john_database.salts ) exit ( 0 );
	}

}

static void nm_john_john_init ( char *name , int argc , char **argv ) {
	int make_check = ( argc == 2 && ! strcmp ( argv [ 1 ] , "--make_check" ) );
	if ( make_check ) argv [ 1 ] = "--test=0";
	;
	if ( ! make_check ) {
		path_init ( argv );
		cfg_init ( "$JOHN/john.conf" , 1 );
		cfg_init ( "$JOHN/john.ini" , 0 );
	}

	status_init ( ( ( void *) 0 ) , 1 );
	if ( argc < 2 ) nm_john_john_register_all ( );
	opt_init ( name , argc , argv );
	nm_john_john_register_all ( );
	common_init ( );
	sig_init ( );
	nm_john_john_load ( );
}

static void nm_john_john_run ( void ) {
	if ( options.flags & 0x00400000 ) john_exit_status = benchmark_all ( ) ? 1 : 0;
	else if ( options.flags & 0x00100000 ) do_makechars ( &john_database , options.charset );
	else if ( options.flags & 0x00000020 ) {
		int remaining = john_database.password_count;
		if ( ! ( options.flags & 0x00008000 ) ) {
			status_init ( ( ( void *) 0 ) , 1 );
			log_init ( "$JOHN/john.log" , "$JOHN/john.pot" , options.session );
			nm_john_john_log_format ( );
		}

		if ( options.flags & 0x00000400 ) do_single_crack ( &john_database );
		else if ( options.flags & 0x00000080 ) do_wordlist_crack ( &john_database , options.wordlist , ( options.flags & 0x00000200 ) != 0 );
		else if ( options.flags & 0x00000800 ) do_incremental_crack ( &john_database , options.charset );
		else if ( options.flags & 0x00001000 ) do_external_crack ( &john_database );
		else if ( options.flags & 0x00004000 ) do_batch_crack ( &john_database );
		status_print ( );
		if ( john_database.password_count < remaining ) {
			char *might = "Warning: passwords printed above might";
			char *partial = " be partial";
			char *not_all = " not be all those cracked";
			switch ( john_database.options -> flags & ( 0x00000010 | 0x00000020 ) ) {
				case 0x00000010 : fprintf ( stderr , "%s%s\n" , might , partial );
				break;
				case 0x00000020 : fprintf ( stderr , "%s%s\n" , might , not_all );
				break;
				case ( 0x00000010 | 0x00000020 ) : fprintf ( stderr , "%s%s and%s\n" , might , partial , not_all );
			}

			fputs ( "Use the \"--show\" option to display all of " "the cracked passwords reliably\n" , stderr );
		}

	}

}

static void nm_john_john_done ( void ) {
	path_done ( );
	if ( ( options.flags & 0x00000020 ) && ! ( options.flags & 0x00008000 ) ) {
		if ( event_abort ) log_event ( "Session aborted" );
		else log_event ( "Session completed" );
	}

	log_done ( );
	check_abort ( 0 );
}

int main ( int argc , char **argv ) {
	char *name;
	if ( ! argv [ 0 ] ) name = "john";
	else if ( ( name = strrchr ( argv [ 0 ] , '/' ) ) ) name ++;
	else name = argv [ 0 ];
	if ( ! strcmp ( name , "unshadow" ) ) {
		;
		return unshadow ( argc , argv );
	}

	if ( ! strcmp ( name , "unafs" ) ) {
		;
		return unafs ( argc , argv );
	}

	if ( ! strcmp ( name , "unique" ) ) {
		;
		return unique ( argc , argv );
	}

	nm_john_john_init ( name , argc , argv );
	nm_john_john_run ( );
	nm_john_john_done ( );
	return john_exit_status;
}

void list_init ( struct list_main **list ) {
	*list = mem_alloc_tiny ( sizeof ( struct list_main ) , 4 );
	( *list ) -> tail = ( *list ) -> head = ( ( void *) 0 );
	( *list ) -> count = 0;
}

void list_add ( struct list_main *list , char *data ) {
	struct list_entry *entry;
	entry = mem_alloc_tiny ( sizeof ( struct list_entry ) + strlen ( data ) , 4 );
	entry -> next = ( ( void *) 0 );
	strcpy ( entry -> data , data );
	if ( list -> tail ) list -> tail = list -> tail -> next = entry;
	else list -> tail = list -> head = entry;
	list -> count ++;
}

void list_add_multi ( struct list_main *list , char *data ) {
	char *comma;
	do {
		if ( ( comma = strchr ( data , ',' ) ) ) *comma = 0;
		list_add ( list , data );
		data = comma + 1;
		if ( comma ) *comma = ',';
	}

	while ( comma );
}

void list_add_unique ( struct list_main *list , char *data ) {
	struct list_entry *current;
	if ( ( current = list -> head ) ) do {
		if ( ! strcmp ( current -> data , data ) ) return;
	}

	while ( ( current = current -> next ) );
	list_add ( list , data );
}

void list_del_next ( struct list_main *list , struct list_entry *prev ) {
	if ( prev ) {
		if ( ! ( prev -> next = prev -> next -> next ) ) list -> tail = prev;
	}

	else if ( ! ( list -> head = list -> head -> next ) ) list -> tail = ( ( void *) 0 );
	list -> count --;
}

static struct fmt_tests LM_fmt_tests [ ] = {
	{
		"$LM$a9c604d244c4e99d" , "AAAAAA" 	}

	, {
		"$LM$cbc501a4d2227783" , "AAAAAAA" 	}

	, {
		"$LM$3466c2b0487fe39a" , "CRACKPO" 	}

	, {
		"$LM$dbc5e5cba8028091" , "IMPUNIT" 	}

	, {
		"aad3b435b51404ee" "aad3b435b51404ee" , "" 	}

	, {
		"$LM$73cc402bd3e79175" , "SCLEROS" 	}

	, {
		"$LM$5ecd9236d21095ce" , "YOKOHAM" 	}

	, {
		"$LM$A5E6066DE61C3E35" , "ZZZZZZZ" 	}

	, {
		"$LM$1FB363feB834C12D" , "ZZZZZZ" 	}

	, {
		( ( void *) 0 ) , ( ( void *) 0 ) 	}

}

;
static void nm_LM_fmt_init ( void ) {
	DES_bs_init ( 1 , 1 );
}

static int nm_LM_fmt_valid ( char *ciphertext ) {
	char *pos;
	char lower [ 32 - 16 + 1 ];
	for ( pos = ciphertext;
	atoi16 [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] != 0x7F;
	pos ++ );
	if ( ! *pos && pos - ciphertext == 32 ) {
		strcpy ( lower , &ciphertext [ 16 ] );
		strlwr ( lower );
		if ( strcmp ( lower , "aad3b435b51404ee" ) ) return 2;
		else return 1;
	}

	if ( strncmp ( ciphertext , "$LM$" , 4 ) ) return 0;
	for ( pos = & ciphertext [ 4 ];
	atoi16 [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] != 0x7F;
	pos ++ );
	if ( *pos || pos - ciphertext != 20 ) return 0;
	return 1;
}

static char *nm_LM_fmt_split ( char *ciphertext , int index ) {
	static char out [ 21 ];
	if ( ! strncmp ( ciphertext , "$LM$" , 4 ) ) ciphertext += 4;
	out [ 0 ] = '$';
	out [ 1 ] = 'L';
	out [ 2 ] = 'M';
	out [ 3 ] = '$';
	if ( index ) memcpy ( &out [ 4 ] , &ciphertext [ 16 ] , 16 );
	else memcpy ( &out [ 4 ] , ciphertext , 16 );
	out [ 20 ] = 0;
	strlwr ( &out [ 4 ] );
	return out;
}

static void *nm_LM_fmt_get_binary ( char *ciphertext ) {
	return DES_bs_get_binary_LM ( ciphertext + 4 );
}

static int nm_LM_fmt_binary_hash_0 ( void *binary ) {
	return *( long *) binary & 0xF;
}

static int nm_LM_fmt_binary_hash_1 ( void *binary ) {
	return *( long *) binary & 0xFF;
}

static int nm_LM_fmt_binary_hash_2 ( void *binary ) {
	return *( long *) binary & 0xFFF;
}

static int nm_LM_fmt_binary_hash_3 ( void *binary ) {
	return *( long *) binary & 0xFFFF;
}

static int nm_LM_fmt_binary_hash_4 ( void *binary ) {
	return *( long *) binary & 0xFFFFF;
}

static int nm_LM_fmt_binary_hash_5 ( void *binary ) {
	return *( long *) binary & 0xFFFFFF;
}

static int nm_LM_fmt_binary_hash_6 ( void *binary ) {
	return *( long *) binary & 0x7FFFFFF;
}

static int nm_LM_fmt_cmp_one ( void *binary , int index ) {
	return DES_bs_cmp_one ( ( long *) binary , 32 , index );
}

static int nm_LM_fmt_cmp_exact ( char *source , int index ) {
	return DES_bs_cmp_one ( nm_LM_fmt_get_binary ( source ) , 64 , index );
}

static char *nm_LM_fmt_get_key ( int index ) {
	static char out [ 8 ];
	unsigned char *src;
	char *dst;
	;
	src = DES_bs_all.pxkeys [ index ];
	dst = out;
	while ( dst < & out [ 7 ] && ( *dst = *src ) ) {
		src += sizeof ( long ) *8;
		dst ++;
	}

	*dst = 0;
	return out;
}

struct fmt_main fmt_LM = {
	{
		"lm" , "LM DES" , "Bitslice DES" , "" , - 1 , 7 , 4 , 0 , 32 , 32 , 0x00000002 | 0x00010000 | 0x00020000 , LM_fmt_tests 	}

	, {
		nm_LM_fmt_init , nm_LM_fmt_valid , nm_LM_fmt_split , nm_LM_fmt_get_binary , fmt_default_salt , {
			nm_LM_fmt_binary_hash_0 , nm_LM_fmt_binary_hash_1 , nm_LM_fmt_binary_hash_2 , nm_LM_fmt_binary_hash_3 , nm_LM_fmt_binary_hash_4 , nm_LM_fmt_binary_hash_5 , nm_LM_fmt_binary_hash_6 		}

		, fmt_default_salt_hash , fmt_default_set_salt , DES_bs_set_key_LM , nm_LM_fmt_get_key , fmt_default_clear_keys , DES_bs_crypt_LM , {
			DES_bs_get_hash_0 , DES_bs_get_hash_1 , DES_bs_get_hash_2 , DES_bs_get_hash_3 , DES_bs_get_hash_4 , DES_bs_get_hash_5 , DES_bs_get_hash_6 		}

		, ( int ( *) ( void *, int ) ) DES_bs_cmp_all , nm_LM_fmt_cmp_one , nm_LM_fmt_cmp_exact 	}

	, {
		0 	}

	, ( ( void *) 0 ) }

;
static char loader_issep_map [ 0x100 ];
static int loader_issep_initialized = 0;
static char *loader_no_username = "?";
static void nm_loader_read_file ( struct db_main *db , char *name , int flags , void ( *process_line ) ( struct db_main *db , char *line ) ) {
	struct stat file_stat;
	FILE *file;
	char line [ 0x400 ];
	if ( flags & 2 ) {
		if ( stat ( name , &file_stat ) ) {
			if ( flags & 1 ) if ( ( *__errno_location ( ) ) == 2 ) return;
			pexit ( "stat: %s" , path_expand ( name ) );
		}

		else if ( ( ( ( ( file_stat.st_mode ) ) & 0170000 ) == ( 0040000 ) ) ) return;
	}

	if ( ! ( file = fopen ( path_expand ( name ) , "r" ) ) ) {
		if ( ( flags & 1 ) && ( *__errno_location ( ) ) == 2 ) return;
		pexit ( "fopen: %s" , path_expand ( name ) );
	}

	while ( fgets ( line , sizeof ( line ) , file ) ) {
		process_line ( db , line );
		check_abort ( 0 );
	}

	if ( ferror ( file ) ) pexit ( "fgets" );
	if ( fclose ( file ) ) pexit ( "fclose" );
}

static void nm_loader_ldr_init_issep ( void ) {
	char *pos;
	if ( loader_issep_initialized ) return;
	memset ( loader_issep_map , 0 , sizeof ( loader_issep_map ) );
	memset ( loader_issep_map , 1 , 33 );
	for ( pos = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~\177";
	*pos;
	pos ++ ) loader_issep_map [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] = 1;
	loader_issep_initialized = 1;
}

void ldr_init_database ( struct db_main *db , struct db_options *options ) {
	db -> loaded = 0;
	db -> options = mem_alloc_copy ( sizeof ( struct db_options ) , 4 , options );
	db -> salts = ( ( void *) 0 );
	db -> password_hash = ( ( void *) 0 );
	db -> password_hash_func = ( ( void *) 0 );
	if ( options -> flags & 0x00000100 ) {
		db -> salt_hash = ( ( void *) 0 );
		db -> cracked_hash = mem_alloc ( ( 1 << 16 ) *sizeof ( struct db_cracked *) );
		memset ( db -> cracked_hash , 0 , ( 1 << 16 ) *sizeof ( struct db_cracked *) );
	}

	else {
		db -> salt_hash = mem_alloc ( ( 1 << 12 ) *sizeof ( struct db_salt *) );
		memset ( db -> salt_hash , 0 , ( 1 << 12 ) *sizeof ( struct db_salt *) );
		db -> cracked_hash = ( ( void *) 0 );
		if ( options -> flags & 0x00000002 ) {
			options -> flags |= 0x00000001;
			nm_loader_ldr_init_issep ( );
		}

	}

	list_init ( &db -> plaintexts );
	db -> salt_count = db -> password_count = db -> guess_count = 0;
	db -> format = ( ( void *) 0 );
}

static void nm_loader_ldr_init_password_hash ( struct db_main *db ) {
	int ( *func ) ( void *binary );
	int size = 4;
	if ( size > 0 && mem_saving_level >= 2 ) size --;
	do {
		func = db -> format -> methods.binary_hash [ size ];
		if ( func && func != fmt_default_binary_hash ) break;
	}

	while ( -- size >= 0 );
	if ( size < 0 ) size = 0;
	db -> password_hash_func = func;
	size = password_hash_sizes [ size ] *sizeof ( struct db_password *);
	db -> password_hash = mem_alloc ( size );
	memset ( db -> password_hash , 0 , size );
}

static char *nm_loader_ldr_get_field ( char **ptr ) {
	char *res , *pos;
	if ( ! *ptr ) return "";
	if ( ( pos = strchr ( res = *ptr , ':' ) ) ) {
		*pos ++ = 0;
		*ptr = pos;
	}

	else {
		pos = res;
		do {
			if ( *pos == '\r' || *pos == '\n' ) *pos = 0;
		}

		while ( *pos ++ );
		*ptr = ( ( void *) 0 );
	}

	return res;
}

static int nm_loader_ldr_check_list ( struct list_main *list , char *s1 , char *s2 ) {
	struct list_entry *current;
	char *data;
	if ( ! ( current = list -> head ) ) return 0;
	if ( *current -> data == '-' ) {
		data = current -> data + 1;
		do {
			if ( ! strcmp ( s1 , data ) || ! strcmp ( s2 , data ) ) return 1;
			if ( ( current = current -> next ) ) data = current -> data;
		}

		while ( current );
	}

	else {
		do {
			data = current -> data;
			if ( ! strcmp ( s1 , data ) || ! strcmp ( s2 , data ) ) return 0;
		}

		while ( ( current = current -> next ) );
		return 1;
	}

	return 0;
}

static int nm_loader_ldr_check_shells ( struct list_main *list , char *shell ) {
	char *name;
	if ( list -> head ) {
		if ( ( name = strrchr ( shell , '/' ) ) ) name ++;
		else name = shell;
		return nm_loader_ldr_check_list ( list , shell , name );
	}

	return 0;
}

static int nm_loader_ldr_split_line ( char **login , char **ciphertext , char **gecos , char **home , char *source , struct fmt_main **format , struct db_options *options , char *line ) {
	struct fmt_main *alt;
	char *uid = ( ( void *) 0 ) , *gid = ( ( void *) 0 ) , *shell = ( ( void *) 0 );
	int retval;
	*login = nm_loader_ldr_get_field ( &line );
	*ciphertext = nm_loader_ldr_get_field ( &line );
	if ( ( ! strcmp ( *login , "+" ) || ! strncmp ( *login , "+@" , 2 ) ) && strlen ( *ciphertext ) < 10 && strncmp ( *ciphertext , "$dummy$" , 7 ) ) return 0;
	if ( ! **ciphertext && ! line ) {
		char *p = *login;
		while ( *p == ' ' || *p == '\t' ) p ++;
		*ciphertext = p;
		p += strlen ( p ) - 1;
		while ( p > *ciphertext && ( *p == ' ' || *p == '\t' ) ) p --;
		p ++;
		if ( strncmp ( *ciphertext , "$dummy$" , 7 ) && p - *ciphertext != 10 ) {
			if ( p - *ciphertext == 11 && *ciphertext - *login == 2 ) ( *ciphertext ) --;
			if ( p - *ciphertext == 12 && *ciphertext - *login == 1 ) ( *ciphertext ) --;
			if ( p - *ciphertext < 13 ) return 0;
		}

		*p = 0;
		*login = loader_no_username;
	}

	if ( source ) strcpy ( source , line ? line : "" );
	uid = nm_loader_ldr_get_field ( &line );
	if ( strlen ( uid ) == 32 ) {
		char *tmp = *ciphertext;
		*ciphertext = uid;
		uid = tmp;
		if ( ! strncmp ( *ciphertext , "NO PASSWORD" , 11 ) ) *ciphertext = "";
		if ( source ) sprintf ( source , "%s:%s" , uid , line );
	}

	if ( ( options -> flags & 0x00000002 ) || options -> shells -> head ) {
		gid = nm_loader_ldr_get_field ( &line );
		do {
			*gecos = nm_loader_ldr_get_field ( &line );
			*home = nm_loader_ldr_get_field ( &line );
			shell = nm_loader_ldr_get_field ( &line );
		}

		while ( ! **gecos && ! strcmp ( *home , "0" ) && ! strcmp ( shell , "0" ) );
	}

	else if ( options -> groups -> head ) {
		gid = nm_loader_ldr_get_field ( &line );
	}

	if ( nm_loader_ldr_check_list ( options -> users , *login , uid ) ) return 0;
	if ( nm_loader_ldr_check_list ( options -> groups , gid , gid ) ) return 0;
	if ( nm_loader_ldr_check_shells ( options -> shells , shell ) ) return 0;
	if ( *format ) {
		int valid = ( *format ) -> methods.valid ( *ciphertext );
		if ( ! valid ) {
			alt = fmt_list;
			do {
				if ( alt == *format ) continue;
				if ( alt -> params.flags & 0x80000000 ) continue;
				if ( alt -> methods.valid ( *ciphertext ) ) {
					alt -> params.flags |= 0x80000000;
					fprintf ( stderr , "Warning: only loading hashes " "of type \"%s\", but also saw " "type \"%s\"\n" "Use the " "\"--format=%s\" option to force " "loading hashes of that type " "instead\n" , ( *format ) -> params.label , alt -> params.label , alt -> params.label );
					break;
				}

			}

			while ( ( alt = alt -> next ) );
		}

		return valid;
	}

	retval = - 1;
	if ( ( alt = fmt_list ) ) do {
		int valid;
		if ( ! ( valid = alt -> methods.valid ( *ciphertext ) ) ) continue;
		if ( retval < 0 ) {
			fmt_init ( *format = alt );
			retval = valid;
			break;
		}

	}

	while ( ( alt = alt -> next ) );
	return retval;
}

static void nm_loader_ldr_split_string ( struct list_main *dst , char *src ) {
	char *word , *pos;
	char c;
	pos = src;
	do {
		word = pos;
		while ( *word && loader_issep_map [ ( ( unsigned int ) ( unsigned char ) ( *word ) ) ] ) word ++;
		if ( ! *word ) break;
		pos = word;
		while ( ! loader_issep_map [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] ) pos ++;
		c = *pos;
		*pos = 0;
		list_add_unique ( dst , word );
		*pos ++ = c;
	}

	while ( c && dst -> count < 0x10 );
}

static struct list_main *nm_loader_ldr_init_words ( char *login , char *gecos , char *home ) {
	struct list_main *words;
	char *pos;
	list_init ( &words );
	if ( *login && login != loader_no_username ) list_add ( words , login );
	nm_loader_ldr_split_string ( words , gecos );
	if ( login != loader_no_username ) nm_loader_ldr_split_string ( words , login );
	if ( ( pos = strrchr ( home , '/' ) ) && pos [ 1 ] ) list_add_unique ( words , pos + 1 );
	return words;
}

static void nm_loader_ldr_load_pw_line ( struct db_main *db , char *line ) {
	static int skip_dupe_checking = 0;
	struct fmt_main *format;
	int index , count;
	char *login , *ciphertext , *gecos , *home;
	char *piece;
	void *binary , *salt;
	int salt_hash , pw_hash;
	struct db_salt *current_salt , *last_salt;
	struct db_password *current_pw , *last_pw;
	struct list_main *words;
	size_t pw_size , salt_size;
	count = nm_loader_ldr_split_line ( &login , &ciphertext , &gecos , &home , ( ( void *) 0 ) , &db -> format , db -> options , line );
	if ( count <= 0 ) return;
	if ( count >= 2 ) db -> options -> flags |= 0x00000010;
	format = db -> format;
	words = ( ( void *) 0 );
	if ( db -> options -> flags & 0x00000002 ) {
		pw_size = sizeof ( struct db_password );
		salt_size = sizeof ( struct db_salt );
	}

	else {
		if ( db -> options -> flags & 0x00000001 ) pw_size = sizeof ( struct db_password ) - sizeof ( struct list_main *);
		else pw_size = sizeof ( struct db_password ) - ( sizeof ( char *) + sizeof ( struct list_main *) );
		salt_size = sizeof ( struct db_salt ) - sizeof ( struct db_keys *);
	}

	if ( ! db -> password_hash ) nm_loader_ldr_init_password_hash ( db );
	for ( index = 0;
	index < count;
	index ++ ) {
		piece = format -> methods.split ( ciphertext , index );
		binary = format -> methods.binary ( piece );
		pw_hash = db -> password_hash_func ( binary );
		if ( ! ( db -> options -> flags & 0x00000002 ) && ! skip_dupe_checking ) {
			int collisions = 0;
			if ( ( current_pw = db -> password_hash [ pw_hash ] ) ) do {
				if ( ! memcmp ( current_pw -> binary , binary , format -> params.binary_size ) && ! strcmp ( current_pw -> source , piece ) ) {
					db -> options -> flags |= 0x00000020;
					break;
				}

				if ( ++ collisions <= 1000 ) continue;
				if ( format -> params.binary_size ) fprintf ( stderr , "Warning: " "excessive partial hash " "collisions detected\n%s" , db -> password_hash_func != fmt_default_binary_hash ? "" : "(cause: the \"format\" lacks " "proper binary_hash() function " "definitions)\n" );
				else fprintf ( stderr , "Warning: " "check for duplicates partially " "bypassed to speedup loading\n" );
				skip_dupe_checking = 1;
				current_pw = ( ( void *) 0 );
				break;
			}

			while ( ( current_pw = current_pw -> next_hash ) );
			if ( current_pw ) continue;
		}

		salt = format -> methods.salt ( piece );
		salt_hash = format -> methods.salt_hash ( salt );
		if ( ( current_salt = db -> salt_hash [ salt_hash ] ) ) do {
			if ( ! memcmp ( current_salt -> salt , salt , format -> params.salt_size ) ) break;
		}

		while ( ( current_salt = current_salt -> next ) );
		if ( ! current_salt ) {
			last_salt = db -> salt_hash [ salt_hash ];
			current_salt = db -> salt_hash [ salt_hash ] = mem_alloc_tiny ( salt_size , 4 );
			current_salt -> next = last_salt;
			current_salt -> salt = mem_alloc_copy ( format -> params.salt_size , 4 , salt );
			current_salt -> index = fmt_default_get_hash;
			current_salt -> list = ( ( void *) 0 );
			current_salt -> hash = & current_salt -> list;
			current_salt -> hash_size = - 1;
			current_salt -> count = 0;
			if ( db -> options -> flags & 0x00000002 ) current_salt -> keys = ( ( void *) 0 );
			db -> salt_count ++;
		}

		current_salt -> count ++;
		db -> password_count ++;
		last_pw = current_salt -> list;
		current_pw = current_salt -> list = mem_alloc_tiny ( pw_size , 4 );
		current_pw -> next = last_pw;
		last_pw = db -> password_hash [ pw_hash ];
		db -> password_hash [ pw_hash ] = current_pw;
		current_pw -> next_hash = last_pw;
		current_pw -> binary = mem_alloc_copy ( format -> params.binary_size , 4 , binary );
		current_pw -> source = str_alloc_copy ( piece );
		if ( db -> options -> flags & 0x00000002 ) {
			if ( ! words ) words = nm_loader_ldr_init_words ( login , gecos , home );
			current_pw -> words = words;
		}

		if ( db -> options -> flags & 0x00000001 ) {
			if ( count >= 2 && count <= 9 ) {
				current_pw -> login = mem_alloc_tiny ( strlen ( login ) + 3 , 1 );
				sprintf ( current_pw -> login , "%s:%d" , login , index + 1 );
			}

			else if ( login == loader_no_username ) current_pw -> login = login;
			else if ( words && *login ) current_pw -> login = words -> head -> data;
			else current_pw -> login = str_alloc_copy ( login );
		}

	}

}

void ldr_load_pw_file ( struct db_main *db , char *name ) {
	nm_loader_read_file ( db , name , 2 , nm_loader_ldr_load_pw_line );
}

static void nm_loader_ldr_load_pot_line ( struct db_main *db , char *line ) {
	struct fmt_main *format = db -> format;
	char *ciphertext;
	void *binary;
	int hash;
	struct db_password *current;
	ciphertext = nm_loader_ldr_get_field ( &line );
	if ( format -> methods.valid ( ciphertext ) != 1 ) return;
	ciphertext = format -> methods.split ( ciphertext , 0 );
	binary = format -> methods.binary ( ciphertext );
	hash = db -> password_hash_func ( binary );
	if ( ( current = db -> password_hash [ hash ] ) ) do {
		if ( current -> binary && ! memcmp ( current -> binary , binary , format -> params.binary_size ) && ! strcmp ( current -> source , ciphertext ) ) current -> binary = ( ( void *) 0 );
	}

	while ( ( current = current -> next_hash ) );
}

void ldr_load_pot_file ( struct db_main *db , char *name ) {
	if ( db -> format ) {
		nm_loader_read_file ( db , name , 1 , nm_loader_ldr_load_pot_line );
	}

}

static void nm_loader_ldr_init_salts ( struct db_main *db ) {
	struct db_salt **tail , *current;
	int hash;
	for ( hash = 0 , tail = & db -> salts;
	hash < ( 1 << 12 );
	hash ++ ) if ( ( current = db -> salt_hash [ hash ] ) ) {
		*tail = current;
		do {
			tail = & current -> next;
		}

		while ( ( current = current -> next ) );
	}

}

static void nm_loader_ldr_remove_marked ( struct db_main *db ) {
	struct db_salt *current_salt , *last_salt;
	struct db_password *current_pw , *last_pw;
	last_salt = ( ( void *) 0 );
	if ( ( current_salt = db -> salts ) ) do {
		last_pw = ( ( void *) 0 );
		if ( ( current_pw = current_salt -> list ) ) do {
			if ( ! current_pw -> binary ) {
				db -> password_count --;
				current_salt -> count --;
				if ( last_pw ) last_pw -> next = current_pw -> next;
				else current_salt -> list = current_pw -> next;
			}

			else last_pw = current_pw;
		}

		while ( ( current_pw = current_pw -> next ) );
		if ( ! current_salt -> list ) {
			db -> salt_count --;
			if ( last_salt ) last_salt -> next = current_salt -> next;
			else db -> salts = current_salt -> next;
		}

		else last_salt = current_salt;
	}

	while ( ( current_salt = current_salt -> next ) );
}

static void nm_loader_ldr_filter_salts ( struct db_main *db ) {
	struct db_salt *current , *last;
	int min = db -> options -> min_pps;
	int max = db -> options -> max_pps;
	if ( ! max ) {
		if ( ! min ) return;
		max = ~ ( unsigned int ) 0 >> 1;
	}

	last = ( ( void *) 0 );
	if ( ( current = db -> salts ) ) do {
		if ( current -> count < min || current -> count > max ) {
			if ( last ) last -> next = current -> next;
			else db -> salts = current -> next;
			db -> salt_count --;
			db -> password_count -= current -> count;
		}

		else last = current;
	}

	while ( ( current = current -> next ) );
}

static void nm_loader_ldr_init_hash_for_salt ( struct db_main *db , struct db_salt *salt ) {
	struct db_password *current;
	int ( *hash_func ) ( void *binary );
	int hash;
	if ( salt -> hash_size < 0 ) {
		salt -> count = 0;
		if ( ( current = salt -> list ) ) do {
			current -> next_hash = ( ( void *) 0 );
			salt -> count ++;
		}

		while ( ( current = current -> next ) );
		return;
	}

	salt -> hash = mem_alloc_tiny ( password_hash_sizes [ salt -> hash_size ] *sizeof ( struct db_password *) , 4 );
	memset ( salt -> hash , 0 , password_hash_sizes [ salt -> hash_size ] *sizeof ( struct db_password *) );
	salt -> index = db -> format -> methods.get_hash [ salt -> hash_size ];
	hash_func = db -> format -> methods.binary_hash [ salt -> hash_size ];
	salt -> count = 0;
	if ( ( current = salt -> list ) ) do {
		hash = hash_func ( current -> binary );
		current -> next_hash = salt -> hash [ hash ];
		salt -> hash [ hash ] = current;
		salt -> count ++;
	}

	while ( ( current = current -> next ) );
}

static void nm_loader_ldr_init_hash ( struct db_main *db ) {
	struct db_salt *current;
	int threshold , size;
	threshold = password_hash_thresholds [ 0 ];
	if ( db -> format && ( db -> format -> params.flags & 0x00010000 ) ) {
		threshold = db -> format -> params.min_keys_per_crypt *5;
		threshold /= 5;
		threshold ++;
	}

	if ( ( current = db -> salts ) ) do {
		size = - 1;
		if ( current -> count >= threshold && mem_saving_level < 3 ) for ( size = 7 - 1;
		size >= 0;
		size -- ) if ( current -> count >= password_hash_thresholds [ size ] && db -> format -> methods.binary_hash [ size ] && db -> format -> methods.binary_hash [ size ] != fmt_default_binary_hash ) break;
		if ( mem_saving_level >= 2 ) size --;
		current -> hash_size = size;
		nm_loader_ldr_init_hash_for_salt ( db , current );
	}

	while ( ( current = current -> next ) );
}

void ldr_fix_database ( struct db_main *db ) {
	nm_loader_ldr_init_salts ( db );
	{
		if ( ( db -> password_hash ) ) {
			free ( ( db -> password_hash ) );
			( db -> password_hash ) = ( ( void *) 0 );
		}

	}

	;
	{
		if ( ( db -> salt_hash ) ) {
			free ( ( db -> salt_hash ) );
			( db -> salt_hash ) = ( ( void *) 0 );
		}

	}

	;
	nm_loader_ldr_filter_salts ( db );
	nm_loader_ldr_remove_marked ( db );
	nm_loader_ldr_init_hash ( db );
	db -> loaded = 1;
}

static int nm_loader_ldr_cracked_hash ( char *ciphertext ) {
	unsigned int hash = 0;
	char *p = ciphertext;
	while ( *p ) {
		hash <<= 1;
		hash += ( unsigned char ) *p ++ | 0x20;
		if ( hash >> ( 2 *16 - 1 ) ) {
			hash ^= hash >> 16;
			hash &= ( 1 << 16 ) - 1;
		}

	}

	hash ^= hash >> 16;
	hash &= ( 1 << 16 ) - 1;
	return hash;
}

static void nm_loader_ldr_show_pot_line ( struct db_main *db , char *line ) {
	char *ciphertext , *pos;
	int hash;
	struct db_cracked *current , *last;
	ciphertext = nm_loader_ldr_get_field ( &line );
	if ( line ) {
		if ( ! fmt_list -> next && ! fmt_list -> methods.valid ( ciphertext ) ) return;
		pos = line;
		do {
			if ( *pos == '\r' || *pos == '\n' ) *pos = 0;
		}

		while ( *pos ++ );
		if ( db -> options -> flags & 0x00000200 ) {
			list_add ( db -> plaintexts , line );
			return;
		}

		hash = nm_loader_ldr_cracked_hash ( ciphertext );
		last = db -> cracked_hash [ hash ];
		current = db -> cracked_hash [ hash ] = mem_alloc_tiny ( sizeof ( struct db_cracked ) , 4 );
		current -> next = last;
		current -> ciphertext = str_alloc_copy ( ciphertext );
		current -> plaintext = str_alloc_copy ( line );
	}

}

void ldr_show_pot_file ( struct db_main *db , char *name ) {
	nm_loader_read_file ( db , name , 1 , nm_loader_ldr_show_pot_line );
}

static void nm_loader_ldr_show_pw_line ( struct db_main *db , char *line ) {
	int show;
	char source [ 0x400 ];
	struct fmt_main *format;
	char *( *split ) ( char *ciphertext , int index );
	int index , count , unify;
	char *login , *ciphertext , *gecos , *home;
	char *piece;
	int pass , found , chars;
	int hash;
	struct db_cracked *current;
	format = ( ( void *) 0 );
	count = nm_loader_ldr_split_line ( &login , &ciphertext , &gecos , &home , source , &format , db -> options , line );
	if ( ! count ) return;
	if ( ! fmt_list -> next && ! format ) return;
	show = ! ( db -> options -> flags & 0x00000200 );
	if ( format ) {
		split = format -> methods.split;
		unify = format -> params.flags & 0x00020000;
	}

	else {
		split = fmt_default_split;
		count = 1;
		unify = 0;
	}

	if ( ! *ciphertext ) {
		found = 1;
		if ( show ) printf ( "%s:NO PASSWORD" , login );
		db -> guess_count ++;
	}

	else for ( found = pass = 0;
	pass == 0 || ( pass == 1 && found );
	pass ++ ) for ( index = 0;
	index < count;
	index ++ ) {
		piece = split ( ciphertext , index );
		if ( unify ) piece = strcpy ( mem_alloc ( strlen ( piece ) + 1 ) , piece );
		hash = nm_loader_ldr_cracked_hash ( piece );
		if ( ( current = db -> cracked_hash [ hash ] ) ) do {
			if ( ! strcmp ( current -> ciphertext , piece ) ) break;
			if ( unify && format -> methods.valid ( current -> ciphertext ) == 1 && ! strcmp ( split ( current -> ciphertext , 0 ) , piece ) ) break;
		}

		while ( ( current = current -> next ) );
		if ( unify ) {
			if ( ( piece ) ) {
				free ( ( piece ) );
				( piece ) = ( ( void *) 0 );
			}

		}

		;
		if ( pass ) {
			chars = 0;
			if ( show ) {
				if ( format ) chars = format -> params.plaintext_length;
				if ( index < count - 1 && current && ( int ) strlen ( current -> plaintext ) != chars ) current = ( ( void *) 0 );
			}

			if ( current ) {
				if ( show ) {
					printf ( "%s" , current -> plaintext );
				}

				else list_add ( db -> plaintexts , current -> plaintext );
				db -> guess_count ++;
			}

			else while ( chars -- ) putchar ( '?' );
		}

		else if ( current ) {
			found = 1;
			if ( show ) printf ( "%s:" , login );
			break;
		}

	}

	if ( found && show ) {
		if ( source [ 0 ] ) printf ( ":%s" , source );
		else putchar ( '\n' );
	}

	if ( format || found ) db -> password_count += count;
}

void ldr_show_pw_file ( struct db_main *db , char *name ) {
	nm_loader_read_file ( db , name , 2 , nm_loader_ldr_show_pw_line );
}

static int logger_cfg_beep;
struct log_file {
	char *name;
	char *buffer , *ptr;
	int size;
	int fd;
}

;
static struct log_file logger_log = {
	( ( void *) 0 ) , ( ( void *) 0 ) , ( ( void *) 0 ) , 0 , - 1 }

;
static struct log_file logger_pot = {
	( ( void *) 0 ) , ( ( void *) 0 ) , ( ( void *) 0 ) , 0 , - 1 }

;
static int logger_in_logger = 0;
static void nm_logger_log_file_init ( struct log_file *f , char *name , int size ) {
	f -> name = name;
	if ( chmod ( path_expand ( name ) , 0400 | 0200 ) ) if ( ( *__errno_location ( ) ) != 2 ) pexit ( "chmod: %s" , path_expand ( name ) );
	if ( ( f -> fd = open ( path_expand ( name ) , 01 | 0100 | 02000 , 0400 | 0200 ) ) < 0 ) pexit ( "open: %s" , path_expand ( name ) );
	f -> ptr = f -> buffer = mem_alloc ( size + 0x400 );
	f -> size = size;
}

static void nm_logger_log_file_flush ( struct log_file *f ) {
	int count;
	if ( f -> fd < 0 ) return;
	count = f -> ptr - f -> buffer;
	if ( count <= 0 ) return;
	if ( write_loop ( f -> fd , f -> buffer , count ) < 0 ) pexit ( "write" );
	f -> ptr = f -> buffer;
}

static int nm_logger_log_file_write ( struct log_file *f ) {
	if ( f -> ptr - f -> buffer > f -> size ) {
		nm_logger_log_file_flush ( f );
		return 1;
	}

	return 0;
}

static void nm_logger_log_file_fsync ( struct log_file *f ) {
	if ( f -> fd < 0 ) return;
	nm_logger_log_file_flush ( f );
	if ( fsync ( f -> fd ) ) pexit ( "fsync" );
}

static void nm_logger_log_file_done ( struct log_file *f ) {
	if ( f -> fd < 0 ) return;
	nm_logger_log_file_fsync ( f );
	if ( close ( f -> fd ) ) pexit ( "close" );
	f -> fd = - 1;
	{
		if ( ( f -> buffer ) ) {
			free ( ( f -> buffer ) );
			( f -> buffer ) = ( ( void *) 0 );
		}

	}

	;
}

static int nm_logger_log_time ( void ) {
	unsigned int time;
	time = logger_pot.fd >= 0 ? status_get_time ( ) : status_restored_time;
	return ( int ) sprintf ( logger_log.ptr , "%u:%02u:%02u:%02u " , time / 86400 , time % 86400 / 3600 , time % 3600 / 60 , time % 60 );
}

void log_init ( char *log_name , char *pot_name , char *session ) {
	logger_in_logger = 1;
	if ( log_name && logger_log.fd < 0 ) {
		if ( session ) log_name = path_session ( session , ".log" );
		nm_logger_log_file_init ( &logger_log , log_name , 0x8000 );
	}

	if ( pot_name && logger_pot.fd < 0 ) {
		nm_logger_log_file_init ( &logger_pot , pot_name , 0x8000 );
		logger_cfg_beep = cfg_get_bool ( "Options" , ( ( void *) 0 ) , "Beep" , 0 );
	}

	logger_in_logger = 0;
}

void log_guess ( char *login , char *ciphertext , char *plaintext ) {
	int count1 , count2;
	printf ( "%-16s (%s)\n" , plaintext , login );
	logger_in_logger = 1;
	if ( logger_pot.fd >= 0 && ciphertext && strlen ( ciphertext ) + strlen ( plaintext ) <= 0x400 - 3 ) {
		count1 = ( int ) sprintf ( logger_pot.ptr , "%s:%s\n" , ciphertext , plaintext );
		if ( count1 > 0 ) logger_pot.ptr += count1;
	}

	if ( logger_log.fd >= 0 && strlen ( login ) < 0x400 - 64 ) {
		count1 = nm_logger_log_time ( );
		if ( count1 > 0 ) {
			logger_log.ptr += count1;
			count2 = ( int ) sprintf ( logger_log.ptr , "+ Cracked %s\n" , login );
			if ( count2 > 0 ) logger_log.ptr += count2;
			else logger_log.ptr -= count1;
		}

	}

	if ( nm_logger_log_file_write ( &logger_pot ) ) nm_logger_log_file_flush ( &logger_log );
	else if ( nm_logger_log_file_write ( &logger_log ) ) nm_logger_log_file_flush ( &logger_pot );
	logger_in_logger = 0;
	if ( logger_cfg_beep ) write_loop ( fileno ( stderr ) , "\007" , 1 );
}

void log_event ( char *format , ... ) {
	va_list args;
	int count1 , count2;
	if ( logger_log.fd < 0 ) return;
	if ( logger_in_logger ) return;
	logger_in_logger = 1;
	count1 = nm_logger_log_time ( );
	if ( count1 > 0 && count1 + strlen ( format ) < 0x400 - 500 - 1 ) {
		logger_log.ptr += count1;
		__builtin_va_start ( args , format );
		count2 = ( int ) vsprintf ( logger_log.ptr , format , args );
		__builtin_va_end ( args );
		if ( count2 > 0 ) {
			logger_log.ptr += count2;
			*logger_log.ptr ++ = '\n';
		}

		else logger_log.ptr -= count1;
		if ( nm_logger_log_file_write ( &logger_log ) ) nm_logger_log_file_flush ( &logger_pot );
	}

	logger_in_logger = 0;
}

void log_discard ( void ) {
	logger_log.ptr = logger_log.buffer;
}

void log_flush ( void ) {
	logger_in_logger = 1;
	nm_logger_log_file_fsync ( &logger_log );
	nm_logger_log_file_fsync ( &logger_pot );
	logger_in_logger = 0;
}

void log_done ( void ) {
	if ( logger_in_logger ) return;
	logger_in_logger = 1;
	nm_logger_log_file_done ( &logger_log );
	nm_logger_log_file_done ( &logger_pot );
	logger_in_logger = 0;
}

void add32to64 ( _john_int64_t *dst , unsigned int src ) {
	unsigned int saved;
	saved = dst -> lo;
	dst -> lo += src;
	if ( dst -> lo < saved ) dst -> hi ++;
}

void add64to64 ( _john_int64_t *dst , _john_int64_t *src ) {
	add32to64 ( dst , src -> lo );
	dst -> hi += src -> hi;
}

void neg64 ( _john_int64_t *dst ) {
	dst -> lo = ~ dst -> lo;
	dst -> hi = ~ dst -> hi;
	add32to64 ( dst , 1 );
}

static void nm_math_add32to64m ( _john_int64_t *dst , unsigned int a ) {
	unsigned int saved;
	saved = dst -> lo;
	dst -> lo += a << 16;
	dst -> hi += ( ( dst -> lo < saved ) ? 1 : 0 ) + ( a >> 16 );
}

void mul32by32 ( _john_int64_t *dst , unsigned int m1 , unsigned int m2 ) {
	dst -> lo = ( m1 & 0xFFFF ) *( m2 & 0xFFFF );
	dst -> hi = 0;
	nm_math_add32to64m ( dst , ( m1 >> 16 ) *( m2 & 0xFFFF ) );
	nm_math_add32to64m ( dst , ( m2 >> 16 ) *( m1 & 0xFFFF ) );
	dst -> hi += ( m1 >> 16 ) *( m2 >> 16 );
}

void mul64by32 ( _john_int64_t *dst , unsigned int m ) {
	_john_int64_t tmp;
	mul32by32 ( &tmp , dst -> hi , m );
	dst -> hi = tmp.lo;
	mul32by32 ( &tmp , dst -> lo , m );
	dst -> lo = tmp.lo;
	dst -> hi += tmp.hi;
}

unsigned int div64by32lo ( _john_int64_t *src , unsigned int d ) {
	unsigned int lo , hi , q , s , mask;
	lo = src -> lo;
	hi = src -> hi;
	if ( hi >= d ) return 0xFFFFFFFF;
	q = 0;
	mask = 0x80000000;
	do {
		s = hi;
		hi = ( hi << 1 ) | ( lo >> 31 );
		lo <<= 1;
		if ( ( s & 0x80000000 ) || hi >= d ) {
			hi -= d;
			q |= mask;
		}

	}

	while ( mask >>= 1 );
	return q;
}

void div64by32 ( _john_int64_t *dst , unsigned int d ) {
	_john_int64_t tmp;
	tmp.lo = dst -> lo;
	tmp.hi = dst -> hi % d;
	dst -> lo = div64by32lo ( &tmp , d );
	dst -> hi /= d;
}

static struct fmt_tests MD5_fmt_tests [ ] = {
	{
		"$1$12345678$aIccj83HRDBo6ux1bVx7D1" , "0123456789ABCDE" 	}

	, {
		"$apr1$Q6ZYh...$RV6ft2bZ8j.NGrxLYaJt9." , "test" 	}

	, {
		"$1$12345678$f8QoJuo0DpBRfQSD0vglc1" , "12345678" 	}

	, {
		"$1$$qRPK7m23GJusamGpoGLby/" , "" 	}

	, {
		"$apr1$a2Jqm...$grFrwEgiQleDr0zR4Jx1b." , "15 chars is max" 	}

	, {
		"$1$$AuJCr07mI7DSew03TmBIv/" , "no salt" 	}

	, {
		"$1$`!@#%^&*$E6hD76/pKTS8qToBCkux30" , "invalid salt" 	}

	, {
		"$1$12345678$xek.CpjQUVgdf/P2N9KQf/" , "" 	}

	, {
		"$1$1234$BdIMOAWFOV2AQlLsrN/Sw." , "1234" 	}

	, {
		"$apr1$rBXqc...$NlXxN9myBOk95T0AyLAsJ0" , "john" 	}

	, {
		"$apr1$Grpld/..$qp5GyjwM2dnA5Cdej9b411" , "the" 	}

	, {
		"$apr1$GBx.D/..$yfVeeYFCIiEXInfRhBRpy/" , "ripper" 	}

	, {
		( ( void *) 0 ) , ( ( void *) 0 ) 	}

}

;
static char ( *MD5_fmt_saved_key ) [ 15 + 1 ];
struct fmt_main fmt_MD5;
static void nm_MD5_fmt_init ( void ) {
	MD5_std_init ( );
	MD5_fmt_saved_key = mem_alloc_tiny ( sizeof ( *MD5_fmt_saved_key ) *fmt_MD5.params.max_keys_per_crypt , ( 4 *8 ) );
}

static int nm_MD5_fmt_valid ( char *ciphertext ) {
	char *pos , *start;
	if ( strncmp ( ciphertext , "$1$" , 3 ) ) {
		if ( strncmp ( ciphertext , "$apr1$" , 6 ) ) return 0;
		ciphertext += 3;
	}

	for ( pos = & ciphertext [ 3 ];
	*pos && *pos != '$';
	pos ++ );
	if ( ! *pos || pos < & ciphertext [ 3 ] || pos > & ciphertext [ 11 ] ) return 0;
	start = ++ pos;
	while ( atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] != 0x7F ) pos ++;
	if ( *pos || pos - start != 22 ) return 0;
	if ( atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *( pos - 1 ) ) ) ] & 0x3C ) return 0;
	return 1;
}

static int nm_MD5_fmt_binary_hash_0 ( void *binary ) {
	return *( MD5_word *) binary & 0xF;
}

static int nm_MD5_fmt_binary_hash_1 ( void *binary ) {
	return *( MD5_word *) binary & 0xFF;
}

static int nm_MD5_fmt_binary_hash_2 ( void *binary ) {
	return *( MD5_word *) binary & 0xFFF;
}

static int nm_MD5_fmt_binary_hash_3 ( void *binary ) {
	return *( MD5_word *) binary & 0xFFFF;
}

static int nm_MD5_fmt_binary_hash_4 ( void *binary ) {
	return *( MD5_word *) binary & 0xFFFFF;
}

static int nm_MD5_fmt_binary_hash_5 ( void *binary ) {
	return *( MD5_word *) binary & 0xFFFFFF;
}

static int nm_MD5_fmt_binary_hash_6 ( void *binary ) {
	return *( MD5_word *) binary & 0x7FFFFFF;
}

static int nm_MD5_fmt_get_hash_0 ( int index ) {
	;
	return MD5_std_all.out [ index ] [ 0 ] & 0xF;
}

static int nm_MD5_fmt_get_hash_1 ( int index ) {
	;
	return MD5_std_all.out [ index ] [ 0 ] & 0xFF;
}

static int nm_MD5_fmt_get_hash_2 ( int index ) {
	;
	return MD5_std_all.out [ index ] [ 0 ] & 0xFFF;
}

static int nm_MD5_fmt_get_hash_3 ( int index ) {
	;
	return MD5_std_all.out [ index ] [ 0 ] & 0xFFFF;
}

static int nm_MD5_fmt_get_hash_4 ( int index ) {
	;
	return MD5_std_all.out [ index ] [ 0 ] & 0xFFFFF;
}

static int nm_MD5_fmt_get_hash_5 ( int index ) {
	;
	return MD5_std_all.out [ index ] [ 0 ] & 0xFFFFFF;
}

static int nm_MD5_fmt_get_hash_6 ( int index ) {
	;
	return MD5_std_all.out [ index ] [ 0 ] & 0x7FFFFFF;
}

static int nm_MD5_fmt_salt_hash ( void *salt ) {
	unsigned int i , h , retval;
	retval = 0;
	for ( i = 0;
	i <= 6;
	i += 2 ) {
		h = ( unsigned char ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ( ( char *) salt ) [ i ] ) ) ];
		h ^= ( ( unsigned char *) salt ) [ i + 1 ];
		h <<= 6;
		h ^= ( unsigned char ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( ( ( char *) salt ) [ i + 1 ] ) ) ];
		h ^= ( ( unsigned char *) salt ) [ i ];
		retval += h;
	}

	retval ^= retval >> 12;
	retval &= ( 1 << 12 ) - 1;
	return retval;
}

static void nm_MD5_fmt_set_key ( char *key , int index ) {
	MD5_std_set_key ( key , index );
	strnfcpy ( MD5_fmt_saved_key [ index ] , key , 15 );
}

static char *nm_MD5_fmt_get_key ( int index ) {
	MD5_fmt_saved_key [ index ] [ 15 ] = 0;
	return MD5_fmt_saved_key [ index ];
}

static int nm_MD5_fmt_cmp_all ( void *binary , int count ) {
	{
		if ( *( MD5_word *) binary == MD5_std_all.out [ 0 ] [ 0 ] || *( MD5_word *) binary == MD5_std_all.out [ 1 ] [ 0 ] ) return 1;
	}

	return 0;
}

static int nm_MD5_fmt_cmp_one ( void *binary , int index ) {
	;
	return *( MD5_word *) binary == MD5_std_all.out [ index ] [ 0 ];
}

static int nm_MD5_fmt_cmp_exact ( char *source , int index ) {
	;
	return ! memcmp ( MD5_std_get_binary ( source ) , MD5_std_all.out [ index ] , sizeof ( MD5_binary ) );
}

struct fmt_main fmt_MD5 = {
	{
		"md5" , "FreeBSD MD5" , "32/" "32" " X2" , "" , - 1 , 15 , 4 , 9 , 2 , 2 , 0x00000001 | 0x00000002 , MD5_fmt_tests 	}

	, {
		nm_MD5_fmt_init , nm_MD5_fmt_valid , fmt_default_split , ( void *( *) ( char *) ) MD5_std_get_binary , ( void *( *) ( char *) ) MD5_std_get_salt , {
			nm_MD5_fmt_binary_hash_0 , nm_MD5_fmt_binary_hash_1 , nm_MD5_fmt_binary_hash_2 , nm_MD5_fmt_binary_hash_3 , nm_MD5_fmt_binary_hash_4 , nm_MD5_fmt_binary_hash_5 , nm_MD5_fmt_binary_hash_6 		}

		, nm_MD5_fmt_salt_hash , ( void ( *) ( void *) ) MD5_std_set_salt , nm_MD5_fmt_set_key , nm_MD5_fmt_get_key , fmt_default_clear_keys , MD5_std_crypt , {
			nm_MD5_fmt_get_hash_0 , nm_MD5_fmt_get_hash_1 , nm_MD5_fmt_get_hash_2 , nm_MD5_fmt_get_hash_3 , nm_MD5_fmt_get_hash_4 , nm_MD5_fmt_get_hash_5 , nm_MD5_fmt_get_hash_6 		}

		, nm_MD5_fmt_cmp_all , nm_MD5_fmt_cmp_one , nm_MD5_fmt_cmp_exact 	}

	, {
		0 	}

	, ( ( void *) 0 ) }

;
MD5_std_combined __attribute__ ( ( aligned ( ( 4 *8 ) ) ) ) MD5_std_all;
static unsigned char MD5_std_PADDING [ 56 ] = {
	0x80 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }

;
void MD5_std_init ( void ) {
	int index;
	MD5_pool *current;
	{
		current = MD5_std_all._pool;
		for ( index = 0;
		index < 2;
		index ++ ) {
			MD5_std_all._order [ 0 ] [ index ].even = & current -> e.p;
			MD5_std_all._order [ 0 ] [ index ].odd = & current -> o.psp;
			;
			MD5_std_all._order [ 1 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 1 ] [ index ].odd = & current -> o.pp;
			;
			MD5_std_all._order [ 2 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 2 ] [ index ].odd = & current -> o.psp;
			;
			MD5_std_all._order [ 3 ] [ index ].even = & current -> e.pp;
			MD5_std_all._order [ 3 ] [ index ].odd = & current -> o.ps;
			;
			MD5_std_all._order [ 4 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 4 ] [ index ].odd = & current -> o.pp;
			;
			MD5_std_all._order [ 5 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 5 ] [ index ].odd = & current -> o.psp;
			;
			MD5_std_all._order [ 6 ] [ index ].even = & current -> e.pp;
			MD5_std_all._order [ 6 ] [ index ].odd = & current -> o.psp;
			;
			MD5_std_all._order [ 7 ] [ index ].even = & current -> e.sp;
			MD5_std_all._order [ 7 ] [ index ].odd = & current -> o.pp;
			;
			MD5_std_all._order [ 8 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 8 ] [ index ].odd = & current -> o.psp;
			;
			MD5_std_all._order [ 9 ] [ index ].even = & current -> e.pp;
			MD5_std_all._order [ 9 ] [ index ].odd = & current -> o.psp;
			;
			MD5_std_all._order [ 10 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 10 ] [ index ].odd = & current -> o.p;
			;
			MD5_std_all._order [ 11 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 11 ] [ index ].odd = & current -> o.psp;
			;
			MD5_std_all._order [ 12 ] [ index ].even = & current -> e.pp;
			MD5_std_all._order [ 12 ] [ index ].odd = & current -> o.psp;
			;
			MD5_std_all._order [ 13 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 13 ] [ index ].odd = & current -> o.pp;
			;
			MD5_std_all._order [ 14 ] [ index ].even = & current -> e.sp;
			MD5_std_all._order [ 14 ] [ index ].odd = & current -> o.psp;
			;
			MD5_std_all._order [ 15 ] [ index ].even = & current -> e.pp;
			MD5_std_all._order [ 15 ] [ index ].odd = & current -> o.psp;
			;
			MD5_std_all._order [ 16 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 16 ] [ index ].odd = & current -> o.pp;
			;
			MD5_std_all._order [ 17 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 17 ] [ index ].odd = & current -> o.ps;
			;
			MD5_std_all._order [ 18 ] [ index ].even = & current -> e.pp;
			MD5_std_all._order [ 18 ] [ index ].odd = & current -> o.psp;
			;
			MD5_std_all._order [ 19 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 19 ] [ index ].odd = & current -> o.pp;
			;
			MD5_std_all._order [ 20 ] [ index ].even = & current -> e.spp;
			MD5_std_all._order [ 20 ] [ index ].odd = & current -> o.psp;
			;
			current ++;
		}

	}

}

void MD5_std_set_salt ( char *salt ) {
	int length;
	for ( length = 0;
	length < 8 && salt [ length ];
	length ++ );
	memcpy ( MD5_std_all._pool [ 0 ].s , salt , MD5_std_all._pool [ 0 ].l.s = length );
	memcpy ( MD5_std_all._pool [ 1 ].s , salt , MD5_std_all._pool [ 1 ].l.s = length );
	if ( salt [ 8 ] ) {
		MD5_std_all.prefix = "$apr1$";
		MD5_std_all.prelen = 6;
	}

	else {
		MD5_std_all.prefix = "$1$";
		MD5_std_all.prelen = 3;
	}

}

void MD5_std_set_key ( char *key , int index ) {
	int length;
	MD5_pool *current;
	;
	for ( length = 0;
	key [ length ] && length < 15;
	length ++ );
	current = & MD5_std_all._pool [ index ];
	memcpy ( current -> o.p.b , key , current -> l.p = length );
	memcpy ( &current -> o.p.b [ length + 16 ] , MD5_std_PADDING , 40 - length );
	current -> o.p.w [ 14 ] = ( length + 16 ) << 3;
	memcpy ( current -> o.pp.b , key , length );
	memcpy ( &current -> o.pp.b [ length ] , key , length );
	current -> l.pp = length << 1;
	memcpy ( &current -> o.pp.b [ current -> l.pp + 16 ] , MD5_std_PADDING , 40 - current -> l.pp );
	current -> o.pp.w [ 14 ] = ( current -> l.pp + 16 ) << 3;
	memcpy ( &current -> e.p.b [ 16 ] , key , length );
	memcpy ( &current -> e.p.b [ 16 + length ] , MD5_std_PADDING , 40 - length );
	current -> e.p.w [ 14 ] = ( length + 16 ) << 3;
	{
		MD5_word *dptr = ( current -> e.p.w ) , *sptr = ( current -> e.p.w );
		int loop_count = ( 14 );
		MD5_word mask = 0x00ff00ff;
		do {
			MD5_word tmp = *sptr ++;
			( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
			*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
			tmp = *sptr ++;
			( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
			*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
		}

		while ( ( loop_count -= 2 ) );
	}

	;
	memcpy ( &current -> e.pp.b [ 16 ] , current -> o.pp.b , current -> l.pp );
	memcpy ( &current -> e.pp.b [ 16 + current -> l.pp ] , MD5_std_PADDING , 40 - current -> l.pp );
	current -> e.pp.w [ 14 ] = ( current -> l.pp + 16 ) << 3;
	{
		MD5_word *dptr = ( current -> e.pp.w ) , *sptr = ( current -> e.pp.w );
		int loop_count = ( 14 );
		MD5_word mask = 0x00ff00ff;
		do {
			MD5_word tmp = *sptr ++;
			( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
			*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
			tmp = *sptr ++;
			( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
			*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
		}

		while ( ( loop_count -= 2 ) );
	}

	;
	MD5_std_all._order [ 1 ] [ index ].length = current -> l.pp;
	MD5_std_all._order [ 4 ] [ index ].length = current -> l.pp;
	MD5_std_all._order [ 7 ] [ index ].length = current -> l.pp;
	MD5_std_all._order [ 10 ] [ index ].length = length;
	MD5_std_all._order [ 13 ] [ index ].length = current -> l.pp;
	MD5_std_all._order [ 16 ] [ index ].length = current -> l.pp;
	MD5_std_all._order [ 19 ] [ index ].length = current -> l.pp;
}

static __attribute__ ( ( always_inline ) ) void nm_MD5_std_MD5_body ( MD5_word x0 [ 15 ] , MD5_word x1 [ 15 ] , MD5_word out0 [ 4 ] , MD5_word out1 [ 4 ] ) {
	MD5_word a0 , b0 = 0xefcdab89 , c0 = 0x98badcfe , d0;
	MD5_word a1 , b1 , c1 , d1;
	MD5_word u , v;
	a0 = ( u = 0xd76aa477 ) + x0 [ 0 ];
	( a0 ) = ( ( ( a0 ) << ( 7 ) ) | ( ( MD5_word ) ( a0 ) >> ( 32 - ( 7 ) ) ) );
	a0 += b0;
	a1 = u + x1 [ 0 ];
	( a1 ) = ( ( ( a1 ) << ( 7 ) ) | ( ( MD5_word ) ( a1 ) >> ( 32 - ( 7 ) ) ) );
	a1 += b0;
	d0 = ( c0 ^ ( a0 & ( u = 0x77777777 ) ) ) + x0 [ 1 ] + ( v = 0xf8fa0bcc );
	( d0 ) = ( ( ( d0 ) << ( 12 ) ) | ( ( MD5_word ) ( d0 ) >> ( 32 - ( 12 ) ) ) );
	d0 += a0;
	d1 = ( c0 ^ ( a1 & u ) ) + x1 [ 1 ] + v;
	( d1 ) = ( ( ( d1 ) << ( 12 ) ) | ( ( MD5_word ) ( d1 ) >> ( 32 - ( 12 ) ) ) );
	d1 += a1;
	c0 = ( ( b0 ) ^ ( ( d0 ) & ( ( a0 ) ^ ( b0 ) ) ) ) + x0 [ 2 ] + ( u = 0xbcdb4dd9 );
	( c0 ) = ( ( ( c0 ) << ( 17 ) ) | ( ( MD5_word ) ( c0 ) >> ( 32 - ( 17 ) ) ) );
	c0 += d0;
	c1 = ( ( b0 ) ^ ( ( d1 ) & ( ( a1 ) ^ ( b0 ) ) ) ) + x1 [ 2 ] + u;
	( c1 ) = ( ( ( c1 ) << ( 17 ) ) | ( ( MD5_word ) ( c1 ) >> ( 32 - ( 17 ) ) ) );
	c1 += d1;
	b0 = ( ( a0 ) ^ ( ( c0 ) & ( ( d0 ) ^ ( a0 ) ) ) ) + x0 [ 3 ] + ( u = 0xb18b7a77 );
	( b0 ) = ( ( ( b0 ) << ( 22 ) ) | ( ( MD5_word ) ( b0 ) >> ( 32 - ( 22 ) ) ) );
	b0 += c0;
	b1 = ( ( a1 ) ^ ( ( c1 ) & ( ( d1 ) ^ ( a1 ) ) ) ) + x1 [ 3 ] + u;
	( b1 ) = ( ( ( b1 ) << ( 22 ) ) | ( ( MD5_word ) ( b1 ) >> ( 32 - ( 22 ) ) ) );
	b1 += c1;
	( a0 ) += ( ( ( d0 ) ) ^ ( ( ( b0 ) ) & ( ( ( c0 ) ) ^ ( ( d0 ) ) ) ) ) + ( x0 [ 4 ] ) + ( ( u = 0xf57c0faf ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 7 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 7 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( d1 ) ) ^ ( ( ( b1 ) ) & ( ( ( c1 ) ) ^ ( ( d1 ) ) ) ) ) + ( x1 [ 4 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 7 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 7 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( c0 ) ) ^ ( ( ( a0 ) ) & ( ( ( b0 ) ) ^ ( ( c0 ) ) ) ) ) + ( x0 [ 5 ] ) + ( ( u = 0x4787c62a ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 12 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 12 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( c1 ) ) ^ ( ( ( a1 ) ) & ( ( ( b1 ) ) ^ ( ( c1 ) ) ) ) ) + ( x1 [ 5 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 12 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 12 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( b0 ) ) ^ ( ( ( d0 ) ) & ( ( ( a0 ) ) ^ ( ( b0 ) ) ) ) ) + ( x0 [ 6 ] ) + ( ( u = 0xa8304613 ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 17 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 17 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( b1 ) ) ^ ( ( ( d1 ) ) & ( ( ( a1 ) ) ^ ( ( b1 ) ) ) ) ) + ( x1 [ 6 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 17 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 17 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( a0 ) ) ^ ( ( ( c0 ) ) & ( ( ( d0 ) ) ^ ( ( a0 ) ) ) ) ) + ( x0 [ 7 ] ) + ( ( u = 0xfd469501 ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 22 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 22 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( a1 ) ) ^ ( ( ( c1 ) ) & ( ( ( d1 ) ) ^ ( ( a1 ) ) ) ) ) + ( x1 [ 7 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 22 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 22 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( d0 ) ) ^ ( ( ( b0 ) ) & ( ( ( c0 ) ) ^ ( ( d0 ) ) ) ) ) + ( x0 [ 8 ] ) + ( ( u = 0x698098d8 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 7 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 7 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( d1 ) ) ^ ( ( ( b1 ) ) & ( ( ( c1 ) ) ^ ( ( d1 ) ) ) ) ) + ( x1 [ 8 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 7 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 7 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( c0 ) ) ^ ( ( ( a0 ) ) & ( ( ( b0 ) ) ^ ( ( c0 ) ) ) ) ) + ( x0 [ 9 ] ) + ( ( u = 0x8b44f7af ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 12 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 12 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( c1 ) ) ^ ( ( ( a1 ) ) & ( ( ( b1 ) ) ^ ( ( c1 ) ) ) ) ) + ( x1 [ 9 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 12 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 12 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( b0 ) ) ^ ( ( ( d0 ) ) & ( ( ( a0 ) ) ^ ( ( b0 ) ) ) ) ) + ( x0 [ 10 ] ) + ( ( u = 0xffff5bb1 ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 17 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 17 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( b1 ) ) ^ ( ( ( d1 ) ) & ( ( ( a1 ) ) ^ ( ( b1 ) ) ) ) ) + ( x1 [ 10 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 17 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 17 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( a0 ) ) ^ ( ( ( c0 ) ) & ( ( ( d0 ) ) ^ ( ( a0 ) ) ) ) ) + ( x0 [ 11 ] ) + ( ( u = 0x895cd7be ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 22 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 22 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( a1 ) ) ^ ( ( ( c1 ) ) & ( ( ( d1 ) ) ^ ( ( a1 ) ) ) ) ) + ( x1 [ 11 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 22 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 22 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( d0 ) ) ^ ( ( ( b0 ) ) & ( ( ( c0 ) ) ^ ( ( d0 ) ) ) ) ) + ( x0 [ 12 ] ) + ( ( u = 0x6b901122 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 7 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 7 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( d1 ) ) ^ ( ( ( b1 ) ) & ( ( ( c1 ) ) ^ ( ( d1 ) ) ) ) ) + ( x1 [ 12 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 7 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 7 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( c0 ) ) ^ ( ( ( a0 ) ) & ( ( ( b0 ) ) ^ ( ( c0 ) ) ) ) ) + ( x0 [ 13 ] ) + ( ( u = 0xfd987193 ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 12 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 12 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( c1 ) ) ^ ( ( ( a1 ) ) & ( ( ( b1 ) ) ^ ( ( c1 ) ) ) ) ) + ( x1 [ 13 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 12 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 12 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( b0 ) ) ^ ( ( ( d0 ) ) & ( ( ( a0 ) ) ^ ( ( b0 ) ) ) ) ) + ( x0 [ 14 ] ) + ( ( u = 0xa679438e ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 17 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 17 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( b1 ) ) ^ ( ( ( d1 ) ) & ( ( ( a1 ) ) ^ ( ( b1 ) ) ) ) ) + ( x1 [ 14 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 17 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 17 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	b0 += ( ( a0 ) ^ ( ( c0 ) & ( ( d0 ) ^ ( a0 ) ) ) ) + ( u = 0x49b40821 );
	( b0 ) = ( ( ( b0 ) << ( 22 ) ) | ( ( MD5_word ) ( b0 ) >> ( 32 - ( 22 ) ) ) );
	b0 += c0;
	b1 += ( ( a1 ) ^ ( ( c1 ) & ( ( d1 ) ^ ( a1 ) ) ) ) + u;
	( b1 ) = ( ( ( b1 ) << ( 22 ) ) | ( ( MD5_word ) ( b1 ) >> ( 32 - ( 22 ) ) ) );
	b1 += c1;
	( a0 ) += ( ( ( c0 ) ) ^ ( ( ( d0 ) ) & ( ( ( b0 ) ) ^ ( ( c0 ) ) ) ) ) + ( x0 [ 1 ] ) + ( ( u = 0xf61e2562 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 5 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 5 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( c1 ) ) ^ ( ( ( d1 ) ) & ( ( ( b1 ) ) ^ ( ( c1 ) ) ) ) ) + ( x1 [ 1 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 5 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 5 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( b0 ) ) ^ ( ( ( c0 ) ) & ( ( ( a0 ) ) ^ ( ( b0 ) ) ) ) ) + ( x0 [ 6 ] ) + ( ( u = 0xc040b340 ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 9 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 9 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( b1 ) ) ^ ( ( ( c1 ) ) & ( ( ( a1 ) ) ^ ( ( b1 ) ) ) ) ) + ( x1 [ 6 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 9 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 9 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( a0 ) ) ^ ( ( ( b0 ) ) & ( ( ( d0 ) ) ^ ( ( a0 ) ) ) ) ) + ( x0 [ 11 ] ) + ( ( u = 0x265e5a51 ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 14 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 14 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( a1 ) ) ^ ( ( ( b1 ) ) & ( ( ( d1 ) ) ^ ( ( a1 ) ) ) ) ) + ( x1 [ 11 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 14 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 14 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( d0 ) ) ^ ( ( ( a0 ) ) & ( ( ( c0 ) ) ^ ( ( d0 ) ) ) ) ) + ( x0 [ 0 ] ) + ( ( u = 0xe9b6c7aa ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 20 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 20 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( d1 ) ) ^ ( ( ( a1 ) ) & ( ( ( c1 ) ) ^ ( ( d1 ) ) ) ) ) + ( x1 [ 0 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 20 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 20 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( c0 ) ) ^ ( ( ( d0 ) ) & ( ( ( b0 ) ) ^ ( ( c0 ) ) ) ) ) + ( x0 [ 5 ] ) + ( ( u = 0xd62f105d ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 5 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 5 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( c1 ) ) ^ ( ( ( d1 ) ) & ( ( ( b1 ) ) ^ ( ( c1 ) ) ) ) ) + ( x1 [ 5 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 5 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 5 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( b0 ) ) ^ ( ( ( c0 ) ) & ( ( ( a0 ) ) ^ ( ( b0 ) ) ) ) ) + ( x0 [ 10 ] ) + ( ( u = 0x02441453 ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 9 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 9 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( b1 ) ) ^ ( ( ( c1 ) ) & ( ( ( a1 ) ) ^ ( ( b1 ) ) ) ) ) + ( x1 [ 10 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 9 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 9 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	c0 += ( ( a0 ) ^ ( ( b0 ) & ( ( d0 ) ^ ( a0 ) ) ) ) + ( u = 0xd8a1e681 );
	( c0 ) = ( ( ( c0 ) << ( 14 ) ) | ( ( MD5_word ) ( c0 ) >> ( 32 - ( 14 ) ) ) );
	c0 += d0;
	c1 += ( ( a1 ) ^ ( ( b1 ) & ( ( d1 ) ^ ( a1 ) ) ) ) + u;
	( c1 ) = ( ( ( c1 ) << ( 14 ) ) | ( ( MD5_word ) ( c1 ) >> ( 32 - ( 14 ) ) ) );
	c1 += d1;
	( b0 ) += ( ( ( d0 ) ) ^ ( ( ( a0 ) ) & ( ( ( c0 ) ) ^ ( ( d0 ) ) ) ) ) + ( x0 [ 4 ] ) + ( ( u = 0xe7d3fbc8 ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 20 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 20 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( d1 ) ) ^ ( ( ( a1 ) ) & ( ( ( c1 ) ) ^ ( ( d1 ) ) ) ) ) + ( x1 [ 4 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 20 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 20 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( c0 ) ) ^ ( ( ( d0 ) ) & ( ( ( b0 ) ) ^ ( ( c0 ) ) ) ) ) + ( x0 [ 9 ] ) + ( ( u = 0x21e1cde6 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 5 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 5 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( c1 ) ) ^ ( ( ( d1 ) ) & ( ( ( b1 ) ) ^ ( ( c1 ) ) ) ) ) + ( x1 [ 9 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 5 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 5 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( b0 ) ) ^ ( ( ( c0 ) ) & ( ( ( a0 ) ) ^ ( ( b0 ) ) ) ) ) + ( x0 [ 14 ] ) + ( ( u = 0xc33707d6 ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 9 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 9 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( b1 ) ) ^ ( ( ( c1 ) ) & ( ( ( a1 ) ) ^ ( ( b1 ) ) ) ) ) + ( x1 [ 14 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 9 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 9 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( a0 ) ) ^ ( ( ( b0 ) ) & ( ( ( d0 ) ) ^ ( ( a0 ) ) ) ) ) + ( x0 [ 3 ] ) + ( ( u = 0xf4d50d87 ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 14 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 14 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( a1 ) ) ^ ( ( ( b1 ) ) & ( ( ( d1 ) ) ^ ( ( a1 ) ) ) ) ) + ( x1 [ 3 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 14 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 14 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( d0 ) ) ^ ( ( ( a0 ) ) & ( ( ( c0 ) ) ^ ( ( d0 ) ) ) ) ) + ( x0 [ 8 ] ) + ( ( u = 0x455a14ed ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 20 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 20 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( d1 ) ) ^ ( ( ( a1 ) ) & ( ( ( c1 ) ) ^ ( ( d1 ) ) ) ) ) + ( x1 [ 8 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 20 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 20 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( c0 ) ) ^ ( ( ( d0 ) ) & ( ( ( b0 ) ) ^ ( ( c0 ) ) ) ) ) + ( x0 [ 13 ] ) + ( ( u = 0xa9e3e905 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 5 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 5 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( c1 ) ) ^ ( ( ( d1 ) ) & ( ( ( b1 ) ) ^ ( ( c1 ) ) ) ) ) + ( x1 [ 13 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 5 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 5 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( b0 ) ) ^ ( ( ( c0 ) ) & ( ( ( a0 ) ) ^ ( ( b0 ) ) ) ) ) + ( x0 [ 2 ] ) + ( ( u = 0xfcefa3f8 ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 9 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 9 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( b1 ) ) ^ ( ( ( c1 ) ) & ( ( ( a1 ) ) ^ ( ( b1 ) ) ) ) ) + ( x1 [ 2 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 9 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 9 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( a0 ) ) ^ ( ( ( b0 ) ) & ( ( ( d0 ) ) ^ ( ( a0 ) ) ) ) ) + ( x0 [ 7 ] ) + ( ( u = 0x676f02d9 ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 14 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 14 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( a1 ) ) ^ ( ( ( b1 ) ) & ( ( ( d1 ) ) ^ ( ( a1 ) ) ) ) ) + ( x1 [ 7 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 14 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 14 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( d0 ) ) ^ ( ( ( a0 ) ) & ( ( ( c0 ) ) ^ ( ( d0 ) ) ) ) ) + ( x0 [ 12 ] ) + ( ( u = 0x8d2a4c8a ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 20 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 20 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( d1 ) ) ^ ( ( ( a1 ) ) & ( ( ( c1 ) ) ^ ( ( d1 ) ) ) ) ) + ( x1 [ 12 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 20 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 20 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( b0 ) ) ^ ( ( c0 ) ) ^ ( ( d0 ) ) ) + ( x0 [ 5 ] ) + ( ( u = 0xfffa3942 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 4 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 4 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( b1 ) ) ^ ( ( c1 ) ) ^ ( ( d1 ) ) ) + ( x1 [ 5 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 4 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 4 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( a0 ) ) ^ ( ( b0 ) ) ^ ( ( c0 ) ) ) + ( x0 [ 8 ] ) + ( ( u = 0x8771f681 ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 11 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 11 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( a1 ) ) ^ ( ( b1 ) ) ^ ( ( c1 ) ) ) + ( x1 [ 8 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 11 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 11 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( d0 ) ) ^ ( ( a0 ) ) ^ ( ( b0 ) ) ) + ( x0 [ 11 ] ) + ( ( u = 0x6d9d6122 ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 16 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 16 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( d1 ) ) ^ ( ( a1 ) ) ^ ( ( b1 ) ) ) + ( x1 [ 11 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 16 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 16 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( c0 ) ) ^ ( ( d0 ) ) ^ ( ( a0 ) ) ) + ( x0 [ 14 ] ) + ( ( u = 0xfde5380c ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 23 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 23 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( c1 ) ) ^ ( ( d1 ) ) ^ ( ( a1 ) ) ) + ( x1 [ 14 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 23 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 23 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( b0 ) ) ^ ( ( c0 ) ) ^ ( ( d0 ) ) ) + ( x0 [ 1 ] ) + ( ( u = 0xa4beea44 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 4 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 4 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( b1 ) ) ^ ( ( c1 ) ) ^ ( ( d1 ) ) ) + ( x1 [ 1 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 4 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 4 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( a0 ) ) ^ ( ( b0 ) ) ^ ( ( c0 ) ) ) + ( x0 [ 4 ] ) + ( ( u = 0x4bdecfa9 ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 11 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 11 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( a1 ) ) ^ ( ( b1 ) ) ^ ( ( c1 ) ) ) + ( x1 [ 4 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 11 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 11 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( d0 ) ) ^ ( ( a0 ) ) ^ ( ( b0 ) ) ) + ( x0 [ 7 ] ) + ( ( u = 0xf6bb4b60 ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 16 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 16 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( d1 ) ) ^ ( ( a1 ) ) ^ ( ( b1 ) ) ) + ( x1 [ 7 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 16 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 16 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( c0 ) ) ^ ( ( d0 ) ) ^ ( ( a0 ) ) ) + ( x0 [ 10 ] ) + ( ( u = 0xbebfbc70 ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 23 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 23 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( c1 ) ) ^ ( ( d1 ) ) ^ ( ( a1 ) ) ) + ( x1 [ 10 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 23 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 23 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( b0 ) ) ^ ( ( c0 ) ) ^ ( ( d0 ) ) ) + ( x0 [ 13 ] ) + ( ( u = 0x289b7ec6 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 4 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 4 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( b1 ) ) ^ ( ( c1 ) ) ^ ( ( d1 ) ) ) + ( x1 [ 13 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 4 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 4 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( a0 ) ) ^ ( ( b0 ) ) ^ ( ( c0 ) ) ) + ( x0 [ 0 ] ) + ( ( u = 0xeaa127fa ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 11 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 11 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( a1 ) ) ^ ( ( b1 ) ) ^ ( ( c1 ) ) ) + ( x1 [ 0 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 11 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 11 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( d0 ) ) ^ ( ( a0 ) ) ^ ( ( b0 ) ) ) + ( x0 [ 3 ] ) + ( ( u = 0xd4ef3085 ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 16 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 16 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( d1 ) ) ^ ( ( a1 ) ) ^ ( ( b1 ) ) ) + ( x1 [ 3 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 16 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 16 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( c0 ) ) ^ ( ( d0 ) ) ^ ( ( a0 ) ) ) + ( x0 [ 6 ] ) + ( ( u = 0x04881d05 ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 23 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 23 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( c1 ) ) ^ ( ( d1 ) ) ^ ( ( a1 ) ) ) + ( x1 [ 6 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 23 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 23 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( b0 ) ) ^ ( ( c0 ) ) ^ ( ( d0 ) ) ) + ( x0 [ 9 ] ) + ( ( u = 0xd9d4d039 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 4 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 4 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( b1 ) ) ^ ( ( c1 ) ) ^ ( ( d1 ) ) ) + ( x1 [ 9 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 4 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 4 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( a0 ) ) ^ ( ( b0 ) ) ^ ( ( c0 ) ) ) + ( x0 [ 12 ] ) + ( ( u = 0xe6db99e5 ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 11 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 11 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( a1 ) ) ^ ( ( b1 ) ) ^ ( ( c1 ) ) ) + ( x1 [ 12 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 11 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 11 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	c0 += ( ( d0 ) ^ ( a0 ) ^ ( b0 ) ) + ( u = 0x1fa27cf8 );
	( c0 ) = ( ( ( c0 ) << ( 16 ) ) | ( ( MD5_word ) ( c0 ) >> ( 32 - ( 16 ) ) ) );
	c0 += d0;
	c1 += ( ( d1 ) ^ ( a1 ) ^ ( b1 ) ) + u;
	( c1 ) = ( ( ( c1 ) << ( 16 ) ) | ( ( MD5_word ) ( c1 ) >> ( 32 - ( 16 ) ) ) );
	c1 += d1;
	( b0 ) += ( ( ( c0 ) ) ^ ( ( d0 ) ) ^ ( ( a0 ) ) ) + ( x0 [ 2 ] ) + ( ( u = 0xc4ac5665 ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 23 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 23 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( c1 ) ) ^ ( ( d1 ) ) ^ ( ( a1 ) ) ) + ( x1 [ 2 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 23 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 23 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( c0 ) ) ^ ( ( ( b0 ) ) | ~ ( ( d0 ) ) ) ) + ( x0 [ 0 ] ) + ( ( u = 0xf4292244 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 6 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 6 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( c1 ) ) ^ ( ( ( b1 ) ) | ~ ( ( d1 ) ) ) ) + ( x1 [ 0 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 6 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 6 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( b0 ) ) ^ ( ( ( a0 ) ) | ~ ( ( c0 ) ) ) ) + ( x0 [ 7 ] ) + ( ( u = 0x432aff97 ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 10 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 10 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( b1 ) ) ^ ( ( ( a1 ) ) | ~ ( ( c1 ) ) ) ) + ( x1 [ 7 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 10 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 10 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( a0 ) ) ^ ( ( ( d0 ) ) | ~ ( ( b0 ) ) ) ) + ( x0 [ 14 ] ) + ( ( u = 0xab9423a7 ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 15 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 15 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( a1 ) ) ^ ( ( ( d1 ) ) | ~ ( ( b1 ) ) ) ) + ( x1 [ 14 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 15 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 15 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( d0 ) ) ^ ( ( ( c0 ) ) | ~ ( ( a0 ) ) ) ) + ( x0 [ 5 ] ) + ( ( u = 0xfc93a039 ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 21 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 21 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( d1 ) ) ^ ( ( ( c1 ) ) | ~ ( ( a1 ) ) ) ) + ( x1 [ 5 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 21 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 21 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( c0 ) ) ^ ( ( ( b0 ) ) | ~ ( ( d0 ) ) ) ) + ( x0 [ 12 ] ) + ( ( u = 0x655b59c3 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 6 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 6 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( c1 ) ) ^ ( ( ( b1 ) ) | ~ ( ( d1 ) ) ) ) + ( x1 [ 12 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 6 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 6 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( b0 ) ) ^ ( ( ( a0 ) ) | ~ ( ( c0 ) ) ) ) + ( x0 [ 3 ] ) + ( ( u = 0x8f0ccc92 ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 10 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 10 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( b1 ) ) ^ ( ( ( a1 ) ) | ~ ( ( c1 ) ) ) ) + ( x1 [ 3 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 10 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 10 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( a0 ) ) ^ ( ( ( d0 ) ) | ~ ( ( b0 ) ) ) ) + ( x0 [ 10 ] ) + ( ( u = 0xffeff47d ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 15 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 15 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( a1 ) ) ^ ( ( ( d1 ) ) | ~ ( ( b1 ) ) ) ) + ( x1 [ 10 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 15 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 15 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( d0 ) ) ^ ( ( ( c0 ) ) | ~ ( ( a0 ) ) ) ) + ( x0 [ 1 ] ) + ( ( u = 0x85845dd1 ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 21 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 21 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( d1 ) ) ^ ( ( ( c1 ) ) | ~ ( ( a1 ) ) ) ) + ( x1 [ 1 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 21 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 21 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( c0 ) ) ^ ( ( ( b0 ) ) | ~ ( ( d0 ) ) ) ) + ( x0 [ 8 ] ) + ( ( u = 0x6fa87e4f ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 6 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 6 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( c1 ) ) ^ ( ( ( b1 ) ) | ~ ( ( d1 ) ) ) ) + ( x1 [ 8 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 6 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 6 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	d0 += ( ( b0 ) ^ ( ( a0 ) | ~ ( c0 ) ) ) + ( u = 0xfe2ce6e0 );
	( d0 ) = ( ( ( d0 ) << ( 10 ) ) | ( ( MD5_word ) ( d0 ) >> ( 32 - ( 10 ) ) ) );
	d0 += a0;
	d1 += ( ( b1 ) ^ ( ( a1 ) | ~ ( c1 ) ) ) + u;
	( d1 ) = ( ( ( d1 ) << ( 10 ) ) | ( ( MD5_word ) ( d1 ) >> ( 32 - ( 10 ) ) ) );
	d1 += a1;
	( c0 ) += ( ( ( a0 ) ) ^ ( ( ( d0 ) ) | ~ ( ( b0 ) ) ) ) + ( x0 [ 6 ] ) + ( ( u = 0xa3014314 ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 15 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 15 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( a1 ) ) ^ ( ( ( d1 ) ) | ~ ( ( b1 ) ) ) ) + ( x1 [ 6 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 15 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 15 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( d0 ) ) ^ ( ( ( c0 ) ) | ~ ( ( a0 ) ) ) ) + ( x0 [ 13 ] ) + ( ( u = 0x4e0811a1 ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 21 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 21 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( d1 ) ) ^ ( ( ( c1 ) ) | ~ ( ( a1 ) ) ) ) + ( x1 [ 13 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 21 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 21 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	( a0 ) += ( ( ( c0 ) ) ^ ( ( ( b0 ) ) | ~ ( ( d0 ) ) ) ) + ( x0 [ 4 ] ) + ( ( u = 0xf7537e82 ) );
	( ( a0 ) ) = ( ( ( ( a0 ) ) << ( ( 6 ) ) ) | ( ( MD5_word ) ( ( a0 ) ) >> ( 32 - ( ( 6 ) ) ) ) );
	( a0 ) += ( b0 );
	;
	( a1 ) += ( ( ( c1 ) ) ^ ( ( ( b1 ) ) | ~ ( ( d1 ) ) ) ) + ( x1 [ 4 ] ) + ( u );
	( ( a1 ) ) = ( ( ( ( a1 ) ) << ( ( 6 ) ) ) | ( ( MD5_word ) ( ( a1 ) ) >> ( 32 - ( ( 6 ) ) ) ) );
	( a1 ) += ( b1 );
	;
	( d0 ) += ( ( ( b0 ) ) ^ ( ( ( a0 ) ) | ~ ( ( c0 ) ) ) ) + ( x0 [ 11 ] ) + ( ( u = 0xbd3af235 ) );
	( ( d0 ) ) = ( ( ( ( d0 ) ) << ( ( 10 ) ) ) | ( ( MD5_word ) ( ( d0 ) ) >> ( 32 - ( ( 10 ) ) ) ) );
	( d0 ) += ( a0 );
	;
	( d1 ) += ( ( ( b1 ) ) ^ ( ( ( a1 ) ) | ~ ( ( c1 ) ) ) ) + ( x1 [ 11 ] ) + ( u );
	( ( d1 ) ) = ( ( ( ( d1 ) ) << ( ( 10 ) ) ) | ( ( MD5_word ) ( ( d1 ) ) >> ( 32 - ( ( 10 ) ) ) ) );
	( d1 ) += ( a1 );
	;
	( c0 ) += ( ( ( a0 ) ) ^ ( ( ( d0 ) ) | ~ ( ( b0 ) ) ) ) + ( x0 [ 2 ] ) + ( ( u = 0x2ad7d2bb ) );
	( ( c0 ) ) = ( ( ( ( c0 ) ) << ( ( 15 ) ) ) | ( ( MD5_word ) ( ( c0 ) ) >> ( 32 - ( ( 15 ) ) ) ) );
	( c0 ) += ( d0 );
	;
	( c1 ) += ( ( ( a1 ) ) ^ ( ( ( d1 ) ) | ~ ( ( b1 ) ) ) ) + ( x1 [ 2 ] ) + ( u );
	( ( c1 ) ) = ( ( ( ( c1 ) ) << ( ( 15 ) ) ) | ( ( MD5_word ) ( ( c1 ) ) >> ( 32 - ( ( 15 ) ) ) ) );
	( c1 ) += ( d1 );
	;
	( b0 ) += ( ( ( d0 ) ) ^ ( ( ( c0 ) ) | ~ ( ( a0 ) ) ) ) + ( x0 [ 9 ] ) + ( ( u = 0xeb86d391 ) );
	( ( b0 ) ) = ( ( ( ( b0 ) ) << ( ( 21 ) ) ) | ( ( MD5_word ) ( ( b0 ) ) >> ( 32 - ( ( 21 ) ) ) ) );
	( b0 ) += ( c0 );
	;
	( b1 ) += ( ( ( d1 ) ) ^ ( ( ( c1 ) ) | ~ ( ( a1 ) ) ) ) + ( x1 [ 9 ] ) + ( u );
	( ( b1 ) ) = ( ( ( ( b1 ) ) << ( ( 21 ) ) ) | ( ( MD5_word ) ( ( b1 ) ) >> ( 32 - ( ( 21 ) ) ) ) );
	( b1 ) += ( c1 );
	;
	out1 [ 3 ] = 0x10325476 + d1;
	out0 [ 0 ] = 0x67452301 + a0;
	out0 [ 1 ] = 0xefcdab89 + b0;
	out0 [ 2 ] = 0x98badcfe + c0;
	out0 [ 3 ] = 0x10325476 + d0;
	out1 [ 0 ] = 0x67452301 + a1;
	out1 [ 1 ] = 0xefcdab89 + b1;
	out1 [ 2 ] = 0x98badcfe + c1;
}

void MD5_std_crypt ( int count ) {
	int length , index , mask;
	MD5_pattern *line;
	MD5_pool *key;
	for ( index = 0 , key = MD5_std_all._pool;
	index < 2;
	index ++ , key ++ ) {
		memcpy ( key -> o.ps.b , key -> o.p.b , key -> l.p );
		memcpy ( &key -> o.ps.b [ key -> l.p ] , key -> s , key -> l.s );
		key -> l.ps = key -> l.p + key -> l.s;
		memcpy ( &key -> o.ps.b [ key -> l.ps + 16 ] , MD5_std_PADDING , 40 - key -> l.ps );
		key -> o.ps.w [ 14 ] = ( key -> l.ps + 16 ) << 3;
		memcpy ( key -> o.psp.b , key -> o.ps.b , key -> l.ps );
		memcpy ( &key -> o.psp.b [ key -> l.ps ] , key -> o.p.b , key -> l.p );
		key -> l.psp = key -> l.ps + key -> l.p;
		memcpy ( &key -> o.psp.b [ key -> l.psp + 16 ] , MD5_std_PADDING , 40 - key -> l.psp );
		key -> o.psp.w [ 14 ] = ( key -> l.psp + 16 ) << 3;
		memcpy ( &key -> e.sp.b [ 16 ] , key -> s , key -> l.s );
		memcpy ( &key -> e.sp.b [ 16 + key -> l.s ] , key -> o.p.b , key -> l.p );
		memcpy ( &key -> e.sp.b [ 16 + key -> l.ps ] , MD5_std_PADDING , 40 - key -> l.ps );
		key -> e.sp.w [ 14 ] = ( key -> l.ps + 16 ) << 3;
		{
			MD5_word *dptr = ( key -> e.sp.w ) , *sptr = ( key -> e.sp.w );
			int loop_count = ( 14 );
			MD5_word mask = 0x00ff00ff;
			do {
				MD5_word tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
				tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
			}

			while ( ( loop_count -= 2 ) );
		}

		;
		memcpy ( &key -> e.spp.b [ 16 ] , key -> s , key -> l.s );
		memcpy ( &key -> e.spp.b [ 16 + key -> l.s ] , key -> o.pp.b , key -> l.pp );
		memcpy ( &key -> e.spp.b [ 16 + key -> l.psp ] , MD5_std_PADDING , 40 - key -> l.psp );
		key -> e.spp.w [ 14 ] = ( key -> l.psp + 16 ) << 3;
		{
			MD5_word *dptr = ( key -> e.spp.w ) , *sptr = ( key -> e.spp.w );
			int loop_count = ( 14 );
			MD5_word mask = 0x00ff00ff;
			do {
				MD5_word tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
				tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
			}

			while ( ( loop_count -= 2 ) );
		}

		;
		MD5_std_all._order [ 0 ] [ index ].length = key -> l.psp;
		MD5_std_all._order [ 2 ] [ index ].length = key -> l.psp;
		MD5_std_all._order [ 3 ] [ index ].length = key -> l.ps;
		MD5_std_all._order [ 5 ] [ index ].length = key -> l.psp;
		MD5_std_all._order [ 6 ] [ index ].length = key -> l.psp;
		MD5_std_all._order [ 8 ] [ index ].length = key -> l.psp;
		MD5_std_all._order [ 9 ] [ index ].length = key -> l.psp;
		MD5_std_all._order [ 11 ] [ index ].length = key -> l.psp;
		MD5_std_all._order [ 12 ] [ index ].length = key -> l.psp;
		MD5_std_all._order [ 14 ] [ index ].length = key -> l.psp;
		MD5_std_all._order [ 15 ] [ index ].length = key -> l.psp;
		MD5_std_all._order [ 17 ] [ index ].length = key -> l.ps;
		MD5_std_all._order [ 18 ] [ index ].length = key -> l.psp;
		MD5_std_all._order [ 20 ] [ index ].length = key -> l.psp;
		memcpy ( &MD5_std_all._block [ index ] , key -> o.psp.b , key -> l.psp );
		memcpy ( &MD5_std_all._block [ index ].b [ key -> l.psp ] , MD5_std_PADDING , 56 - key -> l.psp );
		MD5_std_all._block [ index ].w [ 14 ] = key -> l.psp << 3;
		{
			MD5_word *dptr = ( MD5_std_all._block [ index ].w ) , *sptr = ( MD5_std_all._block [ index ].w );
			int loop_count = ( 14 );
			MD5_word mask = 0x00ff00ff;
			do {
				MD5_word tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
				tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
			}

			while ( ( loop_count -= 2 ) );
		}

		;
	}

	nm_MD5_std_MD5_body ( MD5_std_all._block [ 0 ].w , MD5_std_all._block [ 1 ].w , MD5_std_all.out [ 0 ] , MD5_std_all.out [ 1 ] );
	{
		MD5_word *dptr = ( MD5_std_all.out [ 0 ] ) , *sptr = ( MD5_std_all.out [ 0 ] );
		int loop_count = ( 8 );
		MD5_word mask = 0x00ff00ff;
		do {
			MD5_word tmp = *sptr ++;
			( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
			*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
			tmp = *sptr ++;
			( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
			*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
		}

		while ( ( loop_count -= 2 ) );
	}

	;
	for ( index = 0 , key = MD5_std_all._pool;
	index < 2;
	index ++ , key ++ ) {
		memcpy ( &MD5_std_all._block [ index ] , key -> o.p.b , key -> l.p );
		memcpy ( &MD5_std_all._block [ index ].b [ key -> l.p ] , MD5_std_all.prefix , MD5_std_all.prelen );
		memcpy ( &MD5_std_all._block [ index ].b [ key -> l.p + MD5_std_all.prelen ] , key -> s , key -> l.s );
		memcpy ( &MD5_std_all._block [ index ].b [ key -> l.ps + MD5_std_all.prelen ] , MD5_std_all.out [ index ] , key -> l.p );
		length = key -> l.psp + MD5_std_all.prelen;
		if ( ( mask = key -> l.p ) ) do {
			MD5_std_all._block [ index ].b [ length ++ ] = ( mask & 1 ) ? 0 : key -> o.p.b [ 0 ];
		}

		while ( mask >>= 1 );
		memcpy ( &MD5_std_all._block [ index ].b [ length ] , MD5_std_PADDING , 56 - length );
		MD5_std_all._block [ index ].w [ 14 ] = length << 3;
		{
			MD5_word *dptr = ( MD5_std_all._block [ index ].w ) , *sptr = ( MD5_std_all._block [ index ].w );
			int loop_count = ( 14 );
			MD5_word mask = 0x00ff00ff;
			do {
				MD5_word tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
				tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
			}

			while ( ( loop_count -= 2 ) );
		}

		;
	}

	nm_MD5_std_MD5_body ( MD5_std_all._block [ 0 ].w , MD5_std_all._block [ 1 ].w , MD5_std_all._order [ 0 ] [ 0 ].even -> w , MD5_std_all._order [ 0 ] [ 1 ].even -> w );
	index = 500;
	line = MD5_std_all._order [ 0 ];
	do {
		nm_MD5_std_MD5_body ( line [ 0 ].even -> w , line [ 1 ].even -> w , MD5_std_all.out [ 0 ] , MD5_std_all.out [ 1 ] );
		{
			MD5_word *dptr = ( MD5_std_all.out [ 0 ] ) , *sptr = ( MD5_std_all.out [ 0 ] );
			int loop_count = ( 8 );
			MD5_word mask = 0x00ff00ff;
			do {
				MD5_word tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
				tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
			}

			while ( ( loop_count -= 2 ) );
		}

		;
		memcpy ( &line [ 0 ].odd -> b [ line [ 0 ].length ] , MD5_std_all.out [ 0 ] , 16 );
		memcpy ( &line [ 1 ].odd -> b [ line [ 1 ].length ] , MD5_std_all.out [ 1 ] , 16 );
		{
			MD5_word *dptr = ( MD5_std_all._block [ 0 ].w ) , *sptr = ( line [ 0 ].odd -> w );
			int loop_count = ( 14 );
			MD5_word mask = 0x00ff00ff;
			do {
				MD5_word tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
				tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
			}

			while ( ( loop_count -= 2 ) );
		}

		;
		MD5_std_all._block [ 0 ].w [ 14 ] = line [ 0 ].odd -> w [ 14 ];
		{
			MD5_word *dptr = ( MD5_std_all._block [ 1 ].w ) , *sptr = ( line [ 1 ].odd -> w );
			int loop_count = ( 14 );
			MD5_word mask = 0x00ff00ff;
			do {
				MD5_word tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
				tmp = *sptr ++;
				( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
				*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
			}

			while ( ( loop_count -= 2 ) );
		}

		;
		MD5_std_all._block [ 1 ].w [ 14 ] = line [ 1 ].odd -> w [ 14 ];
		if ( ( line += 2 ) > & MD5_std_all._order [ 20 ] [ 2 - 1 ] ) line = MD5_std_all._order [ 0 ];
		nm_MD5_std_MD5_body ( MD5_std_all._block [ 0 ].w , MD5_std_all._block [ 1 ].w , line [ 0 ].even -> w , line [ 1 ].even -> w );
	}

	while ( -- index );
	memcpy ( MD5_std_all.out [ 0 ] , line [ 0 ].even , 16 );
	memcpy ( MD5_std_all.out [ 1 ] , line [ 1 ].even , 16 );
}

char *MD5_std_get_salt ( char *ciphertext ) {
	static char out [ 9 ];
	char *p , *q;
	int i;
	p = ciphertext + 3;
	if ( ( out [ 8 ] = ! strncmp ( ciphertext , "$apr1$" , 6 ) ) ) p = ciphertext + 6;
	q = out;
	for ( i = 0;
	*p != '$' && i < 8;
	i ++ ) *q ++ = *p ++;
	while ( i ++ < 8 ) *q ++ = 0;
	return out;
}

MD5_word *MD5_std_get_binary ( char *ciphertext ) {
	static union {
		MD5_binary w;
		char b [ 16 ];
	}

	out;
	char *pos;
	MD5_word value;
	pos = ciphertext + 3;
	if ( ! strncmp ( ciphertext , "$apr1$" , 6 ) ) pos = ciphertext + 6;
	while ( *pos ++ != '$' );
	value = ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 0 ] ) ) ] | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 1 ] ) ) ] << 6 ) | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 2 ] ) ) ] << 12 ) | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 3 ] ) ) ] << 18 );
	pos += 4;
	out.b [ 0 ] = value >> 16;
	out.b [ 6 ] = value >> 8;
	out.b [ 12 ] = value;
	;
	value = ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 0 ] ) ) ] | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 1 ] ) ) ] << 6 ) | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 2 ] ) ) ] << 12 ) | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 3 ] ) ) ] << 18 );
	pos += 4;
	out.b [ 1 ] = value >> 16;
	out.b [ 7 ] = value >> 8;
	out.b [ 13 ] = value;
	;
	value = ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 0 ] ) ) ] | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 1 ] ) ) ] << 6 ) | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 2 ] ) ) ] << 12 ) | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 3 ] ) ) ] << 18 );
	pos += 4;
	out.b [ 2 ] = value >> 16;
	out.b [ 8 ] = value >> 8;
	out.b [ 14 ] = value;
	;
	value = ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 0 ] ) ) ] | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 1 ] ) ) ] << 6 ) | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 2 ] ) ) ] << 12 ) | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 3 ] ) ) ] << 18 );
	pos += 4;
	out.b [ 3 ] = value >> 16;
	out.b [ 9 ] = value >> 8;
	out.b [ 15 ] = value;
	;
	value = ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 0 ] ) ) ] | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 1 ] ) ) ] << 6 ) | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 2 ] ) ) ] << 12 ) | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 3 ] ) ) ] << 18 );
	pos += 4;
	out.b [ 4 ] = value >> 16;
	out.b [ 10 ] = value >> 8;
	out.b [ 5 ] = value;
	;
	out.b [ 11 ] = ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 0 ] ) ) ] | ( ( MD5_word ) atoi64 [ ( ( unsigned int ) ( unsigned char ) ( pos [ 1 ] ) ) ] << 6 );
	{
		MD5_word *dptr = ( out.w ) , *sptr = ( out.w );
		int loop_count = ( 4 );
		MD5_word mask = 0x00ff00ff;
		do {
			MD5_word tmp = *sptr ++;
			( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
			*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
			tmp = *sptr ++;
			( tmp ) = ( ( ( tmp ) << ( 16 ) ) | ( ( MD5_word ) ( tmp ) >> ( 32 - ( 16 ) ) ) );
			*dptr ++ = ( ( tmp & mask ) << 8 ) | ( ( tmp >> 8 ) & mask );
		}

		while ( ( loop_count -= 2 ) );
	}

	;
	return out.w;
}

unsigned int mem_saving_level = 0;
void *mem_alloc ( size_t size ) {
	void *res;
	if ( ! size ) return ( ( void *) 0 );
	if ( ! ( res = malloc ( size ) ) ) {
		fprintf ( stderr , "malloc: %s\n" , strerror ( 12 ) );
		error ( );
	}

	return res;
}

void *mem_alloc_tiny ( size_t size , size_t align ) {
	static unsigned long buffer , bufree = 0;
	unsigned long start , end;
	start = buffer + -- align;
	start &= ~ align;
	end = start + size;
	if ( bufree >= end - buffer ) {
		bufree -= end - buffer;
		buffer = end;
	}

	else if ( size + align <= 0x10000 && bufree <= 0xff ) {
		buffer = ( unsigned long ) mem_alloc ( 0x10000 );
		bufree = 0x10000;
		return mem_alloc_tiny ( size , align + 1 );
	}

	else start = ( ( unsigned long ) mem_alloc ( size + align ) + align ) & ~ align;
	return ( void *) start;
}

void *mem_alloc_copy ( size_t size , size_t align , void *src ) {
	return memcpy ( mem_alloc_tiny ( size , align ) , src , size );
}

char *str_alloc_copy ( char *src ) {
	size_t size;
	if ( ! src ) return "";
	if ( ! *src ) return "";
	size = strlen ( src ) + 1;
	return ( char *) memcpy ( mem_alloc_tiny ( size , 1 ) , src , size );
}

void error ( void ) {
	log_event ( "Terminating on error" );
	log_done ( );
	exit ( 1 );
}

void pexit ( char *format , ... ) {
	va_list args;
	__builtin_va_start ( args , format );
	vfprintf ( stderr , format , args );
	__builtin_va_end ( args );
	fprintf ( stderr , ": %s\n" , strerror ( ( *__errno_location ( ) ) ) );
	error ( );
}

int write_loop ( int fd , char *buffer , int count ) {
	int offset , block;
	offset = 0;
	while ( count > 0 ) {
		block = write ( fd , &buffer [ offset ] , count );
		if ( block < 0 ) {
			if ( ( *__errno_location ( ) ) == 4 ) continue;
			return block;
		}

		offset += block;
		count -= block;
	}

	return offset;
}

char *fgetl ( char *s , int size , FILE *stream ) {
	char *res , *pos;
	int c;
	if ( ( res = fgets ( s , size , stream ) ) ) {
		if ( ! *res ) return res;
		pos = res + strlen ( res ) - 1;
		if ( *pos == '\n' ) {
			*pos = 0;
			if ( pos > res ) if ( *-- pos == '\r' ) *pos = 0;
		}

		else if ( ( c = _IO_getc ( stream ) ) == '\n' ) {
			if ( *pos == '\r' ) *pos = 0;
		}

		else while ( c != ( - 1 ) && c != '\n' ) c = _IO_getc ( stream );
	}

	return res;
}

char *strnfcpy ( char *dst , char *src , int size ) {
	char *dptr = dst , *sptr = src;
	int count = size;
	while ( count -- ) if ( ! ( *dptr ++ = *sptr ++ ) ) break;
	return dst;
}

char *strnzcpy ( char *dst , char *src , int size ) {
	char *dptr = dst , *sptr = src;
	int count = size;
	if ( count ) while ( -- count ) if ( ! ( *dptr ++ = *sptr ++ ) ) break;
	*dptr = 0;
	return dst;
}

char *strnzcat ( char *dst , char *src , int size ) {
	char *dptr = dst , *sptr = src;
	int count = size;
	if ( count ) {
		while ( count && *dptr ) {
			count --;
			dptr ++;
		}

		if ( count ) while ( -- count ) if ( ! ( *dptr ++ = *sptr ++ ) ) break;
	}

	*dptr = 0;
	return dst;
}

char *strlwr ( char *s ) {
	unsigned char *ptr = ( unsigned char *) s;
	while ( *ptr ) if ( *ptr >= 'A' && *ptr <= 'Z' ) *ptr ++ |= 0x20;
	else ptr ++;
	return s;
}

struct options_main options;
static struct opt_entry options_opt_list [ ] = {
	{
		"" , 0x00000002 , 0 , 0 , 0 , "L" , &options.passwd 	}

	, {
		"single" , ( 0x00000400 | ( 0x00000020 | 0x00000040 | 0x00000001 | ( 0x00000008 | 0x00000004 ) ) ) , 0x00000020 , 0 , 0 , ( ( void *) 0 ) , ( ( void *) 0 ) 	}

	, {
		"wordlist" , ( 0x00000080 | ( 0x00000020 | 0x00000040 | 0x00000001 | ( 0x00000008 | 0x00000004 ) ) ) , 0x00000020 , 0 , 0x80000000 , "S" , &options.wordlist 	}

	, {
		"stdin" , ( 0x00000100 | ( 0x00000080 | ( 0x00000020 | 0x00000040 | 0x00000001 | ( 0x00000008 | 0x00000004 ) ) ) ) , 0x00000020 , 0 , 0 , ( ( void *) 0 ) , ( ( void *) 0 ) 	}

	, {
		"rules" , 0x00000200 , 0x00000200 , 0x00000080 , 0x00000100 , ( ( void *) 0 ) , ( ( void *) 0 ) 	}

	, {
		"incremental" , ( 0x00000800 | ( 0x00000020 | 0x00000040 | 0x00000001 | ( 0x00000008 | 0x00000004 ) ) ) , 0x00000020 , 0 , 0 , "S" , &options.charset 	}

	, {
		"external" , ( 0x00001000 | 0x00000001 | 0x00000040 | 0x00000004 ) , 0x00001000 , 0 , 0x80000000 , "S" , &options.external 	}

	, {
		"stdout" , 0x00008000 , 0x00008000 , 0x00000040 , 0x00000400 | 0x00004000 , "%u" , &options.length 	}

	, {
		"restore" , ( 0x00010000 | 0x00000001 ) , 0x00010000 , 0 , ~ ( 0x00010000 | 0x00000001 ) & ~ 0x80000000 , "S" , &options.session 	}

	, {
		"session" , 0x00020000 , 0x00020000 , 0x00000040 , 0x80000000 , "S" , &options.session 	}

	, {
		"status" , ( 0x00040000 | 0x00000001 ) , 0x00040000 , 0 , ~ ( 0x00040000 | 0x00000001 ) & ~ 0x80000000 , "S" , &options.session 	}

	, {
		"make-charset" , ( 0x00100000 | 0x00000001 | 0x00000004 ) , 0x00100000 , 0 , 0x00000020 | 0x00020000 | 0x80000000 , "S" , &options.charset 	}

	, {
		"show" , ( 0x00200000 | 0x00000001 | ( 0x00000008 | 0x00000004 ) ) , 0x00200000 , 0 , 0x00000040 | 0x00100000 , ( ( void *) 0 ) , ( ( void *) 0 ) 	}

	, {
		"test" , ( 0x00400000 | 0x00000040 | 0x00000001 ) , 0x00400000 , 0 , ~ ( 0x00400000 | 0x00000040 | 0x00000001 ) & ~ 0x02000000 & ~ 0x04000000 & ~ 0x80000000 , "%u" , &benchmark_time 	}

	, {
		"users" , 0x00000010 , 0 , 0x00000002 , 0x80000000 , "M" , &options.loader.users 	}

	, {
		"groups" , 0x00000010 , 0 , 0x00000002 , 0x80000000 , "M" , &options.loader.groups 	}

	, {
		"shells" , 0x00000010 , 0 , 0x00000002 , 0x80000000 , "M" , &options.loader.shells 	}

	, {
		"salts" , 0x01000000 , 0x01000000 , 0x00000002 , 0x80000000 , "%d" , &options.loader.min_pps 	}

	, {
		"save-memory" , 0x04000000 , 0x04000000 , 0 , 0x80000000 , "%u" , &mem_saving_level 	}

	, {
		"format" , 0x02000000 , 0x02000000 , 0 , 0x00008000 | 0x80000000 , "S" , &options.format 	}

	, {
		( ( void *) 0 ) , 0 , 0 , 0 , 0 , ( ( void *) 0 ) , ( ( void *) 0 ) 	}

}

;
static void nm_options_print_usage ( char *name ) {
	int column;
	struct fmt_main *format;
	printf ( "John the Ripper password cracker, version " "1.7.9" "\n" "Copyright (c) 1996-2011 by " "Solar Designer" "\n" "Homepage: http://www.openwall.com/john/\n" "\n" "Usage: %s [OPTIONS] [PASSWORD-FILES]\n" "--single                   \"single crack\" mode\n" "--wordlist=FILE --stdin    wordlist mode, read words from FILE or stdin\n" "--rules                    enable word mangling rules for wordlist mode\n" "--incremental[=MODE]       \"incremental\" mode [using section MODE]\n" "--external=MODE            external mode or word filter\n" "--stdout[=LENGTH]          just output candidate passwords [cut at LENGTH]\n" "--restore[=NAME]           restore an interrupted session [called NAME]\n" "--session=NAME             give a new session the NAME\n" "--status[=NAME]            print status of a session [called NAME]\n" "--make-charset=FILE        make a charset, FILE will be overwritten\n" "--show                     show cracked passwords\n" "--test[=TIME]              run tests and benchmarks for TIME seconds each\n" "--users=[-]LOGIN|UID[,..]  [do not] load this (these) user(s) only\n" "--groups=[-]GID[,..]       load users [not] of this (these) group(s) only\n" "--shells=[-]SHELL[,..]     load users with[out] this (these) shell(s) only\n" "--salts=[-]COUNT           load salts with[out] at least COUNT passwords " "only\n" "--save-memory=LEVEL        enable memory saving, at LEVEL 1..3\n" "--format=NAME              force hash type NAME: " , name );
	column = strrchr ( "John the Ripper password cracker, version " "1.7.9" "\n" "Copyright (c) 1996-2011 by " "Solar Designer" "\n" "Homepage: http://www.openwall.com/john/\n" "\n" "Usage: %s [OPTIONS] [PASSWORD-FILES]\n" "--single                   \"single crack\" mode\n" "--wordlist=FILE --stdin    wordlist mode, read words from FILE or stdin\n" "--rules                    enable word mangling rules for wordlist mode\n" "--incremental[=MODE]       \"incremental\" mode [using section MODE]\n" "--external=MODE            external mode or word filter\n" "--stdout[=LENGTH]          just output candidate passwords [cut at LENGTH]\n" "--restore[=NAME]           restore an interrupted session [called NAME]\n" "--session=NAME             give a new session the NAME\n" "--status[=NAME]            print status of a session [called NAME]\n" "--make-charset=FILE        make a charset, FILE will be overwritten\n" "--show                     show cracked passwords\n" "--test[=TIME]              run tests and benchmarks for TIME seconds each\n" "--users=[-]LOGIN|UID[,..]  [do not] load this (these) user(s) only\n" "--groups=[-]GID[,..]       load users [not] of this (these) group(s) only\n" "--shells=[-]SHELL[,..]     load users with[out] this (these) shell(s) only\n" "--salts=[-]COUNT           load salts with[out] at least COUNT passwords " "only\n" "--save-memory=LEVEL        enable memory saving, at LEVEL 1..3\n" "--format=NAME              force hash type NAME: " , '\0' ) - strrchr ( "John the Ripper password cracker, version " "1.7.9" "\n" "Copyright (c) 1996-2011 by " "Solar Designer" "\n" "Homepage: http://www.openwall.com/john/\n" "\n" "Usage: %s [OPTIONS] [PASSWORD-FILES]\n" "--single                   \"single crack\" mode\n" "--wordlist=FILE --stdin    wordlist mode, read words from FILE or stdin\n" "--rules                    enable word mangling rules for wordlist mode\n" "--incremental[=MODE]       \"incremental\" mode [using section MODE]\n" "--external=MODE            external mode or word filter\n" "--stdout[=LENGTH]          just output candidate passwords [cut at LENGTH]\n" "--restore[=NAME]           restore an interrupted session [called NAME]\n" "--session=NAME             give a new session the NAME\n" "--status[=NAME]            print status of a session [called NAME]\n" "--make-charset=FILE        make a charset, FILE will be overwritten\n" "--show                     show cracked passwords\n" "--test[=TIME]              run tests and benchmarks for TIME seconds each\n" "--users=[-]LOGIN|UID[,..]  [do not] load this (these) user(s) only\n" "--groups=[-]GID[,..]       load users [not] of this (these) group(s) only\n" "--shells=[-]SHELL[,..]     load users with[out] this (these) shell(s) only\n" "--salts=[-]COUNT           load salts with[out] at least COUNT passwords " "only\n" "--save-memory=LEVEL        enable memory saving, at LEVEL 1..3\n" "--format=NAME              force hash type NAME: " , '\n' ) - 1;
	format = fmt_list;
	do {
		char *label = format -> params.label;
		int length = strlen ( label ) + ( format -> next != ( ( void *) 0 ) );
		column += length;
		if ( column > 80 ) {
			printf ( "\n" "                           " );
			column = strlen ( "                           " ) + length;
		}

		printf ( "%s%c" , label , format -> next ? '/' : '\n' );
	}

	while ( ( format = format -> next ) );
	exit ( 0 );
}

void opt_init ( char *name , int argc , char **argv ) {
	if ( argc < 2 ) nm_options_print_usage ( name );
	memset ( &options , 0 , sizeof ( options ) );
	list_init ( &options.passwd );
	options.loader.flags = 0x00000001;
	list_init ( &options.loader.users );
	list_init ( &options.loader.groups );
	list_init ( &options.loader.shells );
	options.length = - 1;
	opt_process ( options_opt_list , &options.flags , argv );
	ext_flags = 0;
	if ( options.flags & 0x00001000 ) {
		if ( options.flags & ( 0x00000020 | 0x00100000 ) ) {
			ext_flags = 0x00000002 | 0x00020000;
		}

		else {
			options.flags |= ( 0x00000020 | 0x00000040 | 0x00000001 | ( 0x00000008 | 0x00000004 ) );
			ext_flags = 0x00000001 | 0x00010000 | 0x00020000;
		}

	}

	if ( ! ( options.flags & 0x00000001 ) ) options.flags |= ( 0x00004000 | ( 0x00000020 | 0x00000040 | 0x00000001 | ( 0x00000008 | 0x00000004 ) ) );
	opt_check ( options_opt_list , options.flags , argv );
	if ( options.session ) {
		rec_name = options.session;
		rec_name_completed = 0;
	}

	if ( options.flags & 0x00010000 ) {
		rec_restore_args ( 1 );
		return;
	}

	if ( options.flags & 0x00040000 ) {
		rec_restore_args ( 0 );
		options.flags |= ( 0x00040000 | 0x00000001 );
		status_init ( ( ( void *) 0 ) , 1 );
		status_print ( );
		exit ( 0 );
	}

	if ( options.flags & 0x01000000 ) if ( options.loader.min_pps < 0 ) {
		options.loader.max_pps = - 1 - options.loader.min_pps;
		options.loader.min_pps = 0;
	}

	if ( options.length < 0 ) options.length = 0x80 - 3;
	else if ( options.length < 1 || options.length > 0x80 - 3 ) {
		fprintf ( stderr , "Invalid plaintext length requested\n" );
		error ( );
	}

	if ( options.flags & 0x00008000 ) options.flags &= ~ ( 0x00000008 | 0x00000004 );
	if ( ( options.flags & ( 0x00000002 | ( 0x00000008 | 0x00000004 ) ) ) == ( 0x00000008 | 0x00000004 ) ) {
		fprintf ( stderr , "Password files required, " "but none specified\n" );
		error ( );
	}

	if ( ( options.flags & ( 0x00000002 | 0x00000004 ) ) == 0x00000002 ) {
		fprintf ( stderr , "Password files specified, " "but no option would use them\n" );
		error ( );
	}

	rec_argc = argc;
	rec_argv = argv;
	rec_check = 0;
}

int password_hash_sizes [ 7 ] = {
	0x10 , 0x100 , 0x1000 , 0x10000 , 0x100000 , 0x1000000 , 0x8000000 }

;
int password_hash_thresholds [ 7 ] = {
	3 , 0x10 , ( 0x100 / 5 ) , ( 0x1000 / 3 ) , ( 0x10000 / 2 ) , 0x100000 , ( 0x1000000 / 2 ) }

;
static char *path_john_home_path = ( ( void *) 0 );
static int path_john_home_length;
void path_init ( char **argv ) {
	char *pos;
	if ( argv [ 0 ] ) if ( ! path_john_home_path && ( pos = strrchr ( argv [ 0 ] , '/' ) ) ) {
		path_john_home_length = pos - argv [ 0 ] + 1;
		if ( path_john_home_length >= 4096 ) return;
		path_john_home_path = mem_alloc ( 4096 );
		memcpy ( path_john_home_path , argv [ 0 ] , path_john_home_length );
	}

}

char *path_expand ( char *name ) {
	if ( ! strncmp ( name , "$JOHN/" , 6 ) ) {
		if ( path_john_home_path && path_john_home_length + strlen ( name ) - 6 < 4096 ) {
			strnzcpy ( &path_john_home_path [ path_john_home_length ] , &name [ 6 ] , 4096 - path_john_home_length );
			return path_john_home_path;
		}

		return name + 6;
	}

	return name;
}

char *path_session ( char *session , char *suffix ) {
	int keep , add;
	char *p;
	keep = strlen ( session );
	if ( ! keep ) {
		fprintf ( stderr , "Invalid session name requested\n" );
		error ( );
	}

	add = strlen ( suffix ) + 1;
	p = mem_alloc_tiny ( keep + add , 1 );
	memcpy ( p , session , keep );
	memcpy ( p + keep , suffix , add );
	return p;
}

void path_done ( void ) {
	{
		if ( ( path_john_home_path ) ) {
			free ( ( path_john_home_path ) );
			( path_john_home_path ) = ( ( void *) 0 );
		}

	}

	;
}

char *rec_name = "$JOHN/john.rec";
int rec_name_completed = 1;
int rec_version = 0;
int rec_argc = 0;
char **rec_argv;
unsigned int rec_check;
int rec_restoring_now = 0;
static int recovery_rec_fd;
static FILE *recovery_rec_file = ( ( void *) 0 );
static struct db_main *recovery_rec_db;
static void ( *nm_recovery_rec_save_mode ) ( FILE *file );
static void nm_recovery_rec_name_complete ( void ) {
	if ( rec_name_completed ) return;
	rec_name = path_session ( rec_name , ".rec" );
	rec_name_completed = 1;
}

void rec_init ( struct db_main *db , void ( *save_mode ) ( FILE *file ) ) {
	rec_done ( 1 );
	if ( ! rec_argc ) return;
	nm_recovery_rec_name_complete ( );
	if ( ( recovery_rec_fd = open ( path_expand ( rec_name ) , 02 | 0100 , 0600 ) ) < 0 ) pexit ( "open: %s" , path_expand ( rec_name ) );
	{
			}

	;
	if ( ! ( recovery_rec_file = fdopen ( recovery_rec_fd , "w" ) ) ) pexit ( "fdopen" );
	recovery_rec_db = db;
	nm_recovery_rec_save_mode = save_mode;
}

void rec_save ( void ) {
	int save_format;
	long size;
	char **opt;
	log_flush ( );
	if ( ! recovery_rec_file ) return;
	if ( fseek ( recovery_rec_file , 0 , 0 ) ) pexit ( "fseek" );
	save_format = ! options.format && recovery_rec_db -> loaded;
	fprintf ( recovery_rec_file , "REC3" "\n%d\n" , rec_argc + ( save_format ? 1 : 0 ) );
	opt = rec_argv;
	while ( *++ opt ) fprintf ( recovery_rec_file , "%s\n" , *opt );
	if ( save_format ) fprintf ( recovery_rec_file , "--format=%s\n" , recovery_rec_db -> format -> params.label );
	fprintf ( recovery_rec_file , "%u\n%u\n%08x\n%08x\n%d\n%d\n%08x\n" , status_get_time ( ) + 1 , status.guess_count , status.crypts.lo , status.crypts.hi , status.pass , status_get_progress ? status_get_progress ( ) : - 1 , rec_check );
	if ( nm_recovery_rec_save_mode ) nm_recovery_rec_save_mode ( recovery_rec_file );
	if ( ferror ( recovery_rec_file ) ) pexit ( "fprintf" );
	if ( ( size = ftell ( recovery_rec_file ) ) < 0 ) pexit ( "ftell" );
	if ( fflush ( recovery_rec_file ) ) pexit ( "fflush" );
	if ( ftruncate ( recovery_rec_fd , size ) ) pexit ( "ftruncate" );
	if ( fsync ( recovery_rec_fd ) ) pexit ( "fsync" );
}

void rec_done ( int save ) {
	if ( ! recovery_rec_file ) return;
	if ( save ) rec_save ( );
	else log_flush ( );
	if ( fclose ( recovery_rec_file ) ) pexit ( "fclose" );
	recovery_rec_file = ( ( void *) 0 );
	if ( ! save && unlink ( path_expand ( rec_name ) ) ) pexit ( "unlink: %s" , path_expand ( rec_name ) );
}

static void nm_recovery_rec_format_error ( char *fn ) {
	if ( fn && ( *__errno_location ( ) ) && ferror ( recovery_rec_file ) ) pexit ( "%s" , fn );
	else {
		fprintf ( stderr , "Incorrect crash recovery file format: %s\n" , path_expand ( rec_name ) );
		error ( );
	}

}

void rec_restore_args ( int lock ) {
	char line [ 0x400 ];
	int index , argc;
	char **argv;
	char *save_rec_name;
	nm_recovery_rec_name_complete ( );
	if ( ! ( recovery_rec_file = fopen ( path_expand ( rec_name ) , "r+" ) ) ) pexit ( "fopen: %s" , path_expand ( rec_name ) );
	recovery_rec_fd = fileno ( recovery_rec_file );
	if ( lock ) {
			}

	;
	if ( ! fgetl ( line , sizeof ( line ) , recovery_rec_file ) ) nm_recovery_rec_format_error ( "fgets" );
	rec_version = 0;
	if ( ! strcmp ( line , "REC3" ) ) rec_version = 3;
	else if ( ! strcmp ( line , "REC2" ) ) rec_version = 2;
	else if ( ! strcmp ( line , "REC1" ) ) rec_version = 1;
	else if ( strcmp ( line , "REC0" ) ) nm_recovery_rec_format_error ( ( ( void *) 0 ) );
	if ( fscanf ( recovery_rec_file , "%d\n" , &argc ) != 1 ) nm_recovery_rec_format_error ( "fscanf" );
	if ( argc < 2 ) nm_recovery_rec_format_error ( ( ( void *) 0 ) );
	argv = mem_alloc_tiny ( sizeof ( char *) *( argc + 1 ) , 4 );
	argv [ 0 ] = "john";
	for ( index = 1;
	index < argc;
	index ++ ) if ( fgetl ( line , sizeof ( line ) , recovery_rec_file ) ) argv [ index ] = str_alloc_copy ( line );
	else nm_recovery_rec_format_error ( "fgets" );
	argv [ argc ] = ( ( void *) 0 );
	save_rec_name = rec_name;
	opt_init ( argv [ 0 ] , argc , argv );
	rec_name = save_rec_name;
	rec_name_completed = 1;
	if ( fscanf ( recovery_rec_file , "%u\n%u\n%x\n%x\n" , &status_restored_time , &status.guess_count , &status.crypts.lo , &status.crypts.hi ) != 4 ) nm_recovery_rec_format_error ( "fscanf" );
	if ( ! status_restored_time ) status_restored_time = 1;
	if ( rec_version == 0 ) {
		status.pass = 0;
		status.progress = - 1;
	}

	else if ( fscanf ( recovery_rec_file , "%d\n%d\n" , &status.pass , &status.progress ) != 2 ) nm_recovery_rec_format_error ( "fscanf" );
	if ( status.pass < 0 || status.pass > 3 ) nm_recovery_rec_format_error ( ( ( void *) 0 ) );
	if ( rec_version < 3 ) rec_check = 0;
	else if ( fscanf ( recovery_rec_file , "%x\n" , &rec_check ) != 1 ) nm_recovery_rec_format_error ( "fscanf" );
	rec_restoring_now = 1;
}

void rec_restore_mode ( int ( *restore_mode ) ( FILE *file ) ) {
	if ( ! recovery_rec_file ) return;
	if ( restore_mode ) if ( restore_mode ( recovery_rec_file ) ) nm_recovery_rec_format_error ( "fscanf" );
	if ( fclose ( recovery_rec_file ) ) pexit ( "fclose" );
	recovery_rec_file = ( ( void *) 0 );
	rec_restoring_now = 0;
}

int rpp_init ( struct rpp_context *ctx , char *subsection ) {
	struct cfg_list *list;
	if ( ( list = cfg_get_list ( "List.Rules:" , subsection ) ) ) if ( ( ctx -> input = list -> head ) ) {
		ctx -> count = - 1;
		return 0;
	}

	return 1;
}

static void nm_rpp_rpp_add_char ( struct rpp_range *range , unsigned char c ) {
	if ( range -> flag_r ) {
		if ( range -> count >= 0x100 ) return;
	}

	else {
		int index = c / 32;
		long mask = ( long ) 1 << ( c % 32 );
		if ( range -> mask [ index ] & mask ) return;
		range -> mask [ index ] |= mask;
	}

	range -> chars [ range -> count ++ ] = ( char ) c;
}

static void nm_rpp_rpp_process_rule ( struct rpp_context *ctx ) {
	struct rpp_range *range;
	unsigned char *input , *output , *end;
	unsigned char c1 , c2 , c;
	int flag_p , flag_r;
	input = ( unsigned char *) ctx -> input -> data;
	output = ( unsigned char *) ctx -> output;
	end = output + 0x100 - 1;
	flag_p = flag_r = 0;
	ctx -> count = ctx -> refs_count = 0;
	while ( *input && output < end ) switch ( *input ) {
		case '\\' : if ( ! ( c = *++ input ) ) break;
		c1 = ctx -> count ? '0' : '1';
		c2 = ( ctx -> count <= 9 ) ? '0' + ctx -> count : '9';
		if ( c >= c1 && c <= c2 && ctx -> refs_count < 16 ) {
			struct rpp_ref *ref = & ctx -> refs [ ctx -> refs_count ++ ];
			ref -> pos = ( char *) output;
			ref -> range = ( c == '0' ) ? ctx -> count - 1 : c - '1';
		}

		input ++;
		if ( ctx -> count < 16 ) switch ( c ) {
			case 'p' : if ( ( c2 = *input ) == '[' || c2 == '\\' ) {
				flag_p = - 1;
				break;
			}

			else if ( c2 >= '0' && c2 <= '9' ) {
				flag_p = ( c2 == '0' ) ? ctx -> count : c2 - '0';
				input ++;
				break;
			}

			*output ++ = c;
			break;
			case 'r' : if ( *input == '[' || *input == '\\' ) {
				flag_r = 1;
				break;
			}

			default : *output ++ = c;
		}

		break;
		case '[' : if ( ctx -> count >= 16 ) {
			*output ++ = *input ++;
			break;
		}

		input ++;
		range = & ctx -> ranges [ ctx -> count ++ ];
		range -> pos = ( char *) output ++;
		range -> index = range -> count = 0;
		range -> flag_p = flag_p;
		flag_p = 0;
		range -> flag_r = flag_r;
		flag_r = 0;
		memset ( range -> mask , 0 , sizeof ( range -> mask ) );
		range -> chars [ 0 ] = 0;
		c1 = 0;
		while ( *input && *input != ']' ) switch ( *input ) {
			case '\\' : if ( *++ input ) nm_rpp_rpp_add_char ( range , c1 = *input ++ );
			break;
			case '-' : if ( ( c2 = *++ input ) ) {
				input ++;
				if ( c1 && range -> count ) {
					if ( c1 > c2 ) for ( c = c1 - 1;
					c >= c2;
					c -- ) nm_rpp_rpp_add_char ( range , c );
					else for ( c = c1 + 1;
					c <= c2;
					c ++ ) nm_rpp_rpp_add_char ( range , c );
				}

			}

			c1 = c2;
			break;
			default : nm_rpp_rpp_add_char ( range , c1 = *input ++ );
		}

		if ( *input ) input ++;
		break;
		default : *output ++ = *input ++;
	}

	*output = 0;
}

char *rpp_next ( struct rpp_context *ctx ) {
	struct rpp_range *range;
	int index , done;
	if ( ctx -> count < 0 ) {
		if ( ! ctx -> input ) return ( ( void *) 0 );
		nm_rpp_rpp_process_rule ( ctx );
	}

	done = 1;
	if ( ( index = ctx -> count - 1 ) >= 0 ) {
		do {
			range = & ctx -> ranges [ index ];
			*range -> pos = range -> chars [ range -> index ];
		}

		while ( index -- );
		index = ctx -> count - 1;
		do {
			range = & ctx -> ranges [ index ];
			if ( range -> flag_p > 0 ) continue;
			if ( ++ range -> index < range -> count ) {
				if ( range -> flag_p ) continue;
				else break;
			}

			range -> index = 0;
		}

		while ( index -- );
		done = index < 0;
		index = ctx -> count - 1;
		do {
			range = & ctx -> ranges [ index ];
			if ( range -> flag_p <= 0 || range -> flag_p > ctx -> count ) continue;
			if ( ctx -> ranges [ range -> flag_p - 1 ].flag_p ) continue;
			range -> index = ctx -> ranges [ range -> flag_p - 1 ].index;
			if ( range -> index >= range -> count ) range -> index = range -> count - 1;
		}

		while ( index -- );
	}

	if ( ctx -> refs_count > 0 ) {
		int ref_index = ctx -> refs_count - 1;
		do {
			index = ctx -> refs [ ref_index ].range;
			if ( index < ctx -> count ) {
				range = & ctx -> ranges [ index ];
				*ctx -> refs [ ref_index ].pos = *range -> pos;
			}

		}

		while ( ref_index -- );
	}

	if ( done ) {
		ctx -> input = ctx -> input -> next;
		ctx -> count = - 1;
	}

	return ctx -> output;
}

char *rules_errors [ ] = {
	( ( void *) 0 ) , "Unexpected end of rule" , "Unknown command" , "Unallowed command" , "Invalid position code" , "Unknown character class code" , "Unknown rule reject flag" }

;
int rules_errno , rules_line;
static int rules_rules_max_length = 0;
static struct {
	unsigned char vars [ 0x100 ];
	int pass;
	union {
		char buffer [ 3 ] [ 0x80 *2 + 4 ];
		long dummy;
	}

	aligned;
	char memory [ 0x80 ];
	char *classes [ 0x100 ];
}

__attribute__ ( ( aligned ( ( 4 *8 ) ) ) ) rules_rules_data;
static char *rules_conv_source = "`1234567890-=\\qwertyuiop[]asdfghjkl;'zxcvbnm,./" "~!@#$%^&*()_+|QWERTYUIOP{}ASDFGHJKL:\"ZXCVBNM<>?";
static char *rules_conv_shift , *rules_conv_invert , *rules_conv_vowels , *rules_conv_right , *rules_conv_left;
static char *rules_conv_tolower , *rules_conv_toupper;
static void nm_rules_rules_init_class ( char name , char *valid ) {
	char *pos , inv;
	rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( name ) ) ] = mem_alloc_tiny ( 0x100 , 1 );
	memset ( rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( name ) ) ] , 0 , 0x100 );
	for ( pos = valid;
	( ( unsigned int ) ( unsigned char ) ( *pos ) );
	pos ++ ) rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( name ) ) ] [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] = 1;
	if ( ( name | 0x20 ) >= 'a' && ( name | 0x20 ) <= 'z' ) {
		inv = name ^ 0x20;
		rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( inv ) ) ] = mem_alloc_tiny ( 0x100 , 1 );
		memset ( rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( inv ) ) ] , 1 , 0x100 );
		for ( pos = valid;
		( ( unsigned int ) ( unsigned char ) ( *pos ) );
		pos ++ ) rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( inv ) ) ] [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] = 0;
	}

}

static void nm_rules_rules_init_classes ( void ) {
	memset ( rules_rules_data.classes , 0 , sizeof ( rules_rules_data.classes ) );
	nm_rules_rules_init_class ( '?' , "?" );
	nm_rules_rules_init_class ( 'v' , "aeiouAEIOU" );
	nm_rules_rules_init_class ( 'c' , "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ" );
	nm_rules_rules_init_class ( 'w' , " \t" );
	nm_rules_rules_init_class ( 'p' , ".,:;'\"?!`" );
	nm_rules_rules_init_class ( 's' , "$%^&*()-_+=|\\<>[]{}#@/~" );
	nm_rules_rules_init_class ( 'l' , "abcdefghijklmnopqrstuvwxyz" );
	nm_rules_rules_init_class ( 'u' , "ABCDEFGHIJKLMNOPQRSTUVWXYZ" );
	nm_rules_rules_init_class ( 'd' , "0123456789" );
	nm_rules_rules_init_class ( 'a' , "abcdefghijklmnopqrstuvwxyz" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" );
	nm_rules_rules_init_class ( 'x' , "abcdefghijklmnopqrstuvwxyz" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "0123456789" );
	nm_rules_rules_init_class ( 'Z' , "" );
}

static char *nm_rules_rules_init_conv ( char *src , char *dst ) {
	char *conv;
	int pos;
	conv = mem_alloc_tiny ( 0x100 , 1 );
	for ( pos = 0;
	pos < 0x100;
	pos ++ ) conv [ pos ] = pos;
	while ( *src ) conv [ ( ( unsigned int ) ( unsigned char ) ( *src ++ ) ) ] = *dst ++;
	return conv;
}

static void nm_rules_rules_init_convs ( void ) {
	rules_conv_shift = nm_rules_rules_init_conv ( rules_conv_source , "~!@#$%^&*()_+|QWERTYUIOP{}ASDFGHJKL:\"ZXCVBNM<>?" "`1234567890-=\\qwertyuiop[]asdfghjkl;'zxcvbnm,./" );
	rules_conv_invert = nm_rules_rules_init_conv ( rules_conv_source , "`1234567890-=\\QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./" "~!@#$%^&*()_+|qwertyuiop{}asdfghjkl:\"zxcvbnm<>?" );
	rules_conv_vowels = nm_rules_rules_init_conv ( rules_conv_source , "`1234567890-=\\QWeRTYuioP[]aSDFGHJKL;'ZXCVBNM,./" "~!@#$%^&*()_+|QWeRTYuioP{}aSDFGHJKL:\"ZXCVBNM<>?" );
	rules_conv_right = nm_rules_rules_init_conv ( rules_conv_source , "1234567890-=\\\\wertyuiop[]]sdfghjkl;''xcvbnm,./\\" "!@#$%^&*()_+||WERTYUIOP{}}SDFGHJKL:\"\"XCVBNM<>?|" );
	rules_conv_left = nm_rules_rules_init_conv ( rules_conv_source , "``1234567890-=qqwertyuiop[aasdfghjkl;zzxcvbnm,." "~~!@#$%^&*()_+QQWERTYUIOP{AASDFGHJKL:ZZXCVBNM<>" );
	rules_conv_tolower = nm_rules_rules_init_conv ( "ABCDEFGHIJKLMNOPQRSTUVWXYZ" , "abcdefghijklmnopqrstuvwxyz" );
	rules_conv_toupper = nm_rules_rules_init_conv ( "abcdefghijklmnopqrstuvwxyz" , "ABCDEFGHIJKLMNOPQRSTUVWXYZ" );
}

static void nm_rules_rules_init_length ( int max_length ) {
	int c;
	memset ( rules_rules_data.vars , 0x81 , sizeof ( rules_rules_data.vars ) );
	for ( c = '0';
	c <= '9';
	c ++ ) rules_rules_data.vars [ c ] = c - '0';
	for ( c = 'A';
	c <= 'Z';
	c ++ ) rules_rules_data.vars [ c ] = c - ( 'A' - 10 );
	rules_rules_data.vars [ '*' ] = rules_rules_max_length = max_length;
	rules_rules_data.vars [ '-' ] = max_length - 1;
	rules_rules_data.vars [ '+' ] = max_length + 1;
	rules_rules_data.vars [ 'z' ] = 0xFF;
}

void rules_init ( int max_length ) {
	rules_rules_data.pass = 0;
	rules_errno = 0;
	if ( max_length > 0x80 - 1 ) max_length = 0x80 - 1;
	if ( max_length == rules_rules_max_length ) return;
	if ( ! rules_rules_max_length ) {
		nm_rules_rules_init_classes ( );
		nm_rules_rules_init_convs ( );
	}

	nm_rules_rules_init_length ( max_length );
}

char *rules_reject ( char *rule , int split , char *last , struct db_main *db ) {
	static char out_rule [ 0x100 ];
	while ( ( *rule ++ ) ) switch ( ( *( rule - 1 ) ) ) {
		case ':' : case ' ' : case '\t' : break;
		case '-' : switch ( ( *rule ++ ) ) {
			case ':' : continue;
			case 'c' : if ( ! db ) continue;
			if ( db -> format -> params.flags & 0x00000001 ) continue;
			return ( ( void *) 0 );
			case '8' : if ( ! db ) continue;
			if ( db -> format -> params.flags & 0x00000002 ) continue;
			return ( ( void *) 0 );
			case 's' : if ( ! db ) continue;
			if ( db -> options -> flags & 0x00000010 ) continue;
			return ( ( void *) 0 );
			case 'p' : if ( split >= 0 ) continue;
			return ( ( void *) 0 );
			case '\0' : rules_errno = 1;
			return ( ( void *) 0 );
			default : rules_errno = 6;
			return ( ( void *) 0 );
		}

		default : goto accept;
	}

	accept : rules_rules_data.pass --;
	strnzcpy ( out_rule , rule - 1 , sizeof ( out_rule ) );
	rules_apply ( "" , out_rule , split , last );
	rules_rules_data.pass ++;
	return out_rule;
}

char *rules_apply ( char *word , char *rule , int split , char *last ) {
	char *in , *alt , *memory = word;
	int length;
	int which;
	in = rules_rules_data.aligned.buffer [ 0 ];
	if ( in == last ) in = rules_rules_data.aligned.buffer [ 2 ];
	length = 0;
	while ( length < 0x80 - 1 ) {
		if ( ! ( in [ length ] = word [ length ] ) ) break;
		length ++;
	}

	if ( ! ( *rule ) ) goto out_OK;
	if ( ! length ) {
		if ( ! rules_rules_data.pass ) goto out_NULL;
	}

	alt = rules_rules_data.aligned.buffer [ 1 ];
	if ( alt == last ) alt = rules_rules_data.aligned.buffer [ 2 ];
	rules_rules_data.vars [ 'l' ] = length;
	rules_rules_data.vars [ 'm' ] = ( unsigned char ) length - 1;
	which = 0;
	while ( ( *rule ++ ) ) {
		in [ 0x80 - 1 ] = 0;
		switch ( ( *( rule - 1 ) ) ) {
			case ':' : case ' ' : case '\t' : if ( rules_rules_data.pass == - 1 ) {
				memmove ( rule - 1 , rule , strlen ( rule ) + 1 );
				rule --;
			}

			break;
			case '<' : {
				int pos;
				{
					if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				if ( length >= pos ) {
					if ( ! rules_rules_data.pass ) goto out_NULL;
				}

			}

			break;
			case '>' : {
				int pos;
				{
					if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				if ( length <= pos ) {
					if ( ! rules_rules_data.pass ) goto out_NULL;
				}

			}

			break;
			case 'l' : {
				int pos;
				for ( pos = 0;
				( in [ pos ] = ( rules_conv_tolower ) [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] );
				pos ++ );
			}

			break;
			case 'u' : {
				int pos;
				for ( pos = 0;
				( in [ pos ] = ( rules_conv_toupper ) [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] );
				pos ++ );
			}

			break;
			case 'c' : {
				int pos = 0;
				if ( ( in [ 0 ] = rules_conv_toupper [ ( ( unsigned int ) ( unsigned char ) ( in [ 0 ] ) ) ] ) ) while ( in [ ++ pos ] ) in [ pos ] = rules_conv_tolower [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ];
				in [ pos ] = 0;
			}

			if ( in [ 0 ] != 'M' || in [ 1 ] != 'c' ) break;
			in [ 2 ] = rules_conv_toupper [ ( ( unsigned int ) ( unsigned char ) ( in [ 2 ] ) ) ];
			break;
			case 'r' : {
				char *out;
				{
					out = alt;
					alt = in;
				}

				*( out += length ) = 0;
				while ( *in ) *-- out = *in ++;
				in = out;
			}

			break;
			case 'd' : memcpy ( in + length , in , length );
			in [ length <<= 1 ] = 0;
			break;
			case 'f' : {
				int pos;
				in [ pos = ( length <<= 1 ) ] = 0;
				{
					char *p = in;
					while ( *p ) in [ -- pos ] = *p ++;
				}

			}

			break;
			case 'p' : if ( length < 2 ) break;
			{
				int pos = length - 1;
				if ( strchr ( "sxz" , in [ pos ] ) || ( pos > 1 && in [ pos ] == 'h' && ( in [ pos - 1 ] == 'c' || in [ pos - 1 ] == 's' ) ) ) strcat ( in , "es" );
				else if ( in [ pos ] == 'f' && in [ pos - 1 ] != 'f' ) strcpy ( &in [ pos ] , "ves" );
				else if ( pos > 1 && in [ pos ] == 'e' && in [ pos - 1 ] == 'f' ) strcpy ( &in [ pos - 1 ] , "ves" );
				else if ( pos > 1 && in [ pos ] == 'y' ) {
					if ( strchr ( "aeiou" , in [ pos - 1 ] ) ) strcat ( in , "s" );
					else strcpy ( &in [ pos ] , "ies" );
				}

				else strcat ( in , "s" );
			}

			length = strlen ( in );
			break;
			case '$' : {
				if ( ! ( ( in [ length ++ ] ) = ( *rule ++ ) ) ) goto out_ERROR_END;
			}

			in [ length ] = 0;
			break;
			case '^' : {
				char *out;
				{
					out = alt;
					alt = in;
				}

				{
					if ( ! ( ( out [ 0 ] ) = ( *rule ++ ) ) ) goto out_ERROR_END;
				}

				strcpy ( &out [ 1 ] , in );
				in = out;
			}

			length ++;
			break;
			case 'x' : {
				int pos;
				{
					if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				if ( pos < length ) {
					char *out;
					{
						out = alt;
						alt = in;
					}

					in += pos;
					{
						if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
					}

					strnzcpy ( out , in , pos + 1 );
					length = strlen ( in = out );
					break;
				}

				{
					if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				in [ length = 0 ] = 0;
			}

			break;
			case 'i' : {
				int pos;
				{
					if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				if ( pos < length ) {
					char *p = in + pos;
					memmove ( p + 1 , p , length ++ - pos );
					{
						if ( ! ( ( *p ) = ( *rule ++ ) ) ) goto out_ERROR_END;
					}

					in [ length ] = 0;
					break;
				}

			}

			{
				if ( ! ( ( in [ length ++ ] ) = ( *rule ++ ) ) ) goto out_ERROR_END;
			}

			in [ length ] = 0;
			break;
			case 'o' : {
				int pos;
				char value;
				{
					if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				{
					if ( ! ( ( value ) = ( *rule ++ ) ) ) goto out_ERROR_END;
				}

				;
				if ( pos < length ) in [ pos ] = value;
			}

			break;
			case 's' : {
				int pos;
				{
					char value , *class;
					if ( ( value = ( *rule ++ ) ) == '?' ) {
						if ( ! ( class = rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) ) goto out_ERROR_CLASS;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( class [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] ) {
							in [ pos ] = ( *rule );
						}

						else {
							{
															}

							;
						}

					}

					else {
						if ( ! value ) goto out_ERROR_END;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( in [ pos ] == value ) {
							in [ pos ] = ( *rule );
						}

						else {
							{
															}

							;
						}

					}

				}

				;
			}

			{
				char value;
				{
					if ( ! ( ( value ) = ( *rule ++ ) ) ) goto out_ERROR_END;
				}

			}

			break;
			case '@' : length = 0;
			{
				int pos;
				{
					char value , *class;
					if ( ( value = ( *rule ++ ) ) == '?' ) {
						if ( ! ( class = rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) ) goto out_ERROR_CLASS;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( class [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] ) {
							{
															}

							;
						}

						else {
							in [ length ++ ] = in [ pos ];
						}

					}

					else {
						if ( ! value ) goto out_ERROR_END;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( in [ pos ] == value ) {
							{
															}

							;
						}

						else {
							in [ length ++ ] = in [ pos ];
						}

					}

				}

				;
			}

			in [ length ] = 0;
			break;
			case '!' : {
				int pos;
				{
					char value , *class;
					if ( ( value = ( *rule ++ ) ) == '?' ) {
						if ( ! ( class = rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) ) goto out_ERROR_CLASS;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( class [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] ) {
							{
								if ( ! rules_rules_data.pass ) goto out_NULL;
							}

							;
						}

						else {
							{
															}

							;
						}

					}

					else {
						if ( ! value ) goto out_ERROR_END;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( in [ pos ] == value ) {
							{
								if ( ! rules_rules_data.pass ) goto out_NULL;
							}

							;
						}

						else {
							{
															}

							;
						}

					}

				}

				;
			}

			break;
			case '/' : {
				int pos;
				{
					char value , *class;
					if ( ( value = ( *rule ++ ) ) == '?' ) {
						if ( ! ( class = rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) ) goto out_ERROR_CLASS;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( class [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] ) {
							break;
						}

						else {
							{
															}

							;
						}

					}

					else {
						if ( ! value ) goto out_ERROR_END;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( in [ pos ] == value ) {
							break;
						}

						else {
							{
															}

							;
						}

					}

				}

				rules_rules_data.vars [ 'p' ] = pos;
				if ( in [ pos ] ) break;
			}

			{
				if ( ! rules_rules_data.pass ) goto out_NULL;
			}

			break;
			case '=' : {
				int pos;
				{
					if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				if ( pos >= length ) {
					{
						char value;
						{
							if ( ! ( ( value ) = ( *rule ++ ) ) ) goto out_ERROR_END;
						}

						if ( value == '?' ) {
							if ( ! ( ( value ) = ( *rule ++ ) ) ) goto out_ERROR_END;
						}

					}

					{
						if ( ! rules_rules_data.pass ) goto out_NULL;
					}

				}

				else {
					{
						char value , *class;
						if ( ( value = ( *rule ++ ) ) == '?' ) {
							if ( ! ( class = rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) ) goto out_ERROR_CLASS;
							for ( pos = ( pos );
							( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
							pos ++ ) if ( class [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] ) {
								break;
							}

							else {
								{
									if ( ! rules_rules_data.pass ) goto out_NULL;
								}

								;
							}

						}

						else {
							if ( ! value ) goto out_ERROR_END;
							for ( pos = ( pos );
							( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
							pos ++ ) if ( in [ pos ] == value ) {
								break;
							}

							else {
								{
									if ( ! rules_rules_data.pass ) goto out_NULL;
								}

								;
							}

						}

					}

				}

			}

			break;
			case '[' : if ( length ) {
				char *out;
				{
					out = alt;
					alt = in;
				}

				strcpy ( out , &in [ 1 ] );
				length --;
				in = out;
				break;
			}

			in [ 0 ] = 0;
			break;
			case ']' : if ( length ) in [ -- length ] = 0;
			break;
			case 'C' : {
				int pos = 0;
				if ( ( in [ 0 ] = rules_conv_tolower [ ( ( unsigned int ) ( unsigned char ) ( in [ 0 ] ) ) ] ) ) while ( in [ ++ pos ] ) in [ pos ] = rules_conv_toupper [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ];
				in [ pos ] = 0;
			}

			if ( in [ 0 ] == 'm' && in [ 1 ] == 'C' ) in [ 2 ] = rules_conv_tolower [ ( ( unsigned int ) ( unsigned char ) ( in [ 2 ] ) ) ];
			break;
			case 't' : {
				int pos;
				for ( pos = 0;
				( in [ pos ] = ( rules_conv_invert ) [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] );
				pos ++ );
			}

			break;
			case '(' : {
				int pos;
				{
					char value , *class;
					if ( ( value = ( *rule ++ ) ) == '?' ) {
						if ( ! ( class = rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) ) goto out_ERROR_CLASS;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( class [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] ) {
							break;
						}

						else {
							{
								if ( ! rules_rules_data.pass ) goto out_NULL;
							}

							;
						}

					}

					else {
						if ( ! value ) goto out_ERROR_END;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( in [ pos ] == value ) {
							break;
						}

						else {
							{
								if ( ! rules_rules_data.pass ) goto out_NULL;
							}

							;
						}

					}

				}

				;
			}

			break;
			case ')' : if ( ! length ) {
				{
					char value;
					{
						if ( ! ( ( value ) = ( *rule ++ ) ) ) goto out_ERROR_END;
					}

					if ( value == '?' ) {
						if ( ! ( ( value ) = ( *rule ++ ) ) ) goto out_ERROR_END;
					}

				}

				{
					if ( ! rules_rules_data.pass ) goto out_NULL;
				}

			}

			else {
				{
					int pos;
					{
						char value , *class;
						if ( ( value = ( *rule ++ ) ) == '?' ) {
							if ( ! ( class = rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) ) goto out_ERROR_CLASS;
							for ( pos = ( length - 1 );
							( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
							pos ++ ) if ( class [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] ) {
								break;
							}

							else {
								{
									if ( ! rules_rules_data.pass ) goto out_NULL;
								}

								;
							}

						}

						else {
							if ( ! value ) goto out_ERROR_END;
							for ( pos = ( length - 1 );
							( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
							pos ++ ) if ( in [ pos ] == value ) {
								break;
							}

							else {
								{
									if ( ! rules_rules_data.pass ) goto out_NULL;
								}

								;
							}

						}

					}

					;
				}

			}

			break;
			case '\'' : {
				int pos;
				{
					if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				if ( pos < length ) in [ length = pos ] = 0;
			}

			break;
			case '%' : {
				int count = 0 , required , pos;
				{
					if ( ( ( required ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				{
					char value , *class;
					if ( ( value = ( *rule ++ ) ) == '?' ) {
						if ( ! ( class = rules_rules_data.classes [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) ) goto out_ERROR_CLASS;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( class [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] ) {
							if ( ++ count >= required ) break;
						}

						else {
							{
															}

							;
						}

					}

					else {
						if ( ! value ) goto out_ERROR_END;
						for ( pos = ( 0 );
						( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) );
						pos ++ ) if ( in [ pos ] == value ) {
							if ( ++ count >= required ) break;
						}

						else {
							{
															}

							;
						}

					}

				}

				if ( count < required ) {
					if ( ! rules_rules_data.pass ) goto out_NULL;
				}

				rules_rules_data.vars [ 'p' ] = pos;
			}

			break;
			case 'A' : {
				int pos;
				char term;
				{
					if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				{
					if ( ! ( ( term ) = ( *rule ++ ) ) ) goto out_ERROR_END;
				}

				if ( pos >= length ) {
					char *start , *end , *p;
					start = p = & in [ pos = length ];
					end = & in [ 0x80 - 1 ];
					do {
						char c = ( *rule ++ );
						if ( c == term ) break;
						if ( p < end ) *p ++ = c;
						if ( c ) continue;
						goto out_ERROR_END;
					}

					while ( 1 );
					*p = 0;
					length += p - start;
					break;
				}

				{
					char *out , *start , *end , *p;
					{
						out = alt;
						alt = in;
					}

					memcpy ( out , in , pos );
					start = p = & out [ pos ];
					end = & out [ 0x80 - 1 ];
					do {
						char c = ( *rule ++ );
						if ( c == term ) break;
						if ( p < end ) *p ++ = c;
						if ( c ) continue;
						goto out_ERROR_END;
					}

					while ( 1 );
					strcpy ( p , &in [ pos ] );
					length += p - start;
					in = out;
				}

			}

			break;
			case 'T' : {
				int pos;
				{
					if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				in [ pos ] = rules_conv_invert [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ];
			}

			break;
			case 'D' : {
				int pos;
				{
					if ( ( ( pos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				if ( pos < length ) {
					char *out;
					{
						out = alt;
						alt = in;
					}

					memcpy ( out , in , pos );
					strcpy ( &out [ pos ] , &in [ pos + 1 ] );
					length --;
					in = out;
				}

			}

			break;
			case '{' : if ( length ) {
				char *out;
				{
					out = alt;
					alt = in;
				}

				strcpy ( out , &in [ 1 ] );
				in [ 1 ] = 0;
				strcat ( out , in );
				in = out;
				break;
			}

			in [ 0 ] = 0;
			break;
			case '}' : if ( length ) {
				char *out;
				int pos;
				{
					out = alt;
					alt = in;
				}

				out [ 0 ] = in [ pos = length - 1 ];
				in [ pos ] = 0;
				strcpy ( &out [ 1 ] , in );
				in = out;
				break;
			}

			in [ 0 ] = 0;
			break;
			case 'S' : {
				int pos;
				for ( pos = 0;
				( in [ pos ] = ( rules_conv_shift ) [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] );
				pos ++ );
			}

			;
			break;
			case 'V' : {
				int pos;
				for ( pos = 0;
				( in [ pos ] = ( rules_conv_vowels ) [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] );
				pos ++ );
			}

			;
			break;
			case 'R' : {
				int pos;
				for ( pos = 0;
				( in [ pos ] = ( rules_conv_right ) [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] );
				pos ++ );
			}

			;
			break;
			case 'L' : {
				int pos;
				for ( pos = 0;
				( in [ pos ] = ( rules_conv_left ) [ ( ( unsigned int ) ( unsigned char ) ( in [ pos ] ) ) ] );
				pos ++ );
			}

			;
			break;
			case 'P' : {
				int pos;
				if ( ( pos = length - 1 ) < 2 ) break;
				if ( in [ pos ] == 'd' && in [ pos - 1 ] == 'e' ) break;
				if ( in [ pos ] == 'y' ) in [ pos ] = 'i';
				else if ( strchr ( "bgp" , in [ pos ] ) && ! strchr ( "bgp" , in [ pos - 1 ] ) ) {
					in [ pos + 1 ] = in [ pos ];
					in [ pos + 2 ] = 0;
				}

				if ( in [ pos ] == 'e' ) strcat ( in , "d" );
				else strcat ( in , "ed" );
			}

			length = strlen ( in );
			break;
			case 'I' : {
				int pos;
				if ( ( pos = length - 1 ) < 2 ) break;
				if ( in [ pos ] == 'g' && in [ pos - 1 ] == 'n' && in [ pos - 2 ] == 'i' ) break;
				if ( strchr ( "aeiou" , in [ pos ] ) ) strcpy ( &in [ pos ] , "ing" );
				else {
					if ( strchr ( "bgp" , in [ pos ] ) && ! strchr ( "bgp" , in [ pos - 1 ] ) ) {
						in [ pos + 1 ] = in [ pos ];
						in [ pos + 2 ] = 0;
					}

					strcat ( in , "ing" );
				}

			}

			length = strlen ( in );
			break;
			case 'M' : strnfcpy ( memory = rules_rules_data.memory , in , rules_rules_max_length );
			rules_rules_data.vars [ 'm' ] = ( unsigned char ) length - 1;
			break;
			case 'Q' : if ( ! strncmp ( memory , in , rules_rules_max_length ) ) {
				if ( ! rules_rules_data.pass ) goto out_NULL;
			}

			break;
			case 'X' : {
				int mpos , count , ipos , mleft;
				char *inp , *mp;
				{
					if ( ( ( mpos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				{
					if ( ( ( count ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				{
					if ( ( ( ipos ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				mleft = ( int ) ( rules_rules_data.vars [ 'm' ] + 1 ) - mpos;
				if ( count > mleft ) count = mleft;
				if ( count <= 0 ) break;
				mp = memory + mpos;
				if ( ipos >= length ) {
					memcpy ( &in [ length ] , mp , count );
					in [ length += count ] = 0;
					break;
				}

				inp = in + ipos;
				memmove ( inp + count , inp , length - ipos );
				in [ length += count ] = 0;
				memcpy ( inp , mp , count );
			}

			break;
			case 'v' : {
				char var;
				unsigned char a , s;
				{
					if ( ! ( ( var ) = ( *rule ++ ) ) ) goto out_ERROR_END;
				}

				if ( var < 'a' || var > 'k' ) goto out_ERROR_POSITION;
				rules_rules_data.vars [ 'l' ] = length;
				{
					if ( ( ( a ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				{
					if ( ( ( s ) = rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( ( *rule ++ ) ) ) ] ) == 0x81 ) goto out_ERROR_POSITION;
				}

				rules_rules_data.vars [ ( ( unsigned int ) ( unsigned char ) ( var ) ) ] = a - s;
			}

			break;
			case '1' : if ( split < 0 ) goto out_ERROR_UNALLOWED;
			if ( ! split ) {
				if ( ! rules_rules_data.pass ) goto out_NULL;
			}

			if ( which ) memcpy ( rules_rules_data.aligned.buffer [ 2 ] , in , length + 1 );
			else strnzcpy ( rules_rules_data.aligned.buffer [ 2 ] , &word [ split ] , 0x80 );
			length = split;
			if ( length > 0x80 - 1 ) length = 0x80 - 1;
			memcpy ( in , word , length );
			in [ length ] = 0;
			which = 1;
			break;
			case '2' : if ( split < 0 ) goto out_ERROR_UNALLOWED;
			if ( ! split ) {
				if ( ! rules_rules_data.pass ) goto out_NULL;
			}

			if ( which ) {
				memcpy ( rules_rules_data.aligned.buffer [ 2 ] , in , length + 1 );
			}

			else {
				length = split;
				if ( length > 0x80 - 1 ) length = 0x80 - 1;
				strnzcpy ( rules_rules_data.aligned.buffer [ 2 ] , word , length + 1 );
			}

			strnzcpy ( in , &word [ split ] , 0x80 );
			length = strlen ( in );
			which = 2;
			break;
			case '+' : switch ( which ) {
				case 1 : strcat ( in , rules_rules_data.aligned.buffer [ 2 ] );
				break;
				case 2 : {
					char *out;
					{
						out = alt;
						alt = in;
					}

					strcpy ( out , rules_rules_data.aligned.buffer [ 2 ] );
					strcat ( out , in );
					in = out;
				}

				break;
				default : goto out_ERROR_UNALLOWED;
			}

			length = strlen ( in );
			which = 0;
			break;
			default : goto out_ERROR_UNKNOWN;
		}

		if ( ! length ) {
			if ( ! rules_rules_data.pass ) goto out_NULL;
		}

	}

	if ( which ) goto out_which;
	out_OK : in [ rules_rules_max_length ] = 0;
	if ( last ) {
		if ( length > rules_rules_max_length ) length = rules_rules_max_length;
		if ( length >= 4 - 1 ) {
			if ( *( long *) in != *( long *) last ) return in;
			if ( strcmp ( &in [ 4 - 1 ] , &last [ 4 - 1 ] ) ) return in;
			return ( ( void *) 0 );
		}

		if ( last [ length ] ) return in;
		if ( memcmp ( in , last , length ) ) return in;
		return ( ( void *) 0 );
	}

	return in;
	out_which : if ( which == 1 ) {
		strcat ( in , rules_rules_data.aligned.buffer [ 2 ] );
		goto out_OK;
	}

	strcat ( rules_rules_data.aligned.buffer [ 2 ] , in );
	in = rules_rules_data.aligned.buffer [ 2 ];
	goto out_OK;
	out_ERROR_POSITION : rules_errno = 4;
	if ( ( *( rule - 1 ) ) ) goto out_NULL;
	out_ERROR_END : rules_errno = 1;
	out_NULL : return ( ( void *) 0 );
	out_ERROR_CLASS : rules_errno = 5;
	if ( ( *( rule - 1 ) ) ) goto out_NULL;
	goto out_ERROR_END;
	out_ERROR_UNKNOWN : rules_errno = 2;
	goto out_NULL;
	out_ERROR_UNALLOWED : rules_errno = 3;
	goto out_NULL;
}

int rules_check ( struct rpp_context *start , int split ) {
	struct rpp_context ctx;
	char *rule;
	int count;
	rules_errno = 0;
	memcpy ( &ctx , start , sizeof ( ctx ) );
	rules_line = ctx.input -> number;
	count = 0;
	rules_rules_data.pass = - 1;
	while ( ( rule = rpp_next ( &ctx ) ) ) {
		rules_reject ( rule , split , ( ( void *) 0 ) , ( ( void *) 0 ) );
		if ( rules_errno ) break;
		if ( ctx.input ) rules_line = ctx.input -> number;
		count ++;
	}

	rules_rules_data.pass = 0;
	return rules_errno ? 0 : count;
}

int rules_count ( struct rpp_context *start , int split ) {
	int count;
	if ( ! ( count = rules_check ( start , split ) ) ) {
		log_event ( "! Invalid rule at line %d: %.100s" , rules_line , rules_errors [ rules_errno ] );
		fprintf ( stderr , "Invalid rule in %s at line %d: %s\n" , cfg_name , rules_line , rules_errors [ rules_errno ] );
		error ( );
	}

	return count;
}

volatile int event_pending = 0;
volatile int event_abort = 0 , event_save = 0 , event_status = 0;
volatile int event_ticksafety = 0;
static int signals_timer_save_interval , signals_timer_save_value;
static clock_t signals_timer_ticksafety_interval , signals_timer_ticksafety_value;
static clock_t signals_timer_emu_interval = 0;
static unsigned int signals_timer_emu_count = 0 , signals_timer_emu_max = 0;
void sig_timer_emu_init ( clock_t interval ) {
	signals_timer_emu_interval = interval;
	signals_timer_emu_count = 0;
	signals_timer_emu_max = 0;
}

void sig_timer_emu_tick ( void ) {
	static clock_t last = 0;
	clock_t current;
	struct tms buf;
	if ( ++ signals_timer_emu_count < signals_timer_emu_max ) return;
	current = times ( &buf );
	if ( ! last ) {
		last = current;
		return;
	}

	if ( current - last < signals_timer_emu_interval && current >= last ) {
		signals_timer_emu_max += signals_timer_emu_max + 1;
		return;
	}

	last = current;
	signals_timer_emu_count = 0;
	signals_timer_emu_max >>= 1;
	raise ( 14 );
}

static void nm_signals_sig_install_update ( void );
static void nm_signals_sig_handle_update ( int signum ) {
	event_save = event_pending = 1;
}

static void nm_signals_sig_install_update ( void ) {
	struct sigaction sa;
	memset ( &sa , 0 , sizeof ( sa ) );
	sa.__sigaction_handler.sa_handler = nm_signals_sig_handle_update;
	sa.sa_flags = 0x10000000;
	sigaction ( 1 , &sa , ( ( void *) 0 ) );
}

static void nm_signals_sig_remove_update ( void ) {
	signal ( 1 , ( ( __sighandler_t ) 1 ) );
}

void check_abort ( int be_async_signal_safe ) {
	if ( ! event_abort ) return;
	if ( be_async_signal_safe ) {
		write_loop ( 2 , "Session aborted\n" , 16 );
		_exit ( 1 );
	}

	fprintf ( stderr , "Session aborted\n" );
	error ( );
}

static void nm_signals_sig_install_abort ( void );
static void nm_signals_sig_handle_abort ( int signum ) {
	int saved_errno = ( *__errno_location ( ) );
	check_abort ( 1 );
	event_abort = event_pending = 1;
	write_loop ( 2 , "Wait...\r" , 8 );
	nm_signals_sig_install_abort ( );
	( *__errno_location ( ) ) = saved_errno;
}

static void nm_signals_sig_install_abort ( void ) {
	signal ( 2 , nm_signals_sig_handle_abort );
	signal ( 15 , nm_signals_sig_handle_abort );
	signal ( 24 , nm_signals_sig_handle_abort );
	signal ( 25 , nm_signals_sig_handle_abort );
}

static void nm_signals_sig_remove_abort ( void ) {
	signal ( 2 , ( ( __sighandler_t ) 0 ) );
	signal ( 15 , ( ( __sighandler_t ) 0 ) );
	signal ( 24 , ( ( __sighandler_t ) 0 ) );
	signal ( 25 , ( ( __sighandler_t ) 0 ) );
}

static void nm_signals_sig_install_timer ( void );
static void nm_signals_sig_handle_timer ( int signum ) {
	int saved_errno = ( *__errno_location ( ) );
	if ( ! -- signals_timer_save_value ) {
		signals_timer_save_value = signals_timer_save_interval;
		event_save = event_pending = 1;
	}

	if ( ! -- signals_timer_ticksafety_value ) {
		signals_timer_ticksafety_value = signals_timer_ticksafety_interval;
		event_ticksafety = event_pending = 1;
	}

	signal ( 14 , nm_signals_sig_handle_timer );
	( *__errno_location ( ) ) = saved_errno;
}

static void nm_signals_sig_install_timer ( void ) {
	signal ( 14 , nm_signals_sig_handle_timer );
	sig_timer_emu_init ( 1 *clk_tck );
}

static void nm_signals_sig_remove_timer ( void ) {
	signal ( 14 , ( ( __sighandler_t ) 0 ) );
}

static void nm_signals_sig_done ( void );
void sig_init ( void ) {
	clk_tck_init ( );
	signals_timer_save_interval = cfg_get_int ( "Options" , ( ( void *) 0 ) , "Save" );
	if ( signals_timer_save_interval < 0 ) signals_timer_save_interval = ( 600 / 1 );
	else if ( ( signals_timer_save_interval /= 1 ) <= 0 ) signals_timer_save_interval = 1;
	signals_timer_save_value = signals_timer_save_interval;
	signals_timer_ticksafety_interval = ( clock_t ) 1 << ( sizeof ( clock_t ) *8 - 4 );
	signals_timer_ticksafety_interval /= clk_tck;
	if ( ( signals_timer_ticksafety_interval /= 1 ) <= 0 ) signals_timer_ticksafety_interval = 1;
	signals_timer_ticksafety_value = signals_timer_ticksafety_interval;
	atexit ( nm_signals_sig_done );
	nm_signals_sig_install_update ( );
	nm_signals_sig_install_abort ( );
	nm_signals_sig_install_timer ( );
}

static void nm_signals_sig_done ( void ) {
	nm_signals_sig_remove_update ( );
	nm_signals_sig_remove_abort ( );
	nm_signals_sig_remove_timer ( );
}

static int single_progress = 0;
static int single_rec_rule;
static struct db_main *single_single_db;
static int single_rule_number , single_rule_count;
static int single_length , single_key_count;
static struct db_keys *single_guessed_keys;
static struct rpp_context *single_rule_ctx;
static void nm_single_save_state ( FILE *file ) {
	fprintf ( file , "%d\n" , single_rec_rule );
}

static int nm_single_restore_rule_number ( void ) {
	if ( single_rule_ctx ) for ( single_rule_number = 0;
	single_rule_number < single_rec_rule;
	single_rule_number ++ ) if ( ! rpp_next ( single_rule_ctx ) ) return 1;
	return 0;
}

static int nm_single_restore_state ( FILE *file ) {
	if ( fscanf ( file , "%d\n" , &single_rec_rule ) != 1 ) return 1;
	return nm_single_restore_rule_number ( );
}

static int nm_single_get_progress ( void ) {
	if ( single_progress ) return single_progress;
	return single_rule_number *100 / ( single_rule_count + 1 );
}

static void nm_single_single_alloc_keys ( struct db_keys **keys ) {
	int hash_size = sizeof ( struct db_keys_hash ) + sizeof ( struct db_keys_hash_entry ) *( single_key_count - 1 );
	if ( ! *keys ) {
		*keys = mem_alloc_tiny ( sizeof ( struct db_keys ) - 1 + single_length *single_key_count , 4 );
		( *keys ) -> hash = mem_alloc_tiny ( hash_size , 4 );
	}

	( *keys ) -> count = 0;
	( *keys ) -> ptr = ( *keys ) -> buffer;
	( *keys ) -> have_words = 1;
	( *keys ) -> rule = single_rule_number;
	( *keys ) -> lock = 0;
	memset ( ( *keys ) -> hash , - 1 , hash_size );
}

static void nm_single_single_init ( void ) {
	struct db_salt *salt;
	log_event ( "Proceeding with \"single crack\" mode" );
	single_progress = 0;
	single_length = single_single_db -> format -> params.plaintext_length;
	single_key_count = single_single_db -> format -> params.min_keys_per_crypt;
	if ( single_key_count < 8 ) single_key_count = 8;
	if ( rpp_init ( single_rule_ctx , "Single" ) ) {
		log_event ( "! No \"single crack\" mode rules found" );
		fprintf ( stderr , "No \"single crack\" mode rules found in %s\n" , cfg_name );
		error ( );
	}

	rules_init ( single_length );
	single_rec_rule = single_rule_number = 0;
	single_rule_count = rules_count ( single_rule_ctx , 0 );
	log_event ( "- %d preprocessed word mangling rules" , single_rule_count );
	status_init ( nm_single_get_progress , 0 );
	rec_restore_mode ( nm_single_restore_state );
	rec_init ( single_single_db , nm_single_save_state );
	salt = single_single_db -> salts;
	do {
		nm_single_single_alloc_keys ( &salt -> keys );
	}

	while ( ( salt = salt -> next ) );
	if ( single_key_count > 1 ) log_event ( "- Allocated %d buffer%s of %d candidate passwords%s" , single_single_db -> salt_count , single_single_db -> salt_count != 1 ? "s" : "" , single_key_count , single_single_db -> salt_count != 1 ? " each" : "" );
	single_guessed_keys = ( ( void *) 0 );
	nm_single_single_alloc_keys ( &single_guessed_keys );
	crk_init ( single_single_db , ( ( void *) 0 ) , single_guessed_keys );
}

static int nm_single_single_key_hash ( char *key ) {
	unsigned int hash , extra , pos;
	hash = ( unsigned char ) key [ 0 ];
	if ( ! hash ) goto out;
	extra = ( unsigned char ) key [ 1 ];
	if ( ! extra ) goto out_and;
	pos = 3;
	if ( single_length & 1 ) {
		while ( key [ 2 ] ) {
			hash += ( unsigned char ) key [ 2 ];
			if ( ! key [ 3 ] || pos >= ( unsigned int ) single_length ) break;
			extra += ( unsigned char ) key [ 3 ];
			key += 2;
			pos += 2;
		}

	}

	else {
		while ( key [ 2 ] && ( int ) pos < single_length ) {
			hash += ( unsigned char ) key [ 2 ];
			if ( ! key [ 3 ] ) break;
			extra += ( unsigned char ) key [ 3 ];
			key += 2;
			pos += 2;
		}

	}

	hash -= extra + pos;
	hash ^= extra << 6;
	out_and : hash &= ( 1 << 7 ) - 1;
	out : return hash;
}

static int nm_single_single_add_key ( struct db_keys *keys , char *key ) {
	int index , new_hash , reuse_hash;
	struct db_keys_hash_entry *entry;
	if ( ( index = keys -> hash -> hash [ new_hash = nm_single_single_key_hash ( key ) ] ) >= 0 ) do {
		entry = & keys -> hash -> list [ index ];
		if ( ! strncmp ( key , &keys -> buffer [ entry -> offset ] , single_length ) ) return 0;
	}

	while ( ( index = entry -> next ) >= 0 );
	index = keys -> hash -> hash [ reuse_hash = nm_single_single_key_hash ( keys -> ptr ) ];
	if ( index == keys -> count ) keys -> hash -> hash [ reuse_hash ] = keys -> hash -> list [ index ].next;
	else if ( index >= 0 ) {
		entry = & keys -> hash -> list [ index ];
		while ( ( index = entry -> next ) >= 0 ) {
			if ( index == keys -> count ) {
				entry -> next = keys -> hash -> list [ index ].next;
				break;
			}

			entry = & keys -> hash -> list [ index ];
		}

	}

	index = keys -> hash -> hash [ new_hash ];
	entry = & keys -> hash -> list [ keys -> count ];
	entry -> next = index;
	entry -> offset = keys -> ptr - keys -> buffer;
	keys -> hash -> hash [ new_hash ] = keys -> count;
	strnfcpy ( keys -> ptr , key , single_length );
	keys -> ptr += single_length;
	return ++ ( keys -> count ) >= single_key_count;
}

static int nm_single_single_process_buffer ( struct db_salt *salt ) {
	struct db_salt *current;
	struct db_keys *keys;
	size_t size;
	if ( crk_process_salt ( salt ) ) return 1;
	keys = salt -> keys;
	keys -> count = 0;
	keys -> ptr = keys -> buffer;
	keys -> lock ++;
	if ( single_guessed_keys -> count ) {
		keys = mem_alloc ( size = sizeof ( struct db_keys ) - 1 + single_length *single_guessed_keys -> count );
		memcpy ( keys , single_guessed_keys , size );
		keys -> ptr = keys -> buffer;
		do {
			current = single_single_db -> salts;
			do {
				if ( current == salt ) continue;
				if ( ! current -> list ) continue;
				if ( nm_single_single_add_key ( current -> keys , keys -> ptr ) ) if ( nm_single_single_process_buffer ( current ) ) return 1;
			}

			while ( ( current = current -> next ) );
			keys -> ptr += single_length;
		}

		while ( -- keys -> count );
		{
			if ( ( keys ) ) {
				free ( ( keys ) );
				( keys ) = ( ( void *) 0 );
			}

		}

		;
	}

	keys = salt -> keys;
	keys -> lock --;
	if ( ! keys -> count && ! keys -> lock ) keys -> rule = single_rule_number;
	return 0;
}

static int nm_single_single_process_pw ( struct db_salt *salt , struct db_password *pw , char *rule ) {
	struct db_keys *keys;
	struct list_entry *first , *second;
	int first_number , second_number;
	char pair [ 0x80 ];
	int split;
	char *key;
	unsigned int c;
	if ( ! ( first = pw -> words -> head ) ) return - 1;
	keys = salt -> keys;
	first_number = 0;
	do {
		if ( ( key = rules_apply ( first -> data , rule , 0 , ( ( void *) 0 ) ) ) ) if ( ( ! f_filter || ext_filter_body ( key , key ) ) ) if ( nm_single_single_add_key ( keys , key ) ) if ( nm_single_single_process_buffer ( salt ) ) return 1;
		if ( ! salt -> list ) return 2;
		if ( ! pw -> binary ) return 0;
		if ( ++ first_number > 4 ) continue;
		c = ( unsigned int ) first -> data [ 0 ] | 0x20;
		if ( c < 'a' || c > 'z' ) continue;
		second_number = 0;
		second = pw -> words -> head;
		do if ( first != second ) {
			if ( ( split = strlen ( first -> data ) ) < single_length ) {
				strnzcpy ( pair , first -> data , 0x80 );
				strnzcat ( pair , second -> data , 0x80 );
				if ( ( key = rules_apply ( pair , rule , split , ( ( void *) 0 ) ) ) ) if ( ( ! f_filter || ext_filter_body ( key , key ) ) ) if ( nm_single_single_add_key ( keys , key ) ) if ( nm_single_single_process_buffer ( salt ) ) return 1;
				if ( ! salt -> list ) return 2;
				if ( ! pw -> binary ) return 0;
			}

			if ( first -> data [ 1 ] ) {
				pair [ 0 ] = first -> data [ 0 ];
				pair [ 1 ] = 0;
				strnzcat ( pair , second -> data , 0x80 );
				if ( ( key = rules_apply ( pair , rule , 1 , ( ( void *) 0 ) ) ) ) if ( ( ! f_filter || ext_filter_body ( key , key ) ) ) if ( nm_single_single_add_key ( keys , key ) ) if ( nm_single_single_process_buffer ( salt ) ) return 1;
				if ( ! salt -> list ) return 2;
				if ( ! pw -> binary ) return 0;
			}

		}

		while ( ++ second_number <= 4 && ( second = second -> next ) );
	}

	while ( ( first = first -> next ) );
	return 0;
}

static int nm_single_single_process_salt ( struct db_salt *salt , char *rule ) {
	struct db_keys *keys;
	struct db_password *pw , **last;
	int status , have_words = 0;
	keys = salt -> keys;
	if ( ! keys -> have_words ) goto no_own_words;
	last = & salt -> list;
	pw = *last;
	do {
		if ( pw -> binary ) {
			if ( ! ( status = nm_single_single_process_pw ( salt , pw , rule ) ) ) {
				have_words = 1;
				goto next;
			}

			if ( status < 0 ) goto next;
			if ( status == 2 ) return 0;
			return 1;
		}

		else {
			*last = pw -> next;
		}

		next : last = & pw -> next;
	}

	while ( ( pw = pw -> next ) );
	if ( keys -> count && single_rule_number - keys -> rule > ( single_key_count << 1 ) ) if ( nm_single_single_process_buffer ( salt ) ) return 1;
	if ( ! keys -> count ) keys -> rule = single_rule_number;
	if ( ! have_words ) {
		keys -> have_words = 0;
		no_own_words : if ( keys -> count && nm_single_single_process_buffer ( salt ) ) return 1;
	}

	return 0;
}

static void nm_single_single_run ( void ) {
	char *prerule , *rule;
	struct db_salt *salt;
	int min , saved_min;
	int have_words;
	saved_min = single_rec_rule;
	while ( ( prerule = rpp_next ( single_rule_ctx ) ) ) {
		if ( ! ( rule = rules_reject ( prerule , 0 , ( ( void *) 0 ) , single_single_db ) ) ) {
			log_event ( "- Rule #%d: '%.100s' rejected" , ++ single_rule_number , prerule );
			continue;
		}

		if ( strcmp ( prerule , rule ) ) log_event ( "- Rule #%d: '%.100s' accepted as '%s'" , single_rule_number + 1 , prerule , rule );
		else log_event ( "- Rule #%d: '%.100s' accepted" , single_rule_number + 1 , prerule );
		if ( saved_min != single_rec_rule ) {
			log_event ( "- Oldest still in use is now rule #%d" , single_rec_rule + 1 );
			saved_min = single_rec_rule;
		}

		have_words = 0;
		min = single_rule_number;
		salt = single_single_db -> salts;
		do {
			if ( ! salt -> list ) continue;
			if ( nm_single_single_process_salt ( salt , rule ) ) return;
			if ( ! salt -> keys -> have_words ) continue;
			have_words = 1;
			if ( salt -> keys -> rule < min ) min = salt -> keys -> rule;
		}

		while ( ( salt = salt -> next ) );
		single_rec_rule = min;
		single_rule_number ++;
		if ( have_words ) continue;
		log_event ( "- No information to base%s candidate passwords on" , single_rule_number > 1 ? " further" : "" );
		return;
	}

}

static void nm_single_single_done ( void ) {
	struct db_salt *salt;
	if ( ! event_abort ) {
		if ( ( salt = single_single_db -> salts ) ) {
			log_event ( "- Processing the remaining buffered " "candidate passwords, if any" );
			do {
				if ( ! salt -> list ) continue;
				if ( salt -> keys -> count ) if ( nm_single_single_process_buffer ( salt ) ) break;
			}

			while ( ( salt = salt -> next ) );
		}

		single_progress = 100;
	}

	rec_done ( event_abort || ( status.pass && single_single_db -> salts ) );
}

void do_single_crack ( struct db_main *db ) {
	struct rpp_context ctx;
	single_single_db = db;
	single_rule_ctx = & ctx;
	nm_single_single_init ( );
	nm_single_single_run ( );
	nm_single_single_done ( );
}

struct status_main status;
unsigned int status_restored_time = 0;
int ( *status_get_progress ) ( void ) = ( ( void *) 0 );
static clock_t nm_status_get_time ( void ) {
	struct tms buf;
	return times ( &buf );
}

void status_init ( int ( *get_progress ) ( void ) , int start ) {
	if ( start ) {
		if ( ! status_restored_time ) memset ( &status , 0 , sizeof ( status ) );
		status.start_time = nm_status_get_time ( );
	}

	status_get_progress = get_progress;
	clk_tck_init ( );
}

void status_ticks_overflow_safety ( void ) {
	unsigned int time;
	clock_t ticks;
	ticks = nm_status_get_time ( ) - status.start_time;
	if ( ticks > ( ( clock_t ) 1 << ( sizeof ( clock_t ) *8 - 2 ) ) ) {
		time = ticks / clk_tck;
		status_restored_time += time;
		status.start_time += ( clock_t ) time *clk_tck;
	}

}

void status_update_crypts ( unsigned int count ) {
	unsigned int saved_hi;
	saved_hi = status.crypts.hi;
	add32to64 ( &status.crypts , count );
	if ( status.crypts.hi != saved_hi ) status_ticks_overflow_safety ( );
}

unsigned int status_get_time ( void ) {
	return status_restored_time + ( nm_status_get_time ( ) - status.start_time ) / clk_tck;
}

static char *nm_status_status_get_cps ( char *buffer ) {
	int use_ticks;
	clock_t ticks;
	unsigned long time;
	_john_int64_t tmp , cps;
	unsigned int cps_100;
	use_ticks = ! status.crypts.hi && ! status_restored_time;
	ticks = nm_status_get_time ( ) - status.start_time;
	if ( use_ticks ) time = ticks;
	else time = status_restored_time + ticks / clk_tck;
	if ( ! time ) time = 1;
	cps = status.crypts;
	if ( use_ticks ) mul64by32 ( &cps , clk_tck );
	div64by32 ( &cps , time );
	if ( cps.hi > 232 || ( cps.hi == 232 && cps.lo >= 3567587328U ) ) sprintf ( buffer , "%uG" , div64by32lo ( &cps , 1000000000 ) );
	else if ( cps.hi || cps.lo >= 1000000000 ) sprintf ( buffer , "%uM" , div64by32lo ( &cps , 1000000 ) );
	else if ( cps.lo >= 1000000 ) sprintf ( buffer , "%uK" , div64by32lo ( &cps , 1000 ) );
	else if ( cps.lo >= 100 ) sprintf ( buffer , "%u" , cps.lo );
	else {
		tmp = status.crypts;
		if ( use_ticks ) mul64by32 ( &tmp , clk_tck );
		mul64by32 ( &tmp , 100 );
		cps_100 = div64by32lo ( &tmp , time ) % 100;
		sprintf ( buffer , "%u.%02u" , cps.lo , cps_100 );
	}

	return buffer;
}

static void nm_status_status_print_stdout ( char *percent ) {
	unsigned int time = status_get_time ( );
	char s_wps [ 64 ];
	char s_words [ 32 ];
	_john_int64_t current , next , rem;
	char *s_words_ptr;
	s_words_ptr = & s_words [ sizeof ( s_words ) - 1 ];
	*s_words_ptr = 0;
	current = status.crypts;
	do {
		next = current;
		div64by32 ( &next , 10 );
		rem = next;
		mul64by32 ( &rem , 10 );
		neg64 ( &rem );
		add64to64 ( &rem , &current );
		*-- s_words_ptr = rem.lo + '0';
		current = next;
	}

	while ( current.lo || current.hi );
}

static void nm_status_status_print_cracking ( char *percent ) {
	unsigned int time = status_get_time ( );
	char *key , saved_key [ 0x80 ];
	char s_cps [ 64 ];
	if ( ! ( options.flags & 0x00040000 ) ) {
		if ( ( key = crk_get_key2 ( ) ) ) strnzcpy ( saved_key , key , 0x80 );
		else saved_key [ 0 ] = 0;
	}

	fprintf ( stderr , "guesses: %u  " "time: %u:%02u:%02u:%02u" "%s  " "c/s: %s" , status.guess_count , time / 86400 , time % 86400 / 3600 , time % 3600 / 60 , time % 60 , percent , nm_status_status_get_cps ( s_cps ) );
	if ( ( options.flags & 0x00040000 ) || ! ( status.crypts.lo | status.crypts.hi ) ) fputc ( '\n' , stderr );
	else fprintf ( stderr , "  trying: %s%s%s\n" , crk_get_key1 ( ) , saved_key [ 0 ] ? " - " : "" , saved_key );
}

void status_print ( void ) {
	int percent_value;
	char s_percent [ 32 ];
	percent_value = - 1;
	if ( options.flags & 0x00040000 ) percent_value = status.progress;
	else if ( status_get_progress ) percent_value = status_get_progress ( );
	s_percent [ 0 ] = 0;
	if ( percent_value >= 0 ) sprintf ( s_percent , status.pass ? " %d%% (%d)" : " %d%%" , percent_value , status.pass );
	else if ( status.pass ) sprintf ( s_percent , " (%d)" , status.pass );
	if ( options.flags & 0x00008000 ) nm_status_status_print_stdout ( s_percent );
	else nm_status_status_print_cracking ( s_percent );
}

static struct fmt_tests trip_fmt_tests [ ] = {
	{
		"Rk7VUsDT2U" , "simpson" 	}

	, {
		"3GqYIJ3Obs" , "tripcode" 	}

	, {
		( ( void *) 0 ) , ( ( void *) 0 ) 	}

}

;
static struct {
	union {
		double dummy;
		DES_binary binary;
	}

	aligned;
	char key [ 8 ];
}

trip_fmt_buffer [ 0x80 ];
static DES_binary trip_fmt_binary_mask;
static unsigned char trip_fmt_salt_map [ 0x100 ];
static void nm_trip_fmt_init ( void ) {
	char fake_crypt [ 14 ];
	long *alt_binary;
	int i;
	DES_std_init ( );
	memset ( fake_crypt , '.' , 13 );
	fake_crypt [ 13 ] = 0;
	memcpy ( trip_fmt_binary_mask , DES_std_get_binary ( fake_crypt ) , sizeof ( trip_fmt_binary_mask ) );
	fake_crypt [ 2 ] = 'z';
	alt_binary = DES_std_get_binary ( fake_crypt );
	for ( i = 0;
	i < 16 / 4;
	i ++ ) {
		trip_fmt_binary_mask [ i ] ^= ~ alt_binary [ i ];
		trip_fmt_binary_mask [ i ] &= ( ( 0x1E1E1E1E ) << 2 );
	}

	for ( i = 0;
	i < 0x100;
	i ++ ) {
		char *from = ":;<=>?@[\\]^_`";
		char *to = "ABCDEFGabcdef";
		char *p;
		if ( atoi64 [ i ] != 0x7F ) trip_fmt_salt_map [ i ] = i;
		else if ( ( p = strchr ( from , i ) ) ) trip_fmt_salt_map [ i ] = to [ p - from ];
		else trip_fmt_salt_map [ i ] = '.';
	}

}

static int nm_trip_fmt_valid ( char *ciphertext ) {
	char *pos;
	for ( pos = ciphertext;
	atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *pos ) ) ] != 0x7F;
	pos ++ );
	if ( *pos || pos - ciphertext != 10 ) return 0;
	if ( atoi64 [ ( ( unsigned int ) ( unsigned char ) ( *( pos - 1 ) ) ) ] & 3 ) return 0;
	return 1;
}

static void *nm_trip_fmt_get_binary ( char *ciphertext ) {
	char fake_crypt [ 14 ];
	fake_crypt [ 0 ] = '.';
	fake_crypt [ 1 ] = '.';
	fake_crypt [ 2 ] = '.';
	memcpy ( &fake_crypt [ 3 ] , ciphertext , 11 );
	return DES_std_get_binary ( fake_crypt );
}

static int nm_trip_fmt_binary_hash_0 ( void *binary ) {
	return ( ( ( *( long *) binary ) >> ( 2 + 1 ) ) & 0xF );
}

static int nm_trip_fmt_binary_hash_1 ( void *binary ) {
	return ( ( ( ( *( long *) binary ) >> ( 2 + 1 ) ) & 0xF ) | ( ( ( *( long *) binary ) >> ( 2 + 5 ) ) & 0xF0 ) );
}

static int nm_trip_fmt_binary_hash_2 ( void *binary ) {
	return ( ( ( ( ( *( long *) binary ) >> ( 2 + 1 ) ) & 0xF ) | ( ( ( *( long *) binary ) >> ( 2 + 5 ) ) & 0xF0 ) ) | ( ( ( *( long *) binary ) >> ( 2 + 9 ) ) & 0xF00 ) );
}

static int nm_trip_fmt_get_hash_0 ( int index ) {
	return ( ( ( trip_fmt_buffer [ index ].aligned.binary [ 0 ] ) >> ( 2 + 1 ) ) & 0xF );
}

static int nm_trip_fmt_get_hash_1 ( int index ) {
	long binary;
	binary = trip_fmt_buffer [ index ].aligned.binary [ 0 ];
	return ( ( ( ( binary ) >> ( 2 + 1 ) ) & 0xF ) | ( ( ( binary ) >> ( 2 + 5 ) ) & 0xF0 ) );
}

static int nm_trip_fmt_get_hash_2 ( int index ) {
	long binary;
	binary = trip_fmt_buffer [ index ].aligned.binary [ 0 ];
	return ( ( ( ( ( binary ) >> ( 2 + 1 ) ) & 0xF ) | ( ( ( binary ) >> ( 2 + 5 ) ) & 0xF0 ) ) | ( ( ( binary ) >> ( 2 + 9 ) ) & 0xF00 ) );
}

static void nm_trip_fmt_crypt_all ( int count ) {
	int index;
	for ( index = 0;
	index < count;
	index ++ ) {
		static long prev_salt = - 1;
		long salt;
		unsigned long *out;
		char fake_crypt [ 14 ];
		if ( ! trip_fmt_buffer [ index ].key [ 0 ] ) {
			fake_crypt [ 0 ] = '.';
			fake_crypt [ 1 ] = '.';
		}

		else if ( ! trip_fmt_buffer [ index ].key [ 1 ] ) {
			fake_crypt [ 0 ] = 'H';
			fake_crypt [ 1 ] = '.';
		}

		else if ( ! trip_fmt_buffer [ index ].key [ 2 ] ) {
			fake_crypt [ 0 ] = trip_fmt_salt_map [ ( ( unsigned int ) ( unsigned char ) ( trip_fmt_buffer [ index ].key [ 1 ] ) ) ];
			fake_crypt [ 1 ] = 'H';
		}

		else {
			fake_crypt [ 0 ] = trip_fmt_salt_map [ ( ( unsigned int ) ( unsigned char ) ( trip_fmt_buffer [ index ].key [ 1 ] ) ) ];
			fake_crypt [ 1 ] = trip_fmt_salt_map [ ( ( unsigned int ) ( unsigned char ) ( trip_fmt_buffer [ index ].key [ 2 ] ) ) ];
		}

		fake_crypt [ 13 ] = 0;
		salt = DES_std_get_salt ( fake_crypt );
		if ( salt != prev_salt ) DES_std_set_salt ( prev_salt = salt );
		DES_std_set_key ( trip_fmt_buffer [ index ].key );
		DES_std_crypt ( DES_KS_current , out = trip_fmt_buffer [ index ].aligned.binary );
		{
			long mask;
			mask = ( out [ 0 ] ^ out [ 1 ] ) & salt;
			out [ 0 ] ^= mask;
			out [ 1 ] ^= mask;
			mask = ( out [ 2 ] ^ out [ 3 ] ) & salt;
			out [ 2 ] ^= mask;
			out [ 3 ] ^= mask;
		}

		out [ 0 ] &= trip_fmt_binary_mask [ 0 ];
	}

}

static int nm_trip_fmt_cmp_all ( void *binary , int count ) {
	int index;
	for ( index = 0;
	index < count;
	index ++ ) if ( *( unsigned long *) binary == trip_fmt_buffer [ index ].aligned.binary [ 0 ] ) return 1;
	return 0;
}

static int nm_trip_fmt_cmp_one ( void *binary , int index ) {
	return *( unsigned long *) binary == trip_fmt_buffer [ index ].aligned.binary [ 0 ];
}

static int nm_trip_fmt_cmp_exact ( char *source , int index ) {
	long *binary;
	int word;
	binary = nm_trip_fmt_get_binary ( source );
	for ( word = 0;
	word < 16 / 4;
	word ++ ) if ( ( unsigned long ) binary [ word ] != ( trip_fmt_buffer [ index ].aligned.binary [ word ] & trip_fmt_binary_mask [ word ] ) ) return 0;
	return 1;
}

static void nm_trip_fmt_set_key ( char *key , int index ) {
	memcpy ( trip_fmt_buffer [ index ].key , key , 8 );
}

static char *nm_trip_fmt_get_key ( int index ) {
	static char out [ 8 + 1 ];
	memcpy ( out , trip_fmt_buffer [ index ].key , 8 );
	out [ 8 ] = 0;
	return out;
}

struct fmt_main fmt_trip = {
	{
		"trip" , "Tripcode DES" , "Std DES" , "" , - 1 , 8 , 4 , 0 , 0x40 , 0x80 , 0x00000001 , trip_fmt_tests 	}

	, {
		nm_trip_fmt_init , nm_trip_fmt_valid , fmt_default_split , nm_trip_fmt_get_binary , fmt_default_salt , {
			nm_trip_fmt_binary_hash_0 , nm_trip_fmt_binary_hash_1 , nm_trip_fmt_binary_hash_2 , ( ( void *) 0 ) , ( ( void *) 0 ) , ( ( void *) 0 ) , ( ( void *) 0 ) 		}

		, fmt_default_salt_hash , fmt_default_set_salt , nm_trip_fmt_set_key , nm_trip_fmt_get_key , fmt_default_clear_keys , nm_trip_fmt_crypt_all , {
			nm_trip_fmt_get_hash_0 , nm_trip_fmt_get_hash_1 , nm_trip_fmt_get_hash_2 , ( ( void *) 0 ) , ( ( void *) 0 ) , ( ( void *) 0 ) , ( ( void *) 0 ) 		}

		, nm_trip_fmt_cmp_all , nm_trip_fmt_cmp_one , nm_trip_fmt_cmp_exact 	}

	, {
		0 	}

	, ( ( void *) 0 ) }

;
static void nm_unafs_process_entry ( unsigned char *entry , char *cell ) {
	char *name = ( char *) & entry [ 40 ];
	char *instance = ( char *) & entry [ 104 ];
	unsigned char *key = & entry [ 168 ];
	int index;
	if ( ! name [ 0 ] ) return;
	name [ 63 ] = 0;
	printf ( "%s" , name );
	if ( instance [ 0 ] ) {
		instance [ 63 ] = 0;
		printf ( ".%s" , instance );
	}

	printf ( ":$K4$" );
	for ( index = 0;
	index < 8;
	index ++ ) printf ( "%02x" , ( int ) key [ index ] );
	printf ( ",%s\n" , cell );
}

static int nm_unafs_process_db ( FILE *file , char *cell ) {
	unsigned char buffer [ 200 ];
	long size;
	if ( fread ( buffer , 8 , 1 , file ) != 1 ) return 1;
	size = ( ( long ) buffer [ 6 ] << 8 ) | ( long ) buffer [ 7 ];
	if ( size == 0 ) size = 64;
	if ( fseek ( file , size , 0 ) ) pexit ( "fseek" );
	if ( fread ( buffer , 8 , 1 , file ) != 1 ) return 1;
	size += ( ( long ) buffer [ 4 ] << 24 ) | ( ( long ) buffer [ 5 ] << 16 ) | ( ( long ) buffer [ 6 ] << 8 ) | ( long ) buffer [ 7 ];
	if ( fseek ( file , size , 0 ) ) pexit ( "fseek" );
	while ( fread ( buffer , 1 , 200 , file ) == 200 ) nm_unafs_process_entry ( buffer , cell );
	return 0;
}

int unafs ( int argc , char **argv ) {
	FILE *file;
	if ( argc != 3 ) {
		puts ( "Usage: unafs DATABASE-FILE CELL-NAME" );
		if ( argc <= 1 ) return 0;
		else error ( );
	}

	if ( ! ( file = fopen ( argv [ 1 ] , "rb" ) ) ) pexit ( "fopen: %s" , argv [ 1 ] );
	if ( nm_unafs_process_db ( file , argv [ 2 ] ) ) if ( ! ferror ( file ) ) {
		fprintf ( stderr , "fread: Unexpected EOF\n" );
		error ( );
	}

	if ( ferror ( file ) ) pexit ( "fread" );
	if ( fclose ( file ) ) pexit ( "fclose" );
	return 0;
}

static struct {
	unsigned int *hash;
	char *data;
}

unique_buffer;
static FILE *unique_output;
static unsigned int nm_unique_get_int ( unsigned int *ptr ) {
	unsigned char *bytes = ( unsigned char *) ptr;
	return ( unsigned int ) bytes [ 0 ] | ( ( unsigned int ) bytes [ 1 ] << 8 ) | ( ( unsigned int ) bytes [ 2 ] << 16 ) | ( ( unsigned int ) bytes [ 3 ] << 24 );
}

static void nm_unique_put_int ( unsigned int *ptr , unsigned int value ) {
	unsigned char *bytes = ( unsigned char *) ptr;
	bytes [ 0 ] = value;
	bytes [ 1 ] = value >> 8;
	bytes [ 2 ] = value >> 16;
	bytes [ 3 ] = value >> 24;
}

static unsigned int nm_unique_line_hash ( char *line ) {
	unsigned int hash , extra;
	char *p;
	p = line + 2;
	hash = ( unsigned char ) line [ 0 ];
	if ( ! hash ) goto out;
	extra = ( unsigned char ) line [ 1 ];
	if ( ! extra ) goto out;
	while ( *p ) {
		hash <<= 3;
		extra <<= 2;
		hash += ( unsigned char ) p [ 0 ];
		if ( ! p [ 1 ] ) break;
		extra += ( unsigned char ) p [ 1 ];
		p += 2;
		if ( hash & 0xe0000000 ) {
			hash ^= hash >> 20;
			extra ^= extra >> 20;
			hash &= ( 1 << 20 ) - 1;
		}

	}

	hash -= extra;
	hash ^= extra << ( 20 / 2 );
	hash ^= hash >> 20;
	hash &= ( 1 << 20 ) - 1;
	out : return hash;
}

static void nm_unique_init_hash ( void ) {
	memset ( unique_buffer.hash , 0xff , ( 1 << 20 ) *sizeof ( unsigned int ) );
}

static void nm_unique_read_buffer ( void ) {
	char line [ 0x400 ];
	unsigned int ptr , current , *last;
	nm_unique_init_hash ( );
	ptr = 0;
	while ( fgetl ( line , sizeof ( line ) , stdin ) ) {
		last = & unique_buffer.hash [ nm_unique_line_hash ( line ) ];
		current = nm_unique_get_int ( last );
		while ( current != 0xFFFFFFFF ) {
			if ( ! strcmp ( line , &unique_buffer.data [ current + 4 ] ) ) break;
			last = ( unsigned int *) & unique_buffer.data [ current ];
			current = nm_unique_get_int ( last );
		}

		if ( current != 0xFFFFFFFF ) continue;
		nm_unique_put_int ( last , ptr );
		nm_unique_put_int ( ( unsigned int *) & unique_buffer.data [ ptr ] , 0xFFFFFFFF );
		ptr += 4;
		strcpy ( &unique_buffer.data [ ptr ] , line );
		ptr += strlen ( line ) + 1;
		if ( ptr > 0x4000000 - sizeof ( line ) - 8 ) break;
	}

	if ( ferror ( stdin ) ) pexit ( "fgets" );
	nm_unique_put_int ( ( unsigned int *) & unique_buffer.data [ ptr ] , 0xFFFFFFFE );
}

static void nm_unique_write_buffer ( void ) {
	unsigned int ptr , hash;
	ptr = 0;
	while ( ( hash = nm_unique_get_int ( ( unsigned int *) & unique_buffer.data [ ptr ] ) ) != 0xFFFFFFFE ) {
		unsigned int length , size;
		ptr += 4;
		length = strlen ( &unique_buffer.data [ ptr ] );
		size = length + 1;
		if ( hash != 0xFFFFFFFD ) {
			unique_buffer.data [ ptr + length ] = '\n';
			if ( fwrite ( &unique_buffer.data [ ptr ] , size , 1 , unique_output ) != 1 ) pexit ( "fwrite" );
		}

		ptr += size;
	}

}

static void nm_unique_clean_buffer ( void ) {
	char line [ 0x400 ];
	unsigned int current , *last;
	if ( fseek ( unique_output , 0 , 0 ) < 0 ) pexit ( "fseek" );
	while ( fgetl ( line , sizeof ( line ) , unique_output ) ) {
		last = & unique_buffer.hash [ nm_unique_line_hash ( line ) ];
		current = nm_unique_get_int ( last );
		while ( current != 0xFFFFFFFF && current != 0xFFFFFFFD ) {
			if ( ! strcmp ( line , &unique_buffer.data [ current + 4 ] ) ) {
				nm_unique_put_int ( last , nm_unique_get_int ( ( unsigned int *) & unique_buffer.data [ current ] ) );
				nm_unique_put_int ( ( unsigned int *) & unique_buffer.data [ current ] , 0xFFFFFFFD );
				break;
			}

			last = ( unsigned int *) & unique_buffer.data [ current ];
			current = nm_unique_get_int ( last );
		}

	}

	if ( ferror ( unique_output ) ) pexit ( "fgets" );
	if ( fseek ( unique_output , 0 , 2 ) < 0 ) pexit ( "fseek" );
}

static void nm_unique_unique_init ( char *name ) {
	int fd;
	unique_buffer.hash = mem_alloc ( ( 1 << 20 ) *sizeof ( unsigned int ) );
	unique_buffer.data = mem_alloc ( 0x4000000 );
	if ( ( fd = open ( name , 02 | 0100 | 0200 , 0600 ) ) < 0 ) pexit ( "open: %s" , name );
	if ( ! ( unique_output = fdopen ( fd , "w+" ) ) ) pexit ( "fdopen" );
}

static void nm_unique_unique_run ( void ) {
	nm_unique_read_buffer ( );
	nm_unique_write_buffer ( );
	while ( ! feof ( stdin ) ) {
		nm_unique_read_buffer ( );
		nm_unique_clean_buffer ( );
		nm_unique_write_buffer ( );
	}

}

static void nm_unique_unique_done ( void ) {
	if ( fclose ( unique_output ) ) pexit ( "fclose" );
}

int unique ( int argc , char **argv ) {
	if ( argc != 2 ) {
		puts ( "Usage: unique OUTPUT-FILE" );
		if ( argc <= 1 ) return 0;
		else error ( );
	}

	nm_unique_unique_init ( argv [ 1 ] );
	nm_unique_unique_run ( );
	nm_unique_unique_done ( );
	return 0;
}

struct shadow_entry {
	struct shadow_entry *next;
	char *login , *passwd;
}

;
static struct shadow_entry **unshadow_shadow_table;
static void nm_unshadow_alloc_hash ( void ) {
	int size;
	size = ( 1 << 18 ) *sizeof ( struct shadow_entry *);
	unshadow_shadow_table = ( struct shadow_entry **) mem_alloc ( size );
	memset ( unshadow_shadow_table , 0 , size );
}

static unsigned int nm_unshadow_login_hash ( char *login ) {
	unsigned int hash , extra;
	char *p;
	p = login + 2;
	hash = ( unsigned char ) login [ 0 ];
	if ( ! hash ) goto out;
	extra = ( unsigned char ) login [ 1 ];
	if ( ! extra ) goto out;
	while ( *p ) {
		hash <<= 3;
		extra <<= 2;
		hash += ( unsigned char ) p [ 0 ];
		if ( ! p [ 1 ] ) break;
		extra += ( unsigned char ) p [ 1 ];
		p += 2;
		if ( hash & 0xe0000000 ) {
			hash ^= hash >> 18;
			extra ^= extra >> 18;
			hash &= ( 1 << 18 ) - 1;
		}

	}

	hash -= extra;
	hash ^= extra << ( 18 / 2 );
	hash ^= hash >> 18;
	hash &= ( 1 << 18 ) - 1;
	out : return hash;
}

static void nm_unshadow_read_file ( char *name , void ( *process_line ) ( char *line ) ) {
	FILE *file;
	char line [ 0x400 ];
	if ( ! ( file = fopen ( name , "r" ) ) ) pexit ( "fopen: %s" , name );
	while ( fgetl ( line , sizeof ( line ) , file ) ) process_line ( line );
	if ( ferror ( file ) ) pexit ( "fgets" );
	if ( fclose ( file ) ) pexit ( "fclose" );
}

static void nm_unshadow_process_shadow_line ( char *line ) {
	static struct shadow_entry **entry = ( ( void *) 0 );
	struct shadow_entry *last;
	char *login , *passwd , *tail;
	if ( ! ( passwd = strchr ( line , ':' ) ) ) {
		while ( *line == ' ' || *line == '\t' ) line ++;
		if ( ! strncmp ( line , "password = " , 11 ) && entry ) ( *entry ) -> passwd = str_alloc_copy ( line + 11 );
		return;
	}

	login = line;
	*passwd ++ = 0;
	if ( ! strncmp ( passwd , "u_name=" , 7 ) ) {
		if ( ( passwd = strstr ( passwd , ":u_pwd=" ) ) ) passwd += 7;
	}

	else if ( ! strncmp ( passwd , "u_pwd=" , 6 ) && entry ) {
		passwd += 6;
		if ( ( tail = strchr ( passwd , ':' ) ) ) *tail = 0;
		( *entry ) -> passwd = str_alloc_copy ( passwd );
		return;
	}

	if ( passwd && ( tail = strchr ( passwd , ':' ) ) ) *tail = 0;
	entry = & unshadow_shadow_table [ nm_unshadow_login_hash ( login ) ];
	last = *entry;
	*entry = mem_alloc_tiny ( sizeof ( struct shadow_entry ) , 4 );
	( *entry ) -> next = last;
	( *entry ) -> login = str_alloc_copy ( login );
	( *entry ) -> passwd = passwd ? str_alloc_copy ( passwd ) : "*";
}

static void nm_unshadow_process_passwd_line ( char *line ) {
	char *pos1 , *pos2;
	struct shadow_entry *current;
	if ( ! ( pos1 = strchr ( line , ':' ) ) ) return;
	*pos1 ++ = 0;
	if ( ! ( pos2 = strchr ( pos1 , ':' ) ) ) pos2 = pos1 + strlen ( pos1 );
	if ( pos2 > pos1 && ( current = unshadow_shadow_table [ nm_unshadow_login_hash ( line ) ] ) ) do {
		if ( ! strcmp ( current -> login , line ) ) {
			printf ( "%s:%s%s\n" , line , current -> passwd , pos2 );
			return;
		}

	}

	while ( ( current = current -> next ) );
	printf ( "%s:%s\n" , line , pos1 );
}

int unshadow ( int argc , char **argv ) {
	if ( argc != 3 ) {
		puts ( "Usage: unshadow PASSWORD-FILE SHADOW-FILE" );
		if ( argc <= 1 ) return 0;
		else error ( );
	}

	nm_unshadow_alloc_hash ( );
	nm_unshadow_read_file ( argv [ 2 ] , nm_unshadow_process_shadow_line );
	nm_unshadow_read_file ( argv [ 1 ] , nm_unshadow_process_passwd_line );
	return 0;
}

static FILE *wordlist_word_file = ( ( void *) 0 );
static int wordlist_progress = 0;
static int wordlist_rec_rule;
static long wordlist_rec_pos;
static int wordlist_rule_number , wordlist_rule_count , wordlist_line_number;
static int wordlist_length;
static struct rpp_context *wordlist_rule_ctx;
static void nm_wordlist_save_state ( FILE *file ) {
	fprintf ( file , "%d\n%ld\n" , wordlist_rec_rule , wordlist_rec_pos );
}

static int nm_wordlist_restore_rule_number ( void ) {
	if ( wordlist_rule_ctx ) for ( wordlist_rule_number = 0;
	wordlist_rule_number < wordlist_rec_rule;
	wordlist_rule_number ++ ) if ( ! rpp_next ( wordlist_rule_ctx ) ) return 1;
	return 0;
}

static void nm_wordlist_restore_line_number ( void ) {
	char line [ 0x400 ];
	for ( wordlist_line_number = 0;
	wordlist_line_number < wordlist_rec_pos;
	wordlist_line_number ++ ) if ( ! fgets ( line , sizeof ( line ) , wordlist_word_file ) ) {
		if ( ferror ( wordlist_word_file ) ) pexit ( "fgets" );
		else {
			fprintf ( stderr , "fgets: Unexpected EOF\n" );
			error ( );
		}

	}

}

static int nm_wordlist_restore_state ( FILE *file ) {
	if ( fscanf ( file , "%d\n%ld\n" , &wordlist_rec_rule , &wordlist_rec_pos ) != 2 ) return 1;
	if ( nm_wordlist_restore_rule_number ( ) ) return 1;
	if ( wordlist_word_file == stdin ) nm_wordlist_restore_line_number ( );
	else if ( fseek ( wordlist_word_file , wordlist_rec_pos , 0 ) ) pexit ( "fseek" );
	return 0;
}

static void nm_wordlist_fix_state ( void ) {
	wordlist_rec_rule = wordlist_rule_number;
	if ( wordlist_word_file == stdin ) wordlist_rec_pos = wordlist_line_number;
	else if ( ( wordlist_rec_pos = ftell ( wordlist_word_file ) ) < 0 ) {
		pexit ( "ftell" );
	}

}

static int nm_wordlist_get_progress ( void ) {
	struct stat file_stat;
	long pos;
	_john_int64_t x100;
	if ( ! wordlist_word_file ) return wordlist_progress;
	if ( wordlist_word_file == stdin ) return - 1;
	if ( fstat ( fileno ( wordlist_word_file ) , &file_stat ) ) pexit ( "fstat" );
	if ( ( pos = ftell ( wordlist_word_file ) ) < 0 ) {
		pexit ( "ftell" );
	}

	mul32by32 ( &x100 , pos , 100 );
	return ( wordlist_rule_number *100 + div64by32lo ( &x100 , file_stat.st_size + 1 ) ) / wordlist_rule_count;
}

static char *nm_wordlist_dummy_rules_apply ( char *word , char *rule , int split , char *last ) {
	word [ wordlist_length ] = 0;
	if ( strcmp ( word , last ) ) return strcpy ( last , word );
	return ( ( void *) 0 );
}

void do_wordlist_crack ( struct db_main *db , char *name , int rules ) {
	union {
		char buffer [ 2 ] [ 0x400 + 4 ];
		long dummy;
	}

	aligned;
	char *line = aligned.buffer [ 0 ] , *last = aligned.buffer [ 1 ];
	struct rpp_context ctx;
	char *prerule , *rule , *word;
	char *( *apply ) ( char *word , char *rule , int split , char *last );
	log_event ( "Proceeding with wordlist mode" );
	if ( name ) {
		if ( ! ( wordlist_word_file = fopen ( path_expand ( name ) , "r" ) ) ) pexit ( "fopen: %s" , path_expand ( name ) );
		log_event ( "- Wordlist file: %.100s" , path_expand ( name ) );
	}

	else {
		wordlist_word_file = stdin;
		log_event ( "- Reading candidate passwords from stdin" );
	}

	wordlist_length = db -> format -> params.plaintext_length;
	if ( rules ) {
		if ( rpp_init ( wordlist_rule_ctx = & ctx , "Wordlist" ) ) {
			log_event ( "! No wordlist mode rules found" );
			fprintf ( stderr , "No wordlist mode rules found in %s\n" , cfg_name );
			error ( );
		}

		rules_init ( wordlist_length );
		wordlist_rule_count = rules_count ( &ctx , - 1 );
		log_event ( "- %d preprocessed word mangling rules" , wordlist_rule_count );
		apply = rules_apply;
	}

	else {
		wordlist_rule_ctx = ( ( void *) 0 );
		wordlist_rule_count = 1;
		log_event ( "- No word mangling rules" );
		apply = nm_wordlist_dummy_rules_apply;
	}

	wordlist_line_number = wordlist_rule_number = 0;
	status_init ( nm_wordlist_get_progress , 0 );
	rec_restore_mode ( nm_wordlist_restore_state );
	rec_init ( db , nm_wordlist_save_state );
	crk_init ( db , nm_wordlist_fix_state , ( ( void *) 0 ) );
	if ( rules ) prerule = rpp_next ( &ctx );
	else prerule = "";
	rule = "";
	last [ 0 ] = '\n';
	last [ 1 ] = 0;
	if ( prerule ) do {
		if ( rules ) {
			if ( ( rule = rules_reject ( prerule , - 1 , last , db ) ) ) {
				if ( strcmp ( prerule , rule ) ) log_event ( "- Rule #%d: '%.100s'" " accepted as '%.100s'" , wordlist_rule_number + 1 , prerule , rule );
				else log_event ( "- Rule #%d: '%.100s'" " accepted" , wordlist_rule_number + 1 , prerule );
			}

			else log_event ( "- Rule #%d: '%.100s' rejected" , wordlist_rule_number + 1 , prerule );
		}

		if ( rule ) while ( fgetl ( line , 0x400 , wordlist_word_file ) ) {
			wordlist_line_number ++;
			if ( line [ 0 ] != '#' ) {
				not_comment : if ( ( word = apply ( line , rule , - 1 , last ) ) ) {
					last = word;
					if ( ( ! f_filter || ext_filter_body ( word , word ) ) ) if ( crk_process_key ( word ) ) {
						rules = 0;
						break;
					}

				}

				continue;
			}

			if ( strncmp ( line , "#!comment" , 9 ) ) goto not_comment;
		}

		if ( rules ) {
			if ( ! ( rule = rpp_next ( &ctx ) ) ) break;
			wordlist_rule_number ++;
			wordlist_line_number = 0;
			if ( fseek ( wordlist_word_file , 0 , 0 ) ) pexit ( "fseek" );
		}

	}

	while ( rules );
	crk_done ( );
	rec_done ( event_abort || ( status.pass && db -> salts ) );
	if ( ferror ( wordlist_word_file ) ) pexit ( "fgets" );
	if ( name ) {
		if ( event_abort ) wordlist_progress = nm_wordlist_get_progress ( );
		else wordlist_progress = 100;
		if ( fclose ( wordlist_word_file ) ) pexit ( "fclose" );
		wordlist_word_file = ( ( void *) 0 );
	}

}

