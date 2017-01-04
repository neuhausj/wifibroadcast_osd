#include "osdconfig.h"

#ifdef ALTIMU10v5
#include "telemetry.h"

void altimu10v5_read(telemetry_data_t *td, uint8_t *buf, int buflen);
#endif
