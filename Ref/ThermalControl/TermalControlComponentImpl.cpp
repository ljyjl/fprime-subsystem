// ======================================================================
// \title  ThermalControlComponentAc.cpp
// \author Auto-generated
// \brief  cpp file for ThermalControl component base class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================

#include <stdio.h>
//#include <FpConfig.hpp>
#include <Ref/ThermalControl/ThermalControlComponentAc.hpp>
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
      THERMALCONTROL_COMPONENT_EXIT = Fw::ActiveComponentBase::ACTIVE_COMPONENT_EXIT,
      TEMPERATUREIN_TEMPERATURE
    } MsgTypeEnum;

    // Get the max size by doing a union of the input port serialization sizes.

    typedef union {
      BYTE port1[Ref::InputTemperaturePort::SERIALIZED_SIZE];
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

  Svc::InputSchedPort *ThermalControlComponentBase ::
    get_schedIn_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_schedIn_InputPorts(),static_cast<AssertArg>(portNum));
    return &this->m_schedIn_InputPort[portNum];
  }

  Ref::InputTemperaturePort *ThermalControlComponentBase ::
    get_temperatureIn_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_temperatureIn_InputPorts(),static_cast<AssertArg>(portNum));
    return &this->m_temperatureIn_InputPort[portNum];
  }

  Fw::InputCmdPort *ThermalControlComponentBase ::
    get_CmdDisp_InputPort(NATIVE_INT_TYPE portNum)
  {
    FW_ASSERT(portNum < this->getNum_CmdDisp_InputPorts(),static_cast<AssertArg>(portNum));
    return &this->m_CmdDisp_InputPort[portNum];
  }

  // ----------------------------------------------------------------------
  // Typed connectors for output ports
  // ----------------------------------------------------------------------

  void ThermalControlComponentBase ::
    set_temperatureReqOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Ref::InputTemperatureReqPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_temperatureReqOut_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_temperatureReqOut_OutputPort[portNum].addCallPort(port);
  }

  void ThermalControlComponentBase ::
    set_CmdStatus_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputCmdResponsePort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_CmdStatus_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_CmdStatus_OutputPort[portNum].addCallPort(port);
  }

  void ThermalControlComponentBase ::
    set_CmdReg_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputCmdRegPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_CmdReg_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_CmdReg_OutputPort[portNum].addCallPort(port);
  }

  void ThermalControlComponentBase ::
    set_ParamGet_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputPrmGetPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_ParamGet_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_ParamGet_OutputPort[portNum].addCallPort(port);
  }

  void ThermalControlComponentBase ::
    set_ParamSet_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputPrmSetPort* port
    )
  {
    FW_ASSERT(portNum < this->getNum_ParamSet_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_ParamSet_OutputPort[portNum].addCallPort(port);
  }

  // ----------------------------------------------------------------------
  // Serialization connectors for output ports
  // ----------------------------------------------------------------------

#if FW_PORT_SERIALIZATION

  void ThermalControlComponentBase ::
    set_temperatureReqOut_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_temperatureReqOut_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_temperatureReqOut_OutputPort[portNum].registerSerialPort(port);
  }

  void ThermalControlComponentBase ::
    set_CmdStatus_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_CmdStatus_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_CmdStatus_OutputPort[portNum].registerSerialPort(port);
  }

  void ThermalControlComponentBase ::
    set_CmdReg_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_CmdReg_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_CmdReg_OutputPort[portNum].registerSerialPort(port);
  }

  void ThermalControlComponentBase ::
    set_ParamGet_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_ParamGet_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_ParamGet_OutputPort[portNum].registerSerialPort(port);
  }

  void ThermalControlComponentBase ::
    set_ParamSet_OutputPort(
        NATIVE_INT_TYPE portNum,
        Fw::InputSerializePort *port
    )
  {
    FW_ASSERT(portNum < this->getNum_ParamSet_OutputPorts(),static_cast<AssertArg>(portNum));
    return this->m_ParamSet_OutputPort[portNum].registerSerialPort(port);
  }

