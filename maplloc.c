#include <stlib.h>
#include <sys/mman.h>

#define MAX_HEAP 64*1024*4096

char *heap;

char *brkp = NULL;
char *endp = NULL;

static void init()
