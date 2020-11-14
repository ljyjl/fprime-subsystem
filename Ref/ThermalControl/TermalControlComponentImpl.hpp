// ======================================================================
// \title  ThermalControlComponentAc.hpp
// \author Auto-generated
// \brief  hpp file for ThermalControl component base class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================

#ifndef THERMALCONTROL_COMP_HPP_
#define THERMALCONTROL_COMP_HPP_

#include <FpConfig.hpp>
#include <Fw/Port/InputSerializePort.hpp>
#include <Fw/Port/OutputSerializePort.hpp>
#include <Fw/Comp/ActiveComponentBase.hpp>
#include <Os/Mutex.hpp>
#include <Fw/Cmd/CmdString.hpp>
#include <Fw/Prm/PrmString.hpp>
#include <Fw/Cmd/CmdArgBuffer.hpp>
#include <Fw/Prm/PrmBuffer.hpp>
#include <Svc/Sched/SchedPortAc.hpp>
#include <Ref/SubPorts/TemperaturePortAc.hpp>
#include <Ref/SubPorts/TemperatureReqPortAc.hpp>
#include <Fw/Cmd/CmdPortAc.hpp>
#include <Fw/Cmd/CmdResponsePortAc.hpp>
#include <Fw/Cmd/CmdRegPortAc.hpp>
#include <Fw/Prm/PrmGetPortAc.hpp>
#include <Fw/Prm/PrmSetPortAc.hpp>

namespace Ref {

  //! \class ThermalControlComponentBase
  //! \brief Auto-generated base for ThermalControl component
  //!
  class ThermalControlComponentBase :
    public Fw::ActiveComponentBase
  {

    // ----------------------------------------------------------------------
    // Friend classes
    // ----------------------------------------------------------------------

    //! Friend class for white-box testing
    //!
    friend class ThermalControlComponentBaseFriend;

  public:

    // ----------------------------------------------------------------------
    // Getters for typed input ports
    // ----------------------------------------------------------------------

    //! Get input port at index
    //!
    //! \return schedIn[portNum]
    //!
    Svc::InputSchedPort* get_schedIn_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Get input port at index
    //!
    //! \return temperatureIn[portNum]
    //!
    Ref::InputTemperaturePort* get_temperatureIn_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Get input port at index
    //!
    //! \return CmdDisp[portNum]
    //!
    Fw::InputCmdPort* get_CmdDisp_InputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

  public:

    // ----------------------------------------------------------------------
    // Connect typed input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to temperatureReqOut[portNum]
    //!
    void set_temperatureReqOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Ref::InputTemperatureReqPort *port /*!< The port*/
    );

    //! Connect port to CmdStatus[portNum]
    //!
    void set_CmdStatus_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputCmdResponsePort *port /*!< The port*/
    );

    //! Connect port to CmdReg[portNum]
    //!
    void set_CmdReg_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputCmdRegPort *port /*!< The port*/
    );

    //! Connect port to ParamGet[portNum]
    //!
    void set_ParamGet_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputPrmGetPort *port /*!< The port*/
    );

    //! Connect port to ParamSet[portNum]
    //!
    void set_ParamSet_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputPrmSetPort *port /*!< The port*/
    );

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serialization input ports to typed output ports
    // ----------------------------------------------------------------------

    //! Connect port to temperatureReqOut[portNum]
    //!
    void set_temperatureReqOut_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to CmdStatus[portNum]
    //!
    void set_CmdStatus_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to CmdReg[portNum]
    //!
    void set_CmdReg_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to ParamGet[portNum]
    //!
    void set_ParamGet_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to ParamSet[portNum]
    //!
    void set_ParamSet_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

