
Pod::Spec.new do |s|  
    s.name              = 'MirrorflyUIKit' # Name for your pod
    s.version           = '2.1.0'
    s.summary           = 'This repo to explore the cocopod and how to upload pod in public accessc'
    s.homepage          = 'https://github.com/MirrorFly/Mirrorfly-iosuikit-framework'

    s.author            = { 'Gurudharan' => 'gurudharan.a@contus.in' }
    s.license      = { :type => 'Commercial', :file => 'LICENSE' }

    s.platform          = :ios, 12.1
    # change the source location
    s.source            = { :git => 'https://github.com/MirrorFly/Mirrorfly-iosuikit-framework.git', :tag => s.version.to_s }

    s.swift_versions = ['4.0', '4.2', '5.0', '5.2', '5.3', '5.6']
    s.requires_arc = true
    s.pod_target_xcconfig = { 'VALID_ARCHS' => 'armv7 arm64 x86_64', 'IPHONEOS_DEPLOYMENT_TARGET' => '12.1',}


    s.dependency 'libPhoneNumber-iOS'
    s.dependency 'Alamofire'
    s.dependency 'SocketRocket'
    s.dependency 'Socket.IO-Client-Swift', '15.2.0'
    s.dependency 'XMPPFramework/Swift'
    s.dependency 'RealmSwift' , '10.20.1'
    s.dependency 'GoogleWebRTC'
    s.dependency 'Toaster'
    s.dependency 'SDWebImage'
    s.dependency 'libPhoneNumber-iOS'
    s.dependency 'NicoProgress'
    s.dependency 'Floaty', '~> 4.2.0'
    s.dependency 'IQKeyboardManagerSwift'
    #s.dependency 'GoogleMaps'
    #s.dependency 'MirrorFlySDK', '5.8.0'


    #s.ios.vendored_frameworks = 'SDK/FlyUIKit.xcframework'
    s.ios.vendored_frameworks = 'SDK/MirrorFlySDK.xcframework'


   
end

