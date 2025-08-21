// Copyright 2025 Accenture.
//
// SPDX-License-Identifier: Apache-2.0

#include "lane_assist.h"

#include "feo_cpp/feo_macros.h"
#include <cstdint>
#include <iostream>

LaneAssist::LaneAssist(const uint64_t activity_id) {
    this->activity_id = activity_id;
}

void LaneAssist::startup() {std::cout<<"Lane Assist startup"<<std::endl;}

void LaneAssist::step() {std::cout<<"Lane Assist step"<<std::endl;}

void LaneAssist::shutdown() {std::cout<<"Lane Assist shutdown"<<std::endl;}

// Create glue code for interface to Rust
MAKE_ACTIVITY(LaneAssist, lane_assist);

