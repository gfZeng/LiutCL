/*
 * hash_table.h
 *
 *
 *
 * Copyright (C) 2012-11-07 liutos <mat.liutos@gmail.com>
 */
#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include "types.h"

extern BOOL ptr_cmp(void *, void *);
extern BOOL string_cmp(void *, void *);
extern hash_table_t make_hash_table_t(unsigned int, unsigned int (*)(void *, unsigned int), BOOL (*)(void *, void *));
extern table_entry_t find_table_entry(void *, hash_table_t);
extern unsigned int hash_ptr(void *, unsigned int);
extern unsigned int hash_string(void *, unsigned int);
extern void *search_key(void *, hash_table_t);
extern void add_key_value(void *, void *, hash_table_t);
extern void hash_table_iterate(hash_table_t, void (*)(void *, void *));
extern void update_key_value(void *, void *, hash_table_t);

#endif
