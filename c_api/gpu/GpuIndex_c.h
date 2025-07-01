#ifndef FAISS_GPU_INDEX_C_H
#define FAISS_GPU_INDEX_C_H

#include "../Index_c.h"
#include "../faiss_c.h"
#include "StandardGpuResources_c.h"
#ifdef __cplusplus
extern "C" {
#endif

FAISS_DECLARE_CLASS(GpuIndexConfig)
FAISS_DECLARE_GETTER(GpuIndexConfig, int, device)
FAISS_DECLARE_CLASS_INHERITED(GpuIndex, Index)

FAISS_DECLARE_CLASS(SearchParameters)

int faiss_GpuIndexCagra_new(
        FaissIndex** p_index,
        FaissStandardGpuResources* res,
        int d,
        FaissMetricType metric,
        size_t graph_degree);

int faiss_SearchParametersCagra_new(
        FaissSearchParameters** p_params,
        size_t itopk_size);

int faiss_index_gpu_to_cpu(const FaissIndex* gpu_index, FaissIndex** p_out);

#ifdef __cplusplus
}
#endif

#endif
