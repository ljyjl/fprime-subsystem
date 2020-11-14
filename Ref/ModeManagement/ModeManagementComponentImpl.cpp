// ======================================================================
// \title  ModeManagementComponentAc.cpp
// \author Auto-generated
// \brief  cpp file for ModeManagement component base class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================

#include <stdio.h>
//#include <FpConfig.hpp>
#include <Ref/ModeManagement/ModeManagementComponentAc.hpp>
#include <Fw/Types/Assert.hpp>
#if FW_ENABLE_TEXT_LOGGING
#include <Fw/Types/EightyCharString.hpp>
#endif


namespace Ref {

  // ----------------------------------------------------------------------
  // Anonymous namespace to prevent name collisions
  // ----------------------------------------------------------------------

  namespace {

    typedef enum {
      MODEMANAGEMENT_COMPONENT_EXIT = Fw::ActiveComponentBase::ACTIVE_COMPONENT_EXIT,
      CMD_MM_UPDATE_PHASE
    } MsgTypeEnum;

    // Get the max size by doing a union of the input port serialization sizes.

    typedef union {
      BYTE cmdPort[Fw::InputCmdPort::SERIALIZED_SIZE];
    } BuffUnion;

    // Define a message buffer class large enough to handle all the
    // asynchronous inputs to the component

    class ComponentIpcSerializableBuffer :
      public Fw::SerializeBufferBase
    {

      public:

        enum {
          // Max. message size = size of data + message id + port
          SERIALIZATION_SIZE =
            sizeof(BuffUnion) +
            sizeof(NATIVE_INT_TYPE) +
            sizeof(NATIVE_INT_TYPE)
        };

        NATIVE_UINT_TYPE getBuffCapacity(void) const {
          return sizeof(m_buff);
        }

        U8* getBuffAddr(void) {
          return m_buff;
        }

        const U8* getBuffAddr(void) const {
          return m_buff;
        }

      private:
        // Should be the max of all the input ports serialized sizes...
        U8 m_buff[SERIALIZATION_SIZE];

    };

  }

  // ----------------------------------------------------------------------
  // Getters for numbers of input ports
  // ----------------------------------------------------------------------

  Fw::InputCmdPort *ModeManagementComponentBase ::
    get_CmdDisp_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_CmdDisp_InputPorts(),static_cast<AssertArg>(portNum));
    return &this->m_CmdDisp_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Typed connectors for output ports
  // ----------------------------------------------------------------------

  void ModeManagementComponentBase ::
    set_CmdStatus_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputCmdResponsePort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_CmdStatus_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_CmdStatus_OutputPort[portNum].addCallPort(port);
  }

  void ModeManagementComponentBase ::
    set_CmdReg_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputCmdRegPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_CmdReg_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_CmdReg_OutputPort[portNum].addCallPort(port);
  }

  void ModeManagementComponentBase ::
    set_ParamGet_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputPrmGetPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_ParamGet_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_ParamGet_OutputPort[portNum].addCallPort(port);
  }

  void ModeManagementComponentBase ::
    set_ParamSet_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputPrmSetPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_ParamSet_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_ParamSet_OutputPort[portNum].addCallPort(port);
  }

  void ModeManagementComponentBase ::
    set_Tlm_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputTlmPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_Tlm_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_Tlm_OutputPort[portNum].addCallPort(port);
  }

  void ModeManagementComponentBase ::
    set_Time_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputTimePort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_Time_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_Time_OutputPort[portNum].addCallPort(port);
  }

  void ModeManagementComponentBase ::
    set_Log_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputLogPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_Log_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_Log_OutputPort[portNum].addCallPort(port);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void ModeManagementComponentBase ::
    set_LogText_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputLogTextPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_LogText_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_LogText_OutputPort[portNum].addCallPort(port);
  }
#endif

  // ----------------------------------------------------------------------
  // Serialization connectors for output ports
  // ----------------------------------------------------------------------

#if FW_PORT_SERIALIZATION

  void ModeManagementComponentBase ::
    set_CmdStatus_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_CmdStatus_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_CmdStatus_OutputPort[portNum].registerSerialPort(port);
  }

  void ModeManagementComponentBase ::
    set_CmdReg_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_CmdReg_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_CmdReg_OutputPort[portNum].registerSerialPort(port);
  }

  void ModeManagementComponentBase ::
    set_ParamGet_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_ParamGet_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_ParamGet_OutputPort[portNum].registerSerialPort(port);
  }

  void ModeManagementComponentBase ::
    set_ParamSet_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_ParamSet_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_ParamSet_OutputPort[portNum].registerSerialPort(port);
  }

  void ModeManagementComponentBase ::
    set_Tlm_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_Tlm_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_Tlm_OutputPort[portNum].registerSerialPort(port);
  }

  void ModeManagementComponentBase ::
    set_Time_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_Time_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_Time_OutputPort[portNum].registerSerialPort(port);
  }

  void ModeManagementComponentBase ::
    set_Log_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_Log_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_Log_OutputPort[portNum].registerSerialPort(port);
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  void ModeManagementComponentBase ::
    set_LogText_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_LogText_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_LogText_OutputPort[portNum].registerSerialPort(port);
  }
