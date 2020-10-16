
#ifndef OPENSSH_PORTABLE_USERMAP_H
#define OPENSSH_PORTABLE_USERMAP_H

// Either returns the passed argument or a constant value.
// As such, the value returned by this is only valid as long as name is valid
// and must never be freed
const char* usermap_remap(char* name);

#endif //OPENSSH_PORTABLE_USERMAP_H
