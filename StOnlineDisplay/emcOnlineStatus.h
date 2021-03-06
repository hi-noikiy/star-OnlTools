/* emcOnlineStatus.h */

// This table contains the complete BEMC tower configuration
// Generated by the online BEMC trigger monitoring program on 
// emc01.starp.bnl.gov:bemcStatus.txt

#ifndef EMCONLINESTATUS_H
#define EMCONLINESTATUS_H

typedef struct emcOnlineStatus_st {
   int SoftId; 
   int Crate;         /* Crate */
   int CrateSeq;      /* Crate seq */
   
   int TowerMask;     /* Tower unmasked? */     
   int PatchMaskHT;   /* Patch unmasked in HT? */
   int PatchMaskSum;  /* Patch unmasked in sum? */
   int TriggerPatch;  /* TriggerPatch */
   float Pedestal;              /* Pedestal */
} EMCONLINESTATUS_ST;

#endif /* EMCSTATUS_H */