#endif

#endif

  // ----------------------------------------------------------------------
  // Command registration
  // ----------------------------------------------------------------------

  void ModeManagementComponentBase ::
    regCommands(void)
  {
    FW_ASSERT(this->m_CmdReg_OutputPort[0].isConnected());
    this->m_CmdReg_OutputPort[0].invoke(
        this->getIdBase() + OPCODE_MM_UPDATE_PHASE
    );
    this->m_CmdReg_OutputPort[0].invoke(
        this->getIdBase() + OPCODE_PHASE_SET
    );
    this->m_CmdReg_OutputPort[0].invoke(
        this->getIdBase() + OPCODE_PHASE_SAVE
    );
    this->m_CmdReg_OutputPort[0].invoke(
        this->getIdBase() + OPCODE_TEMPERATURE_SET
    );
    this->m_CmdReg_OutputPort[0].invoke(
        this->getIdBase() + OPCODE_TEMPERATURE_SAVE
    );
    this->m_CmdReg_OutputPort[0].invoke(
        this->getIdBase() + OPCODE_MINTEMP_SET
    );
    this->m_CmdReg_OutputPort[0].invoke(
        this->getIdBase() + OPCODE_MINTEMP_SAVE
    );
    this->m_CmdReg_OutputPort[0].invoke(
        this->getIdBase() + OPCODE_MAXTEMP_SET
    );
    this->m_CmdReg_OutputPort[0].invoke(
        this->getIdBase() + OPCODE_MAXTEMP_SAVE
    );
  }

  // ----------------------------------------------------------------------
  // Parameter loading
  // ----------------------------------------------------------------------

  void ModeManagementComponentBase::loadParameters(void) {

    Fw::ParamBuffer buff;
    Fw::SerializeStatus stat = Fw::FW_SERIALIZE_OK;
    FW_ASSERT(this->m_ParamGet_OutputPort[0].isConnected());

    FwPrmIdType _id;
    // choose parameter ID to get
    _id = this->getIdBase() + PARAMID_PHASE;
    // Get parameter phase
    this->m_param_phase_valid =
      this->m_ParamGet_OutputPort[0].invoke(
          _id,
          buff
      );

    // Deserialize value
    this->m_paramLock.lock();

    if (this->m_param_phase_valid == Fw::PARAM_VALID) {
      stat = buff.deserialize(this->m_phase);
      // If there was a deserialization issue, mark it invalid.
      if (stat != Fw::FW_SERIALIZE_OK) {
        this->m_param_phase_valid = Fw::PARAM_DEFAULT;
        // set default value
        this->m_phase = 0;
      }
    }
    else {
      // set default value
      this->m_param_phase_valid = Fw::PARAM_DEFAULT;
      this->m_phase = 0;
    }

    this->m_paramLock.unLock();

    // choose parameter ID to get
    _id = this->getIdBase() + PARAMID_TEMPERATURE;
    // Get parameter temperature
    this->m_param_temperature_valid =
      this->m_ParamGet_OutputPort[0].invoke(
          _id,
          buff
      );

    // Deserialize value
    this->m_paramLock.lock();

    if (this->m_param_temperature_valid == Fw::PARAM_VALID) {
      stat = buff.deserialize(this->m_temperature);
      // If there was a deserialization issue, mark it invalid.
      if (stat != Fw::FW_SERIALIZE_OK) {
        this->m_param_temperature_valid = Fw::PARAM_DEFAULT;
        // set default value
        this->m_temperature = 50.0;
      }
    }
    else {
      // set default value
      this->m_param_temperature_valid = Fw::PARAM_DEFAULT;
      this->m_temperature = 50.0;
    }

    this->m_paramLock.unLock();

    // choose parameter ID to get
    _id = this->getIdBase() + PARAMID_MINTEMP;
    // Get parameter minTemp
    this->m_param_minTemp_valid =
      this->m_ParamGet_OutputPort[0].invoke(
          _id,
          buff
      );

    // Deserialize value
    this->m_paramLock.lock();

    if (this->m_param_minTemp_valid == Fw::PARAM_VALID) {
      stat = buff.deserialize(this->m_minTemp);
      // If there was a deserialization issue, mark it invalid.
      if (stat != Fw::FW_SERIALIZE_OK) {
        this->m_param_minTemp_valid = Fw::PARAM_DEFAULT;
        // set default value
        this->m_minTemp = 50.0;
      }
    }
    else {
      // set default value
      this->m_param_minTemp_valid = Fw::PARAM_DEFAULT;
      this->m_minTemp = 50.0;
    }

    this->m_paramLock.unLock();

    // choose parameter ID to get
    _id = this->getIdBase() + PARAMID_MAXTEMP;
    // Get parameter maxTemp
    this->m_param_maxTemp_valid =
      this->m_ParamGet_OutputPort[0].invoke(
          _id,
          buff
      );

    // Deserialize value
    this->m_paramLock.lock();

    if (this->m_param_maxTemp_valid == Fw::PARAM_VALID) {
      stat = buff.deserialize(this->m_maxTemp);
      // If there was a deserialization issue, mark it invalid.
      if (stat != Fw::FW_SERIALIZE_OK) {
        this->m_param_maxTemp_valid = Fw::PARAM_DEFAULT;
        // set default value
        this->m_maxTemp = 100.0;
      }
    }
    else {
      // set default value
      this->m_param_maxTemp_valid = Fw::PARAM_DEFAULT;
      this->m_maxTemp = 100.0;
    }

    this->m_paramLock.unLock();

    // Call notifier
    this->parametersLoaded();
  }

  // ----------------------------------------------------------------------
  // Component construction, initialization, and destruction
  // ----------------------------------------------------------------------

    ModeManagementComponentBase :: ModeManagementComponentBase(const char* compName) :
        Fw::ActiveComponentBase(compName) {



    this->m_param_phase_valid = Fw::PARAM_UNINIT;
    this->m_param_temperature_valid = Fw::PARAM_UNINIT;
    this->m_param_minTemp_valid = Fw::PARAM_UNINIT;
    this->m_param_maxTemp_valid = Fw::PARAM_UNINIT;
  }

  void ModeManagementComponentBase ::
    init(
        NATIVE_INT_TYPE queueDepth,
        NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class
    Fw::ActiveComponentBase::init(instance);

    // Connect input port CmdDisp
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_CmdDisp_InputPorts();
        port++
    ) {

      this->m_CmdDisp_InputPort[port].init();
      this->m_CmdDisp_InputPort[port].addCallComp(
          this,
          m_p_CmdDisp_in
      );
      this->m_CmdDisp_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_CmdDisp_InputPort[%d]",
          this->m_objName,
          port
      );
      this->m_CmdDisp_InputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port CmdStatus
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_CmdStatus_OutputPorts();
        port++
    ) {
      this->m_CmdStatus_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_CmdStatus_OutputPort[%d]",
          this->m_objName,
          port
      );
      this->m_CmdStatus_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port CmdReg
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_CmdReg_OutputPorts();
        port++
    ) {
      this->m_CmdReg_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_CmdReg_OutputPort[%d]",
          this->m_objName,
          port
      );
      this->m_CmdReg_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port ParamGet
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_ParamGet_OutputPorts();
        port++
    ) {
      this->m_ParamGet_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_ParamGet_OutputPort[%d]",
          this->m_objName,
          port
      );
      this->m_ParamGet_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port ParamSet
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_ParamSet_OutputPorts();
        port++
    ) {
      this->m_ParamSet_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_ParamSet_OutputPort[%d]",
          this->m_objName,
          port
      );
      this->m_ParamSet_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port Tlm
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_Tlm_OutputPorts();
        port++
    ) {
      this->m_Tlm_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_Tlm_OutputPort[%d]",
          this->m_objName,
          port
      );
      this->m_Tlm_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port Time
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_Time_OutputPorts();
        port++
    ) {
      this->m_Time_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_Time_OutputPort[%d]",
          this->m_objName,
          port
      );
      this->m_Time_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port Log
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_Log_OutputPorts();
        port++
    ) {
      this->m_Log_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_Log_OutputPort[%d]",
          this->m_objName,
          port
      );
      this->m_Log_OutputPort[port].setObjName(portName);
