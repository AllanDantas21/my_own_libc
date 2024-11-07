#include "../../incs/my_libc.h"

/**
 * @file my_memmove.c
 * @brief Custom implementation of the memmove function.
 *
 * This function copies `n` bytes from memory area `src` to memory area `dest`.
 * The memory areas may overlap: copying takes place as though the bytes in `src`
 * are first copied into a temporary array that does not overlap `src` or `dest`,
 * and the bytes are then copied from the temporary array to `dest`.
 *
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return Pointer to the destination memory area (`dest`).
 */

void *my_memmove(void *dst, const void *src, size_t len){
  uint8_t			*dp = (uint8_t *)dst;
  const uint8_t	*sp = (const uint8_t *)src;
    
  if(sp < dp && sp + len > dp)
  {
      sp += len;
      dp += len;
      while(len-- > 0)
        *--dp = *--sp;
  }
	else {
    while(len-- > 0)
        *dp++ = *sp++;
    }
    return (dst);
}
