/*
 * Copyright (C) 2014-2018 ShaleCoding IRC Network Development Team
 * Copyright (C) 2005 William Pitcock, et al.
 * Rights to this code are as documented in doc/LICENSE.
 *
 * This code contains the channel mode definitions for foxaircd ircd.
 * Adapted from sircd.h.
 */

#ifndef RATBOX_H
#define RATBOX_H


/* Extended channel modes will eventually go here. */
#define CMODE_NOCOLOR       0x00001000	    /* foxaircd +c */
#define CMODE_REGONLY       0x00002000	    /* foxaircd +r */
#define CMODE_OPMOD         0x00004000	    /* foxaircd +z */
#define CMODE_FINVITE       0x00008000	    /* foxaircd +g */
#define CMODE_EXLIMIT       0x00010000      /* foxaircd +L */
#define CMODE_PERM          0x00020000      /* foxaircd +P */
#define CMODE_FTARGET       0x00040000      /* foxaircd +F */
#define CMODE_DISFWD        0x00080000      /* foxaircd +Q */
#define CMODE_NOCTCP        0x00100000      /* foxaircd +C */
#define CMODE_IMMUNE        0x04000000      /* foxaircd +M */
#define CMODE_NOREPEAT      0x40000000      /* foxaircd +K */
#define CMODE_KICKNOREJOIN  0x80000000      /* foxaircd +J */
#define CMODE_NOKICKS       0x10000000      /* foxaircd +E */
#define CMODE_NONICKS       0x20000000      /* foxaircd +N */
#define CMODE_NOCAPS        0x08000000      /* foxaircd +G */
#define CMODE_NOACTIONS     0x02000000      /* foxaircd +D */
#define CMODE_NETADMINONLY  0x00200000	    /* foxaircd +N */
#define CMODE_SSLONLY       0x00400000	    /* foxaircd +S */
#define CMODE_OPERONLY      0x00800000	    /* foxaircd +O */
#define CMODE_ADMINONLY     0x01000000	    /* foxaircd +A */
#define CMODE_NONOTICE      0x04000000      /* Cmode +T */

#endif