#endif

    }

    // Initialize output port LogText
#if FW_ENABLE_TEXT_LOGGING == 1
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_LogText_OutputPorts();
        port++
    ) {
      this->m_LogText_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_LogText_OutputPort[%d]",
          this->m_objName,
          port
      );
      this->m_LogText_OutputPort[port].setObjName(portName);
#endif

    }
#endif

    Os::Queue::QueueStatus qStat =
    this->createQueue(
        queueDepth,
        ComponentIpcSerializableBuffer::SERIALIZATION_SIZE
    );
    FW_ASSERT(
        Os::Queue::QUEUE_OK == qStat,
        static_cast<AssertArg>(qStat)
    );

  }

  ModeManagementComponentBase::
    ~ModeManagementComponentBase() {

  }

  // ----------------------------------------------------------------------
  // Invocation functions for output ports
  // ----------------------------------------------------------------------

  // ----------------------------------------------------------------------
  // Getters for numbers of ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE ModeManagementComponentBase ::
    getNum_CmdDisp_InputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_CmdDisp_InputPort
    );
  }

  NATIVE_INT_TYPE ModeManagementComponentBase ::
    getNum_CmdStatus_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_CmdStatus_OutputPort
    );
  }

  NATIVE_INT_TYPE ModeManagementComponentBase ::
    getNum_CmdReg_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_CmdReg_OutputPort
    );
  }

  NATIVE_INT_TYPE ModeManagementComponentBase ::
    getNum_ParamGet_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_ParamGet_OutputPort
    );
  }

  NATIVE_INT_TYPE ModeManagementComponentBase ::
    getNum_ParamSet_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_ParamSet_OutputPort
    );
  }

  NATIVE_INT_TYPE ModeManagementComponentBase ::
    getNum_Tlm_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_Tlm_OutputPort
    );
  }

  NATIVE_INT_TYPE ModeManagementComponentBase ::
    getNum_Time_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_Time_OutputPort
    );
  }

  NATIVE_INT_TYPE ModeManagementComponentBase ::
    getNum_Log_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_Log_OutputPort
    );
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  NATIVE_INT_TYPE ModeManagementComponentBase ::
    getNum_LogText_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_LogText_OutputPort
    );
  }
