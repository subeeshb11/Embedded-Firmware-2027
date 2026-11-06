// Bit Manipulation Learning with LED Example.

#include <stdio.h>
#include <stdint.h>
#include <unistd.h>  // For sleep()

#define LED_PIN  3U

int main(void) {
    uint8_t GPIO_REG = 0x00;

    for (int i = 0; i < 3; i++) {
        // Turn LED ON (Set bit 3)
        GPIO_REG |= (1U << LED_PIN);
        printf("LED ON  -> REG: 0x%02X\n", GPIO_REG);
        sleep(1);

        // Turn LED OFF (Clear bit 3)
        GPIO_REG &= ~(1U << LED_PIN);
        printf("LED OFF -> REG: 0x%02X\n", GPIO_REG);
        sleep(1);
    }

    return 0;
}