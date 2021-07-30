# Ubuntu Networking Configuration

`sudo vi /etc/netplan/50-cloud-init.yaml` - manually configures the IP address for the machine.

Here is an example configuration:

```
network:
  version: 2
  ethernets:
    en0:
      dhcp4: no
      addresses:
        - 192.168.1.101/24
      gateway4: 192.168.1.1
      nameservers:
          addresses: [8.8.8.8, 1.1.1.1]
```

`$ sudo netplan apply` - applies the changes.