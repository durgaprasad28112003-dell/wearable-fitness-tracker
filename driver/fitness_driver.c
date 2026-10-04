#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/miscdevice.h>

#define DEVICE_NAME "fitness_device"

static char message[128] = "Fitness Tracker Driver\n";

static ssize_t fitness_read(struct file *file, char __user *buffer,
                            size_t length, loff_t *offset)
{
    int size = strlen(message);

    if (*offset >= size)
        return 0;

    if (copy_to_user(buffer, message, size))
        return -EFAULT;

    *offset = size;
    return size;
}

static ssize_t fitness_write(struct file *file, const char __user *buffer,
                             size_t length, loff_t *offset)
{
    size_t size = length;

    if (size >= sizeof(message))
        size = sizeof(message) - 1;

    if (copy_from_user(message, buffer, size))
        return -EFAULT;

    message[size] = '\0';

    printk(KERN_INFO "Fitness Tracker Driver: data received\n");

    return length;
}

static const struct file_operations fitness_fops = {
    .owner = THIS_MODULE,
    .read = fitness_read,
    .write = fitness_write,
};

static struct miscdevice fitness_device = {
    .minor = MISC_DYNAMIC_MINOR,
    .name = DEVICE_NAME,
    .fops = &fitness_fops,
    .mode = 0666,
};

static int __init fitness_driver_init(void)
{
    printk(KERN_INFO "Fitness Tracker Driver loaded\n");
    return misc_register(&fitness_device);
}

static void __exit fitness_driver_exit(void)
{
    misc_deregister(&fitness_device);
    printk(KERN_INFO "Fitness Tracker Driver unloaded\n");
}

module_init(fitness_driver_init);
module_exit(fitness_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Durga Prasad Nayak");
MODULE_DESCRIPTION("Simple Fitness Tracker Character Device Driver");
