/*
 * obfs.h - Interfaces of obfuscating function
 *
 * Copyright (C) 2013 - 2016, Max Lv <max.c.lv@gmail.com>
 *
 * This file is part of the shadowsocks-libev.
 *
 * shadowsocks-libev is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * shadowsocks-libev is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with shadowsocks-libev; see the file COPYING. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef OBFS_H
#define OBFS_H

#include "encrypt.h"

#define OBFS_NONE 0
#define OBFS_HTTP 1

#define OBFS_HTTP_NAME "http"

typedef struct obfs {
    const char *name;
    const char *host;
    uint16_t port;
    int(*const obfs_request)(buffer_t *, size_t);
    int(*const obfs_response)(buffer_t *, size_t);
    int(*const deobfs_request)(buffer_t *, size_t);
    int(*const deobfs_response)(buffer_t *, size_t);
    int(*const check_obfs)(buffer_t *);
} obfs_t;

#endif
