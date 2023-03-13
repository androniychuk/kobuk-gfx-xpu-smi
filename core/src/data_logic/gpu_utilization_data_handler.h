/* 
 *  Copyright (C) 2021-2023 Intel Corporation
 *  SPDX-License-Identifier: MIT
 *  @file gpu_utilization_data_handler.h
 */

#pragma once

#include "metric_statistics_data_handler.h"

namespace xpum {

class GPUUtilizationDataHandler : public MetricStatisticsDataHandler {
   public:
    GPUUtilizationDataHandler(MeasurementType type, std::shared_ptr<Persistency> &p_persistency);

    virtual ~GPUUtilizationDataHandler();

    virtual void handleData(std::shared_ptr<SharedData> &p_data) noexcept;

    void calculateData(std::shared_ptr<SharedData> &p_data);

   private:
    uint32_t getAverage(std::vector<uint32_t> &datas);
};
} // end namespace xpum
