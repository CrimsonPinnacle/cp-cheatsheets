# Introduction

This document provides common commands for troubleshooting network routes, tracing network paths, and understanding network routes.

## Display current routing table

### Linux (Debian)

```
route -n
```

### MacOS

```
netstat -nr
```

### Windows

```
netstat -nr
```

or

```
route PRINT
```

## Discover which interface will be used for a specific IP address

### Linux (Debian)

```
ip route get <ip-address>
```

### MacOS

```
route -n get <ip-address>
```

## Tracing a route

### Linux (Debian)

```
traceroute <ip-address>
```

### MacOS

```
traceroute <ip-address>
```

### Windows

```
tracert <ip-address>
```
