Pod::Spec.new do |s|
s.name             = 'NavigationKit-iOS-Pod'
s.version='2.2.1'
s.summary          = 'The NavigationKit-iOS-Pod for the Jibestream iOS SDK.'

s.description      = 'This CocoaPod provides the release version of the NavigationKit for the Jibestream iOS SDK.'

s.homepage         = 'http://www.jibestream.com/'
s.author           = { 'louieyuen' => 'lyuen@jibestream.com' }
s.source           = { :git => 'https://github.com/John-Wiens/NavigationKit-iOS-Pod', :tag => "#{s.version}" }

s.ios.deployment_target = '10.0'
s.platform = :ios, '13.0'
s.vendored_frameworks = 'NavigationKit-iOS-Pod/Frameworks/*.xcframework'
s.dependency 'JMapiOSSDK'
end
