#
# Be sure to run `pod lib lint MJObjection.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
    s.name             = 'MJObjection'
    s.version          = '1.7.1'
    s.summary          = 'A lightweight dependency injection framework for Objective-C.'
    
    # This description is used to generate tags and improve search results.
    #   * Think: What does it do? Why did you write it? What is the focus?
    #   * Try to keep it short, snappy and to the point.
    #   * Write the description between the DESC delimiters below.
    #   * Finally, don't worry about the indent, CocoaPods strips it!
    
    s.description      = <<-DESC
    A lightweight dependency injection framework for Objective-C based on the Objection library.
    DESC
    
    s.homepage         = 'https://github.com/mobilejazz/objection'
    # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
    s.license          = { :type => 'Apache License, Version 2.0', :file => 'LICENSE' }
    s.author           = { 'Justin DeWind & Mobile Jazz' => 'info@mobilejazz.com' }
    s.source           = { :git => 'https://github.com/mobilejazz/objection.git', :tag => s.version.to_s }
    s.social_media_url = 'https://twitter.com/mobilejazzcom'
    
    s.requires_arc = true
    
    s.ios.deployment_target = '9.0'
    s.osx.deployment_target = '10.8'
    s.tvos.deployment_target = '9.0'
    
    s.source_files = 'Source Code/*.{h,m}'
end
