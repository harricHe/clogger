/* -*- coding: utf-8 -*-
 * ----------------------------------------------------------------------
 * Copyright © 2012, RedJack, LLC.
 * All rights reserved.
 *
 * Please see the LICENSE.txt file in this distribution for license
 * details.
 * ----------------------------------------------------------------------
 */

#ifndef CLOGGER_HANDLERS_H
#define CLOGGER_HANDLERS_H

#include <stdio.h>

#include <libcork/core.h>
#include <libcork/ds.h>


struct clog_handler *
clog_null_handler_new(void);


struct clog_handler *
clog_stderr_handler_new(void);


struct clog_handler *
clog_stream_handler_new_fp(FILE *fp, bool should_close);

struct clog_handler *
clog_stream_handler_new_consumer(struct cork_stream_consumer *consumer);


#endif /* CLOGGER_HANDLERS_H */