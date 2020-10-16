#include <string.h>

#include "usermap.h"

const char* usermap_remap(char* name) {
    if (strcmp(name, "git") == 0) {
        return "srht-git";
    }

    return name;
}