#include <stdio.h>

int main()
 {
    double bytes, kb, mb, gb;
    printf("Enter size in Bytes: ");
    scanf("%lf", &bytes);
    kb = bytes / 1024;
    mb = bytes / (1024 * 1024);
    gb = bytes / (1024 * 1024 * 1024);
    printf("\nConversion Results:\n");
    printf("Kilobytes (KB): %.2lf\n", kb);
    printf("Megabytes (MB): %.2lf\n", mb);
    printf("Gigabytes (GB): %.6lf\n", gb);
    return 0;
}
