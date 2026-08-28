#include <stdio.h>

int main() {
    double bytes, kb, mb, gb;
    
    printf("Enter bytes: ");
    scanf("%lf", &bytes);
    
    kb = bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;
    
    printf("%.0f Bytes =\n", bytes);
    printf("%.2f KB\n", kb);
    printf("%.4f MB\n", mb);
    printf("%.6f GB\n", gb);
    
    return 0;
}
