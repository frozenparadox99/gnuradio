/* -*- c++ -*- */
/*
 * Copyright 2012 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef INCLUDED_FLOAT_TO_CHAR_IMPL_H
#define INCLUDED_FLOAT_TO_CHAR_IMPL_H

#include <gnuradio/blocks/float_to_char.h>

namespace gr {
namespace blocks {

class BLOCKS_API float_to_char_impl : public float_to_char
{
    const size_t d_vlen;
    float d_scale;

public:
    float_to_char_impl(size_t vlen, float scale);

    virtual float scale() const { return d_scale; }
    virtual void set_scale(float scale) { d_scale = scale; }

    int work(int noutput_items,
             gr_vector_const_void_star& input_items,
             gr_vector_void_star& output_items);
};

} /* namespace blocks */
} /* namespace gr */


#endif /* INCLUDED_FLOAT_TO_CHAR_IMPL_H */
