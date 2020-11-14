<title>Thermometer Component Dictionary</title>
# Thermometer Component Dictionary


## Command List

|Mnemonic|ID|Description|Arg Name|Arg Type|Comment
|---|---|---|---|---|---|
|THERMO_SET_TEMP|0 (0x0)|| | |
| | | |temperature|F32||

## Telemetry Channel List

|Channel Name|ID|Type|Description|
|---|---|---|---|
|THERMO_TEMP|0 (0x0)|F32|The temperature of the termometer|

## Event List

|Event Name|ID|Description|Arg Name|Arg Type|Arg Size|Description
|---|---|---|---|---|---|---|
|TERMO_TEMP_UPDATED|0 (0x0)|| | | | |
| | | |temperature|F32|||
|TERMO_TEMP_REQ_RECEIVED|1 (0x1)|| | | | |
| | | |request|F32|||
