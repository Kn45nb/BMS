#include <ntddk.h>

void DriverUnload(PDRIVER_OBJECT DriverObject) {
    DbgPrint("Driver Unload\n");
}

NTSTATUS DriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath) {
    DriverObject->DriverUnload = DriverUnload;
    DbgPrint("Driver Entry\n");
    return STATUS_SUCCESS;
}
