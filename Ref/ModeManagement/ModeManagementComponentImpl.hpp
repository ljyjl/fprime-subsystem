// ======================================================================
// \title  ModeManagementComponentAc.hpp
// \author Auto-generated
// \brief  hpp file for ModeManagement component base class
//
// \copyright
// Copyright 2009-2015, by the California Institute of Technology.
// ALL RIGHTS RESERVED.  United States Government Sponsorship
// acknowledged.
//
// ======================================================================

#ifndef MODEMANAGEMENT_COMP_HPP_
#define MODEMANAGEMENT_COMP_HPP_

#include <FpConfig.hpp>
#include <Fw/Port/InputSerializePort.hpp>
#include <Fw/Port/OutputSerializePort.hpp>
#include <Fw/Comp/ActiveComponentBase.hpp>
#include <Os/Mutex.hpp>
#include <Fw/Cmd/CmdString.hpp>
#include <Fw/Tlm/TlmString.hpp>
//#include <Fw/Time/TimePortAc.hpp>
#include <Fw/Prm/PrmString.hpp>
#include <Fw/Log/LogString.hpp>
#include <Fw/Cmd/CmdArgBuffer.hpp>
#include <Fw/Prm/PrmBuffer.hpp>
#include <Fw/Tlm/TlmBuffer.hpp>
#include <Fw/Time/Time.hpp>
#include <Fw/Log/LogBuffer.hpp>
#include <Fw/Log/TextLogString.hpp>
#include <Fw/Cmd/CmdPortAc.hpp>
#include <Fw/Cmd/CmdResponsePortAc.hpp>
#include <Fw/Cmd/CmdRegPortAc.hpp>
#include <Fw/Prm/PrmGetPortAc.hpp>
#include <Fw/Prm/PrmSetPortAc.hpp>
#include <Fw/Tlm/TlmPortAc.hpp>
#include <Fw/Time/TimePortAc.hpp>
#include <Fw/Log/LogPortAc.hpp>
#if FW_ENABLE_TEXT_LOGGING == 1
#include <Fw/Log/LogTextPortAc.hpp>
#endif

namespace Ref {

  //! \class ModeManagementComponentBase
  //! \brief Auto-generated base for ModeManagement component
  //!
  class ModeManagementComponentBase :
    public Fw::ActiveComponentBase
  {

    // ----------------------------------------------------------------------
    // Friend classes
    // ----------------------------------------------------------------------

    //! Friend class for white-box testing
    //!
    friend class ModeManagementComponentBaseFriend;

  public:

    // ----------------------------------------------------------------------
    // Getters for typed input ports
    // ----------------------------------------------------------------------

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

    //! Connect port to Tlm[portNum]
    //!
    void set_Tlm_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputTlmPort *port /*!< The port*/
    );

    //! Connect port to Time[portNum]
    //!
    void set_Time_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputTimePort *port /*!< The port*/
    );

    //! Connect port to Log[portNum]
    //!
    void set_Log_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputLogPort *port /*!< The port*/
    );

#if FW_ENABLE_TEXT_LOGGING == 1
    //! Connect port to LogText[portNum]
    //!
    void set_LogText_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputLogTextPort *port /*!< The port*/
    );
#endif

#if FW_PORT_SERIALIZATION

  public:

    // ----------------------------------------------------------------------
    // Connect serialization input ports to typed output ports
    // ----------------------------------------------------------------------

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

    //! Connect port to Tlm[portNum]
    //!
    void set_Tlm_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to Time[portNum]
    //!
    void set_Time_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

    //! Connect port to Log[portNum]
    //!
    void set_Log_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );

#if FW_ENABLE_TEXT_LOGGING == 1
    //! Connect port to LogText[portNum]
    //!
    void set_LogText_OutputPort(
        NATIVE_INT_TYPE portNum, /*!< The port number*/
        Fw::InputSerializePort *port /*!< The port*/
    );
