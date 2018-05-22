/*
 * Copyright (C) 2014-2018 ShaleCoding IRC Network Development Team
 * Copyright (C) 2005 William Pitcock, et al.
 * Rights to this code are as documented in doc/LICENSE.
 *
 * This code contains the channel mode definitions for sIRCd ircd.
 * Adapted from charybdis.h.
 */

#ifndef RATBOX_H
#define RATBOX_H


/* Extended channel modes will eventually go here. */
#define CMODE_NOCOLOR       0x00001000	    /* sIRCd +c */
#define CMODE_REGONLY       0x00002000	    /* sIRCd +r */
#define CMODE_OPMOD         0x00004000	    /* sIRCd +z */
#define CMODE_FINVITE       0x00008000	    /* sIRCd +g */
#define CMODE_EXLIMIT       0x00010000      /* sIRCd +L */
#define CMODE_PERM          0x00020000      /* sIRCd +P */
#define CMODE_FTARGET       0x00040000      /* sIRCd +F */
#define CMODE_DISFWD        0x00080000      /* sIRCd +Q */
#define CMODE_NOCTCP        0x00100000      /* sIRCd +C */
#define CMODE_IMMUNE        0x04000000      /* sIRCd +M */
#define CMODE_NOREPEAT      0x40000000      /* sIRCd +K */
#define CMODE_KICKNOREJOIN  0x80000000      /* sIRCd +J */
#define CMODE_NOKICKS       0x10000000      /* sIRCd +E */
#define CMODE_NONICKS       0x20000000      /* sIRCd +N */
#define CMODE_NOCAPS        0x08000000      /* sIRCd +G */
#define CMODE_NOACTIONS     0x02000000      /* sIRCd +D */
#define CMODE_NETADMINONLY  0x00200000	    /* sIRCd +N */
#define CMODE_SSLONLY       0x00400000	    /* sIRCd +S */
#define CMODE_OPERONLY      0x00800000	    /* sIRCd +O */
#define CMODE_ADMINONLY     0x01000000	    /* sIRCd +A */
#define CMODE_NONOTICE      0x04000000      /* Cmode +T */

#endif
