#ifndef VEHICLE_REGISTRATION_NUMBERS_H
#define VEHICLE_REGISTRATION_NUMBERS_H

#define REGISTRATION_COUNT 20
#define REGISTRATION_LENGTH 20

int searchRegistration(const char registrations[][REGISTRATION_LENGTH],
                       int count, const char target[]);
void runRegistrationSearch(void);

#endif
