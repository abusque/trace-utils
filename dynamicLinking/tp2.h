#undef TRACEPOINT_PROVIDER
#define TRACEPOINT_PROVIDER my_other_provider

#undef TRACEPOINT_INCLUDE
#define TRACEPOINT_INCLUDE "./tp2.h"

#if !defined(_TP2_H) || defined(TRACEPOINT_HEADER_MULTI_READ)
#define _TP2_H

#include <lttng/tracepoint.h>

TRACEPOINT_EVENT(
        my_other_provider,
        some_tracepoint,
        TP_ARGS(
                char*, my_string_arg
                ),
        TP_FIELDS(
                ctf_string(my_string_field, my_string_arg)
                )
        )

#endif /* _TP2_H */

#include <lttng/tracepoint-event.h>
