# Copyright (c) 2020 ARM Limited. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

add_library(nu-rs485 STATIC EXCLUDE_FROM_ALL)

target_include_directories(nu-rs485
    PUBLIC
        .
)

target_sources(nu-rs485
    PRIVATE
        MyUnbufferedSerial.cpp
        nvt_rs485.cpp
)

target_link_libraries(nu-rs485 PUBLIC mbed-core-flags)
