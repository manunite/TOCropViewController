Pod::Spec.new do |s|
  s.name     = 'CropViewControllerJJGram'
  s.version  = '2.6.0.3'
  s.license  =  { :type => 'MIT', :file => 'LICENSE' }
  s.summary  = 'A Swift view controller that enables cropping and rotating of UIImage objects.'
  s.homepage = 'https://github.com/manunite/TOCropViewControllerJJGram'
  s.author   = 'Tim Oliver'
  s.source   = { :git => 'https://github.com/manunite/TOCropViewControllerJJGram.git', :tag => s.version }
  s.platform = :ios, '11.0'
  s.source_files = 'Swift/CropViewControllerJJGram/**/*.{h,swift}', 'Objective-C/TOCropViewController/**/*.{h,m}'
  s.exclude_files = 'Objective-C/TOCropViewController/include/**/*.h'
  s.resource_bundles = {
    'TOCropViewControllerBundle' => ['Objective-C/TOCropViewController/**/*.lproj']
  }
  s.requires_arc = true
  s.swift_version = '5.0'
end
