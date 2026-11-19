#ifndef STATUS_MANAGER_H
#define STATUS_MANAGER_H

typedef enum
{
    STATUS_BOOTING,
    STATUS_READY,
    STATUS_WARNING,
    STATUS_FAULT,
    STATUS_OFF
} status_t;

void status_set(status_t status);
status_t status_get(void);

#endif