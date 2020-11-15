// ======================================================================
// \title  ModeManagementComponentImpl.cpp
// \author jzl0213
// \brief  cpp file for ModeManagement component implementation class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================


#include <Ref/ModeManagement/ModeManagementComponentImpl.hpp>
#include "Fw/Types/BasicTypes.hpp"

namespace Ref {

  // ----------------------------------------------------------------------
  // Construction, initialization, and destruction
  // ----------------------------------------------------------------------

  ModeManagementComponentImpl ::
    ModeManagementComponentImpl(
        const char *const compName
    ) : ModeManagementComponentBase(compName)
  {

  }

  void ModeManagementComponentImpl ::
    init(
        const NATIVE_INT_TYPE queueDepth,
        const NATIVE_INT_TYPE instance
    )
  {
    ModeManagementComponentBase::init(queueDepth, instance);
  }

  ModeManagementComponentImpl ::
    ~ModeManagementComponentImpl(void)
  {

  }

  // ----------------------------------------------------------------------
  // Command handler implementations
  // ----------------------------------------------------------------------

  void ModeManagementComponentImpl ::
    MM_UPDATE_PHASE_cmdHandler(
        const FwOpcodeType opCode,
        const U32 cmdSeq,
        U32 phase
    )
  {
    // TODO
    this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_OK);
  }

} // end namespace Ref
