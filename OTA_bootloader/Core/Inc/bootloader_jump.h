/*
 * bootloader_jump.h
 *
 *  Created on: Jun 29, 2026
 *      Author: Ayush Singh
 */

#ifndef INC_BOOTLOADER_JUMP_H_
#define INC_BOOTLOADER_JUMP_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Jumps execution from the bootloader to the user application.
 *
 * This function:
 *  - Reads the application's initial stack pointer.
 *  - Reads the application's reset handler address.
 *  - Disables interrupts.
 *  - Stops the SysTick timer.
 *  - Sets the Main Stack Pointer (MSP).
 *  - Transfers execution to the application's Reset_Handler().
 *
 * @note This function does not return.
 */
void jump_to_app(void);
uint8_t boot_is_app_valid(void);

#ifdef __cplusplus
}
#endif


#endif /* INC_BOOTLOADER_JUMP_H_ */
