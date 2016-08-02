/* This file was generated from java/net/Inet4AddressImpl.java and
 * is licensed under the same terms.  The copyright and license information
 * for java/net/Inet4AddressImpl.java follows.
 *
 * Copyright (c) 2002, 2005, Oracle and/or its affiliates. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  Oracle designates this
 * particular file as subject to the "Classpath" exception as provided
 * by Oracle in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class java_net_Inet4AddressImpl */

#ifndef _Included_java_net_Inet4AddressImpl
#define _Included_java_net_Inet4AddressImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     java_net_Inet4AddressImpl
 * Method:    getLocalHostName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Inet4AddressImpl_getLocalHostName
  (JNIEnv *, jobject);

/*
 * Class:     java_net_Inet4AddressImpl
 * Method:    lookupAllHostAddr
 * Signature: (Ljava/lang/String;)[Ljava/net/InetAddress;
 */
JNIEXPORT jobjectArray JNICALL Inet4AddressImpl_lookupAllHostAddr
  (JNIEnv *, jobject, jstring);

/*
 * Class:     java_net_Inet4AddressImpl
 * Method:    getHostByAddr
 * Signature: ([B)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Inet4AddressImpl_getHostByAddr
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     java_net_Inet4AddressImpl
 * Method:    isReachable0
 * Signature: ([BI[BI)Z
 */
JNIEXPORT jboolean JNICALL Inet4AddressImpl_isReachable0
  (JNIEnv *, jobject, jbyteArray, jint, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif
