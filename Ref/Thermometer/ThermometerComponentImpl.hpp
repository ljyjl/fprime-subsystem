// ======================================================================
// \title  ThermometerComponentImpl.hpp
// \author jzl0213
// \brief  hpp file for Thermometer component implementation class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================

#ifndef Thermometer_HPP
#define Thermometer_HPP

#include "Ref/Thermometer/ThermometerComponentAc.hpp"

namespace Ref {

  class ThermometerComponentImpl :
    public ThermometerComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object Thermometer
      //!
      ThermometerComponentImpl(
          const char *const compName /*!< The component name*/
      );

      //! Initialize object Thermometer
      //!
      void init(
          const NATIVE_INT_TYPE queueDepth, /*!< The queue depth*/
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

      //! Destroy object Thermometer
      //!
      ~ThermometerComponentImpl(void);

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------

      //! Handler implementation for temperatureReqIn
      //!
      void temperatureReqIn_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          F32 requestTempteratue 
      );

    PRIVATE:

      // ----------------------------------------------------------------------
      // Command handler implementations
      // ----------------------------------------------------------------------

      //! Implementation for THERMO_SET_TEMP command handler
      //! 
      void THERMO_SET_TEMP_cmdHandler(
          const FwOpcodeType opCode, /*!< The opcode*/
          const U32 cmdSeq, /*!< The command sequence number*/
          F32 temperature 
      );


    };

} // end namespace Ref

#endif