#endif

  // ----------------------------------------------------------------------
  // Command registration
  // ----------------------------------------------------------------------

  void ThermalControlComponentBase ::
    regCommands(void)
  {
    FW_ASSERT(this->m_CmdReg_OutputPort[0].isConnected());
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

  void ThermalControlComponentBase::loadParameters(void) {

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

    ThermalControlComponentBase :: ThermalControlComponentBase(const char* compName) :
        Fw::ActiveComponentBase(compName) {



    this->m_param_phase_valid = Fw::PARAM_UNINIT;
    this->m_param_temperature_valid = Fw::PARAM_UNINIT;
    this->m_param_minTemp_valid = Fw::PARAM_UNINIT;
    this->m_param_maxTemp_valid = Fw::PARAM_UNINIT;
  }

  void ThermalControlComponentBase ::
    init(
        NATIVE_INT_TYPE queueDepth,
        NATIVE_INT_TYPE instance
    )
  {

    // Initialize base class
    Fw::ActiveComponentBase::init(instance);

    // Connect input port schedIn
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_schedIn_InputPorts();
        port++
    ) {

      this->m_schedIn_InputPort[port].init();
      this->m_schedIn_InputPort[port].addCallComp(
          this,
          m_p_schedIn_in
      );
      this->m_schedIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_schedIn_InputPort[%d]",
          this->m_objName,
          port
      );
      this->m_schedIn_InputPort[port].setObjName(portName);
#endif

    }

    // Connect input port temperatureIn
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_temperatureIn_InputPorts();
        port++
    ) {

      this->m_temperatureIn_InputPort[port].init();
      this->m_temperatureIn_InputPort[port].addCallComp(
          this,
          m_p_temperatureIn_in
      );
      this->m_temperatureIn_InputPort[port].setPortNum(port);

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_temperatureIn_InputPort[%d]",
          this->m_objName,
          port
      );
      this->m_temperatureIn_InputPort[port].setObjName(portName);
