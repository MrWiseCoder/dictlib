#ifndef DICT_H
#define DICT_H

#define newDict(o) Dict o = { \
    .find = s, \
    .len = str_obj_len(&o), \
    .print = str_obj_print(&o) \
}

// Func ptrs
typedef size_t (*lenptr) ();
typedef void (*printptr) ();

// Module or Library Struct
typedef struct _mod {
    size_t (*len)(const string);
    string (*find) (const string, const string);
    void (*print) (string);
    void (*destroy) (string);
} Dictlib;

// String Object struct
typedef struct {
    int size;
    size_t (*len)();
    printptr (*print) ();
    string (*find) (string search);
} Dict;




#endif
