#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dict.h"


Dictlib str = {
    .len = &dict_len,
    .find = &dict_find,
    .print = &dict_print,
    .destroy = &dict_destroy,
};


