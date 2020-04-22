# default config variables
config_enable_feature=false

#override default config
if( !$empty($enable_feature) )
    config_enable_feature=$enable_feature

info "$config_enable_feature"

./: {*/ -build/} doc{README.md} manifest
