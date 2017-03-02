MODULES = blackhole_hook

MODULE_big = blackhole
OBJS = src/blackhole.o

PGFILEDESC = 'blackhole - do nothing'

REGRESS = blackhole

PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
