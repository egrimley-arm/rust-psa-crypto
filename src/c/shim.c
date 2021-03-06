// Copyright 2020 Contributors to the Parsec project.
// SPDX-License-Identifier: Apache-2.0

// This file is needed to provide linkable versions of certain
// PSA Crypto functions that may be declared static inline.
// See: https://github.com/ARMmbed/mbedtls/issues/3230

#include "shim.h"

size_t
shim_get_key_bits(const psa_key_attributes_t *attributes)
{
    return psa_get_key_bits(attributes);
}

psa_key_type_t
shim_get_key_type(const psa_key_attributes_t *attributes)
{
    return psa_get_key_type(attributes);
}

psa_key_attributes_t
shim_key_attributes_init(void)
{
    return psa_key_attributes_init();
}

void
shim_set_key_algorithm(psa_key_attributes_t *attributes,
                       psa_algorithm_t alg)
{
    psa_set_key_algorithm(attributes, alg);
}

void
shim_set_key_bits(psa_key_attributes_t *attributes,
                  size_t bits)
{
    psa_set_key_bits(attributes, bits);
}

void
shim_set_key_id(psa_key_attributes_t *attributes,
                psa_key_id_t id)
{
    psa_set_key_id(attributes, id);
}

void
shim_set_key_lifetime(psa_key_attributes_t *attributes,
                      psa_key_lifetime_t lifetime)
{
    psa_set_key_lifetime(attributes, lifetime);
}

void
shim_set_key_type(psa_key_attributes_t *attributes,
                  psa_key_type_t type_)
{
    psa_set_key_type(attributes, type_);
}

void
shim_set_key_usage_flags(psa_key_attributes_t *attributes,
                         psa_key_usage_t usage_flags)
{
    psa_set_key_usage_flags(attributes, usage_flags);
}
