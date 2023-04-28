#pragma once

#include "Pch.h"
#include "..\common\public.h"


//////////////////////////////////////////////////////////////////////////////////////////////////


NTSTATUS DeleteControlDeviceObject();

NTSTATUS CreateControlDeviceObject(_In_ PDRIVER_OBJECT DriverObject);

_Function_class_(DRIVER_DISPATCH)
_IRQL_requires_max_(DISPATCH_LEVEL)
_IRQL_requires_same_
NTSTATUS ControlDeviceObjectMajorFunction(_In_ struct _DEVICE_OBJECT * DeviceObject, _Inout_ struct _IRP * Irp);


//////////////////////////////////////////////////////////////////////////////////////////////////


class Cdo
{

};
