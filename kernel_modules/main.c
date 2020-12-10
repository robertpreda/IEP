#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_DESCRIPTION("blanao kernel module");
MODULE_AUTHOR("Robert Preda blanao");
MODULE_LICENSE("LMAO");

static int dummy_init(void)
{
 	pr_debug("Hello there \n");
	return 0;
}

static int dummy_exit(void)
{
	pr_debug("General Kenobi\n");
	return 0;
}

module_init(dummy_init);
module_exit(dummy_exit);



