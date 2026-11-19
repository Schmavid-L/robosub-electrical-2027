#include "status_manager.h"

static status_t current_status = STATUS_BOOTING;

void status_set(status_t status)
{
    current_status = status;
}

status_t status_get(void)
{
    return current_status;
}