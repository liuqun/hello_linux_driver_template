
#include <linux/kernel.h>
#include <linux/module.h>

int init_module(void)
{
	printk(KERN_DEBUG "%s()\n", __func__);
	return (0);
}

void cleanup_module(void)
{
	printk(KERN_DEBUG "%s()\n", __func__);
}

