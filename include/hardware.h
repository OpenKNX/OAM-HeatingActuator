#ifdef BOARD_AB_SMARTHOUSE_HTA_REG6_12CH
    #define DEVICE_ID "AB-HTA-12CH"
    #define HARDWARE_NAME "AB-HTA-12CH"
    #define DEVICE_NAME "AB-SmartHouse Heating Actuator 12x, 6 TE"

    #define INFO_LED_PIN 11
    #define INFO_LED_PIN_ACTIVE_ON HIGH
    #define PROG_LED_PIN 10
    #define PROG_LED_PIN_ACTIVE_ON HIGH
    #define PROG_BUTTON_PIN 9
    #define PROG_BUTTON_PIN_INTERRUPT_ON FALLING

    #define KNX_UART_TX_PIN 12
    #define KNX_UART_RX_PIN 13
    #define SAVE_INTERRUPT_PIN 0

    #define OPENKNX_HTA_MOT_PWR_PIN 26
    #define OPENKNX_HTA_MOT_PWR_PIN_ACTIVE_ON LOW
    #define OPENKNX_HTA_MOT_HIGH1_PIN 1
    #define OPENKNX_HTA_MOT_HIGH1_PIN_ACTIVE_ON LOW
    #define OPENKNX_HTA_MOT_HIGH2_PIN 2
    #define OPENKNX_HTA_MOT_HIGH2_PIN_ACTIVE_ON LOW
    #define OPENKNX_HTA_MOT_LOW1_PIN 3
    #define OPENKNX_HTA_MOT_LOW1_PIN_ACTIVE_ON HIGH
    #define OPENKNX_HTA_MOT_LOW2_PIN 4
    #define OPENKNX_HTA_MOT_LOW2_PIN_ACTIVE_ON HIGH

    #define OPENKNX_HTA_MOT_PINS 25, 24, 23, 22, 21, 20, 19, 18, 14, 15, 16, 17
    #define OPENKNX_HTA_MOT_COUNT 12
    #define OPENKNX_HTA_ACTIVE_ON HIGH

    #define OPENKNX_HTA_CURRENT_MOT_MIN_LIMIT 1.0
    #define OPENKNX_HTA_CURRENT_MOT_MAX_LIMIT 90.0
    #define OPENKNX_HTA_CURRENT_MOT_CW_LIMIT 50.0
    #define OPENKNX_HTA_CURRENT_MOT_CCW_LIMIT 30.0
    #define OPENKNX_HTA_CURRENT_INA_ADDR 0x40

    #define OPENKNX_GPIO_NUM 2
    #define OPENKNX_GPIO_TYPES OPENKNX_GPIO_T_TCA9555, OPENKNX_GPIO_T_TCA9555
    #define OPENKNX_GPIO_ADDRS 0x20, 0x21
    #define OPENKNX_GPIO_INTS 0xFF, 0x08

    #define OPENKNX_GPIO_WIRE Wire1
    #define OPENKNX_GPIO_SDA 6
    #define OPENKNX_GPIO_SCL 7
    #define OPENKNX_GPIO_CLOCK 400000
#endif