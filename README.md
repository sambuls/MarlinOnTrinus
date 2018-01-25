# MarlinOnTrinus

I recently wanted to build a little bigger than what Trinus is made for. While this is physically possible, the firmware does not allow you to go over its soft limits(defined in firmware). I also noticed that the temperature measurement readout(graph) of the nozzle was not support by default in Simplify3D.

For this purpose, I reversed engineered the Trinus motherboard and ported native Marlin on it.

This solution solved all my needs and apparently solves some other firmware issues…

This is a work in progress, but by copying these files over the marlin firmware, it should compile…

To give you an impression: https://www.youtube.com/watch?v=vIrDApt29v0&t=287s
