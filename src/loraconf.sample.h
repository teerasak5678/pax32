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

 static const u1_t DEVEUI[8] = { 0x00, 0x5A, 0x51, 0xB6, 0x32, 0x9E, 0xAB, 0x75 };

 static const u1_t APPEUI[8] = { 0x70, 0xB3, 0xD5, 0x7E, 0xD0, 0x01, 0x87, 0x09 };

 static const u1_t APPKEY[16] = { 0x31, 0xE1, 0xC2, 0x90, 0x94, 0xCC, 0xA2, 0xFA,
                                  0x7E, 0x42, 0x4C, 0x47, 0x0C, 0xC4, 0x94, 0x5B };
#endif // HAS_LORA
