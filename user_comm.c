#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/version.h>


MODULE_DESCRIPTION("User space communication");
MODULE_AUTHOR("Guan-Han Wu");
MODULE_LICENSE("GPL");

static int init_usercomm_module(void)
{
	pr_info("Initialize module\n");
	return 0;
}

static void exit_usercomm_module(void)
{
	printk(KERN_INFO "Exit module");
}

module_init(init_usercomm_module);
module_exit(exit_usercomm_module);

