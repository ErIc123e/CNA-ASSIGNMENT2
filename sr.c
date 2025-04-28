#include "sr.h"

/* Sender */
void A_init(void) { }
void A_output(struct msg m) { }
void A_input(struct pkt p) { }
void A_timerinterrupt(void) { }

/* Receiver */
void B_init(void) { }
void B_input(struct pkt p) { }
void B_output(struct msg m) { /* no-op */ }
void B_timerinterrupt(void) { /* no-op */ }