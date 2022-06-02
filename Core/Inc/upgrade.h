/*! \file upgrade.h
 *  \brief
 *
 *  Details
 *
 *  Copyright (c) 2015 Traxxas, All Rights Reserved
 */
#ifndef __upgrade_h
#define __upgrade_h

// -----------------------------------------------------------------------------
// Includes
#include <stdint.h>
#include <stdbool.h>
// -----------------------------------------------------------------------------
// Definitions

// -----------------------------------------------------------------------------
// Globals

extern const uint32_t Upgrade_AppBaseAddress; /*!< Base address of the Application Image */

// -----------------------------------------------------------------------------
// Functions

extern void upgrade(void);
extern bool check_firmware_key(void);
extern bool upgrade_pin_pushed(void);
#endif // __upgrade_h
