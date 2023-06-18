# gentoo-kernel-vanilla

This package provides gentoo's vanilla distribution kernel. This kernel really
ought not to be used if you already have a custom kernel configuration, but
if you do not want to go through the hassle of configuring your own kernel,
you can use this package.

It is **highly** recommended that you use `ccache` while building this kernel
as it make subsequent rebuilds far less time consuming. This package even has
built-in support for ccache, so there is zero configuration on your part to
use it, just make sure that it is installed.
