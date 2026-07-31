  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf

  INF Binaries/rmx2202/QcomPkg/Drivers/EnvDxe/EnvDxe.inf

  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf

  INF Binaries/rmx2202/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/TzDxe/TzDxeLA.inf

  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf

  INF Binaries/rmx2202/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf

  INF ArmPkg/Drivers/ArmGicDxe/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf

  INF Binaries/rmx2202/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/ProjectInfoDxe/ProjectInfoDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/HWIODxe/HWIODxe.inf

  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf

  INF Binaries/rmx2202/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/ICBDxe/ICBDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/rmx2202/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif
  INF Binaries/rmx2202/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/SPIDxe/SPIDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/MinidumpTADxe/MinidumpTADxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/rmx2202/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/rmx2202/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/IPCCDxe/IPCCDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/GLinkDxe/GLinkDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/PmicGlinkDxe/PmicGlinkDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/XhciPciEmulationDxe/XhciPciEmulationDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/XhciDxe/XhciDxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/rmx2202/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/UsbInitDxe/UsbInitDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/UCDxe/UCDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/RNGDxe/RngDxe.inf
  #INF Binaries/rmx2202/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/SPSSDxe/SPSSDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/ParserDxe/ParserDxe.inf
  INF Binaries/rmx2202/QcomPkg/Drivers/SerialPortDxe/SerialPortDxe.inf

