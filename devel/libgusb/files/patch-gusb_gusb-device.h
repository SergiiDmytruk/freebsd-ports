--- gusb/gusb-device.h.orig	2021-03-19 02:26:26 UTC
+++ gusb/gusb-device.h
@@ -155,7 +155,9 @@ GPtrArray		*g_usb_device_get_children	(GUsbDevice	*device);
 
 guint8			 g_usb_device_get_bus		(GUsbDevice	*device);
 guint8			 g_usb_device_get_address	(GUsbDevice	*device);
+#ifndef __DragonFly__
 guint8			 g_usb_device_get_port_number	(GUsbDevice	*device);
+#endif
 
 guint16			 g_usb_device_get_vid		(GUsbDevice	*device);
 guint16			 g_usb_device_get_pid		(GUsbDevice	*device);
