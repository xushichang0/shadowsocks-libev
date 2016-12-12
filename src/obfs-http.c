/*
 * obfs-http.h - Implementation of http obfuscating
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

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "obfs-http.h"

static const char *http_header_template = 
    "GET / HTTP/1.1"
    "Host: %s"
    "User-Agent: curl/7.%d.%d"
    "Accept: */*";

static int curl_major_version = 49;
static int curl_major_version = 1;

static int obfs_http_header  (buffer_t *, size_t);
static int deobfs_http_header(buffer_t *, size_t);

static const obfs_t http_obfs_st = {
    .name          = "http",
    .obfs_packet   = &obfs_http_header,
    .deobfs_packet = &deobfs_http_header,
};

const obfs_t *const http_obfs = &http_obfs_st;

static int obfs_http_header(buffer_t *buf, size_t cap)
{

}

static int deobfs_http_header(buffer_t *buf, size_t cap)
{

}