#endif

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

    //! Construct a ModeManagementComponentBase object
    //!
    ModeManagementComponentBase(
        const char* compName = "" /*!< Component name*/
    );

    //! Initialize a ModeManagementComponentBase object
    //!
    void init(
        NATIVE_INT_TYPE queueDepth, /*!< The queue depth*/
        NATIVE_INT_TYPE instance = 0 /*!< The instance number*/
    );

    //! Destroy a ModeManagementComponentBase object
    //!
    virtual ~ModeManagementComponentBase(void);

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of input ports
    // ----------------------------------------------------------------------

    //! Get the number of CmdDisp input ports
    //!
    //! \return The number of CmdDisp input ports
    //!
    NATIVE_INT_TYPE getNum_CmdDisp_InputPorts(void);


    // ----------------------------------------------------------------------
    // Enumerations for number of ports
    // ----------------------------------------------------------------------

    enum {
       NUM_CMDDISP_INPUT_PORTS = 1,
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Getters for numbers of output ports
    // ----------------------------------------------------------------------

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

    //! Get the number of Tlm output ports
    //!
    //! \return The number of Tlm output ports
    //!
    NATIVE_INT_TYPE getNum_Tlm_OutputPorts(void);

    //! Get the number of Time output ports
    //!
    //! \return The number of Time output ports
    //!
    NATIVE_INT_TYPE getNum_Time_OutputPorts(void);

    //! Get the number of Log output ports
    //!
    //! \return The number of Log output ports
    //!
    NATIVE_INT_TYPE getNum_Log_OutputPorts(void);

#if FW_ENABLE_TEXT_LOGGING == 1
    //! Get the number of LogText output ports
    //!
    //! \return The number of LogText output ports
    //!
    NATIVE_INT_TYPE getNum_LogText_OutputPorts(void);
#endif


    enum {
       NUM_CMDSTATUS_OUTPUT_PORTS = 1,
       NUM_CMDREG_OUTPUT_PORTS = 1,
       NUM_PARAMGET_OUTPUT_PORTS = 1,
       NUM_PARAMSET_OUTPUT_PORTS = 1,
       NUM_TLM_OUTPUT_PORTS = 1,
       NUM_TIME_OUTPUT_PORTS = 1,
       NUM_LOG_OUTPUT_PORTS = 1,
       NUM_LOGTEXT_OUTPUT_PORTS = 1,
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Connection status queries for output ports
    // ----------------------------------------------------------------------

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

    //! Check whether port Tlm is connected
    //!
    //! \return Whether port Tlm is connected
    //!
    bool isConnected_Tlm_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port Time is connected
    //!
    //! \return Whether port Time is connected
    //!
    bool isConnected_Time_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

    //! Check whether port Log is connected
    //!
    //! \return Whether port Log is connected
    //!
    bool isConnected_Log_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );

#if FW_ENABLE_TEXT_LOGGING == 1
    //! Check whether port LogText is connected
    //!
    //! \return Whether port LogText is connected
    //!
    bool isConnected_LogText_OutputPort(
        NATIVE_INT_TYPE portNum /*!< The port number*/
    );
#endif

  PROTECTED:

    // ----------------------------------------------------------------------
    // Command opcodes
    // ----------------------------------------------------------------------

    enum {
      OPCODE_MM_UPDATE_PHASE = 0, /*  */
      OPCODE_PHASE_SET = 8, //!< opcode to set parameter phase
      OPCODE_PHASE_SAVE = 9, //!< opcode to save parameter phase
      OPCODE_TEMPERATURE_SET = 10, //!< opcode to set parameter temperature
      OPCODE_TEMPERATURE_SAVE = 11, //!< opcode to save parameter temperature
      OPCODE_MINTEMP_SET = 12, //!< opcode to set parameter minTemp
      OPCODE_MINTEMP_SAVE = 13, //!< opcode to save parameter minTemp
      OPCODE_MAXTEMP_SET = 14, //!< opcode to set parameter maxTemp
      OPCODE_MAXTEMP_SAVE = 15, //!< opcode to save parameter maxTemp
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Command handlers to implement
    // ----------------------------------------------------------------------

    //! Handler for command MM_UPDATE_PHASE
    /*  */
    virtual void MM_UPDATE_PHASE_cmdHandler(
        FwOpcodeType opCode, /*!< The opcode*/
        U32 cmdSeq, /*!< The command sequence number*/
        U32 phase 
    ) = 0;

  PROTECTED:

    // ----------------------------------------------------------------------
    // Pre-message hooks for async commands.
    // ----------------------------------------------------------------------
    // Each of these functions is invoked just before processing the
    // corresponding command. By default they do nothing. You can
    // override them to provide specific pre-command behavior.
    // ----------------------------------------------------------------------

    //! Pre-message hook for command MM_UPDATE_PHASE
    //!
    virtual void MM_UPDATE_PHASE_preMsgHook(
        FwOpcodeType opCode, /*!< The opcode*/
        U32 cmdSeq /*!< The command sequence number*/
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Command handler base-class functions.
    // Call these functions directly to bypass the command input port.
    // ----------------------------------------------------------------------

    //! Base-class handler function for command MM_UPDATE_PHASE
    //!
    void MM_UPDATE_PHASE_cmdHandlerBase(
        FwOpcodeType opCode, /*!< The opcode*/
        U32 cmdSeq, /*!< The command sequence number*/
        Fw::CmdArgBuffer &args /*!< The command argument buffer*/
    );

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
    // Event IDs
    // ----------------------------------------------------------------------

    enum {
      EVENTID_MM_PHASE_UPDATED = 0, /*  */
      EVENTID_MM_SAFETY_MODE_ENTERED = 1, /*  */
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Event logging functions
    // ----------------------------------------------------------------------

    //! Log event MM_PHASE_UPDATED
    //!
    void log_ACTIVITY_HI_MM_PHASE_UPDATED(
        U32 phase 
    );


    //! Log event MM_SAFETY_MODE_ENTERED
    //!
    void log_WARNING_HI_MM_SAFETY_MODE_ENTERED(
        U32 phase 
    );


  PROTECTED:

    // ----------------------------------------------------------------------
    // Channel IDs
    // ----------------------------------------------------------------------

    enum {
      CHANNELID_MM_PHASE = 0, //!< Channel ID for MM_PHASE
    };

  PROTECTED:

    // ----------------------------------------------------------------------
    // Telemetry write functions
    // ----------------------------------------------------------------------

    //! Write telemetry channel MM_PHASE
    //!
    void tlmWrite_MM_PHASE(
        U32 arg /*!< The telemetry value*/
    );

  PROTECTED:

    // ----------------------------------------------------------------------
    // Time
    // ----------------------------------------------------------------------

    //! Get the time
    //!
    //! \return The current time
    //!
    Fw::Time getTime(void);

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
    /* phase by MM */
    //! \return The parameter value
    //!
    U32 paramGet_phase(
        Fw::ParamValid& valid /*!< Whether the parameter is valid*/
    );

    //! Get parameter temperature
    //!
    /* Termometer value by MM */
    //! \return The parameter value
    //!
    F32 paramGet_temperature(
        Fw::ParamValid& valid /*!< Whether the parameter is valid*/
    );

    //! Get parameter minTemp
    //!
    /* Threshold min value by MM */
    //! \return The parameter value
    //!
    F32 paramGet_minTemp(
        Fw::ParamValid& valid /*!< Whether the parameter is valid*/
    );

    //! Get parameter maxTemp
    //!
    /* Threshold max value by MM */
    //! \return The parameter value
    //!
    F32 paramGet_maxTemp(
        Fw::ParamValid& valid /*!< Whether the parameter is valid*/
    );



  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed input ports
    // ----------------------------------------------------------------------

    //! Input port CmdDisp
    //!
    Fw::InputCmdPort m_CmdDisp_InputPort[NUM_CMDDISP_INPUT_PORTS];

  PRIVATE:

    // ----------------------------------------------------------------------
    // Typed output ports
    // ----------------------------------------------------------------------

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

    //! Output port Tlm
    //!
    Fw::OutputTlmPort m_Tlm_OutputPort[NUM_TLM_OUTPUT_PORTS];

    //! Output port Time
    //!
    Fw::OutputTimePort m_Time_OutputPort[NUM_TIME_OUTPUT_PORTS];

    //! Output port Log
    //!
    Fw::OutputLogPort m_Log_OutputPort[NUM_LOG_OUTPUT_PORTS];

#if FW_ENABLE_TEXT_LOGGING == 1
    //! Output port LogText
    //!
    Fw::OutputLogTextPort m_LogText_OutputPort[NUM_LOGTEXT_OUTPUT_PORTS];
#endif

  PRIVATE:

    // ----------------------------------------------------------------------
    // Calls for messages received on typed input ports
    // ----------------------------------------------------------------------

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
    /*! phase by MM*/
    U32 m_phase;

    //! Parameter temperature
    //!
    /*! Termometer value by MM*/
    F32 m_temperature;

    //! Parameter minTemp
    //!
    /*! Threshold min value by MM*/
    F32 m_minTemp;

    //! Parameter maxTemp
    //!
    /*! Threshold max value by MM*/
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


  PRIVATE:
    // ----------------------------------------------------------------------
    // Counter values for event throttling
    // ----------------------------------------------------------------------

  };

} // end namespace Ref
#endif