#endif

    }

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

    // Initialize output port temperatureReqOut
    for (
        NATIVE_INT_TYPE port = 0;
        port < this->getNum_temperatureReqOut_OutputPorts();
        port++
    ) {
      this->m_temperatureReqOut_OutputPort[port].init();

#if FW_OBJECT_NAMES == 1
      char portName[120];
      (void) snprintf(
          portName,
          sizeof(portName),
          "%s_temperatureReqOut_OutputPort[%d]",
          this->m_objName,
          port
      );
      this->m_temperatureReqOut_OutputPort[port].setObjName(portName);
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

  ThermalControlComponentBase::
    ~ThermalControlComponentBase() {

  }

  // ----------------------------------------------------------------------
  // Invocation functions for output ports
  // ----------------------------------------------------------------------

  void ThermalControlComponentBase ::
    temperatureReqOut_out(
        NATIVE_INT_TYPE portNum,
        F32 requestTempteratue
    )
  {
    FW_ASSERT(portNum < this->getNum_temperatureReqOut_OutputPorts(),static_cast<AssertArg>(portNum));
    this->m_temperatureReqOut_OutputPort[portNum].invoke(requestTempteratue);
  }

  // ----------------------------------------------------------------------
  // Getters for numbers of ports
  // ----------------------------------------------------------------------

  NATIVE_INT_TYPE ThermalControlComponentBase ::
    getNum_schedIn_InputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_schedIn_InputPort
    );
  }

  NATIVE_INT_TYPE ThermalControlComponentBase ::
    getNum_temperatureIn_InputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_temperatureIn_InputPort
    );
  }

  NATIVE_INT_TYPE ThermalControlComponentBase ::
    getNum_temperatureReqOut_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_temperatureReqOut_OutputPort
    );
  }

  NATIVE_INT_TYPE ThermalControlComponentBase ::
    getNum_CmdDisp_InputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_CmdDisp_InputPort
    );
  }

  NATIVE_INT_TYPE ThermalControlComponentBase ::
    getNum_CmdStatus_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_CmdStatus_OutputPort
    );
  }

  NATIVE_INT_TYPE ThermalControlComponentBase ::
    getNum_CmdReg_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_CmdReg_OutputPort
    );
  }

  NATIVE_INT_TYPE ThermalControlComponentBase ::
    getNum_ParamGet_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_ParamGet_OutputPort
    );
  }

  NATIVE_INT_TYPE ThermalControlComponentBase ::
    getNum_ParamSet_OutputPorts(void)
  {
    return (NATIVE_INT_TYPE) FW_NUM_ARRAY_ELEMENTS(
        this->m_ParamSet_OutputPort
    );
  }

  // ----------------------------------------------------------------------
  // Port connection status queries
  // ----------------------------------------------------------------------

  bool ThermalControlComponentBase ::
    isConnected_temperatureReqOut_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_temperatureReqOut_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_temperatureReqOut_OutputPort[portNum].isConnected();
  }

  bool ThermalControlComponentBase ::
    isConnected_CmdStatus_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_CmdStatus_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_CmdStatus_OutputPort[portNum].isConnected();
  }

  bool ThermalControlComponentBase ::
    isConnected_CmdReg_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_CmdReg_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_CmdReg_OutputPort[portNum].isConnected();
  }

  bool ThermalControlComponentBase ::
    isConnected_ParamGet_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_ParamGet_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_ParamGet_OutputPort[portNum].isConnected();
  }

  bool ThermalControlComponentBase ::
    isConnected_ParamSet_OutputPort(NATIVE_INT_TYPE portNum)
  {
     FW_ASSERT(
        portNum < this->getNum_ParamSet_OutputPorts(),
        static_cast<AssertArg>(portNum)
     );
     return this->m_ParamSet_OutputPort[portNum].isConnected();
  }

  // ----------------------------------------------------------------------
  // Calls for messages received on command input ports
  // ----------------------------------------------------------------------

  void ThermalControlComponentBase ::
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
    ThermalControlComponentBase* compPtr =
      (ThermalControlComponentBase*) callComp;

    const U32 idBase = callComp->getIdBase();
    FW_ASSERT(opCode >= idBase, opCode, idBase);
    switch (opCode - idBase) {

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

  void ThermalControlComponentBase ::
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
  // Parameter update hook
  // ----------------------------------------------------------------------

  void ThermalControlComponentBase ::
    parameterUpdated(FwPrmIdType id)
  {
    // Do nothing by default
  }

  // ----------------------------------------------------------------------
  // Parameter load hook
  // ----------------------------------------------------------------------

  void ThermalControlComponentBase ::
    parametersLoaded()
  {
    // Do nothing by default
  }

  // ----------------------------------------------------------------------
  // Protected parameter get functions
  // ----------------------------------------------------------------------

  U32 ThermalControlComponentBase ::
    paramGet_phase(Fw::ParamValid& valid)
  {
    U32 _local;
    this->m_paramLock.lock();
    valid = this->m_param_phase_valid;
    _local = this->m_phase;
    this->m_paramLock.unLock();
    return _local;
  }

  F32 ThermalControlComponentBase ::
    paramGet_temperature(Fw::ParamValid& valid)
  {
    F32 _local;
    this->m_paramLock.lock();
    valid = this->m_param_temperature_valid;
    _local = this->m_temperature;
    this->m_paramLock.unLock();
    return _local;
  }

  F32 ThermalControlComponentBase ::
    paramGet_minTemp(Fw::ParamValid& valid)
  {
    F32 _local;
    this->m_paramLock.lock();
    valid = this->m_param_minTemp_valid;
    _local = this->m_minTemp;
    this->m_paramLock.unLock();
    return _local;
  }

  F32 ThermalControlComponentBase ::
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

  Fw::ParamValid ThermalControlComponentBase ::
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

  Fw::CommandResponse ThermalControlComponentBase ::
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

  Fw::CommandResponse ThermalControlComponentBase ::
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

  Fw::CommandResponse ThermalControlComponentBase ::
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

  Fw::CommandResponse ThermalControlComponentBase ::
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

  Fw::CommandResponse ThermalControlComponentBase ::
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

  Fw::CommandResponse ThermalControlComponentBase ::
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

  Fw::CommandResponse ThermalControlComponentBase ::
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

  Fw::CommandResponse ThermalControlComponentBase ::
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
  // Calls for invocations received on typed input ports
  // ----------------------------------------------------------------------

  void ThermalControlComponentBase ::
    m_p_schedIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {
    FW_ASSERT(callComp);
    ThermalControlComponentBase* compPtr =
      (ThermalControlComponentBase*) callComp;
    compPtr->schedIn_handlerBase(portNum, context);
  }

  void ThermalControlComponentBase ::
    m_p_temperatureIn_in(
        Fw::PassiveComponentBase* callComp,
        NATIVE_INT_TYPE portNum,
        F32 temperature
    )
  {
    FW_ASSERT(callComp);
    ThermalControlComponentBase* compPtr =
      (ThermalControlComponentBase*) callComp;
    compPtr->temperatureIn_handlerBase(portNum, temperature);
  }

  // ----------------------------------------------------------------------
  // Port handler base-class functions for typed input ports
  // ----------------------------------------------------------------------

  void ThermalControlComponentBase ::
    schedIn_handlerBase(
        NATIVE_INT_TYPE portNum,
        NATIVE_UINT_TYPE context
    )
  {

    // Make sure port number is valid
    FW_ASSERT(portNum < this->getNum_schedIn_InputPorts(),static_cast<AssertArg>(portNum));

    // Down call to pure virtual handler method implemented in Impl class
    this->schedIn_handler(portNum, context);

  }

  void ThermalControlComponentBase ::
    temperatureIn_handlerBase(
        NATIVE_INT_TYPE portNum,
        F32 temperature
    )
  {

    // Make sure port number is valid
    FW_ASSERT(portNum < this->getNum_temperatureIn_InputPorts(),static_cast<AssertArg>(portNum));

    // Call pre-message hook
    temperatureIn_preMsgHook(
        portNum,
        temperature
    );

    ComponentIpcSerializableBuffer msg;
    Fw::SerializeStatus _status = Fw::FW_SERIALIZE_OK;

    _status = msg.serialize(
        static_cast<NATIVE_INT_TYPE>(TEMPERATUREIN_TEMPERATURE)
    );
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<AssertArg>(_status)
    );

    _status = msg.serialize(portNum);
    FW_ASSERT (
        _status == Fw::FW_SERIALIZE_OK,
        static_cast<AssertArg>(_status)
    );

    // Serialize argument temperature
    _status = msg.serialize(temperature);
    FW_ASSERT(
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

  // ----------------------------------------------------------------------
  // Pre-message hooks for async input ports
  // ----------------------------------------------------------------------

  void ThermalControlComponentBase ::
    temperatureIn_preMsgHook(
        NATIVE_INT_TYPE portNum,
        F32 temperature
    )
  {
    // Default: no-op
  }

  // ----------------------------------------------------------------------
  // Message dispatch method for active and queued components. Called
  // by active component thread or implementation code for queued components
  // ----------------------------------------------------------------------

  Fw::QueuedComponentBase::MsgDispatchStatus ThermalControlComponentBase ::
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

    if (msgType == THERMALCONTROL_COMPONENT_EXIT) {
      return MSG_DISPATCH_EXIT;
    }

    NATIVE_INT_TYPE portNum;
    deserStatus = msg.deserialize(portNum);
    FW_ASSERT(
        deserStatus == Fw::FW_SERIALIZE_OK,
        static_cast<AssertArg>(deserStatus)
    );

    switch (msgType) {

      // Handle async input port temperatureIn
      case TEMPERATUREIN_TEMPERATURE: {

        // Deserialize argument temperature
        F32 temperature;
        deserStatus = msg.deserialize(temperature);
        FW_ASSERT(
            deserStatus == Fw::FW_SERIALIZE_OK,
            static_cast<AssertArg>(deserStatus)
        );

        // Call handler function
        this->temperatureIn_handler(
            portNum,
            temperature
        );

        break;

      }

      default:
        return MSG_DISPATCH_ERROR;

    }

    return MSG_DISPATCH_OK;

  }

} // end namespace Ref
