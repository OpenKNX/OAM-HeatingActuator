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

    #define OPENKNX_HTA_CHANNEL_PINS 25, 24, 23, 22, 21, 20, 19, 18, 14, 15, 16, 17
    #define OPENKNX_HTA_CHANNEL_COUNT 12
    #define OPENKNX_HTA_ACTIVE_ON HIGH

    #define OPENKNX_HTA_CURRENT_MOT_MIN_LIMIT 1.0
    #define OPENKNX_HTA_CURRENT_MOT_MAX_LIMIT 95.0
    #define OPENKNX_HTA_CURRENT_INA_ADDR 0x40

    #define OPENKNX_HTA_GPIO_OUTPUT_OFFSET 0x0100
    #define OPENKNX_HTA_GPIO_OUTPUT_ACTIVE_ON HIGH
    #define OPENKNX_HTA_GPIO_INPUT_OFFSET 0x0200
    #define OPENKNX_HTA_GPIO_INPUT_ACTIVE_ON LOW

    #define OPENKNX_HTA_1WIRE_PWR_PIN 27
    #define OPENKNX_HTA_1WIRE_PWR_PIN_ACTIVE_ON HIGH
    #define OPENKNX_HTA_1WIRE_SLPZ_PIN 5

    #define OPENKNX_GPIO_NUM 2
    #define OPENKNX_GPIO_TYPES OPENKNX_GPIO_T_TCA9555, OPENKNX_GPIO_T_TCA9555
    #define OPENKNX_GPIO_ADDRS 0x20, 0x21
    #define OPENKNX_GPIO_INTS 0xFF, 0x08

    #define OPENKNX_GPIO_WIRE Wire1
    #define OPENKNX_GPIO_SDA 6
    #define OPENKNX_GPIO_SCL 7
    #define OPENKNX_GPIO_CLOCK 400000
#endif

#ifdef BOARD_AB_SMARTHOUSE_HTA_UP_1CH
    #define DEVICE_ID "AB-HTA-1CH"
    #define HARDWARE_NAME "AB-HTA-1CH"
    #define DEVICE_NAME "AB-SmartHouse Heating Actuator 1x, UP"

    #define INFO_LED_PIN 11
    #define INFO_LED_PIN_ACTIVE_ON HIGH
    #define PROG_LED_PIN 10
    #define PROG_LED_PIN_ACTIVE_ON HIGH
    #define PROG_BUTTON_PIN 9
    #define PROG_BUTTON_PIN_INTERRUPT_ON FALLING

    #define KNX_UART_TX_PIN 12
    #define KNX_UART_RX_PIN 13
    #define SAVE_INTERRUPT_PIN 0

    #define OPENKNX_HTA_MOT_PWR_PIN 14
    #define OPENKNX_HTA_MOT_PWR_PIN_ACTIVE_ON LOW
    #define OPENKNX_HTA_MOT_HIGH1_PIN 1
    #define OPENKNX_HTA_MOT_HIGH1_PIN_ACTIVE_ON LOW
    #define OPENKNX_HTA_MOT_HIGH2_PIN 2
    #define OPENKNX_HTA_MOT_HIGH2_PIN_ACTIVE_ON LOW
    #define OPENKNX_HTA_MOT_LOW1_PIN 3
    #define OPENKNX_HTA_MOT_LOW1_PIN_ACTIVE_ON HIGH
    #define OPENKNX_HTA_MOT_LOW2_PIN 4
    #define OPENKNX_HTA_MOT_LOW2_PIN_ACTIVE_ON HIGH

    #define OPENKNX_HTA_CHANNEL_PINS 25
    #define OPENKNX_HTA_CHANNEL_COUNT 1
    #define OPENKNX_HTA_ACTIVE_ON HIGH

    #define OPENKNX_HTA_CURRENT_MOT_MIN_LIMIT 1.0
    #define OPENKNX_HTA_CURRENT_MOT_MAX_LIMIT 95.0
    #define OPENKNX_HTA_CURRENT_INA_ADDR 0x40

    #define OPENKNX_HTA_1WIRE_PWR_PIN 22
    #define OPENKNX_HTA_1WIRE_PWR_PIN_ACTIVE_ON HIGH
    #define OPENKNX_HTA_1WIRE_DAT_PIN 17

    #define OPENKNX_GPIO_WIRE Wire1
    #define OPENKNX_GPIO_SDA 6
    #define OPENKNX_GPIO_SCL 7
    #define OPENKNX_GPIO_CLOCK 400000
#endif

#ifdef WIREMODULE
    #define I2C_SDA_1WIRE_PIN OPENKNX_GPIO_SDA
    #define I2C_SCL_1WIRE_PIN OPENKNX_GPIO_SCL
    #define COUNT_1WIRE_BUSMASTER 1
    #define COUNT_1WIRE_CHANNEL 30
    #define I2C_1WIRE_DEVICE_ADDRESSS 0x18 // Address of DS2484 1-Wire-Busmaster chip
    #define I2C_BUS_1WIRE OPENKNX_GPIO_WIRE
    #define ONEWIRE_5V_ENABLE OPENKNX_HTA_1WIRE_PWR_PIN
    // #define ONEWIRE_5V_SHORT 4
#endif
