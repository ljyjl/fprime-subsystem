// ======================================================================
// \title  ThermalControlComponentImpl.cpp
// \author jzl0213
// \brief  cpp file for ThermalControl component implementation class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================


#include <Ref/ThermalControl/ThermalControlComponentImpl.hpp>
#include "Fw/Types/BasicTypes.hpp"

namespace Ref {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  ThermalControlComponentImpl ::
    ThermalControlComponentImpl(
        const char *const compName
    ) : ThermalControlComponentBase(compName)
  {

  }

  void ThermalControlComponentImpl ::
    init(
        const NATIVE_INT_TYPE queueDepth,
        const NATIVE_INT_TYPE instance
    )
  {
    ThermalControlComponentBase::init(queueDepth, instance);
  }

  ThermalControlComponentImpl ::
    ~ThermalControlComponentImpl(void)
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------

  void ThermalControlComponentImpl ::
    schedIn_handler(
        const NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    // TODO
  }

  void ThermalControlComponentImpl ::
    temperatureIn_handler(
        const NATIVE_INT_TYPE portNum,
        F32 temperature
    )
  {
    // TODO
  }

} // end namespace Ref
