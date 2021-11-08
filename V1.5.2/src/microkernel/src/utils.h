 /*******************************************************************************
 * Copyright © 2017-2021 Ezviz Inc.
 *
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * and Eclipse Distribution License v1.0 which accompany this distribution.
 *
 * The Eclipse Public License is available at
 *    http://www.eclipse.org/legal/epl-v10.html
 * and the Eclipse Distribution License is available at
 *   http://www.eclipse.org/org/documents/edl-v10.php.
 * 
 * Brief:
 * 
 * 
 * Change Logs:
 * Date           Author       Notes
 * 
 *******************************************************************************/
#ifndef _EZDEVSDK_UTILS_H
#define _EZDEVSDK_UTILS_H

#ifdef __cplusplus
extern "C"
{
#endif

/** 
 *  \brief		���������
 *  \method		ezRandomGen
 *  \param[out] buf				���ջ�����
 *  \param[in] 	len				����������,ͬʱҲ���������������
 *  \return		�ɹ���0,ʧ�ܷ���0
 */
int ezRandomGen(unsigned char *buf, unsigned int len);

/** 
 *  \brief			RSA��Կ���ܣ�Ĭ��PKCS#1 v1.5��䷽ʽ
 *  \method			ezRsaEncrypt
 *  \param[in]		pIn				����
 *  \param[in] 		iInLen			���ĳ���
 *  \param[out] 	pOut			����
 *  \param[in/out] 	iOutLen			���ĳ���
 *  \param[in] 		pN				Nֵ��16�����ַ���,"00112233FF"
 *  \param[in] 		pE				Eֵ��16�����ַ���
 *  \return							�ɹ���0,ʧ�ܷ�1
 */
int ezRsaEncrypt(const unsigned char *pIn, int iInLen, unsigned char *pOut, int *iOutLen, const char *pN, const char *pE);

/** 
 *  \brief			RSA˽Կ���ܣ�Ĭ��PKCS#1 v1.5��䷽ʽ
 *  \method			ezRsaDecrypt
 *  \param[in]		pIn				����
 *  \param[in] 		iInLen			���ĳ���
 *  \param[out] 	pOut			����
 *  \param[in/out] 	iOutLen			���ĳ���
 *  \param[in] 		pN				Nֵ��16�����ַ���,"00112233FF"
 *  \param[in] 		pD				Dֵ��16�����ַ���
 *  \return							�ɹ���0,ʧ�ܷ�1
 */
int ezRsaDecrypt(const unsigned char *pIn, int iInLen, unsigned char *pOut, int *iOutLen, const char *pP, const char *pQ, 
				 const char *pN, const char *pD, const char *pE);

/** 
 *  \brief			�ڲ�������ת�ⲿ������
 *  \method			mkiE2ezE
 */
unsigned int mkiE2ezE(unsigned int mkernel_err);

/** 
 *  \brief			��ȡ��ǰģ���������
 *  \method			get_module_build_date
 */
int get_module_build_date(char* pbuf);

#ifdef __cplusplus
}
#endif

#endif	//_EZDEVSDK_UTILS_H