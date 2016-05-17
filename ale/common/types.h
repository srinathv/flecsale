/*~-------------------------------------------------------------------------~~*
 *     _   ______________     ___    __    ______
 *    / | / / ____/ ____/    /   |  / /   / ____/
 *   /  |/ / / __/ /  ______/ /| | / /   / __/   
 *  / /|  / /_/ / /__/_____/ ___ |/ /___/ /___   
 * /_/ |_/\____/\____/    /_/  |_/_____/_____/   
 * 
 * Copyright (c) 2016 Los Alamos National Laboratory, LLC
 * All rights reserved
 *~-------------------------------------------------------------------------~~*/
/*!
 * 
 * \file types.h
 *
 * \brief This header defines some usefull types.
 *
 ******************************************************************************/
#pragma once

//! system includes
#include <cstdint> // for types

namespace ale {
namespace common {

//! function return values
enum return_t { 
  RETURN_SUCCESS = 0, //! command succeeded 
  RETURN_FAILURE = 1  //! command failed
};

//! real precision type
#ifdef DOUBLE_PRECISION
using real_t = double;
#else
using real_t = float;
#endif

//! type of integer ids to use
#ifdef USE_64BIT_IDS
using index_t = uint64_t;
#else
using index_t = uint32_t;
#endif

//! type of integer data to use
#ifdef DOUBLE_PRECISION
using integer_t = int64_t;
#else
using integer_t = int32_t;
#endif

//! a size type
using std::size_t;

//! the test tolerance 
static constexpr real_t test_tolerance = TEST_TOLERANCE;

} // namespace
} // namespace



/*~------------------------------------------------------------------------~--*
 * Formatting options
 * vim: set tabstop=2 shiftwidth=2 expandtab :
 *~------------------------------------------------------------------------~--*/