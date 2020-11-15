<title>SignalGen Component Dictionary</title>
# SignalGen Component Dictionary


## Command List

|Mnemonic|ID|Description|Arg Name|Arg Type|Comment
|---|---|---|---|---|---|
|SignalGen_Settings|0 (0x0)|Signal Generator Settings| | |
| | | |Frequency|U32||
| | | |Amplitude|F32||
| | | |Phase|F32||
| | | |SigType|Ref::SignalType||
|SignalGen_Toggle|1 (0x1)|Toggle Signal Generator On/Off.| | |
|SignalGen_Skip|2 (0x2)|Skip next sample| | |

## Telemetry Channel List

|Channel Name|ID|Type|Description|
|---|---|---|---|
|Type|0 (0x0)|Ref::SignalType|Type of the output signal: SINE, TRIANGLE, etc.|
|Output|1 (0x1)|F32|Single Y value of the output|
|PairOutput|2 (0x2)|Ref::SignalPair|Single (time, value) pair of the signal|
|History|3 (0x3)|Ref::SignalSet|Last 10 Y values of the signal|
|PairHistory|4 (0x4)|Ref::SignalPairSet|Last 10 (time, value) pairs of the signal|
|Info|5 (0x5)|Ref::SignalInfo|Composite field of signal information, containing histories, pairs etc|

## Event List

|Event Name|ID|Description|Arg Name|Arg Type|Arg Size|Description
|---|---|---|---|---|---|---|
|SignalGen_SettingsChanged|0 (0x0)|Signal Generator Settings Changed| | | | |
| | | |Frequency|U32|||
| | | |Amplitude|F32|||
| | | |Phase|F32|||
| | | |SignalType|Ref::SignalType|||
