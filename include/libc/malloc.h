/* Copyright (C) 2001 DJ Delorie, see COPYING.DJ for details */
#ifndef __dj_include_libc_malloc_h__
#define __dj_include_libc_malloc_h__

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __dj_ENFORCE_ANSI_FREESTANDING

#ifndef __STRICT_ANSI__

#ifndef _POSIX_SOURCE

typedef struct BLOCK {
  size_t size;
  struct BLOCK *next;
  int bucket;
} BLOCK;

#define BEFSZ(bp)	(*(size_t *)((char *)bp - 4))
#define ENDSZ(bp)	(*(size_t *)((char *)bp + (bp->size & ~1) + 4))
#define BEFORE(bp)	((BLOCK *)((char *)bp - (BEFSZ(bp) & ~1) - 8))
#define AFTER(bp)	((BLOCK *)((char *)bp + ((bp->size & ~1) + 8)))
#define DATA(bp)	((char *)&(bp->next))

#define ALIGN		8

#endif /* !_POSIX_SOURCE */
#endif /* !__STRICT_ANSI__ */
#endif /* !__dj_ENFORCE_ANSI_FREESTANDING */

#ifndef __dj_ENFORCE_FUNCTION_CALLS
#endif /* !__dj_ENFORCE_FUNCTION_CALLS */

#ifdef __cplusplus
}
#endif

#endif /* __dj_include_libc_atexit_h__ */