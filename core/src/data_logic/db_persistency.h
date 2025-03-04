/* 
 *  Copyright (C) 2021-2023 Intel Corporation
 *  SPDX-License-Identifier: MIT
 *  @file db_persistency.h
 */

#pragma once

#include "infrastructure/measurement_type.h"
#include "persistency.h"

namespace xpum {

class DBPersistency : public Persistency {
   public:
    virtual void storeMeasurementData(
        MeasurementType type,
        Timestamp_t time,
        std::map<std::string, std::shared_ptr<MeasurementData>>& datas) override;
};

} // end namespace xpum
