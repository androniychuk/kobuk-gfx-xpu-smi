/* 
 *  Copyright (C) 2021-2023 Intel Corporation
 *  SPDX-License-Identifier: MIT
 *  @file engine_utilization_data_handler.h
 */

#pragma once

#include "metric_collection_statistics_data_handler.h"

namespace xpum {

class EngineUtilizationDataHandler : public MetricCollectionStatisticsDataHandler {
   public:
    EngineUtilizationDataHandler(MeasurementType type, std::shared_ptr<Persistency> &p_persistency);

    virtual ~EngineUtilizationDataHandler();

    virtual void handleData(std::shared_ptr<SharedData> &p_data) noexcept;

    void calculateData(std::shared_ptr<SharedData> &p_data);
};

} // end namespace xpum