#endif

  // ----------------------------------------------------------------------
  // Port connection status queries
  // ----------------------------------------------------------------------

  bool ModeManagementComponentBase ::
    isConnected_CmdStatus_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_CmdStatus_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_CmdStatus_OutputPort[portNum].isConnected();
  }

  bool ModeManagementComponentBase ::
    isConnected_CmdReg_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_CmdReg_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_CmdReg_OutputPort[portNum].isConnected();
  }

  bool ModeManagementComponentBase ::
    isConnected_ParamGet_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_ParamGet_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_ParamGet_OutputPort[portNum].isConnected();
  }

  bool ModeManagementComponentBase ::
    isConnected_ParamSet_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_ParamSet_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_ParamSet_OutputPort[portNum].isConnected();
  }

  bool ModeManagementComponentBase ::
    isConnected_Tlm_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_Tlm_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_Tlm_OutputPort[portNum].isConnected();
  }

  bool ModeManagementComponentBase ::
    isConnected_Time_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_Time_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_Time_OutputPort[portNum].isConnected();
  }

  bool ModeManagementComponentBase ::
    isConnected_Log_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_Log_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_Log_OutputPort[portNum].isConnected();
  }

#if FW_ENABLE_TEXT_LOGGING == 1
  bool ModeManagementComponentBase ::
    isConnected_LogText_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_LogText_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_LogText_OutputPort[portNum].isConnected();
  }
