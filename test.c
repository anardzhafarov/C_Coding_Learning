#include <stdint.h>
#include <stdio.h>

int mul18(uint8_t param) {
    if(param = 0) {
        return 0;
    }
    if(param = 1) {
        return 18;
    }
    int paramR = 18 * param;
    return param;
}

int main() {
    int res = mul18(15);
    printf("%d\n", res);
}