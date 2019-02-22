# LinuxDeviceDriver
linux设备驱动开发学习记录


### 加载模块
```
sudo insmod xxx.ko
```

- 查看模块：
```
lsmod | grep xxx

```
- 查看模块输出信息：
```
dmesg -c 

```


### 卸载模块
```
sudo rmmod xxx.ko
```

