<title>HealthMonitor Component Dictionary</title>
# HealthMonitor Component Dictionary


## Command List

|Mnemonic|ID|Description|Arg Name|Arg Type|Comment
|---|---|---|---|---|---|
|HM_UPDATE_TEMP_THRESHOLD|0 (0x0)|| | |
| | | |phase|U32||
| | | |minTemp|F32||
| | | |maxTemp|F32||

## Telemetry Channel List

|Channel Name|ID|Type|Description|
|---|---|---|---|
|HM_PHASE|0 (0x0)|U32||
|HM_MIN_TEMP|0 (0x0)|F32||
|HM_MAX_TEMP|0 (0x0)|F32||

## Event List

|Event Name|ID|Description|Arg Name|Arg Type|Arg Size|Description
|---|---|---|---|---|---|---|
|HM_TEMP_THRESHOLD_UPDATED|0 (0x0)|| | | | |
| | | |phase|U32|||
| | | |minTemp|F32|||
| | | |maxTemp|F32|||
|HM_TEMP_LO_FATAL|1 (0x1)|| | | | |
| | | |temperature|F32|||
|HM_TEMP_HI_FATAL|2 (0x2)|| | | | |
| | | |temperature|F32|||
