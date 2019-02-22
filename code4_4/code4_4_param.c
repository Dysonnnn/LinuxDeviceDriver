#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static char *book_name  = "dissecting Linux Device Driver";
static int num = 4000;

static int book_init(void)
{
	printk(KERN_DEBUG " module  DEBIG  enter  7  \n");
	printk(KERN_INFO " module  INFO  enter  6  \n");
	printk(KERN_NOTICE " module  NOTICE  enter  5  \n");
	printk(KERN_WARNING  " module  WARNING  enter   4 \n");
	printk(KERN_ERR  " module  ERR  enter   3 \n");
	printk(KERN_CRIT " module  CRIT  enter   2 \n");
	printk(KERN_ALERT " module  ALERT  enter  1  \n");
	printk(KERN_EMERG " module EMERG  enter  0  \n");
	printk(KERN_INFO " book name : %s \n",book_name);
	printk(KERN_ALERT " book name : %s \n",book_name);
	printk(KERN_INFO " book num:%d \n",num);
	printk(KERN_ALERT " book num:%d \n",num);
	return 0;
}

static void book_exit(void)
{
	printk(KERN_ALERT "Book module exit \n");

}

module_init(book_init);
module_exit(book_exit);
module_param(num, int, S_IRUGO);
module_param(book_name, charp, S_IRUGO);

MODULE_AUTHOR("DS ");
MODULE_DESCRIPTION("A simple module for testing module params");
MODULE_VERSION("V1.0");
