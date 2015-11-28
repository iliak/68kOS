
#include <exec\exec.h>

#include <proto\exec.h>

//
// Add a device to the system
//
void AddDevice(struct Device *device)
{
	if (!device)
		return;
/*
	kprintf("EXEC", "Adding device \"%s\" V%i.%i\n", device->Library.IdString, device->Library.Version, device->Library.Revision);

	// Make sure things are right
	device->Library.Node.Type = NT_DEVICE;
	device->Library.Flags |= LIBF_CHANGED;


	SumLibrary(&device->Library);

	Forbid();

	Enqueue(&SysBase.DeviceList, &device->Library.Node);

	Permit();
*/
}