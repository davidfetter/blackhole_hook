/*--------------------------------------------------------------
 *
 * blackhole_hook.c
 * 		Template hook.  Does not actually do anything.
 *
 * Copyright (c) 1996-2017, PostgreSQL Global Development Group
 *
 * IDENTIFICATION
 * 				src/blackhole_hook.c
 *
 * -------------------------------------------------------------
 */

/* Must have this */
#include "postgres.h"

/* Headers you need start here: */

/* Headers you need end here: */

PG_MODULE_MAGIC;

/* Hooking: All hooks start with this. */
void _PG_init(void);

/* Unhooking: All hooks end with this. */
void _PG_fini(void);

/*
 * There is a type for each hook.  This is not one of them.  You will need it
 * for hooking and unhooking.
 *
 */

static System_hook_type prev_system_hook = NULL;

static
void blackhole_hook
{
	/* Your hook code goes here */
}

void _PG_init(void)
{
	prev_system_hook = System_hook;
	System_hook = blackhole_hook;
}

void _PG_fini(void)
{
	System_hook = prev_system_hook;
}
