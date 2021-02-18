# Introduction

This cheat sheet lists common PowerShell cmdlets used to find your way aroung PowerShell and do basic operations on the machine.

## Manipulating Environment Variables

### Find the Environment Variables Location

Envioronment variables are considered a drive on the machine. Obtaining the list of drives is done with:

```
Get-PSDrive
```

### Set an Environment Variable

To set an environment variable use the following:

```
$env:<environment_variable_name>='<environment_variable_value>'
```

*Example:*
```
$env:MY_ENV_VAR='my custom value'
```

### Read an Environment Variable

To read the value of an environment variable use the following:

```
$env:<environment_variable_name>
```

*Example:*
```
$env:MY_ENV_VAR
```

### List All Environment Variable

To list all currently set environment variable and their values use the following:

```
Get-ChildItem -Path Env:* | Sort-Object Name
```