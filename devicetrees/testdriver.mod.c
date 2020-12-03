#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ctest,mydevice");
MODULE_ALIAS("of:N*T*Ctest,mydeviceC*");
MODULE_ALIAS("of:N*T*Ctest,mytestdevice");
MODULE_ALIAS("of:N*T*Ctest,mytestdeviceC*");

MODULE_INFO(srcversion, "F66E9E038A5AB12C8F5EB38");