#endif

  // ----------------------------------------------------------------------
  // Calls for messages received on command input ports
  // ----------------------------------------------------------------------

  void ModeManagementComponentBase ::
    m_p_CmdDisp_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::CmdArgBuffer &args
    )
  {

    // Select base class function based on opcode
    FW_ASSERT(callComp);
    ModeManagementComponentBase* compPtr =
      (ModeManagementComponentBase*) callComp;

    const U32 idBase = callComp->getIdBase();
    FW_ASSERT(opCode >= idBase, opCode, idBase);
    switch (opCode - idBase) {

      case OPCODE_MM_UPDATE_PHASE: /*!<  */
        compPtr->MM_UPDATE_PHASE_cmdHandlerBase(
            opCode,
            cmdSeq,
            args
        );
        break;

      case OPCODE_PHASE_SET:
      {
        Fw::CommandResponse _cstat = compPtr->paramSet_phase(args);
        compPtr->cmdResponse_out(
            opCode,
            cmdSeq,
            _cstat
        );
        break;
      }
      case OPCODE_PHASE_SAVE:
      {
        Fw::CommandResponse _cstat = compPtr->paramSave_phase();
        compPtr->cmdResponse_out(
            opCode,
            cmdSeq,
            _cstat
        );
        break;
      }
      case OPCODE_TEMPERATURE_SET:
      {
        Fw::CommandResponse _cstat = compPtr->paramSet_temperature(args);
        compPtr->cmdResponse_out(
            opCode,
            cmdSeq,
            _cstat
        );
        break;
      }
      case OPCODE_TEMPERATURE_SAVE:
      {
        Fw::CommandResponse _cstat = compPtr->paramSave_temperature();
        compPtr->cmdResponse_out(
            opCode,
            cmdSeq,
            _cstat
        );
        break;
      }
      case OPCODE_MINTEMP_SET:
      {
        Fw::CommandResponse _cstat = compPtr->paramSet_minTemp(args);
        compPtr->cmdResponse_out(
            opCode,
            cmdSeq,
            _cstat
        );
        break;
      }
      case OPCODE_MINTEMP_SAVE:
      {
        Fw::CommandResponse _cstat = compPtr->paramSave_minTemp();
        compPtr->cmdResponse_out(
            opCode,
            cmdSeq,
            _cstat
        );
        break;
      }
      case OPCODE_MAXTEMP_SET:
      {
        Fw::CommandResponse _cstat = compPtr->paramSet_maxTemp(args);
        compPtr->cmdResponse_out(
            opCode,
            cmdSeq,
            _cstat
        );
        break;
      }
      case OPCODE_MAXTEMP_SAVE:
      {
        Fw::CommandResponse _cstat = compPtr->paramSave_maxTemp();
        compPtr->cmdResponse_out(
            opCode,
            cmdSeq,
            _cstat
        );
        break;
      }
      default: {
        compPtr->cmdResponse_out(
            opCode,cmdSeq,
            Fw::COMMAND_INVALID_OPCODE
        );
        break;
      }

    }

  }

  void ModeManagementComponentBase ::
    cmdResponse_out(
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::CommandResponse response
    )
  {
    FW_ASSERT(this->m_CmdStatus_OutputPort[0].isConnected());
    this->m_CmdStatus_OutputPort[0].invoke(opCode,cmdSeq,response);
  }

  // ----------------------------------------------------------------------
  // Base class command functions
  // ----------------------------------------------------------------------

  void ModeManagementComponentBase ::
    MM_UPDATE_PHASE_cmdHandlerBase(
        FwOpcodeType opCode,
        U32 cmdSeq,
        Fw::CmdArgBuffer &args
    )
  {

    // Call pre-message hook
    this->MM_UPDATE_PHASE_preMsgHook(opCode,cmdSeq);

    // Defer deserializing arguments to the message dispatcher
    // to avoid deserializing and reserializing just for IPC
    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    // Serialize for IPC
    _status = msg.serialize((NATIVE_INT_TYPE)CMD_MM_UPDATE_PHASE);
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<AssertArg>(_status)
        );

    // Fake port number to make message dequeue work
    NATIVE_INT_TYPE port = 0;
    _status = msg.serialize(port);
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<AssertArg>(_status)
    );

    _status = msg.serialize(opCode);
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<AssertArg>(_status)
    );

    _status = msg.serialize(cmdSeq);
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<AssertArg>(_status)
    );

    _status = msg.serialize(args);
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<AssertArg>(_status)
    );

    // send message
    Os::Queue::QueueBlocking _block =
      Os::Queue::QUEUE_NONBLOCKING;
    Os::Queue::QueueStatus qStatus =
      this->m_queue.send(msg, 0,_block);
    FW_ASSERT(
        qStatus == Os::Queue::QUEUE_OK,
        static_cast<AssertArg>(qStatus)
    );

  }

  void ModeManagementComponentBase::
    MM_UPDATE_PHASE_preMsgHook(
        FwOpcodeType opCode,
        U32 cmdSeq
    )
  {
    // Defaults to no-op; can be overridden
  }

  // ----------------------------------------------------------------------
  // Telemetry write functions
  // ----------------------------------------------------------------------

  void ModeManagementComponentBase ::
    tlmWrite_MM_PHASE(U32 arg)
  {

    if (this->m_Tlm_OutputPort[0].isConnected()) {
      Fw::Time _tlmTime;
      if (this->m_Time_OutputPort[0].isConnected()) {
         this->m_Time_OutputPort[0].invoke( _tlmTime);
      }
      Fw::TlmBuffer _tlmBuff;
      Fw::SerializeStatus _stat = _tlmBuff.serialize(arg);
      FW_ASSERT(
          _stat == Fw::FW_SERIALIZE_OK,
          static_cast<AssertArg>(_stat)
      );

      FwChanIdType _id;

      _id = this->getIdBase() + CHANNELID_MM_PHASE;

      this->m_Tlm_OutputPort[0].invoke(
          _id,
          _tlmTime,
          _tlmBuff
      );
    }

  }

  // ----------------------------------------------------------------------
  // Time
  // ----------------------------------------------------------------------

  Fw::Time ModeManagementComponentBase ::
    getTime(void)
  {
    if (this->m_Time_OutputPort[0].isConnected()) {
      Fw::Time _time;
      this->m_Time_OutputPort[0].invoke(_time);
      return _time;
    } else {
      return Fw::Time(TB_NONE,0,0);
    }
  }

  // ----------------------------------------------------------------------
  // Parameter update hook
  // ----------------------------------------------------------------------

  void ModeManagementComponentBase ::
    parameterUpdated(FwPrmIdType id)
  {
    // Do nothing by default
  }

  // ----------------------------------------------------------------------
  // Parameter load hook
  // ----------------------------------------------------------------------

  void ModeManagementComponentBase ::
    parametersLoaded()
  {
    // Do nothing by default
  }

  // ----------------------------------------------------------------------
  // Protected parameter get functions
  // ----------------------------------------------------------------------

  U32 ModeManagementComponentBase ::
    paramGet_phase(Fw::ParamValid& valid)
  {
    U32 _local;
    this->m_paramLock.lock();
    valid = this->m_param_phase_valid;
    _local = this->m_phase;
    this->m_paramLock.unLock();
    return _local;
  }

  F32 ModeManagementComponentBase ::
    paramGet_temperature(Fw::ParamValid& valid)
  {
    F32 _local;
    this->m_paramLock.lock();
    valid = this->m_param_temperature_valid;
    _local = this->m_temperature;
    this->m_paramLock.unLock();
    return _local;
  }

  F32 ModeManagementComponentBase ::
    paramGet_minTemp(Fw::ParamValid& valid)
  {
    F32 _local;
    this->m_paramLock.lock();
    valid = this->m_param_minTemp_valid;
    _local = this->m_minTemp;
    this->m_paramLock.unLock();
    return _local;
  }

  F32 ModeManagementComponentBase ::
    paramGet_maxTemp(Fw::ParamValid& valid)
  {
    F32 _local;
    this->m_paramLock.lock();
    valid = this->m_param_maxTemp_valid;
    _local = this->m_maxTemp;
    this->m_paramLock.unLock();
    return _local;
  }

  // ----------------------------------------------------------------------
  // Private parameter get function
  // ----------------------------------------------------------------------

  Fw::ParamValid ModeManagementComponentBase ::
    getParam(
      FwPrmIdType id,
      Fw::ParamBuffer& buff
    )
  {
    if (this->m_ParamGet_OutputPort[0].isConnected()) {
      return this->m_ParamGet_OutputPort[0].invoke(id,buff);
    } else {
      return Fw::PARAM_INVALID;
    }

  }

  // ----------------------------------------------------------------------
  // Parameter set functions
  // ----------------------------------------------------------------------

  Fw::CommandResponse ModeManagementComponentBase ::
    paramSet_phase(Fw::SerializeBufferBase &val)
  {

    U32 _local_val;
    Fw::SerializeStatus _stat = val.deserialize(_local_val);
    if (_stat != Fw::FW_SERIALIZE_OK) {
      return Fw::COMMAND_VALIDATION_ERROR;
    }

    // Assign value only if successfully deserialized
    this->m_paramLock.lock();
    this->m_phase = _local_val;
    this->m_param_phase_valid = Fw::PARAM_VALID;
    this->m_paramLock.unLock();

    // Call notifier
    this->parameterUpdated(PARAMID_PHASE);
    return Fw::COMMAND_OK;

  }

  // ----------------------------------------------------------------------
  // Parameter save functions
  // ----------------------------------------------------------------------

  Fw::CommandResponse ModeManagementComponentBase ::
    paramSave_phase(void)
  {

    if (this->m_ParamSet_OutputPort[0].isConnected()) {
      Fw::ParamBuffer saveBuff;
      this->m_paramLock.lock();

      Fw::SerializeStatus stat =
        saveBuff.serialize(m_phase);
      this->m_paramLock.unLock();
      if (stat != Fw::FW_SERIALIZE_OK) {
        return Fw::COMMAND_VALIDATION_ERROR;
      }

      FwPrmIdType id = 0;
      id = this->getIdBase() + PARAMID_PHASE;
      // Save the parameter
      this->m_ParamSet_OutputPort[0].invoke(
          id,
          saveBuff
      );
      return Fw::COMMAND_OK;

    }

    return Fw::COMMAND_EXECUTION_ERROR;

  }

  Fw::CommandResponse ModeManagementComponentBase ::
    paramSet_temperature(Fw::SerializeBufferBase &val)
  {

    F32 _local_val;
    Fw::SerializeStatus _stat = val.deserialize(_local_val);
    if (_stat != Fw::FW_SERIALIZE_OK) {
      return Fw::COMMAND_VALIDATION_ERROR;
    }

    // Assign value only if successfully deserialized
    this->m_paramLock.lock();
    this->m_temperature = _local_val;
    this->m_param_temperature_valid = Fw::PARAM_VALID;
    this->m_paramLock.unLock();

    // Call notifier
    this->parameterUpdated(PARAMID_TEMPERATURE);
    return Fw::COMMAND_OK;

  }

  // ----------------------------------------------------------------------
  // Parameter save functions
  // ----------------------------------------------------------------------

  Fw::CommandResponse ModeManagementComponentBase ::
    paramSave_temperature(void)
  {

    if (this->m_ParamSet_OutputPort[0].isConnected()) {
      Fw::ParamBuffer saveBuff;
      this->m_paramLock.lock();

      Fw::SerializeStatus stat =
        saveBuff.serialize(m_temperature);
      this->m_paramLock.unLock();
      if (stat != Fw::FW_SERIALIZE_OK) {
        return Fw::COMMAND_VALIDATION_ERROR;
      }

      FwPrmIdType id = 0;
      id = this->getIdBase() + PARAMID_TEMPERATURE;
      // Save the parameter
      this->m_ParamSet_OutputPort[0].invoke(
          id,
          saveBuff
      );
      return Fw::COMMAND_OK;

    }

    return Fw::COMMAND_EXECUTION_ERROR;

  }

  Fw::CommandResponse ModeManagementComponentBase ::
    paramSet_minTemp(Fw::SerializeBufferBase &val)
  {

    F32 _local_val;
    Fw::SerializeStatus _stat = val.deserialize(_local_val);
    if (_stat != Fw::FW_SERIALIZE_OK) {
      return Fw::COMMAND_VALIDATION_ERROR;
    }

    // Assign value only if successfully deserialized
    this->m_paramLock.lock();
    this->m_minTemp = _local_val;
    this->m_param_minTemp_valid = Fw::PARAM_VALID;
    this->m_paramLock.unLock();

    // Call notifier
    this->parameterUpdated(PARAMID_MINTEMP);
    return Fw::COMMAND_OK;

  }

  // ----------------------------------------------------------------------
  // Parameter save functions
  // ----------------------------------------------------------------------

  Fw::CommandResponse ModeManagementComponentBase ::
    paramSave_minTemp(void)
  {

    if (this->m_ParamSet_OutputPort[0].isConnected()) {
      Fw::ParamBuffer saveBuff;
      this->m_paramLock.lock();

      Fw::SerializeStatus stat =
        saveBuff.serialize(m_minTemp);
      this->m_paramLock.unLock();
      if (stat != Fw::FW_SERIALIZE_OK) {
        return Fw::COMMAND_VALIDATION_ERROR;
      }

      FwPrmIdType id = 0;
      id = this->getIdBase() + PARAMID_MINTEMP;
      // Save the parameter
      this->m_ParamSet_OutputPort[0].invoke(
          id,
          saveBuff
      );
      return Fw::COMMAND_OK;

    }

    return Fw::COMMAND_EXECUTION_ERROR;

  }

  Fw::CommandResponse ModeManagementComponentBase ::
    paramSet_maxTemp(Fw::SerializeBufferBase &val)
  {

    F32 _local_val;
    Fw::SerializeStatus _stat = val.deserialize(_local_val);
    if (_stat != Fw::FW_SERIALIZE_OK) {
      return Fw::COMMAND_VALIDATION_ERROR;
    }

    // Assign value only if successfully deserialized
    this->m_paramLock.lock();
    this->m_maxTemp = _local_val;
    this->m_param_maxTemp_valid = Fw::PARAM_VALID;
    this->m_paramLock.unLock();

    // Call notifier
    this->parameterUpdated(PARAMID_MAXTEMP);
    return Fw::COMMAND_OK;

  }

  // ----------------------------------------------------------------------
  // Parameter save functions
  // ----------------------------------------------------------------------

  Fw::CommandResponse ModeManagementComponentBase ::
    paramSave_maxTemp(void)
  {

    if (this->m_ParamSet_OutputPort[0].isConnected()) {
      Fw::ParamBuffer saveBuff;
      this->m_paramLock.lock();

      Fw::SerializeStatus stat =
        saveBuff.serialize(m_maxTemp);
      this->m_paramLock.unLock();
      if (stat != Fw::FW_SERIALIZE_OK) {
        return Fw::COMMAND_VALIDATION_ERROR;
      }

      FwPrmIdType id = 0;
      id = this->getIdBase() + PARAMID_MAXTEMP;
      // Save the parameter
      this->m_ParamSet_OutputPort[0].invoke(
          id,
          saveBuff
      );
      return Fw::COMMAND_OK;

    }

    return Fw::COMMAND_EXECUTION_ERROR;

  }

  // ----------------------------------------------------------------------
  // Event handling functions
  // ----------------------------------------------------------------------

  void ModeManagementComponentBase ::
    log_ACTIVITY_HI_MM_PHASE_UPDATED(
        U32 phase
    )
  {


    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
       this->m_Time_OutputPort[0].invoke( _logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_MM_PHASE_UPDATED;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {

      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(1));
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<AssertArg>(_status)
      );
#endif

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
          static_cast<U8>(sizeof(phase))
      );
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<AssertArg>(_status)
      );
