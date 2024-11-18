#include <stdio.h>
#include <bsd/string.h>

int main()
{
    char dst[25];
    int dsts = strlcpy(dst, "", 15);
    printf("%i", dsts);

    return 0;
}
