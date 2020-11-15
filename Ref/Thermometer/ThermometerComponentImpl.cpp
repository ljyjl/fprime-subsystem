// ======================================================================
// \title  ThermometerComponentImpl.cpp
// \author jzl0213
// \brief  cpp file for Thermometer component implementation class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================


#include <Ref/Thermometer/ThermometerComponentImpl.hpp>
#include "Fw/Types/BasicTypes.hpp"

namespace Ref {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  ThermometerComponentImpl ::
    ThermometerComponentImpl(
        const char *const compName
    ) : ThermometerComponentBase(compName)
  {

  }

  void ThermometerComponentImpl ::
    init(
        const NATIVE_INT_TYPE queueDepth,
        const NATIVE_INT_TYPE instance
    )
  {
    ThermometerComponentBase::init(queueDepth, instance);
  }

  ThermometerComponentImpl ::
    ~ThermometerComponentImpl(void)
  {

  }

  // ----------------------------------------------------------------------
  // Handler implementations for user-defined typed input ports
  // ----------------------------------------------------------------------

  void ThermometerComponentImpl ::
    temperatureReqIn_handler(
        const NATIVE_INT_TYPE portNum,
        F32 requestTempteratue
    )
  {
    // TODO
  }

  // ----------------------------------------------------------------------
  // Command handler implementations
  // ----------------------------------------------------------------------

  void ThermometerComponentImpl ::
    THERMO_SET_TEMP_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        F32 temperature
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

} // end namespace Ref