#endif

      _status = _logBuff.serialize(phase);
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<AssertArg>(_status)
      );


      this->m_Log_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LOG_ACTIVITY_HI,
          _logBuff
      );

    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {

#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Phase updated to: %d";
#else
      const char* _formatString =
        "%s: Phase updated to: %d";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
          _textBuffer,
          FW_LOG_TEXT_BUFFER_SIZE,
          _formatString,
#if FW_OBJECT_NAMES == 1
          this->m_objName,
#endif
          "MM_PHASE_UPDATED "
        , phase
      );

      // Null terminate
      _textBuffer[FW_LOG_TEXT_BUFFER_SIZE-1] = 0;
      Fw::TextLogString _logString = _textBuffer;
      this->m_LogText_OutputPort[0].invoke(
          _id,
          _logTime,Fw::TEXT_LOG_ACTIVITY_HI,
          _logString
      );

    }
#endif

  }


  void ModeManagementComponentBase ::
    log_WARNING_HI_MM_SAFETY_MODE_ENTERED(
        U32 phase
    )
  {


    // Get the time
    Fw::Time _logTime;
    if (this->m_Time_OutputPort[0].isConnected()) {
       this->m_Time_OutputPort[0].invoke( _logTime);
    }

    FwEventIdType _id = static_cast<FwEventIdType>(0);

    _id = this->getIdBase() + EVENTID_MM_SAFETY_MODE_ENTERED;

    // Emit the event on the log port
    if (this->m_Log_OutputPort[0].isConnected()) {

      Fw::LogBuffer _logBuff;
      Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

#if FW_AMPCS_COMPATIBLE
      // Serialize the number of arguments
      _status = _logBuff.serialize(static_cast<U8>(1));
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<AssertArg>(_status)
      );
#endif

#if FW_AMPCS_COMPATIBLE
      // Serialize the argument size
      _status = _logBuff.serialize(
          static_cast<U8>(sizeof(phase))
      );
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<AssertArg>(_status)
      );
