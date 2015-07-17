#include <dlfcn.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

typedef void (*simple_demo_function)(void);

int main(void)
{
        void *handle;
        void (*foo)();
        void (*bar)();
        void (*baz)();
        int random_num = get_random_num();

        printf("Press enter to load libhello...");
        getchar();

        /* Error checking omitted for brevity */
        handle = dlopen("libhello.so", RTLD_LAZY);
        foo = dlsym(handle, "foo");
        bar = dlsym(handle, "bar");
        baz = dlsym(handle, "baz");

        (*foo)();
        (*bar)();
        (*baz)();

        printf("Random number: %d\n", random_num);

        return 0;
}
