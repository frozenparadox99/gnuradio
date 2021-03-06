/* -*- c++ -*- */
/*
 * Copyright 2005,2013 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef INCLUDED_GR_VCO_F_H
#define INCLUDED_GR_VCO_F_H

#include <gnuradio/blocks/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
namespace blocks {

/*!
 * \brief VCO - Voltage controlled oscillator
 * \ingroup modulators_blk
 * \ingroup waveform_generators_blk
 *
 * \details
 * input: float stream of control voltages; output: float oscillator output
 */
class BLOCKS_API vco_f : virtual public sync_block
{
public:
    // gr::blocks::vco_f::sptr
    typedef boost::shared_ptr<vco_f> sptr;

    /*!
     * \brief VCO - Voltage controlled oscillator
     *
     * \param sampling_rate sampling rate (Hz)
     * \param sensitivity units are radians/sec/volt
     * \param amplitude output amplitude
     */
    static sptr make(double sampling_rate, double sensitivity, double amplitude);
};

} /* namespace blocks */
} /* namespace gr */

#endif /* INCLUDED_GR_VCO_F_H */