#endif

      _status = _logBuff.serialize(phase);
      FW_ASSERT(
          _status == Fw::FW_SERIALIZE_OK,
          static_cast<AssertArg>(_status)
      );


      this->m_Log_OutputPort[0].invoke(
          _id,
          _logTime,Fw::LOG_WARNING_HI,
          _logBuff
      );

    }

    // Emit the event on the text log port
#if FW_ENABLE_TEXT_LOGGING
    if (this->m_LogText_OutputPort[0].isConnected()) {

#if FW_OBJECT_NAMES == 1
      const char* _formatString =
        "(%s) %s: Warning: Enter the safety mode: %d";
#else
      const char* _formatString =
        "%s: Warning: Enter the safety mode: %d";
#endif

      char _textBuffer[FW_LOG_TEXT_BUFFER_SIZE];

      (void) snprintf(
          _textBuffer,
          FW_LOG_TEXT_BUFFER_SIZE,
          _formatString,
#if FW_OBJECT_NAMES == 1
          this->m_objName,
#endif
          "MM_SAFETY_MODE_ENTERED "
        , phase
      );

      // Null terminate
      _textBuffer[FW_LOG_TEXT_BUFFER_SIZE-1] = 0;
      Fw::TextLogString _logString = _textBuffer;
      this->m_LogText_OutputPort[0].invoke(
          _id,
          _logTime,Fw::TEXT_LOG_WARNING_HI,
          _logString
      );

    }
