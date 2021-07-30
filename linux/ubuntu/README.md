# Check and change the hostname

`$ hostname` - returns the hostname only

`$ hostnamectl` - returns additional information like the hostname, machine ID, boot ID, OS version, kernel, and architecture

`$ sudo hostname "new-hostname"` - temporarily changes the hostname (transient hostname) to _new-hostname_

`$ sudo hostnamectl set-hostname "new_hostname"` - changes the hostname to _new-hostname_

`$ sudo vi /etc/hostname` - editing the `/etc/hostname` file manually also changes the hostname