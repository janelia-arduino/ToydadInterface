// ----------------------------------------------------------------------------
// 3x2.cpp
//
//
// Authors:
// Peter Polidoro polidorop@janelia.hhmi.org
// ----------------------------------------------------------------------------
#include "3x2.h"


#if defined(__MK20DX256__)

namespace toydad_interface
{
namespace constants
{
// Interrupts

// Units

// Properties
const long bauds_default[serial_interface::constants::SERIAL_STREAM_COUNT] =
{
  baud_default,
};

const ConstantString * const formats_default[serial_interface::constants::SERIAL_STREAM_COUNT] =
{
  format_ptr_default,
};

const ConstantString * const line_endings_default[serial_interface::constants::SERIAL_STREAM_COUNT] =
{
  line_ending_ptr_default,
};

// Parameters

// Functions

// Callbacks

// Errors
}
}
#endif