#include <linux/module.h>
#include <linux/init.h>

#include <module_a/module_a.h>

static int __init module_b_init(void)
{
     printk ("Loading module_b!\n");
     module_a_test_export();
     return 0;
}

static void __exit module_b_exit(void)
{
     printk ("Unloading module_b.\n");
     return;
}

module_init(module_b_init);
module_exit(module_b_exit);

MODULE_LICENSE("GPL");
