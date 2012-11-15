#include <linux/module.h>
#include <linux/init.h>

void module_a_test_export(void)
{
    printk("module_a test\n");
}

static int __init module_a_init(void)
{
     printk ("Loading module_a!\n");
             return 0;
}

static void __exit module_a_exit(void)
{
     printk ("Unloading module_a.\n");
             return;
}

module_init(module_a_init);
module_exit(module_a_exit);

MODULE_LICENSE("GPL");
EXPORT_SYMBOL_GPL(module_a_test_export);
