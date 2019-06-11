Pod::Spec.new do |s|
s.name             = 'NavigationKit-iOS-Pod'
s.version='2.1.0'
s.summary          = 'The NavigationKit-iOS-Pod for the Jibestream iOS SDK.'

s.description      = 'This CocoaPod provides the release version of the Kit for the Jibestream iOS SDK.'

s.homepage         = 'http://www.jibestream.com/'
s.author           = { 'louieyuen' => 'lyuen@jibestream.com' }
s.source           = { :git => 'https://github.com/louieyune/NavigationKit-iOS-Pod.git', :tag => "#{s.version}" }

s.ios.deployment_target = '9.0'
s.platform = :ios, '9.0'
s.vendored_frameworks = 'NavigationKit-iOS-Pod/Frameworks/*.framework'

end
