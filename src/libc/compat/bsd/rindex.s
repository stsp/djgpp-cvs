/* Copyright (C) 1995 DJ Delorie, see COPYING.DJ for details */
#include <libc/asmdefs.h>
	FUNC(_rindex)
	jmp	_strrchr
