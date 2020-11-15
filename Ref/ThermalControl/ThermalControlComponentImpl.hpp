// ======================================================================
// \title  ThermalControlComponentImpl.hpp
// \author jzl0213
// \brief  hpp file for ThermalControl component implementation class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================

#ifndef ThermalControl_HPP
#define ThermalControl_HPP

#include "Ref/ThermalControl/ThermalControlComponentAc.hpp"

namespace Ref {

  class ThermalControlComponentImpl :
    public ThermalControlComponentBase
  {

    public:

      // ----------------------------------------------------------------------
      // Construction, initialization, and destruction
      // ----------------------------------------------------------------------

      //! Construct object ThermalControl
      //!
      ThermalControlComponentImpl(
          const char *const compName /*!< The component name*/
      );

      //! Initialize object ThermalControl
      //!
      void init(
          const NATIVE_INT_TYPE queueDepth, /*!< The queue depth*/
          const NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
      );

      //! Destroy object ThermalControl
      //!
      ~ThermalControlComponentImpl(void);

    PRIVATE:

      // ----------------------------------------------------------------------
      // Handler implementations for user-defined typed input ports
      // ----------------------------------------------------------------------

      //! Handler implementation for schedIn
      //!
      void schedIn_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          NATIVE_UINT_TYPE context /*!< The call order*/
      );

      //! Handler implementation for temperatureIn
      //!
      void temperatureIn_handler(
          const NATIVE_INT_TYPE portNum, /*!< The port number*/
          F32 temperature 
      );


    };

} // end namespace Ref

#endif
