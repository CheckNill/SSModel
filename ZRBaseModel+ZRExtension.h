//
//  ZRBaseModel+ZRExtension.h
//  CheckNill
//
//  Created by CheckNill on 2017/11/5.
//

#import "ZRBaseModel.h"
#import <objc/runtime.h>
#import "NSString+ZREXtention.h"
@interface NSObject (ZRExtension)<NSCoding,NSCopying>
//@property (nonatomic,strong) NSString *name;

/*
 *Model 到字典   类似逆向的 setValuesForKeysWithDictionary
 */
- (NSDictionary *)properties_aps;
/*
 *通过运行时获取当前对象的所有属性的名称，以数组的形式返回
 */
- (NSArray *) allPropertyNames;

+(NSMutableArray *)getDataWithArr:(NSArray *)arr;

/*
 *缓存数据进文件夹
 */
-(void)ArchiverFileWithFileName:(NSString *)fileName;

+(instancetype)UnarchiverFileWithFileName:(NSString *)fileName;


@end
