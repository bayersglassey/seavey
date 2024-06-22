
typedef long unsigned int size_t;
typedef __builtin_va_list __gnuc_va_list;
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
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
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
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
struct _IO_FILE;
typedef struct _IO_FILE __FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;
typedef void _IO_lock_t;
struct _IO_FILE
{
  int _flags;
  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;
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
  __off64_t _offset;
  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;
  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);
typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);
typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);
typedef int cookie_close_function_t (void *__cookie);
typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
typedef __gnuc_va_list va_list;
typedef __off64_t off_t;
typedef __off64_t off64_t;
typedef __ssize_t ssize_t;
typedef __fpos64_t fpos_t;
typedef __fpos64_t fpos64_t;
extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;
extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));
extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));
extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) __attribute__ ((__nothrow__ , __leaf__));
extern FILE *tmpfile (void) __asm__ ("" "tmpfile64") ;
extern FILE *tmpfile64 (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;
extern int fclose (FILE *__stream);
extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern int fcloseall (void);
extern FILE *fopen (const char *__restrict __filename, const char *__restrict __modes) __asm__ ("" "fopen64")
  ;
extern FILE *freopen (const char *__restrict __filename, const char *__restrict __modes, FILE *__restrict __stream) __asm__ ("" "freopen64")
  ;
extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__)) ;
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
extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
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
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);
extern int getchar (void);
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);
extern int putchar (int __c);
extern int fputc_unlocked (int __c, FILE *__stream);
extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);
extern int getw (FILE *__stream);
extern int putw (int __w, FILE *__stream);
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
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
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
extern int fseek (FILE *__stream, long int __off, int __whence);
extern long int ftell (FILE *__stream) ;
extern void rewind (FILE *__stream);
extern int fseeko (FILE *__stream, __off64_t __off, int __whence) __asm__ ("" "fseeko64");
extern __off64_t ftello (FILE *__stream) __asm__ ("" "ftello64");
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos) __asm__ ("" "fgetpos64");
extern int fsetpos (FILE *__stream, const fpos_t *__pos) __asm__ ("" "fsetpos64");
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void perror (const char *__s);
extern int sys_nerr;
extern const char *const sys_errlist[];
extern int _sys_nerr;
extern const char *const _sys_errlist[];
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *popen (const char *__command, const char *__modes) ;
extern int pclose (FILE *__stream);
extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
extern char *cuserid (char *__s);
struct obstack;
extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);


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
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
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
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
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
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));
extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));

extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));

extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
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
extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strfry (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern char *program_invocation_name;
extern char *program_invocation_short_name;
typedef int error_t;

typedef int wchar_t;

typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
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
extern _Float32 strtof32 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern _Float64 strtof64 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern _Float128 strtof128 (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern _Float32x strtof32x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern _Float64x strtof64x (const char *__restrict __nptr,
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
extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf128 (char *__dest, size_t __size, const char * __format,
   _Float128 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));
extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));
__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));
__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));
extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern _Float32 strtof32_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern _Float64 strtof64_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern _Float128 strtof128_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern _Float32x strtof32x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern _Float64x strtof64x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;
extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino64_t ino_t;
typedef __ino64_t ino64_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __clockid_t clockid_t;
typedef __time_t time_t;
typedef __timer_t timer_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;
typedef int register_t __attribute__ ((__mode__ (__word__)));
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{
  return __builtin_bswap16 (__bsx);
}
static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{
  return __builtin_bswap32 (__bsx);
}
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}
static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}
static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef long int __fd_mask;
typedef struct
  {
    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
  } fd_set;
typedef __fd_mask fd_mask;

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);

typedef __blksize_t blksize_t;
typedef __blkcnt64_t blkcnt_t;
typedef __fsblkcnt64_t fsblkcnt_t;
typedef __fsfilcnt64_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
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
};
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
  int __cur_writer;
  int __shared;
  signed char __rwelision;
  unsigned char __pad1[7];
  unsigned long int __pad2;
  unsigned int __flags;
};
struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
typedef unsigned long int pthread_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
  char __size[56];
  long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;
typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
typedef union
{
  struct __pthread_rwlock_arch_t __data;
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
extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;
extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;
extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));
extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)));
extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));

extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));

extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;
extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __asm__ ("" "mkstemp64")
     __attribute__ ((__nonnull__ (1))) ;
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __asm__ ("" "mkstemps64") __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp (char *__template, int __flags) __asm__ ("" "mkostemp64")
     __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps (char *__template, int __suffixlen, int __flags) __asm__ ("" "mkostemps64")
     __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
extern int system (const char *__command) ;
extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;
typedef int (*__compar_fn_t) (const void *, const void *);
typedef __compar_fn_t comparison_fn_t;
typedef int (*__compar_d_fn_t) (const void *, const void *, void *);
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));
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
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int posix_openpt (int __oflag) ;
extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));
extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));
extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int getpt (void);
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


typedef __intptr_t intptr_t;
typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int euidaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int eaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
extern __off64_t lseek (int __fd, __off64_t __offset, int __whence) __asm__ ("" "lseek64") __attribute__ ((__nothrow__ , __leaf__));
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ , __leaf__));
extern int close (int __fd);
extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;
extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64") ;
extern ssize_t pwrite (int __fd, const void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pwrite64") ;
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;
extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ , __leaf__)) ;
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned int sleep (unsigned int __seconds);
extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));
extern int usleep (__useconds_t __useconds);
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
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;
extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ , __leaf__));
extern char **__environ;
extern char **environ;
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
extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void _exit (int __status) __attribute__ ((__noreturn__));
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
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));
extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));
extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));
extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));
extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));
extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));
extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));
extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__));
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ , __leaf__));
extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ , __leaf__));
extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ , __leaf__)) ;
extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ , __leaf__)) ;
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

extern char *optarg;
extern int optind;
extern int opterr;
extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));



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
extern int syncfs (int __fd) __attribute__ ((__nothrow__ , __leaf__));
extern long int gethostid (void);
extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));
extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
extern int truncate (const char *__file, __off64_t __length) __asm__ ("" "truncate64") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int ftruncate (int __fd, __off64_t __length) __asm__ ("" "ftruncate64") __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int lockf (int __fd, int __cmd, __off64_t __len) __asm__ ("" "lockf64") ;
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
ssize_t copy_file_range (int __infd, __off64_t *__pinoff,
    int __outfd, __off64_t *__poutoff,
    size_t __length, unsigned int __flags);
extern int fdatasync (int __fildes);
extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
int getentropy (void *__buffer, size_t __length) ;
extern __pid_t gettid (void) __attribute__ ((__nothrow__ , __leaf__));


extern char *crypt (const char *__phrase, const char *__setting)
__attribute__ ((__nothrow__ , __leaf__));
struct crypt_data
{
  char output[384];
  char setting[384];
  char input[512];
  char reserved[767];
  char initialized;
  char internal[30720];
};
extern char *crypt_r (const char *__phrase, const char *__setting,
                      struct crypt_data *__restrict __data)
__attribute__ ((__nothrow__ , __leaf__));
extern char *crypt_rn (const char *__phrase, const char *__setting,
                       void *__data, int __size)
__attribute__ ((__nothrow__ , __leaf__));
extern char *crypt_ra (const char *__phrase, const char *__setting,
                       void **__data, int *__size)
__attribute__ ((__nothrow__ , __leaf__));
extern char *crypt_gensalt (const char *__prefix, unsigned long __count,
                            const char *__rbytes, int __nrbytes)
__attribute__ ((__nothrow__ , __leaf__));
extern char *crypt_gensalt_rn (const char *__prefix, unsigned long __count,
                               const char *__rbytes, int __nrbytes,
                               char *__output, int __output_size)
__attribute__ ((__nothrow__ , __leaf__));
extern char * crypt_gensalt_r (const char *__prefix, unsigned long __count, const char *__rbytes, int __nrbytes, char *__output, int __output_size) __asm__ ("" "crypt_gensalt_rn") __attribute__ ((__nothrow__ , __leaf__));
extern char *crypt_gensalt_ra (const char *__prefix, unsigned long __count,
                               const char *__rbytes, int __nrbytes)
__attribute__ ((__nothrow__ , __leaf__));
extern int crypt_checksalt (const char *__setting);
extern const char *crypt_preferred_method (void);


extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef unsigned long int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
typedef int __gwchar_t;

typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));
extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));
extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));

typedef uintptr_t Py_uintptr_t;
typedef intptr_t Py_intptr_t;
typedef ssize_t Py_ssize_t;
typedef Py_ssize_t Py_hash_t;
typedef size_t Py_uhash_t;
typedef int Py_ssize_clean_t;

typedef float float_t;
typedef double double_t;
enum
  {
    FP_INT_UPWARD =
      0,
    FP_INT_DOWNWARD =
      1,
    FP_INT_TOWARDZERO =
      2,
    FP_INT_TONEARESTFROMZERO =
      3,
    FP_INT_TONEAREST =
      4,
  };
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern int __issignaling (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
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
 extern void sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__ , __leaf__));
extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern double exp10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp10 (double __x) __attribute__ ((__nothrow__ , __leaf__));
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
extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
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
extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double nextdown (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nextdown (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double nextup (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nextup (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogb (double __x) __attribute__ ((__nothrow__ , __leaf__));
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
extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));
extern double roundeven (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __roundeven (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfp (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpx (double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern double fmaxmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmaxmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern double fminmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fminmag (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int canonicalize (double *__cx, const double *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int totalorder (const double *__x, const double *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermag (const double *__x, const double *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern double getpayload (const double *__x) __attribute__ ((__nothrow__ , __leaf__)); extern double __getpayload (const double *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayload (double *__x, double __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsig (double *__x, double __payload) __attribute__ ((__nothrow__ , __leaf__));
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern int __issignalingf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
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
 extern void sincosf (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__ , __leaf__));
extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern float exp10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp10f (float __x) __attribute__ ((__nothrow__ , __leaf__));
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
extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
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
extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float nextdownf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nextdownf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float nextupf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nextupf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));
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
extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));
extern float roundevenf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundevenf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf (float __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern float fmaxmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern float fminmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminmagf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int canonicalizef (float *__cx, const float *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int totalorderf (const float *__x, const float *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf (const float *__x, const float *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern float getpayloadf (const float *__x) __attribute__ ((__nothrow__ , __leaf__)); extern float __getpayloadf (const float *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf (float *__x, float __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf (float *__x, float __payload) __attribute__ ((__nothrow__ , __leaf__));
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
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
 extern void sincosl (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__ , __leaf__));
extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern long double exp10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
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
extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
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
extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double nextdownl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nextdownl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double nextupl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nextupl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
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
extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));
extern long double roundevenl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundevenl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxl (long double __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern long double fmaxmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern long double fminmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminmagl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int canonicalizel (long double *__cx, const long double *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int totalorderl (const long double *__x, const long double *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagl (const long double *__x, const long double *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern long double getpayloadl (const long double *__x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __getpayloadl (const long double *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadl (long double *__x, long double __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigl (long double *__x, long double __payload) __attribute__ ((__nothrow__ , __leaf__));
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 acosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __acosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 asinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __asinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 atanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __atanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 atan2f32 (_Float32 __y, _Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __atan2f32 (_Float32 __y, _Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 cosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __cosf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 sinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __sinf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 tanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __tanf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 coshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __coshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 sinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __sinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 tanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __tanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf32 (_Float32 __x, _Float32 *__sinx, _Float32 *__cosx) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 acoshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __acoshf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 asinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __asinhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 atanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __atanhf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 expf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __expf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 frexpf32 (_Float32 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __frexpf32 (_Float32 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 ldexpf32 (_Float32 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __ldexpf32 (_Float32 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 logf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __logf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 log10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __log10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 modff32 (_Float32 __x, _Float32 *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __modff32 (_Float32 __x, _Float32 *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern _Float32 exp10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __exp10f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 expm1f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __expm1f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 log1pf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __log1pf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 logbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __logbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 exp2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __exp2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 log2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __log2f32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32 powf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __powf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 sqrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __sqrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 hypotf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __hypotf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 cbrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __cbrtf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 ceilf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __ceilf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fabsf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fabsf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 floorf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __floorf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fmodf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __fmodf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 copysignf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __copysignf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 nanf32 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nanf32 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 j0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __j0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 j1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __j1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 jnf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __jnf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 y0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __y0f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 y1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __y1f32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 ynf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __ynf32 (int, _Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 erff32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __erff32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 erfcf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __erfcf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 lgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __lgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 tgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __tgammaf32 (_Float32) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 lgammaf32_r (_Float32, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __lgammaf32_r (_Float32, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 rintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __rintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 nextafterf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nextafterf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 nextdownf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nextdownf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 nextupf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nextupf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 remainderf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __remainderf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 scalbnf32 (_Float32 __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __scalbnf32 (_Float32 __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 scalblnf32 (_Float32 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __scalblnf32 (_Float32 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 nearbyintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __nearbyintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 roundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __roundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 truncf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __truncf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 remquof32 (_Float32 __x, _Float32 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __remquof32 (_Float32 __x, _Float32 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 fdimf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __fdimf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 fmaxf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaxf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fminf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __fmaf32 (_Float32 __x, _Float32 __y, _Float32 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 roundevenf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __roundevenf32 (_Float32 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf32 (_Float32 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 fmaxmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fmaxmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32 fminmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32 __fminmagf32 (_Float32 __x, _Float32 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int canonicalizef32 (_Float32 *__cx, const _Float32 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int totalorderf32 (const _Float32 *__x, const _Float32 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf32 (const _Float32 *__x, const _Float32 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern _Float32 getpayloadf32 (const _Float32 *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32 __getpayloadf32 (const _Float32 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf32 (_Float32 *__x, _Float32 __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf32 (_Float32 *__x, _Float32 __payload) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 acosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __acosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 asinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __asinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 atanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __atanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 atan2f64 (_Float64 __y, _Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __atan2f64 (_Float64 __y, _Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 cosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __cosf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 sinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __sinf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 tanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __tanf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 coshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __coshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 sinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __sinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 tanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __tanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf64 (_Float64 __x, _Float64 *__sinx, _Float64 *__cosx) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 acoshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __acoshf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 asinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __asinhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 atanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __atanhf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 expf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __expf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 frexpf64 (_Float64 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __frexpf64 (_Float64 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 ldexpf64 (_Float64 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __ldexpf64 (_Float64 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 logf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __logf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 log10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __log10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 modff64 (_Float64 __x, _Float64 *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __modff64 (_Float64 __x, _Float64 *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern _Float64 exp10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __exp10f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 expm1f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __expm1f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 log1pf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __log1pf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 logbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __logbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 exp2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __exp2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 log2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __log2f64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64 powf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __powf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 sqrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __sqrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 hypotf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __hypotf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 cbrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __cbrtf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 ceilf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __ceilf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fabsf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fabsf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 floorf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __floorf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fmodf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __fmodf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 copysignf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __copysignf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 nanf64 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nanf64 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 j0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __j0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 j1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __j1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 jnf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __jnf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 y0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __y0f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 y1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __y1f64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 ynf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __ynf64 (int, _Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 erff64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __erff64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 erfcf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __erfcf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 lgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __lgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 tgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __tgammaf64 (_Float64) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 lgammaf64_r (_Float64, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __lgammaf64_r (_Float64, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 rintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __rintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 nextafterf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nextafterf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 nextdownf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nextdownf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 nextupf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nextupf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 remainderf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __remainderf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 scalbnf64 (_Float64 __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __scalbnf64 (_Float64 __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 scalblnf64 (_Float64 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __scalblnf64 (_Float64 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 nearbyintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __nearbyintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 roundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __roundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 truncf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __truncf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 remquof64 (_Float64 __x, _Float64 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __remquof64 (_Float64 __x, _Float64 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 fdimf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __fdimf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 fmaxf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaxf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fminf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __fmaf64 (_Float64 __x, _Float64 __y, _Float64 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 roundevenf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __roundevenf64 (_Float64 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf64 (_Float64 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 fmaxmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fmaxmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64 fminmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64 __fminmagf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int canonicalizef64 (_Float64 *__cx, const _Float64 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int totalorderf64 (const _Float64 *__x, const _Float64 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf64 (const _Float64 *__x, const _Float64 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern _Float64 getpayloadf64 (const _Float64 *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64 __getpayloadf64 (const _Float64 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf64 (_Float64 *__x, _Float64 __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf64 (_Float64 *__x, _Float64 __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int __fpclassifyf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __signbitf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern int __isinff128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __finitef128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __isnanf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int __iseqsigf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern int __issignalingf128 (_Float128 __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));
extern _Float128 acosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __acosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 asinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __asinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 atanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __atanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 atan2f128 (_Float128 __y, _Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __atan2f128 (_Float128 __y, _Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 cosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __cosf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 sinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __sinf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 tanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __tanf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 coshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __coshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 sinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __sinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 tanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __tanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosf128 (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf128 (_Float128 __x, _Float128 *__sinx, _Float128 *__cosx) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 acoshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __acoshf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 asinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __asinhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 atanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __atanhf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 expf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __expf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 frexpf128 (_Float128 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __frexpf128 (_Float128 __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 ldexpf128 (_Float128 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __ldexpf128 (_Float128 __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 logf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __logf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 log10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __log10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 modff128 (_Float128 __x, _Float128 *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __modff128 (_Float128 __x, _Float128 *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern _Float128 exp10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __exp10f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 expm1f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __expm1f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 log1pf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __log1pf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 logbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __logbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 exp2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __exp2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 log2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __log2f128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float128 powf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __powf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 sqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __sqrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 hypotf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __hypotf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 cbrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __cbrtf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 ceilf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __ceilf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fabsf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fabsf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 floorf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __floorf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fmodf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __fmodf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 copysignf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __copysignf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 nanf128 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nanf128 (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 j0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __j0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 j1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __j1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 jnf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __jnf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 y0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __y0f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 y1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __y1f128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 ynf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __ynf128 (int, _Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 erff128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __erff128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 erfcf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __erfcf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 lgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __lgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 tgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __tgammaf128 (_Float128) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 lgammaf128_r (_Float128, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __lgammaf128_r (_Float128, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 rintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __rintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 nextafterf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nextafterf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 nextdownf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nextdownf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 nextupf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nextupf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 remainderf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __remainderf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 scalbnf128 (_Float128 __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __scalbnf128 (_Float128 __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 scalblnf128 (_Float128 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __scalblnf128 (_Float128 __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 nearbyintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __nearbyintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 roundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __roundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 truncf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __truncf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 remquof128 (_Float128 __x, _Float128 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __remquof128 (_Float128 __x, _Float128 __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 fdimf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __fdimf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 fmaxf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaxf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fminf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 roundevenf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __roundevenf128 (_Float128 __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf128 (_Float128 __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 fmaxmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fmaxmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float128 fminmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float128 __fminmagf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int canonicalizef128 (_Float128 *__cx, const _Float128 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int totalorderf128 (const _Float128 *__x, const _Float128 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf128 (const _Float128 *__x, const _Float128 *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern _Float128 getpayloadf128 (const _Float128 *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float128 __getpayloadf128 (const _Float128 *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf128 (_Float128 *__x, _Float128 __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf128 (_Float128 *__x, _Float128 __payload) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x acosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __acosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x asinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __asinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x atanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __atanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x atan2f32x (_Float32x __y, _Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __atan2f32x (_Float32x __y, _Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x cosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __cosf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x sinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __sinf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x tanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __tanf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x coshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __coshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x sinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __sinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x tanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __tanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf32x (_Float32x __x, _Float32x *__sinx, _Float32x *__cosx) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x acoshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __acoshf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x asinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __asinhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x atanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __atanhf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x expf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __expf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x frexpf32x (_Float32x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __frexpf32x (_Float32x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x ldexpf32x (_Float32x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __ldexpf32x (_Float32x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x logf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __logf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x log10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __log10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x modff32x (_Float32x __x, _Float32x *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __modff32x (_Float32x __x, _Float32x *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern _Float32x exp10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __exp10f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x expm1f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __expm1f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x log1pf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __log1pf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x logbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __logbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x exp2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __exp2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x log2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __log2f32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float32x powf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __powf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x sqrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __sqrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x hypotf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __hypotf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x cbrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __cbrtf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x ceilf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __ceilf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fabsf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fabsf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x floorf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __floorf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fmodf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __fmodf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x copysignf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __copysignf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x nanf32x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nanf32x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x j0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __j0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x j1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __j1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x jnf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __jnf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x y0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __y0f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x y1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __y1f32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x ynf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __ynf32x (int, _Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x erff32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __erff32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x erfcf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __erfcf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x lgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __lgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x tgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __tgammaf32x (_Float32x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x lgammaf32x_r (_Float32x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __lgammaf32x_r (_Float32x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x rintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __rintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x nextafterf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nextafterf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x nextdownf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nextdownf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x nextupf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nextupf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x remainderf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __remainderf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x scalbnf32x (_Float32x __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __scalbnf32x (_Float32x __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x scalblnf32x (_Float32x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __scalblnf32x (_Float32x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x nearbyintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __nearbyintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x roundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __roundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x truncf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __truncf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x remquof32x (_Float32x __x, _Float32x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __remquof32x (_Float32x __x, _Float32x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x fdimf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __fdimf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x fmaxf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaxf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fminf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __fmaf32x (_Float32x __x, _Float32x __y, _Float32x __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x roundevenf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __roundevenf32x (_Float32x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf32x (_Float32x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x fmaxmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fmaxmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float32x fminmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float32x __fminmagf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int canonicalizef32x (_Float32x *__cx, const _Float32x *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int totalorderf32x (const _Float32x *__x, const _Float32x *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf32x (const _Float32x *__x, const _Float32x *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern _Float32x getpayloadf32x (const _Float32x *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float32x __getpayloadf32x (const _Float32x *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf32x (_Float32x *__x, _Float32x __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf32x (_Float32x *__x, _Float32x __payload) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x acosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __acosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x asinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __asinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x atanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __atanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x atan2f64x (_Float64x __y, _Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __atan2f64x (_Float64x __y, _Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x cosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __cosf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x sinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __sinf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x tanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __tanf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x coshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __coshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x sinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __sinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x tanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __tanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern void sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) __attribute__ ((__nothrow__ , __leaf__)); extern void __sincosf64x (_Float64x __x, _Float64x *__sinx, _Float64x *__cosx) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x acoshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __acoshf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x asinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __asinhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x atanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __atanhf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x expf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __expf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x frexpf64x (_Float64x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __frexpf64x (_Float64x __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x ldexpf64x (_Float64x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __ldexpf64x (_Float64x __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x logf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __logf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x log10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __log10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x modff64x (_Float64x __x, _Float64x *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __modff64x (_Float64x __x, _Float64x *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern _Float64x exp10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __exp10f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x expm1f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __expm1f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x log1pf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __log1pf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x logbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __logbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x exp2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __exp2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x log2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __log2f64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
 extern _Float64x powf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __powf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x sqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __sqrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x hypotf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __hypotf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x cbrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __cbrtf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x ceilf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __ceilf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fabsf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fabsf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x floorf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __floorf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fmodf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __fmodf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x copysignf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __copysignf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x nanf64x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nanf64x (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x j0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __j0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x j1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __j1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x jnf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __jnf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x y0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __y0f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x y1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __y1f64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x ynf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __ynf64x (int, _Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x erff64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __erff64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x erfcf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __erfcf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x lgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __lgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x tgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __tgammaf64x (_Float64x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x lgammaf64x_r (_Float64x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __lgammaf64x_r (_Float64x, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x rintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __rintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x nextafterf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nextafterf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x nextdownf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nextdownf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x nextupf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nextupf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x remainderf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __remainderf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x scalbnf64x (_Float64x __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __scalbnf64x (_Float64x __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int llogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __llogbf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x scalblnf64x (_Float64x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __scalblnf64x (_Float64x __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x nearbyintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __nearbyintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x roundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __roundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x truncf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __truncf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x remquof64x (_Float64x __x, _Float64x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __remquof64x (_Float64x __x, _Float64x __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x fdimf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __fdimf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x fmaxf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaxf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fminf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __fmaf64x (_Float64x __x, _Float64x __y, _Float64x __z) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x roundevenf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __roundevenf64x (_Float64x __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern __intmax_t fromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __intmax_t fromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __intmax_t __fromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern __uintmax_t ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__)); extern __uintmax_t __ufromfpxf64x (_Float64x __x, int __round, unsigned int __width) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x fmaxmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fmaxmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern _Float64x fminmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern _Float64x __fminmagf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int canonicalizef64x (_Float64x *__cx, const _Float64x *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int totalorderf64x (const _Float64x *__x, const _Float64x *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern int totalordermagf64x (const _Float64x *__x, const _Float64x *__y) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__pure__));
extern _Float64x getpayloadf64x (const _Float64x *__x) __attribute__ ((__nothrow__ , __leaf__)); extern _Float64x __getpayloadf64x (const _Float64x *__x) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadf64x (_Float64x *__x, _Float64x __payload) __attribute__ ((__nothrow__ , __leaf__));
extern int setpayloadsigf64x (_Float64x *__x, _Float64x __payload) __attribute__ ((__nothrow__ , __leaf__));
extern float fadd (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fdiv (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fmul (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fsub (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float faddl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fdivl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fmull (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fsubl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double daddl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double ddivl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double dmull (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double dsubl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32addf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32divf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32mulf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32subf32x (_Float32x __x, _Float32x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32addf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32divf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32mulf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32subf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32addf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32divf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32mulf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32subf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32addf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32divf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32mulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 f32subf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xaddf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xdivf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xmulf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xsubf64 (_Float64 __x, _Float64 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xaddf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xdivf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xmulf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xsubf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xaddf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xdivf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xmulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x f32xsubf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64addf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64divf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64mulf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64subf64x (_Float64x __x, _Float64x __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64addf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64divf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64mulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 f64subf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x f64xaddf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x f64xdivf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x f64xmulf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x f64xsubf128 (_Float128 __x, _Float128 __y) __attribute__ ((__nothrow__ , __leaf__));
extern int signgam;
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
extern int __iscanonicall (long double __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };
extern int gettimeofday (struct timeval *__restrict __tv,
    void *__restrict __tz) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
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
typedef enum __itimer_which __itimer_which_t;
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
extern int futimesat (int __fd, const char *__file,
        const struct timeval __tvp[2]) __attribute__ ((__nothrow__ , __leaf__));

struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;
  int tai;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};

extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) __attribute__ ((__nothrow__ , __leaf__));

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

extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));
extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));
extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     __attribute__ ((__nothrow__ , __leaf__));
extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
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
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));
extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
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
extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int getdate_err;
extern struct tm *getdate (const char *__string);
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);


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
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __syscall_slong_t __glibc_reserved[3];
  };
struct stat64
  {
    __dev_t st_dev;
    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    __syscall_slong_t __glibc_reserved[3];
  };
extern int stat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "stat64") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (1, 2)));
extern int fstat (int __fd, struct stat *__buf) __asm__ ("" "fstat64") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));
extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int fstatat (int __fd, const char *__restrict __file, struct stat *__restrict __buf, int __flag) __asm__ ("" "fstatat64") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int lstat (const char *__restrict __file, struct stat *__restrict __buf) __asm__ ("" "lstat64") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (1, 2)));
extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));
extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
extern __mode_t getumask (void) __attribute__ ((__nothrow__ , __leaf__));
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
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf) __asm__ ("" "__fxstat64") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename, struct stat *__stat_buf) __asm__ ("" "__xstat64") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename, struct stat *__stat_buf) __asm__ ("" "__lxstat64") __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename, struct stat *__stat_buf, int __flag) __asm__ ("" "__fxstatat64") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));
typedef __signed__ char __s8;
typedef unsigned char __u8;
typedef __signed__ short __s16;
typedef unsigned short __u16;
typedef __signed__ int __s32;
typedef unsigned int __u32;
__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;
typedef void (*__kernel_sighandler_t)(int);
typedef int __kernel_key_t;
typedef int __kernel_mqd_t;
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned long __kernel_old_dev_t;
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;
typedef __kernel_ulong_t __kernel_ino_t;
typedef unsigned int __kernel_mode_t;
typedef int __kernel_pid_t;
typedef int __kernel_ipc_pid_t;
typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;
typedef __kernel_long_t __kernel_suseconds_t;
typedef int __kernel_daddr_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;
typedef struct {
 int val[2];
} __kernel_fsid_t;
typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_old_time_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;
typedef __u16 __sum16;
typedef __u32 __wsum;
typedef unsigned __poll_t;
struct statx_timestamp {
 __s64 tv_sec;
 __u32 tv_nsec;
 __s32 __reserved;
};
struct statx {
 __u32 stx_mask;
 __u32 stx_blksize;
 __u64 stx_attributes;
 __u32 stx_nlink;
 __u32 stx_uid;
 __u32 stx_gid;
 __u16 stx_mode;
 __u16 __spare0[1];
 __u64 stx_ino;
 __u64 stx_size;
 __u64 stx_blocks;
 __u64 stx_attributes_mask;
 struct statx_timestamp stx_atime;
 struct statx_timestamp stx_btime;
 struct statx_timestamp stx_ctime;
 struct statx_timestamp stx_mtime;
 __u32 stx_rdev_major;
 __u32 stx_rdev_minor;
 __u32 stx_dev_major;
 __u32 stx_dev_minor;
 __u64 stx_mnt_id;
 __u64 __spare2;
 __u64 __spare3[12];
};

int statx (int __dirfd, const char *__restrict __path, int __flags,
           unsigned int __mask, struct statx *__restrict __buf)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 5)));


unsigned short _Py_get_387controlword(void);
void _Py_set_387controlword(unsigned short);
void * PyMem_Malloc(size_t size);
void * PyMem_Realloc(void *ptr, size_t new_size);
void PyMem_Free(void *ptr);
struct _PyTraceMalloc_Config {
    enum {
        TRACEMALLOC_NOT_INITIALIZED,
        TRACEMALLOC_INITIALIZED,
        TRACEMALLOC_FINALIZED
    } initialized;
    int tracing;
    int max_nframe;
    int use_domain;
};
extern struct _PyTraceMalloc_Config _Py_tracemalloc_config;
void * PyMem_RawMalloc(size_t size);
void * PyMem_RawCalloc(size_t nelem, size_t elsize);
void * PyMem_RawRealloc(void *ptr, size_t new_size);
void PyMem_RawFree(void *ptr);
const char* _PyMem_GetCurrentAllocatorName(void);
void * PyMem_Calloc(size_t nelem, size_t elsize);
char * _PyMem_RawStrdup(const char *str);
char * _PyMem_Strdup(const char *str);
wchar_t* _PyMem_RawWcsdup(const wchar_t *str);
typedef enum {
    PYMEM_DOMAIN_RAW,
    PYMEM_DOMAIN_MEM,
    PYMEM_DOMAIN_OBJ
} PyMemAllocatorDomain;
typedef enum {
    PYMEM_ALLOCATOR_NOT_SET = 0,
    PYMEM_ALLOCATOR_DEFAULT = 1,
    PYMEM_ALLOCATOR_DEBUG = 2,
    PYMEM_ALLOCATOR_MALLOC = 3,
    PYMEM_ALLOCATOR_MALLOC_DEBUG = 4,
    PYMEM_ALLOCATOR_PYMALLOC = 5,
    PYMEM_ALLOCATOR_PYMALLOC_DEBUG = 6,
} PyMemAllocatorName;
typedef struct {
    void *ctx;
    void* (*malloc) (void *ctx, size_t size);
    void* (*calloc) (void *ctx, size_t nelem, size_t elsize);
    void* (*realloc) (void *ctx, void *ptr, size_t new_size);
    void (*free) (void *ctx, void *ptr);
} PyMemAllocatorEx;
void PyMem_GetAllocator(PyMemAllocatorDomain domain,
                                    PyMemAllocatorEx *allocator);
void PyMem_SetAllocator(PyMemAllocatorDomain domain,
                                    PyMemAllocatorEx *allocator);
void PyMem_SetupDebugHooks(void);
typedef struct _object {
   
    Py_ssize_t ob_refcnt;
    struct _typeobject *ob_type;
} PyObject;
typedef struct {
    PyObject ob_base;
    Py_ssize_t ob_size;
} PyVarObject;
typedef PyObject * (*unaryfunc)(PyObject *);
typedef PyObject * (*binaryfunc)(PyObject *, PyObject *);
typedef PyObject * (*ternaryfunc)(PyObject *, PyObject *, PyObject *);
typedef int (*inquiry)(PyObject *);
typedef Py_ssize_t (*lenfunc)(PyObject *);
typedef PyObject *(*ssizeargfunc)(PyObject *, Py_ssize_t);
typedef PyObject *(*ssizessizeargfunc)(PyObject *, Py_ssize_t, Py_ssize_t);
typedef int(*ssizeobjargproc)(PyObject *, Py_ssize_t, PyObject *);
typedef int(*ssizessizeobjargproc)(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
typedef int(*objobjargproc)(PyObject *, PyObject *, PyObject *);
typedef int (*objobjproc)(PyObject *, PyObject *);
typedef int (*visitproc)(PyObject *, void *);
typedef int (*traverseproc)(PyObject *, visitproc, void *);
typedef void (*freefunc)(void *);
typedef void (*destructor)(PyObject *);
typedef PyObject *(*getattrfunc)(PyObject *, char *);
typedef PyObject *(*getattrofunc)(PyObject *, PyObject *);
typedef int (*setattrfunc)(PyObject *, char *, PyObject *);
typedef int (*setattrofunc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*reprfunc)(PyObject *);
typedef Py_hash_t (*hashfunc)(PyObject *);
typedef PyObject *(*richcmpfunc) (PyObject *, PyObject *, int);
typedef PyObject *(*getiterfunc) (PyObject *);
typedef PyObject *(*iternextfunc) (PyObject *);
typedef PyObject *(*descrgetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*descrsetfunc) (PyObject *, PyObject *, PyObject *);
typedef int (*initproc)(PyObject *, PyObject *, PyObject *);
typedef PyObject *(*newfunc)(struct _typeobject *, PyObject *, PyObject *);
typedef PyObject *(*allocfunc)(struct _typeobject *, Py_ssize_t);
typedef struct{
    int slot;
    void *pfunc;
} PyType_Slot;
typedef struct{
    const char* name;
    int basicsize;
    int itemsize;
    unsigned int flags;
    PyType_Slot *slots;
} PyType_Spec;
PyObject* PyType_FromSpec(PyType_Spec*);
PyObject* PyType_FromSpecWithBases(PyType_Spec*, PyObject*);
void* PyType_GetSlot(struct _typeobject*, int);
int PyType_IsSubtype(struct _typeobject *, struct _typeobject *);
extern struct _typeobject PyType_Type;
extern struct _typeobject PyBaseObject_Type;
extern struct _typeobject PySuper_Type;
unsigned long PyType_GetFlags(struct _typeobject*);
int PyType_Ready(struct _typeobject *);
PyObject * PyType_GenericAlloc(struct _typeobject *, Py_ssize_t);
PyObject * PyType_GenericNew(struct _typeobject *,
                                               PyObject *, PyObject *);
unsigned int PyType_ClearCache(void);
void PyType_Modified(struct _typeobject *);
PyObject * PyObject_Repr(PyObject *);
PyObject * PyObject_Str(PyObject *);
PyObject * PyObject_ASCII(PyObject *);
PyObject * PyObject_Bytes(PyObject *);
PyObject * PyObject_RichCompare(PyObject *, PyObject *, int);
int PyObject_RichCompareBool(PyObject *, PyObject *, int);
PyObject * PyObject_GetAttrString(PyObject *, const char *);
int PyObject_SetAttrString(PyObject *, const char *, PyObject *);
int PyObject_HasAttrString(PyObject *, const char *);
PyObject * PyObject_GetAttr(PyObject *, PyObject *);
int PyObject_SetAttr(PyObject *, PyObject *, PyObject *);
int PyObject_HasAttr(PyObject *, PyObject *);
PyObject * PyObject_SelfIter(PyObject *);
PyObject * PyObject_GenericGetAttr(PyObject *, PyObject *);
int PyObject_GenericSetAttr(PyObject *,
                                              PyObject *, PyObject *);
int PyObject_GenericSetDict(PyObject *, PyObject *, void *);
Py_hash_t PyObject_Hash(PyObject *);
Py_hash_t PyObject_HashNotImplemented(PyObject *);
int PyObject_IsTrue(PyObject *);
int PyObject_Not(PyObject *);
int PyCallable_Check(PyObject *);
void PyObject_ClearWeakRefs(PyObject *);
PyObject * PyObject_Dir(PyObject *);
int Py_ReprEnter(PyObject *);
void Py_ReprLeave(PyObject *);
int _PyTraceMalloc_NewReference(PyObject *op);
static inline void _Py_NewReference(PyObject *op)
{
    if (_Py_tracemalloc_config.tracing) {
        _PyTraceMalloc_NewReference(op);
    }
    ;
    ;
    (((PyObject*)(op))->ob_refcnt) = 1;
}
static inline void _Py_ForgetReference(PyObject *op)
{
    (void)op;
    ;
}
void _Py_Dealloc(PyObject *);
static inline void _Py_INCREF(PyObject *op)
{
    ;
    op->ob_refcnt++;
}
static inline void _Py_DECREF(const char *filename, int lineno,
                              PyObject *op)
{
    (void)filename;
    (void)lineno;
    ;
    if (--op->ob_refcnt != 0) {
    }
    else {
        _Py_Dealloc(op);
    }
}
static inline void _Py_XINCREF(PyObject *op)
{
    if (op != ((void *)0)) {
        _Py_INCREF(((PyObject*)(op)));
    }
}
static inline void _Py_XDECREF(PyObject *op)
{
    if (op != ((void *)0)) {
        _Py_DECREF("Include/object.h", 541, ((PyObject*)(op)));
    }
}
void Py_IncRef(PyObject *);
void Py_DecRef(PyObject *);
extern PyObject _Py_NoneStruct;
extern PyObject _Py_NotImplementedStruct;
void _PyTrash_thread_deposit_object(PyObject*);
void _PyTrash_thread_destroy_chain(void);
typedef struct _Py_Identifier {
    struct _Py_Identifier *next;
    const char* string;
    PyObject *object;
} _Py_Identifier;
typedef struct bufferinfo {
    void *buf;
    PyObject *obj;
    Py_ssize_t len;
    Py_ssize_t itemsize;
    int readonly;
    int ndim;
    char *format;
    Py_ssize_t *shape;
    Py_ssize_t *strides;
    Py_ssize_t *suboffsets;
    void *internal;
} Py_buffer;
typedef int (*getbufferproc)(PyObject *, Py_buffer *, int);
typedef void (*releasebufferproc)(PyObject *, Py_buffer *);
typedef PyObject *(*vectorcallfunc)(PyObject *callable, PyObject *const *args,
                                    size_t nargsf, PyObject *kwnames);
typedef struct {
    binaryfunc nb_add;
    binaryfunc nb_subtract;
    binaryfunc nb_multiply;
    binaryfunc nb_remainder;
    binaryfunc nb_divmod;
    ternaryfunc nb_power;
    unaryfunc nb_negative;
    unaryfunc nb_positive;
    unaryfunc nb_absolute;
    inquiry nb_bool;
    unaryfunc nb_invert;
    binaryfunc nb_lshift;
    binaryfunc nb_rshift;
    binaryfunc nb_and;
    binaryfunc nb_xor;
    binaryfunc nb_or;
    unaryfunc nb_int;
    void *nb_reserved;
    unaryfunc nb_float;
    binaryfunc nb_inplace_add;
    binaryfunc nb_inplace_subtract;
    binaryfunc nb_inplace_multiply;
    binaryfunc nb_inplace_remainder;
    ternaryfunc nb_inplace_power;
    binaryfunc nb_inplace_lshift;
    binaryfunc nb_inplace_rshift;
    binaryfunc nb_inplace_and;
    binaryfunc nb_inplace_xor;
    binaryfunc nb_inplace_or;
    binaryfunc nb_floor_divide;
    binaryfunc nb_true_divide;
    binaryfunc nb_inplace_floor_divide;
    binaryfunc nb_inplace_true_divide;
    unaryfunc nb_index;
    binaryfunc nb_matrix_multiply;
    binaryfunc nb_inplace_matrix_multiply;
} PyNumberMethods;
typedef struct {
    lenfunc sq_length;
    binaryfunc sq_concat;
    ssizeargfunc sq_repeat;
    ssizeargfunc sq_item;
    void *was_sq_slice;
    ssizeobjargproc sq_ass_item;
    void *was_sq_ass_slice;
    objobjproc sq_contains;
    binaryfunc sq_inplace_concat;
    ssizeargfunc sq_inplace_repeat;
} PySequenceMethods;
typedef struct {
    lenfunc mp_length;
    binaryfunc mp_subscript;
    objobjargproc mp_ass_subscript;
} PyMappingMethods;
typedef struct {
    unaryfunc am_await;
    unaryfunc am_aiter;
    unaryfunc am_anext;
} PyAsyncMethods;
typedef struct {
     getbufferproc bf_getbuffer;
     releasebufferproc bf_releasebuffer;
} PyBufferProcs;
typedef Py_ssize_t printfunc;
typedef struct _typeobject {
    PyVarObject ob_base;
    const char *tp_name;
    Py_ssize_t tp_basicsize, tp_itemsize;
    destructor tp_dealloc;
    Py_ssize_t tp_vectorcall_offset;
    getattrfunc tp_getattr;
    setattrfunc tp_setattr;
    PyAsyncMethods *tp_as_async;
    reprfunc tp_repr;
    PyNumberMethods *tp_as_number;
    PySequenceMethods *tp_as_sequence;
    PyMappingMethods *tp_as_mapping;
    hashfunc tp_hash;
    ternaryfunc tp_call;
    reprfunc tp_str;
    getattrofunc tp_getattro;
    setattrofunc tp_setattro;
    PyBufferProcs *tp_as_buffer;
    unsigned long tp_flags;
    const char *tp_doc;
    traverseproc tp_traverse;
    inquiry tp_clear;
    richcmpfunc tp_richcompare;
    Py_ssize_t tp_weaklistoffset;
    getiterfunc tp_iter;
    iternextfunc tp_iternext;
    struct PyMethodDef *tp_methods;
    struct PyMemberDef *tp_members;
    struct PyGetSetDef *tp_getset;
    struct _typeobject *tp_base;
    PyObject *tp_dict;
    descrgetfunc tp_descr_get;
    descrsetfunc tp_descr_set;
    Py_ssize_t tp_dictoffset;
    initproc tp_init;
    allocfunc tp_alloc;
    newfunc tp_new;
    freefunc tp_free;
    inquiry tp_is_gc;
    PyObject *tp_bases;
    PyObject *tp_mro;
    PyObject *tp_cache;
    PyObject *tp_subclasses;
    PyObject *tp_weaklist;
    destructor tp_del;
    unsigned int tp_version_tag;
    destructor tp_finalize;
    vectorcallfunc tp_vectorcall;
    __attribute__((__deprecated__)) int (*tp_print)(PyObject *, FILE *, int);
} PyTypeObject;
typedef struct _heaptypeobject {
    PyTypeObject ht_type;
    PyAsyncMethods as_async;
    PyNumberMethods as_number;
    PyMappingMethods as_mapping;
    PySequenceMethods as_sequence;
    PyBufferProcs as_buffer;
    PyObject *ht_name, *ht_slots, *ht_qualname;
    struct _dictkeysobject *ht_cached_keys;
} PyHeapTypeObject;
const char * _PyType_Name(PyTypeObject *);
PyObject * _PyType_Lookup(PyTypeObject *, PyObject *);
PyObject * _PyType_LookupId(PyTypeObject *, _Py_Identifier *);
PyObject * _PyObject_LookupSpecial(PyObject *, _Py_Identifier *);
PyTypeObject * _PyType_CalculateMetaclass(PyTypeObject *, PyObject *);
PyObject * _PyType_GetDocFromInternalDoc(const char *, const char *);
PyObject * _PyType_GetTextSignatureFromInternalDoc(const char *, const char *);
struct _Py_Identifier;
int PyObject_Print(PyObject *, FILE *, int);
void _Py_BreakPoint(void);
void _PyObject_Dump(PyObject *);
int _PyObject_IsFreed(PyObject *);
int _PyObject_IsAbstract(PyObject *);
PyObject * _PyObject_GetAttrId(PyObject *, struct _Py_Identifier *);
int _PyObject_SetAttrId(PyObject *, struct _Py_Identifier *, PyObject *);
int _PyObject_HasAttrId(PyObject *, struct _Py_Identifier *);
int _PyObject_LookupAttr(PyObject *, PyObject *, PyObject **);
int _PyObject_LookupAttrId(PyObject *, struct _Py_Identifier *, PyObject **);
PyObject ** _PyObject_GetDictPtr(PyObject *);
PyObject * _PyObject_NextNotImplemented(PyObject *);
void PyObject_CallFinalizer(PyObject *);
int PyObject_CallFinalizerFromDealloc(PyObject *);
PyObject *
_PyObject_GenericGetAttrWithDict(PyObject *, PyObject *, PyObject *, int);
int
_PyObject_GenericSetAttrWithDict(PyObject *, PyObject *,
                                 PyObject *, PyObject *);
static inline void _Py_Dealloc_inline(PyObject *op)
{
    destructor dealloc = (((PyObject*)(op))->ob_type)->tp_dealloc;
    ;
    (*dealloc)(op);
}
extern PyTypeObject _PyNone_Type;
extern PyTypeObject _PyNotImplemented_Type;
extern int _Py_SwappedOp[];
void _PyTrash_deposit_object(PyObject*);
void _PyTrash_destroy_chain(void);
void
_PyDebugAllocatorStats(FILE *out, const char *block_name, int num_blocks,
                       size_t sizeof_block);
void
_PyObject_DebugTypeStats(FILE *out);
void _PyObject_AssertFailed(
    PyObject *obj,
    const char *expr,
    const char *msg,
    const char *file,
    int line,
    const char *function);
int _PyObject_CheckConsistency(
    PyObject *op,
    int check_content);
typedef int64_t _PyTime_t;
typedef enum {
    _PyTime_ROUND_FLOOR=0,
    _PyTime_ROUND_CEILING=1,
    _PyTime_ROUND_HALF_EVEN=2,
    _PyTime_ROUND_UP=3,
    _PyTime_ROUND_TIMEOUT = _PyTime_ROUND_UP
} _PyTime_round_t;
PyObject * _PyLong_FromTime_t(
    time_t sec);
time_t _PyLong_AsTime_t(
    PyObject *obj);
int _PyTime_ObjectToTime_t(
    PyObject *obj,
    time_t *sec,
    _PyTime_round_t);
int _PyTime_ObjectToTimeval(
    PyObject *obj,
    time_t *sec,
    long *usec,
    _PyTime_round_t);
int _PyTime_ObjectToTimespec(
    PyObject *obj,
    time_t *sec,
    long *nsec,
    _PyTime_round_t);
_PyTime_t _PyTime_FromSeconds(int seconds);
_PyTime_t _PyTime_FromNanoseconds(_PyTime_t ns);
int _PyTime_FromNanosecondsObject(_PyTime_t *t,
    PyObject *obj);
int _PyTime_FromSecondsObject(_PyTime_t *t,
    PyObject *obj,
    _PyTime_round_t round);
int _PyTime_FromMillisecondsObject(_PyTime_t *t,
    PyObject *obj,
    _PyTime_round_t round);
double _PyTime_AsSecondsDouble(_PyTime_t t);
_PyTime_t _PyTime_AsMilliseconds(_PyTime_t t,
    _PyTime_round_t round);
_PyTime_t _PyTime_AsMicroseconds(_PyTime_t t,
    _PyTime_round_t round);
PyObject * _PyTime_AsNanosecondsObject(_PyTime_t t);
int _PyTime_FromTimeval(_PyTime_t *tp, struct timeval *tv);
int _PyTime_AsTimeval(_PyTime_t t,
    struct timeval *tv,
    _PyTime_round_t round);
int _PyTime_AsTimeval_noraise(_PyTime_t t,
    struct timeval *tv,
    _PyTime_round_t round);
int _PyTime_AsTimevalTime_t(
    _PyTime_t t,
    time_t *secs,
    int *us,
    _PyTime_round_t round);
int _PyTime_FromTimespec(_PyTime_t *tp, struct timespec *ts);
int _PyTime_AsTimespec(_PyTime_t t, struct timespec *ts);
_PyTime_t _PyTime_MulDiv(_PyTime_t ticks,
    _PyTime_t mul,
    _PyTime_t div);
_PyTime_t _PyTime_GetSystemClock(void);
_PyTime_t _PyTime_GetMonotonicClock(void);
typedef struct {
    const char *implementation;
    int monotonic;
    int adjustable;
    double resolution;
} _Py_clock_info_t;
int _PyTime_GetSystemClockWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);
int _PyTime_GetMonotonicClockWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);
int _PyTime_Init(void);
int _PyTime_localtime(time_t t, struct tm *tm);
int _PyTime_gmtime(time_t t, struct tm *tm);
_PyTime_t _PyTime_GetPerfCounter(void);
int _PyTime_GetPerfCounterWithInfo(
    _PyTime_t *t,
    _Py_clock_info_t *info);
void * PyObject_Malloc(size_t size);
void * PyObject_Calloc(size_t nelem, size_t elsize);
void * PyObject_Realloc(void *ptr, size_t new_size);
void PyObject_Free(void *ptr);
PyObject * PyObject_Init(PyObject *, PyTypeObject *);
PyVarObject * PyObject_InitVar(PyVarObject *,
                                                 PyTypeObject *, Py_ssize_t);
PyObject * _PyObject_New(PyTypeObject *);
PyVarObject * _PyObject_NewVar(PyTypeObject *, Py_ssize_t);
static inline PyObject*
_PyObject_INIT(PyObject *op, PyTypeObject *typeobj)
{
    ((void) sizeof ((op != ((void *)0)) ? 1 : 0), __extension__ ({ if (op != ((void *)0)) ; else __assert_fail ("op != NULL", "Include/objimpl.h", 139, __extension__ __PRETTY_FUNCTION__); }));
    (((PyObject*)(op))->ob_type) = typeobj;
    if (PyType_GetFlags(typeobj) & (1UL << 9)) {
        _Py_INCREF(((PyObject*)(typeobj)));
    }
    _Py_NewReference(op);
    return op;
}
static inline PyVarObject*
_PyObject_INIT_VAR(PyVarObject *op, PyTypeObject *typeobj, Py_ssize_t size)
{
    ((void) sizeof ((op != ((void *)0)) ? 1 : 0), __extension__ ({ if (op != ((void *)0)) ; else __assert_fail ("op != NULL", "Include/objimpl.h", 154, __extension__ __PRETTY_FUNCTION__); }));
    (((PyVarObject*)(op))->ob_size) = size;
    _PyObject_INIT(((PyObject*)((PyObject *)op)), (typeobj));
    return op;
}
Py_ssize_t PyGC_Collect(void);
PyVarObject * _PyObject_GC_Resize(PyVarObject *, Py_ssize_t);
PyObject * _PyObject_GC_New(PyTypeObject *);
PyVarObject * _PyObject_GC_NewVar(PyTypeObject *, Py_ssize_t);
void PyObject_GC_Track(void *);
void PyObject_GC_UnTrack(void *);
void PyObject_GC_Del(void *);
Py_ssize_t _Py_GetAllocatedBlocks(void);
int _PyObject_DebugMallocStats(FILE *out);
typedef struct {
    void *ctx;
    void* (*alloc) (void *ctx, size_t size);
    void (*free) (void *ctx, void *ptr, size_t size);
} PyObjectArenaAllocator;
void PyObject_GetArenaAllocator(PyObjectArenaAllocator *allocator);
void PyObject_SetArenaAllocator(PyObjectArenaAllocator *allocator);
Py_ssize_t _PyGC_CollectNoFail(void);
Py_ssize_t _PyGC_CollectIfEnabled(void);
typedef struct {
    uintptr_t _gc_next;
    uintptr_t _gc_prev;
} PyGC_Head;
PyObject * _PyObject_GC_Malloc(size_t size);
PyObject * _PyObject_GC_Calloc(size_t size);
Py_hash_t _Py_HashDouble(double);
Py_hash_t _Py_HashPointer(void*);
Py_hash_t _Py_HashBytes(const void*, Py_ssize_t);
typedef union {
    unsigned char uc[24];
    struct {
        Py_hash_t prefix;
        Py_hash_t suffix;
    } fnv;
    struct {
        uint64_t k0;
        uint64_t k1;
    } siphash;
    struct {
        unsigned char padding[16];
        Py_hash_t suffix;
    } djbx33a;
    struct {
        unsigned char padding[16];
        Py_hash_t hashsalt;
    } expat;
} _Py_HashSecret_t;
extern _Py_HashSecret_t _Py_HashSecret;
typedef struct {
    Py_hash_t (*const hash)(const void *, Py_ssize_t);
    const char *name;
    const int hash_bits;
    const int seed_bits;
} PyHash_FuncDef;
PyHash_FuncDef* PyHash_GetFuncDef(void);
extern int Py_DebugFlag;
extern int Py_VerboseFlag;
extern int Py_QuietFlag;
extern int Py_InteractiveFlag;
extern int Py_InspectFlag;
extern int Py_OptimizeFlag;
extern int Py_NoSiteFlag;
extern int Py_BytesWarningFlag;
extern int Py_FrozenFlag;
extern int Py_IgnoreEnvironmentFlag;
extern int Py_DontWriteBytecodeFlag;
extern int Py_NoUserSiteDirectory;
extern int Py_UnbufferedStdioFlag;
extern int Py_HashRandomizationFlag;
extern int Py_IsolatedFlag;
typedef struct {
    PyVarObject ob_base;
    Py_ssize_t ob_alloc;
    char *ob_bytes;
    char *ob_start;
    int ob_exports;
} PyByteArrayObject;
extern PyTypeObject PyByteArray_Type;
extern PyTypeObject PyByteArrayIter_Type;
PyObject * PyByteArray_FromObject(PyObject *);
PyObject * PyByteArray_Concat(PyObject *, PyObject *);
PyObject * PyByteArray_FromStringAndSize(const char *, Py_ssize_t);
Py_ssize_t PyByteArray_Size(PyObject *);
char * PyByteArray_AsString(PyObject *);
int PyByteArray_Resize(PyObject *, Py_ssize_t);
extern char _PyByteArray_empty_string[];
typedef struct {
    PyVarObject ob_base;
    Py_hash_t ob_shash;
    char ob_sval[1];
} PyBytesObject;
extern PyTypeObject PyBytes_Type;
extern PyTypeObject PyBytesIter_Type;
PyObject * PyBytes_FromStringAndSize(const char *, Py_ssize_t);
PyObject * PyBytes_FromString(const char *);
PyObject * PyBytes_FromObject(PyObject *);
PyObject * PyBytes_FromFormatV(const char*, va_list)
                                __attribute__((format(printf, 1, 0)));
PyObject * PyBytes_FromFormat(const char*, ...)
                                __attribute__((format(printf, 1, 2)));
Py_ssize_t PyBytes_Size(PyObject *);
char * PyBytes_AsString(PyObject *);
PyObject * PyBytes_Repr(PyObject *, int);
void PyBytes_Concat(PyObject **, PyObject *);
void PyBytes_ConcatAndDel(PyObject **, PyObject *);
int _PyBytes_Resize(PyObject **, Py_ssize_t);
PyObject* _PyBytes_FormatEx(
    const char *format,
    Py_ssize_t format_len,
    PyObject *args,
    int use_bytearray);
PyObject* _PyBytes_FromHex(
    PyObject *string,
    int use_bytearray);
PyObject * PyBytes_DecodeEscape(const char *, Py_ssize_t,
                                            const char *, Py_ssize_t,
                                            const char *);
PyObject * _PyBytes_DecodeEscape(const char *, Py_ssize_t,
                                             const char *, Py_ssize_t,
                                             const char *,
                                             const char **);
PyObject * _PyBytes_Join(PyObject *sep, PyObject *x);
int PyBytes_AsStringAndSize(
    PyObject *obj,
    char **s,
    Py_ssize_t *len
    );
Py_ssize_t _PyBytes_InsertThousandsGroupingLocale(char *buffer,
                                                   Py_ssize_t n_buffer,
                                                   char *digits,
                                                   Py_ssize_t n_digits,
                                                   Py_ssize_t min_width);
Py_ssize_t _PyBytes_InsertThousandsGrouping(char *buffer,
                                                   Py_ssize_t n_buffer,
                                                   char *digits,
                                                   Py_ssize_t n_digits,
                                                   Py_ssize_t min_width,
                                                   const char *grouping,
                                                   const char *thousands_sep);
typedef struct {
    PyObject *buffer;
    Py_ssize_t allocated;
    Py_ssize_t min_size;
    int use_bytearray;
    int overallocate;
    int use_small_buffer;
    char small_buffer[512];
} _PyBytesWriter;
void _PyBytesWriter_Init(_PyBytesWriter *writer);
PyObject * _PyBytesWriter_Finish(_PyBytesWriter *writer,
    void *str);
void _PyBytesWriter_Dealloc(_PyBytesWriter *writer);
void* _PyBytesWriter_Alloc(_PyBytesWriter *writer,
    Py_ssize_t size);
void* _PyBytesWriter_Prepare(_PyBytesWriter *writer,
    void *str,
    Py_ssize_t size);
void* _PyBytesWriter_Resize(_PyBytesWriter *writer,
    void *str,
    Py_ssize_t size);
void* _PyBytesWriter_WriteBytes(_PyBytesWriter *writer,
    void *str,
    const void *bytes,
    Py_ssize_t size);

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
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
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
extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__ , __leaf__));
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));
extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));
extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalnum_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isblank_l (int, locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int __tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int __toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));

typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;

struct tm;
extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) __attribute__ ((__nothrow__ , __leaf__));
extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
   size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
    locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
     size_t __n, locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) __attribute__ ((__nothrow__ , __leaf__));
extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
        locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern wchar_t *wcsdup (const wchar_t *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__));
extern wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wcschrnul (const wchar_t *__s, wchar_t __wc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wcspbrk (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wcsstr (const wchar_t *__haystack, const wchar_t *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) __attribute__ ((__nothrow__ , __leaf__));
extern size_t wcslen (const wchar_t *__s) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wcswcs (const wchar_t *__haystack, const wchar_t *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));
extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern wchar_t *wmempcpy (wchar_t *__restrict __s1,
     const wchar_t *__restrict __s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));
extern wint_t btowc (int __c) __attribute__ ((__nothrow__ , __leaf__));
extern int wctob (wint_t __c) __attribute__ ((__nothrow__ , __leaf__));
extern int mbsinit (const mbstate_t *__ps) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__));
extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) __attribute__ ((__nothrow__ , __leaf__));
extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern size_t __mbrlen (const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern size_t wcsnrtombs (char *__restrict __dst,
     const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ , __leaf__));
extern int wcwidth (wchar_t __c) __attribute__ ((__nothrow__ , __leaf__));
extern int wcswidth (const wchar_t *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 wcstof32 (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 wcstof64 (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 wcstof128 (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x wcstof32x (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x wcstof64x (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__));
extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int wcstoq (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern unsigned long long int wcstouq (const wchar_t *__restrict __nptr,
           wchar_t **__restrict __endptr,
           int __base) __attribute__ ((__nothrow__ , __leaf__));
extern long int wcstol_l (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr, int __base,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned long int wcstoul_l (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr,
        int __base, locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int wcstoll_l (const wchar_t *__restrict __nptr,
    wchar_t **__restrict __endptr,
    int __base, locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern unsigned long long int wcstoull_l (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__));
extern double wcstod_l (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__));
extern float wcstof_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__));
extern long double wcstold_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr,
         locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32 wcstof32_l (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr,
       locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64 wcstof64_l (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr,
       locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern _Float128 wcstof128_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr,
         locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern _Float32x wcstof32x_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr,
         locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern _Float64x wcstof64x_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr,
         locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));
extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) __attribute__ ((__nothrow__ , __leaf__));
extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));
extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__));
extern int fwide (__FILE *__fp, int __mode) __attribute__ ((__nothrow__ , __leaf__));
extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
                                                           ;
extern int wprintf (const wchar_t *__restrict __format, ...)
                                                           ;
extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) ;
extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;
extern int vwprintf (const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;
extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) ;
extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
                                                          ;
extern int wscanf (const wchar_t *__restrict __format, ...)
                                                          ;
extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ , __leaf__)) ;
extern int fwscanf (__FILE *__restrict __stream, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_fwscanf")
                                                          ;
extern int wscanf (const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_wscanf")
                                                          ;
extern int swscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_swscanf") __attribute__ ((__nothrow__ , __leaf__))
                                                          ;
extern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;
extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;
extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) ;
extern int vfwscanf (__FILE *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfwscanf")
                                                          ;
extern int vwscanf (const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vwscanf")
                                                          ;
extern int vswscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vswscanf") __attribute__ ((__nothrow__ , __leaf__))
                                                          ;
extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);
extern wint_t getwchar (void);
extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar (wchar_t __wc);
extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);
extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);
extern wint_t ungetwc (wint_t __wc, __FILE *__stream);
extern wint_t getwc_unlocked (__FILE *__stream);
extern wint_t getwchar_unlocked (void);
extern wint_t fgetwc_unlocked (__FILE *__stream);
extern wint_t fputwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked (wchar_t __wc);
extern wchar_t *fgetws_unlocked (wchar_t *__restrict __ws, int __n,
     __FILE *__restrict __stream);
extern int fputws_unlocked (const wchar_t *__restrict __ws,
       __FILE *__restrict __stream);
extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));
extern size_t wcsftime_l (wchar_t *__restrict __s, size_t __maxsize,
     const wchar_t *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));

typedef uint32_t Py_UCS4;
typedef uint16_t Py_UCS2;
typedef uint8_t Py_UCS1;
extern PyTypeObject PyUnicode_Type;
extern PyTypeObject PyUnicodeIter_Type;
PyObject* PyUnicode_FromStringAndSize(
    const char *u,
    Py_ssize_t size
    );
PyObject* PyUnicode_FromString(
    const char *u
    );
PyObject* PyUnicode_Substring(
    PyObject *str,
    Py_ssize_t start,
    Py_ssize_t end);
Py_UCS4* PyUnicode_AsUCS4(
    PyObject *unicode,
    Py_UCS4* buffer,
    Py_ssize_t buflen,
    int copy_null);
Py_UCS4* PyUnicode_AsUCS4Copy(PyObject *unicode);
Py_ssize_t PyUnicode_GetLength(
    PyObject *unicode
);
__attribute__((__deprecated__)) Py_ssize_t PyUnicode_GetSize(
    PyObject *unicode
    );
Py_UCS4 PyUnicode_ReadChar(
    PyObject *unicode,
    Py_ssize_t index
    );
int PyUnicode_WriteChar(
    PyObject *unicode,
    Py_ssize_t index,
    Py_UCS4 character
    );
int PyUnicode_Resize(
    PyObject **unicode,
    Py_ssize_t length
    );
PyObject* PyUnicode_FromEncodedObject(
    PyObject *obj,
    const char *encoding,
    const char *errors
    );
PyObject* PyUnicode_FromObject(
    PyObject *obj
    );
PyObject * PyUnicode_FromFormatV(
    const char *format,
    va_list vargs
    );
PyObject * PyUnicode_FromFormat(
    const char *format,
    ...
    );
void PyUnicode_InternInPlace(PyObject **);
void PyUnicode_InternImmortal(PyObject **);
PyObject * PyUnicode_InternFromString(
    const char *u
    );
PyObject* PyUnicode_FromWideChar(
    const wchar_t *w,
    Py_ssize_t size
    );
Py_ssize_t PyUnicode_AsWideChar(
    PyObject *unicode,
    wchar_t *w,
    Py_ssize_t size
    );
wchar_t* PyUnicode_AsWideCharString(
    PyObject *unicode,
    Py_ssize_t *size
    );
PyObject* PyUnicode_FromOrdinal(int ordinal);
int PyUnicode_ClearFreeList(void);
const char* PyUnicode_GetDefaultEncoding(void);
PyObject* PyUnicode_Decode(
    const char *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );
__attribute__((__deprecated__)) PyObject* PyUnicode_AsDecodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
__attribute__((__deprecated__)) PyObject* PyUnicode_AsDecodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
__attribute__((__deprecated__)) PyObject* PyUnicode_AsEncodedObject(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
PyObject* PyUnicode_AsEncodedString(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
__attribute__((__deprecated__)) PyObject* PyUnicode_AsEncodedUnicode(
    PyObject *unicode,
    const char *encoding,
    const char *errors
    );
PyObject* PyUnicode_BuildEncodingMap(
    PyObject* string
   );
PyObject* PyUnicode_DecodeUTF7(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );
PyObject* PyUnicode_DecodeUTF7Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );
PyObject* PyUnicode_DecodeUTF8(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );
PyObject* PyUnicode_DecodeUTF8Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    Py_ssize_t *consumed
    );
PyObject* PyUnicode_AsUTF8String(
    PyObject *unicode
    );
PyObject* PyUnicode_DecodeUTF32(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder
    );
PyObject* PyUnicode_DecodeUTF32Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,
    Py_ssize_t *consumed
    );
PyObject* PyUnicode_AsUTF32String(
    PyObject *unicode
    );
PyObject* PyUnicode_DecodeUTF16(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder
    );
PyObject* PyUnicode_DecodeUTF16Stateful(
    const char *string,
    Py_ssize_t length,
    const char *errors,
    int *byteorder,
    Py_ssize_t *consumed
    );
PyObject* PyUnicode_AsUTF16String(
    PyObject *unicode
    );
PyObject* PyUnicode_DecodeUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );
PyObject* PyUnicode_AsUnicodeEscapeString(
    PyObject *unicode
    );
PyObject* PyUnicode_DecodeRawUnicodeEscape(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );
PyObject* PyUnicode_AsRawUnicodeEscapeString(
    PyObject *unicode
    );
PyObject* PyUnicode_DecodeLatin1(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );
PyObject* PyUnicode_AsLatin1String(
    PyObject *unicode
    );
PyObject* PyUnicode_DecodeASCII(
    const char *string,
    Py_ssize_t length,
    const char *errors
    );
PyObject* PyUnicode_AsASCIIString(
    PyObject *unicode
    );
PyObject* PyUnicode_DecodeCharmap(
    const char *string,
    Py_ssize_t length,
    PyObject *mapping,
    const char *errors
    );
PyObject* PyUnicode_AsCharmapString(
    PyObject *unicode,
    PyObject *mapping
    );
PyObject* PyUnicode_DecodeLocaleAndSize(
    const char *str,
    Py_ssize_t len,
    const char *errors);
PyObject* PyUnicode_DecodeLocale(
    const char *str,
    const char *errors);
PyObject* PyUnicode_EncodeLocale(
    PyObject *unicode,
    const char *errors
    );
int PyUnicode_FSConverter(PyObject*, void*);
int PyUnicode_FSDecoder(PyObject*, void*);
PyObject* PyUnicode_DecodeFSDefault(
    const char *s
    );
PyObject* PyUnicode_DecodeFSDefaultAndSize(
    const char *s,
    Py_ssize_t size
    );
PyObject* PyUnicode_EncodeFSDefault(
    PyObject *unicode
    );
PyObject* PyUnicode_Concat(
    PyObject *left,
    PyObject *right
    );
void PyUnicode_Append(
    PyObject **pleft,
    PyObject *right
    );
void PyUnicode_AppendAndDel(
    PyObject **pleft,
    PyObject *right
    );
PyObject* PyUnicode_Split(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );
PyObject* PyUnicode_Splitlines(
    PyObject *s,
    int keepends
    );
PyObject* PyUnicode_Partition(
    PyObject *s,
    PyObject *sep
    );
PyObject* PyUnicode_RPartition(
    PyObject *s,
    PyObject *sep
    );
PyObject* PyUnicode_RSplit(
    PyObject *s,
    PyObject *sep,
    Py_ssize_t maxsplit
    );
PyObject * PyUnicode_Translate(
    PyObject *str,
    PyObject *table,
    const char *errors
    );
PyObject* PyUnicode_Join(
    PyObject *separator,
    PyObject *seq
    );
Py_ssize_t PyUnicode_Tailmatch(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );
Py_ssize_t PyUnicode_Find(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );
Py_ssize_t PyUnicode_FindChar(
    PyObject *str,
    Py_UCS4 ch,
    Py_ssize_t start,
    Py_ssize_t end,
    int direction
    );
Py_ssize_t PyUnicode_Count(
    PyObject *str,
    PyObject *substr,
    Py_ssize_t start,
    Py_ssize_t end
    );
PyObject * PyUnicode_Replace(
    PyObject *str,
    PyObject *substr,
    PyObject *replstr,
    Py_ssize_t maxcount
    );
int PyUnicode_Compare(
    PyObject *left,
    PyObject *right
    );
int PyUnicode_CompareWithASCIIString(
    PyObject *left,
    const char *right
    );
PyObject * PyUnicode_RichCompare(
    PyObject *left,
    PyObject *right,
    int op
    );
PyObject * PyUnicode_Format(
    PyObject *format,
    PyObject *args
    );
int PyUnicode_Contains(
    PyObject *container,
    PyObject *element
    );
int PyUnicode_IsIdentifier(PyObject *s);
                         typedef wchar_t Py_UNICODE;
typedef struct {
    PyObject ob_base;
    Py_ssize_t length;
    Py_hash_t hash;
    struct {
        unsigned int interned:2;
        unsigned int kind:3;
        unsigned int compact:1;
        unsigned int ascii:1;
        unsigned int ready:1;
        unsigned int :24;
    } state;
    wchar_t *wstr;
} PyASCIIObject;
typedef struct {
    PyASCIIObject _base;
    Py_ssize_t utf8_length;
    char *utf8;
    Py_ssize_t wstr_length;
} PyCompactUnicodeObject;
typedef struct {
    PyCompactUnicodeObject _base;
    union {
        void *any;
        Py_UCS1 *latin1;
        Py_UCS2 *ucs2;
        Py_UCS4 *ucs4;
    } data;
} PyUnicodeObject;
int _PyUnicode_CheckConsistency(
    PyObject *op,
    int check_content);
enum PyUnicode_Kind {
    PyUnicode_WCHAR_KIND = 0,
    PyUnicode_1BYTE_KIND = 1,
    PyUnicode_2BYTE_KIND = 2,
    PyUnicode_4BYTE_KIND = 4
};
PyObject* PyUnicode_New(
    Py_ssize_t size,
    Py_UCS4 maxchar
    );
int _PyUnicode_Ready(
    PyObject *unicode
    );
PyObject* _PyUnicode_Copy(
    PyObject *unicode
    );
Py_ssize_t PyUnicode_CopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );
void _PyUnicode_FastCopyCharacters(
    PyObject *to,
    Py_ssize_t to_start,
    PyObject *from,
    Py_ssize_t from_start,
    Py_ssize_t how_many
    );
Py_ssize_t PyUnicode_Fill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );
void _PyUnicode_FastFill(
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t length,
    Py_UCS4 fill_char
    );
                         PyObject* PyUnicode_FromUnicode(
    const Py_UNICODE *u,
    Py_ssize_t size
    );
PyObject* PyUnicode_FromKindAndData(
    int kind,
    const void *buffer,
    Py_ssize_t size);
PyObject* _PyUnicode_FromASCII(
    const char *buffer,
    Py_ssize_t size);
Py_UCS4 _PyUnicode_FindMaxChar (
    PyObject *unicode,
    Py_ssize_t start,
    Py_ssize_t end);
                         Py_UNICODE * PyUnicode_AsUnicode(
    PyObject *unicode
    );
const Py_UNICODE * _PyUnicode_AsUnicode(
    PyObject *unicode
    );
                         Py_UNICODE * PyUnicode_AsUnicodeAndSize(
    PyObject *unicode,
    Py_ssize_t *size
    );
__attribute__((__deprecated__)) Py_UNICODE PyUnicode_GetMax(void);
typedef struct {
    PyObject *buffer;
    void *data;
    enum PyUnicode_Kind kind;
    Py_UCS4 maxchar;
    Py_ssize_t size;
    Py_ssize_t pos;
    Py_ssize_t min_length;
    Py_UCS4 min_char;
    unsigned char overallocate;
    unsigned char readonly;
} _PyUnicodeWriter ;
void
_PyUnicodeWriter_Init(_PyUnicodeWriter *writer);
int
_PyUnicodeWriter_PrepareInternal(_PyUnicodeWriter *writer,
                                 Py_ssize_t length, Py_UCS4 maxchar);
int
_PyUnicodeWriter_PrepareKindInternal(_PyUnicodeWriter *writer,
                                     enum PyUnicode_Kind kind);
int
_PyUnicodeWriter_WriteChar(_PyUnicodeWriter *writer,
    Py_UCS4 ch
    );
int
_PyUnicodeWriter_WriteStr(_PyUnicodeWriter *writer,
    PyObject *str
    );
int
_PyUnicodeWriter_WriteSubstring(_PyUnicodeWriter *writer,
    PyObject *str,
    Py_ssize_t start,
    Py_ssize_t end
    );
int
_PyUnicodeWriter_WriteASCIIString(_PyUnicodeWriter *writer,
    const char *str,
    Py_ssize_t len
    );
int
_PyUnicodeWriter_WriteLatin1String(_PyUnicodeWriter *writer,
    const char *str,
    Py_ssize_t len
    );
PyObject *
_PyUnicodeWriter_Finish(_PyUnicodeWriter *writer);
void
_PyUnicodeWriter_Dealloc(_PyUnicodeWriter *writer);
int _PyUnicode_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);
void* _PyUnicode_AsKind(PyObject *s, unsigned int kind);
const char * PyUnicode_AsUTF8AndSize(
    PyObject *unicode,
    Py_ssize_t *size);
const char * PyUnicode_AsUTF8(PyObject *unicode);
__attribute__((__deprecated__)) PyObject* PyUnicode_Encode(
    const Py_UNICODE *s,
    Py_ssize_t size,
    const char *encoding,
    const char *errors
    );
__attribute__((__deprecated__)) PyObject* PyUnicode_EncodeUTF7(
    const Py_UNICODE *data,
    Py_ssize_t length,
    int base64SetO,
    int base64WhiteSpace,
    const char *errors
    );
PyObject* _PyUnicode_EncodeUTF7(
    PyObject *unicode,
    int base64SetO,
    int base64WhiteSpace,
    const char *errors
    );
PyObject* _PyUnicode_AsUTF8String(
    PyObject *unicode,
    const char *errors);
__attribute__((__deprecated__)) PyObject* PyUnicode_EncodeUTF8(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );
__attribute__((__deprecated__)) PyObject* PyUnicode_EncodeUTF32(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors,
    int byteorder
    );
PyObject* _PyUnicode_EncodeUTF32(
    PyObject *object,
    const char *errors,
    int byteorder
    );
__attribute__((__deprecated__)) PyObject* PyUnicode_EncodeUTF16(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors,
    int byteorder
    );
PyObject* _PyUnicode_EncodeUTF16(
    PyObject* unicode,
    const char *errors,
    int byteorder
    );
PyObject* _PyUnicode_DecodeUnicodeEscape(
        const char *string,
        Py_ssize_t length,
        const char *errors,
        const char **first_invalid_escape
);
__attribute__((__deprecated__)) PyObject* PyUnicode_EncodeUnicodeEscape(
    const Py_UNICODE *data,
    Py_ssize_t length
    );
__attribute__((__deprecated__)) PyObject* PyUnicode_EncodeRawUnicodeEscape(
    const Py_UNICODE *data,
    Py_ssize_t length
    );
PyObject* _PyUnicode_AsLatin1String(
    PyObject* unicode,
    const char* errors);
__attribute__((__deprecated__)) PyObject* PyUnicode_EncodeLatin1(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );
PyObject* _PyUnicode_AsASCIIString(
    PyObject* unicode,
    const char* errors);
__attribute__((__deprecated__)) PyObject* PyUnicode_EncodeASCII(
    const Py_UNICODE *data,
    Py_ssize_t length,
    const char *errors
    );
__attribute__((__deprecated__)) PyObject* PyUnicode_EncodeCharmap(
    const Py_UNICODE *data,
    Py_ssize_t length,
    PyObject *mapping,
    const char *errors
    );
PyObject* _PyUnicode_EncodeCharmap(
    PyObject *unicode,
    PyObject *mapping,
    const char *errors
    );
__attribute__((__deprecated__)) PyObject * PyUnicode_TranslateCharmap(
    const Py_UNICODE *data,
    Py_ssize_t length,
    PyObject *table,
    const char *errors
    );
                         int PyUnicode_EncodeDecimal(
    Py_UNICODE *s,
    Py_ssize_t length,
    char *output,
    const char *errors
    );
PyObject* PyUnicode_TransformDecimalToASCII(
    Py_UNICODE *s,
    Py_ssize_t length
    );
PyObject* _PyUnicode_TransformDecimalAndSpaceToASCII(
    PyObject *unicode
    );
PyObject * _PyUnicode_JoinArray(
    PyObject *separator,
    PyObject *const *items,
    Py_ssize_t seqlen
    );
int _PyUnicode_EqualToASCIIId(
    PyObject *left,
    _Py_Identifier *right
    );
int _PyUnicode_EqualToASCIIString(
    PyObject *left,
    const char *right
    );
PyObject * _PyUnicode_XStrip(
    PyObject *self,
    int striptype,
    PyObject *sepobj
    );
Py_ssize_t _PyUnicode_InsertThousandsGrouping(
    _PyUnicodeWriter *writer,
    Py_ssize_t n_buffer,
    PyObject *digits,
    Py_ssize_t d_pos,
    Py_ssize_t n_digits,
    Py_ssize_t min_width,
    const char *grouping,
    PyObject *thousands_sep,
    Py_UCS4 *maxchar);
extern const unsigned char _Py_ascii_whitespace[];
int _PyUnicode_IsLowercase(
    Py_UCS4 ch
    );
int _PyUnicode_IsUppercase(
    Py_UCS4 ch
    );
int _PyUnicode_IsTitlecase(
    Py_UCS4 ch
    );
int _PyUnicode_IsXidStart(
    Py_UCS4 ch
    );
int _PyUnicode_IsXidContinue(
    Py_UCS4 ch
    );
int _PyUnicode_IsWhitespace(
    const Py_UCS4 ch
    );
int _PyUnicode_IsLinebreak(
    const Py_UCS4 ch
    );
                         Py_UCS4 _PyUnicode_ToLowercase(
    Py_UCS4 ch
    );
                         Py_UCS4 _PyUnicode_ToUppercase(
    Py_UCS4 ch
    );
__attribute__((__deprecated__)) Py_UCS4 _PyUnicode_ToTitlecase(
    Py_UCS4 ch
    );
int _PyUnicode_ToLowerFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );
int _PyUnicode_ToTitleFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );
int _PyUnicode_ToUpperFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );
int _PyUnicode_ToFoldedFull(
    Py_UCS4 ch,
    Py_UCS4 *res
    );
int _PyUnicode_IsCaseIgnorable(
    Py_UCS4 ch
    );
int _PyUnicode_IsCased(
    Py_UCS4 ch
    );
int _PyUnicode_ToDecimalDigit(
    Py_UCS4 ch
    );
int _PyUnicode_ToDigit(
    Py_UCS4 ch
    );
double _PyUnicode_ToNumeric(
    Py_UCS4 ch
    );
int _PyUnicode_IsDecimalDigit(
    Py_UCS4 ch
    );
int _PyUnicode_IsDigit(
    Py_UCS4 ch
    );
int _PyUnicode_IsNumeric(
    Py_UCS4 ch
    );
int _PyUnicode_IsPrintable(
    Py_UCS4 ch
    );
int _PyUnicode_IsAlpha(
    Py_UCS4 ch
    );
__attribute__((__deprecated__)) size_t Py_UNICODE_strlen(
    const Py_UNICODE *u
    );
__attribute__((__deprecated__)) Py_UNICODE* Py_UNICODE_strcpy(
    Py_UNICODE *s1,
    const Py_UNICODE *s2);
__attribute__((__deprecated__)) Py_UNICODE* Py_UNICODE_strcat(
    Py_UNICODE *s1, const Py_UNICODE *s2);
__attribute__((__deprecated__)) Py_UNICODE* Py_UNICODE_strncpy(
    Py_UNICODE *s1,
    const Py_UNICODE *s2,
    size_t n);
__attribute__((__deprecated__)) int Py_UNICODE_strcmp(
    const Py_UNICODE *s1,
    const Py_UNICODE *s2
    );
__attribute__((__deprecated__)) int Py_UNICODE_strncmp(
    const Py_UNICODE *s1,
    const Py_UNICODE *s2,
    size_t n
    );
__attribute__((__deprecated__)) Py_UNICODE* Py_UNICODE_strchr(
    const Py_UNICODE *s,
    Py_UNICODE c
    );
__attribute__((__deprecated__)) Py_UNICODE* Py_UNICODE_strrchr(
    const Py_UNICODE *s,
    Py_UNICODE c
    );
PyObject* _PyUnicode_FormatLong(PyObject *, int, int, int);
__attribute__((__deprecated__)) Py_UNICODE* PyUnicode_AsUnicodeCopy(
    PyObject *unicode
    );
PyObject* _PyUnicode_FromId(_Py_Identifier*);
void _PyUnicode_ClearStaticStrings(void);
int _PyUnicode_EQ(PyObject *, PyObject *);
typedef struct _longobject PyLongObject;
extern PyTypeObject PyLong_Type;
PyObject * PyLong_FromLong(long);
PyObject * PyLong_FromUnsignedLong(unsigned long);
PyObject * PyLong_FromSize_t(size_t);
PyObject * PyLong_FromSsize_t(Py_ssize_t);
PyObject * PyLong_FromDouble(double);
long PyLong_AsLong(PyObject *);
long PyLong_AsLongAndOverflow(PyObject *, int *);
Py_ssize_t PyLong_AsSsize_t(PyObject *);
size_t PyLong_AsSize_t(PyObject *);
unsigned long PyLong_AsUnsignedLong(PyObject *);
unsigned long PyLong_AsUnsignedLongMask(PyObject *);
int _PyLong_AsInt(PyObject *);
PyObject * PyLong_GetInfo(void);
int _PyLong_UnsignedShort_Converter(PyObject *, void *);
int _PyLong_UnsignedInt_Converter(PyObject *, void *);
int _PyLong_UnsignedLong_Converter(PyObject *, void *);
int _PyLong_UnsignedLongLong_Converter(PyObject *, void *);
int _PyLong_Size_t_Converter(PyObject *, void *);
extern unsigned char _PyLong_DigitValue[256];
double _PyLong_Frexp(PyLongObject *a, Py_ssize_t *e);
double PyLong_AsDouble(PyObject *);
PyObject * PyLong_FromVoidPtr(void *);
void * PyLong_AsVoidPtr(PyObject *);
PyObject * PyLong_FromLongLong(long long);
PyObject * PyLong_FromUnsignedLongLong(unsigned long long);
long long PyLong_AsLongLong(PyObject *);
unsigned long long PyLong_AsUnsignedLongLong(PyObject *);
unsigned long long PyLong_AsUnsignedLongLongMask(PyObject *);
long long PyLong_AsLongLongAndOverflow(PyObject *, int *);
PyObject * PyLong_FromString(const char *, char **, int);
__attribute__((__deprecated__))
PyObject * PyLong_FromUnicode(Py_UNICODE*, Py_ssize_t, int);
PyObject * PyLong_FromUnicodeObject(PyObject *u, int base);
PyObject * _PyLong_FromBytes(const char *, Py_ssize_t, int);
int _PyLong_Sign(PyObject *v);
size_t _PyLong_NumBits(PyObject *v);
PyObject * _PyLong_DivmodNear(PyObject *, PyObject *);
PyObject * _PyLong_FromByteArray(
    const unsigned char* bytes, size_t n,
    int little_endian, int is_signed);
int _PyLong_AsByteArray(PyLongObject* v,
    unsigned char* bytes, size_t n,
    int little_endian, int is_signed);
PyObject * _PyLong_FromNbInt(PyObject *);
PyObject * _PyLong_FromNbIndexOrNbInt(PyObject *);
PyObject * _PyLong_Format(PyObject *obj, int base);
int _PyLong_FormatWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    int base,
    int alternate);
char* _PyLong_FormatBytesWriter(
    _PyBytesWriter *writer,
    char *str,
    PyObject *obj,
    int base,
    int alternate);
int _PyLong_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);
unsigned long PyOS_strtoul(const char *, char **, int);
long PyOS_strtol(const char *, char **, int);
PyObject * _PyLong_GCD(PyObject *, PyObject *);
extern PyObject * _PyLong_Zero;
extern PyObject * _PyLong_One;
PyObject * _PyLong_Rshift(PyObject *, size_t);
PyObject * _PyLong_Lshift(PyObject *, size_t);
typedef uint32_t digit;
typedef int32_t sdigit;
typedef uint64_t twodigits;
typedef int64_t stwodigits;
struct _longobject {
    PyVarObject ob_base;
    digit ob_digit[1];
};
PyLongObject * _PyLong_New(Py_ssize_t);
PyObject * _PyLong_Copy(PyLongObject *src);
extern PyTypeObject PyBool_Type;
extern struct _longobject _Py_FalseStruct, _Py_TrueStruct;
PyObject * PyBool_FromLong(long);
typedef struct {
    PyObject ob_base;
    double ob_fval;
} PyFloatObject;
extern PyTypeObject PyFloat_Type;
double PyFloat_GetMax(void);
double PyFloat_GetMin(void);
PyObject * PyFloat_GetInfo(void);
PyObject * PyFloat_FromString(PyObject*);
PyObject * PyFloat_FromDouble(double);
double PyFloat_AsDouble(PyObject *);
int _PyFloat_Pack2(double x, unsigned char *p, int le);
int _PyFloat_Pack4(double x, unsigned char *p, int le);
int _PyFloat_Pack8(double x, unsigned char *p, int le);
int _PyFloat_Repr(double x, char *p, size_t len);
int _PyFloat_Digits(char *buf, double v, int *signum);
void _PyFloat_DigitsInit(void);
double _PyFloat_Unpack2(const unsigned char *p, int le);
double _PyFloat_Unpack4(const unsigned char *p, int le);
double _PyFloat_Unpack8(const unsigned char *p, int le);
int PyFloat_ClearFreeList(void);
void _PyFloat_DebugMallocStats(FILE* out);
int _PyFloat_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);
typedef struct {
    double real;
    double imag;
} Py_complex;
Py_complex _Py_c_sum(Py_complex, Py_complex);
Py_complex _Py_c_diff(Py_complex, Py_complex);
Py_complex _Py_c_neg(Py_complex);
Py_complex _Py_c_prod(Py_complex, Py_complex);
Py_complex _Py_c_quot(Py_complex, Py_complex);
Py_complex _Py_c_pow(Py_complex, Py_complex);
double _Py_c_abs(Py_complex);
typedef struct {
    PyObject ob_base;
    Py_complex cval;
} PyComplexObject;
extern PyTypeObject PyComplex_Type;
PyObject * PyComplex_FromCComplex(Py_complex);
PyObject * PyComplex_FromDoubles(double real, double imag);
double PyComplex_RealAsDouble(PyObject *op);
double PyComplex_ImagAsDouble(PyObject *op);
Py_complex PyComplex_AsCComplex(PyObject *op);
int _PyComplex_FormatAdvancedWriter(
    _PyUnicodeWriter *writer,
    PyObject *obj,
    PyObject *format_spec,
    Py_ssize_t start,
    Py_ssize_t end);
extern PyTypeObject PyRange_Type;
extern PyTypeObject PyRangeIter_Type;
extern PyTypeObject PyLongRangeIter_Type;
extern PyTypeObject _PyManagedBuffer_Type;
extern PyTypeObject PyMemoryView_Type;
PyObject * PyMemoryView_FromObject(PyObject *base);
PyObject * PyMemoryView_FromMemory(char *mem, Py_ssize_t size,
                                               int flags);
PyObject * PyMemoryView_FromBuffer(Py_buffer *info);
PyObject * PyMemoryView_GetContiguous(PyObject *base,
                                                  int buffertype,
                                                  char order);
typedef struct {
    PyObject ob_base;
    int flags;
    Py_ssize_t exports;
    Py_buffer master;
} _PyManagedBufferObject;
typedef struct {
    PyVarObject ob_base;
    _PyManagedBufferObject *mbuf;
    Py_hash_t hash;
    int flags;
    Py_ssize_t exports;
    Py_buffer view;
    PyObject *weakreflist;
    Py_ssize_t ob_array[1];
} PyMemoryViewObject;
extern PyTypeObject PyTuple_Type;
extern PyTypeObject PyTupleIter_Type;
PyObject * PyTuple_New(Py_ssize_t size);
Py_ssize_t PyTuple_Size(PyObject *);
PyObject * PyTuple_GetItem(PyObject *, Py_ssize_t);
int PyTuple_SetItem(PyObject *, Py_ssize_t, PyObject *);
PyObject * PyTuple_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
PyObject * PyTuple_Pack(Py_ssize_t, ...);
int PyTuple_ClearFreeList(void);
typedef struct {
    PyVarObject ob_base;
    PyObject *ob_item[1];
} PyTupleObject;
int _PyTuple_Resize(PyObject **, Py_ssize_t);
void _PyTuple_MaybeUntrack(PyObject *);
void _PyTuple_DebugMallocStats(FILE *out);
typedef struct {
    PyVarObject ob_base;
    PyObject **ob_item;
    Py_ssize_t allocated;
} PyListObject;
extern PyTypeObject PyList_Type;
extern PyTypeObject PyListIter_Type;
extern PyTypeObject PyListRevIter_Type;
extern PyTypeObject PySortWrapper_Type;
PyObject * PyList_New(Py_ssize_t size);
Py_ssize_t PyList_Size(PyObject *);
PyObject * PyList_GetItem(PyObject *, Py_ssize_t);
int PyList_SetItem(PyObject *, Py_ssize_t, PyObject *);
int PyList_Insert(PyObject *, Py_ssize_t, PyObject *);
int PyList_Append(PyObject *, PyObject *);
PyObject * PyList_GetSlice(PyObject *, Py_ssize_t, Py_ssize_t);
int PyList_SetSlice(PyObject *, Py_ssize_t, Py_ssize_t, PyObject *);
int PyList_Sort(PyObject *);
int PyList_Reverse(PyObject *);
PyObject * PyList_AsTuple(PyObject *);
PyObject * _PyList_Extend(PyListObject *, PyObject *);
int PyList_ClearFreeList(void);
void _PyList_DebugMallocStats(FILE *out);
extern PyTypeObject PyDict_Type;
PyObject * PyDict_New(void);
PyObject * PyDict_GetItem(PyObject *mp, PyObject *key);
PyObject * PyDict_GetItemWithError(PyObject *mp, PyObject *key);
int PyDict_SetItem(PyObject *mp, PyObject *key, PyObject *item);
int PyDict_DelItem(PyObject *mp, PyObject *key);
void PyDict_Clear(PyObject *mp);
int PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value);
PyObject * PyDict_Keys(PyObject *mp);
PyObject * PyDict_Values(PyObject *mp);
PyObject * PyDict_Items(PyObject *mp);
Py_ssize_t PyDict_Size(PyObject *mp);
PyObject * PyDict_Copy(PyObject *mp);
int PyDict_Contains(PyObject *mp, PyObject *key);
int PyDict_Update(PyObject *mp, PyObject *other);
int PyDict_Merge(PyObject *mp,
                             PyObject *other,
                             int override);
int PyDict_MergeFromSeq2(PyObject *d,
                                     PyObject *seq2,
                                     int override);
PyObject * PyDict_GetItemString(PyObject *dp, const char *key);
int PyDict_SetItemString(PyObject *dp, const char *key, PyObject *item);
int PyDict_DelItemString(PyObject *dp, const char *key);
extern PyTypeObject PyDictKeys_Type;
extern PyTypeObject PyDictValues_Type;
extern PyTypeObject PyDictItems_Type;
extern PyTypeObject PyDictIterKey_Type;
extern PyTypeObject PyDictIterValue_Type;
extern PyTypeObject PyDictIterItem_Type;
extern PyTypeObject PyDictRevIterKey_Type;
extern PyTypeObject PyDictRevIterItem_Type;
extern PyTypeObject PyDictRevIterValue_Type;
typedef struct _dictkeysobject PyDictKeysObject;
typedef struct {
    PyObject ob_base;
    Py_ssize_t ma_used;
    uint64_t ma_version_tag;
    PyDictKeysObject *ma_keys;
    PyObject **ma_values;
} PyDictObject;
PyObject * _PyDict_GetItem_KnownHash(PyObject *mp, PyObject *key,
                                       Py_hash_t hash);
PyObject * _PyDict_GetItemIdWithError(PyObject *dp,
                                                  struct _Py_Identifier *key);
PyObject * _PyDict_GetItemStringWithError(PyObject *, const char *);
PyObject * PyDict_SetDefault(
    PyObject *mp, PyObject *key, PyObject *defaultobj);
int _PyDict_SetItem_KnownHash(PyObject *mp, PyObject *key,
                                          PyObject *item, Py_hash_t hash);
int _PyDict_DelItem_KnownHash(PyObject *mp, PyObject *key,
                                          Py_hash_t hash);
int _PyDict_DelItemIf(PyObject *mp, PyObject *key,
                                  int (*predicate)(PyObject *value));
PyDictKeysObject *_PyDict_NewKeysForClass(void);
PyObject * PyObject_GenericGetDict(PyObject *, void *);
int _PyDict_Next(
    PyObject *mp, Py_ssize_t *pos, PyObject **key, PyObject **value, Py_hash_t *hash);
int _PyDict_Contains(PyObject *mp, PyObject *key, Py_hash_t hash);
PyObject * _PyDict_NewPresized(Py_ssize_t minused);
void _PyDict_MaybeUntrack(PyObject *mp);
int _PyDict_HasOnlyStringKeys(PyObject *mp);
Py_ssize_t _PyDict_KeysSize(PyDictKeysObject *keys);
Py_ssize_t _PyDict_SizeOf(PyDictObject *);
PyObject * _PyDict_Pop(PyObject *, PyObject *, PyObject *);
PyObject *_PyDict_Pop_KnownHash(PyObject *, PyObject *, Py_hash_t, PyObject *);
PyObject *_PyDict_FromKeys(PyObject *, PyObject *, PyObject *);
int PyDict_ClearFreeList(void);
int _PyDict_MergeEx(PyObject *mp, PyObject *other, int override);
PyObject * _PyDict_GetItemId(PyObject *dp, struct _Py_Identifier *key);
int _PyDict_SetItemId(PyObject *dp, struct _Py_Identifier *key, PyObject *item);
int _PyDict_DelItemId(PyObject *mp, struct _Py_Identifier *key);
void _PyDict_DebugMallocStats(FILE *out);
int _PyObjectDict_SetItem(PyTypeObject *tp, PyObject **dictptr, PyObject *name, PyObject *value);
PyObject *_PyDict_LoadGlobal(PyDictObject *, PyDictObject *, PyObject *);
typedef struct {
    PyObject ob_base;
    PyDictObject *dv_dict;
} _PyDictViewObject;
PyObject * _PyDictView_New(PyObject *, PyTypeObject *);
PyObject * _PyDictView_Intersect(PyObject* self, PyObject *other);
typedef struct _odictobject PyODictObject;
extern PyTypeObject PyODict_Type;
extern PyTypeObject PyODictIter_Type;
extern PyTypeObject PyODictKeys_Type;
extern PyTypeObject PyODictItems_Type;
extern PyTypeObject PyODictValues_Type;
PyObject * PyODict_New(void);
int PyODict_SetItem(PyObject *od, PyObject *key, PyObject *item);
int PyODict_DelItem(PyObject *od, PyObject *key);
extern PyTypeObject PyEnum_Type;
extern PyTypeObject PyReversed_Type;
typedef struct {
    PyObject *key;
    Py_hash_t hash;
} setentry;
typedef struct {
    PyObject ob_base;
    Py_ssize_t fill;
    Py_ssize_t used;
    Py_ssize_t mask;
    setentry *table;
    Py_hash_t hash;
    Py_ssize_t finger;
    setentry smalltable[8];
    PyObject *weakreflist;
} PySetObject;
extern PyObject * _PySet_Dummy;
int _PySet_NextEntry(PyObject *set, Py_ssize_t *pos, PyObject **key, Py_hash_t *hash);
int _PySet_Update(PyObject *set, PyObject *iterable);
int PySet_ClearFreeList(void);
extern PyTypeObject PySet_Type;
extern PyTypeObject PyFrozenSet_Type;
extern PyTypeObject PySetIter_Type;
PyObject * PySet_New(PyObject *);
PyObject * PyFrozenSet_New(PyObject *);
int PySet_Add(PyObject *set, PyObject *key);
int PySet_Clear(PyObject *set);
int PySet_Contains(PyObject *anyset, PyObject *key);
int PySet_Discard(PyObject *set, PyObject *key);
PyObject * PySet_Pop(PyObject *set);
Py_ssize_t PySet_Size(PyObject *anyset);
extern PyTypeObject PyCFunction_Type;
typedef PyObject *(*PyCFunction)(PyObject *, PyObject *);
typedef PyObject *(*_PyCFunctionFast) (PyObject *, PyObject *const *, Py_ssize_t);
typedef PyObject *(*PyCFunctionWithKeywords)(PyObject *, PyObject *,
                                             PyObject *);
typedef PyObject *(*_PyCFunctionFastWithKeywords) (PyObject *,
                                                   PyObject *const *, Py_ssize_t,
                                                   PyObject *);
typedef PyObject *(*PyNoArgsFunction)(PyObject *);
PyCFunction PyCFunction_GetFunction(PyObject *);
PyObject * PyCFunction_GetSelf(PyObject *);
int PyCFunction_GetFlags(PyObject *);
PyObject * PyCFunction_Call(PyObject *, PyObject *, PyObject *);
PyObject * _PyCFunction_FastCallDict(PyObject *func,
    PyObject *const *args,
    Py_ssize_t nargs,
    PyObject *kwargs);
struct PyMethodDef {
    const char *ml_name;
    PyCFunction ml_meth;
    int ml_flags;
    const char *ml_doc;
};
typedef struct PyMethodDef PyMethodDef;
PyObject * PyCFunction_NewEx(PyMethodDef *, PyObject *,
                                         PyObject *);
typedef struct {
    PyObject ob_base;
    PyMethodDef *m_ml;
    PyObject *m_self;
    PyObject *m_module;
    PyObject *m_weakreflist;
    vectorcallfunc vectorcall;
} PyCFunctionObject;
PyObject * _PyMethodDef_RawFastCallDict(
    PyMethodDef *method,
    PyObject *self,
    PyObject *const *args,
    Py_ssize_t nargs,
    PyObject *kwargs);
PyObject * _PyMethodDef_RawFastCallKeywords(
    PyMethodDef *method,
    PyObject *self,
    PyObject *const *args,
    Py_ssize_t nargs,
    PyObject *kwnames);
int PyCFunction_ClearFreeList(void);
void _PyCFunction_DebugMallocStats(FILE *out);
void _PyMethod_DebugMallocStats(FILE *out);
extern PyTypeObject PyModule_Type;
PyObject * PyModule_NewObject(
    PyObject *name
    );
PyObject * PyModule_New(
    const char *name
    );
PyObject * PyModule_GetDict(PyObject *);
PyObject * PyModule_GetNameObject(PyObject *);
const char * PyModule_GetName(PyObject *);
__attribute__((__deprecated__)) const char * PyModule_GetFilename(PyObject *);
PyObject * PyModule_GetFilenameObject(PyObject *);
void _PyModule_Clear(PyObject *);
void _PyModule_ClearDict(PyObject *);
int _PyModuleSpec_IsInitializing(PyObject *);
struct PyModuleDef* PyModule_GetDef(PyObject*);
void* PyModule_GetState(PyObject*);
PyObject * PyModuleDef_Init(struct PyModuleDef*);
extern PyTypeObject PyModuleDef_Type;
typedef struct PyModuleDef_Base {
  PyObject ob_base;
  PyObject* (*m_init)(void);
  Py_ssize_t m_index;
  PyObject* m_copy;
} PyModuleDef_Base;
struct PyModuleDef_Slot;
typedef struct PyModuleDef_Slot{
    int slot;
    void *value;
} PyModuleDef_Slot;
typedef struct PyModuleDef{
  PyModuleDef_Base m_base;
  const char* m_name;
  const char* m_doc;
  Py_ssize_t m_size;
  PyMethodDef *m_methods;
  struct PyModuleDef_Slot* m_slots;
  traverseproc m_traverse;
  inquiry m_clear;
  freefunc m_free;
} PyModuleDef;
typedef struct {
    PyObject ob_base;
    PyObject *func_code;
    PyObject *func_globals;
    PyObject *func_defaults;
    PyObject *func_kwdefaults;
    PyObject *func_closure;
    PyObject *func_doc;
    PyObject *func_name;
    PyObject *func_dict;
    PyObject *func_weakreflist;
    PyObject *func_module;
    PyObject *func_annotations;
    PyObject *func_qualname;
    vectorcallfunc vectorcall;
} PyFunctionObject;
extern PyTypeObject PyFunction_Type;
PyObject * PyFunction_New(PyObject *, PyObject *);
PyObject * PyFunction_NewWithQualName(PyObject *, PyObject *, PyObject *);
PyObject * PyFunction_GetCode(PyObject *);
PyObject * PyFunction_GetGlobals(PyObject *);
PyObject * PyFunction_GetModule(PyObject *);
PyObject * PyFunction_GetDefaults(PyObject *);
int PyFunction_SetDefaults(PyObject *, PyObject *);
PyObject * PyFunction_GetKwDefaults(PyObject *);
int PyFunction_SetKwDefaults(PyObject *, PyObject *);
PyObject * PyFunction_GetClosure(PyObject *);
int PyFunction_SetClosure(PyObject *, PyObject *);
PyObject * PyFunction_GetAnnotations(PyObject *);
int PyFunction_SetAnnotations(PyObject *, PyObject *);
PyObject * _PyFunction_FastCallDict(
    PyObject *func,
    PyObject *const *args,
    Py_ssize_t nargs,
    PyObject *kwargs);
PyObject * _PyFunction_Vectorcall(
    PyObject *func,
    PyObject *const *stack,
    size_t nargsf,
    PyObject *kwnames);
extern PyTypeObject PyClassMethod_Type;
extern PyTypeObject PyStaticMethod_Type;
PyObject * PyClassMethod_New(PyObject *);
PyObject * PyStaticMethod_New(PyObject *);
typedef struct {
    PyObject ob_base;
    PyObject *im_func;
    PyObject *im_self;
    PyObject *im_weakreflist;
    vectorcallfunc vectorcall;
} PyMethodObject;
extern PyTypeObject PyMethod_Type;
PyObject * PyMethod_New(PyObject *, PyObject *);
PyObject * PyMethod_Function(PyObject *);
PyObject * PyMethod_Self(PyObject *);
int PyMethod_ClearFreeList(void);
typedef struct {
    PyObject ob_base;
    PyObject *func;
} PyInstanceMethodObject;
extern PyTypeObject PyInstanceMethod_Type;
PyObject * PyInstanceMethod_New(PyObject *);
PyObject * PyInstanceMethod_Function(PyObject *);
PyObject * PyFile_FromFd(int, const char *, const char *, int,
                                     const char *, const char *,
                                     const char *, int);
PyObject * PyFile_GetLine(PyObject *, int);
int PyFile_WriteObject(PyObject *, PyObject *, int);
int PyFile_WriteString(const char *, PyObject *);
int PyObject_AsFileDescriptor(PyObject *);
extern const char * Py_FileSystemDefaultEncoding;
extern const char * Py_FileSystemDefaultEncodeErrors;
extern int Py_HasFileSystemDefaultEncoding;
extern int Py_UTF8Mode;
char * Py_UniversalNewlineFgets(char *, int, FILE*, PyObject *);
PyObject * PyFile_NewStdPrinter(int);
extern PyTypeObject PyStdPrinter_Type;
typedef PyObject * (*Py_OpenCodeHookFunction)(PyObject *, void *);
PyObject * PyFile_OpenCode(const char *utf8path);
PyObject * PyFile_OpenCodeObject(PyObject *path);
int PyFile_SetOpenCodeHook(Py_OpenCodeHookFunction hook, void *userData);
extern PyTypeObject PyCapsule_Type;
typedef void (*PyCapsule_Destructor)(PyObject *);
PyObject * PyCapsule_New(
    void *pointer,
    const char *name,
    PyCapsule_Destructor destructor);
void * PyCapsule_GetPointer(PyObject *capsule, const char *name);
PyCapsule_Destructor PyCapsule_GetDestructor(PyObject *capsule);
const char * PyCapsule_GetName(PyObject *capsule);
void * PyCapsule_GetContext(PyObject *capsule);
int PyCapsule_IsValid(PyObject *capsule, const char *name);
int PyCapsule_SetPointer(PyObject *capsule, void *pointer);
int PyCapsule_SetDestructor(PyObject *capsule, PyCapsule_Destructor destructor);
int PyCapsule_SetName(PyObject *capsule, const char *name);
int PyCapsule_SetContext(PyObject *capsule, void *context);
void * PyCapsule_Import(
    const char *name,
    int no_block);
struct _frame;
int PyTraceBack_Here(struct _frame *);
int PyTraceBack_Print(PyObject *, PyObject *);
extern PyTypeObject PyTraceBack_Type;
typedef struct _traceback {
    PyObject ob_base;
    struct _traceback *tb_next;
    struct _frame *tb_frame;
    int tb_lasti;
    int tb_lineno;
} PyTracebackObject;
int _Py_DisplaySourceLine(PyObject *, PyObject *, int, int);
void _PyTraceback_Add(const char *, const char *, int);
extern PyObject _Py_EllipsisObject;
typedef struct {
    PyObject ob_base;
    PyObject *start, *stop, *step;
} PySliceObject;
extern PyTypeObject PySlice_Type;
extern PyTypeObject PyEllipsis_Type;
PyObject * PySlice_New(PyObject* start, PyObject* stop,
                                  PyObject* step);
PyObject * _PySlice_FromIndices(Py_ssize_t start, Py_ssize_t stop);
int _PySlice_GetLongIndices(PySliceObject *self, PyObject *length,
                                 PyObject **start_ptr, PyObject **stop_ptr,
                                 PyObject **step_ptr);
int PySlice_GetIndices(PyObject *r, Py_ssize_t length,
                                  Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step);
__attribute__((__deprecated__))
int PySlice_GetIndicesEx(PyObject *r, Py_ssize_t length,
                                     Py_ssize_t *start, Py_ssize_t *stop,
                                     Py_ssize_t *step,
                                     Py_ssize_t *slicelength);
int PySlice_Unpack(PyObject *slice,
                               Py_ssize_t *start, Py_ssize_t *stop, Py_ssize_t *step);
Py_ssize_t PySlice_AdjustIndices(Py_ssize_t length,
                                             Py_ssize_t *start, Py_ssize_t *stop,
                                             Py_ssize_t step);
typedef struct {
    PyObject ob_base;
    PyObject *ob_ref;
} PyCellObject;
extern PyTypeObject PyCell_Type;
PyObject * PyCell_New(PyObject *);
PyObject * PyCell_Get(PyObject *);
int PyCell_Set(PyObject *, PyObject *);
extern PyTypeObject PySeqIter_Type;
extern PyTypeObject PyCallIter_Type;
extern PyTypeObject PyCmpWrapper_Type;
PyObject * PySeqIter_New(PyObject *);
PyObject * PyCallIter_New(PyObject *, PyObject *);
typedef void *PyThread_type_lock;
typedef void *PyThread_type_sema;
typedef enum PyLockStatus {
    PY_LOCK_FAILURE = 0,
    PY_LOCK_ACQUIRED = 1,
    PY_LOCK_INTR
} PyLockStatus;
void PyThread_init_thread(void);
unsigned long PyThread_start_new_thread(void (*)(void *), void *);
void __attribute__((__noreturn__)) PyThread_exit_thread(void);
unsigned long PyThread_get_thread_ident(void);
unsigned long PyThread_get_thread_native_id(void);
PyThread_type_lock PyThread_allocate_lock(void);
void PyThread_free_lock(PyThread_type_lock);
int PyThread_acquire_lock(PyThread_type_lock, int);
PyLockStatus PyThread_acquire_lock_timed(PyThread_type_lock,
                                                     long long microseconds,
                                                     int intr_flag);
void PyThread_release_lock(PyThread_type_lock);
size_t PyThread_get_stacksize(void);
int PyThread_set_stacksize(size_t);
PyObject* PyThread_GetInfo(void);
__attribute__((__deprecated__)) int PyThread_create_key(void);
__attribute__((__deprecated__)) void PyThread_delete_key(int key);
__attribute__((__deprecated__)) int PyThread_set_key_value(int key,
                                                          void *value);
__attribute__((__deprecated__)) void * PyThread_get_key_value(int key);
__attribute__((__deprecated__)) void PyThread_delete_key_value(int key);
__attribute__((__deprecated__)) void PyThread_ReInitTLS(void);
typedef struct _Py_tss_t Py_tss_t;
struct sched_param
{
  int sched_priority;
};

extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int unshare (int __flags) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_getcpu (void) __attribute__ ((__nothrow__ , __leaf__));
extern int getcpu (unsigned int *, unsigned int *) __attribute__ ((__nothrow__ , __leaf__));
extern int setns (int __fd, int __nstype) __attribute__ ((__nothrow__ , __leaf__));

typedef unsigned long int __cpu_mask;
typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;

extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
     __attribute__ ((__nothrow__ , __leaf__));
extern cpu_set_t *__sched_cpualloc (size_t __count) __attribute__ ((__nothrow__ , __leaf__)) ;
extern void __sched_cpufree (cpu_set_t *__set) __attribute__ ((__nothrow__ , __leaf__));


extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__));
extern int sched_getparam (__pid_t __pid, struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_getscheduler (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_yield (void) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_get_priority_max (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_get_priority_min (int __algorithm) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));
extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) __attribute__ ((__nothrow__ , __leaf__));

typedef long int __jmp_buf[8];
enum
{
  PTHREAD_CREATE_JOINABLE,
  PTHREAD_CREATE_DETACHED
};
enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP
  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL
  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP
};
enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};
enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
enum
{
  PTHREAD_INHERIT_SCHED,
  PTHREAD_EXPLICIT_SCHED
};
enum
{
  PTHREAD_SCOPE_SYSTEM,
  PTHREAD_SCOPE_PROCESS
};
enum
{
  PTHREAD_PROCESS_PRIVATE,
  PTHREAD_PROCESS_SHARED
};
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};
enum
{
  PTHREAD_CANCEL_ENABLE,
  PTHREAD_CANCEL_DISABLE
};
enum
{
  PTHREAD_CANCEL_DEFERRED,
  PTHREAD_CANCEL_ASYNCHRONOUS
};

extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));
extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));
extern int pthread_join (pthread_t __th, void **__thread_return);
extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);
extern int pthread_clockjoin_np (pthread_t __th, void **__thread_return,
                                 clockid_t __clockid,
     const struct timespec *__abstime);
extern int pthread_detach (pthread_t __th) __attribute__ ((__nothrow__ , __leaf__));
extern pthread_t pthread_self (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int pthread_attr_init (pthread_attr_t *__attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_destroy (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));
extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));
extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_getattr_default_np (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int pthread_getconcurrency (void) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_setconcurrency (int __level) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_yield (void) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_setcancelstate (int __state, int *__oldstate);
extern int pthread_setcanceltype (int __type, int *__oldtype);
extern int pthread_cancel (pthread_t __th);
extern void pthread_testcancel (void);
typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
     ;
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
  ;
extern void __pthread_register_cancel_defer (__pthread_unwind_buf_t *__buf)
     ;
extern void __pthread_unregister_cancel_restore (__pthread_unwind_buf_t *__buf)
  ;
extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__noreturn__))
     __attribute__ ((__weak__))
     ;
struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) __attribute__ ((__nothrow__));
extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutex_clocklock (pthread_mutex_t *__restrict __mutex,
        clockid_t __clockid,
        const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_getrobust_np (const pthread_mutexattr_t *__attr,
        int *__robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_rwlock_clockrdlock (pthread_rwlock_t *__restrict __rwlock,
           clockid_t __clockid,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_rwlock_clockwrlock (pthread_rwlock_t *__restrict __rwlock,
           clockid_t __clockid,
           const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));
extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_cond_destroy (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_cond_signal (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));
extern int pthread_cond_clockwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       __clockid_t __clock_id,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 4)));
extern int pthread_condattr_init (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int pthread_key_delete (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));
extern void *pthread_getspecific (pthread_key_t __key) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) __attribute__ ((__nothrow__ , __leaf__));

struct _Py_tss_t {
    int _is_initialized;
    pthread_key_t _key;
};
Py_tss_t * PyThread_tss_alloc(void);
void PyThread_tss_free(Py_tss_t *key);
int PyThread_tss_is_created(Py_tss_t *key);
int PyThread_tss_create(Py_tss_t *key);
void PyThread_tss_delete(Py_tss_t *key);
int PyThread_tss_set(Py_tss_t *key, void *value);
void * PyThread_tss_get(Py_tss_t *key);
struct _frame;
struct _ts;
struct _is;
typedef struct _ts PyThreadState;
typedef struct _is PyInterpreterState;
PyInterpreterState * PyInterpreterState_New(void);
void PyInterpreterState_Clear(PyInterpreterState *);
void PyInterpreterState_Delete(PyInterpreterState *);
PyObject * PyInterpreterState_GetDict(PyInterpreterState *);
int64_t PyInterpreterState_GetID(PyInterpreterState *);
int PyState_AddModule(PyObject*, struct PyModuleDef*);
int PyState_RemoveModule(struct PyModuleDef*);
PyObject* PyState_FindModule(struct PyModuleDef*);
PyThreadState * PyThreadState_New(PyInterpreterState *);
void PyThreadState_Clear(PyThreadState *);
void PyThreadState_Delete(PyThreadState *);
void PyThreadState_DeleteCurrent(void);
PyThreadState * PyThreadState_Get(void);
PyThreadState * PyThreadState_Swap(PyThreadState *);
PyObject * PyThreadState_GetDict(void);
int PyThreadState_SetAsyncExc(unsigned long, PyObject *);
typedef
    enum {PyGILState_LOCKED, PyGILState_UNLOCKED}
        PyGILState_STATE;
PyGILState_STATE PyGILState_Ensure(void);
void PyGILState_Release(PyGILState_STATE);
PyThreadState * PyGILState_GetThisThreadState(void);
typedef struct {
    enum {
        _PyStatus_TYPE_OK=0,
        _PyStatus_TYPE_ERROR=1,
        _PyStatus_TYPE_EXIT=2
    } _type;
    const char *func;
    const char *err_msg;
    int exitcode;
} PyStatus;
PyStatus PyStatus_Ok(void);
PyStatus PyStatus_Error(const char *err_msg);
PyStatus PyStatus_NoMemory(void);
PyStatus PyStatus_Exit(int exitcode);
int PyStatus_IsError(PyStatus err);
int PyStatus_IsExit(PyStatus err);
int PyStatus_Exception(PyStatus err);
typedef struct {
    Py_ssize_t length;
    wchar_t **items;
} PyWideStringList;
PyStatus PyWideStringList_Append(PyWideStringList *list,
    const wchar_t *item);
PyStatus PyWideStringList_Insert(PyWideStringList *list,
    Py_ssize_t index,
    const wchar_t *item);
typedef struct {
    int _config_init;
    int parse_argv;
    int isolated;
    int use_environment;
    int configure_locale;
    int coerce_c_locale;
    int coerce_c_locale_warn;
    int utf8_mode;
    int dev_mode;
    int allocator;
} PyPreConfig;
void PyPreConfig_InitPythonConfig(PyPreConfig *config);
void PyPreConfig_InitIsolatedConfig(PyPreConfig *config);
typedef struct {
    int _config_init;
    int isolated;
    int use_environment;
    int dev_mode;
    int install_signal_handlers;
    int use_hash_seed;
    unsigned long hash_seed;
    int faulthandler;
    int tracemalloc;
    int import_time;
    int show_ref_count;
    int show_alloc_count;
    int dump_refs;
    int malloc_stats;
    wchar_t *filesystem_encoding;
    wchar_t *filesystem_errors;
    wchar_t *pycache_prefix;
    int parse_argv;
    PyWideStringList argv;
    wchar_t *program_name;
    PyWideStringList xoptions;
    PyWideStringList warnoptions;
    int site_import;
    int bytes_warning;
    int inspect;
    int interactive;
    int optimization_level;
    int parser_debug;
    int write_bytecode;
    int verbose;
    int quiet;
    int user_site_directory;
    int configure_c_stdio;
    int buffered_stdio;
    wchar_t *stdio_encoding;
    wchar_t *stdio_errors;
    wchar_t *check_hash_pycs_mode;
    int pathconfig_warnings;
    wchar_t *pythonpath_env;
    wchar_t *home;
    int module_search_paths_set;
    PyWideStringList module_search_paths;
    wchar_t *executable;
    wchar_t *base_executable;
    wchar_t *prefix;
    wchar_t *base_prefix;
    wchar_t *exec_prefix;
    wchar_t *base_exec_prefix;
    int skip_source_first_line;
    wchar_t *run_command;
    wchar_t *run_module;
    wchar_t *run_filename;
    int _install_importlib;
    int _init_main;
} PyConfig;
void PyConfig_InitPythonConfig(PyConfig *config);
void PyConfig_InitIsolatedConfig(PyConfig *config);
void PyConfig_Clear(PyConfig *);
PyStatus PyConfig_SetString(
    PyConfig *config,
    wchar_t **config_str,
    const wchar_t *str);
PyStatus PyConfig_SetBytesString(
    PyConfig *config,
    wchar_t **config_str,
    const char *str);
PyStatus PyConfig_Read(PyConfig *config);
PyStatus PyConfig_SetBytesArgv(
    PyConfig *config,
    Py_ssize_t argc,
    char * const *argv);
PyStatus PyConfig_SetArgv(PyConfig *config,
    Py_ssize_t argc,
    wchar_t * const *argv);
PyStatus PyConfig_SetWideStringList(PyConfig *config,
    PyWideStringList *list,
    Py_ssize_t length, wchar_t **items);
int _PyInterpreterState_RequiresIDRef(PyInterpreterState *);
void _PyInterpreterState_RequireIDRef(PyInterpreterState *, int);
PyObject * _PyInterpreterState_GetMainModule(PyInterpreterState *);
typedef int (*Py_tracefunc)(PyObject *, struct _frame *, int, PyObject *);
typedef struct _err_stackitem {
    PyObject *exc_type, *exc_value, *exc_traceback;
    struct _err_stackitem *previous_item;
} _PyErr_StackItem;
struct _ts {
    struct _ts *prev;
    struct _ts *next;
    PyInterpreterState *interp;
    struct _frame *frame;
    int recursion_depth;
    char overflowed;
    char recursion_critical;
    int stackcheck_counter;
    int tracing;
    int use_tracing;
    Py_tracefunc c_profilefunc;
    Py_tracefunc c_tracefunc;
    PyObject *c_profileobj;
    PyObject *c_traceobj;
    PyObject *curexc_type;
    PyObject *curexc_value;
    PyObject *curexc_traceback;
    _PyErr_StackItem exc_state;
    _PyErr_StackItem *exc_info;
    PyObject *dict;
    int gilstate_counter;
    PyObject *async_exc;
    unsigned long thread_id;
    int trash_delete_nesting;
    PyObject *trash_delete_later;
    void (*on_delete)(void *);
    void *on_delete_data;
    int coroutine_origin_tracking_depth;
    PyObject *async_gen_firstiter;
    PyObject *async_gen_finalizer;
    PyObject *context;
    uint64_t context_ver;
    uint64_t id;
};
PyInterpreterState * _PyInterpreterState_Get(void);
int _PyState_AddModule(PyObject*, struct PyModuleDef*);
void _PyState_ClearModules(void);
PyThreadState * _PyThreadState_Prealloc(PyInterpreterState *);
PyThreadState * _PyThreadState_UncheckedGet(void);
int PyGILState_Check(void);
PyInterpreterState * _PyGILState_GetInterpreterStateUnsafe(void);
PyObject * _PyThread_CurrentFrames(void);
PyInterpreterState * PyInterpreterState_Main(void);
PyInterpreterState * PyInterpreterState_Head(void);
PyInterpreterState * PyInterpreterState_Next(PyInterpreterState *);
PyThreadState * PyInterpreterState_ThreadHead(PyInterpreterState *);
PyThreadState * PyThreadState_Next(PyThreadState *);
typedef struct _frame *(*PyThreadFrameGetter)(PyThreadState *self_);
struct _xid;
typedef struct _xid {
    void *data;
    PyObject *obj;
    int64_t interp;
    PyObject *(*new_object)(struct _xid *);
    void (*free)(void *);
} _PyCrossInterpreterData;
int _PyObject_GetCrossInterpreterData(PyObject *, _PyCrossInterpreterData *);
PyObject * _PyCrossInterpreterData_NewObject(_PyCrossInterpreterData *);
void _PyCrossInterpreterData_Release(_PyCrossInterpreterData *);
int _PyObject_CheckCrossInterpreterData(PyObject *);
typedef int (*crossinterpdatafunc)(PyObject *, struct _xid *);
int _PyCrossInterpreterData_RegisterClass(PyTypeObject *, crossinterpdatafunc);
crossinterpdatafunc _PyCrossInterpreterData_Lookup(PyObject *);
struct _frame;
typedef struct {
    PyObject ob_base; struct _frame *gi_frame; char gi_running; PyObject *gi_code; PyObject *gi_weakreflist; PyObject *gi_name; PyObject *gi_qualname; _PyErr_StackItem gi_exc_state;
} PyGenObject;
extern PyTypeObject PyGen_Type;
PyObject * PyGen_New(struct _frame *);
PyObject * PyGen_NewWithQualName(struct _frame *,
    PyObject *name, PyObject *qualname);
int PyGen_NeedsFinalizing(PyGenObject *);
int _PyGen_SetStopIterationValue(PyObject *);
int _PyGen_FetchStopIterationValue(PyObject **);
PyObject * _PyGen_Send(PyGenObject *, PyObject *);
PyObject *_PyGen_yf(PyGenObject *);
void _PyGen_Finalize(PyObject *self);
typedef struct {
    PyObject ob_base; struct _frame *cr_frame; char cr_running; PyObject *cr_code; PyObject *cr_weakreflist; PyObject *cr_name; PyObject *cr_qualname; _PyErr_StackItem cr_exc_state;
    PyObject *cr_origin;
} PyCoroObject;
extern PyTypeObject PyCoro_Type;
extern PyTypeObject _PyCoroWrapper_Type;
extern PyTypeObject _PyAIterWrapper_Type;
PyObject *_PyCoro_GetAwaitableIter(PyObject *o);
PyObject * PyCoro_New(struct _frame *,
    PyObject *name, PyObject *qualname);
typedef struct {
    PyObject ob_base; struct _frame *ag_frame; char ag_running; PyObject *ag_code; PyObject *ag_weakreflist; PyObject *ag_name; PyObject *ag_qualname; _PyErr_StackItem ag_exc_state;
    PyObject *ag_finalizer;
    int ag_hooks_inited;
    int ag_closed;
    int ag_running_async;
} PyAsyncGenObject;
extern PyTypeObject PyAsyncGen_Type;
extern PyTypeObject _PyAsyncGenASend_Type;
extern PyTypeObject _PyAsyncGenWrappedValue_Type;
extern PyTypeObject _PyAsyncGenAThrow_Type;
PyObject * PyAsyncGen_New(struct _frame *,
    PyObject *name, PyObject *qualname);
PyObject *_PyAsyncGenValueWrapperNew(PyObject *);
int PyAsyncGen_ClearFreeLists(void);
typedef PyObject *(*getter)(PyObject *, void *);
typedef int (*setter)(PyObject *, PyObject *, void *);
typedef struct PyGetSetDef {
    const char *name;
    getter get;
    setter set;
    const char *doc;
    void *closure;
} PyGetSetDef;
typedef PyObject *(*wrapperfunc)(PyObject *self, PyObject *args,
                                 void *wrapped);
typedef PyObject *(*wrapperfunc_kwds)(PyObject *self, PyObject *args,
                                      void *wrapped, PyObject *kwds);
struct wrapperbase {
    const char *name;
    int offset;
    void *function;
    wrapperfunc wrapper;
    const char *doc;
    int flags;
    PyObject *name_strobj;
};
typedef struct {
    PyObject ob_base;
    PyTypeObject *d_type;
    PyObject *d_name;
    PyObject *d_qualname;
} PyDescrObject;
typedef struct {
    PyDescrObject d_common;
    PyMethodDef *d_method;
    vectorcallfunc vectorcall;
} PyMethodDescrObject;
typedef struct {
    PyDescrObject d_common;
    struct PyMemberDef *d_member;
} PyMemberDescrObject;
typedef struct {
    PyDescrObject d_common;
    PyGetSetDef *d_getset;
} PyGetSetDescrObject;
typedef struct {
    PyDescrObject d_common;
    struct wrapperbase *d_base;
    void *d_wrapped;
} PyWrapperDescrObject;
extern PyTypeObject PyClassMethodDescr_Type;
extern PyTypeObject PyGetSetDescr_Type;
extern PyTypeObject PyMemberDescr_Type;
extern PyTypeObject PyMethodDescr_Type;
extern PyTypeObject PyWrapperDescr_Type;
extern PyTypeObject PyDictProxy_Type;
extern PyTypeObject _PyMethodWrapper_Type;
PyObject * PyDescr_NewMethod(PyTypeObject *, PyMethodDef *);
PyObject * PyDescr_NewClassMethod(PyTypeObject *, PyMethodDef *);
struct PyMemberDef;
PyObject * PyDescr_NewMember(PyTypeObject *,
                                               struct PyMemberDef *);
PyObject * PyDescr_NewGetSet(PyTypeObject *,
                                               struct PyGetSetDef *);
PyObject * PyDescr_NewWrapper(PyTypeObject *,
                                                struct wrapperbase *, void *);
PyObject * PyDictProxy_New(PyObject *);
PyObject * PyWrapper_New(PyObject *, PyObject *);
extern PyTypeObject PyProperty_Type;
PyObject* _PyWarnings_Init(void);
int PyErr_WarnEx(
    PyObject *category,
    const char *message,
    Py_ssize_t stack_level);
int PyErr_WarnFormat(
    PyObject *category,
    Py_ssize_t stack_level,
    const char *format,
    ...);
int PyErr_ResourceWarning(
    PyObject *source,
    Py_ssize_t stack_level,
    const char *format,
    ...);
int PyErr_WarnExplicitObject(
    PyObject *category,
    PyObject *message,
    PyObject *filename,
    int lineno,
    PyObject *module,
    PyObject *registry);
int PyErr_WarnExplicit(
    PyObject *category,
    const char *message,
    const char *filename,
    int lineno,
    const char *module,
    PyObject *registry);
int
PyErr_WarnExplicitFormat(PyObject *category,
                         const char *filename, int lineno,
                         const char *module, PyObject *registry,
                         const char *format, ...);
void _PyErr_WarnUnawaitedCoroutine(PyObject *coro);
typedef struct _PyWeakReference PyWeakReference;
struct _PyWeakReference {
    PyObject ob_base;
    PyObject *wr_object;
    PyObject *wr_callback;
    Py_hash_t hash;
    PyWeakReference *wr_prev;
    PyWeakReference *wr_next;
};
extern PyTypeObject _PyWeakref_RefType;
extern PyTypeObject _PyWeakref_ProxyType;
extern PyTypeObject _PyWeakref_CallableProxyType;
PyObject * PyWeakref_NewRef(PyObject *ob,
                                              PyObject *callback);
PyObject * PyWeakref_NewProxy(PyObject *ob,
                                                PyObject *callback);
PyObject * PyWeakref_GetObject(PyObject *ref);
Py_ssize_t _PyWeakref_GetWeakrefCount(PyWeakReference *head);
void _PyWeakref_ClearRef(PyWeakReference *self);
typedef struct PyStructSequence_Field {
    const char *name;
    const char *doc;
} PyStructSequence_Field;
typedef struct PyStructSequence_Desc {
    const char *name;
    const char *doc;
    struct PyStructSequence_Field *fields;
    int n_in_sequence;
} PyStructSequence_Desc;
extern char* PyStructSequence_UnnamedField;
void PyStructSequence_InitType(PyTypeObject *type,
                                           PyStructSequence_Desc *desc);
int PyStructSequence_InitType2(PyTypeObject *type,
                                           PyStructSequence_Desc *desc);
PyTypeObject* PyStructSequence_NewType(PyStructSequence_Desc *desc);
PyObject * PyStructSequence_New(PyTypeObject* type);
typedef PyTupleObject PyStructSequence;
void PyStructSequence_SetItem(PyObject*, Py_ssize_t, PyObject*);
PyObject* PyStructSequence_GetItem(PyObject*, Py_ssize_t);
extern PyTypeObject _PyNamespace_Type;
PyObject * _PyNamespace_New(PyObject *kwds);
extern PyTypeObject PyPickleBuffer_Type;
PyObject * PyPickleBuffer_FromObject(PyObject *);
const Py_buffer * PyPickleBuffer_GetBuffer(PyObject *);
int PyPickleBuffer_Release(PyObject *);
int PyCodec_Register(
       PyObject *search_function
       );
PyObject * _PyCodec_Lookup(
       const char *encoding
       );
int _PyCodec_Forget(
       const char *encoding
       );
int PyCodec_KnownEncoding(
       const char *encoding
       );
PyObject * PyCodec_Encode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
PyObject * PyCodec_Decode(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
PyObject * _PyCodec_LookupTextEncoding(
       const char *encoding,
       const char *alternate_command
       );
PyObject * _PyCodec_EncodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
PyObject * _PyCodec_DecodeText(
       PyObject *object,
       const char *encoding,
       const char *errors
       );
PyObject * _PyCodecInfo_GetIncrementalDecoder(
       PyObject *codec_info,
       const char *errors
       );
PyObject * _PyCodecInfo_GetIncrementalEncoder(
       PyObject *codec_info,
       const char *errors
       );
PyObject * PyCodec_Encoder(
       const char *encoding
       );
PyObject * PyCodec_Decoder(
       const char *encoding
       );
PyObject * PyCodec_IncrementalEncoder(
       const char *encoding,
       const char *errors
       );
PyObject * PyCodec_IncrementalDecoder(
       const char *encoding,
       const char *errors
       );
PyObject * PyCodec_StreamReader(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );
PyObject * PyCodec_StreamWriter(
       const char *encoding,
       PyObject *stream,
       const char *errors
       );
int PyCodec_RegisterError(const char *name, PyObject *error);
PyObject * PyCodec_LookupError(const char *name);
PyObject * PyCodec_StrictErrors(PyObject *exc);
PyObject * PyCodec_IgnoreErrors(PyObject *exc);
PyObject * PyCodec_ReplaceErrors(PyObject *exc);
PyObject * PyCodec_XMLCharRefReplaceErrors(PyObject *exc);
PyObject * PyCodec_BackslashReplaceErrors(PyObject *exc);
PyObject * PyCodec_NameReplaceErrors(PyObject *exc);
extern const char * Py_hexdigits;
void PyErr_SetNone(PyObject *);
void PyErr_SetObject(PyObject *, PyObject *);
void PyErr_SetString(
    PyObject *exception,
    const char *string
    );
PyObject * PyErr_Occurred(void);
void PyErr_Clear(void);
void PyErr_Fetch(PyObject **, PyObject **, PyObject **);
void PyErr_Restore(PyObject *, PyObject *, PyObject *);
void PyErr_GetExcInfo(PyObject **, PyObject **, PyObject **);
void PyErr_SetExcInfo(PyObject *, PyObject *, PyObject *);
void __attribute__((__noreturn__)) Py_FatalError(const char *message);
int PyErr_GivenExceptionMatches(PyObject *, PyObject *);
int PyErr_ExceptionMatches(PyObject *);
void PyErr_NormalizeException(PyObject**, PyObject**, PyObject**);
int PyException_SetTraceback(PyObject *, PyObject *);
PyObject * PyException_GetTraceback(PyObject *);
PyObject * PyException_GetCause(PyObject *);
void PyException_SetCause(PyObject *, PyObject *);
PyObject * PyException_GetContext(PyObject *);
void PyException_SetContext(PyObject *, PyObject *);
const char * PyExceptionClass_Name(PyObject *);
extern PyObject * PyExc_BaseException;
extern PyObject * PyExc_Exception;
extern PyObject * PyExc_StopAsyncIteration;
extern PyObject * PyExc_StopIteration;
extern PyObject * PyExc_GeneratorExit;
extern PyObject * PyExc_ArithmeticError;
extern PyObject * PyExc_LookupError;
extern PyObject * PyExc_AssertionError;
extern PyObject * PyExc_AttributeError;
extern PyObject * PyExc_BufferError;
extern PyObject * PyExc_EOFError;
extern PyObject * PyExc_FloatingPointError;
extern PyObject * PyExc_OSError;
extern PyObject * PyExc_ImportError;
extern PyObject * PyExc_ModuleNotFoundError;
extern PyObject * PyExc_IndexError;
extern PyObject * PyExc_KeyError;
extern PyObject * PyExc_KeyboardInterrupt;
extern PyObject * PyExc_MemoryError;
extern PyObject * PyExc_NameError;
extern PyObject * PyExc_OverflowError;
extern PyObject * PyExc_RuntimeError;
extern PyObject * PyExc_RecursionError;
extern PyObject * PyExc_NotImplementedError;
extern PyObject * PyExc_SyntaxError;
extern PyObject * PyExc_IndentationError;
extern PyObject * PyExc_TabError;
extern PyObject * PyExc_ReferenceError;
extern PyObject * PyExc_SystemError;
extern PyObject * PyExc_SystemExit;
extern PyObject * PyExc_TypeError;
extern PyObject * PyExc_UnboundLocalError;
extern PyObject * PyExc_UnicodeError;
extern PyObject * PyExc_UnicodeEncodeError;
extern PyObject * PyExc_UnicodeDecodeError;
extern PyObject * PyExc_UnicodeTranslateError;
extern PyObject * PyExc_ValueError;
extern PyObject * PyExc_ZeroDivisionError;
extern PyObject * PyExc_BlockingIOError;
extern PyObject * PyExc_BrokenPipeError;
extern PyObject * PyExc_ChildProcessError;
extern PyObject * PyExc_ConnectionError;
extern PyObject * PyExc_ConnectionAbortedError;
extern PyObject * PyExc_ConnectionRefusedError;
extern PyObject * PyExc_ConnectionResetError;
extern PyObject * PyExc_FileExistsError;
extern PyObject * PyExc_FileNotFoundError;
extern PyObject * PyExc_InterruptedError;
extern PyObject * PyExc_IsADirectoryError;
extern PyObject * PyExc_NotADirectoryError;
extern PyObject * PyExc_PermissionError;
extern PyObject * PyExc_ProcessLookupError;
extern PyObject * PyExc_TimeoutError;
extern PyObject * PyExc_EnvironmentError;
extern PyObject * PyExc_IOError;
extern PyObject * PyExc_Warning;
extern PyObject * PyExc_UserWarning;
extern PyObject * PyExc_DeprecationWarning;
extern PyObject * PyExc_PendingDeprecationWarning;
extern PyObject * PyExc_SyntaxWarning;
extern PyObject * PyExc_RuntimeWarning;
extern PyObject * PyExc_FutureWarning;
extern PyObject * PyExc_ImportWarning;
extern PyObject * PyExc_UnicodeWarning;
extern PyObject * PyExc_BytesWarning;
extern PyObject * PyExc_ResourceWarning;
int PyErr_BadArgument(void);
PyObject * PyErr_NoMemory(void);
PyObject * PyErr_SetFromErrno(PyObject *);
PyObject * PyErr_SetFromErrnoWithFilenameObject(
    PyObject *, PyObject *);
PyObject * PyErr_SetFromErrnoWithFilenameObjects(
    PyObject *, PyObject *, PyObject *);
PyObject * PyErr_SetFromErrnoWithFilename(
    PyObject *exc,
    const char *filename
    );
PyObject * PyErr_Format(
    PyObject *exception,
    const char *format,
    ...
    );
PyObject * PyErr_FormatV(
    PyObject *exception,
    const char *format,
    va_list vargs);
PyObject * PyErr_SetImportErrorSubclass(PyObject *, PyObject *,
    PyObject *, PyObject *);
PyObject * PyErr_SetImportError(PyObject *, PyObject *,
    PyObject *);
void PyErr_BadInternalCall(void);
void _PyErr_BadInternalCall(const char *filename, int lineno);
PyObject * PyErr_NewException(
    const char *name, PyObject *base, PyObject *dict);
PyObject * PyErr_NewExceptionWithDoc(
    const char *name, const char *doc, PyObject *base, PyObject *dict);
void PyErr_WriteUnraisable(PyObject *);
int PyErr_CheckSignals(void);
void PyErr_SetInterrupt(void);
void PyErr_SyntaxLocation(
    const char *filename,
    int lineno);
void PyErr_SyntaxLocationEx(
    const char *filename,
    int lineno,
    int col_offset);
PyObject * PyErr_ProgramText(
    const char *filename,
    int lineno);
PyObject * PyUnicodeDecodeError_Create(
    const char *encoding,
    const char *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );
PyObject * PyUnicodeEncodeError_GetEncoding(PyObject *);
PyObject * PyUnicodeDecodeError_GetEncoding(PyObject *);
PyObject * PyUnicodeEncodeError_GetObject(PyObject *);
PyObject * PyUnicodeDecodeError_GetObject(PyObject *);
PyObject * PyUnicodeTranslateError_GetObject(PyObject *);
int PyUnicodeEncodeError_GetStart(PyObject *, Py_ssize_t *);
int PyUnicodeDecodeError_GetStart(PyObject *, Py_ssize_t *);
int PyUnicodeTranslateError_GetStart(PyObject *, Py_ssize_t *);
int PyUnicodeEncodeError_SetStart(PyObject *, Py_ssize_t);
int PyUnicodeDecodeError_SetStart(PyObject *, Py_ssize_t);
int PyUnicodeTranslateError_SetStart(PyObject *, Py_ssize_t);
int PyUnicodeEncodeError_GetEnd(PyObject *, Py_ssize_t *);
int PyUnicodeDecodeError_GetEnd(PyObject *, Py_ssize_t *);
int PyUnicodeTranslateError_GetEnd(PyObject *, Py_ssize_t *);
int PyUnicodeEncodeError_SetEnd(PyObject *, Py_ssize_t);
int PyUnicodeDecodeError_SetEnd(PyObject *, Py_ssize_t);
int PyUnicodeTranslateError_SetEnd(PyObject *, Py_ssize_t);
PyObject * PyUnicodeEncodeError_GetReason(PyObject *);
PyObject * PyUnicodeDecodeError_GetReason(PyObject *);
PyObject * PyUnicodeTranslateError_GetReason(PyObject *);
int PyUnicodeEncodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
int PyUnicodeDecodeError_SetReason(
    PyObject *exc,
    const char *reason
    );
int PyUnicodeTranslateError_SetReason(
    PyObject *exc,
    const char *reason
    );
int PyOS_snprintf(char *str, size_t size, const char *format, ...)
                        __attribute__((format(printf, 3, 4)));
int PyOS_vsnprintf(char *str, size_t size, const char *format, va_list va)
                        __attribute__((format(printf, 3, 0)));
typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
} PyBaseExceptionObject;
typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *filename;
    PyObject *lineno;
    PyObject *offset;
    PyObject *text;
    PyObject *print_file_and_line;
} PySyntaxErrorObject;
typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *msg;
    PyObject *name;
    PyObject *path;
} PyImportErrorObject;
typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *encoding;
    PyObject *object;
    Py_ssize_t start;
    Py_ssize_t end;
    PyObject *reason;
} PyUnicodeErrorObject;
typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *code;
} PySystemExitObject;
typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *myerrno;
    PyObject *strerror;
    PyObject *filename;
    PyObject *filename2;
    Py_ssize_t written;
} PyOSErrorObject;
typedef struct {
    PyObject ob_base; PyObject *dict; PyObject *args; PyObject *traceback; PyObject *context; PyObject *cause; char suppress_context;
    PyObject *value;
} PyStopIterationObject;
typedef PyOSErrorObject PyEnvironmentErrorObject;
void _PyErr_SetKeyError(PyObject *);
_PyErr_StackItem *_PyErr_GetTopmostException(PyThreadState *tstate);
void _PyErr_ChainExceptions(PyObject *, PyObject *, PyObject *);
PyObject * _PyErr_FormatFromCause(
    PyObject *exception,
    const char *format,
    ...
    );
PyObject * _PyErr_TrySetFromCause(
    const char *prefix_format,
    ...
    );
int PySignal_SetWakeupFd(int fd);
int _PyErr_CheckSignals(void);
void PyErr_SyntaxLocationObject(
    PyObject *filename,
    int lineno,
    int col_offset);
PyObject * PyErr_ProgramTextObject(
    PyObject *filename,
    int lineno);
__attribute__((__deprecated__)) PyObject * PyUnicodeEncodeError_Create(
    const char *encoding,
    const Py_UNICODE *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );
__attribute__((__deprecated__)) PyObject * PyUnicodeTranslateError_Create(
    const Py_UNICODE *object,
    Py_ssize_t length,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );
PyObject * _PyUnicodeTranslateError_Create(
    PyObject *object,
    Py_ssize_t start,
    Py_ssize_t end,
    const char *reason
    );
void _PyErr_WriteUnraisableMsg(
    const char *err_msg,
    PyObject *obj);
extern PyTypeObject PyContext_Type;
typedef struct _pycontextobject PyContext;
extern PyTypeObject PyContextVar_Type;
typedef struct _pycontextvarobject PyContextVar;
extern PyTypeObject PyContextToken_Type;
typedef struct _pycontexttokenobject PyContextToken;
PyObject * PyContext_New(void);
PyObject * PyContext_Copy(PyObject *);
PyObject * PyContext_CopyCurrent(void);
int PyContext_Enter(PyObject *);
int PyContext_Exit(PyObject *);
PyObject * PyContextVar_New(
    const char *name, PyObject *default_value);
int PyContextVar_Get(
    PyObject *var, PyObject *default_value, PyObject **value);
PyObject * PyContextVar_Set(PyObject *var, PyObject *value);
int PyContextVar_Reset(PyObject *var, PyObject *token);
PyObject * _PyContext_NewHamtForTests(void);
int PyContext_ClearFreeList(void);
  typedef struct _arena PyArena;
  PyArena * PyArena_New(void);
  void PyArena_Free(PyArena *);
  void * PyArena_Malloc(PyArena *, size_t size);
  int PyArena_AddPyObject(PyArena *, PyObject *);
PyObject * _Py_VaBuildValue_SizeT(const char *, va_list);
PyObject ** _Py_VaBuildStack_SizeT(
    PyObject **small_stack,
    Py_ssize_t small_stack_len,
    const char *format,
    va_list va,
    Py_ssize_t *p_nargs);
int PyArg_Parse(PyObject *, const char *, ...);
int PyArg_ParseTuple(PyObject *, const char *, ...);
int PyArg_ParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, ...);
int PyArg_VaParse(PyObject *, const char *, va_list);
int PyArg_VaParseTupleAndKeywords(PyObject *, PyObject *,
                                                  const char *, char **, va_list);
int PyArg_ValidateKeywordArguments(PyObject *);
int PyArg_UnpackTuple(PyObject *, const char *, Py_ssize_t, Py_ssize_t, ...);
PyObject * Py_BuildValue(const char *, ...);
PyObject * _Py_BuildValue_SizeT(const char *, ...);
int _PyArg_UnpackStack(
    PyObject *const *args,
    Py_ssize_t nargs,
    const char *name,
    Py_ssize_t min,
    Py_ssize_t max,
    ...);
int _PyArg_NoKeywords(const char *funcname, PyObject *kwargs);
int _PyArg_NoPositional(const char *funcname, PyObject *args);
void _PyArg_BadArgument(const char *, const char *, const char *, PyObject *);
int _PyArg_CheckPositional(const char *, Py_ssize_t,
                                       Py_ssize_t, Py_ssize_t);
PyObject * Py_VaBuildValue(const char *, va_list);
PyObject ** _Py_VaBuildStack(
    PyObject **small_stack,
    Py_ssize_t small_stack_len,
    const char *format,
    va_list va,
    Py_ssize_t *p_nargs);
typedef struct _PyArg_Parser {
    const char *format;
    const char * const *keywords;
    const char *fname;
    const char *custom_msg;
    int pos;
    int min;
    int max;
    PyObject *kwtuple;
    struct _PyArg_Parser *next;
} _PyArg_Parser;
int _PyArg_ParseTupleAndKeywordsFast(PyObject *, PyObject *,
                                                 struct _PyArg_Parser *, ...);
int _PyArg_ParseStack(
    PyObject *const *args,
    Py_ssize_t nargs,
    const char *format,
    ...);
int _PyArg_ParseStackAndKeywords(
    PyObject *const *args,
    Py_ssize_t nargs,
    PyObject *kwnames,
    struct _PyArg_Parser *,
    ...);
int _PyArg_VaParseTupleAndKeywordsFast(PyObject *, PyObject *,
                                                   struct _PyArg_Parser *, va_list);
PyObject * const * _PyArg_UnpackKeywords(
        PyObject *const *args, Py_ssize_t nargs,
        PyObject *kwargs, PyObject *kwnames,
        struct _PyArg_Parser *parser,
        int minpos, int maxpos, int minkw,
        PyObject **buf);
void _PyArg_Fini(void);
int PyModule_AddObject(PyObject *, const char *, PyObject *);
int PyModule_AddIntConstant(PyObject *, const char *, long);
int PyModule_AddStringConstant(PyObject *, const char *, const char *);
int PyModule_SetDocString(PyObject *, const char *);
int PyModule_AddFunctions(PyObject *, PyMethodDef *);
int PyModule_ExecDef(PyObject *module, PyModuleDef *def);
PyObject * PyModule_Create2(struct PyModuleDef*,
                                     int apiver);
PyObject * _PyModule_CreateInitialized(struct PyModuleDef*,
                                                   int apiver);
PyObject * PyModule_FromDefAndSpec2(PyModuleDef *def,
                                                PyObject *spec,
                                                int module_api_version);
extern const char * _Py_PackageContext;
typedef uint16_t _Py_CODEUNIT;
typedef struct _PyOpcache _PyOpcache;
typedef struct {
    PyObject ob_base;
    int co_argcount;
    int co_posonlyargcount;
    int co_kwonlyargcount;
    int co_nlocals;
    int co_stacksize;
    int co_flags;
    int co_firstlineno;
    PyObject *co_code;
    PyObject *co_consts;
    PyObject *co_names;
    PyObject *co_varnames;
    PyObject *co_freevars;
    PyObject *co_cellvars;
    Py_ssize_t *co_cell2arg;
    PyObject *co_filename;
    PyObject *co_name;
    PyObject *co_lnotab;
    void *co_zombieframe;
    PyObject *co_weakreflist;
    void *co_extra;
    unsigned char *co_opcache_map;
    _PyOpcache *co_opcache;
    int co_opcache_flag;
    unsigned char co_opcache_size;
} PyCodeObject;
extern PyTypeObject PyCode_Type;
PyCodeObject * PyCode_New(
        int, int, int, int, int, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, PyObject *,
        PyObject *, PyObject *, int, PyObject *);
PyCodeObject * PyCode_NewWithPosOnlyArgs(
        int, int, int, int, int, int, PyObject *, PyObject *,
        PyObject *, PyObject *, PyObject *, PyObject *,
        PyObject *, PyObject *, int, PyObject *);
PyCodeObject *
PyCode_NewEmpty(const char *filename, const char *funcname, int firstlineno);
int PyCode_Addr2Line(PyCodeObject *, int);
typedef struct _addr_pair {
        int ap_lower;
        int ap_upper;
} PyAddrPair;
int _PyCode_CheckLineNumber(PyCodeObject* co,
                                        int lasti, PyAddrPair *bounds);
PyObject* _PyCode_ConstantKey(PyObject *obj);
PyObject* PyCode_Optimize(PyObject *code, PyObject* consts,
                                      PyObject *names, PyObject *lnotab);
int _PyCode_GetExtra(PyObject *code, Py_ssize_t index,
                                 void **extra);
int _PyCode_SetExtra(PyObject *code, Py_ssize_t index,
                                 void *extra);
struct _node;
PyCodeObject * PyNode_Compile(struct _node *, const char *);
typedef struct {
    int cf_flags;
    int cf_feature_version;
} PyCompilerFlags;
typedef struct {
    int ff_features;
    int ff_lineno;
} PyFutureFeatures;
struct _mod;
PyCodeObject * PyAST_CompileEx(
    struct _mod *mod,
    const char *filename,
    PyCompilerFlags *flags,
    int optimize,
    PyArena *arena);
PyCodeObject * PyAST_CompileObject(
    struct _mod *mod,
    PyObject *filename,
    PyCompilerFlags *flags,
    int optimize,
    PyArena *arena);
PyFutureFeatures * PyFuture_FromAST(
    struct _mod * mod,
    const char *filename
    );
PyFutureFeatures * PyFuture_FromASTObject(
    struct _mod * mod,
    PyObject *filename
    );
PyObject* _Py_Mangle(PyObject *p, PyObject *name);
int PyCompile_OpcodeStackEffect(int opcode, int oparg);
int PyCompile_OpcodeStackEffectWithJump(int opcode, int oparg, int jump);
int _PyAST_Optimize(struct _mod *, PyArena *arena, int optimize);
int PyRun_SimpleStringFlags(const char *, PyCompilerFlags *);
int PyRun_AnyFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
int PyRun_SimpleFileExFlags(
    FILE *fp,
    const char *filename,
    int closeit,
    PyCompilerFlags *flags);
int PyRun_InteractiveOneFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);
int PyRun_InteractiveOneObject(
    FILE *fp,
    PyObject *filename,
    PyCompilerFlags *flags);
int PyRun_InteractiveLoopFlags(
    FILE *fp,
    const char *filename,
    PyCompilerFlags *flags);
struct _mod * PyParser_ASTFromString(
    const char *s,
    const char *filename,
    int start,
    PyCompilerFlags *flags,
    PyArena *arena);
struct _mod * PyParser_ASTFromStringObject(
    const char *s,
    PyObject *filename,
    int start,
    PyCompilerFlags *flags,
    PyArena *arena);
struct _mod * PyParser_ASTFromFile(
    FILE *fp,
    const char *filename,
    const char* enc,
    int start,
    const char *ps1,
    const char *ps2,
    PyCompilerFlags *flags,
    int *errcode,
    PyArena *arena);
struct _mod * PyParser_ASTFromFileObject(
    FILE *fp,
    PyObject *filename,
    const char* enc,
    int start,
    const char *ps1,
    const char *ps2,
    PyCompilerFlags *flags,
    int *errcode,
    PyArena *arena);
struct _node * PyParser_SimpleParseStringFlags(const char *, int,
                                                           int);
struct _node * PyParser_SimpleParseStringFlagsFilename(const char *,
                                                                   const char *,
                                                                   int, int);
struct _node * PyParser_SimpleParseFileFlags(FILE *, const char *,
                                                         int, int);
PyObject * PyRun_StringFlags(const char *, int, PyObject *,
                                         PyObject *, PyCompilerFlags *);
PyObject * PyRun_FileExFlags(
    FILE *fp,
    const char *filename,
    int start,
    PyObject *globals,
    PyObject *locals,
    int closeit,
    PyCompilerFlags *flags);
PyObject * Py_CompileStringExFlags(
    const char *str,
    const char *filename,
    int start,
    PyCompilerFlags *flags,
    int optimize);
PyObject * Py_CompileStringObject(
    const char *str,
    PyObject *filename, int start,
    PyCompilerFlags *flags,
    int optimize);
struct symtable * Py_SymtableString(
    const char *str,
    const char *filename,
    int start);
const char * _Py_SourceAsString(
    PyObject *cmd,
    const char *funcname,
    const char *what,
    PyCompilerFlags *cf,
    PyObject **cmd_copy);
struct symtable * Py_SymtableStringObject(
    const char *str,
    PyObject *filename,
    int start);
struct symtable * _Py_SymtableStringObjectFlags(
    const char *str,
    PyObject *filename,
    int start,
    PyCompilerFlags *flags);
void PyErr_Print(void);
void PyErr_PrintEx(int);
void PyErr_Display(PyObject *, PyObject *, PyObject *);
PyObject * PyRun_String(const char *str, int s, PyObject *g, PyObject *l);
int PyRun_AnyFile(FILE *fp, const char *name);
int PyRun_AnyFileEx(FILE *fp, const char *name, int closeit);
int PyRun_AnyFileFlags(FILE *, const char *, PyCompilerFlags *);
int PyRun_SimpleString(const char *s);
int PyRun_SimpleFile(FILE *f, const char *p);
int PyRun_SimpleFileEx(FILE *f, const char *p, int c);
int PyRun_InteractiveOne(FILE *f, const char *p);
int PyRun_InteractiveLoop(FILE *f, const char *p);
PyObject * PyRun_File(FILE *fp, const char *p, int s, PyObject *g, PyObject *l);
PyObject * PyRun_FileEx(FILE *fp, const char *p, int s, PyObject *g, PyObject *l, int c);
PyObject * PyRun_FileFlags(FILE *fp, const char *p, int s, PyObject *g, PyObject *l, PyCompilerFlags *flags);
char * PyOS_Readline(FILE *, FILE *, const char *);
extern int (*PyOS_InputHook)(void);
extern char *(*PyOS_ReadlineFunctionPointer)(FILE *, FILE *, const char *);
extern PyThreadState* _PyOS_ReadlineTState;
void Py_Initialize(void);
void Py_InitializeEx(int);
void Py_Finalize(void);
int Py_FinalizeEx(void);
int Py_IsInitialized(void);
PyThreadState * Py_NewInterpreter(void);
void Py_EndInterpreter(PyThreadState *);
int Py_AtExit(void (*func)(void));
void __attribute__((__noreturn__)) Py_Exit(int);
int Py_Main(int argc, wchar_t **argv);
int Py_BytesMain(int argc, char **argv);
void Py_SetProgramName(const wchar_t *);
wchar_t * Py_GetProgramName(void);
void Py_SetPythonHome(const wchar_t *);
wchar_t * Py_GetPythonHome(void);
wchar_t * Py_GetProgramFullPath(void);
wchar_t * Py_GetPrefix(void);
wchar_t * Py_GetExecPrefix(void);
wchar_t * Py_GetPath(void);
void Py_SetPath(const wchar_t *);
const char * Py_GetVersion(void);
const char * Py_GetPlatform(void);
const char * Py_GetCopyright(void);
const char * Py_GetCompiler(void);
const char * Py_GetBuildInfo(void);
typedef void (*PyOS_sighandler_t)(int);
PyOS_sighandler_t PyOS_getsig(int);
PyOS_sighandler_t PyOS_setsig(int, PyOS_sighandler_t);
int Py_SetStandardStreamEncoding(const char *encoding,
                                             const char *errors);
PyStatus Py_PreInitialize(
    const PyPreConfig *src_config);
PyStatus Py_PreInitializeFromBytesArgs(
    const PyPreConfig *src_config,
    Py_ssize_t argc,
    char **argv);
PyStatus Py_PreInitializeFromArgs(
    const PyPreConfig *src_config,
    Py_ssize_t argc,
    wchar_t **argv);
int _Py_IsCoreInitialized(void);
PyStatus Py_InitializeFromConfig(
    const PyConfig *config);
PyStatus _Py_InitializeFromArgs(
    const PyConfig *config,
    Py_ssize_t argc,
    char * const *argv);
PyStatus _Py_InitializeFromWideArgs(
    const PyConfig *config,
    Py_ssize_t argc,
    wchar_t * const *argv);
PyStatus _Py_InitializeMain(void);
int Py_RunMain(void);
void __attribute__((__noreturn__)) Py_ExitStatusException(PyStatus err);
void _Py_PyAtExit(void (*func)(PyObject *), PyObject *);
void _Py_RestoreSignals(void);
int Py_FdIsInteractive(FILE *, const char *);
void _Py_SetProgramFullPath(const wchar_t *);
const char * _Py_gitidentifier(void);
const char * _Py_gitversion(void);
int _Py_IsFinalizing(void);
int _PyOS_URandom(void *buffer, Py_ssize_t size);
int _PyOS_URandomNonblock(void *buffer, Py_ssize_t size);
int _Py_CoerceLegacyLocale(int warn);
int _Py_LegacyLocaleDetected(int warn);
char * _Py_SetLocaleFromEnv(int category);
PyObject * PyEval_CallObjectWithKeywords(
    PyObject *callable,
    PyObject *args,
    PyObject *kwargs);
PyObject * PyEval_CallFunction(PyObject *callable,
                                           const char *format, ...);
PyObject * PyEval_CallMethod(PyObject *obj,
                                         const char *name,
                                         const char *format, ...);
void PyEval_SetProfile(Py_tracefunc, PyObject *);
void PyEval_SetTrace(Py_tracefunc, PyObject *);
void _PyEval_SetCoroutineOriginTrackingDepth(int new_depth);
int _PyEval_GetCoroutineOriginTrackingDepth(void);
void _PyEval_SetAsyncGenFirstiter(PyObject *);
PyObject * _PyEval_GetAsyncGenFirstiter(void);
void _PyEval_SetAsyncGenFinalizer(PyObject *);
PyObject * _PyEval_GetAsyncGenFinalizer(void);
struct _frame;
PyObject * PyEval_GetBuiltins(void);
PyObject * PyEval_GetGlobals(void);
PyObject * PyEval_GetLocals(void);
struct _frame * PyEval_GetFrame(void);
PyObject * _PyEval_GetBuiltinId(_Py_Identifier *);
int PyEval_MergeCompilerFlags(PyCompilerFlags *cf);
int Py_AddPendingCall(int (*func)(void *), void *arg);
int Py_MakePendingCalls(void);
void Py_SetRecursionLimit(int);
int Py_GetRecursionLimit(void);
int _Py_CheckRecursiveCall(const char *where);
extern int _Py_CheckRecursionLimit;
const char * PyEval_GetFuncName(PyObject *);
const char * PyEval_GetFuncDesc(PyObject *);
PyObject * PyEval_EvalFrame(struct _frame *);
PyObject * PyEval_EvalFrameEx(struct _frame *f, int exc);
PyObject * _PyEval_EvalFrameDefault(struct _frame *f, int exc);
PyThreadState * PyEval_SaveThread(void);
void PyEval_RestoreThread(PyThreadState *);
int PyEval_ThreadsInitialized(void);
void PyEval_InitThreads(void);
__attribute__((__deprecated__)) void PyEval_AcquireLock(void);
                         void PyEval_ReleaseLock(void);
void PyEval_AcquireThread(PyThreadState *tstate);
void PyEval_ReleaseThread(PyThreadState *tstate);
void _PyEval_SetSwitchInterval(unsigned long microseconds);
unsigned long _PyEval_GetSwitchInterval(void);
Py_ssize_t _PyEval_RequestCodeExtraIndex(freefunc);
int _PyEval_SliceIndex(PyObject *, Py_ssize_t *);
int _PyEval_SliceIndexNotNone(PyObject *, Py_ssize_t *);
PyObject * PySys_GetObject(const char *);
int PySys_SetObject(const char *, PyObject *);
void PySys_SetArgv(int, wchar_t **);
void PySys_SetArgvEx(int, wchar_t **, int);
void PySys_SetPath(const wchar_t *);
void PySys_WriteStdout(const char *format, ...)
                 __attribute__((format(printf, 1, 2)));
void PySys_WriteStderr(const char *format, ...)
                 __attribute__((format(printf, 1, 2)));
void PySys_FormatStdout(const char *format, ...);
void PySys_FormatStderr(const char *format, ...);
void PySys_ResetWarnOptions(void);
void PySys_AddWarnOption(const wchar_t *);
void PySys_AddWarnOptionUnicode(PyObject *);
int PySys_HasWarnOptions(void);
void PySys_AddXOption(const wchar_t *);
PyObject * PySys_GetXOptions(void);
PyObject * _PySys_GetObjectId(_Py_Identifier *key);
int _PySys_SetObjectId(_Py_Identifier *key, PyObject *);
size_t _PySys_GetSizeOf(PyObject *);
typedef int(*Py_AuditHookFunction)(const char *, PyObject *, void *);
int PySys_Audit(const char*, const char *, ...);
int PySys_AddAuditHook(Py_AuditHookFunction, void*);
PyObject * PyOS_FSPath(PyObject *path);
int PyOS_InterruptOccurred(void);
void PyOS_InitInterrupts(void);
void PyOS_BeforeFork(void);
void PyOS_AfterFork_Parent(void);
void PyOS_AfterFork_Child(void);
__attribute__((__deprecated__)) void PyOS_AfterFork(void);
int _PyOS_IsMainThread(void);
void _PySignal_AfterFork(void);
PyObject* PyInit__imp(void);
long PyImport_GetMagicNumber(void);
const char * PyImport_GetMagicTag(void);
PyObject * PyImport_ExecCodeModule(
    const char *name,
    PyObject *co
    );
PyObject * PyImport_ExecCodeModuleEx(
    const char *name,
    PyObject *co,
    const char *pathname
    );
PyObject * PyImport_ExecCodeModuleWithPathnames(
    const char *name,
    PyObject *co,
    const char *pathname,
    const char *cpathname
    );
PyObject * PyImport_ExecCodeModuleObject(
    PyObject *name,
    PyObject *co,
    PyObject *pathname,
    PyObject *cpathname
    );
PyObject * PyImport_GetModuleDict(void);
PyObject * PyImport_GetModule(PyObject *name);
int _PyImport_IsInitialized(PyInterpreterState *);
PyObject * _PyImport_GetModuleId(struct _Py_Identifier *name);
PyObject * _PyImport_AddModuleObject(PyObject *name,
                                                 PyObject *modules);
int _PyImport_SetModule(PyObject *name, PyObject *module);
int _PyImport_SetModuleString(const char *name, PyObject* module);
PyObject * PyImport_AddModuleObject(
    PyObject *name
    );
PyObject * PyImport_AddModule(
    const char *name
    );
PyObject * PyImport_ImportModule(
    const char *name
    );
PyObject * PyImport_ImportModuleNoBlock(
    const char *name
    );
PyObject * PyImport_ImportModuleLevel(
    const char *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );
PyObject * PyImport_ImportModuleLevelObject(
    PyObject *name,
    PyObject *globals,
    PyObject *locals,
    PyObject *fromlist,
    int level
    );
PyObject * PyImport_GetImporter(PyObject *path);
PyObject * PyImport_Import(PyObject *name);
PyObject * PyImport_ReloadModule(PyObject *m);
void PyImport_Cleanup(void);
int PyImport_ImportFrozenModuleObject(
    PyObject *name
    );
int PyImport_ImportFrozenModule(
    const char *name
    );
void _PyImport_AcquireLock(void);
int _PyImport_ReleaseLock(void);
void _PyImport_ReInitLock(void);
PyObject * _PyImport_FindBuiltin(
    const char *name,
    PyObject *modules
    );
PyObject * _PyImport_FindExtensionObject(PyObject *, PyObject *);
PyObject * _PyImport_FindExtensionObjectEx(PyObject *, PyObject *,
                                                       PyObject *);
int _PyImport_FixupBuiltin(
    PyObject *mod,
    const char *name,
    PyObject *modules
    );
int _PyImport_FixupExtensionObject(PyObject*, PyObject *,
                                               PyObject *, PyObject *);
struct _inittab {
    const char *name;
    PyObject* (*initfunc)(void);
};
extern struct _inittab * PyImport_Inittab;
int PyImport_ExtendInittab(struct _inittab *newtab);
extern PyTypeObject PyNullImporter_Type;
int PyImport_AppendInittab(
    const char *name,
    PyObject* (*initfunc)(void)
    );
struct _frozen {
    const char *name;
    const unsigned char *code;
    int size;
};
extern const struct _frozen * PyImport_FrozenModules;
PyObject * PyObject_Call(PyObject *callable,
                                     PyObject *args, PyObject *kwargs);
PyObject * PyObject_CallObject(PyObject *callable,
                                           PyObject *args);
PyObject * PyObject_CallFunction(PyObject *callable,
                                             const char *format, ...);
PyObject * PyObject_CallMethod(PyObject *obj,
                                           const char *name,
                                           const char *format, ...);
PyObject * _PyObject_CallFunction_SizeT(PyObject *callable,
                                                    const char *format,
                                                    ...);
PyObject * _PyObject_CallMethod_SizeT(PyObject *obj,
                                                  const char *name,
                                                  const char *format,
                                                  ...);
PyObject * PyObject_CallFunctionObjArgs(PyObject *callable,
                                                    ...);
PyObject * PyObject_CallMethodObjArgs(
    PyObject *obj,
    PyObject *name,
    ...);
PyObject * PyObject_Type(PyObject *o);
Py_ssize_t PyObject_Size(PyObject *o);
Py_ssize_t PyObject_Length(PyObject *o);
PyObject * PyObject_GetItem(PyObject *o, PyObject *key);
int PyObject_SetItem(PyObject *o, PyObject *key, PyObject *v);
int PyObject_DelItemString(PyObject *o, const char *key);
int PyObject_DelItem(PyObject *o, PyObject *key);
__attribute__((__deprecated__))
int PyObject_AsCharBuffer(PyObject *obj,
                                      const char **buffer,
                                      Py_ssize_t *buffer_len);
__attribute__((__deprecated__)) int PyObject_CheckReadBuffer(PyObject *obj);
__attribute__((__deprecated__))
int PyObject_AsReadBuffer(PyObject *obj,
                                      const void **buffer,
                                      Py_ssize_t *buffer_len);
__attribute__((__deprecated__))
int PyObject_AsWriteBuffer(PyObject *obj,
                                       void **buffer,
                                       Py_ssize_t *buffer_len);
PyObject * PyObject_Format(PyObject *obj,
                                       PyObject *format_spec);
PyObject * PyObject_GetIter(PyObject *);
int PyIter_Check(PyObject *);
PyObject * PyIter_Next(PyObject *);
int PyNumber_Check(PyObject *o);
PyObject * PyNumber_Add(PyObject *o1, PyObject *o2);
PyObject * PyNumber_Subtract(PyObject *o1, PyObject *o2);
PyObject * PyNumber_Multiply(PyObject *o1, PyObject *o2);
PyObject * PyNumber_MatrixMultiply(PyObject *o1, PyObject *o2);
PyObject * PyNumber_FloorDivide(PyObject *o1, PyObject *o2);
PyObject * PyNumber_TrueDivide(PyObject *o1, PyObject *o2);
PyObject * PyNumber_Remainder(PyObject *o1, PyObject *o2);
PyObject * PyNumber_Divmod(PyObject *o1, PyObject *o2);
PyObject * PyNumber_Power(PyObject *o1, PyObject *o2,
                                      PyObject *o3);
PyObject * PyNumber_Negative(PyObject *o);
PyObject * PyNumber_Positive(PyObject *o);
PyObject * PyNumber_Absolute(PyObject *o);
PyObject * PyNumber_Invert(PyObject *o);
PyObject * PyNumber_Lshift(PyObject *o1, PyObject *o2);
PyObject * PyNumber_Rshift(PyObject *o1, PyObject *o2);
PyObject * PyNumber_And(PyObject *o1, PyObject *o2);
PyObject * PyNumber_Xor(PyObject *o1, PyObject *o2);
PyObject * PyNumber_Or(PyObject *o1, PyObject *o2);
int PyIndex_Check(PyObject *);
PyObject * PyNumber_Index(PyObject *o);
Py_ssize_t PyNumber_AsSsize_t(PyObject *o, PyObject *exc);
PyObject * PyNumber_Long(PyObject *o);
PyObject * PyNumber_Float(PyObject *o);
PyObject * PyNumber_InPlaceAdd(PyObject *o1, PyObject *o2);
PyObject * PyNumber_InPlaceSubtract(PyObject *o1, PyObject *o2);
PyObject * PyNumber_InPlaceMultiply(PyObject *o1, PyObject *o2);
PyObject * PyNumber_InPlaceMatrixMultiply(PyObject *o1, PyObject *o2);
PyObject * PyNumber_InPlaceFloorDivide(PyObject *o1,
                                                   PyObject *o2);
PyObject * PyNumber_InPlaceTrueDivide(PyObject *o1,
                                                  PyObject *o2);
PyObject * PyNumber_InPlaceRemainder(PyObject *o1, PyObject *o2);
PyObject * PyNumber_InPlacePower(PyObject *o1, PyObject *o2,
                                             PyObject *o3);
PyObject * PyNumber_InPlaceLshift(PyObject *o1, PyObject *o2);
PyObject * PyNumber_InPlaceRshift(PyObject *o1, PyObject *o2);
PyObject * PyNumber_InPlaceAnd(PyObject *o1, PyObject *o2);
PyObject * PyNumber_InPlaceXor(PyObject *o1, PyObject *o2);
PyObject * PyNumber_InPlaceOr(PyObject *o1, PyObject *o2);
PyObject * PyNumber_ToBase(PyObject *n, int base);
int PySequence_Check(PyObject *o);
Py_ssize_t PySequence_Size(PyObject *o);
Py_ssize_t PySequence_Length(PyObject *o);
PyObject * PySequence_Concat(PyObject *o1, PyObject *o2);
PyObject * PySequence_Repeat(PyObject *o, Py_ssize_t count);
PyObject * PySequence_GetItem(PyObject *o, Py_ssize_t i);
PyObject * PySequence_GetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);
int PySequence_SetItem(PyObject *o, Py_ssize_t i, PyObject *v);
int PySequence_DelItem(PyObject *o, Py_ssize_t i);
int PySequence_SetSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2,
                                    PyObject *v);
int PySequence_DelSlice(PyObject *o, Py_ssize_t i1, Py_ssize_t i2);
PyObject * PySequence_Tuple(PyObject *o);
PyObject * PySequence_List(PyObject *o);
PyObject * PySequence_Fast(PyObject *o, const char* m);
Py_ssize_t PySequence_Count(PyObject *o, PyObject *value);
int PySequence_Contains(PyObject *seq, PyObject *ob);
int PySequence_In(PyObject *o, PyObject *value);
Py_ssize_t PySequence_Index(PyObject *o, PyObject *value);
PyObject * PySequence_InPlaceConcat(PyObject *o1, PyObject *o2);
PyObject * PySequence_InPlaceRepeat(PyObject *o, Py_ssize_t count);
int PyMapping_Check(PyObject *o);
Py_ssize_t PyMapping_Size(PyObject *o);
Py_ssize_t PyMapping_Length(PyObject *o);
int PyMapping_HasKeyString(PyObject *o, const char *key);
int PyMapping_HasKey(PyObject *o, PyObject *key);
PyObject * PyMapping_Keys(PyObject *o);
PyObject * PyMapping_Values(PyObject *o);
PyObject * PyMapping_Items(PyObject *o);
PyObject * PyMapping_GetItemString(PyObject *o,
                                               const char *key);
int PyMapping_SetItemString(PyObject *o, const char *key,
                                        PyObject *value);
int PyObject_IsInstance(PyObject *object, PyObject *typeorclass);
int PyObject_IsSubclass(PyObject *object, PyObject *typeorclass);
PyObject * _PyStack_AsDict(
    PyObject *const *values,
    PyObject *kwnames);
int _PyStack_UnpackDict(
    PyObject *const *args,
    Py_ssize_t nargs,
    PyObject *kwargs,
    PyObject *const **p_stack,
    PyObject **p_kwnames);
PyObject * _Py_CheckFunctionResult(PyObject *callable,
                                               PyObject *result,
                                               const char *where);
PyObject * _PyObject_MakeTpCall(
    PyObject *callable,
    PyObject *const *args, Py_ssize_t nargs,
    PyObject *keywords);
static inline Py_ssize_t
PyVectorcall_NARGS(size_t n)
{
    return n & ~((size_t)1 << (8 * sizeof(size_t) - 1));
}
static inline vectorcallfunc
_PyVectorcall_Function(PyObject *callable)
{
    PyTypeObject *tp = (((PyObject*)(callable))->ob_type);
    Py_ssize_t offset = tp->tp_vectorcall_offset;
    vectorcallfunc ptr;
    if (!(((tp)->tp_flags & ((1UL << 11))) != 0)) {
        return ((void *)0);
    }
    ((void) sizeof ((PyCallable_Check(callable)) ? 1 : 0), __extension__ ({ if (PyCallable_Check(callable)) ; else __assert_fail ("PyCallable_Check(callable)", "Include/cpython/abstract.h", 89, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((offset > 0) ? 1 : 0), __extension__ ({ if (offset > 0) ; else __assert_fail ("offset > 0", "Include/cpython/abstract.h", 90, __extension__ __PRETTY_FUNCTION__); }));
    memcpy(&ptr, (char *) callable + offset, sizeof(ptr));
    return ptr;
}
static inline PyObject *
_PyObject_Vectorcall(PyObject *callable, PyObject *const *args,
                     size_t nargsf, PyObject *kwnames)
{
    PyObject *res;
    vectorcallfunc func;
    ((void) sizeof ((kwnames == ((void *)0) || ((((((PyObject*)(kwnames))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (kwnames == ((void *)0) || ((((((PyObject*)(kwnames))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("kwnames == NULL || PyTuple_Check(kwnames)", "Include/cpython/abstract.h", 120, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((args != ((void *)0) || PyVectorcall_NARGS(nargsf) == 0) ? 1 : 0), __extension__ ({ if (args != ((void *)0) || PyVectorcall_NARGS(nargsf) == 0) ; else __assert_fail ("args != NULL || PyVectorcall_NARGS(nargsf) == 0", "Include/cpython/abstract.h", 121, __extension__ __PRETTY_FUNCTION__); }));
    func = _PyVectorcall_Function(callable);
    if (func == ((void *)0)) {
        Py_ssize_t nargs = PyVectorcall_NARGS(nargsf);
        return _PyObject_MakeTpCall(callable, args, nargs, kwnames);
    }
    res = func(callable, args, nargsf, kwnames);
    return _Py_CheckFunctionResult(callable, res, ((void *)0));
}
PyObject * _PyObject_FastCallDict(
    PyObject *callable,
    PyObject *const *args,
    size_t nargsf,
    PyObject *kwargs);
PyObject * PyVectorcall_Call(PyObject *callable, PyObject *tuple, PyObject *dict);
static inline PyObject *
_PyObject_FastCall(PyObject *func, PyObject *const *args, Py_ssize_t nargs)
{
    return _PyObject_Vectorcall(func, args, (size_t)nargs, ((void *)0));
}
static inline PyObject *
_PyObject_CallNoArg(PyObject *func) {
    return _PyObject_Vectorcall(func, ((void *)0), 0, ((void *)0));
}
PyObject * _PyObject_Call_Prepend(
    PyObject *callable,
    PyObject *obj,
    PyObject *args,
    PyObject *kwargs);
PyObject * _PyObject_FastCall_Prepend(
    PyObject *callable,
    PyObject *obj,
    PyObject *const *args,
    Py_ssize_t nargs);
PyObject * _PyObject_CallMethodId(PyObject *obj,
                                              _Py_Identifier *name,
                                              const char *format, ...);
PyObject * _PyObject_CallMethodId_SizeT(PyObject *obj,
                                                    _Py_Identifier *name,
                                                    const char *format,
                                                    ...);
PyObject * _PyObject_CallMethodIdObjArgs(
    PyObject *obj,
    struct _Py_Identifier *name,
    ...);
int _PyObject_HasLen(PyObject *o);
Py_ssize_t PyObject_LengthHint(PyObject *o, Py_ssize_t);
int PyObject_GetBuffer(PyObject *obj, Py_buffer *view,
                                   int flags);
void * PyBuffer_GetPointer(Py_buffer *view, Py_ssize_t *indices);
int PyBuffer_SizeFromFormat(const char *);
int PyBuffer_ToContiguous(void *buf, Py_buffer *view,
                                      Py_ssize_t len, char order);
int PyBuffer_FromContiguous(Py_buffer *view, void *buf,
                                        Py_ssize_t len, char order);
int PyObject_CopyData(PyObject *dest, PyObject *src);
int PyBuffer_IsContiguous(const Py_buffer *view, char fort);
void PyBuffer_FillContiguousStrides(int ndims,
                                               Py_ssize_t *shape,
                                               Py_ssize_t *strides,
                                               int itemsize,
                                               char fort);
int PyBuffer_FillInfo(Py_buffer *view, PyObject *o, void *buf,
                                  Py_ssize_t len, int readonly,
                                  int flags);
void PyBuffer_Release(Py_buffer *view);
Py_ssize_t _PySequence_IterSearch(PyObject *seq,
                                              PyObject *obj, int operation);
int _PyObject_RealIsInstance(PyObject *inst, PyObject *cls);
int _PyObject_RealIsSubclass(PyObject *derived, PyObject *cls);
char *const * _PySequence_BytesToCharpArray(PyObject* self);
void _Py_FreeCharPArray(char *const array[]);
void _Py_add_one_to_index_F(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);
void _Py_add_one_to_index_C(int nd, Py_ssize_t *index,
                                        const Py_ssize_t *shape);
int _Py_convert_optional_to_ssize_t(PyObject *, void *);
extern PyTypeObject PyFilter_Type;
extern PyTypeObject PyMap_Type;
extern PyTypeObject PyZip_Type;
PyObject * PyEval_EvalCode(PyObject *, PyObject *, PyObject *);
PyObject * PyEval_EvalCodeEx(PyObject *co,
                                         PyObject *globals,
                                         PyObject *locals,
                                         PyObject *const *args, int argc,
                                         PyObject *const *kwds, int kwdc,
                                         PyObject *const *defs, int defc,
                                         PyObject *kwdefs, PyObject *closure);
PyObject * _PyEval_EvalCodeWithName(
    PyObject *co,
    PyObject *globals, PyObject *locals,
    PyObject *const *args, Py_ssize_t argcount,
    PyObject *const *kwnames, PyObject *const *kwargs,
    Py_ssize_t kwcount, int kwstep,
    PyObject *const *defs, Py_ssize_t defcount,
    PyObject *kwdefs, PyObject *closure,
    PyObject *name, PyObject *qualname);
PyObject * _PyEval_CallTracing(PyObject *func, PyObject *args);
extern const unsigned int _Py_ctype_table[256];
extern const unsigned char _Py_ctype_tolower[256];
extern const unsigned char _Py_ctype_toupper[256];
double PyOS_string_to_double(const char *str,
                                         char **endptr,
                                         PyObject *overflow_exception);
char * PyOS_double_to_string(double val,
                                         char format_code,
                                         int precision,
                                         int flags,
                                         int *type);
PyObject * _Py_string_to_number_with_underscores(
    const char *str, Py_ssize_t len, const char *what, PyObject *obj, void *arg,
    PyObject *(*innerfunc)(const char *, Py_ssize_t, void *));
double _Py_parse_inf_or_nan(const char *p, char **endptr);
int PyOS_mystrnicmp(const char *, const char *, Py_ssize_t);
int PyOS_mystricmp(const char *, const char *);
double _Py_dg_strtod(const char *str, char **ptr);
char * _Py_dg_dtoa(double d, int mode, int ndigits,
                        int *decpt, int *sign, char **rve);
void _Py_dg_freedtoa(char *s);
double _Py_dg_stdnan(int sign);
double _Py_dg_infinity(int sign);
wchar_t * Py_DecodeLocale(
    const char *arg,
    size_t *size);
char* Py_EncodeLocale(
    const wchar_t *text,
    size_t *error_pos);
char* _Py_EncodeLocaleRaw(
    const wchar_t *text,
    size_t *error_pos);
typedef enum {
    _Py_ERROR_UNKNOWN=0,
    _Py_ERROR_STRICT,
    _Py_ERROR_SURROGATEESCAPE,
    _Py_ERROR_REPLACE,
    _Py_ERROR_IGNORE,
    _Py_ERROR_BACKSLASHREPLACE,
    _Py_ERROR_SURROGATEPASS,
    _Py_ERROR_XMLCHARREFREPLACE,
    _Py_ERROR_OTHER
} _Py_error_handler;
_Py_error_handler _Py_GetErrorHandler(const char *errors);
int _Py_DecodeLocaleEx(
    const char *arg,
    wchar_t **wstr,
    size_t *wlen,
    const char **reason,
    int current_locale,
    _Py_error_handler errors);
int _Py_EncodeLocaleEx(
    const wchar_t *text,
    char **str,
    size_t *error_pos,
    const char **reason,
    int current_locale,
    _Py_error_handler errors);
PyObject * _Py_device_encoding(int);
int _Py_fstat(
    int fd,
    struct stat *status);
int _Py_fstat_noraise(
    int fd,
    struct stat *status);
int _Py_stat(
    PyObject *path,
    struct stat *status);
int _Py_open(
    const char *pathname,
    int flags);
int _Py_open_noraise(
    const char *pathname,
    int flags);
FILE * _Py_wfopen(
    const wchar_t *path,
    const wchar_t *mode);
FILE* _Py_fopen(
    const char *pathname,
    const char *mode);
FILE* _Py_fopen_obj(
    PyObject *path,
    const char *mode);
Py_ssize_t _Py_read(
    int fd,
    void *buf,
    size_t count);
Py_ssize_t _Py_write(
    int fd,
    const void *buf,
    size_t count);
Py_ssize_t _Py_write_noraise(
    int fd,
    const void *buf,
    size_t count);
int _Py_wreadlink(
    const wchar_t *path,
    wchar_t *buf,
    size_t buflen);
wchar_t* _Py_wrealpath(
    const wchar_t *path,
    wchar_t *resolved_path,
    size_t resolved_path_len);
wchar_t* _Py_wgetcwd(
    wchar_t *buf,
    size_t buflen);
int _Py_get_inheritable(int fd);
int _Py_set_inheritable(int fd, int inheritable,
                                    int *atomic_flag_works);
int _Py_set_inheritable_async_safe(int fd, int inheritable,
                                               int *atomic_flag_works);
int _Py_dup(int fd);
int _Py_get_blocking(int fd);
int _Py_set_blocking(int fd, int blocking);
int PyTraceMalloc_Track(
    unsigned int domain,
    uintptr_t ptr,
    size_t size);
int PyTraceMalloc_Untrack(
    unsigned int domain,
    uintptr_t ptr);
PyObject* _PyTraceMalloc_GetTraceback(
    unsigned int domain,
    uintptr_t ptr);
void AnnotateRWLockCreate(const char *file, int line,
                          const volatile void *lock);
void AnnotateRWLockDestroy(const char *file, int line,
                           const volatile void *lock);
void AnnotateRWLockAcquired(const char *file, int line,
                            const volatile void *lock, long is_w);
void AnnotateRWLockReleased(const char *file, int line,
                            const volatile void *lock, long is_w);
void AnnotateBarrierInit(const char *file, int line,
                         const volatile void *barrier, long count,
                         long reinitialization_allowed);
void AnnotateBarrierWaitBefore(const char *file, int line,
                               const volatile void *barrier);
void AnnotateBarrierWaitAfter(const char *file, int line,
                              const volatile void *barrier);
void AnnotateBarrierDestroy(const char *file, int line,
                            const volatile void *barrier);
void AnnotateCondVarWait(const char *file, int line,
                         const volatile void *cv,
                         const volatile void *lock);
void AnnotateCondVarSignal(const char *file, int line,
                           const volatile void *cv);
void AnnotateCondVarSignalAll(const char *file, int line,
                              const volatile void *cv);
void AnnotatePublishMemoryRange(const char *file, int line,
                                const volatile void *address,
                                long size);
void AnnotateUnpublishMemoryRange(const char *file, int line,
                                  const volatile void *address,
                                  long size);
void AnnotatePCQCreate(const char *file, int line,
                       const volatile void *pcq);
void AnnotatePCQDestroy(const char *file, int line,
                        const volatile void *pcq);
void AnnotatePCQPut(const char *file, int line,
                    const volatile void *pcq);
void AnnotatePCQGet(const char *file, int line,
                    const volatile void *pcq);
void AnnotateNewMemory(const char *file, int line,
                       const volatile void *address,
                       long size);
void AnnotateExpectRace(const char *file, int line,
                        const volatile void *address,
                        const char *description);
void AnnotateBenignRace(const char *file, int line,
                        const volatile void *address,
                        const char *description);
void AnnotateBenignRaceSized(const char *file, int line,
                        const volatile void *address,
                        long size,
                        const char *description);
void AnnotateMutexIsUsedAsCondVar(const char *file, int line,
                                  const volatile void *mu);
void AnnotateTraceMemory(const char *file, int line,
                         const volatile void *arg);
void AnnotateThreadName(const char *file, int line,
                        const char *name);
void AnnotateIgnoreReadsBegin(const char *file, int line);
void AnnotateIgnoreReadsEnd(const char *file, int line);
void AnnotateIgnoreWritesBegin(const char *file, int line);
void AnnotateIgnoreWritesEnd(const char *file, int line);
void AnnotateEnableRaceDetection(const char *file, int line, int enable);
void AnnotateNoOp(const char *file, int line,
                  const volatile void *arg);
void AnnotateFlushState(const char *file, int line);
int RunningOnValgrind(void);
typedef enum
  {
    memory_order_relaxed = 0,
    memory_order_consume = 1,
    memory_order_acquire = 2,
    memory_order_release = 3,
    memory_order_acq_rel = 4,
    memory_order_seq_cst = 5
  } memory_order;
typedef _Atomic _Bool atomic_bool;
typedef _Atomic char atomic_char;
typedef _Atomic signed char atomic_schar;
typedef _Atomic unsigned char atomic_uchar;
typedef _Atomic short atomic_short;
typedef _Atomic unsigned short atomic_ushort;
typedef _Atomic int atomic_int;
typedef _Atomic unsigned int atomic_uint;
typedef _Atomic long atomic_long;
typedef _Atomic unsigned long atomic_ulong;
typedef _Atomic long long atomic_llong;
typedef _Atomic unsigned long long atomic_ullong;
typedef _Atomic short unsigned int atomic_char16_t;
typedef _Atomic unsigned int atomic_char32_t;
typedef _Atomic int atomic_wchar_t;
typedef _Atomic signed char atomic_int_least8_t;
typedef _Atomic unsigned char atomic_uint_least8_t;
typedef _Atomic short int atomic_int_least16_t;
typedef _Atomic short unsigned int atomic_uint_least16_t;
typedef _Atomic int atomic_int_least32_t;
typedef _Atomic unsigned int atomic_uint_least32_t;
typedef _Atomic long int atomic_int_least64_t;
typedef _Atomic long unsigned int atomic_uint_least64_t;
typedef _Atomic signed char atomic_int_fast8_t;
typedef _Atomic unsigned char atomic_uint_fast8_t;
typedef _Atomic long int atomic_int_fast16_t;
typedef _Atomic long unsigned int atomic_uint_fast16_t;
typedef _Atomic long int atomic_int_fast32_t;
typedef _Atomic long unsigned int atomic_uint_fast32_t;
typedef _Atomic long int atomic_int_fast64_t;
typedef _Atomic long unsigned int atomic_uint_fast64_t;
typedef _Atomic long int atomic_intptr_t;
typedef _Atomic long unsigned int atomic_uintptr_t;
typedef _Atomic long unsigned int atomic_size_t;
typedef _Atomic long int atomic_ptrdiff_t;
typedef _Atomic long int atomic_intmax_t;
typedef _Atomic long unsigned int atomic_uintmax_t;
extern void atomic_thread_fence (memory_order);
extern void atomic_signal_fence (memory_order);
typedef _Atomic struct
{
  _Bool __val;
} atomic_flag;
extern _Bool atomic_flag_test_and_set (volatile atomic_flag *);
extern _Bool atomic_flag_test_and_set_explicit (volatile atomic_flag *,
      memory_order);
extern void atomic_flag_clear (volatile atomic_flag *);
extern void atomic_flag_clear_explicit (volatile atomic_flag *, memory_order);
typedef enum _Py_memory_order {
    _Py_memory_order_relaxed = memory_order_relaxed,
    _Py_memory_order_acquire = memory_order_acquire,
    _Py_memory_order_release = memory_order_release,
    _Py_memory_order_acq_rel = memory_order_acq_rel,
    _Py_memory_order_seq_cst = memory_order_seq_cst
} _Py_memory_order;
typedef struct _Py_atomic_address {
    atomic_uintptr_t _value;
} _Py_atomic_address;
typedef struct _Py_atomic_int {
    atomic_int _value;
} _Py_atomic_int;
struct _gil_runtime_state {
    unsigned long interval;
    _Py_atomic_address last_holder;
    _Py_atomic_int locked;
    unsigned long switch_number;
    pthread_cond_t cond;
    pthread_mutex_t mutex;
    pthread_cond_t switch_cond;
    pthread_mutex_t switch_mutex;
};
typedef struct _PyPathConfig {
    wchar_t *program_full_path;
    wchar_t *prefix;
    wchar_t *exec_prefix;
    wchar_t *module_search_path;
    wchar_t *program_name;
    wchar_t *home;
} _PyPathConfig;
extern _PyPathConfig _Py_path_config;
extern void _PyPathConfig_ClearGlobal(void);
extern PyStatus _PyPathConfig_SetGlobal(
    const struct _PyPathConfig *pathconfig);
extern PyStatus _PyPathConfig_Calculate(
    _PyPathConfig *pathconfig,
    const PyConfig *config);
extern int _PyPathConfig_ComputeSysPath0(
    const PyWideStringList *argv,
    PyObject **path0);
extern int _Py_FindEnvConfigValue(
    FILE *env_file,
    const wchar_t *key,
    wchar_t *value,
    size_t value_size);
extern PyStatus _PyConfig_WritePathConfig(const PyConfig *config);
extern void _Py_DumpPathConfig(PyThreadState *tstate);
struct gc_generation {
    PyGC_Head head;
    int threshold;
    int count;
};
struct gc_generation_stats {
    Py_ssize_t collections;
    Py_ssize_t collected;
    Py_ssize_t uncollectable;
};
struct _gc_runtime_state {
    PyObject *trash_delete_later;
    int trash_delete_nesting;
    int enabled;
    int debug;
    struct gc_generation generations[3];
    PyGC_Head *generation0;
    struct gc_generation permanent_generation;
    struct gc_generation_stats generation_stats[3];
    int collecting;
    PyObject *garbage;
    PyObject *callbacks;
    Py_ssize_t long_lived_total;
    Py_ssize_t long_lived_pending;
};
void _PyGC_Initialize(struct _gc_runtime_state *);
int _PyMem_SetDefaultAllocator(
    PyMemAllocatorDomain domain,
    PyMemAllocatorEx *old_alloc);
static inline int _PyMem_IsPtrFreed(void *ptr)
{
    uintptr_t value = (uintptr_t)ptr;
    return (value == 0
            || value == (uintptr_t)0xCDCDCDCDCDCDCDCD
            || value == (uintptr_t)0xDDDDDDDDDDDDDDDD
            || value == (uintptr_t)0xFDFDFDFDFDFDFDFD);
}
int _PyMem_GetAllocatorName(
    const char *name,
    PyMemAllocatorName *allocator);
int _PyMem_SetupAllocators(PyMemAllocatorName allocator);
struct _warnings_runtime_state {
    PyObject *filters;
    PyObject *once_registry;
    PyObject *default_action;
    long filters_version;
};
struct _pending_calls {
    int finishing;
    PyThread_type_lock lock;
    _Py_atomic_int calls_to_do;
    int async_exc;
    struct {
        int (*func)(void *);
        void *arg;
    } calls[32];
    int first;
    int last;
};
struct _ceval_runtime_state {
    int recursion_limit;
    int tracing_possible;
    _Py_atomic_int eval_breaker;
    _Py_atomic_int gil_drop_request;
    struct _pending_calls pending;
    _Py_atomic_int signals_pending;
    struct _gil_runtime_state gil;
};
typedef PyObject* (*_PyFrameEvalFunction)(struct _frame *, int);
struct _is {
    struct _is *next;
    struct _ts *tstate_head;
    int64_t id;
    int64_t id_refcount;
    int requires_idref;
    PyThread_type_lock id_mutex;
    int finalizing;
    PyObject *modules;
    PyObject *modules_by_index;
    PyObject *sysdict;
    PyObject *builtins;
    PyObject *importlib;
    int check_interval;
    long num_threads;
    size_t pythread_stacksize;
    PyObject *codec_search_path;
    PyObject *codec_search_cache;
    PyObject *codec_error_registry;
    int codecs_initialized;
    struct {
        char *encoding;
        char *errors;
        _Py_error_handler error_handler;
    } fs_codec;
    PyConfig config;
    int dlopenflags;
    PyObject *dict;
    PyObject *builtins_copy;
    PyObject *import_func;
    _PyFrameEvalFunction eval_frame;
    Py_ssize_t co_extra_user_count;
    freefunc co_extra_freefuncs[255];
    PyObject *before_forkers;
    PyObject *after_forkers_parent;
    PyObject *after_forkers_child;
    void (*pyexitfunc)(PyObject *);
    PyObject *pyexitmodule;
    uint64_t tstate_next_unique_id;
    struct _warnings_runtime_state warnings;
    PyObject *audit_hooks;
    int int_max_str_digits;
};
struct _is* _PyInterpreterState_LookUpID(int64_t);
int _PyInterpreterState_IDInitref(struct _is *);
int _PyInterpreterState_IDIncref(struct _is *);
void _PyInterpreterState_IDDecref(struct _is *);
struct _xidregitem;
struct _xidregitem {
    PyTypeObject *cls;
    crossinterpdatafunc getdata;
    struct _xidregitem *next;
};
typedef struct _Py_AuditHookEntry {
    struct _Py_AuditHookEntry *next;
    Py_AuditHookFunction hookCFunction;
    void *userData;
} _Py_AuditHookEntry;
struct _gilstate_runtime_state {
    int check_enabled;
    _Py_atomic_address tstate_current;
    PyThreadFrameGetter getframe;
    PyInterpreterState *autoInterpreterState;
    Py_tss_t autoTSSkey;
};
typedef struct pyruntimestate {
    int preinitializing;
    int preinitialized;
    int core_initialized;
    int initialized;
    PyThreadState *finalizing;
    struct pyinterpreters {
        PyThread_type_lock mutex;
        PyInterpreterState *head;
        PyInterpreterState *main;
        int64_t next_id;
    } interpreters;
    struct _xidregistry {
        PyThread_type_lock mutex;
        struct _xidregitem *head;
    } xidregistry;
    unsigned long main_thread;
    void (*exitfuncs[32])(void);
    int nexitfuncs;
    struct _gc_runtime_state gc;
    struct _ceval_runtime_state ceval;
    struct _gilstate_runtime_state gilstate;
    PyPreConfig preconfig;
    Py_OpenCodeHookFunction open_code_hook;
    void *open_code_userdata;
    _Py_AuditHookEntry *audit_hook_head;
} _PyRuntimeState;
extern _PyRuntimeState _PyRuntime;
PyStatus _PyRuntimeState_Init(_PyRuntimeState *runtime);
void _PyRuntimeState_Fini(_PyRuntimeState *runtime);
void _PyRuntimeState_ReInitThreads(_PyRuntimeState *runtime);
PyStatus _PyRuntime_Initialize(void);
void _PyRuntime_Finalize(void);
void _PyThreadState_Init(
    _PyRuntimeState *runtime,
    PyThreadState *tstate);
void _PyThreadState_DeleteExcept(
    _PyRuntimeState *runtime,
    PyThreadState *tstate);
PyThreadState * _PyThreadState_Swap(
    struct _gilstate_runtime_state *gilstate,
    PyThreadState *newts);
PyStatus _PyInterpreterState_Enable(_PyRuntimeState *runtime);
void _PyInterpreterState_DeleteExceptMain(_PyRuntimeState *runtime);
void _PyGILState_Reinit(_PyRuntimeState *runtime);
int _PyOS_InterruptOccurred(PyThreadState *tstate);
int _PyType_CheckConsistency(PyTypeObject *type);
int _PyDict_CheckConsistency(PyObject *mp, int check_content);
static inline void _PyObject_GC_TRACK_impl(const char *filename, int lineno,
                                           PyObject *op)
{
    ((!(((PyGC_Head *)(op)-1)->_gc_next != 0)) ? (void)(0) : _PyObject_AssertFailed((op), "!(((PyGC_Head *)(op)-1)->_gc_next != 0)", ("object already tracked by the garbage collector"), (filename), (lineno), ("_PyObject_GC_TRACK")));
    PyGC_Head *gc = ((PyGC_Head *)(op)-1);
    (((gc->_gc_prev & (2)) == 0) ? (void)(0) : _PyObject_AssertFailed((op), "(gc->_gc_prev & (2)) == 0", ("object is in generation which is garbage collected"), (filename), (lineno), ("_PyObject_GC_TRACK")));
    PyGC_Head *last = (PyGC_Head*)(_PyRuntime.gc.generation0->_gc_prev);
    ((last)->_gc_next = (uintptr_t)(gc));
    do { ((void) sizeof ((((uintptr_t)last & ~(((uintptr_t) -1) << (2))) == 0) ? 1 : 0), __extension__ ({ if (((uintptr_t)last & ~(((uintptr_t) -1) << (2))) == 0) ; else __assert_fail ("((uintptr_t)last & ~_PyGC_PREV_MASK) == 0", "Include/internal/pycore_object.h", 42, __extension__ __PRETTY_FUNCTION__); })); (gc)->_gc_prev = ((gc)->_gc_prev & ~(((uintptr_t) -1) << (2))) | ((uintptr_t)(last)); } while (0);
    ((gc)->_gc_next = (uintptr_t)(_PyRuntime.gc.generation0));
    _PyRuntime.gc.generation0->_gc_prev = (uintptr_t)gc;
}
static inline void _PyObject_GC_UNTRACK_impl(const char *filename, int lineno,
                                             PyObject *op)
{
    (((((PyGC_Head *)(op)-1)->_gc_next != 0)) ? (void)(0) : _PyObject_AssertFailed((op), "(((PyGC_Head *)(op)-1)->_gc_next != 0)", ("object not tracked by the garbage collector"), (filename), (lineno), ("_PyObject_GC_UNTRACK")));
    PyGC_Head *gc = ((PyGC_Head *)(op)-1);
    PyGC_Head *prev = ((PyGC_Head*)((gc)->_gc_prev & (((uintptr_t) -1) << (2))));
    PyGC_Head *next = ((PyGC_Head*)(gc)->_gc_next);
    ((prev)->_gc_next = (uintptr_t)(next));
    do { ((void) sizeof ((((uintptr_t)prev & ~(((uintptr_t) -1) << (2))) == 0) ? 1 : 0), __extension__ ({ if (((uintptr_t)prev & ~(((uintptr_t) -1) << (2))) == 0) ; else __assert_fail ("((uintptr_t)prev & ~_PyGC_PREV_MASK) == 0", "Include/internal/pycore_object.h", 70, __extension__ __PRETTY_FUNCTION__); })); (next)->_gc_prev = ((next)->_gc_prev & ~(((uintptr_t) -1) << (2))) | ((uintptr_t)(prev)); } while (0);
    gc->_gc_next = 0;
    gc->_gc_prev &= (1);
}
typedef struct {
    Py_hash_t me_hash;
    PyObject *me_key;
    PyObject *me_value;
} PyDictKeyEntry;
typedef Py_ssize_t (*dict_lookup_func)
    (PyDictObject *mp, PyObject *key, Py_hash_t hash, PyObject **value_addr);
struct _dictkeysobject {
    Py_ssize_t dk_refcnt;
    Py_ssize_t dk_size;
    dict_lookup_func dk_lookup;
    Py_ssize_t dk_usable;
    Py_ssize_t dk_nentries;
    char dk_indices[];
};
static inline int
unicode_eq(PyObject *aa, PyObject *bb)
{
    PyUnicodeObject *a = (PyUnicodeObject *)aa;
    PyUnicodeObject *b = (PyUnicodeObject *)bb;
    if ((((void) sizeof ((((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(a)", "Objects/stringlib/eq.h", 12, __extension__ __PRETTY_FUNCTION__); })), ((((PyASCIIObject*)a)->state.ready) ? 0 : _PyUnicode_Ready(((PyObject*)(a))))) == -1 || (((void) sizeof ((((((((PyObject*)(b))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(b))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(b)", "Objects/stringlib/eq.h", 12, __extension__ __PRETTY_FUNCTION__); })), ((((PyASCIIObject*)b)->state.ready) ? 0 : _PyUnicode_Ready(((PyObject*)(b))))) == -1) {
        Py_FatalError("Unreachable C code path reached");
    }
    if ((((void) sizeof ((((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(a)", "Objects/stringlib/eq.h", 16, __extension__ __PRETTY_FUNCTION__); })), ((void) sizeof (((((PyASCIIObject*)a)->state.ready)) ? 1 : 0), __extension__ ({ if ((((PyASCIIObject*)a)->state.ready)) ; else __assert_fail ("PyUnicode_IS_READY(a)", "Objects/stringlib/eq.h", 16, __extension__ __PRETTY_FUNCTION__); })), ((PyASCIIObject *)(a))->length) != (((void) sizeof ((((((((PyObject*)(b))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(b))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(b)", "Objects/stringlib/eq.h", 16, __extension__ __PRETTY_FUNCTION__); })), ((void) sizeof (((((PyASCIIObject*)b)->state.ready)) ? 1 : 0), __extension__ ({ if ((((PyASCIIObject*)b)->state.ready)) ; else __assert_fail ("PyUnicode_IS_READY(b)", "Objects/stringlib/eq.h", 16, __extension__ __PRETTY_FUNCTION__); })), ((PyASCIIObject *)(b))->length))
        return 0;
    if ((((void) sizeof ((((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(a)", "Objects/stringlib/eq.h", 18, __extension__ __PRETTY_FUNCTION__); })), ((void) sizeof (((((PyASCIIObject*)a)->state.ready)) ? 1 : 0), __extension__ ({ if ((((PyASCIIObject*)a)->state.ready)) ; else __assert_fail ("PyUnicode_IS_READY(a)", "Objects/stringlib/eq.h", 18, __extension__ __PRETTY_FUNCTION__); })), ((PyASCIIObject *)(a))->length) == 0)
        return 1;
    if ((((void) sizeof ((((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(a)", "Objects/stringlib/eq.h", 20, __extension__ __PRETTY_FUNCTION__); })), ((void) sizeof (((((PyASCIIObject*)a)->state.ready)) ? 1 : 0), __extension__ ({ if ((((PyASCIIObject*)a)->state.ready)) ; else __assert_fail ("PyUnicode_IS_READY(a)", "Objects/stringlib/eq.h", 20, __extension__ __PRETTY_FUNCTION__); })), ((PyASCIIObject *)(a))->state.kind) != (((void) sizeof ((((((((PyObject*)(b))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(b))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(b)", "Objects/stringlib/eq.h", 20, __extension__ __PRETTY_FUNCTION__); })), ((void) sizeof (((((PyASCIIObject*)b)->state.ready)) ? 1 : 0), __extension__ ({ if ((((PyASCIIObject*)b)->state.ready)) ; else __assert_fail ("PyUnicode_IS_READY(b)", "Objects/stringlib/eq.h", 20, __extension__ __PRETTY_FUNCTION__); })), ((PyASCIIObject *)(b))->state.kind))
        return 0;
    return memcmp(((Py_UCS1*)(((void) sizeof ((((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(a)", "Objects/stringlib/eq.h", 22, __extension__ __PRETTY_FUNCTION__); })), (((PyASCIIObject*)(a))->state.compact) ? ((((void) sizeof ((((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(a)", "Objects/stringlib/eq.h", 22, __extension__ __PRETTY_FUNCTION__); })), ((void) sizeof (((((PyASCIIObject*)a)->state.ready)) ? 1 : 0), __extension__ ({ if ((((PyASCIIObject*)a)->state.ready)) ; else __assert_fail ("PyUnicode_IS_READY(a)", "Objects/stringlib/eq.h", 22, __extension__ __PRETTY_FUNCTION__); })), ((PyASCIIObject*)a)->state.ascii) ? ((void*)((PyASCIIObject*)(a) + 1)) : ((void*)((PyCompactUnicodeObject*)(a) + 1))) : (((void) sizeof ((((PyUnicodeObject*)(a))->data.any) ? 1 : 0), __extension__ ({ if (((PyUnicodeObject*)(a))->data.any) ; else __assert_fail ("((PyUnicodeObject*)(a))->data.any", "Objects/stringlib/eq.h", 22, __extension__ __PRETTY_FUNCTION__); })), ((((PyUnicodeObject *)(a))->data.any))))), ((Py_UCS1*)(((void) sizeof ((((((((PyObject*)(b))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(b))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(b)", "Objects/stringlib/eq.h", 22, __extension__ __PRETTY_FUNCTION__); })), (((PyASCIIObject*)(b))->state.compact) ? ((((void) sizeof ((((((((PyObject*)(b))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(b))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(b)", "Objects/stringlib/eq.h", 22, __extension__ __PRETTY_FUNCTION__); })), ((void) sizeof (((((PyASCIIObject*)b)->state.ready)) ? 1 : 0), __extension__ ({ if ((((PyASCIIObject*)b)->state.ready)) ; else __assert_fail ("PyUnicode_IS_READY(b)", "Objects/stringlib/eq.h", 22, __extension__ __PRETTY_FUNCTION__); })), ((PyASCIIObject*)b)->state.ascii) ? ((void*)((PyASCIIObject*)(b) + 1)) : ((void*)((PyCompactUnicodeObject*)(b) + 1))) : (((void) sizeof ((((PyUnicodeObject*)(b))->data.any) ? 1 : 0), __extension__ ({ if (((PyUnicodeObject*)(b))->data.any) ; else __assert_fail ("((PyUnicodeObject*)(b))->data.any", "Objects/stringlib/eq.h", 22, __extension__ __PRETTY_FUNCTION__); })), ((((PyUnicodeObject *)(b))->data.any))))),
                  (((void) sizeof ((((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(a)", "Objects/stringlib/eq.h", 23, __extension__ __PRETTY_FUNCTION__); })), ((void) sizeof (((((PyASCIIObject*)a)->state.ready)) ? 1 : 0), __extension__ ({ if ((((PyASCIIObject*)a)->state.ready)) ; else __assert_fail ("PyUnicode_IS_READY(a)", "Objects/stringlib/eq.h", 23, __extension__ __PRETTY_FUNCTION__); })), ((PyASCIIObject *)(a))->length) * (((void) sizeof ((((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 28))) != 0)) ; else __assert_fail ("PyUnicode_Check(a)", "Objects/stringlib/eq.h", 23, __extension__ __PRETTY_FUNCTION__); })), ((void) sizeof (((((PyASCIIObject*)a)->state.ready)) ? 1 : 0), __extension__ ({ if ((((PyASCIIObject*)a)->state.ready)) ; else __assert_fail ("PyUnicode_IS_READY(a)", "Objects/stringlib/eq.h", 23, __extension__ __PRETTY_FUNCTION__); })), ((PyASCIIObject *)(a))->state.kind)) == 0;
}
static Py_ssize_t lookdict(PyDictObject *mp, PyObject *key,
                           Py_hash_t hash, PyObject **value_addr);
static Py_ssize_t lookdict_unicode(PyDictObject *mp, PyObject *key,
                                   Py_hash_t hash, PyObject **value_addr);
static Py_ssize_t
lookdict_unicode_nodummy(PyDictObject *mp, PyObject *key,
                         Py_hash_t hash, PyObject **value_addr);
static Py_ssize_t lookdict_split(PyDictObject *mp, PyObject *key,
                                 Py_hash_t hash, PyObject **value_addr);
static int dictresize(PyDictObject *mp, Py_ssize_t minused);
static PyObject* dict_iter(PyDictObject *dict);
static uint64_t pydict_global_version = 0;
static PyDictObject *free_list[80];
static int numfree = 0;
static PyDictKeysObject *keys_free_list[80];
static int numfreekeys = 0;
static const char dict_fromkeys__doc__[] = "fromkeys($type, iterable, value=None, /)\n" "--\n" "\n" "Create a new dictionary with keys from iterable and values set to value.";
static PyObject *
dict_fromkeys_impl(PyTypeObject *type, PyObject *iterable, PyObject *value);
static PyObject *
dict_fromkeys(PyTypeObject *type, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = ((void *)0);
    PyObject *iterable;
    PyObject *value = (&_Py_NoneStruct);
    if (!(((1) <= (nargs) && (nargs) <= (2)) || _PyArg_CheckPositional(("fromkeys"), (nargs), (1), (2)))) {
        goto exit;
    }
    iterable = args[0];
    if (nargs < 2) {
        goto skip_optional;
    }
    value = args[1];
skip_optional:
    return_value = dict_fromkeys_impl(type, iterable, value);
exit:
    return return_value;
}
static const char dict___contains____doc__[] = "__contains__($self, key, /)\n" "--\n" "\n" "True if the dictionary has the specified key, else False.";
static const char dict_get__doc__[] = "get($self, key, default=None, /)\n" "--\n" "\n" "Return the value for key if key is in the dictionary, else default.";
static PyObject *
dict_get_impl(PyDictObject *self, PyObject *key, PyObject *default_value);
static PyObject *
dict_get(PyDictObject *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = ((void *)0);
    PyObject *key;
    PyObject *default_value = (&_Py_NoneStruct);
    if (!(((1) <= (nargs) && (nargs) <= (2)) || _PyArg_CheckPositional(("get"), (nargs), (1), (2)))) {
        goto exit;
    }
    key = args[0];
    if (nargs < 2) {
        goto skip_optional;
    }
    default_value = args[1];
skip_optional:
    return_value = dict_get_impl(self, key, default_value);
exit:
    return return_value;
}
static const char dict_setdefault__doc__[] = "setdefault($self, key, default=None, /)\n" "--\n" "\n" "Insert key with a value of default if key is not in the dictionary.\n" "\n" "Return the value for key if key is in the dictionary, else default.";
static PyObject *
dict_setdefault_impl(PyDictObject *self, PyObject *key,
                     PyObject *default_value);
static PyObject *
dict_setdefault(PyDictObject *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = ((void *)0);
    PyObject *key;
    PyObject *default_value = (&_Py_NoneStruct);
    if (!(((1) <= (nargs) && (nargs) <= (2)) || _PyArg_CheckPositional(("setdefault"), (nargs), (1), (2)))) {
        goto exit;
    }
    key = args[0];
    if (nargs < 2) {
        goto skip_optional;
    }
    default_value = args[1];
skip_optional:
    return_value = dict_setdefault_impl(self, key, default_value);
exit:
    return return_value;
}
static const char dict_popitem__doc__[] = "popitem($self, /)\n" "--\n" "\n" "Remove and return a (key, value) pair as a 2-tuple.\n" "\n" "Pairs are returned in LIFO (last-in, first-out) order.\n" "Raises KeyError if the dict is empty.";
static PyObject *
dict_popitem_impl(PyDictObject *self);
static PyObject *
dict_popitem(PyDictObject *self, PyObject *_unused_ignored __attribute__((unused)))
{
    return dict_popitem_impl(self);
}
static const char dict___reversed____doc__[] = "__reversed__($self, /)\n" "--\n" "\n" "Return a reverse iterator over the dict keys.";
static PyObject *
dict___reversed___impl(PyDictObject *self);
static PyObject *
dict___reversed__(PyDictObject *self, PyObject *_unused_ignored __attribute__((unused)))
{
    return dict___reversed___impl(self);
}
int
PyDict_ClearFreeList(void)
{
    PyDictObject *op;
    int ret = numfree + numfreekeys;
    while (numfree) {
        op = free_list[--numfree];
        ((void) sizeof ((((((PyObject*)(op))->ob_type) == &PyDict_Type)) ? 1 : 0), __extension__ ({ if (((((PyObject*)(op))->ob_type) == &PyDict_Type)) ; else __assert_fail ("PyDict_CheckExact(op)", "Objects/dictobject.c", 266, __extension__ __PRETTY_FUNCTION__); }));
        PyObject_GC_Del(op);
    }
    while (numfreekeys) {
        PyObject_Free(keys_free_list[--numfreekeys]);
    }
    return ret;
}
void
_PyDict_DebugMallocStats(FILE *out)
{
    _PyDebugAllocatorStats(out,
                           "free PyDictObject", numfree, sizeof(PyDictObject));
}
void
PyDict_Fini(void)
{
    PyDict_ClearFreeList();
}
static void free_keys_object(PyDictKeysObject *keys);
static inline void
dictkeys_incref(PyDictKeysObject *dk)
{
    ;
    dk->dk_refcnt++;
}
static inline void
dictkeys_decref(PyDictKeysObject *dk)
{
    ((void) sizeof ((dk->dk_refcnt > 0) ? 1 : 0), __extension__ ({ if (dk->dk_refcnt > 0) ; else __assert_fail ("dk->dk_refcnt > 0", "Objects/dictobject.c", 321, __extension__ __PRETTY_FUNCTION__); }));
    ;
    if (--dk->dk_refcnt == 0) {
        free_keys_object(dk);
    }
}
static inline Py_ssize_t
dictkeys_get_index(PyDictKeysObject *keys, Py_ssize_t i)
{
    Py_ssize_t s = ((keys)->dk_size);
    Py_ssize_t ix;
    if (s <= 0xff) {
        int8_t *indices = (int8_t*)(keys->dk_indices);
        ix = indices[i];
    }
    else if (s <= 0xffff) {
        int16_t *indices = (int16_t*)(keys->dk_indices);
        ix = indices[i];
    }
    else if (s > 0xffffffff) {
        int64_t *indices = (int64_t*)(keys->dk_indices);
        ix = indices[i];
    }
    else {
        int32_t *indices = (int32_t*)(keys->dk_indices);
        ix = indices[i];
    }
    ((void) sizeof ((ix >= (-2)) ? 1 : 0), __extension__ ({ if (ix >= (-2)) ; else __assert_fail ("ix >= DKIX_DUMMY", "Objects/dictobject.c", 353, __extension__ __PRETTY_FUNCTION__); }));
    return ix;
}
static inline void
dictkeys_set_index(PyDictKeysObject *keys, Py_ssize_t i, Py_ssize_t ix)
{
    Py_ssize_t s = ((keys)->dk_size);
    ((void) sizeof ((ix >= (-2)) ? 1 : 0), __extension__ ({ if (ix >= (-2)) ; else __assert_fail ("ix >= DKIX_DUMMY", "Objects/dictobject.c", 363, __extension__ __PRETTY_FUNCTION__); }));
    if (s <= 0xff) {
        int8_t *indices = (int8_t*)(keys->dk_indices);
        ((void) sizeof ((ix <= 0x7f) ? 1 : 0), __extension__ ({ if (ix <= 0x7f) ; else __assert_fail ("ix <= 0x7f", "Objects/dictobject.c", 367, __extension__ __PRETTY_FUNCTION__); }));
        indices[i] = (char)ix;
    }
    else if (s <= 0xffff) {
        int16_t *indices = (int16_t*)(keys->dk_indices);
        ((void) sizeof ((ix <= 0x7fff) ? 1 : 0), __extension__ ({ if (ix <= 0x7fff) ; else __assert_fail ("ix <= 0x7fff", "Objects/dictobject.c", 372, __extension__ __PRETTY_FUNCTION__); }));
        indices[i] = (int16_t)ix;
    }
    else if (s > 0xffffffff) {
        int64_t *indices = (int64_t*)(keys->dk_indices);
        indices[i] = ix;
    }
    else {
        int32_t *indices = (int32_t*)(keys->dk_indices);
        ((void) sizeof ((ix <= 0x7fffffff) ? 1 : 0), __extension__ ({ if (ix <= 0x7fffffff) ; else __assert_fail ("ix <= 0x7fffffff", "Objects/dictobject.c", 383, __extension__ __PRETTY_FUNCTION__); }));
        indices[i] = (int32_t)ix;
    }
}
static PyDictKeysObject empty_keys_struct = {
        1,
        1,
        lookdict_split,
        0,
        0,
        {(-1), (-1), (-1), (-1),
         (-1), (-1), (-1), (-1)},
};
static PyObject *empty_values[1] = { ((void *)0) };
int
_PyDict_CheckConsistency(PyObject *op, int check_content)
{
    ((void) sizeof ((op != ((void *)0)) ? 1 : 0), __extension__ ({ if (op != ((void *)0)) ; else __assert_fail ("op != NULL", "Objects/dictobject.c", 465, __extension__ __PRETTY_FUNCTION__); }));
    do { if (!(((((((PyObject*)(op))->ob_type))->tp_flags & ((1UL << 29))) != 0))) { _PyObject_AssertFailed((op), ((void *)0), ("((((((PyObject*)(op))->ob_type))->tp_flags & ((1UL << 29))) != 0)"), "Objects/dictobject.c", 466, __func__); } } while (0);
    PyDictObject *mp = (PyDictObject *)op;
    PyDictKeysObject *keys = mp->ma_keys;
    int splitted = ((mp)->ma_values != ((void *)0));
    Py_ssize_t usable = (((keys->dk_size) << 1)/3);
    do { if (!(0 <= mp->ma_used && mp->ma_used <= usable)) { _PyObject_AssertFailed((op), ((void *)0), ("0 <= mp->ma_used && mp->ma_used <= usable"), "Objects/dictobject.c", 473, __func__); } } while (0);
    do { if (!((((keys->dk_size) & (keys->dk_size-1)) == 0))) { _PyObject_AssertFailed((op), ((void *)0), ("(((keys->dk_size) & (keys->dk_size-1)) == 0)"), "Objects/dictobject.c", 474, __func__); } } while (0);
    do { if (!(0 <= keys->dk_usable && keys->dk_usable <= usable)) { _PyObject_AssertFailed((op), ((void *)0), ("0 <= keys->dk_usable && keys->dk_usable <= usable"), "Objects/dictobject.c", 475, __func__); } } while (0);
    do { if (!(0 <= keys->dk_nentries && keys->dk_nentries <= usable)) { _PyObject_AssertFailed((op), ((void *)0), ("0 <= keys->dk_nentries && keys->dk_nentries <= usable"), "Objects/dictobject.c", 476, __func__); } } while (0);
    do { if (!(keys->dk_usable + keys->dk_nentries <= usable)) { _PyObject_AssertFailed((op), ((void *)0), ("keys->dk_usable + keys->dk_nentries <= usable"), "Objects/dictobject.c", 477, __func__); } } while (0);
    if (!splitted) {
        do { if (!(keys->dk_refcnt == 1)) { _PyObject_AssertFailed((op), ((void *)0), ("keys->dk_refcnt == 1"), "Objects/dictobject.c", 481, __func__); } } while (0);
    }
    if (check_content) {
        PyDictKeyEntry *entries = ((PyDictKeyEntry*)(&((int8_t*)((keys)->dk_indices))[((keys)->dk_size) * (((keys)->dk_size) <= 0xff ? 1 : ((keys)->dk_size) <= 0xffff ? 2 : ((keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
        Py_ssize_t i;
        for (i=0; i < keys->dk_size; i++) {
            Py_ssize_t ix = dictkeys_get_index(keys, i);
            do { if (!((-2) <= ix && ix <= usable)) { _PyObject_AssertFailed((op), ((void *)0), ("(-2) <= ix && ix <= usable"), "Objects/dictobject.c", 490, __func__); } } while (0);
        }
        for (i=0; i < usable; i++) {
            PyDictKeyEntry *entry = &entries[i];
            PyObject *key = entry->me_key;
            if (key != ((void *)0)) {
                if (((((PyObject*)(key))->ob_type) == &PyUnicode_Type)) {
                    Py_hash_t hash = ((PyASCIIObject *)key)->hash;
                    do { if (!(hash != -1)) { _PyObject_AssertFailed((op), ((void *)0), ("hash != -1"), "Objects/dictobject.c", 500, __func__); } } while (0);
                    do { if (!(entry->me_hash == hash)) { _PyObject_AssertFailed((op), ((void *)0), ("entry->me_hash == hash"), "Objects/dictobject.c", 501, __func__); } } while (0);
                }
                else {
                    do { if (!(entry->me_hash != -1)) { _PyObject_AssertFailed((op), ((void *)0), ("entry->me_hash != -1"), "Objects/dictobject.c", 505, __func__); } } while (0);
                }
                if (!splitted) {
                    do { if (!(entry->me_value != ((void *)0))) { _PyObject_AssertFailed((op), ((void *)0), ("entry->me_value != ((void *)0)"), "Objects/dictobject.c", 508, __func__); } } while (0);
                }
            }
            if (splitted) {
                do { if (!(entry->me_value == ((void *)0))) { _PyObject_AssertFailed((op), ((void *)0), ("entry->me_value == ((void *)0)"), "Objects/dictobject.c", 513, __func__); } } while (0);
            }
        }
        if (splitted) {
            for (i=0; i < mp->ma_used; i++) {
                do { if (!(mp->ma_values[i] != ((void *)0))) { _PyObject_AssertFailed((op), ((void *)0), ("mp->ma_values[i] != ((void *)0)"), "Objects/dictobject.c", 520, __func__); } } while (0);
            }
        }
    }
    return 1;
}
static PyDictKeysObject *new_keys_object(Py_ssize_t size)
{
    PyDictKeysObject *dk;
    Py_ssize_t es, usable;
    ((void) sizeof ((size >= 8) ? 1 : 0), __extension__ ({ if (size >= 8) ; else __assert_fail ("size >= PyDict_MINSIZE", "Objects/dictobject.c", 535, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof (((((size) & (size-1)) == 0)) ? 1 : 0), __extension__ ({ if ((((size) & (size-1)) == 0)) ; else __assert_fail ("IS_POWER_OF_2(size)", "Objects/dictobject.c", 536, __extension__ __PRETTY_FUNCTION__); }));
    usable = (((size) << 1)/3);
    if (size <= 0xff) {
        es = 1;
    }
    else if (size <= 0xffff) {
        es = 2;
    }
    else if (size <= 0xffffffff) {
        es = 4;
    }
    else {
        es = sizeof(Py_ssize_t);
    }
    if (size == 8 && numfreekeys > 0) {
        dk = keys_free_list[--numfreekeys];
    }
    else {
        dk = PyObject_Malloc(sizeof(PyDictKeysObject)
                             + es * size
                             + sizeof(PyDictKeyEntry) * usable);
        if (dk == ((void *)0)) {
            PyErr_NoMemory();
            return ((void *)0);
        }
    }
    ;
    dk->dk_refcnt = 1;
    dk->dk_size = size;
    dk->dk_usable = usable;
    dk->dk_lookup = lookdict_unicode_nodummy;
    dk->dk_nentries = 0;
    memset(&dk->dk_indices[0], 0xff, es * size);
    memset(((PyDictKeyEntry*)(&((int8_t*)((dk)->dk_indices))[((dk)->dk_size) * (((dk)->dk_size) <= 0xff ? 1 : ((dk)->dk_size) <= 0xffff ? 2 : ((dk)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))])), 0, sizeof(PyDictKeyEntry) * usable);
    return dk;
}
static void
free_keys_object(PyDictKeysObject *keys)
{
    PyDictKeyEntry *entries = ((PyDictKeyEntry*)(&((int8_t*)((keys)->dk_indices))[((keys)->dk_size) * (((keys)->dk_size) <= 0xff ? 1 : ((keys)->dk_size) <= 0xffff ? 2 : ((keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    Py_ssize_t i, n;
    for (i = 0, n = keys->dk_nentries; i < n; i++) {
        _Py_XDECREF(((PyObject*)(entries[i].me_key)));
        _Py_XDECREF(((PyObject*)(entries[i].me_value)));
    }
    if (keys->dk_size == 8 && numfreekeys < 80) {
        keys_free_list[numfreekeys++] = keys;
        return;
    }
    PyObject_Free(keys);
}
static PyObject *
new_dict(PyDictKeysObject *keys, PyObject **values)
{
    PyDictObject *mp;
    ((void) sizeof ((keys != ((void *)0)) ? 1 : 0), __extension__ ({ if (keys != ((void *)0)) ; else __assert_fail ("keys != NULL", "Objects/dictobject.c", 601, __extension__ __PRETTY_FUNCTION__); }));
    if (numfree) {
        mp = free_list[--numfree];
        ((void) sizeof ((mp != ((void *)0)) ? 1 : 0), __extension__ ({ if (mp != ((void *)0)) ; else __assert_fail ("mp != NULL", "Objects/dictobject.c", 604, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof (((((PyObject*)(mp))->ob_type) == &PyDict_Type) ? 1 : 0), __extension__ ({ if ((((PyObject*)(mp))->ob_type) == &PyDict_Type) ; else __assert_fail ("Py_TYPE(mp) == &PyDict_Type", "Objects/dictobject.c", 605, __extension__ __PRETTY_FUNCTION__); }));
        _Py_NewReference((PyObject *)mp);
    }
    else {
        mp = ( (PyDictObject *) _PyObject_GC_New(&PyDict_Type) );
        if (mp == ((void *)0)) {
            dictkeys_decref(keys);
            if (values != empty_values) {
                PyMem_Free(values);
            }
            return ((void *)0);
        }
    }
    mp->ma_keys = keys;
    mp->ma_values = values;
    mp->ma_used = 0;
    mp->ma_version_tag = (++pydict_global_version);
    ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(mp), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(mp), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(mp), 0)", "Objects/dictobject.c", 622, __extension__ __PRETTY_FUNCTION__); }));
    return (PyObject *)mp;
}
static PyObject *
new_dict_with_shared_keys(PyDictKeysObject *keys)
{
    PyObject **values;
    Py_ssize_t i, size;
    size = (((((keys)->dk_size)) << 1)/3);
    values = ( ((size_t)(size) > ((Py_ssize_t)(((size_t)-1)>>1)) / sizeof(PyObject *)) ? ((void *)0) : ( (PyObject * *) PyMem_Malloc((size) * sizeof(PyObject *)) ) );
    if (values == ((void *)0)) {
        dictkeys_decref(keys);
        return PyErr_NoMemory();
    }
    for (i = 0; i < size; i++) {
        values[i] = ((void *)0);
    }
    return new_dict(keys, values);
}
static PyObject *
clone_combined_dict(PyDictObject *orig)
{
    ((void) sizeof ((((((PyObject*)(orig))->ob_type) == &PyDict_Type)) ? 1 : 0), __extension__ ({ if (((((PyObject*)(orig))->ob_type) == &PyDict_Type)) ; else __assert_fail ("PyDict_CheckExact(orig)", "Objects/dictobject.c", 649, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((orig->ma_values == ((void *)0)) ? 1 : 0), __extension__ ({ if (orig->ma_values == ((void *)0)) ; else __assert_fail ("orig->ma_values == NULL", "Objects/dictobject.c", 650, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((orig->ma_keys->dk_refcnt == 1) ? 1 : 0), __extension__ ({ if (orig->ma_keys->dk_refcnt == 1) ; else __assert_fail ("orig->ma_keys->dk_refcnt == 1", "Objects/dictobject.c", 651, __extension__ __PRETTY_FUNCTION__); }));
    Py_ssize_t keys_size = _PyDict_KeysSize(orig->ma_keys);
    PyDictKeysObject *keys = PyObject_Malloc(keys_size);
    if (keys == ((void *)0)) {
        PyErr_NoMemory();
        return ((void *)0);
    }
    memcpy(keys, orig->ma_keys, keys_size);
    PyDictKeyEntry *ep0 = ((PyDictKeyEntry*)(&((int8_t*)((keys)->dk_indices))[((keys)->dk_size) * (((keys)->dk_size) <= 0xff ? 1 : ((keys)->dk_size) <= 0xffff ? 2 : ((keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    Py_ssize_t n = keys->dk_nentries;
    for (Py_ssize_t i = 0; i < n; i++) {
        PyDictKeyEntry *entry = &ep0[i];
        PyObject *value = entry->me_value;
        if (value != ((void *)0)) {
            _Py_INCREF(((PyObject*)(value)));
            _Py_INCREF(((PyObject*)(entry->me_key)));
        }
    }
    PyDictObject *new = (PyDictObject *)new_dict(keys, ((void *)0));
    if (new == ((void *)0)) {
        return ((void *)0);
    }
    new->ma_used = orig->ma_used;
    ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(new), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(new), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(new), 0)", "Objects/dictobject.c", 683, __extension__ __PRETTY_FUNCTION__); }));
    if ((((PyGC_Head *)(orig)-1)->_gc_next != 0)) {
        _PyObject_GC_TRACK_impl("Objects/dictobject.c", 686, ((PyObject*)(new)));
    }
    ;
    return (PyObject *)new;
}
PyObject *
PyDict_New(void)
{
    dictkeys_incref(&empty_keys_struct);
    return new_dict(&empty_keys_struct, empty_values);
}
static Py_ssize_t
lookdict_index(PyDictKeysObject *k, Py_hash_t hash, Py_ssize_t index)
{
    size_t mask = (((k)->dk_size)-1);
    size_t perturb = (size_t)hash;
    size_t i = (size_t)hash & mask;
    for (;;) {
        Py_ssize_t ix = dictkeys_get_index(k, i);
        if (ix == index) {
            return i;
        }
        if (ix == (-1)) {
            return (-1);
        }
        perturb >>= 5;
        i = mask & (i*5 + perturb + 1);
    }
    Py_FatalError("Unreachable C code path reached");
}
static Py_ssize_t __attribute__((hot))
lookdict(PyDictObject *mp, PyObject *key,
         Py_hash_t hash, PyObject **value_addr)
{
    size_t i, mask, perturb;
    PyDictKeysObject *dk;
    PyDictKeyEntry *ep0;
top:
    dk = mp->ma_keys;
    ep0 = ((PyDictKeyEntry*)(&((int8_t*)((dk)->dk_indices))[((dk)->dk_size) * (((dk)->dk_size) <= 0xff ? 1 : ((dk)->dk_size) <= 0xffff ? 2 : ((dk)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    mask = (((dk)->dk_size)-1);
    perturb = hash;
    i = (size_t)hash & mask;
    for (;;) {
        Py_ssize_t ix = dictkeys_get_index(dk, i);
        if (ix == (-1)) {
            *value_addr = ((void *)0);
            return ix;
        }
        if (ix >= 0) {
            PyDictKeyEntry *ep = &ep0[ix];
            ((void) sizeof ((ep->me_key != ((void *)0)) ? 1 : 0), __extension__ ({ if (ep->me_key != ((void *)0)) ; else __assert_fail ("ep->me_key != NULL", "Objects/dictobject.c", 774, __extension__ __PRETTY_FUNCTION__); }));
            if (ep->me_key == key) {
                *value_addr = ep->me_value;
                return ix;
            }
            if (ep->me_hash == hash) {
                PyObject *startkey = ep->me_key;
                _Py_INCREF(((PyObject*)(startkey)));
                int cmp = PyObject_RichCompareBool(startkey, key, 2);
                _Py_DECREF("Objects/dictobject.c", 783, ((PyObject*)(startkey)));
                if (cmp < 0) {
                    *value_addr = ((void *)0);
                    return (-3);
                }
                if (dk == mp->ma_keys && ep->me_key == startkey) {
                    if (cmp > 0) {
                        *value_addr = ep->me_value;
                        return ix;
                    }
                }
                else {
                    goto top;
                }
            }
        }
        perturb >>= 5;
        i = (i*5 + perturb + 1) & mask;
    }
    Py_FatalError("Unreachable C code path reached");
}
static Py_ssize_t __attribute__((hot))
lookdict_unicode(PyDictObject *mp, PyObject *key,
                 Py_hash_t hash, PyObject **value_addr)
{
    ((void) sizeof ((mp->ma_values == ((void *)0)) ? 1 : 0), __extension__ ({ if (mp->ma_values == ((void *)0)) ; else __assert_fail ("mp->ma_values == NULL", "Objects/dictobject.c", 811, __extension__ __PRETTY_FUNCTION__); }));
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type)) {
        mp->ma_keys->dk_lookup = lookdict;
        return lookdict(mp, key, hash, value_addr);
    }
    PyDictKeyEntry *ep0 = ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    size_t mask = (((mp->ma_keys)->dk_size)-1);
    size_t perturb = (size_t)hash;
    size_t i = (size_t)hash & mask;
    for (;;) {
        Py_ssize_t ix = dictkeys_get_index(mp->ma_keys, i);
        if (ix == (-1)) {
            *value_addr = ((void *)0);
            return (-1);
        }
        if (ix >= 0) {
            PyDictKeyEntry *ep = &ep0[ix];
            ((void) sizeof ((ep->me_key != ((void *)0)) ? 1 : 0), __extension__ ({ if (ep->me_key != ((void *)0)) ; else __assert_fail ("ep->me_key != NULL", "Objects/dictobject.c", 834, __extension__ __PRETTY_FUNCTION__); }));
            ((void) sizeof ((((((PyObject*)(ep->me_key))->ob_type) == &PyUnicode_Type)) ? 1 : 0), __extension__ ({ if (((((PyObject*)(ep->me_key))->ob_type) == &PyUnicode_Type)) ; else __assert_fail ("PyUnicode_CheckExact(ep->me_key)", "Objects/dictobject.c", 835, __extension__ __PRETTY_FUNCTION__); }));
            if (ep->me_key == key ||
                    (ep->me_hash == hash && unicode_eq(ep->me_key, key))) {
                *value_addr = ep->me_value;
                return ix;
            }
        }
        perturb >>= 5;
        i = mask & (i*5 + perturb + 1);
    }
    Py_FatalError("Unreachable C code path reached");
}
static Py_ssize_t __attribute__((hot))
lookdict_unicode_nodummy(PyDictObject *mp, PyObject *key,
                         Py_hash_t hash, PyObject **value_addr)
{
    ((void) sizeof ((mp->ma_values == ((void *)0)) ? 1 : 0), __extension__ ({ if (mp->ma_values == ((void *)0)) ; else __assert_fail ("mp->ma_values == NULL", "Objects/dictobject.c", 854, __extension__ __PRETTY_FUNCTION__); }));
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type)) {
        mp->ma_keys->dk_lookup = lookdict;
        return lookdict(mp, key, hash, value_addr);
    }
    PyDictKeyEntry *ep0 = ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    size_t mask = (((mp->ma_keys)->dk_size)-1);
    size_t perturb = (size_t)hash;
    size_t i = (size_t)hash & mask;
    for (;;) {
        Py_ssize_t ix = dictkeys_get_index(mp->ma_keys, i);
        ((void) sizeof ((ix != (-2)) ? 1 : 0), __extension__ ({ if (ix != (-2)) ; else __assert_fail ("ix != DKIX_DUMMY", "Objects/dictobject.c", 871, __extension__ __PRETTY_FUNCTION__); }));
        if (ix == (-1)) {
            *value_addr = ((void *)0);
            return (-1);
        }
        PyDictKeyEntry *ep = &ep0[ix];
        ((void) sizeof ((ep->me_key != ((void *)0)) ? 1 : 0), __extension__ ({ if (ep->me_key != ((void *)0)) ; else __assert_fail ("ep->me_key != NULL", "Objects/dictobject.c", 877, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((((((PyObject*)(ep->me_key))->ob_type) == &PyUnicode_Type)) ? 1 : 0), __extension__ ({ if (((((PyObject*)(ep->me_key))->ob_type) == &PyUnicode_Type)) ; else __assert_fail ("PyUnicode_CheckExact(ep->me_key)", "Objects/dictobject.c", 878, __extension__ __PRETTY_FUNCTION__); }));
        if (ep->me_key == key ||
            (ep->me_hash == hash && unicode_eq(ep->me_key, key))) {
            *value_addr = ep->me_value;
            return ix;
        }
        perturb >>= 5;
        i = mask & (i*5 + perturb + 1);
    }
    Py_FatalError("Unreachable C code path reached");
}
static Py_ssize_t __attribute__((hot))
lookdict_split(PyDictObject *mp, PyObject *key,
               Py_hash_t hash, PyObject **value_addr)
{
    ((void) sizeof ((mp->ma_values != ((void *)0)) ? 1 : 0), __extension__ ({ if (mp->ma_values != ((void *)0)) ; else __assert_fail ("mp->ma_values != NULL", "Objects/dictobject.c", 900, __extension__ __PRETTY_FUNCTION__); }));
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type)) {
        Py_ssize_t ix = lookdict(mp, key, hash, value_addr);
        if (ix >= 0) {
            *value_addr = mp->ma_values[ix];
        }
        return ix;
    }
    PyDictKeyEntry *ep0 = ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    size_t mask = (((mp->ma_keys)->dk_size)-1);
    size_t perturb = (size_t)hash;
    size_t i = (size_t)hash & mask;
    for (;;) {
        Py_ssize_t ix = dictkeys_get_index(mp->ma_keys, i);
        ((void) sizeof ((ix != (-2)) ? 1 : 0), __extension__ ({ if (ix != (-2)) ; else __assert_fail ("ix != DKIX_DUMMY", "Objects/dictobject.c", 916, __extension__ __PRETTY_FUNCTION__); }));
        if (ix == (-1)) {
            *value_addr = ((void *)0);
            return (-1);
        }
        PyDictKeyEntry *ep = &ep0[ix];
        ((void) sizeof ((ep->me_key != ((void *)0)) ? 1 : 0), __extension__ ({ if (ep->me_key != ((void *)0)) ; else __assert_fail ("ep->me_key != NULL", "Objects/dictobject.c", 922, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((((((PyObject*)(ep->me_key))->ob_type) == &PyUnicode_Type)) ? 1 : 0), __extension__ ({ if (((((PyObject*)(ep->me_key))->ob_type) == &PyUnicode_Type)) ; else __assert_fail ("PyUnicode_CheckExact(ep->me_key)", "Objects/dictobject.c", 923, __extension__ __PRETTY_FUNCTION__); }));
        if (ep->me_key == key ||
            (ep->me_hash == hash && unicode_eq(ep->me_key, key))) {
            *value_addr = mp->ma_values[ix];
            return ix;
        }
        perturb >>= 5;
        i = mask & (i*5 + perturb + 1);
    }
    Py_FatalError("Unreachable C code path reached");
}
int
_PyDict_HasOnlyStringKeys(PyObject *dict)
{
    Py_ssize_t pos = 0;
    PyObject *key, *value;
    ((void) sizeof ((((((((PyObject*)(dict))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(dict))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ; else __assert_fail ("PyDict_Check(dict)", "Objects/dictobject.c", 940, __extension__ __PRETTY_FUNCTION__); }));
    if (((PyDictObject *)dict)->ma_keys->dk_lookup != lookdict)
        return 1;
    while (PyDict_Next(dict, &pos, &key, &value))
        if (!((((((PyObject*)(key))->ob_type))->tp_flags & ((1UL << 28))) != 0))
            return 0;
    return 1;
}
void
_PyDict_MaybeUntrack(PyObject *op)
{
    PyDictObject *mp;
    PyObject *value;
    Py_ssize_t i, numentries;
    PyDictKeyEntry *ep0;
    if (!((((PyObject*)(op))->ob_type) == &PyDict_Type) || !(((PyGC_Head *)(op)-1)->_gc_next != 0))
        return;
    mp = (PyDictObject *) op;
    ep0 = ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    numentries = mp->ma_keys->dk_nentries;
    if (((mp)->ma_values != ((void *)0))) {
        for (i = 0; i < numentries; i++) {
            if ((value = mp->ma_values[i]) == ((void *)0))
                continue;
            if ((((((((((PyObject*)(value))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(value))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(value))->ob_type)->tp_is_gc(value))) && (!((((PyObject*)(value))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(value)-1)->_gc_next != 0)))) {
                ((void) sizeof ((!(((((((((PyObject*)(ep0[i].me_key))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(ep0[i].me_key))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(ep0[i].me_key))->ob_type)->tp_is_gc(ep0[i].me_key))) && (!((((PyObject*)(ep0[i].me_key))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(ep0[i].me_key)-1)->_gc_next != 0)))) ? 1 : 0), __extension__ ({ if (!(((((((((PyObject*)(ep0[i].me_key))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(ep0[i].me_key))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(ep0[i].me_key))->ob_type)->tp_is_gc(ep0[i].me_key))) && (!((((PyObject*)(ep0[i].me_key))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(ep0[i].me_key)-1)->_gc_next != 0)))) ; else __assert_fail ("!_PyObject_GC_MAY_BE_TRACKED(ep0[i].me_key)", "Objects/dictobject.c", 979, __extension__ __PRETTY_FUNCTION__); }));
                return;
            }
        }
    }
    else {
        for (i = 0; i < numentries; i++) {
            if ((value = ep0[i].me_value) == ((void *)0))
                continue;
            if ((((((((((PyObject*)(value))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(value))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(value))->ob_type)->tp_is_gc(value))) && (!((((PyObject*)(value))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(value)-1)->_gc_next != 0))) ||
                (((((((((PyObject*)(ep0[i].me_key))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(ep0[i].me_key))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(ep0[i].me_key))->ob_type)->tp_is_gc(ep0[i].me_key))) && (!((((PyObject*)(ep0[i].me_key))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(ep0[i].me_key)-1)->_gc_next != 0))))
                return;
        }
    }
    _PyObject_GC_UNTRACK_impl("Objects/dictobject.c", 993, ((PyObject*)(op)));
}
static Py_ssize_t
find_empty_slot(PyDictKeysObject *keys, Py_hash_t hash)
{
    ((void) sizeof ((keys != ((void *)0)) ? 1 : 0), __extension__ ({ if (keys != ((void *)0)) ; else __assert_fail ("keys != NULL", "Objects/dictobject.c", 1003, __extension__ __PRETTY_FUNCTION__); }));
    const size_t mask = (((keys)->dk_size)-1);
    size_t i = hash & mask;
    Py_ssize_t ix = dictkeys_get_index(keys, i);
    for (size_t perturb = hash; ix >= 0;) {
        perturb >>= 5;
        i = (i*5 + perturb + 1) & mask;
        ix = dictkeys_get_index(keys, i);
    }
    return i;
}
static int
insertion_resize(PyDictObject *mp)
{
    return dictresize(mp, ((mp)->ma_used*3));
}
static int
insertdict(PyDictObject *mp, PyObject *key, Py_hash_t hash, PyObject *value)
{
    PyObject *old_value;
    PyDictKeyEntry *ep;
    _Py_INCREF(((PyObject*)(key)));
    _Py_INCREF(((PyObject*)(value)));
    if (mp->ma_values != ((void *)0) && !((((PyObject*)(key))->ob_type) == &PyUnicode_Type)) {
        if (insertion_resize(mp) < 0)
            goto Fail;
    }
    Py_ssize_t ix = mp->ma_keys->dk_lookup(mp, key, hash, &old_value);
    if (ix == (-3))
        goto Fail;
    ((void) sizeof ((((((PyObject*)(key))->ob_type) == &PyUnicode_Type) || mp->ma_keys->dk_lookup == lookdict) ? 1 : 0), __extension__ ({ if (((((PyObject*)(key))->ob_type) == &PyUnicode_Type) || mp->ma_keys->dk_lookup == lookdict) ; else __assert_fail ("PyUnicode_CheckExact(key) || mp->ma_keys->dk_lookup == lookdict", "Objects/dictobject.c", 1044, __extension__ __PRETTY_FUNCTION__); }));
    do { if (!(((PyGC_Head *)(mp)-1)->_gc_next != 0)) { if ((((((((((PyObject*)(key))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(key))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(key))->ob_type)->tp_is_gc(key))) && (!((((PyObject*)(key))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(key)-1)->_gc_next != 0))) || (((((((((PyObject*)(value))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(value))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(value))->ob_type)->tp_is_gc(value))) && (!((((PyObject*)(value))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(value)-1)->_gc_next != 0)))) { _PyObject_GC_TRACK_impl("Objects/dictobject.c", 1045, ((PyObject*)(mp))); } } } while(0);
    if (((mp)->ma_values != ((void *)0)) &&
        ((ix >= 0 && old_value == ((void *)0) && mp->ma_used != ix) ||
         (ix == (-1) && mp->ma_used != mp->ma_keys->dk_nentries))) {
        if (insertion_resize(mp) < 0)
            goto Fail;
        ix = (-1);
    }
    if (ix == (-1)) {
        ((void) sizeof ((old_value == ((void *)0)) ? 1 : 0), __extension__ ({ if (old_value == ((void *)0)) ; else __assert_fail ("old_value == NULL", "Objects/dictobject.c", 1060, __extension__ __PRETTY_FUNCTION__); }));
        if (mp->ma_keys->dk_usable <= 0) {
            if (insertion_resize(mp) < 0)
                goto Fail;
        }
        Py_ssize_t hashpos = find_empty_slot(mp->ma_keys, hash);
        ep = &((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[mp->ma_keys->dk_nentries];
        dictkeys_set_index(mp->ma_keys, hashpos, mp->ma_keys->dk_nentries);
        ep->me_key = key;
        ep->me_hash = hash;
        if (mp->ma_values) {
            ((void) sizeof ((mp->ma_values[mp->ma_keys->dk_nentries] == ((void *)0)) ? 1 : 0), __extension__ ({ if (mp->ma_values[mp->ma_keys->dk_nentries] == ((void *)0)) ; else __assert_fail ("mp->ma_values[mp->ma_keys->dk_nentries] == NULL", "Objects/dictobject.c", 1072, __extension__ __PRETTY_FUNCTION__); }));
            mp->ma_values[mp->ma_keys->dk_nentries] = value;
        }
        else {
            ep->me_value = value;
        }
        mp->ma_used++;
        mp->ma_version_tag = (++pydict_global_version);
        mp->ma_keys->dk_usable--;
        mp->ma_keys->dk_nentries++;
        ((void) sizeof ((mp->ma_keys->dk_usable >= 0) ? 1 : 0), __extension__ ({ if (mp->ma_keys->dk_usable >= 0) ; else __assert_fail ("mp->ma_keys->dk_usable >= 0", "Objects/dictobject.c", 1082, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(mp), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(mp), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(mp), 0)", "Objects/dictobject.c", 1083, __extension__ __PRETTY_FUNCTION__); }));
        return 0;
    }
    if (old_value != value) {
        if (((mp)->ma_values != ((void *)0))) {
            mp->ma_values[ix] = value;
            if (old_value == ((void *)0)) {
                ((void) sizeof ((ix == mp->ma_used) ? 1 : 0), __extension__ ({ if (ix == mp->ma_used) ; else __assert_fail ("ix == mp->ma_used", "Objects/dictobject.c", 1092, __extension__ __PRETTY_FUNCTION__); }));
                mp->ma_used++;
            }
        }
        else {
            ((void) sizeof ((old_value != ((void *)0)) ? 1 : 0), __extension__ ({ if (old_value != ((void *)0)) ; else __assert_fail ("old_value != NULL", "Objects/dictobject.c", 1097, __extension__ __PRETTY_FUNCTION__); }));
            ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[ix].me_value = value;
        }
        mp->ma_version_tag = (++pydict_global_version);
    }
    _Py_XDECREF(((PyObject*)(old_value)));
    ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(mp), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(mp), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(mp), 0)", "Objects/dictobject.c", 1103, __extension__ __PRETTY_FUNCTION__); }));
    _Py_DECREF("Objects/dictobject.c", 1104, ((PyObject*)(key)));
    return 0;
Fail:
    _Py_DECREF("Objects/dictobject.c", 1108, ((PyObject*)(value)));
    _Py_DECREF("Objects/dictobject.c", 1109, ((PyObject*)(key)));
    return -1;
}
static int
insert_to_emptydict(PyDictObject *mp, PyObject *key, Py_hash_t hash,
                    PyObject *value)
{
    ((void) sizeof ((mp->ma_keys == &empty_keys_struct) ? 1 : 0), __extension__ ({ if (mp->ma_keys == &empty_keys_struct) ; else __assert_fail ("mp->ma_keys == Py_EMPTY_KEYS", "Objects/dictobject.c", 1118, __extension__ __PRETTY_FUNCTION__); }));
    PyDictKeysObject *newkeys = new_keys_object(8);
    if (newkeys == ((void *)0)) {
        return -1;
    }
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type)) {
        newkeys->dk_lookup = lookdict;
    }
    dictkeys_decref(&empty_keys_struct);
    mp->ma_keys = newkeys;
    mp->ma_values = ((void *)0);
    _Py_INCREF(((PyObject*)(key)));
    _Py_INCREF(((PyObject*)(value)));
    do { if (!(((PyGC_Head *)(mp)-1)->_gc_next != 0)) { if ((((((((((PyObject*)(key))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(key))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(key))->ob_type)->tp_is_gc(key))) && (!((((PyObject*)(key))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(key)-1)->_gc_next != 0))) || (((((((((PyObject*)(value))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(value))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(value))->ob_type)->tp_is_gc(value))) && (!((((PyObject*)(value))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(value)-1)->_gc_next != 0)))) { _PyObject_GC_TRACK_impl("Objects/dictobject.c", 1133, ((PyObject*)(mp))); } } } while(0);
    size_t hashpos = (size_t)hash & (8 -1);
    PyDictKeyEntry *ep = ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    dictkeys_set_index(mp->ma_keys, hashpos, 0);
    ep->me_key = key;
    ep->me_hash = hash;
    ep->me_value = value;
    mp->ma_used++;
    mp->ma_version_tag = (++pydict_global_version);
    mp->ma_keys->dk_usable--;
    mp->ma_keys->dk_nentries++;
    return 0;
}
static void
build_indices(PyDictKeysObject *keys, PyDictKeyEntry *ep, Py_ssize_t n)
{
    size_t mask = (size_t)((keys)->dk_size) - 1;
    for (Py_ssize_t ix = 0; ix != n; ix++, ep++) {
        Py_hash_t hash = ep->me_hash;
        size_t i = hash & mask;
        for (size_t perturb = hash; dictkeys_get_index(keys, i) != (-1);) {
            perturb >>= 5;
            i = mask & (i*5 + perturb + 1);
        }
        dictkeys_set_index(keys, i, ix);
    }
}
static int
dictresize(PyDictObject *mp, Py_ssize_t minsize)
{
    Py_ssize_t newsize, numentries;
    PyDictKeysObject *oldkeys;
    PyObject **oldvalues;
    PyDictKeyEntry *oldentries, *newentries;
    for (newsize = 8;
         newsize < minsize && newsize > 0;
         newsize <<= 1)
        ;
    if (newsize <= 0) {
        PyErr_NoMemory();
        return -1;
    }
    oldkeys = mp->ma_keys;
    mp->ma_keys = new_keys_object(newsize);
    if (mp->ma_keys == ((void *)0)) {
        mp->ma_keys = oldkeys;
        return -1;
    }
    ((void) sizeof ((mp->ma_keys->dk_usable >= mp->ma_used) ? 1 : 0), __extension__ ({ if (mp->ma_keys->dk_usable >= mp->ma_used) ; else __assert_fail ("mp->ma_keys->dk_usable >= mp->ma_used", "Objects/dictobject.c", 1208, __extension__ __PRETTY_FUNCTION__); }));
    if (oldkeys->dk_lookup == lookdict)
        mp->ma_keys->dk_lookup = lookdict;
    numentries = mp->ma_used;
    oldentries = ((PyDictKeyEntry*)(&((int8_t*)((oldkeys)->dk_indices))[((oldkeys)->dk_size) * (((oldkeys)->dk_size) <= 0xff ? 1 : ((oldkeys)->dk_size) <= 0xffff ? 2 : ((oldkeys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    newentries = ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    oldvalues = mp->ma_values;
    if (oldvalues != ((void *)0)) {
        for (Py_ssize_t i = 0; i < numentries; i++) {
            ((void) sizeof ((oldvalues[i] != ((void *)0)) ? 1 : 0), __extension__ ({ if (oldvalues[i] != ((void *)0)) ; else __assert_fail ("oldvalues[i] != NULL", "Objects/dictobject.c", 1222, __extension__ __PRETTY_FUNCTION__); }));
            PyDictKeyEntry *ep = &oldentries[i];
            PyObject *key = ep->me_key;
            _Py_INCREF(((PyObject*)(key)));
            newentries[i].me_key = key;
            newentries[i].me_hash = ep->me_hash;
            newentries[i].me_value = oldvalues[i];
        }
        dictkeys_decref(oldkeys);
        mp->ma_values = ((void *)0);
        if (oldvalues != empty_values) {
            PyMem_Free(oldvalues);
        }
    }
    else {
        if (oldkeys->dk_nentries == numentries) {
            memcpy(newentries, oldentries, numentries * sizeof(PyDictKeyEntry));
        }
        else {
            PyDictKeyEntry *ep = oldentries;
            for (Py_ssize_t i = 0; i < numentries; i++) {
                while (ep->me_value == ((void *)0))
                    ep++;
                newentries[i] = *ep++;
            }
        }
        ((void) sizeof ((oldkeys->dk_lookup != lookdict_split) ? 1 : 0), __extension__ ({ if (oldkeys->dk_lookup != lookdict_split) ; else __assert_fail ("oldkeys->dk_lookup != lookdict_split", "Objects/dictobject.c", 1250, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((oldkeys->dk_refcnt == 1) ? 1 : 0), __extension__ ({ if (oldkeys->dk_refcnt == 1) ; else __assert_fail ("oldkeys->dk_refcnt == 1", "Objects/dictobject.c", 1251, __extension__ __PRETTY_FUNCTION__); }));
        if (oldkeys->dk_size == 8 &&
            numfreekeys < 80) {
            ;
            keys_free_list[numfreekeys++] = oldkeys;
        }
        else {
            ;
            PyObject_Free(oldkeys);
        }
    }
    build_indices(mp->ma_keys, newentries, numentries);
    mp->ma_keys->dk_usable -= numentries;
    mp->ma_keys->dk_nentries = numentries;
    return 0;
}
static PyDictKeysObject *
make_keys_shared(PyObject *op)
{
    Py_ssize_t i;
    Py_ssize_t size;
    PyDictObject *mp = (PyDictObject *)op;
    if (!((((PyObject*)(op))->ob_type) == &PyDict_Type))
        return ((void *)0);
    if (!((mp)->ma_values != ((void *)0))) {
        PyDictKeyEntry *ep0;
        PyObject **values;
        ((void) sizeof ((mp->ma_keys->dk_refcnt == 1) ? 1 : 0), __extension__ ({ if (mp->ma_keys->dk_refcnt == 1) ; else __assert_fail ("mp->ma_keys->dk_refcnt == 1", "Objects/dictobject.c", 1283, __extension__ __PRETTY_FUNCTION__); }));
        if (mp->ma_keys->dk_lookup == lookdict) {
            return ((void *)0);
        }
        else if (mp->ma_keys->dk_lookup == lookdict_unicode) {
            if (dictresize(mp, ((mp->ma_keys)->dk_size)))
                return ((void *)0);
        }
        ((void) sizeof ((mp->ma_keys->dk_lookup == lookdict_unicode_nodummy) ? 1 : 0), __extension__ ({ if (mp->ma_keys->dk_lookup == lookdict_unicode_nodummy) ; else __assert_fail ("mp->ma_keys->dk_lookup == lookdict_unicode_nodummy", "Objects/dictobject.c", 1292, __extension__ __PRETTY_FUNCTION__); }));
        ep0 = ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
        size = (((((mp->ma_keys)->dk_size)) << 1)/3);
        values = ( ((size_t)(size) > ((Py_ssize_t)(((size_t)-1)>>1)) / sizeof(PyObject *)) ? ((void *)0) : ( (PyObject * *) PyMem_Malloc((size) * sizeof(PyObject *)) ) );
        if (values == ((void *)0)) {
            PyErr_SetString(PyExc_MemoryError,
                "Not enough memory to allocate new values array");
            return ((void *)0);
        }
        for (i = 0; i < size; i++) {
            values[i] = ep0[i].me_value;
            ep0[i].me_value = ((void *)0);
        }
        mp->ma_keys->dk_lookup = lookdict_split;
        mp->ma_values = values;
    }
    dictkeys_incref(mp->ma_keys);
    return mp->ma_keys;
}
PyObject *
_PyDict_NewPresized(Py_ssize_t minused)
{
    const Py_ssize_t max_presize = 128 * 1024;
    Py_ssize_t newsize;
    PyDictKeysObject *new_keys;
    if (minused <= (((8) << 1)/3)) {
        return PyDict_New();
    }
    if (minused > (((max_presize) << 1)/3)) {
        newsize = max_presize;
    }
    else {
        Py_ssize_t minsize = (((minused)*3+1) >> 1);
        newsize = 8*2;
        while (newsize < minsize) {
            newsize <<= 1;
        }
    }
    ((void) sizeof (((((newsize) & (newsize-1)) == 0)) ? 1 : 0), __extension__ ({ if ((((newsize) & (newsize-1)) == 0)) ; else __assert_fail ("IS_POWER_OF_2(newsize)", "Objects/dictobject.c", 1337, __extension__ __PRETTY_FUNCTION__); }));
    new_keys = new_keys_object(newsize);
    if (new_keys == ((void *)0))
        return ((void *)0);
    return new_dict(new_keys, ((void *)0));
}
PyObject *
PyDict_GetItem(PyObject *op, PyObject *key)
{
    Py_hash_t hash;
    Py_ssize_t ix;
    PyDictObject *mp = (PyDictObject *)op;
    PyThreadState *tstate;
    PyObject *value;
    if (!((((((PyObject*)(op))->ob_type))->tp_flags & ((1UL << 29))) != 0))
        return ((void *)0);
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type) ||
        (hash = ((PyASCIIObject *) key)->hash) == -1)
    {
        hash = PyObject_Hash(key);
        if (hash == -1) {
            PyErr_Clear();
            return ((void *)0);
        }
    }
    tstate = ((PyThreadState*)__extension__ ({ __auto_type __atomic_load_ptr = (&(((&(&_PyRuntime)->gilstate.tstate_current))->_value)); __typeof__ (*__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (_Py_memory_order_relaxed)); __atomic_load_tmp; }));
    if (tstate != ((void *)0) && tstate->curexc_type != ((void *)0)) {
        PyObject *err_type, *err_value, *err_tb;
        PyErr_Fetch(&err_type, &err_value, &err_tb);
        ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &value);
        PyErr_Restore(err_type, err_value, err_tb);
        if (ix < 0)
            return ((void *)0);
    }
    else {
        ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &value);
        if (ix < 0) {
            PyErr_Clear();
            return ((void *)0);
        }
    }
    return value;
}
PyObject *
_PyDict_GetItem_KnownHash(PyObject *op, PyObject *key, Py_hash_t hash)
{
    Py_ssize_t ix;
    PyDictObject *mp = (PyDictObject *)op;
    PyObject *value;
    if (!((((((PyObject*)(op))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 1414);
        return ((void *)0);
    }
    ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &value);
    if (ix < 0) {
        return ((void *)0);
    }
    return value;
}
PyObject *
PyDict_GetItemWithError(PyObject *op, PyObject *key)
{
    Py_ssize_t ix;
    Py_hash_t hash;
    PyDictObject*mp = (PyDictObject *)op;
    PyObject *value;
    if (!((((((PyObject*)(op))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 1438);
        return ((void *)0);
    }
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type) ||
        (hash = ((PyASCIIObject *) key)->hash) == -1)
    {
        hash = PyObject_Hash(key);
        if (hash == -1) {
            return ((void *)0);
        }
    }
    ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &value);
    if (ix < 0)
        return ((void *)0);
    return value;
}
PyObject *
_PyDict_GetItemIdWithError(PyObject *dp, struct _Py_Identifier *key)
{
    PyObject *kv;
    kv = _PyUnicode_FromId(key);
    if (kv == ((void *)0))
        return ((void *)0);
    return PyDict_GetItemWithError(dp, kv);
}
PyObject *
_PyDict_GetItemStringWithError(PyObject *v, const char *key)
{
    PyObject *kv, *rv;
    kv = PyUnicode_FromString(key);
    if (kv == ((void *)0)) {
        return ((void *)0);
    }
    rv = PyDict_GetItemWithError(v, kv);
    _Py_DECREF("Objects/dictobject.c", 1475, ((PyObject*)(kv)));
    return rv;
}
PyObject *
_PyDict_LoadGlobal(PyDictObject *globals, PyDictObject *builtins, PyObject *key)
{
    Py_ssize_t ix;
    Py_hash_t hash;
    PyObject *value;
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type) ||
        (hash = ((PyASCIIObject *) key)->hash) == -1)
    {
        hash = PyObject_Hash(key);
        if (hash == -1)
            return ((void *)0);
    }
    ix = globals->ma_keys->dk_lookup(globals, key, hash, &value);
    if (ix == (-3))
        return ((void *)0);
    if (ix != (-1) && value != ((void *)0))
        return value;
    ix = builtins->ma_keys->dk_lookup(builtins, key, hash, &value);
    if (ix < 0)
        return ((void *)0);
    return value;
}
int
PyDict_SetItem(PyObject *op, PyObject *key, PyObject *value)
{
    PyDictObject *mp;
    Py_hash_t hash;
    if (!((((((PyObject*)(op))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 1527);
        return -1;
    }
    ((void) sizeof ((key) ? 1 : 0), __extension__ ({ if (key) ; else __assert_fail ("key", "Objects/dictobject.c", 1530, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((value) ? 1 : 0), __extension__ ({ if (value) ; else __assert_fail ("value", "Objects/dictobject.c", 1531, __extension__ __PRETTY_FUNCTION__); }));
    mp = (PyDictObject *)op;
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type) ||
        (hash = ((PyASCIIObject *) key)->hash) == -1)
    {
        hash = PyObject_Hash(key);
        if (hash == -1)
            return -1;
    }
    if (mp->ma_keys == &empty_keys_struct) {
        return insert_to_emptydict(mp, key, hash, value);
    }
    return insertdict(mp, key, hash, value);
}
int
_PyDict_SetItem_KnownHash(PyObject *op, PyObject *key, PyObject *value,
                         Py_hash_t hash)
{
    PyDictObject *mp;
    if (!((((((PyObject*)(op))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 1555);
        return -1;
    }
    ((void) sizeof ((key) ? 1 : 0), __extension__ ({ if (key) ; else __assert_fail ("key", "Objects/dictobject.c", 1558, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((value) ? 1 : 0), __extension__ ({ if (value) ; else __assert_fail ("value", "Objects/dictobject.c", 1559, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((hash != -1) ? 1 : 0), __extension__ ({ if (hash != -1) ; else __assert_fail ("hash != -1", "Objects/dictobject.c", 1560, __extension__ __PRETTY_FUNCTION__); }));
    mp = (PyDictObject *)op;
    if (mp->ma_keys == &empty_keys_struct) {
        return insert_to_emptydict(mp, key, hash, value);
    }
    return insertdict(mp, key, hash, value);
}
static int
delitem_common(PyDictObject *mp, Py_hash_t hash, Py_ssize_t ix,
               PyObject *old_value)
{
    PyObject *old_key;
    PyDictKeyEntry *ep;
    Py_ssize_t hashpos = lookdict_index(mp->ma_keys, hash, ix);
    ((void) sizeof ((hashpos >= 0) ? 1 : 0), __extension__ ({ if (hashpos >= 0) ; else __assert_fail ("hashpos >= 0", "Objects/dictobject.c", 1578, __extension__ __PRETTY_FUNCTION__); }));
    mp->ma_used--;
    mp->ma_version_tag = (++pydict_global_version);
    ep = &((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[ix];
    dictkeys_set_index(mp->ma_keys, hashpos, (-2));
    if ((mp)->ma_keys->dk_lookup == lookdict_unicode_nodummy) { (mp)->ma_keys->dk_lookup = lookdict_unicode; };
    old_key = ep->me_key;
    ep->me_key = ((void *)0);
    ep->me_value = ((void *)0);
    _Py_DECREF("Objects/dictobject.c", 1588, ((PyObject*)(old_key)));
    _Py_DECREF("Objects/dictobject.c", 1589, ((PyObject*)(old_value)));
    ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(mp), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(mp), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(mp), 0)", "Objects/dictobject.c", 1591, __extension__ __PRETTY_FUNCTION__); }));
    return 0;
}
int
PyDict_DelItem(PyObject *op, PyObject *key)
{
    Py_hash_t hash;
    ((void) sizeof ((key) ? 1 : 0), __extension__ ({ if (key) ; else __assert_fail ("key", "Objects/dictobject.c", 1599, __extension__ __PRETTY_FUNCTION__); }));
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type) ||
        (hash = ((PyASCIIObject *) key)->hash) == -1) {
        hash = PyObject_Hash(key);
        if (hash == -1)
            return -1;
    }
    return _PyDict_DelItem_KnownHash(op, key, hash);
}
int
_PyDict_DelItem_KnownHash(PyObject *op, PyObject *key, Py_hash_t hash)
{
    Py_ssize_t ix;
    PyDictObject *mp;
    PyObject *old_value;
    if (!((((((PyObject*)(op))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 1618);
        return -1;
    }
    ((void) sizeof ((key) ? 1 : 0), __extension__ ({ if (key) ; else __assert_fail ("key", "Objects/dictobject.c", 1621, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((hash != -1) ? 1 : 0), __extension__ ({ if (hash != -1) ; else __assert_fail ("hash != -1", "Objects/dictobject.c", 1622, __extension__ __PRETTY_FUNCTION__); }));
    mp = (PyDictObject *)op;
    ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &old_value);
    if (ix == (-3))
        return -1;
    if (ix == (-1) || old_value == ((void *)0)) {
        _PyErr_SetKeyError(key);
        return -1;
    }
    if (((mp)->ma_values != ((void *)0))) {
        if (dictresize(mp, ((mp->ma_keys)->dk_size))) {
            return -1;
        }
        ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &old_value);
        ((void) sizeof ((ix >= 0) ? 1 : 0), __extension__ ({ if (ix >= 0) ; else __assert_fail ("ix >= 0", "Objects/dictobject.c", 1638, __extension__ __PRETTY_FUNCTION__); }));
    }
    return delitem_common(mp, hash, ix, old_value);
}
int
_PyDict_DelItemIf(PyObject *op, PyObject *key,
                  int (*predicate)(PyObject *value))
{
    Py_ssize_t hashpos, ix;
    PyDictObject *mp;
    Py_hash_t hash;
    PyObject *old_value;
    int res;
    if (!((((((PyObject*)(op))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 1659);
        return -1;
    }
    ((void) sizeof ((key) ? 1 : 0), __extension__ ({ if (key) ; else __assert_fail ("key", "Objects/dictobject.c", 1662, __extension__ __PRETTY_FUNCTION__); }));
    hash = PyObject_Hash(key);
    if (hash == -1)
        return -1;
    mp = (PyDictObject *)op;
    ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &old_value);
    if (ix == (-3))
        return -1;
    if (ix == (-1) || old_value == ((void *)0)) {
        _PyErr_SetKeyError(key);
        return -1;
    }
    if (((mp)->ma_values != ((void *)0))) {
        if (dictresize(mp, ((mp->ma_keys)->dk_size))) {
            return -1;
        }
        ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &old_value);
        ((void) sizeof ((ix >= 0) ? 1 : 0), __extension__ ({ if (ix >= 0) ; else __assert_fail ("ix >= 0", "Objects/dictobject.c", 1681, __extension__ __PRETTY_FUNCTION__); }));
    }
    res = predicate(old_value);
    if (res == -1)
        return -1;
    hashpos = lookdict_index(mp->ma_keys, hash, ix);
    ((void) sizeof ((hashpos >= 0) ? 1 : 0), __extension__ ({ if (hashpos >= 0) ; else __assert_fail ("hashpos >= 0", "Objects/dictobject.c", 1689, __extension__ __PRETTY_FUNCTION__); }));
    if (res > 0)
        return delitem_common(mp, hashpos, ix, old_value);
    else
        return 0;
}
void
PyDict_Clear(PyObject *op)
{
    PyDictObject *mp;
    PyDictKeysObject *oldkeys;
    PyObject **oldvalues;
    Py_ssize_t i, n;
    if (!((((((PyObject*)(op))->ob_type))->tp_flags & ((1UL << 29))) != 0))
        return;
    mp = ((PyDictObject *)op);
    oldkeys = mp->ma_keys;
    oldvalues = mp->ma_values;
    if (oldvalues == empty_values)
        return;
    dictkeys_incref(&empty_keys_struct);
    mp->ma_keys = &empty_keys_struct;
    mp->ma_values = empty_values;
    mp->ma_used = 0;
    mp->ma_version_tag = (++pydict_global_version);
    if (oldvalues != ((void *)0)) {
        n = oldkeys->dk_nentries;
        for (i = 0; i < n; i++)
            do { PyObject *_py_tmp = ((PyObject*)(oldvalues[i])); if (_py_tmp != ((void *)0)) { (oldvalues[i]) = ((void *)0); _Py_DECREF("Objects/dictobject.c", 1723, ((PyObject*)(_py_tmp))); } } while (0);
        PyMem_Free(oldvalues);
        dictkeys_decref(oldkeys);
    }
    else {
       ((void) sizeof ((oldkeys->dk_refcnt == 1) ? 1 : 0), __extension__ ({ if (oldkeys->dk_refcnt == 1) ; else __assert_fail ("oldkeys->dk_refcnt == 1", "Objects/dictobject.c", 1728, __extension__ __PRETTY_FUNCTION__); }));
       dictkeys_decref(oldkeys);
    }
    ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(mp), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(mp), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(mp), 0)", "Objects/dictobject.c", 1731, __extension__ __PRETTY_FUNCTION__); }));
}
int
_PyDict_Next(PyObject *op, Py_ssize_t *ppos, PyObject **pkey,
             PyObject **pvalue, Py_hash_t *phash)
{
    Py_ssize_t i;
    PyDictObject *mp;
    PyDictKeyEntry *entry_ptr;
    PyObject *value;
    if (!((((((PyObject*)(op))->ob_type))->tp_flags & ((1UL << 29))) != 0))
        return 0;
    mp = (PyDictObject *)op;
    i = *ppos;
    if (mp->ma_values) {
        if (i < 0 || i >= mp->ma_used)
            return 0;
        entry_ptr = &((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[i];
        value = mp->ma_values[i];
        ((void) sizeof ((value != ((void *)0)) ? 1 : 0), __extension__ ({ if (value != ((void *)0)) ; else __assert_fail ("value != NULL", "Objects/dictobject.c", 1758, __extension__ __PRETTY_FUNCTION__); }));
    }
    else {
        Py_ssize_t n = mp->ma_keys->dk_nentries;
        if (i < 0 || i >= n)
            return 0;
        entry_ptr = &((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[i];
        while (i < n && entry_ptr->me_value == ((void *)0)) {
            entry_ptr++;
            i++;
        }
        if (i >= n)
            return 0;
        value = entry_ptr->me_value;
    }
    *ppos = i+1;
    if (pkey)
        *pkey = entry_ptr->me_key;
    if (phash)
        *phash = entry_ptr->me_hash;
    if (pvalue)
        *pvalue = value;
    return 1;
}
int
PyDict_Next(PyObject *op, Py_ssize_t *ppos, PyObject **pkey, PyObject **pvalue)
{
    return _PyDict_Next(op, ppos, pkey, pvalue, ((void *)0));
}
PyObject *
_PyDict_Pop_KnownHash(PyObject *dict, PyObject *key, Py_hash_t hash, PyObject *deflt)
{
    Py_ssize_t ix, hashpos;
    PyObject *old_value, *old_key;
    PyDictKeyEntry *ep;
    PyDictObject *mp;
    ((void) sizeof ((((((((PyObject*)(dict))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(dict))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ; else __assert_fail ("PyDict_Check(dict)", "Objects/dictobject.c", 1816, __extension__ __PRETTY_FUNCTION__); }));
    mp = (PyDictObject *)dict;
    if (mp->ma_used == 0) {
        if (deflt) {
            _Py_INCREF(((PyObject*)(deflt)));
            return deflt;
        }
        _PyErr_SetKeyError(key);
        return ((void *)0);
    }
    ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &old_value);
    if (ix == (-3))
        return ((void *)0);
    if (ix == (-1) || old_value == ((void *)0)) {
        if (deflt) {
            _Py_INCREF(((PyObject*)(deflt)));
            return deflt;
        }
        _PyErr_SetKeyError(key);
        return ((void *)0);
    }
    if (((mp)->ma_values != ((void *)0))) {
        if (dictresize(mp, ((mp->ma_keys)->dk_size))) {
            return ((void *)0);
        }
        ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &old_value);
        ((void) sizeof ((ix >= 0) ? 1 : 0), __extension__ ({ if (ix >= 0) ; else __assert_fail ("ix >= 0", "Objects/dictobject.c", 1845, __extension__ __PRETTY_FUNCTION__); }));
    }
    hashpos = lookdict_index(mp->ma_keys, hash, ix);
    ((void) sizeof ((hashpos >= 0) ? 1 : 0), __extension__ ({ if (hashpos >= 0) ; else __assert_fail ("hashpos >= 0", "Objects/dictobject.c", 1849, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((old_value != ((void *)0)) ? 1 : 0), __extension__ ({ if (old_value != ((void *)0)) ; else __assert_fail ("old_value != NULL", "Objects/dictobject.c", 1850, __extension__ __PRETTY_FUNCTION__); }));
    mp->ma_used--;
    mp->ma_version_tag = (++pydict_global_version);
    dictkeys_set_index(mp->ma_keys, hashpos, (-2));
    ep = &((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[ix];
    if ((mp)->ma_keys->dk_lookup == lookdict_unicode_nodummy) { (mp)->ma_keys->dk_lookup = lookdict_unicode; };
    old_key = ep->me_key;
    ep->me_key = ((void *)0);
    ep->me_value = ((void *)0);
    _Py_DECREF("Objects/dictobject.c", 1859, ((PyObject*)(old_key)));
    ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(mp), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(mp), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(mp), 0)", "Objects/dictobject.c", 1861, __extension__ __PRETTY_FUNCTION__); }));
    return old_value;
}
PyObject *
_PyDict_Pop(PyObject *dict, PyObject *key, PyObject *deflt)
{
    Py_hash_t hash;
    if (((PyDictObject *)dict)->ma_used == 0) {
        if (deflt) {
            _Py_INCREF(((PyObject*)(deflt)));
            return deflt;
        }
        _PyErr_SetKeyError(key);
        return ((void *)0);
    }
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type) ||
        (hash = ((PyASCIIObject *) key)->hash) == -1) {
        hash = PyObject_Hash(key);
        if (hash == -1)
            return ((void *)0);
    }
    return _PyDict_Pop_KnownHash(dict, key, hash, deflt);
}
PyObject *
_PyDict_FromKeys(PyObject *cls, PyObject *iterable, PyObject *value)
{
    PyObject *it;
    PyObject *key;
    PyObject *d;
    int status;
    d = _PyObject_CallNoArg(cls);
    if (d == ((void *)0))
        return ((void *)0);
    if (((((PyObject*)(d))->ob_type) == &PyDict_Type) && ((PyDictObject *)d)->ma_used == 0) {
        if (((((PyObject*)(iterable))->ob_type) == &PyDict_Type)) {
            PyDictObject *mp = (PyDictObject *)d;
            PyObject *oldvalue;
            Py_ssize_t pos = 0;
            PyObject *key;
            Py_hash_t hash;
            if (dictresize(mp, ((((((void) sizeof ((((((((PyObject*)(iterable))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(iterable))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ; else __assert_fail ("PyDict_Check(iterable)", "Objects/dictobject.c", 1908, __extension__ __PRETTY_FUNCTION__); })),((PyDictObject *)iterable)->ma_used))*3+1) >> 1))) {
                _Py_DECREF("Objects/dictobject.c", 1909, ((PyObject*)(d)));
                return ((void *)0);
            }
            while (_PyDict_Next(iterable, &pos, &key, &oldvalue, &hash)) {
                if (insertdict(mp, key, hash, value)) {
                    _Py_DECREF("Objects/dictobject.c", 1915, ((PyObject*)(d)));
                    return ((void *)0);
                }
            }
            return d;
        }
        if (((((PyObject*)(iterable))->ob_type) == &PySet_Type || (((PyObject*)(iterable))->ob_type) == &PyFrozenSet_Type)) {
            PyDictObject *mp = (PyDictObject *)d;
            Py_ssize_t pos = 0;
            PyObject *key;
            Py_hash_t hash;
            if (dictresize(mp, ((((((void) sizeof ((((((PyObject*)(iterable))->ob_type) == &PySet_Type || (((PyObject*)(iterable))->ob_type) == &PyFrozenSet_Type || PyType_IsSubtype((((PyObject*)(iterable))->ob_type), &PySet_Type) || PyType_IsSubtype((((PyObject*)(iterable))->ob_type), &PyFrozenSet_Type))) ? 1 : 0), __extension__ ({ if (((((PyObject*)(iterable))->ob_type) == &PySet_Type || (((PyObject*)(iterable))->ob_type) == &PyFrozenSet_Type || PyType_IsSubtype((((PyObject*)(iterable))->ob_type), &PySet_Type) || PyType_IsSubtype((((PyObject*)(iterable))->ob_type), &PyFrozenSet_Type))) ; else __assert_fail ("PyAnySet_Check(iterable)", "Objects/dictobject.c", 1927, __extension__ __PRETTY_FUNCTION__); })),(((PySetObject *)(iterable))->used)))*3+1) >> 1))) {
                _Py_DECREF("Objects/dictobject.c", 1928, ((PyObject*)(d)));
                return ((void *)0);
            }
            while (_PySet_NextEntry(iterable, &pos, &key, &hash)) {
                if (insertdict(mp, key, hash, value)) {
                    _Py_DECREF("Objects/dictobject.c", 1934, ((PyObject*)(d)));
                    return ((void *)0);
                }
            }
            return d;
        }
    }
    it = PyObject_GetIter(iterable);
    if (it == ((void *)0)){
        _Py_DECREF("Objects/dictobject.c", 1944, ((PyObject*)(d)));
        return ((void *)0);
    }
    if (((((PyObject*)(d))->ob_type) == &PyDict_Type)) {
        while ((key = PyIter_Next(it)) != ((void *)0)) {
            status = PyDict_SetItem(d, key, value);
            _Py_DECREF("Objects/dictobject.c", 1951, ((PyObject*)(key)));
            if (status < 0)
                goto Fail;
        }
    } else {
        while ((key = PyIter_Next(it)) != ((void *)0)) {
            status = PyObject_SetItem(d, key, value);
            _Py_DECREF("Objects/dictobject.c", 1958, ((PyObject*)(key)));
            if (status < 0)
                goto Fail;
        }
    }
    if (PyErr_Occurred())
        goto Fail;
    _Py_DECREF("Objects/dictobject.c", 1966, ((PyObject*)(it)));
    return d;
Fail:
    _Py_DECREF("Objects/dictobject.c", 1970, ((PyObject*)(it)));
    _Py_DECREF("Objects/dictobject.c", 1971, ((PyObject*)(d)));
    return ((void *)0);
}
static void
dict_dealloc(PyDictObject *mp)
{
    PyObject **values = mp->ma_values;
    PyDictKeysObject *keys = mp->ma_keys;
    Py_ssize_t i, n;
    PyObject_GC_UnTrack(mp);
    do { PyThreadState *_tstate = ((void *)0); if ((((PyObject*)(mp))->ob_type)->tp_dealloc == (destructor)(dict_dealloc)) { _tstate = ((PyThreadState*)__extension__ ({ __auto_type __atomic_load_ptr = (&(((&(&_PyRuntime)->gilstate.tstate_current))->_value)); __typeof__ (*__atomic_load_ptr) __atomic_load_tmp; __atomic_load (__atomic_load_ptr, &__atomic_load_tmp, (_Py_memory_order_relaxed)); __atomic_load_tmp; })); if (_tstate->trash_delete_nesting >= 50) { _PyTrash_thread_deposit_object(((PyObject*)(mp))); break; } ++_tstate->trash_delete_nesting; }
    if (values != ((void *)0)) {
        if (values != empty_values) {
            for (i = 0, n = mp->ma_keys->dk_nentries; i < n; i++) {
                _Py_XDECREF(((PyObject*)(values[i])));
            }
            PyMem_Free(values);
        }
        dictkeys_decref(keys);
    }
    else if (keys != ((void *)0)) {
        ((void) sizeof ((keys->dk_refcnt == 1) ? 1 : 0), __extension__ ({ if (keys->dk_refcnt == 1) ; else __assert_fail ("keys->dk_refcnt == 1", "Objects/dictobject.c", 1997, __extension__ __PRETTY_FUNCTION__); }));
        dictkeys_decref(keys);
    }
    if (numfree < 80 && (((PyObject*)(mp))->ob_type) == &PyDict_Type)
        free_list[numfree++] = mp;
    else
        (((PyObject*)(mp))->ob_type)->tp_free((PyObject *)mp);
    if (_tstate) { --_tstate->trash_delete_nesting; if (_tstate->trash_delete_later && _tstate->trash_delete_nesting <= 0) _PyTrash_thread_destroy_chain(); } } while (0);
}
static PyObject *
dict_repr(PyDictObject *mp)
{
    Py_ssize_t i;
    PyObject *key = ((void *)0), *value = ((void *)0);
    _PyUnicodeWriter writer;
    int first;
    i = Py_ReprEnter((PyObject *)mp);
    if (i != 0) {
        return i > 0 ? PyUnicode_FromString("{...}") : ((void *)0);
    }
    if (mp->ma_used == 0) {
        Py_ReprLeave((PyObject *)mp);
        return PyUnicode_FromString("{}");
    }
    _PyUnicodeWriter_Init(&writer);
    writer.overallocate = 1;
    writer.min_length = 1 + 4 + (2 + 4) * (mp->ma_used - 1) + 1;
    if (_PyUnicodeWriter_WriteChar(&writer, '{') < 0)
        goto error;
    i = 0;
    first = 1;
    while (PyDict_Next((PyObject *)mp, &i, &key, &value)) {
        PyObject *s;
        int res;
        _Py_INCREF(((PyObject*)(key)));
        _Py_INCREF(((PyObject*)(value)));
        if (!first) {
            if (_PyUnicodeWriter_WriteASCIIString(&writer, ", ", 2) < 0)
                goto error;
        }
        first = 0;
        s = PyObject_Repr(key);
        if (s == ((void *)0))
            goto error;
        res = _PyUnicodeWriter_WriteStr(&writer, s);
        _Py_DECREF("Objects/dictobject.c", 2056, ((PyObject*)(s)));
        if (res < 0)
            goto error;
        if (_PyUnicodeWriter_WriteASCIIString(&writer, ": ", 2) < 0)
            goto error;
        s = PyObject_Repr(value);
        if (s == ((void *)0))
            goto error;
        res = _PyUnicodeWriter_WriteStr(&writer, s);
        _Py_DECREF("Objects/dictobject.c", 2067, ((PyObject*)(s)));
        if (res < 0)
            goto error;
        do { PyObject *_py_tmp = ((PyObject*)(key)); if (_py_tmp != ((void *)0)) { (key) = ((void *)0); _Py_DECREF("Objects/dictobject.c", 2071, ((PyObject*)(_py_tmp))); } } while (0);
        do { PyObject *_py_tmp = ((PyObject*)(value)); if (_py_tmp != ((void *)0)) { (value) = ((void *)0); _Py_DECREF("Objects/dictobject.c", 2072, ((PyObject*)(_py_tmp))); } } while (0);
    }
    writer.overallocate = 0;
    if (_PyUnicodeWriter_WriteChar(&writer, '}') < 0)
        goto error;
    Py_ReprLeave((PyObject *)mp);
    return _PyUnicodeWriter_Finish(&writer);
error:
    Py_ReprLeave((PyObject *)mp);
    _PyUnicodeWriter_Dealloc(&writer);
    _Py_XDECREF(((PyObject*)(key)));
    _Py_XDECREF(((PyObject*)(value)));
    return ((void *)0);
}
static Py_ssize_t
dict_length(PyDictObject *mp)
{
    return mp->ma_used;
}
static PyObject *
dict_subscript(PyDictObject *mp, PyObject *key)
{
    Py_ssize_t ix;
    Py_hash_t hash;
    PyObject *value;
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type) ||
        (hash = ((PyASCIIObject *) key)->hash) == -1) {
        hash = PyObject_Hash(key);
        if (hash == -1)
            return ((void *)0);
    }
    ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &value);
    if (ix == (-3))
        return ((void *)0);
    if (ix == (-1) || value == ((void *)0)) {
        if (!((((PyObject*)(mp))->ob_type) == &PyDict_Type)) {
            PyObject *missing, *res;
            static _Py_Identifier PyId___missing__ = { .next = ((void *)0), .string = "__missing__", .object = ((void *)0) };
            missing = _PyObject_LookupSpecial((PyObject *)mp, &PyId___missing__);
            if (missing != ((void *)0)) {
                res = PyObject_CallFunctionObjArgs(missing,
                                                   key, ((void *)0));
                _Py_DECREF("Objects/dictobject.c", 2122, ((PyObject*)(missing)));
                return res;
            }
            else if (PyErr_Occurred())
                return ((void *)0);
        }
        _PyErr_SetKeyError(key);
        return ((void *)0);
    }
    _Py_INCREF(((PyObject*)(value)));
    return value;
}
static int
dict_ass_sub(PyDictObject *mp, PyObject *v, PyObject *w)
{
    if (w == ((void *)0))
        return PyDict_DelItem((PyObject *)mp, v);
    else
        return PyDict_SetItem((PyObject *)mp, v, w);
}
static PyMappingMethods dict_as_mapping = {
    (lenfunc)dict_length,
    (binaryfunc)dict_subscript,
    (objobjargproc)dict_ass_sub,
};
static PyObject *
dict_keys(PyDictObject *mp)
{
    PyObject *v;
    Py_ssize_t i, j;
    PyDictKeyEntry *ep;
    Py_ssize_t n, offset;
    PyObject **value_ptr;
  again:
    n = mp->ma_used;
    v = PyList_New(n);
    if (v == ((void *)0))
        return ((void *)0);
    if (n != mp->ma_used) {
        _Py_DECREF("Objects/dictobject.c", 2168, ((PyObject*)(v)));
        goto again;
    }
    ep = ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    if (mp->ma_values) {
        value_ptr = mp->ma_values;
        offset = sizeof(PyObject *);
    }
    else {
        value_ptr = &ep[0].me_value;
        offset = sizeof(PyDictKeyEntry);
    }
    for (i = 0, j = 0; j < n; i++) {
        if (*value_ptr != ((void *)0)) {
            PyObject *key = ep[i].me_key;
            _Py_INCREF(((PyObject*)(key)));
            (((PyListObject *)(v))->ob_item[j] = (key));
            j++;
        }
        value_ptr = (PyObject **)(((char *)value_ptr) + offset);
    }
    ((void) sizeof ((j == n) ? 1 : 0), __extension__ ({ if (j == n) ; else __assert_fail ("j == n", "Objects/dictobject.c", 2189, __extension__ __PRETTY_FUNCTION__); }));
    return v;
}
static PyObject *
dict_values(PyDictObject *mp)
{
    PyObject *v;
    Py_ssize_t i, j;
    PyDictKeyEntry *ep;
    Py_ssize_t n, offset;
    PyObject **value_ptr;
  again:
    n = mp->ma_used;
    v = PyList_New(n);
    if (v == ((void *)0))
        return ((void *)0);
    if (n != mp->ma_used) {
        _Py_DECREF("Objects/dictobject.c", 2211, ((PyObject*)(v)));
        goto again;
    }
    ep = ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    if (mp->ma_values) {
        value_ptr = mp->ma_values;
        offset = sizeof(PyObject *);
    }
    else {
        value_ptr = &ep[0].me_value;
        offset = sizeof(PyDictKeyEntry);
    }
    for (i = 0, j = 0; j < n; i++) {
        PyObject *value = *value_ptr;
        value_ptr = (PyObject **)(((char *)value_ptr) + offset);
        if (value != ((void *)0)) {
            _Py_INCREF(((PyObject*)(value)));
            (((PyListObject *)(v))->ob_item[j] = (value));
            j++;
        }
    }
    ((void) sizeof ((j == n) ? 1 : 0), __extension__ ({ if (j == n) ; else __assert_fail ("j == n", "Objects/dictobject.c", 2232, __extension__ __PRETTY_FUNCTION__); }));
    return v;
}
static PyObject *
dict_items(PyDictObject *mp)
{
    PyObject *v;
    Py_ssize_t i, j, n;
    Py_ssize_t offset;
    PyObject *item, *key;
    PyDictKeyEntry *ep;
    PyObject **value_ptr;
  again:
    n = mp->ma_used;
    v = PyList_New(n);
    if (v == ((void *)0))
        return ((void *)0);
    for (i = 0; i < n; i++) {
        item = PyTuple_New(2);
        if (item == ((void *)0)) {
            _Py_DECREF("Objects/dictobject.c", 2258, ((PyObject*)(v)));
            return ((void *)0);
        }
        (((PyListObject *)(v))->ob_item[i] = (item));
    }
    if (n != mp->ma_used) {
        _Py_DECREF("Objects/dictobject.c", 2267, ((PyObject*)(v)));
        goto again;
    }
    ep = ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    if (mp->ma_values) {
        value_ptr = mp->ma_values;
        offset = sizeof(PyObject *);
    }
    else {
        value_ptr = &ep[0].me_value;
        offset = sizeof(PyDictKeyEntry);
    }
    for (i = 0, j = 0; j < n; i++) {
        PyObject *value = *value_ptr;
        value_ptr = (PyObject **)(((char *)value_ptr) + offset);
        if (value != ((void *)0)) {
            key = ep[i].me_key;
            item = (((PyListObject *)(v))->ob_item[j]);
            _Py_INCREF(((PyObject*)(key)));
            ((((void) sizeof ((((((((PyObject*)(item))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(item))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(item)", "Objects/dictobject.c", 2287, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(item))->ob_item[0] = key);
            _Py_INCREF(((PyObject*)(value)));
            ((((void) sizeof ((((((((PyObject*)(item))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(item))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(item)", "Objects/dictobject.c", 2289, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(item))->ob_item[1] = value);
            j++;
        }
    }
    ((void) sizeof ((j == n) ? 1 : 0), __extension__ ({ if (j == n) ; else __assert_fail ("j == n", "Objects/dictobject.c", 2293, __extension__ __PRETTY_FUNCTION__); }));
    return v;
}
static PyObject *
dict_fromkeys_impl(PyTypeObject *type, PyObject *iterable, PyObject *value)
{
    return _PyDict_FromKeys((PyObject *)type, iterable, value);
}
static int
dict_update_common(PyObject *self, PyObject *args, PyObject *kwds,
                   const char *methname)
{
    PyObject *arg = ((void *)0);
    int result = 0;
    if (!PyArg_UnpackTuple(args, methname, 0, 1, &arg)) {
        result = -1;
    }
    else if (arg != ((void *)0)) {
        static _Py_Identifier PyId_keys = { .next = ((void *)0), .string = "keys", .object = ((void *)0) };
        PyObject *func;
        if (_PyObject_LookupAttrId(arg, &PyId_keys, &func) < 0) {
            result = -1;
        }
        else if (func != ((void *)0)) {
            _Py_DECREF("Objects/dictobject.c", 2331, ((PyObject*)(func)));
            result = PyDict_Merge(self, arg, 1);
        }
        else {
            result = PyDict_MergeFromSeq2(self, arg, 1);
        }
    }
    if (result == 0 && kwds != ((void *)0)) {
        if (PyArg_ValidateKeywordArguments(kwds))
            result = PyDict_Merge(self, kwds, 1);
        else
            result = -1;
    }
    return result;
}
static PyObject *
dict_update(PyObject *self, PyObject *args, PyObject *kwds)
{
    if (dict_update_common(self, args, kwds, "update") != -1)
        return _Py_INCREF(((PyObject*)((&_Py_NoneStruct)))), (&_Py_NoneStruct);
    return ((void *)0);
}
int
PyDict_MergeFromSeq2(PyObject *d, PyObject *seq2, int override)
{
    PyObject *it;
    Py_ssize_t i;
    PyObject *item;
    PyObject *fast;
    ((void) sizeof ((d != ((void *)0)) ? 1 : 0), __extension__ ({ if (d != ((void *)0)) ; else __assert_fail ("d != NULL", "Objects/dictobject.c", 2377, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((((((((PyObject*)(d))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(d))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ; else __assert_fail ("PyDict_Check(d)", "Objects/dictobject.c", 2378, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((seq2 != ((void *)0)) ? 1 : 0), __extension__ ({ if (seq2 != ((void *)0)) ; else __assert_fail ("seq2 != NULL", "Objects/dictobject.c", 2379, __extension__ __PRETTY_FUNCTION__); }));
    it = PyObject_GetIter(seq2);
    if (it == ((void *)0))
        return -1;
    for (i = 0; ; ++i) {
        PyObject *key, *value;
        Py_ssize_t n;
        fast = ((void *)0);
        item = PyIter_Next(it);
        if (item == ((void *)0)) {
            if (PyErr_Occurred())
                goto Fail;
            break;
        }
        fast = PySequence_Fast(item, "");
        if (fast == ((void *)0)) {
            if (PyErr_ExceptionMatches(PyExc_TypeError))
                PyErr_Format(PyExc_TypeError,
                    "cannot convert dictionary update "
                    "sequence element #%zd to a sequence",
                    i);
            goto Fail;
        }
        n = (((((((PyObject*)(fast))->ob_type))->tp_flags & ((1UL << 25))) != 0) ? (((void) sizeof ((((((((PyObject*)(fast))->ob_type))->tp_flags & ((1UL << 25))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(fast))->ob_type))->tp_flags & ((1UL << 25))) != 0)) ; else __assert_fail ("PyList_Check(fast)", "Objects/dictobject.c", 2407, __extension__ __PRETTY_FUNCTION__); })),(((PyVarObject*)(fast))->ob_size)) : (((PyVarObject*)((((void) sizeof ((((((((PyObject*)(fast))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(fast))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(fast)", "Objects/dictobject.c", 2407, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(fast))))->ob_size));
        if (n != 2) {
            PyErr_Format(PyExc_ValueError,
                         "dictionary update sequence element #%zd "
                         "has length %zd; 2 is required",
                         i, n);
            goto Fail;
        }
        key = (((((((PyObject*)(fast))->ob_type))->tp_flags & ((1UL << 25))) != 0) ? (((PyListObject *)(fast))->ob_item[0]) : ((((void) sizeof ((((((((PyObject*)(fast))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(fast))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(fast)", "Objects/dictobject.c", 2417, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(fast))->ob_item[0]));
        value = (((((((PyObject*)(fast))->ob_type))->tp_flags & ((1UL << 25))) != 0) ? (((PyListObject *)(fast))->ob_item[1]) : ((((void) sizeof ((((((((PyObject*)(fast))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(fast))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(fast)", "Objects/dictobject.c", 2418, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(fast))->ob_item[1]));
        _Py_INCREF(((PyObject*)(key)));
        _Py_INCREF(((PyObject*)(value)));
        if (override) {
            if (PyDict_SetItem(d, key, value) < 0) {
                _Py_DECREF("Objects/dictobject.c", 2423, ((PyObject*)(key)));
                _Py_DECREF("Objects/dictobject.c", 2424, ((PyObject*)(value)));
                goto Fail;
            }
        }
        else if (PyDict_GetItemWithError(d, key) == ((void *)0)) {
            if (PyErr_Occurred() || PyDict_SetItem(d, key, value) < 0) {
                _Py_DECREF("Objects/dictobject.c", 2430, ((PyObject*)(key)));
                _Py_DECREF("Objects/dictobject.c", 2431, ((PyObject*)(value)));
                goto Fail;
            }
        }
        _Py_DECREF("Objects/dictobject.c", 2436, ((PyObject*)(key)));
        _Py_DECREF("Objects/dictobject.c", 2437, ((PyObject*)(value)));
        _Py_DECREF("Objects/dictobject.c", 2438, ((PyObject*)(fast)));
        _Py_DECREF("Objects/dictobject.c", 2439, ((PyObject*)(item)));
    }
    i = 0;
    ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(d), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(d), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(d), 0)", "Objects/dictobject.c", 2443, __extension__ __PRETTY_FUNCTION__); }));
    goto Return;
Fail:
    _Py_XDECREF(((PyObject*)(item)));
    _Py_XDECREF(((PyObject*)(fast)));
    i = -1;
Return:
    _Py_DECREF("Objects/dictobject.c", 2450, ((PyObject*)(it)));
    return (int)(i);
}
static int
dict_merge(PyObject *a, PyObject *b, int override)
{
    PyDictObject *mp, *other;
    Py_ssize_t i, n;
    PyDictKeyEntry *entry, *ep0;
    ((void) sizeof ((0 <= override && override <= 2) ? 1 : 0), __extension__ ({ if (0 <= override && override <= 2) ; else __assert_fail ("0 <= override && override <= 2", "Objects/dictobject.c", 2461, __extension__ __PRETTY_FUNCTION__); }));
    if (a == ((void *)0) || !((((((PyObject*)(a))->ob_type))->tp_flags & ((1UL << 29))) != 0) || b == ((void *)0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 2469);
        return -1;
    }
    mp = (PyDictObject*)a;
    if (((((((PyObject*)(b))->ob_type))->tp_flags & ((1UL << 29))) != 0) && ((((PyObject*)(b))->ob_type)->tp_iter == (getiterfunc)dict_iter)) {
        other = (PyDictObject*)b;
        if (other == mp || other->ma_used == 0)
            return 0;
        if (mp->ma_used == 0)
            override = 1;
        if ((((mp->ma_keys->dk_size) << 1)/3) < other->ma_used) {
            if (dictresize(mp, (((mp->ma_used + other->ma_used)*3+1) >> 1))) {
               return -1;
            }
        }
        ep0 = ((PyDictKeyEntry*)(&((int8_t*)((other->ma_keys)->dk_indices))[((other->ma_keys)->dk_size) * (((other->ma_keys)->dk_size) <= 0xff ? 1 : ((other->ma_keys)->dk_size) <= 0xffff ? 2 : ((other->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
        for (i = 0, n = other->ma_keys->dk_nentries; i < n; i++) {
            PyObject *key, *value;
            Py_hash_t hash;
            entry = &ep0[i];
            key = entry->me_key;
            hash = entry->me_hash;
            if (other->ma_values)
                value = other->ma_values[i];
            else
                value = entry->me_value;
            if (value != ((void *)0)) {
                int err = 0;
                _Py_INCREF(((PyObject*)(key)));
                _Py_INCREF(((PyObject*)(value)));
                if (override == 1)
                    err = insertdict(mp, key, hash, value);
                else if (_PyDict_GetItem_KnownHash(a, key, hash) == ((void *)0)) {
                    if (PyErr_Occurred()) {
                        _Py_DECREF("Objects/dictobject.c", 2513, ((PyObject*)(value)));
                        _Py_DECREF("Objects/dictobject.c", 2514, ((PyObject*)(key)));
                        return -1;
                    }
                    err = insertdict(mp, key, hash, value);
                }
                else if (override != 0) {
                    _PyErr_SetKeyError(key);
                    _Py_DECREF("Objects/dictobject.c", 2521, ((PyObject*)(value)));
                    _Py_DECREF("Objects/dictobject.c", 2522, ((PyObject*)(key)));
                    return -1;
                }
                _Py_DECREF("Objects/dictobject.c", 2525, ((PyObject*)(value)));
                _Py_DECREF("Objects/dictobject.c", 2526, ((PyObject*)(key)));
                if (err != 0)
                    return -1;
                if (n != other->ma_keys->dk_nentries) {
                    PyErr_SetString(PyExc_RuntimeError,
                                    "dict mutated during update");
                    return -1;
                }
            }
        }
    }
    else {
        PyObject *keys = PyMapping_Keys(b);
        PyObject *iter;
        PyObject *key, *value;
        int status;
        if (keys == ((void *)0))
            return -1;
        iter = PyObject_GetIter(keys);
        _Py_DECREF("Objects/dictobject.c", 2554, ((PyObject*)(keys)));
        if (iter == ((void *)0))
            return -1;
        for (key = PyIter_Next(iter); key; key = PyIter_Next(iter)) {
            if (override != 1) {
                if (PyDict_GetItemWithError(a, key) != ((void *)0)) {
                    if (override != 0) {
                        _PyErr_SetKeyError(key);
                        _Py_DECREF("Objects/dictobject.c", 2563, ((PyObject*)(key)));
                        _Py_DECREF("Objects/dictobject.c", 2564, ((PyObject*)(iter)));
                        return -1;
                    }
                    _Py_DECREF("Objects/dictobject.c", 2567, ((PyObject*)(key)));
                    continue;
                }
                else if (PyErr_Occurred()) {
                    _Py_DECREF("Objects/dictobject.c", 2571, ((PyObject*)(key)));
                    _Py_DECREF("Objects/dictobject.c", 2572, ((PyObject*)(iter)));
                    return -1;
                }
            }
            value = PyObject_GetItem(b, key);
            if (value == ((void *)0)) {
                _Py_DECREF("Objects/dictobject.c", 2578, ((PyObject*)(iter)));
                _Py_DECREF("Objects/dictobject.c", 2579, ((PyObject*)(key)));
                return -1;
            }
            status = PyDict_SetItem(a, key, value);
            _Py_DECREF("Objects/dictobject.c", 2583, ((PyObject*)(key)));
            _Py_DECREF("Objects/dictobject.c", 2584, ((PyObject*)(value)));
            if (status < 0) {
                _Py_DECREF("Objects/dictobject.c", 2586, ((PyObject*)(iter)));
                return -1;
            }
        }
        _Py_DECREF("Objects/dictobject.c", 2590, ((PyObject*)(iter)));
        if (PyErr_Occurred())
            return -1;
    }
    ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(a), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(a), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(a), 0)", "Objects/dictobject.c", 2595, __extension__ __PRETTY_FUNCTION__); }));
    return 0;
}
int
PyDict_Update(PyObject *a, PyObject *b)
{
    return dict_merge(a, b, 1);
}
int
PyDict_Merge(PyObject *a, PyObject *b, int override)
{
    return dict_merge(a, b, override != 0);
}
int
_PyDict_MergeEx(PyObject *a, PyObject *b, int override)
{
    return dict_merge(a, b, override);
}
static PyObject *
dict_copy(PyDictObject *mp, PyObject *_unused_ignored __attribute__((unused)))
{
    return PyDict_Copy((PyObject*)mp);
}
PyObject *
PyDict_Copy(PyObject *o)
{
    PyObject *copy;
    PyDictObject *mp;
    Py_ssize_t i, n;
    if (o == ((void *)0) || !((((((PyObject*)(o))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 2632);
        return ((void *)0);
    }
    mp = (PyDictObject *)o;
    if (mp->ma_used == 0) {
        return PyDict_New();
    }
    if (((mp)->ma_values != ((void *)0))) {
        PyDictObject *split_copy;
        Py_ssize_t size = (((((mp->ma_keys)->dk_size)) << 1)/3);
        PyObject **newvalues;
        newvalues = ( ((size_t)(size) > ((Py_ssize_t)(((size_t)-1)>>1)) / sizeof(PyObject *)) ? ((void *)0) : ( (PyObject * *) PyMem_Malloc((size) * sizeof(PyObject *)) ) );
        if (newvalues == ((void *)0))
            return PyErr_NoMemory();
        split_copy = ( (PyDictObject *) _PyObject_GC_New(&PyDict_Type) );
        if (split_copy == ((void *)0)) {
            PyMem_Free(newvalues);
            return ((void *)0);
        }
        split_copy->ma_values = newvalues;
        split_copy->ma_keys = mp->ma_keys;
        split_copy->ma_used = mp->ma_used;
        split_copy->ma_version_tag = (++pydict_global_version);
        dictkeys_incref(mp->ma_keys);
        for (i = 0, n = size; i < n; i++) {
            PyObject *value = mp->ma_values[i];
            _Py_XINCREF(((PyObject*)(value)));
            split_copy->ma_values[i] = value;
        }
        if ((((PyGC_Head *)(mp)-1)->_gc_next != 0))
            _PyObject_GC_TRACK_impl("Objects/dictobject.c", 2665, ((PyObject*)(split_copy)));
        return (PyObject *)split_copy;
    }
    if (((((PyObject*)(mp))->ob_type) == &PyDict_Type) && mp->ma_values == ((void *)0) &&
            (mp->ma_used >= (mp->ma_keys->dk_nentries * 2) / 3))
    {
        return clone_combined_dict(mp);
    }
    copy = PyDict_New();
    if (copy == ((void *)0))
        return ((void *)0);
    if (PyDict_Merge(copy, o, 1) == 0)
        return copy;
    _Py_DECREF("Objects/dictobject.c", 2694, ((PyObject*)(copy)));
    return ((void *)0);
}
Py_ssize_t
PyDict_Size(PyObject *mp)
{
    if (mp == ((void *)0) || !((((((PyObject*)(mp))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 2702);
        return -1;
    }
    return ((PyDictObject *)mp)->ma_used;
}
PyObject *
PyDict_Keys(PyObject *mp)
{
    if (mp == ((void *)0) || !((((((PyObject*)(mp))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 2712);
        return ((void *)0);
    }
    return dict_keys((PyDictObject *)mp);
}
PyObject *
PyDict_Values(PyObject *mp)
{
    if (mp == ((void *)0) || !((((((PyObject*)(mp))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 2722);
        return ((void *)0);
    }
    return dict_values((PyDictObject *)mp);
}
PyObject *
PyDict_Items(PyObject *mp)
{
    if (mp == ((void *)0) || !((((((PyObject*)(mp))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 2732);
        return ((void *)0);
    }
    return dict_items((PyDictObject *)mp);
}
static int
dict_equal(PyDictObject *a, PyDictObject *b)
{
    Py_ssize_t i;
    if (a->ma_used != b->ma_used)
        return 0;
    for (i = 0; i < a->ma_keys->dk_nentries; i++) {
        PyDictKeyEntry *ep = &((PyDictKeyEntry*)(&((int8_t*)((a->ma_keys)->dk_indices))[((a->ma_keys)->dk_size) * (((a->ma_keys)->dk_size) <= 0xff ? 1 : ((a->ma_keys)->dk_size) <= 0xffff ? 2 : ((a->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[i];
        PyObject *aval;
        if (a->ma_values)
            aval = a->ma_values[i];
        else
            aval = ep->me_value;
        if (aval != ((void *)0)) {
            int cmp;
            PyObject *bval;
            PyObject *key = ep->me_key;
            _Py_INCREF(((PyObject*)(aval)));
            _Py_INCREF(((PyObject*)(key)));
            b->ma_keys->dk_lookup(b, key, ep->me_hash, &bval);
            if (bval == ((void *)0)) {
                _Py_DECREF("Objects/dictobject.c", 2770, ((PyObject*)(key)));
                _Py_DECREF("Objects/dictobject.c", 2771, ((PyObject*)(aval)));
                if (PyErr_Occurred())
                    return -1;
                return 0;
            }
            _Py_INCREF(((PyObject*)(bval)));
            cmp = PyObject_RichCompareBool(aval, bval, 2);
            _Py_DECREF("Objects/dictobject.c", 2778, ((PyObject*)(key)));
            _Py_DECREF("Objects/dictobject.c", 2779, ((PyObject*)(aval)));
            _Py_DECREF("Objects/dictobject.c", 2780, ((PyObject*)(bval)));
            if (cmp <= 0)
                return cmp;
        }
    }
    return 1;
}
static PyObject *
dict_richcompare(PyObject *v, PyObject *w, int op)
{
    int cmp;
    PyObject *res;
    if (!((((((PyObject*)(v))->ob_type))->tp_flags & ((1UL << 29))) != 0) || !((((((PyObject*)(w))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        res = (&_Py_NotImplementedStruct);
    }
    else if (op == 2 || op == 3) {
        cmp = dict_equal((PyDictObject *)v, (PyDictObject *)w);
        if (cmp < 0)
            return ((void *)0);
        res = (cmp == (op == 2)) ? ((PyObject *) &_Py_TrueStruct) : ((PyObject *) &_Py_FalseStruct);
    }
    else
        res = (&_Py_NotImplementedStruct);
    _Py_INCREF(((PyObject*)(res)));
    return res;
}
static PyObject *
dict___contains__(PyDictObject *self, PyObject *key)
{
    register PyDictObject *mp = self;
    Py_hash_t hash;
    Py_ssize_t ix;
    PyObject *value;
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type) ||
        (hash = ((PyASCIIObject *) key)->hash) == -1) {
        hash = PyObject_Hash(key);
        if (hash == -1)
            return ((void *)0);
    }
    ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &value);
    if (ix == (-3))
        return ((void *)0);
    if (ix == (-1) || value == ((void *)0))
        return _Py_INCREF(((PyObject*)(((PyObject *) &_Py_FalseStruct)))), ((PyObject *) &_Py_FalseStruct);
    return _Py_INCREF(((PyObject*)(((PyObject *) &_Py_TrueStruct)))), ((PyObject *) &_Py_TrueStruct);
}
static PyObject *
dict_get_impl(PyDictObject *self, PyObject *key, PyObject *default_value)
{
    PyObject *val = ((void *)0);
    Py_hash_t hash;
    Py_ssize_t ix;
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type) ||
        (hash = ((PyASCIIObject *) key)->hash) == -1) {
        hash = PyObject_Hash(key);
        if (hash == -1)
            return ((void *)0);
    }
    ix = (self->ma_keys->dk_lookup) (self, key, hash, &val);
    if (ix == (-3))
        return ((void *)0);
    if (ix == (-1) || val == ((void *)0)) {
        val = default_value;
    }
    _Py_INCREF(((PyObject*)(val)));
    return val;
}
PyObject *
PyDict_SetDefault(PyObject *d, PyObject *key, PyObject *defaultobj)
{
    PyDictObject *mp = (PyDictObject *)d;
    PyObject *value;
    Py_hash_t hash;
    if (!((((((PyObject*)(d))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 2885);
        return ((void *)0);
    }
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type) ||
        (hash = ((PyASCIIObject *) key)->hash) == -1) {
        hash = PyObject_Hash(key);
        if (hash == -1)
            return ((void *)0);
    }
    if (mp->ma_keys == &empty_keys_struct) {
        if (insert_to_emptydict(mp, key, hash, defaultobj) < 0) {
            return ((void *)0);
        }
        return defaultobj;
    }
    if (mp->ma_values != ((void *)0) && !((((PyObject*)(key))->ob_type) == &PyUnicode_Type)) {
        if (insertion_resize(mp) < 0)
            return ((void *)0);
    }
    Py_ssize_t ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &value);
    if (ix == (-3))
        return ((void *)0);
    if (((mp)->ma_values != ((void *)0)) &&
        ((ix >= 0 && value == ((void *)0) && mp->ma_used != ix) ||
         (ix == (-1) && mp->ma_used != mp->ma_keys->dk_nentries))) {
        if (insertion_resize(mp) < 0) {
            return ((void *)0);
        }
        ix = (-1);
    }
    if (ix == (-1)) {
        PyDictKeyEntry *ep, *ep0;
        value = defaultobj;
        if (mp->ma_keys->dk_usable <= 0) {
            if (insertion_resize(mp) < 0) {
                return ((void *)0);
            }
        }
        Py_ssize_t hashpos = find_empty_slot(mp->ma_keys, hash);
        ep0 = ((PyDictKeyEntry*)(&((int8_t*)((mp->ma_keys)->dk_indices))[((mp->ma_keys)->dk_size) * (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
        ep = &ep0[mp->ma_keys->dk_nentries];
        dictkeys_set_index(mp->ma_keys, hashpos, mp->ma_keys->dk_nentries);
        _Py_INCREF(((PyObject*)(key)));
        _Py_INCREF(((PyObject*)(value)));
        do { if (!(((PyGC_Head *)(mp)-1)->_gc_next != 0)) { if ((((((((((PyObject*)(key))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(key))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(key))->ob_type)->tp_is_gc(key))) && (!((((PyObject*)(key))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(key)-1)->_gc_next != 0))) || (((((((((PyObject*)(value))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(value))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(value))->ob_type)->tp_is_gc(value))) && (!((((PyObject*)(value))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(value)-1)->_gc_next != 0)))) { _PyObject_GC_TRACK_impl("Objects/dictobject.c", 2934, ((PyObject*)(mp))); } } } while(0);
        ep->me_key = key;
        ep->me_hash = hash;
        if (((mp)->ma_values != ((void *)0))) {
            ((void) sizeof ((mp->ma_values[mp->ma_keys->dk_nentries] == ((void *)0)) ? 1 : 0), __extension__ ({ if (mp->ma_values[mp->ma_keys->dk_nentries] == ((void *)0)) ; else __assert_fail ("mp->ma_values[mp->ma_keys->dk_nentries] == NULL", "Objects/dictobject.c", 2938, __extension__ __PRETTY_FUNCTION__); }));
            mp->ma_values[mp->ma_keys->dk_nentries] = value;
        }
        else {
            ep->me_value = value;
        }
        mp->ma_used++;
        mp->ma_version_tag = (++pydict_global_version);
        mp->ma_keys->dk_usable--;
        mp->ma_keys->dk_nentries++;
        ((void) sizeof ((mp->ma_keys->dk_usable >= 0) ? 1 : 0), __extension__ ({ if (mp->ma_keys->dk_usable >= 0) ; else __assert_fail ("mp->ma_keys->dk_usable >= 0", "Objects/dictobject.c", 2948, __extension__ __PRETTY_FUNCTION__); }));
    }
    else if (value == ((void *)0)) {
        value = defaultobj;
        ((void) sizeof ((((mp)->ma_values != ((void *)0))) ? 1 : 0), __extension__ ({ if (((mp)->ma_values != ((void *)0))) ; else __assert_fail ("_PyDict_HasSplitTable(mp)", "Objects/dictobject.c", 2952, __extension__ __PRETTY_FUNCTION__); }));
        ((void) sizeof ((ix == mp->ma_used) ? 1 : 0), __extension__ ({ if (ix == mp->ma_used) ; else __assert_fail ("ix == mp->ma_used", "Objects/dictobject.c", 2953, __extension__ __PRETTY_FUNCTION__); }));
        _Py_INCREF(((PyObject*)(value)));
        do { if (!(((PyGC_Head *)(mp)-1)->_gc_next != 0)) { if ((((((((((PyObject*)(key))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(key))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(key))->ob_type)->tp_is_gc(key))) && (!((((PyObject*)(key))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(key)-1)->_gc_next != 0))) || (((((((((PyObject*)(value))->ob_type)))->tp_flags & ((1UL << 14))) != 0) && ((((PyObject*)(value))->ob_type)->tp_is_gc == ((void *)0) || (((PyObject*)(value))->ob_type)->tp_is_gc(value))) && (!((((PyObject*)(value))->ob_type) == &PyTuple_Type) || (((PyGC_Head *)(value)-1)->_gc_next != 0)))) { _PyObject_GC_TRACK_impl("Objects/dictobject.c", 2955, ((PyObject*)(mp))); } } } while(0);
        mp->ma_values[ix] = value;
        mp->ma_used++;
        mp->ma_version_tag = (++pydict_global_version);
    }
    ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(mp), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(mp), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(mp), 0)", "Objects/dictobject.c", 2961, __extension__ __PRETTY_FUNCTION__); }));
    return value;
}
static PyObject *
dict_setdefault_impl(PyDictObject *self, PyObject *key,
                     PyObject *default_value)
{
    PyObject *val;
    val = PyDict_SetDefault((PyObject *)self, key, default_value);
    _Py_XINCREF(((PyObject*)(val)));
    return val;
}
static PyObject *
dict_clear(PyDictObject *mp, PyObject *_unused_ignored __attribute__((unused)))
{
    PyDict_Clear((PyObject *)mp);
    return _Py_INCREF(((PyObject*)((&_Py_NoneStruct)))), (&_Py_NoneStruct);
}
static const char dict_pop__doc__[] = "D.pop(k[,d]) -> v, remove specified key and return the corresponding value.\nIf key is not found, d is returned if given, otherwise KeyError is raised";
static PyObject *
dict_pop(PyDictObject *self, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = ((void *)0);
    PyObject *key;
    PyObject *default_value = ((void *)0);
    if (!(((1) <= (nargs) && (nargs) <= (2)) || _PyArg_CheckPositional(("pop"), (nargs), (1), (2)))) {
        goto exit;
    }
    key = args[0];
    if (nargs < 2) {
        goto skip_optional;
    }
    default_value = args[1];
skip_optional:
    return_value = _PyDict_Pop((PyObject*)self, key, default_value);
exit:
    return return_value;
}
static PyObject *
dict_popitem_impl(PyDictObject *self)
{
    Py_ssize_t i, j;
    PyDictKeyEntry *ep0, *ep;
    PyObject *res;
    res = PyTuple_New(2);
    if (res == ((void *)0))
        return ((void *)0);
    if (self->ma_used == 0) {
        _Py_DECREF("Objects/dictobject.c", 3059, ((PyObject*)(res)));
        PyErr_SetString(PyExc_KeyError, "popitem(): dictionary is empty");
        return ((void *)0);
    }
    if (self->ma_keys->dk_lookup == lookdict_split) {
        if (dictresize(self, ((self->ma_keys)->dk_size))) {
            _Py_DECREF("Objects/dictobject.c", 3066, ((PyObject*)(res)));
            return ((void *)0);
        }
    }
    if ((self)->ma_keys->dk_lookup == lookdict_unicode_nodummy) { (self)->ma_keys->dk_lookup = lookdict_unicode; };
    ep0 = ((PyDictKeyEntry*)(&((int8_t*)((self->ma_keys)->dk_indices))[((self->ma_keys)->dk_size) * (((self->ma_keys)->dk_size) <= 0xff ? 1 : ((self->ma_keys)->dk_size) <= 0xffff ? 2 : ((self->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    i = self->ma_keys->dk_nentries - 1;
    while (i >= 0 && ep0[i].me_value == ((void *)0)) {
        i--;
    }
    ((void) sizeof ((i >= 0) ? 1 : 0), __extension__ ({ if (i >= 0) ; else __assert_fail ("i >= 0", "Objects/dictobject.c", 3078, __extension__ __PRETTY_FUNCTION__); }));
    ep = &ep0[i];
    j = lookdict_index(self->ma_keys, ep->me_hash, i);
    ((void) sizeof ((j >= 0) ? 1 : 0), __extension__ ({ if (j >= 0) ; else __assert_fail ("j >= 0", "Objects/dictobject.c", 3082, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((dictkeys_get_index(self->ma_keys, j) == i) ? 1 : 0), __extension__ ({ if (dictkeys_get_index(self->ma_keys, j) == i) ; else __assert_fail ("dictkeys_get_index(self->ma_keys, j) == i", "Objects/dictobject.c", 3083, __extension__ __PRETTY_FUNCTION__); }));
    dictkeys_set_index(self->ma_keys, j, (-2));
    ((((void) sizeof ((((((((PyObject*)(res))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(res))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(res)", "Objects/dictobject.c", 3086, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(res))->ob_item[0] = ep->me_key);
    ((((void) sizeof ((((((((PyObject*)(res))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(res))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(res)", "Objects/dictobject.c", 3087, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(res))->ob_item[1] = ep->me_value);
    ep->me_key = ((void *)0);
    ep->me_value = ((void *)0);
    self->ma_keys->dk_nentries = i;
    self->ma_used--;
    self->ma_version_tag = (++pydict_global_version);
    ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(self), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(self), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(self), 0)", "Objects/dictobject.c", 3094, __extension__ __PRETTY_FUNCTION__); }));
    return res;
}
static int
dict_traverse(PyObject *op, visitproc visit, void *arg)
{
    PyDictObject *mp = (PyDictObject *)op;
    PyDictKeysObject *keys = mp->ma_keys;
    PyDictKeyEntry *entries = ((PyDictKeyEntry*)(&((int8_t*)((keys)->dk_indices))[((keys)->dk_size) * (((keys)->dk_size) <= 0xff ? 1 : ((keys)->dk_size) <= 0xffff ? 2 : ((keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]));
    Py_ssize_t i, n = keys->dk_nentries;
    if (keys->dk_lookup == lookdict) {
        for (i = 0; i < n; i++) {
            if (entries[i].me_value != ((void *)0)) {
                do { if (entries[i].me_value) { int vret = visit(((PyObject*)(entries[i].me_value)), arg); if (vret) return vret; } } while (0);
                do { if (entries[i].me_key) { int vret = visit(((PyObject*)(entries[i].me_key)), arg); if (vret) return vret; } } while (0);
            }
        }
    }
    else {
        if (mp->ma_values != ((void *)0)) {
            for (i = 0; i < n; i++) {
                do { if (mp->ma_values[i]) { int vret = visit(((PyObject*)(mp->ma_values[i])), arg); if (vret) return vret; } } while (0);
            }
        }
        else {
            for (i = 0; i < n; i++) {
                do { if (entries[i].me_value) { int vret = visit(((PyObject*)(entries[i].me_value)), arg); if (vret) return vret; } } while (0);
            }
        }
    }
    return 0;
}
static int
dict_tp_clear(PyObject *op)
{
    PyDict_Clear(op);
    return 0;
}
static PyObject *dictiter_new(PyDictObject *, PyTypeObject *);
Py_ssize_t
_PyDict_SizeOf(PyDictObject *mp)
{
    Py_ssize_t size, usable, res;
    size = ((mp->ma_keys)->dk_size);
    usable = (((size) << 1)/3);
    res = ( ((((PyObject*)(mp))->ob_type))->tp_basicsize );
    if (mp->ma_values)
        res += usable * sizeof(PyObject*);
    if (mp->ma_keys->dk_refcnt == 1)
        res += (sizeof(PyDictKeysObject)
                + (((mp->ma_keys)->dk_size) <= 0xff ? 1 : ((mp->ma_keys)->dk_size) <= 0xffff ? 2 : ((mp->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t)) * size
                + sizeof(PyDictKeyEntry) * usable);
    return res;
}
Py_ssize_t
_PyDict_KeysSize(PyDictKeysObject *keys)
{
    return (sizeof(PyDictKeysObject)
            + (((keys)->dk_size) <= 0xff ? 1 : ((keys)->dk_size) <= 0xffff ? 2 : ((keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t)) * ((keys)->dk_size)
            + (((((keys)->dk_size)) << 1)/3) * sizeof(PyDictKeyEntry));
}
static PyObject *
dict_sizeof(PyDictObject *mp, PyObject *_unused_ignored __attribute__((unused)))
{
    return PyLong_FromSsize_t(_PyDict_SizeOf(mp));
}
static const char getitem__doc__[] = "x.__getitem__(y) <==> x[y]";
static const char sizeof__doc__[] = "D.__sizeof__() -> size of D in memory, in bytes";
static const char update__doc__[] = "D.update([E, ]**F) -> None.  Update D from dict/iterable E and F.\nIf E is present and has a .keys() method, then does:  for k in E: D[k] = E[k]\nIf E is present and lacks a .keys() method, then does:  for k, v in E: D[k] = v\nIn either case, this is followed by: for k in F:  D[k] = F[k]";
static const char clear__doc__[] = "D.clear() -> None.  Remove all items from D.";
static const char copy__doc__[] = "D.copy() -> a shallow copy of D";
static PyObject *dictkeys_new(PyObject *, PyObject *);
static PyObject *dictitems_new(PyObject *, PyObject *);
static PyObject *dictvalues_new(PyObject *, PyObject *);
static const char keys__doc__[] = "D.keys() -> a set-like object providing a view on D's keys";
static const char items__doc__[] = "D.items() -> a set-like object providing a view on D's items";
static const char values__doc__[] = "D.values() -> an object providing a view on D's values";
static PyMethodDef mapp_methods[] = {
    {"__contains__", (PyCFunction)dict___contains__, 0x0008|0x0040, dict___contains____doc__},
    {"__getitem__", (PyCFunction)(void(*)(void))dict_subscript, 0x0008 | 0x0040,
     getitem__doc__},
    {"__sizeof__", (PyCFunction)(void(*)(void))dict_sizeof, 0x0004,
     sizeof__doc__},
    {"get", (PyCFunction)(void(*)(void))dict_get, 0x0080, dict_get__doc__},
    {"setdefault", (PyCFunction)(void(*)(void))dict_setdefault, 0x0080, dict_setdefault__doc__},
    {"pop", (PyCFunction)(void(*)(void))dict_pop, 0x0080, dict_pop__doc__},
    {"popitem", (PyCFunction)dict_popitem, 0x0004, dict_popitem__doc__},
    {"keys", dictkeys_new, 0x0004,
    keys__doc__},
    {"items", dictitems_new, 0x0004,
    items__doc__},
    {"values", dictvalues_new, 0x0004,
    values__doc__},
    {"update", (PyCFunction)(void(*)(void))dict_update, 0x0001 | 0x0002,
     update__doc__},
    {"fromkeys", (PyCFunction)(void(*)(void))dict_fromkeys, 0x0080|0x0010, dict_fromkeys__doc__},
    {"clear", (PyCFunction)dict_clear, 0x0004,
     clear__doc__},
    {"copy", (PyCFunction)dict_copy, 0x0004,
     copy__doc__},
    {"__reversed__", (PyCFunction)dict___reversed__, 0x0004, dict___reversed____doc__},
    {((void *)0), ((void *)0)}
};
int
PyDict_Contains(PyObject *op, PyObject *key)
{
    Py_hash_t hash;
    Py_ssize_t ix;
    PyDictObject *mp = (PyDictObject *)op;
    PyObject *value;
    if (!((((PyObject*)(key))->ob_type) == &PyUnicode_Type) ||
        (hash = ((PyASCIIObject *) key)->hash) == -1) {
        hash = PyObject_Hash(key);
        if (hash == -1)
            return -1;
    }
    ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &value);
    if (ix == (-3))
        return -1;
    return (ix != (-1) && value != ((void *)0));
}
int
_PyDict_Contains(PyObject *op, PyObject *key, Py_hash_t hash)
{
    PyDictObject *mp = (PyDictObject *)op;
    PyObject *value;
    Py_ssize_t ix;
    ix = (mp->ma_keys->dk_lookup)(mp, key, hash, &value);
    if (ix == (-3))
        return -1;
    return (ix != (-1) && value != ((void *)0));
}
static PySequenceMethods dict_as_sequence = {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    PyDict_Contains,
    0,
    0,
};
static PyObject *
dict_new(PyTypeObject *type, PyObject *args, PyObject *kwds)
{
    PyObject *self;
    PyDictObject *d;
    ((void) sizeof ((type != ((void *)0) && type->tp_alloc != ((void *)0)) ? 1 : 0), __extension__ ({ if (type != ((void *)0) && type->tp_alloc != ((void *)0)) ; else __assert_fail ("type != NULL && type->tp_alloc != NULL", "Objects/dictobject.c", 3283, __extension__ __PRETTY_FUNCTION__); }));
    self = type->tp_alloc(type, 0);
    if (self == ((void *)0))
        return ((void *)0);
    d = (PyDictObject *)self;
    if (type == &PyDict_Type)
        _PyObject_GC_UNTRACK_impl("Objects/dictobject.c", 3291, ((PyObject*)(d)));
    d->ma_used = 0;
    d->ma_version_tag = (++pydict_global_version);
    d->ma_keys = new_keys_object(8);
    if (d->ma_keys == ((void *)0)) {
        _Py_DECREF("Objects/dictobject.c", 3297, ((PyObject*)(self)));
        return ((void *)0);
    }
    ((void) sizeof ((_PyDict_CheckConsistency((PyObject *)(d), 0)) ? 1 : 0), __extension__ ({ if (_PyDict_CheckConsistency((PyObject *)(d), 0)) ; else __assert_fail ("_PyDict_CheckConsistency((PyObject *)(d), 0)", "Objects/dictobject.c", 3300, __extension__ __PRETTY_FUNCTION__); }));
    return self;
}
static int
dict_init(PyObject *self, PyObject *args, PyObject *kwds)
{
    return dict_update_common(self, args, kwds, "dict");
}
static PyObject *
dict_iter(PyDictObject *dict)
{
    return dictiter_new(dict, &PyDictIterKey_Type);
}
static const char dictionary_doc[] = "dict() -> new empty dictionary\n" "dict(mapping) -> new dictionary initialized from a mapping object's\n" "    (key, value) pairs\n" "dict(iterable) -> new dictionary initialized as if via:\n" "    d = {}\n" "    for k, v in iterable:\n" "        d[k] = v\n" "dict(**kwargs) -> new dictionary initialized with the name=value pairs\n" "    in the keyword argument list.  For example:  dict(one=1, two=2)";
PyTypeObject PyDict_Type = {
    { { 1, &PyType_Type }, 0 },
    "dict",
    sizeof(PyDictObject),
    0,
    (destructor)dict_dealloc,
    0,
    0,
    0,
    0,
    (reprfunc)dict_repr,
    0,
    &dict_as_sequence,
    &dict_as_mapping,
    PyObject_HashNotImplemented,
    0,
    0,
    PyObject_GenericGetAttr,
    0,
    0,
    ( 0 | (1UL << 18) | 0) | (1UL << 14) |
        (1UL << 10) | (1UL << 29),
    dictionary_doc,
    dict_traverse,
    dict_tp_clear,
    dict_richcompare,
    0,
    (getiterfunc)dict_iter,
    0,
    mapp_methods,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    dict_init,
    PyType_GenericAlloc,
    dict_new,
    PyObject_GC_Del,
};
PyObject *
_PyDict_GetItemId(PyObject *dp, struct _Py_Identifier *key)
{
    PyObject *kv;
    kv = _PyUnicode_FromId(key);
    if (kv == ((void *)0)) {
        PyErr_Clear();
        return ((void *)0);
    }
    return PyDict_GetItem(dp, kv);
}
PyObject *
PyDict_GetItemString(PyObject *v, const char *key)
{
    PyObject *kv, *rv;
    kv = PyUnicode_FromString(key);
    if (kv == ((void *)0)) {
        PyErr_Clear();
        return ((void *)0);
    }
    rv = PyDict_GetItem(v, kv);
    _Py_DECREF("Objects/dictobject.c", 3394, ((PyObject*)(kv)));
    return rv;
}
int
_PyDict_SetItemId(PyObject *v, struct _Py_Identifier *key, PyObject *item)
{
    PyObject *kv;
    kv = _PyUnicode_FromId(key);
    if (kv == ((void *)0))
        return -1;
    return PyDict_SetItem(v, kv, item);
}
int
PyDict_SetItemString(PyObject *v, const char *key, PyObject *item)
{
    PyObject *kv;
    int err;
    kv = PyUnicode_FromString(key);
    if (kv == ((void *)0))
        return -1;
    PyUnicode_InternInPlace(&kv);
    err = PyDict_SetItem(v, kv, item);
    _Py_DECREF("Objects/dictobject.c", 3418, ((PyObject*)(kv)));
    return err;
}
int
_PyDict_DelItemId(PyObject *v, _Py_Identifier *key)
{
    PyObject *kv = _PyUnicode_FromId(key);
    if (kv == ((void *)0))
        return -1;
    return PyDict_DelItem(v, kv);
}
int
PyDict_DelItemString(PyObject *v, const char *key)
{
    PyObject *kv;
    int err;
    kv = PyUnicode_FromString(key);
    if (kv == ((void *)0))
        return -1;
    err = PyDict_DelItem(v, kv);
    _Py_DECREF("Objects/dictobject.c", 3440, ((PyObject*)(kv)));
    return err;
}
typedef struct {
    PyObject ob_base;
    PyDictObject *di_dict;
    Py_ssize_t di_used;
    Py_ssize_t di_pos;
    PyObject* di_result;
    Py_ssize_t len;
} dictiterobject;
static PyObject *
dictiter_new(PyDictObject *dict, PyTypeObject *itertype)
{
    dictiterobject *di;
    di = ( (dictiterobject *) _PyObject_GC_New(itertype) );
    if (di == ((void *)0)) {
        return ((void *)0);
    }
    _Py_INCREF(((PyObject*)(dict)));
    di->di_dict = dict;
    di->di_used = dict->ma_used;
    di->len = dict->ma_used;
    if (itertype == &PyDictRevIterKey_Type ||
         itertype == &PyDictRevIterItem_Type ||
         itertype == &PyDictRevIterValue_Type) {
        if (dict->ma_values) {
            di->di_pos = dict->ma_used - 1;
        }
        else {
            di->di_pos = dict->ma_keys->dk_nentries - 1;
        }
    }
    else {
        di->di_pos = 0;
    }
    if (itertype == &PyDictIterItem_Type ||
        itertype == &PyDictRevIterItem_Type) {
        di->di_result = PyTuple_Pack(2, (&_Py_NoneStruct), (&_Py_NoneStruct));
        if (di->di_result == ((void *)0)) {
            _Py_DECREF("Objects/dictobject.c", 3484, ((PyObject*)(di)));
            return ((void *)0);
        }
    }
    else {
        di->di_result = ((void *)0);
    }
    _PyObject_GC_TRACK_impl("Objects/dictobject.c", 3491, ((PyObject*)(di)));
    return (PyObject *)di;
}
static void
dictiter_dealloc(dictiterobject *di)
{
    _PyObject_GC_UNTRACK_impl("Objects/dictobject.c", 3499, ((PyObject*)(di)));
    _Py_XDECREF(((PyObject*)(di->di_dict)));
    _Py_XDECREF(((PyObject*)(di->di_result)));
    PyObject_GC_Del(di);
}
static int
dictiter_traverse(dictiterobject *di, visitproc visit, void *arg)
{
    do { if (di->di_dict) { int vret = visit(((PyObject*)(di->di_dict)), arg); if (vret) return vret; } } while (0);
    do { if (di->di_result) { int vret = visit(((PyObject*)(di->di_result)), arg); if (vret) return vret; } } while (0);
    return 0;
}
static PyObject *
dictiter_len(dictiterobject *di, PyObject *_unused_ignored __attribute__((unused)))
{
    Py_ssize_t len = 0;
    if (di->di_dict != ((void *)0) && di->di_used == di->di_dict->ma_used)
        len = di->len;
    return PyLong_FromSize_t(len);
}
static const char length_hint_doc[] = "Private method returning an estimate of len(list(it)).";
static PyObject *
dictiter_reduce(dictiterobject *di, PyObject *_unused_ignored __attribute__((unused)));
static const char reduce_doc[] = "Return state information for pickling.";
static PyMethodDef dictiter_methods[] = {
    {"__length_hint__", (PyCFunction)(void(*)(void))dictiter_len, 0x0004,
     length_hint_doc},
     {"__reduce__", (PyCFunction)(void(*)(void))dictiter_reduce, 0x0004,
     reduce_doc},
    {((void *)0), ((void *)0)}
};
static PyObject*
dictiter_iternextkey(dictiterobject *di)
{
    PyObject *key;
    Py_ssize_t i;
    PyDictKeysObject *k;
    PyDictObject *d = di->di_dict;
    if (d == ((void *)0))
        return ((void *)0);
    ((void) sizeof ((((((((PyObject*)(d))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(d))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ; else __assert_fail ("PyDict_Check(d)", "Objects/dictobject.c", 3548, __extension__ __PRETTY_FUNCTION__); }));
    if (di->di_used != d->ma_used) {
        PyErr_SetString(PyExc_RuntimeError,
                        "dictionary changed size during iteration");
        di->di_used = -1;
        return ((void *)0);
    }
    i = di->di_pos;
    k = d->ma_keys;
    ((void) sizeof ((i >= 0) ? 1 : 0), __extension__ ({ if (i >= 0) ; else __assert_fail ("i >= 0", "Objects/dictobject.c", 3559, __extension__ __PRETTY_FUNCTION__); }));
    if (d->ma_values) {
        if (i >= d->ma_used)
            goto fail;
        key = ((PyDictKeyEntry*)(&((int8_t*)((k)->dk_indices))[((k)->dk_size) * (((k)->dk_size) <= 0xff ? 1 : ((k)->dk_size) <= 0xffff ? 2 : ((k)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[i].me_key;
        ((void) sizeof ((d->ma_values[i] != ((void *)0)) ? 1 : 0), __extension__ ({ if (d->ma_values[i] != ((void *)0)) ; else __assert_fail ("d->ma_values[i] != NULL", "Objects/dictobject.c", 3564, __extension__ __PRETTY_FUNCTION__); }));
    }
    else {
        Py_ssize_t n = k->dk_nentries;
        PyDictKeyEntry *entry_ptr = &((PyDictKeyEntry*)(&((int8_t*)((k)->dk_indices))[((k)->dk_size) * (((k)->dk_size) <= 0xff ? 1 : ((k)->dk_size) <= 0xffff ? 2 : ((k)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[i];
        while (i < n && entry_ptr->me_value == ((void *)0)) {
            entry_ptr++;
            i++;
        }
        if (i >= n)
            goto fail;
        key = entry_ptr->me_key;
    }
    if (di->len == 0) {
        PyErr_SetString(PyExc_RuntimeError,
                        "dictionary keys changed during iteration");
        goto fail;
    }
    di->di_pos = i+1;
    di->len--;
    _Py_INCREF(((PyObject*)(key)));
    return key;
fail:
    di->di_dict = ((void *)0);
    _Py_DECREF("Objects/dictobject.c", 3590, ((PyObject*)(d)));
    return ((void *)0);
}
PyTypeObject PyDictIterKey_Type = {
    { { 1, &PyType_Type }, 0 },
    "dict_keyiterator",
    sizeof(dictiterobject),
    0,
    (destructor)dictiter_dealloc,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    PyObject_GenericGetAttr,
    0,
    0,
    ( 0 | (1UL << 18) | 0) | (1UL << 14),
    0,
    (traverseproc)dictiter_traverse,
    0,
    0,
    0,
    PyObject_SelfIter,
    (iternextfunc)dictiter_iternextkey,
    dictiter_methods,
    0,
};
static PyObject *
dictiter_iternextvalue(dictiterobject *di)
{
    PyObject *value;
    Py_ssize_t i;
    PyDictObject *d = di->di_dict;
    if (d == ((void *)0))
        return ((void *)0);
    ((void) sizeof ((((((((PyObject*)(d))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(d))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ; else __assert_fail ("PyDict_Check(d)", "Objects/dictobject.c", 3636, __extension__ __PRETTY_FUNCTION__); }));
    if (di->di_used != d->ma_used) {
        PyErr_SetString(PyExc_RuntimeError,
                        "dictionary changed size during iteration");
        di->di_used = -1;
        return ((void *)0);
    }
    i = di->di_pos;
    ((void) sizeof ((i >= 0) ? 1 : 0), __extension__ ({ if (i >= 0) ; else __assert_fail ("i >= 0", "Objects/dictobject.c", 3646, __extension__ __PRETTY_FUNCTION__); }));
    if (d->ma_values) {
        if (i >= d->ma_used)
            goto fail;
        value = d->ma_values[i];
        ((void) sizeof ((value != ((void *)0)) ? 1 : 0), __extension__ ({ if (value != ((void *)0)) ; else __assert_fail ("value != NULL", "Objects/dictobject.c", 3651, __extension__ __PRETTY_FUNCTION__); }));
    }
    else {
        Py_ssize_t n = d->ma_keys->dk_nentries;
        PyDictKeyEntry *entry_ptr = &((PyDictKeyEntry*)(&((int8_t*)((d->ma_keys)->dk_indices))[((d->ma_keys)->dk_size) * (((d->ma_keys)->dk_size) <= 0xff ? 1 : ((d->ma_keys)->dk_size) <= 0xffff ? 2 : ((d->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[i];
        while (i < n && entry_ptr->me_value == ((void *)0)) {
            entry_ptr++;
            i++;
        }
        if (i >= n)
            goto fail;
        value = entry_ptr->me_value;
    }
    if (di->len == 0) {
        PyErr_SetString(PyExc_RuntimeError,
                        "dictionary keys changed during iteration");
        goto fail;
    }
    di->di_pos = i+1;
    di->len--;
    _Py_INCREF(((PyObject*)(value)));
    return value;
fail:
    di->di_dict = ((void *)0);
    _Py_DECREF("Objects/dictobject.c", 3677, ((PyObject*)(d)));
    return ((void *)0);
}
PyTypeObject PyDictIterValue_Type = {
    { { 1, &PyType_Type }, 0 },
    "dict_valueiterator",
    sizeof(dictiterobject),
    0,
    (destructor)dictiter_dealloc,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    PyObject_GenericGetAttr,
    0,
    0,
    ( 0 | (1UL << 18) | 0) | (1UL << 14),
    0,
    (traverseproc)dictiter_traverse,
    0,
    0,
    0,
    PyObject_SelfIter,
    (iternextfunc)dictiter_iternextvalue,
    dictiter_methods,
    0,
};
static PyObject *
dictiter_iternextitem(dictiterobject *di)
{
    PyObject *key, *value, *result;
    Py_ssize_t i;
    PyDictObject *d = di->di_dict;
    if (d == ((void *)0))
        return ((void *)0);
    ((void) sizeof ((((((((PyObject*)(d))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(d))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ; else __assert_fail ("PyDict_Check(d)", "Objects/dictobject.c", 3723, __extension__ __PRETTY_FUNCTION__); }));
    if (di->di_used != d->ma_used) {
        PyErr_SetString(PyExc_RuntimeError,
                        "dictionary changed size during iteration");
        di->di_used = -1;
        return ((void *)0);
    }
    i = di->di_pos;
    ((void) sizeof ((i >= 0) ? 1 : 0), __extension__ ({ if (i >= 0) ; else __assert_fail ("i >= 0", "Objects/dictobject.c", 3733, __extension__ __PRETTY_FUNCTION__); }));
    if (d->ma_values) {
        if (i >= d->ma_used)
            goto fail;
        key = ((PyDictKeyEntry*)(&((int8_t*)((d->ma_keys)->dk_indices))[((d->ma_keys)->dk_size) * (((d->ma_keys)->dk_size) <= 0xff ? 1 : ((d->ma_keys)->dk_size) <= 0xffff ? 2 : ((d->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[i].me_key;
        value = d->ma_values[i];
        ((void) sizeof ((value != ((void *)0)) ? 1 : 0), __extension__ ({ if (value != ((void *)0)) ; else __assert_fail ("value != NULL", "Objects/dictobject.c", 3739, __extension__ __PRETTY_FUNCTION__); }));
    }
    else {
        Py_ssize_t n = d->ma_keys->dk_nentries;
        PyDictKeyEntry *entry_ptr = &((PyDictKeyEntry*)(&((int8_t*)((d->ma_keys)->dk_indices))[((d->ma_keys)->dk_size) * (((d->ma_keys)->dk_size) <= 0xff ? 1 : ((d->ma_keys)->dk_size) <= 0xffff ? 2 : ((d->ma_keys)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[i];
        while (i < n && entry_ptr->me_value == ((void *)0)) {
            entry_ptr++;
            i++;
        }
        if (i >= n)
            goto fail;
        key = entry_ptr->me_key;
        value = entry_ptr->me_value;
    }
    if (di->len == 0) {
        PyErr_SetString(PyExc_RuntimeError,
                        "dictionary keys changed during iteration");
        goto fail;
    }
    di->di_pos = i+1;
    di->len--;
    _Py_INCREF(((PyObject*)(key)));
    _Py_INCREF(((PyObject*)(value)));
    result = di->di_result;
    if ((((PyObject*)(result))->ob_refcnt) == 1) {
        PyObject *oldkey = ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3765, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[0]);
        PyObject *oldvalue = ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3766, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[1]);
        ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3767, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[0] = key);
        ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3768, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[1] = value);
        _Py_INCREF(((PyObject*)(result)));
        _Py_DECREF("Objects/dictobject.c", 3770, ((PyObject*)(oldkey)));
        _Py_DECREF("Objects/dictobject.c", 3771, ((PyObject*)(oldvalue)));
        if (!(((PyGC_Head *)(result)-1)->_gc_next != 0)) {
            _PyObject_GC_TRACK_impl("Objects/dictobject.c", 3775, ((PyObject*)(result)));
        }
    }
    else {
        result = PyTuple_New(2);
        if (result == ((void *)0))
            return ((void *)0);
        ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3782, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[0] = key);
        ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3783, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[1] = value);
    }
    return result;
fail:
    di->di_dict = ((void *)0);
    _Py_DECREF("Objects/dictobject.c", 3789, ((PyObject*)(d)));
    return ((void *)0);
}
PyTypeObject PyDictIterItem_Type = {
    { { 1, &PyType_Type }, 0 },
    "dict_itemiterator",
    sizeof(dictiterobject),
    0,
    (destructor)dictiter_dealloc,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    PyObject_GenericGetAttr,
    0,
    0,
    ( 0 | (1UL << 18) | 0) | (1UL << 14),
    0,
    (traverseproc)dictiter_traverse,
    0,
    0,
    0,
    PyObject_SelfIter,
    (iternextfunc)dictiter_iternextitem,
    dictiter_methods,
    0,
};
static PyObject *
dictreviter_iternext(dictiterobject *di)
{
    PyDictObject *d = di->di_dict;
    if (d == ((void *)0)) {
        return ((void *)0);
    }
    ((void) sizeof ((((((((PyObject*)(d))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(d))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ; else __assert_fail ("PyDict_Check(d)", "Objects/dictobject.c", 3837, __extension__ __PRETTY_FUNCTION__); }));
    if (di->di_used != d->ma_used) {
        PyErr_SetString(PyExc_RuntimeError,
                         "dictionary changed size during iteration");
        di->di_used = -1;
        return ((void *)0);
    }
    Py_ssize_t i = di->di_pos;
    PyDictKeysObject *k = d->ma_keys;
    PyObject *key, *value, *result;
    if (i < 0) {
        goto fail;
    }
    if (d->ma_values) {
        key = ((PyDictKeyEntry*)(&((int8_t*)((k)->dk_indices))[((k)->dk_size) * (((k)->dk_size) <= 0xff ? 1 : ((k)->dk_size) <= 0xffff ? 2 : ((k)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[i].me_key;
        value = d->ma_values[i];
        ((void) sizeof ((value != ((void *)0)) ? 1 : 0), __extension__ ({ if (value != ((void *)0)) ; else __assert_fail ("value != NULL", "Objects/dictobject.c", 3856, __extension__ __PRETTY_FUNCTION__); }));
    }
    else {
        PyDictKeyEntry *entry_ptr = &((PyDictKeyEntry*)(&((int8_t*)((k)->dk_indices))[((k)->dk_size) * (((k)->dk_size) <= 0xff ? 1 : ((k)->dk_size) <= 0xffff ? 2 : ((k)->dk_size) <= 0xffffffff ? 4 : sizeof(int64_t))]))[i];
        while (entry_ptr->me_value == ((void *)0)) {
            if (--i < 0) {
                goto fail;
            }
            entry_ptr--;
        }
        key = entry_ptr->me_key;
        value = entry_ptr->me_value;
    }
    di->di_pos = i-1;
    di->len--;
    if ((((PyObject*)(di))->ob_type) == &PyDictRevIterKey_Type) {
        _Py_INCREF(((PyObject*)(key)));
        return key;
    }
    else if ((((PyObject*)(di))->ob_type) == &PyDictRevIterValue_Type) {
        _Py_INCREF(((PyObject*)(value)));
        return value;
    }
    else if ((((PyObject*)(di))->ob_type) == &PyDictRevIterItem_Type) {
        _Py_INCREF(((PyObject*)(key)));
        _Py_INCREF(((PyObject*)(value)));
        result = di->di_result;
        if ((((PyObject*)(result))->ob_refcnt) == 1) {
            PyObject *oldkey = ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3885, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[0]);
            PyObject *oldvalue = ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3886, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[1]);
            ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3887, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[0] = key);
            ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3888, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[1] = value);
            _Py_INCREF(((PyObject*)(result)));
            _Py_DECREF("Objects/dictobject.c", 3890, ((PyObject*)(oldkey)));
            _Py_DECREF("Objects/dictobject.c", 3891, ((PyObject*)(oldvalue)));
            if (!(((PyGC_Head *)(result)-1)->_gc_next != 0)) {
                _PyObject_GC_TRACK_impl("Objects/dictobject.c", 3895, ((PyObject*)(result)));
            }
        }
        else {
            result = PyTuple_New(2);
            if (result == ((void *)0)) {
                return ((void *)0);
            }
            ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3903, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[0] = key);
            ((((void) sizeof ((((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(result))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(result)", "Objects/dictobject.c", 3904, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(result))->ob_item[1] = value);
        }
        return result;
    }
    else {
        Py_FatalError("Unreachable C code path reached");
    }
fail:
    di->di_dict = ((void *)0);
    _Py_DECREF("Objects/dictobject.c", 3914, ((PyObject*)(d)));
    return ((void *)0);
}
PyTypeObject PyDictRevIterKey_Type = {
    { { 1, &PyType_Type }, 0 },
    "dict_reversekeyiterator",
    sizeof(dictiterobject),
    .tp_dealloc = (destructor)dictiter_dealloc,
    .tp_flags = ( 0 | (1UL << 18) | 0) | (1UL << 14),
    .tp_traverse = (traverseproc)dictiter_traverse,
    .tp_iter = PyObject_SelfIter,
    .tp_iternext = (iternextfunc)dictreviter_iternext,
    .tp_methods = dictiter_methods
};
static PyObject *
dict___reversed___impl(PyDictObject *self)
{
    ((void) sizeof ((((((((PyObject*)(self))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(self))->ob_type))->tp_flags & ((1UL << 29))) != 0)) ; else __assert_fail ("PyDict_Check(self)", "Objects/dictobject.c", 3941, __extension__ __PRETTY_FUNCTION__); }));
    return dictiter_new(self, &PyDictRevIterKey_Type);
}
static PyObject *
dictiter_reduce(dictiterobject *di, PyObject *_unused_ignored __attribute__((unused)))
{
    static _Py_Identifier PyId_iter = { .next = ((void *)0), .string = "iter", .object = ((void *)0) };
    dictiterobject tmp = *di;
    _Py_XINCREF(((PyObject*)(tmp.di_dict)));
    PyObject *list = PySequence_List((PyObject*)&tmp);
    _Py_XDECREF(((PyObject*)(tmp.di_dict)));
    if (list == ((void *)0)) {
        return ((void *)0);
    }
    return Py_BuildValue("N(N)", _PyEval_GetBuiltinId(&PyId_iter), list);
}
PyTypeObject PyDictRevIterItem_Type = {
    { { 1, &PyType_Type }, 0 },
    "dict_reverseitemiterator",
    sizeof(dictiterobject),
    .tp_dealloc = (destructor)dictiter_dealloc,
    .tp_flags = ( 0 | (1UL << 18) | 0) | (1UL << 14),
    .tp_traverse = (traverseproc)dictiter_traverse,
    .tp_iter = PyObject_SelfIter,
    .tp_iternext = (iternextfunc)dictreviter_iternext,
    .tp_methods = dictiter_methods
};
PyTypeObject PyDictRevIterValue_Type = {
    { { 1, &PyType_Type }, 0 },
    "dict_reversevalueiterator",
    sizeof(dictiterobject),
    .tp_dealloc = (destructor)dictiter_dealloc,
    .tp_flags = ( 0 | (1UL << 18) | 0) | (1UL << 14),
    .tp_traverse = (traverseproc)dictiter_traverse,
    .tp_iter = PyObject_SelfIter,
    .tp_iternext = (iternextfunc)dictreviter_iternext,
    .tp_methods = dictiter_methods
};
static void
dictview_dealloc(_PyDictViewObject *dv)
{
    _PyObject_GC_UNTRACK_impl("Objects/dictobject.c", 3995, ((PyObject*)(dv)));
    _Py_XDECREF(((PyObject*)(dv->dv_dict)));
    PyObject_GC_Del(dv);
}
static int
dictview_traverse(_PyDictViewObject *dv, visitproc visit, void *arg)
{
    do { if (dv->dv_dict) { int vret = visit(((PyObject*)(dv->dv_dict)), arg); if (vret) return vret; } } while (0);
    return 0;
}
static Py_ssize_t
dictview_len(_PyDictViewObject *dv)
{
    Py_ssize_t len = 0;
    if (dv->dv_dict != ((void *)0))
        len = dv->dv_dict->ma_used;
    return len;
}
PyObject *
_PyDictView_New(PyObject *dict, PyTypeObject *type)
{
    _PyDictViewObject *dv;
    if (dict == ((void *)0)) {
        _PyErr_BadInternalCall("Objects/dictobject.c", 4021);
        return ((void *)0);
    }
    if (!((((((PyObject*)(dict))->ob_type))->tp_flags & ((1UL << 29))) != 0)) {
        PyErr_Format(PyExc_TypeError,
                     "%s() requires a dict argument, not '%s'",
                     type->tp_name, dict->ob_type->tp_name);
        return ((void *)0);
    }
    dv = ( (_PyDictViewObject *) _PyObject_GC_New(type) );
    if (dv == ((void *)0))
        return ((void *)0);
    _Py_INCREF(((PyObject*)(dict)));
    dv->dv_dict = (PyDictObject *)dict;
    _PyObject_GC_TRACK_impl("Objects/dictobject.c", 4036, ((PyObject*)(dv)));
    return (PyObject *)dv;
}
static int
all_contained_in(PyObject *self, PyObject *other)
{
    PyObject *iter = PyObject_GetIter(self);
    int ok = 1;
    if (iter == ((void *)0))
        return -1;
    for (;;) {
        PyObject *next = PyIter_Next(iter);
        if (next == ((void *)0)) {
            if (PyErr_Occurred())
                ok = -1;
            break;
        }
        ok = PySequence_Contains(other, next);
        _Py_DECREF("Objects/dictobject.c", 4066, ((PyObject*)(next)));
        if (ok <= 0)
            break;
    }
    _Py_DECREF("Objects/dictobject.c", 4070, ((PyObject*)(iter)));
    return ok;
}
static PyObject *
dictview_richcompare(PyObject *self, PyObject *other, int op)
{
    Py_ssize_t len_self, len_other;
    int ok;
    PyObject *result;
    ((void) sizeof ((self != ((void *)0)) ? 1 : 0), __extension__ ({ if (self != ((void *)0)) ; else __assert_fail ("self != NULL", "Objects/dictobject.c", 4081, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof (((((((PyObject*)(self))->ob_type) == (&PyDictKeys_Type) || PyType_IsSubtype((((PyObject*)(self))->ob_type), (&PyDictKeys_Type))) || ((((PyObject*)(self))->ob_type) == (&PyDictItems_Type) || PyType_IsSubtype((((PyObject*)(self))->ob_type), (&PyDictItems_Type))))) ? 1 : 0), __extension__ ({ if ((((((PyObject*)(self))->ob_type) == (&PyDictKeys_Type) || PyType_IsSubtype((((PyObject*)(self))->ob_type), (&PyDictKeys_Type))) || ((((PyObject*)(self))->ob_type) == (&PyDictItems_Type) || PyType_IsSubtype((((PyObject*)(self))->ob_type), (&PyDictItems_Type))))) ; else __assert_fail ("PyDictViewSet_Check(self)", "Objects/dictobject.c", 4082, __extension__ __PRETTY_FUNCTION__); }));
    ((void) sizeof ((other != ((void *)0)) ? 1 : 0), __extension__ ({ if (other != ((void *)0)) ; else __assert_fail ("other != NULL", "Objects/dictobject.c", 4083, __extension__ __PRETTY_FUNCTION__); }));
    if (!((((PyObject*)(other))->ob_type) == &PySet_Type || (((PyObject*)(other))->ob_type) == &PyFrozenSet_Type || PyType_IsSubtype((((PyObject*)(other))->ob_type), &PySet_Type) || PyType_IsSubtype((((PyObject*)(other))->ob_type), &PyFrozenSet_Type)) && !(((((PyObject*)(other))->ob_type) == (&PyDictKeys_Type) || PyType_IsSubtype((((PyObject*)(other))->ob_type), (&PyDictKeys_Type))) || ((((PyObject*)(other))->ob_type) == (&PyDictItems_Type) || PyType_IsSubtype((((PyObject*)(other))->ob_type), (&PyDictItems_Type)))))
        return _Py_INCREF(((PyObject*)((&_Py_NotImplementedStruct)))), (&_Py_NotImplementedStruct);
    len_self = PyObject_Size(self);
    if (len_self < 0)
        return ((void *)0);
    len_other = PyObject_Size(other);
    if (len_other < 0)
        return ((void *)0);
    ok = 0;
    switch(op) {
    case 3:
    case 2:
        if (len_self == len_other)
            ok = all_contained_in(self, other);
        if (op == 3 && ok >= 0)
            ok = !ok;
        break;
    case 0:
        if (len_self < len_other)
            ok = all_contained_in(self, other);
        break;
      case 1:
          if (len_self <= len_other)
              ok = all_contained_in(self, other);
          break;
    case 4:
        if (len_self > len_other)
            ok = all_contained_in(other, self);
        break;
    case 5:
        if (len_self >= len_other)
            ok = all_contained_in(other, self);
        break;
    }
    if (ok < 0)
        return ((void *)0);
    result = ok ? ((PyObject *) &_Py_TrueStruct) : ((PyObject *) &_Py_FalseStruct);
    _Py_INCREF(((PyObject*)(result)));
    return result;
}
static PyObject *
dictview_repr(_PyDictViewObject *dv)
{
    PyObject *seq;
    PyObject *result = ((void *)0);
    Py_ssize_t rc;
    rc = Py_ReprEnter((PyObject *)dv);
    if (rc != 0) {
        return rc > 0 ? PyUnicode_FromString("...") : ((void *)0);
    }
    seq = PySequence_List((PyObject *)dv);
    if (seq == ((void *)0)) {
        goto Done;
    }
    result = PyUnicode_FromFormat("%s(%R)", (((PyObject*)(dv))->ob_type)->tp_name, seq);
    _Py_DECREF("Objects/dictobject.c", 4150, ((PyObject*)(seq)));
Done:
    Py_ReprLeave((PyObject *)dv);
    return result;
}
static PyObject *
dictkeys_iter(_PyDictViewObject *dv)
{
    if (dv->dv_dict == ((void *)0)) {
        return _Py_INCREF(((PyObject*)((&_Py_NoneStruct)))), (&_Py_NoneStruct);
    }
    return dictiter_new(dv->dv_dict, &PyDictIterKey_Type);
}
static int
dictkeys_contains(_PyDictViewObject *dv, PyObject *obj)
{
    if (dv->dv_dict == ((void *)0))
        return 0;
    return PyDict_Contains((PyObject *)dv->dv_dict, obj);
}
static PySequenceMethods dictkeys_as_sequence = {
    (lenfunc)dictview_len,
    0,
    0,
    0,
    0,
    0,
    0,
    (objobjproc)dictkeys_contains,
};
static PyObject*
dictviews_sub(PyObject* self, PyObject *other)
{
    PyObject *result = PySet_New(self);
    PyObject *tmp;
    static _Py_Identifier PyId_difference_update = { .next = ((void *)0), .string = "difference_update", .object = ((void *)0) };
    if (result == ((void *)0))
        return ((void *)0);
    tmp = _PyObject_CallMethodIdObjArgs(result, &PyId_difference_update, other, ((void *)0));
    if (tmp == ((void *)0)) {
        _Py_DECREF("Objects/dictobject.c", 4199, ((PyObject*)(result)));
        return ((void *)0);
    }
    _Py_DECREF("Objects/dictobject.c", 4203, ((PyObject*)(tmp)));
    return result;
}
PyObject*
_PyDictView_Intersect(PyObject* self, PyObject *other)
{
    PyObject *result = PySet_New(self);
    PyObject *tmp;
    static _Py_Identifier PyId_intersection_update = { .next = ((void *)0), .string = "intersection_update", .object = ((void *)0) };
    if (result == ((void *)0))
        return ((void *)0);
    tmp = _PyObject_CallMethodIdObjArgs(result, &PyId_intersection_update, other, ((void *)0));
    if (tmp == ((void *)0)) {
        _Py_DECREF("Objects/dictobject.c", 4219, ((PyObject*)(result)));
        return ((void *)0);
    }
    _Py_DECREF("Objects/dictobject.c", 4223, ((PyObject*)(tmp)));
    return result;
}
static PyObject*
dictviews_or(PyObject* self, PyObject *other)
{
    PyObject *result = PySet_New(self);
    PyObject *tmp;
    static _Py_Identifier PyId_update = { .next = ((void *)0), .string = "update", .object = ((void *)0) };
    if (result == ((void *)0))
        return ((void *)0);
    tmp = _PyObject_CallMethodIdObjArgs(result, &PyId_update, other, ((void *)0));
    if (tmp == ((void *)0)) {
        _Py_DECREF("Objects/dictobject.c", 4239, ((PyObject*)(result)));
        return ((void *)0);
    }
    _Py_DECREF("Objects/dictobject.c", 4243, ((PyObject*)(tmp)));
    return result;
}
static PyObject*
dictviews_xor(PyObject* self, PyObject *other)
{
    PyObject *result = PySet_New(self);
    PyObject *tmp;
    static _Py_Identifier PyId_symmetric_difference_update = { .next = ((void *)0), .string = "symmetric_difference_update", .object = ((void *)0) };
    if (result == ((void *)0))
        return ((void *)0);
    tmp = _PyObject_CallMethodIdObjArgs(result, &PyId_symmetric_difference_update, other, ((void *)0));
    if (tmp == ((void *)0)) {
        _Py_DECREF("Objects/dictobject.c", 4259, ((PyObject*)(result)));
        return ((void *)0);
    }
    _Py_DECREF("Objects/dictobject.c", 4263, ((PyObject*)(tmp)));
    return result;
}
static PyNumberMethods dictviews_as_number = {
    0,
    (binaryfunc)dictviews_sub,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    (binaryfunc)_PyDictView_Intersect,
    (binaryfunc)dictviews_xor,
    (binaryfunc)dictviews_or,
};
static PyObject*
dictviews_isdisjoint(PyObject *self, PyObject *other)
{
    PyObject *it;
    PyObject *item = ((void *)0);
    if (self == other) {
        if (dictview_len((_PyDictViewObject *)self) == 0)
            return _Py_INCREF(((PyObject*)(((PyObject *) &_Py_TrueStruct)))), ((PyObject *) &_Py_TrueStruct);
        else
            return _Py_INCREF(((PyObject*)(((PyObject *) &_Py_FalseStruct)))), ((PyObject *) &_Py_FalseStruct);
    }
    if (((((PyObject*)(other))->ob_type) == &PySet_Type || (((PyObject*)(other))->ob_type) == &PyFrozenSet_Type || PyType_IsSubtype((((PyObject*)(other))->ob_type), &PySet_Type) || PyType_IsSubtype((((PyObject*)(other))->ob_type), &PyFrozenSet_Type)) || (((((PyObject*)(other))->ob_type) == (&PyDictKeys_Type) || PyType_IsSubtype((((PyObject*)(other))->ob_type), (&PyDictKeys_Type))) || ((((PyObject*)(other))->ob_type) == (&PyDictItems_Type) || PyType_IsSubtype((((PyObject*)(other))->ob_type), (&PyDictItems_Type))))) {
        Py_ssize_t len_self = dictview_len((_PyDictViewObject *)self);
        Py_ssize_t len_other = PyObject_Size(other);
        if (len_other == -1)
            return ((void *)0);
        if ((len_other > len_self)) {
            PyObject *tmp = other;
            other = self;
            self = tmp;
        }
    }
    it = PyObject_GetIter(other);
    if (it == ((void *)0))
        return ((void *)0);
    while ((item = PyIter_Next(it)) != ((void *)0)) {
        int contains = PySequence_Contains(self, item);
        _Py_DECREF("Objects/dictobject.c", 4320, ((PyObject*)(item)));
        if (contains == -1) {
            _Py_DECREF("Objects/dictobject.c", 4322, ((PyObject*)(it)));
            return ((void *)0);
        }
        if (contains) {
            _Py_DECREF("Objects/dictobject.c", 4327, ((PyObject*)(it)));
            return _Py_INCREF(((PyObject*)(((PyObject *) &_Py_FalseStruct)))), ((PyObject *) &_Py_FalseStruct);
        }
    }
    _Py_DECREF("Objects/dictobject.c", 4331, ((PyObject*)(it)));
    if (PyErr_Occurred())
        return ((void *)0);
    return _Py_INCREF(((PyObject*)(((PyObject *) &_Py_TrueStruct)))), ((PyObject *) &_Py_TrueStruct);
}
static const char isdisjoint_doc[] = "Return True if the view and the given iterable have a null intersection.";
static PyObject* dictkeys_reversed(_PyDictViewObject *dv, PyObject *_unused_ignored __attribute__((unused)));
static const char reversed_keys_doc[] = "Return a reverse iterator over the dict keys.";
static PyMethodDef dictkeys_methods[] = {
    {"isdisjoint", (PyCFunction)dictviews_isdisjoint, 0x0008,
     isdisjoint_doc},
    {"__reversed__", (PyCFunction)(void(*)(void))dictkeys_reversed, 0x0004,
     reversed_keys_doc},
    {((void *)0), ((void *)0)}
};
PyTypeObject PyDictKeys_Type = {
    { { 1, &PyType_Type }, 0 },
    "dict_keys",
    sizeof(_PyDictViewObject),
    0,
    (destructor)dictview_dealloc,
    0,
    0,
    0,
    0,
    (reprfunc)dictview_repr,
    &dictviews_as_number,
    &dictkeys_as_sequence,
    0,
    0,
    0,
    0,
    PyObject_GenericGetAttr,
    0,
    0,
    ( 0 | (1UL << 18) | 0) | (1UL << 14),
    0,
    (traverseproc)dictview_traverse,
    0,
    dictview_richcompare,
    0,
    (getiterfunc)dictkeys_iter,
    0,
    dictkeys_methods,
    0,
};
static PyObject *
dictkeys_new(PyObject *dict, PyObject *_unused_ignored __attribute__((unused)))
{
    return _PyDictView_New(dict, &PyDictKeys_Type);
}
static PyObject *
dictkeys_reversed(_PyDictViewObject *dv, PyObject *_unused_ignored __attribute__((unused)))
{
    if (dv->dv_dict == ((void *)0)) {
        return _Py_INCREF(((PyObject*)((&_Py_NoneStruct)))), (&_Py_NoneStruct);
    }
    return dictiter_new(dv->dv_dict, &PyDictRevIterKey_Type);
}
static PyObject *
dictitems_iter(_PyDictViewObject *dv)
{
    if (dv->dv_dict == ((void *)0)) {
        return _Py_INCREF(((PyObject*)((&_Py_NoneStruct)))), (&_Py_NoneStruct);
    }
    return dictiter_new(dv->dv_dict, &PyDictIterItem_Type);
}
static int
dictitems_contains(_PyDictViewObject *dv, PyObject *obj)
{
    int result;
    PyObject *key, *value, *found;
    if (dv->dv_dict == ((void *)0))
        return 0;
    if (!((((((PyObject*)(obj))->ob_type))->tp_flags & ((1UL << 26))) != 0) || (((PyVarObject*)((((void) sizeof ((((((((PyObject*)(obj))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(obj))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(obj)", "Objects/dictobject.c", 4419, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(obj))))->ob_size) != 2)
        return 0;
    key = ((((void) sizeof ((((((((PyObject*)(obj))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(obj))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(obj)", "Objects/dictobject.c", 4421, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(obj))->ob_item[0]);
    value = ((((void) sizeof ((((((((PyObject*)(obj))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ? 1 : 0), __extension__ ({ if (((((((PyObject*)(obj))->ob_type))->tp_flags & ((1UL << 26))) != 0)) ; else __assert_fail ("PyTuple_Check(obj)", "Objects/dictobject.c", 4422, __extension__ __PRETTY_FUNCTION__); })), (PyTupleObject *)(obj))->ob_item[1]);
    found = PyDict_GetItemWithError((PyObject *)dv->dv_dict, key);
    if (found == ((void *)0)) {
        if (PyErr_Occurred())
            return -1;
        return 0;
    }
    _Py_INCREF(((PyObject*)(found)));
    result = PyObject_RichCompareBool(value, found, 2);
    _Py_DECREF("Objects/dictobject.c", 4431, ((PyObject*)(found)));
    return result;
}
static PySequenceMethods dictitems_as_sequence = {
    (lenfunc)dictview_len,
    0,
    0,
    0,
    0,
    0,
    0,
    (objobjproc)dictitems_contains,
};
static PyObject* dictitems_reversed(_PyDictViewObject *dv);
static const char reversed_items_doc[] = "Return a reverse iterator over the dict items.";
static PyMethodDef dictitems_methods[] = {
    {"isdisjoint", (PyCFunction)dictviews_isdisjoint, 0x0008,
     isdisjoint_doc},
    {"__reversed__", (PyCFunction)(void(*)(void))dictitems_reversed, 0x0004,
     reversed_items_doc},
    {((void *)0), ((void *)0)}
};
PyTypeObject PyDictItems_Type = {
    { { 1, &PyType_Type }, 0 },
    "dict_items",
    sizeof(_PyDictViewObject),
    0,
    (destructor)dictview_dealloc,
    0,
    0,
    0,
    0,
    (reprfunc)dictview_repr,
    &dictviews_as_number,
    &dictitems_as_sequence,
    0,
    0,
    0,
    0,
    PyObject_GenericGetAttr,
    0,
    0,
    ( 0 | (1UL << 18) | 0) | (1UL << 14),
    0,
    (traverseproc)dictview_traverse,
    0,
    dictview_richcompare,
    0,
    (getiterfunc)dictitems_iter,
    0,
    dictitems_methods,
    0,
};
static PyObject *
dictitems_new(PyObject *dict, PyObject *_unused_ignored __attribute__((unused)))
{
    return _PyDictView_New(dict, &PyDictItems_Type);
}
static PyObject *
dictitems_reversed(_PyDictViewObject *dv)
{
    if (dv->dv_dict == ((void *)0)) {
        return _Py_INCREF(((PyObject*)((&_Py_NoneStruct)))), (&_Py_NoneStruct);
    }
    return dictiter_new(dv->dv_dict, &PyDictRevIterItem_Type);
}
static PyObject *
dictvalues_iter(_PyDictViewObject *dv)
{
    if (dv->dv_dict == ((void *)0)) {
        return _Py_INCREF(((PyObject*)((&_Py_NoneStruct)))), (&_Py_NoneStruct);
    }
    return dictiter_new(dv->dv_dict, &PyDictIterValue_Type);
}
static PySequenceMethods dictvalues_as_sequence = {
    (lenfunc)dictview_len,
    0,
    0,
    0,
    0,
    0,
    0,
    (objobjproc)0,
};
static PyObject* dictvalues_reversed(_PyDictViewObject *dv);
static const char reversed_values_doc[] = "Return a reverse iterator over the dict values.";
static PyMethodDef dictvalues_methods[] = {
    {"__reversed__", (PyCFunction)(void(*)(void))dictvalues_reversed, 0x0004,
     reversed_values_doc},
    {((void *)0), ((void *)0)}
};
PyTypeObject PyDictValues_Type = {
    { { 1, &PyType_Type }, 0 },
    "dict_values",
    sizeof(_PyDictViewObject),
    0,
    (destructor)dictview_dealloc,
    0,
    0,
    0,
    0,
    (reprfunc)dictview_repr,
    0,
    &dictvalues_as_sequence,
    0,
    0,
    0,
    0,
    PyObject_GenericGetAttr,
    0,
    0,
    ( 0 | (1UL << 18) | 0) | (1UL << 14),
    0,
    (traverseproc)dictview_traverse,
    0,
    0,
    0,
    (getiterfunc)dictvalues_iter,
    0,
    dictvalues_methods,
    0,
};
static PyObject *
dictvalues_new(PyObject *dict, PyObject *_unused_ignored __attribute__((unused)))
{
    return _PyDictView_New(dict, &PyDictValues_Type);
}
static PyObject *
dictvalues_reversed(_PyDictViewObject *dv)
{
    if (dv->dv_dict == ((void *)0)) {
        return _Py_INCREF(((PyObject*)((&_Py_NoneStruct)))), (&_Py_NoneStruct);
    }
    return dictiter_new(dv->dv_dict, &PyDictRevIterValue_Type);
}
PyDictKeysObject *
_PyDict_NewKeysForClass(void)
{
    PyDictKeysObject *keys = new_keys_object(8);
    if (keys == ((void *)0))
        PyErr_Clear();
    else
        keys->dk_lookup = lookdict_split;
    return keys;
}
PyObject *
PyObject_GenericGetDict(PyObject *obj, void *context)
{
    PyObject *dict, **dictptr = _PyObject_GetDictPtr(obj);
    if (dictptr == ((void *)0)) {
        PyErr_SetString(PyExc_AttributeError,
                        "This object has no __dict__");
        return ((void *)0);
    }
    dict = *dictptr;
    if (dict == ((void *)0)) {
        PyTypeObject *tp = (((PyObject*)(obj))->ob_type);
        if ((tp->tp_flags & (1UL << 9)) && (((PyHeapTypeObject*)tp)->ht_cached_keys)) {
            dictkeys_incref((((PyHeapTypeObject*)tp)->ht_cached_keys));
            *dictptr = dict = new_dict_with_shared_keys((((PyHeapTypeObject*)tp)->ht_cached_keys));
        }
        else {
            *dictptr = dict = PyDict_New();
        }
    }
    _Py_XINCREF(((PyObject*)(dict)));
    return dict;
}
int
_PyObjectDict_SetItem(PyTypeObject *tp, PyObject **dictptr,
                      PyObject *key, PyObject *value)
{
    PyObject *dict;
    int res;
    PyDictKeysObject *cached;
    ((void) sizeof ((dictptr != ((void *)0)) ? 1 : 0), __extension__ ({ if (dictptr != ((void *)0)) ; else __assert_fail ("dictptr != NULL", "Objects/dictobject.c", 4636, __extension__ __PRETTY_FUNCTION__); }));
    if ((tp->tp_flags & (1UL << 9)) && (cached = (((PyHeapTypeObject*)tp)->ht_cached_keys))) {
        ((void) sizeof ((dictptr != ((void *)0)) ? 1 : 0), __extension__ ({ if (dictptr != ((void *)0)) ; else __assert_fail ("dictptr != NULL", "Objects/dictobject.c", 4638, __extension__ __PRETTY_FUNCTION__); }));
        dict = *dictptr;
        if (dict == ((void *)0)) {
            dictkeys_incref(cached);
            dict = new_dict_with_shared_keys(cached);
            if (dict == ((void *)0))
                return -1;
            *dictptr = dict;
        }
        if (value == ((void *)0)) {
            res = PyDict_DelItem(dict, key);
            if ((cached = (((PyHeapTypeObject*)tp)->ht_cached_keys)) != ((void *)0)) {
                (((PyHeapTypeObject*)tp)->ht_cached_keys) = ((void *)0);
                dictkeys_decref(cached);
            }
        }
        else {
            int was_shared = (cached == ((PyDictObject *)dict)->ma_keys);
            res = PyDict_SetItem(dict, key, value);
            if (was_shared &&
                    (cached = (((PyHeapTypeObject*)tp)->ht_cached_keys)) != ((void *)0) &&
                    cached != ((PyDictObject *)dict)->ma_keys) {
                if (cached->dk_refcnt == 1) {
                    (((PyHeapTypeObject*)tp)->ht_cached_keys) = make_keys_shared(dict);
                }
                else {
                    (((PyHeapTypeObject*)tp)->ht_cached_keys) = ((void *)0);
                }
                dictkeys_decref(cached);
                if ((((PyHeapTypeObject*)tp)->ht_cached_keys) == ((void *)0) && PyErr_Occurred())
                    return -1;
            }
        }
    } else {
        dict = *dictptr;
        if (dict == ((void *)0)) {
            dict = PyDict_New();
            if (dict == ((void *)0))
                return -1;
            *dictptr = dict;
        }
        if (value == ((void *)0)) {
            res = PyDict_DelItem(dict, key);
        } else {
            res = PyDict_SetItem(dict, key, value);
        }
    }
    return res;
}
void
_PyDictKeys_DecRef(PyDictKeysObject *keys)
{
    dictkeys_decref(keys);
}
