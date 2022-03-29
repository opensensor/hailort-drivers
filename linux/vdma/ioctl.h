// SPDX-License-Identifier: GPL-2.0
/**
 * Copyright (c) 2019-2022 Hailo Technologies Ltd. All rights reserved.
 **/

#ifndef _HAILO_VDMA_IOCTL_H_
#define _HAILO_VDMA_IOCTL_H_

#include "vdma/vdma.h"

long hailo_vdma_buffer_map_ioctl(struct hailo_vdma_file_context *context, struct hailo_vdma_controller *controller, unsigned long arg);
long hailo_vdma_buffer_unmap_ioctl(struct hailo_vdma_file_context *context, struct hailo_vdma_controller *controller, unsigned long handle);
long hailo_vdma_buffer_sync(struct hailo_vdma_file_context *context, struct hailo_vdma_controller *controller, unsigned long arg);

long hailo_desc_list_create_ioctl(struct hailo_vdma_file_context *context, struct hailo_vdma_controller *controller, unsigned long arg);
long hailo_desc_list_release_ioctl(struct hailo_vdma_file_context *context, struct hailo_vdma_controller *controller, unsigned long arg);
long hailo_desc_list_bind_vdma_buffer(struct hailo_vdma_file_context *context, struct hailo_vdma_controller *controller, unsigned long arg);

long hailo_vdma_low_memory_buffer_alloc_ioctl(struct hailo_vdma_file_context *context, struct hailo_vdma_controller *controller, unsigned long arg);
long hailo_vdma_low_memory_buffer_free_ioctl(struct hailo_vdma_file_context *context, struct hailo_vdma_controller *controller, unsigned long arg);

long hailo_mark_as_in_use(struct hailo_vdma_controller *controller, unsigned long arg, struct file *filp);

#endif /* _HAILO_VDMA_IOCTL_H_ */