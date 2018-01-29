// ----------------------------------------------------------------------------
// 5x3.h
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#ifndef TOYDAD_INTERFACE_5X3_CONSTANTS_H
#define TOYDAD_INTERFACE_5X3_CONSTANTS_H
#include "Constants.h"


#if defined(__MK64FX512__)

namespace toydad_interface
{
namespace constants
{
// Interrupts

// Units

// Properties
// Property values must be long, double, bool, long[], double[], bool[], char[], ConstantString *, (ConstantString *)[]
extern const long bauds_default[serial_interface::constants::SERIAL_STREAM_COUNT];

extern const ConstantString * const formats_default[serial_interface::constants::SERIAL_STREAM_COUNT];

extern const ConstantString * const line_endings_default[serial_interface::constants::SERIAL_STREAM_COUNT];

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif
#endif