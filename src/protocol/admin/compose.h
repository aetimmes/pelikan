#pragma once

typedef enum compose_rstatus {
    COMPOSE_OK       = 0,
    COMPOSE_ENOMEM   = -1,
} compose_rstatus_t;

struct buf;
struct reply;

/* if the return value is negative, it can be interpreted as compose_rstatus */
int compose_rep(struct buf **buf, struct reply *rep);