#endif

  public:

    // ----------------------------------------------------------------------
    // Command registration
    // ----------------------------------------------------------------------

    //! \brief Register commands with the Command Dispatcher
    //!
    //! Connect the dispatcher first
    //!
    void regCommands(void);

  public:

    // ----------------------------------------------------------------------
    // Parameter loading
    // ----------------------------------------------------------------------

    //! \brief Load the parameters from a parameter source
    //!
    //! Connect the parameter first
    //!
    void loadParameters(void);

  PROTECTED:

    // ----------------------------------------------------------------------
    // Component construction, initialization, and destruction
    // ----------------------------------------------------------------------

    //! Construct a ThermalControlComponentBase object
    //!
    ThermalControlComponentBase(
        const char* compName = "" /*!< Component name*/
    );

    //! Initialize a ThermalControlComponentBase object
    //!
    void init(
        NATIVE_INT_TYPE queueDepth, /*!< The queue depth*/
        NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
    );

    //! Destroy a ThermalControlComponentBase object
    //!
    virtual ~ThermalControlComponentBase(void);

  PROTECTED:

    // ----------------------------------------------------------------------
    // Handlers to implement for typed input ports
    // ----------------------------------------------------------------------

    //! Handler for input port schedIn
    //
    virtual void schedIn_handler(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        NATIVE_UINT_TYPE context /*!< The call order*/
    ) = 0;

    //! Handler for input port temperatureIn
    //
    virtual void temperatureIn_handler(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 temperature 
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Port handler base-class functions for typed input ports.
    // ----------------------------------------------------------------------
    // Call these functions directly to bypass the corresponding ports.
    // ----------------------------------------------------------------------

    //! Handler base-class function for input port schedIn
    //!
    void schedIn_handlerBase(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        NATIVE_UINT_TYPE context /*!< The call order*/
    );

    //! Handler base-class function for input port temperatureIn
    //!
    void temperatureIn_handlerBase(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 temperature 
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Pre-message hooks for typed async input ports.
    // ----------------------------------------------------------------------
    // Each of these functions is invoked just before processing a message
    // on the corresponding port. By default they do nothing. You can
    // override them to provide specific pre-message behavior.
    // ----------------------------------------------------------------------

    //! Pre-message hook for async input port temperatureIn
    //!
    virtual void temperatureIn_preMsgHook(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 temperature 
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Invocation functions for typed output ports
    // ----------------------------------------------------------------------

    //! Invoke output port temperatureReqOut
    //!
    void temperatureReqOut_out(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 requestTempteratue 
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of input ports
    // ----------------------------------------------------------------------

    //! Get the number of schedIn input ports
    //!
    //! \return The number of schedIn input ports
    //!
    NATIVE_INT_TYPE getNum_schedIn_InputPorts(void);

    //! Get the number of temperatureIn input ports
    //!
    //! \return The number of temperatureIn input ports
    //!
    NATIVE_INT_TYPE getNum_temperatureIn_InputPorts(void);

    //! Get the number of CmdDisp input ports
    //!
    //! \return The number of CmdDisp input ports
    //!
    NATIVE_INT_TYPE getNum_CmdDisp_InputPorts(void);


    // ----------------------------------------------------------------------
    // Enumerations for number of ports
    // ----------------------------------------------------------------------

    enum {
       NUM_SCHEDIN_INPUT_PORTS = 1,
       NUM_TEMPERATUREIN_INPUT_PORTS = 1,
       NUM_CMDDISP_INPUT_PORTS = 1,
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of output ports
    // ----------------------------------------------------------------------

    //! Get the number of temperatureReqOut output ports
    //!
    //! \return The number of temperatureReqOut output ports
    //!
    NATIVE_INT_TYPE getNum_temperatureReqOut_OutputPorts(void);

    //! Get the number of CmdStatus output ports
    //!
    //! \return The number of CmdStatus output ports
    //!
    NATIVE_INT_TYPE getNum_CmdStatus_OutputPorts(void);

    //! Get the number of CmdReg output ports
    //!
    //! \return The number of CmdReg output ports
    //!
    NATIVE_INT_TYPE getNum_CmdReg_OutputPorts(void);

    //! Get the number of ParamGet output ports
    //!
    //! \return The number of ParamGet output ports
    //!
    NATIVE_INT_TYPE getNum_ParamGet_OutputPorts(void);

    //! Get the number of ParamSet output ports
    //!
    //! \return The number of ParamSet output ports
    //!
    NATIVE_INT_TYPE getNum_ParamSet_OutputPorts(void);


    enum {
       NUM_TEMPERATUREREQOUT_OUTPUT_PORTS = 1,
       NUM_CMDSTATUS_OUTPUT_PORTS = 1,
       NUM_CMDREG_OUTPUT_PORTS = 1,
       NUM_PARAMGET_OUTPUT_PORTS = 1,
       NUM_PARAMSET_OUTPUT_PORTS = 1,
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for output ports
    // ----------------------------------------------------------------------

    //! Check whether port temperatureReqOut is connected
    //!
    //! \return Whether port temperatureReqOut is connected
    //!
    bool isConnected_temperatureReqOut_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port CmdStatus is connected
    //!
    //! \return Whether port CmdStatus is connected
    //!
    bool isConnected_CmdStatus_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port CmdReg is connected
    //!
    //! \return Whether port CmdReg is connected
    //!
    bool isConnected_CmdReg_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port ParamGet is connected
    //!
    //! \return Whether port ParamGet is connected
    //!
    bool isConnected_ParamGet_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port ParamSet is connected
    //!
    //! \return Whether port ParamSet is connected
    //!
    bool isConnected_ParamSet_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Command opcodes
    // ----------------------------------------------------------------------

    enum {
      OPCODE_PHASE_SET = 0, //!< opcode to set parameter phase
      OPCODE_PHASE_SAVE = 1, //!< opcode to save parameter phase
      OPCODE_TEMPERATURE_SET = 2, //!< opcode to set parameter temperature
      OPCODE_TEMPERATURE_SAVE = 3, //!< opcode to save parameter temperature
      OPCODE_MINTEMP_SET = 4, //!< opcode to set parameter minTemp
      OPCODE_MINTEMP_SAVE = 5, //!< opcode to save parameter minTemp
      OPCODE_MAXTEMP_SET = 6, //!< opcode to set parameter maxTemp
      OPCODE_MAXTEMP_SAVE = 7, //!< opcode to save parameter maxTemp
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Command response
    // ----------------------------------------------------------------------

    //! Emit command response
    //!
    void cmdResponse_out(
        FwOpcodeType opCode, /*!< The opcode*/
        U32 cmdSeq, /*!< The command sequence number*/
        Fw::CommandResponse response /*!< The command response*/
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Event logging functions
    // ----------------------------------------------------------------------

  PROTECTED:

    // ----------------------------------------------------------------------
    // Parameter IDs
    // ----------------------------------------------------------------------

    enum {
      PARAMID_PHASE = 0,
      PARAMID_TEMPERATURE = 1,
      PARAMID_MINTEMP = 2,
      PARAMID_MAXTEMP = 3,
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Parameter update hook
    // ----------------------------------------------------------------------

    //! \brief Called whenever a parameter is updated
    //!
    //! This function does nothing by default. You may override it.
    //!
    virtual void parameterUpdated(
        FwPrmIdType id /*!< The parameter ID*/
    );

    // ----------------------------------------------------------------------
    // Parameter load hook
    // ----------------------------------------------------------------------

    //! \brief Called whenever a parameters are loaded
    //!
    //! This function does nothing by default. You may override it.
    //!
    virtual void parametersLoaded();

  PROTECTED:

    // ----------------------------------------------------------------------
    // Parameter get functions
    // ----------------------------------------------------------------------

    //! Get parameter phase
    //!
    /* phase by TC */
    //! \return The parameter value
    //!
    U32 paramGet_phase(
        Fw::ParamValid& valid /*!< Whether the parameter is valid*/
    );

    //! Get parameter temperature
    //!
    /* Termometer value by TC */
    //! \return The parameter value
    //!
    F32 paramGet_temperature(
        Fw::ParamValid& valid /*!< Whether the parameter is valid*/
    );

    //! Get parameter minTemp
    //!
    /* Threshold min value by TC */
    //! \return The parameter value
    //!
    F32 paramGet_minTemp(
        Fw::ParamValid& valid /*!< Whether the parameter is valid*/
    );

    //! Get parameter maxTemp
    //!
    /* Threshold max value  by TC */
    //! \return The parameter value
    //!
    F32 paramGet_maxTemp(
        Fw::ParamValid& valid /*!< Whether the parameter is valid*/
    );



  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed input ports
    // ----------------------------------------------------------------------

    //! Input port schedIn
    //!
    Svc::InputSchedPort m_schedIn_InputPort[NUM_SCHEDIN_INPUT_PORTS];

    //! Input port temperatureIn
    //!
    Ref::InputTemperaturePort m_temperatureIn_InputPort[NUM_TEMPERATUREIN_INPUT_PORTS];

    //! Input port CmdDisp
    //!
    Fw::InputCmdPort m_CmdDisp_InputPort[NUM_CMDDISP_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed output ports
    // ----------------------------------------------------------------------

    //! Output port temperatureReqOut
    //!
    Ref::OutputTemperatureReqPort m_temperatureReqOut_OutputPort[NUM_TEMPERATUREREQOUT_OUTPUT_PORTS];

    //! Output port CmdStatus
    //!
    Fw::OutputCmdResponsePort m_CmdStatus_OutputPort[NUM_CMDSTATUS_OUTPUT_PORTS];

    //! Output port CmdReg
    //!
    Fw::OutputCmdRegPort m_CmdReg_OutputPort[NUM_CMDREG_OUTPUT_PORTS];

    //! Output port ParamGet
    //!
    Fw::OutputPrmGetPort m_ParamGet_OutputPort[NUM_PARAMGET_OUTPUT_PORTS];

    //! Output port ParamSet
    //!
    Fw::OutputPrmSetPort m_ParamSet_OutputPort[NUM_PARAMSET_OUTPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on typed input ports
    // ----------------------------------------------------------------------

    //! Callback for port schedIn
    //!
    static void m_p_schedIn_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        NATIVE_UINT_TYPE context /*!< The call order*/
    );

    //! Callback for port temperatureIn
    //!
    static void m_p_temperatureIn_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        F32 temperature 
    );

    //! Callback for port CmdDisp
    //!
    static void m_p_CmdDisp_in(
        Fw::PassiveComponentBase* callComp, /*!< The component instance*/
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        FwOpcodeType opCode, /*!< Command Op Code*/
        U32 cmdSeq, /*!< Command Sequence*/
        Fw::CmdArgBuffer &args /*!< Buffer containing arguments*/
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Message dispatch functions
    // ----------------------------------------------------------------------

    //! Called in the message loop to dispatch a message from the queue
    //!
    virtual MsgDispatchStatus doDispatch(void);

  PRIVATE:

    // ----------------------------------------------------------------------
    // Mutexes
    // ----------------------------------------------------------------------

    //! Mutex for locking parameters during sets and saves
    //!
    Os::Mutex m_paramLock;

  PRIVATE:

    // ----------------------------------------------------------------------
    // Parameter validity flags
    // ----------------------------------------------------------------------

    //! True if parameter phase was successfully received
    //!
    Fw::ParamValid m_param_phase_valid;

    //! True if parameter temperature was successfully received
    //!
    Fw::ParamValid m_param_temperature_valid;

    //! True if parameter minTemp was successfully received
    //!
    Fw::ParamValid m_param_minTemp_valid;

    //! True if parameter maxTemp was successfully received
    //!
    Fw::ParamValid m_param_maxTemp_valid;

  PRIVATE:

    // ----------------------------------------------------------------------
    // Parameter variables
    // ----------------------------------------------------------------------

    //! Parameter phase
    //!
    /*! phase by TC*/
    U32 m_phase;

    //! Parameter temperature
    //!
    /*! Termometer value by TC*/
    F32 m_temperature;

    //! Parameter minTemp
    //!
    /*! Threshold min value by TC*/
    F32 m_minTemp;

    //! Parameter maxTemp
    //!
    /*! Threshold max value  by TC*/
    F32 m_maxTemp;

  PRIVATE:

    // ----------------------------------------------------------------------
    // Private parameter get function
    // ----------------------------------------------------------------------

    //! Get a parameter by ID
    //!
    //! \return Whether the parameter is valid
    //!
    Fw::ParamValid getParam(
        FwPrmIdType id, /*!< The ID*/
        Fw::ParamBuffer& buff /*!< The paramter value*/
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Parameter set functions
    // ----------------------------------------------------------------------

    //! Set parameter phase
    //!
    //! \return The command response
    //!
    Fw::CommandResponse paramSet_phase(
        Fw::SerializeBufferBase &val /*!< The serialization buffer*/
    );

    //! Set parameter temperature
    //!
    //! \return The command response
    //!
    Fw::CommandResponse paramSet_temperature(
        Fw::SerializeBufferBase &val /*!< The serialization buffer*/
    );

    //! Set parameter minTemp
    //!
    //! \return The command response
    //!
    Fw::CommandResponse paramSet_minTemp(
        Fw::SerializeBufferBase &val /*!< The serialization buffer*/
    );

    //! Set parameter maxTemp
    //!
    //! \return The command response
    //!
    Fw::CommandResponse paramSet_maxTemp(
        Fw::SerializeBufferBase &val /*!< The serialization buffer*/
    );

  PRIVATE:

    // ----------------------------------------------------------------------
    // Parameter save functions
    // ----------------------------------------------------------------------

    //! Save parameter phase
    //!
    //! \return The command response
    //!
    Fw::CommandResponse paramSave_phase(void);

    //! Save parameter temperature
    //!
    //! \return The command response
    //!
    Fw::CommandResponse paramSave_temperature(void);

    //! Save parameter minTemp
    //!
    //! \return The command response
    //!
    Fw::CommandResponse paramSave_minTemp(void);

    //! Save parameter maxTemp
    //!
    //! \return The command response
    //!
    Fw::CommandResponse paramSave_maxTemp(void);



  };

} // end namespace Ref
#endif
