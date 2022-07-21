Pod::Spec.new do |s|
    s.platform              = :ios
    s.ios.deployment_target = '12.0'
    s.name                  = "SoundPayiOS"
    s.summary               = "Data transfer over sound"
    s.requires_arc          = true
    
    
    s.version               = "1.0.0"
    
    s.license               = { :type => "MIT", :file => "LICENSE" }
    
    
    s.author                = { "AKSA-SDS" => "hussainnaeem702@gmail.com" }
    
    s.homepage              = "https://github.com/hussainnaeem702/SoundPayiOS.git"
    
    
    s.source                = {
    :git => "https://github.com/hussainnaeem702/SoundPayiOS.git",
    :branch => 'master',
    :tag => "#{s.version}"
    }

    s.source_files       = 'Shared/*.{swift,h,m}'
    
    s.swift_version         = "4.2"
    
end