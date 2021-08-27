# Introduction

This document provides common commands for configuring firewall rules on Linux using `iptables`.

## List the current firewall rules

```
sudo iptables -L
```

## Enable SSH access from specific IP addresses

```
sudo iptables -A INPUT -i <interface> -p tcp --dport 22 -s <ip-address-or-range> -m state --state NEW, ESTABLISHED -j ACCEPT
sudo iptables -A OUTPUT -i <interface> -p tcp --dport 22 -d <ip-address-or-range> -m state --state ESTABLISHED -j ACCEPT
```

The above two commands enable incoming new and established SSH traffic from the specified IP addresses and only established SSH traffic to those IP addresses.

