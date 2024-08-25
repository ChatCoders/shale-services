/*
 * Copyright (C) 2014-2018 ChatCoders IRC Network Development Team
 * Copyright (C) 2005 William Pitcock, et al.
 * Rights to this code are as documented in doc/LICENSE.
 *
 * This code contains the channel mode definitions for FireIRCd Adapted from charybdis.h.
 */

#ifndef RATBOX_H
#define RATBOX_H


/* Extended channel modes will eventually go here. */
#define CMODE_NOCOLOR       0x00001000	    /* FireIRCd +c */
#define CMODE_REGONLY       0x00002000	    /* FireIRCd +r */
#define CMODE_OPMOD         0x00004000	    /* FireIRCd +z */
#define CMODE_FINVITE       0x00008000	    /* FireIRCd +g */
#define CMODE_EXLIMIT       0x00010000      /* FireIRCd +L */
#define CMODE_PERM          0x00020000      /* FireIRCd +P */
#define CMODE_FTARGET       0x00040000      /* FireIRCd +F */
#define CMODE_DISFWD        0x00080000      /* FireIRCd +Q */
#define CMODE_NOCTCP        0x00100000      /* FireIRCd +C */
#define CMODE_IMMUNE        0x04000000      /* FireIRCd +M */
#define CMODE_NOREPEAT      0x40000000      /* FireIRCd +K */
#define CMODE_KICKNOREJOIN  0x80000000      /* FireIRCd +J */
#define CMODE_NOKICKS       0x10000000      /* FireIRCd +E */
#define CMODE_NONICKS       0x20000000      /* FireIRCd +N */
#define CMODE_NOCAPS        0x08000000      /* FireIRCd +G */
#define CMODE_NOACTIONS     0x02000000      /* FireIRCd +D */
#define CMODE_NETADMINONLY  0x00200000	    /* FireIRCd +N */
#define CMODE_SSLONLY       0x00400000	    /* FireIRCd +S */
#define CMODE_OPERONLY      0x00800000	    /* FireIRCd +O */
#define CMODE_ADMINONLY     0x01000000	    /* FireIRCd +A */
#define CMODE_NONOTICE      0x04000000      /* FireIRCd +T */

#endif
