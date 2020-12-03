Step 1: Install device tree compiler:
	`sudo apt-get install device-tree-compier`
Step 2: Get the device tree blob and convert it to a device tree source:
	`dts -I  dtb -O dts -o output.dts input.dtb`

Add to device tree source a node (the new device):
	` newnode: newnode {
		cell-property = <1 2 3 4>;
		};
	  	testdevdrv {
			compatible      = "test,testdevice";
			number_property = <1234>;
			string_property = <"Pls send help">;
			child-node1     = {
				child-property = <&newnode>;
			};
		}; `

Step 4: Compile the dts into a dtb (data tree blob):
	` dtc -O dtb -I dts output.dtb input.dts`

Step 5: Create the test driver and a Makefile, in order to create a kernel module:
	` make `

Step 6: Insert the module:
	` insmod testdriver.ko`
Step 7: Remove the module (or not, maybe you like it there)
	`rmmod testdriver.ko`


NOTE: didn't work on my end. /proc/device-tree doesn't exist. 
	/boot doesn't contain any .dtb file, whereas on a native Linux machine (Raspberry Pi 4 in my case) 
	both mentioned paths exist and contain relevant files. 
