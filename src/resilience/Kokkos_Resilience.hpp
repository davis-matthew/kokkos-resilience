#ifndef INC_RESILIENCE_RESILIENCE_HPP
#define INC_RESILIENCE_RESILIENCE_HPP

#include <KokkosResilience_config.h>

#include <context.hpp>

#ifdef KOKKOS_ENABLE_MANUAL_CHECKPOINT
   #include <Kokkos_ManualCheckpoint.hpp>
#endif

#ifdef KOKKOS_ENABLE_AUTOMATIC_CHECKPOINT
   #include <Kokkos_AutomaticCheckpoint.hpp>
#endif

#ifdef KOKKOS_ENABLE_RES_CUDA 
   #include <Kokkos_ResCuda.hpp>
   #include <Kokkos_ResCudaSpace.hpp>
   #include <Cuda/Kokkos_Cuda_ResParallel.hpp>
#endif


#endif  // INC_RESILIENCE_RESILIENCE_HPP
