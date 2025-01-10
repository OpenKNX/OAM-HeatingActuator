# set product names, allows mapping of (devel) name in Project to a more consistent name in release
$settings = lib/OGM-Common/scripts/build/OpenKNX-Build-Settings.ps1 $args[0] "HeatingActuator" "HeatingActuator"

$settings.sourceName="HeatingActuator"  
$settings.targetName="HeatingActuator"

Return $settings