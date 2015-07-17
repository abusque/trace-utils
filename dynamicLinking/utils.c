#define TRACEPOINT_DEFINE
#include "tp2.h"

int get_random_num()
{
        tracepoint(my_other_provider, some_tracepoint, "payload");
        return 4;               /* chosen by fair dice roll.
                                 * guaranteed to be random. */
}
