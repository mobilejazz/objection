#import <Foundation/Foundation.h>
#import "JSObjectionModule.h"

NS_ASSUME_NONNULL_BEGIN

@protocol JSObjectionInjectorSelectors

@optional
+ (NSSet *)objectionRequires;
+ (NSDictionary *)objectionRequiresNames;

@end

NS_SWIFT_NAME(ObjectionInjector)
@interface JSObjectionInjector : NSObject 

- (instancetype)initWithContext:(NSDictionary *)theGlobalContext;
- (instancetype)initWithContext:(NSDictionary *)theGlobalContext andModule:(JSObjectionModule *)theModule;
- (instancetype)initWithContext:(NSDictionary *)theGlobalContext andModules:(NSArray *)theModules;
- (id _Nullable)getObject:(id)classOrProtocol;
- (id _Nullable)getObject:(id)classOrProtocol named:(NSString* _Nullable)name;
- (id _Nullable)getObjectWithArgs:(id)classOrProtocol, ... NS_REQUIRES_NIL_TERMINATION;
- (id _Nullable)getObject:(id)classOrProtocol namedWithArgs:(NSString* _Nullable)name, ... NS_REQUIRES_NIL_TERMINATION;
- (id _Nullable)getObject:(id)classOrProtocol arguments:(va_list)argList;
- (id _Nullable)getObject:(id)classOrProtocol named:(NSString* _Nullable)name arguments:(va_list)argList;
- (id _Nullable)getObject:(id)classOrProtocol argumentList:(NSArray * _Nullable)argumentList;
- (id _Nullable)getObject:(id)classOrProtocol initializer:(SEL _Nullable)selector argumentList:(NSArray * _Nullable)argumentList;
- (id _Nullable)getObject:(id)classOrProtocol named:(NSString* _Nullable)name argumentList:(NSArray *)argumentList;
- (id _Nullable)getObject:(id)classOrProtocol named:(NSString* _Nullable)name initializer:(SEL _Nullable)selector argumentList:(NSArray * _Nullable)argumentList;
- (id _Nullable)getObject:(id)classOrProtocol named:(NSString* _Nullable)name initializer:(SEL _Nullable)selector argumentList:(NSArray * _Nullable)argumentList incomingModuleClass:(Class _Nullable)moduleClass;
- (id _Nullable)withModule:(JSObjectionModule *)theModule;
- (id _Nullable)withModules:(JSObjectionModule *)first, ... NS_REQUIRES_NIL_TERMINATION;
- (id _Nullable)withModuleCollection:(NSArray *)theModules;
- (id _Nullable)withoutModuleOfType:(Class)moduleClass;
- (id _Nullable)withoutModuleOfTypes:(Class)first, ... NS_REQUIRES_NIL_TERMINATION;
- (id _Nullable)withoutModuleCollection:(NSArray *)moduleClasses;
- (void)addModule:(JSObjectionModule *)theModule;
- (void)addModules:(JSObjectionModule *)first, ... NS_REQUIRES_NIL_TERMINATION;
- (void)addModuleCollection:(NSArray *)theModules;
- (void)removeModuleOfType:(Class)moduleClass;
- (void)removeModuleOfTypes:(Class)first, ... NS_REQUIRES_NIL_TERMINATION;
- (void)removeModuleCollection:(NSArray *)moduleClasses;
- (void)injectDependencies:(id)object;
- (id _Nullable)objectForKeyedSubscript:(id)key;
- (NSArray *)modules;

@end

NS_ASSUME_NONNULL_END

