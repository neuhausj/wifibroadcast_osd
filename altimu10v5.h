#include "osdconfig.h"

#ifdef ALTIMU10V5
#include "telemetry.h"


typedef struct {
        float heading;
        float altitude;
        float roll;
        float pitch;
}dataExchange;


void altimu10v5_init();
void altimu10v5_read(telemetry_data_t *td, uint8_t *buf, int buflen);
#endif
