#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/input.h>
#include <linux/device.h>
#include <linux/interrupt.h>

#define KEY_IRQ 32

static struct input_dev *my_dev;


static irqreturn_t key_interrupt(int irq,void *dummy)
{
	input_report_key(my_dev,KEY_A,1);
	input_sync(my_dev);
	return IRQ_HANDLED;
}


static int my_input_driver_init(void)
{
	my_dev = input_allocate_device();

	set_bit(EV_KEY,my_dev->evbit);
	set_bit(KEY_A,my_dev->keybit);

	input_register_device(my_dev);

	if(request_irq(KEY_IRQ,key_interrupt,0,"key",NULL))
	{
		pr_info("irq is not allocated..\n");
		return 0;

	}



	return 0;
}


static void my_input_driver_exit(void)
{
	free_irq(KEY_IRQ,key_interrupt);
	input_unregister_device(my_dev);
}


module_init(my_input_driver_init);
module_exit(my_input_driver_exit);

MODULE_LICENSE("GPL");
