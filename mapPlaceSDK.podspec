#
#  Be sure to run `pod spec lint mapPlaceSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
s.name         = "mapPlaceSDK"    #存储库名称
s.version      = "0.0.3"      #版本号，与tag值一致
s.summary      = "a summary of repository demo"  #简介
s.description  = "a description of repository demo"  #描述
s.homepage     = "https://github.com/chenyq502/CHMapPlace"      #项目主页，不是git地址
s.license      = { :type => "MIT", :file => "LICENSE" }   #开源协议
s.author             = { "chenyueqing" => "cyq502@sina.com" }  #作者
s.platform     = :ios, "8.0"                  #支持的平台和版本号
s.source       = { :git => "https://github.com/chenyq502/CHMapPlace.git", :tag => "0.0.3" }         #存储库的git地址，以及tag值
#s.source_files  =  "MapPlaceSDK/**/*.{h,m}" #需要托管的源代码路径
s.vendored_frameworks = "MapPlaceSDK/ERMapBaseSDK.framework"
s.frameworks = "Foundation"
s.requires_arc = true #是否支持ARC
s.xcconfig = {'BITCODE_GENERATION_MODE' => 'bitcode'}
#s.dependency "Masonry", "~> 1.0.0"    #所依赖的第三方库，没有就不用写
end
