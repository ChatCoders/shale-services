/*
 * Copyright (c) 2003-2004 E. Will et al.
 * Copyright (c) 2005-2008 Atheme Development Group
 * Copyright (c) 2014-2018 Xtheme Development Group
 * Copyright (c) 2008-2010 ShadowIRCd Development Group
 * Copyright (c) 2018 ShaleCoding Development Group
 * Rights to this code are documented in doc/LICENSE.
 *
 * This file contains protocol support for ponychat-ircd.
 *
 */

#include "atheme.h"
#include "uplink.h"
#include "pmodule.h"
#include "protocol/shadowircd.h"

DECLARE_MODULE_V1("protocol/sircd", true, _modinit, NULL, PACKAGE_STRING, VENDOR_STRING);

/* *INDENT-OFF* */

ircd_t sircd_ircd = {
	.ircdname = "sircd",
	.tldprefix = "$$",
	.uses_uid = true,
	.uses_rcommand = false,
	.uses_owner = true,
	.uses_protect = true,
	.uses_halfops = true,
	.uses_p10 = false,
	.uses_vhost = false,
	.oper_only_modes = CMODE_EXLIMIT | CMODE_PERM | CMODE_IMMUNE,
	.owner_mode = CSTATUS_OWNER,
	.protect_mode = CSTATUS_PROTECT,
	.halfops_mode = CSTATUS_HALFOP,
	.owner_mchar = "+q",
	.protect_mchar = "+a",
	.halfops_mchar = "+h",
	.type = PROTOCOL_SHADOWIRCD,
	.perm_mode = CMODE_PERM,
	.oimmune_mode = CMODE_IMMUNE,
	.ban_like_modes = "beIq",
	.except_mchar = 'e',
	.invex_mchar = 'I',
	.flags = IRCD_CIDR_BANS | IRCD_HOLDNICK,
};

struct cmode_ sircd_mode_list[] = {
  { 'i', CMODE_INVITE },
  { 'm', CMODE_MOD    },
  { 'n', CMODE_NOEXT  },
  { 'p', CMODE_PRIV   },
  { 's', CMODE_SEC    },
  { 't', CMODE_TOPIC  },
  { 'c', CMODE_NOCOLOR},
  { 'r', CMODE_REGONLY},
  { 'u', CMODE_OPMOD  },
  { 'g', CMODE_FINVITE},
  { 'L', CMODE_EXLIMIT},
  { 'P', CMODE_PERM   },
  { 'F', CMODE_FTARGET},
  { 'Q', CMODE_DISFWD },
  { 'M', CMODE_IMMUNE },
  { 'C', CMODE_NOCTCP },
  { 'A', CMODE_ADMINONLY },
  { 'O', CMODE_OPERONLY },
  { 'S', CMODE_SSLONLY },
  { 'D', CMODE_NOACTIONS },
  { 'T', CMODE_NONOTICE },
  { 'G', CMODE_NOCAPS },
  { 'E', CMODE_NOKICKS },
  { 'd', CMODE_NONICKS },
  { 'K', CMODE_NOREPEAT },
  { 'J', CMODE_KICKNOREJOIN },
  { 'B', CMODE_HIDEBANS },
  { '\0', 0 }
};

struct cmode_ sircd_status_mode_list[] = {
  { 'q', CSTATUS_OWNER },
  { 'a', CSTATUS_PROTECT },
  { 'o', CSTATUS_OP    },
  { 'h', CSTATUS_HALFOP },
  { 'v', CSTATUS_VOICE },
  { '\0', 0 }
};

struct cmode_ sircd_prefix_mode_list[] = {
  { '~', CSTATUS_OWNER },
  { '&', CSTATUS_PROTECT },
  { '@', CSTATUS_OP    },
  { '%', CSTATUS_HALFOP },
  { '+', CSTATUS_VOICE },
  { '\0', 0 }
};

struct cmode_ sircd_user_mode_list[] = {
  { 'a', UF_ADMIN    },
  { 'i', UF_INVIS    },
  { 'o', UF_IRCOP    },
  { 'D', UF_DEAF     },
  { '\0', 0 }
};

/* *INDENT-ON* */

static bool dakota_is_valid_host(const char *host)

{
	return true;
}

void _modinit(module_t * m)
{
	MODULE_TRY_REQUEST_DEPENDENCY(m, "protocol/charybdis");

	mode_list = sircd_mode_list;
	user_mode_list = sircd_user_mode_list;
	status_mode_list = sircd_status_mode_list;
	prefix_mode_list = sircd_prefix_mode_list;
        is_valid_host = &dakota_is_valid_host;

	ircd = &sircd_ircd;

	m->mflags = MODTYPE_CORE;

	pmodule_loaded = true;
}

/* vim:cinoptions=>s,e0,n0,f0,{0,}0,^0,=s,ps,t0,c3,+s,(2s,us,)20,*30,gs,hs
 * vim:ts=8
 * vim:sw=8
 * vim:noexpandtab
 */
