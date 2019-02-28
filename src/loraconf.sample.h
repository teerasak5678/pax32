#ifdef HAS_LORA

/************************************************************
 * LMIC LoRaWAN configuration
 *
 * Read the values from TTN console (or whatever applies), insert them here,
 * and rename this file to src/loraconf.h
 *
 * Note that DEVEUI, APPEUI and APPKEY should all be specified in MSB format.
 * (This is different from standard LMIC-Arduino which expects DEVEUI and APPEUI
 * in LSB format.)

 * Set your DEVEUI here, if you have one. You can leave this untouched,
 * then the DEVEUI will be generated during runtime from device's MAC adress
 * and will be displayed on device's screen as well as on serial console.
 *
 * NOTE: Use MSB format (as displayed in TTN console, so you can cut & paste
 * from there)
 * For TTN, APPEUI in MSB format always starts with 0x70, 0xB3, 0xD5
 *
 * Note: If using a board with Microchip 24AA02E64 Uinique ID for deveui,
 * the DEVEUI will be overwriten by the one contained in the Microchip module
 *
 ************************************************************/

static const u1_t DEVEUI[8] = { 0x00, 0xF0, 0x1A, 0x53, 0x5B, 0xE0, 0xC6, 0x1C };

static const u1_t APPEUI[8] = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x01, 0x87, 0x09 };

static const u1_t APPKEY[16] = { 0x68, 0xB9, 0x8D, 0xBA, 0xC9, 0x0C, 0x7A, 0x32,
                                 0x06, 0xBA, 0xD7, 0x81, 0x57, 0xF4, 0x87, 0x80 };

#endif // HAS_LORA
