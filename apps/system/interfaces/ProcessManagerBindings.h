#ifndef __PROCESS_MANAGER_BINDINGS_H__
#define __PROCESS_MANAGER_BINDINGS_H__

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#define DEFAULT_BUNDLE_ID_CAPACITY 64

#define RAW_BUNDLE_ID_DATA_SIZE 100

typedef enum ProcessManagerError {
  Success = 0,
  BundleIdInvalid,
  BundleDataInvalid,
  PackageBufferLenInvalid,
  BundleNotFound,
  BundleFound,
  BundleRunning,
  NoSpace,
  InstallFailed,
  UninstallFailed,
  StartFailed,
  StopFailed,
} ProcessManagerError;

typedef uint8_t RawBundleIdData[RAW_BUNDLE_ID_DATA_SIZE];

#endif /* __PROCESS_MANAGER_BINDINGS_H__ */
