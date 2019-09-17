//
//  BlinkEd25519.h
//  Dappbirds
//
//  Created by 区块链 on 2019/7/1.
//  Copyright © 2019 com.fengniaomall.dappbirds. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface Ed25519Base  : NSObject
@property (nonatomic,strong) NSData *publickey;//公钥32位
@property (nonatomic,strong) NSData *privatekey;//私钥64位


/** 生成ed25519密钥串 @return Ed25519Keypair对象，保存一对密钥串 */
+(Ed25519Base *)generateEd25519KeyPair;

/** 签名数据 @param ed25519keypair 密钥串 @param content 需要签名的数据(json格式的字符串) @return 签名后的数据 */
+(NSData *)signMsg:(Ed25519Base *)ed25519keypair Content:(NSString *)content;

// 根据私钥生成公钥
+(Ed25519Base *)generateKeyPairWithPrivateKey: (NSData *)privateKey;

// 把传入的hash进行签名
+(NSData *)signSignature:(NSData *)hashData publickey:(NSData *)publickey privatekey:(NSData *)privatekey;

+(NSData *)sha3_256WithData: (NSData *)data;

@end

NS_ASSUME_NONNULL_END



