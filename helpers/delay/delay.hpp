/**
 * @file delay.hpp
 * @authors MarioS271
 */

#pragma once

#include <freertos/FreeRTOS.h>

/**
 * @brief Wrapper for vTaskDelay(pdMS_TO_TICKS(ms))
 *
 * @return void
 */
inline void delay(int ms) {
    vTaskDelay(pdMS_TO_TICKS(ms));
}