#endif

  }


  // ----------------------------------------------------------------------
  // Message dispatch method for active and queued components. Called
  // by active component thread or implementation code for queued components
  // ----------------------------------------------------------------------

  Fw::QueuedComponentBase::MsgDispatchStatus ModeManagementComponentBase ::
    doDispatch(void)
  {
    ComponentIpcSerializableBuffer msg;
    NATIVE_INT_TYPE priority;

    Os::Queue::QueueStatus msgStatus = this->m_queue.receive(msg,priority,Os::Queue::QUEUE_BLOCKING);
    FW_ASSERT(
        msgStatus == Os::Queue::QUEUE_OK,
        static_cast<AssertArg>(msgStatus)
    );

    // Reset to beginning of buffer
    msg.resetDeser();

    NATIVE_INT_TYPE desMsg;
    Fw::SerializeStatus deserStatus = msg.deserialize(desMsg);
    FW_ASSERT(
        deserStatus == Fw::FW_SERIALIZE_OK,
        static_cast<AssertArg>(deserStatus)
    );

    MsgTypeEnum msgType = static_cast<MsgTypeEnum>(desMsg);

    if (msgType == MODEMANAGEMENT_COMPONENT_EXIT) {
      return MSG_DISPATCH_EXIT;
    }

    NATIVE_INT_TYPE portNum;
    deserStatus = msg.deserialize(portNum);
    FW_ASSERT(
        deserStatus == Fw::FW_SERIALIZE_OK,
        static_cast<AssertArg>(deserStatus)
    );

    switch (msgType) {

      // Handle command MM_UPDATE_PHASE
      case CMD_MM_UPDATE_PHASE: {
        // Deserialize opcode
        FwOpcodeType opCode;
        deserStatus = msg.deserialize(opCode);
        FW_ASSERT (
            deserStatus == Fw::FW_SERIALIZE_OK,
            static_cast<AssertArg>(deserStatus)
        );

        // Deserialize command sequence
        U32 cmdSeq;
        deserStatus = msg.deserialize(cmdSeq);
        FW_ASSERT (
            deserStatus == Fw::FW_SERIALIZE_OK,
            static_cast<AssertArg>(deserStatus)
        );

        // Deserialize command argument buffer
        Fw::CmdArgBuffer args;
        deserStatus = msg.deserialize(args);
        FW_ASSERT (
            deserStatus == Fw::FW_SERIALIZE_OK,
            static_cast<AssertArg>(deserStatus)
        );

        // Reset buffer
        args.resetDeser();

        // Deserialize argument phase
        U32 phase;
        deserStatus = args.deserialize(phase);
        if (deserStatus != Fw::FW_SERIALIZE_OK) {
          if (this->m_CmdStatus_OutputPort[0].isConnected()) {
            this->cmdResponse_out(
                opCode,
                cmdSeq,
                Fw::COMMAND_FORMAT_ERROR
            );
          }
          // Don't crash the task if bad arguments were passed from the ground
          break;
        }

        // Make sure there was no data left over.
        // That means the argument buffer size was incorrect.
#if FW_CMD_CHECK_RESIDUAL
        if (args.getBuffLeft() != 0) {
          if (this->m_CmdStatus_OutputPort[0].isConnected()) {
            this->cmdResponse_out(opCode,cmdSeq,Fw::COMMAND_FORMAT_ERROR);
          }
          // Don't crash the task if bad arguments were passed from the ground
          break;
        }
#endif
        // Call handler function
        this->MM_UPDATE_PHASE_cmdHandler(
            opCode,
            cmdSeq,
            phase
        );

        break;

      }

      default:
        return MSG_DISPATCH_ERROR;

    }

    return MSG_DISPATCH_OK;

  }

} // end namespace Ref
