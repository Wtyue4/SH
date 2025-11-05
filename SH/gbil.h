
#ifndef GBIL_H
#define GBIL_H

#define IMPORTint extern "C" _declspec(dllimport) int __stdcall 
#define IMPORTchar extern "C" _declspec(dllimport) char* __stdcall 


/***************** �豸�ӿ� ******************/
// ���豸�������豸��ţ�
IMPORTint opendevice(int index = 0);
// ���豸�������豸ID��
IMPORTint opendevicebyid(int vid, int pid);
// ���豸�������豸·����
IMPORTint opendevicebypath(const char *path);
// ����豸�Ƿ�����
IMPORTint isconnected(void);
// �ر��豸
IMPORTint closedevice(void);
// ��λ�豸
IMPORTint resetdevice(void);
// ��ȡ�豸�ͺ�
IMPORTchar getmodel(void);
// ��ȡ�豸���к�
IMPORTchar getserialnumber(void);
// ��ȡ�豸��������
IMPORTchar getproductiondate(void);
// ��ȡ�豸�̼��汾��
IMPORTchar getfirmwareversion(void);


/***************** ���̽ӿ� ******************/
// ���¼�
IMPORTint presskeybyname(const char *key);
IMPORTint presskeybyvalue(int key);
// �ͷż�
IMPORTint releasekeybyname(const char *key);
IMPORTint releasekeybyvalue(int key);
// ���²��ͷż�
IMPORTint pressandreleasekeybyname(const char *key);
IMPORTint pressandreleasekeybyvalue(int key);
// �жϼ��̰���״̬
IMPORTint iskeypressedbyname(const char *key);
IMPORTint iskeypressedbyvalue(int key);
// �ͷ����м��̰���
IMPORTint releaseallkey(void);
// �����ַ���
IMPORTint inputstring(const char *str);
// ��ȡ��д����״̬
IMPORTint getcapslock(void);
// ��ȡ���ּ�������״̬
IMPORTint getnumlock(void);
// �����Ƿ����ִ�Сд
IMPORTint setcasesensitive(int cs);
// ���ð�����ʱ
IMPORTint setpresskeydelay(int mind, int maxd);
// ���������ַ������ʱ��
IMPORTint setinputstringintervaltime(int mind, int maxd);


/***************** ���ӿ� ******************/
// ��������
IMPORTint pressmousebutton(int mbtn);
// �ͷ�����
IMPORTint releasemousebutton(int mbtn);
// ���²��ͷ�����
IMPORTint pressandreleasemousebutton(int mbtn);
// �ж���갴��״̬
IMPORTint ismousebuttonpressed(int mbtn);
// �ͷ�������갴��
IMPORTint releaseallmousebutton(void);
// ����ƶ����
IMPORTint movemouserelative(int x, int y);
// �ƶ���굽ָ������
IMPORTint movemouseto(int x, int y);
// ��ȡ��굱ǰλ��
IMPORTint getmousex(void);
IMPORTint getmousey(void);
// �ƶ�������
IMPORTint movemousewheel(int z);
// ������갴����ʱ
IMPORTint setpressmousebuttondelay(int mind, int maxd);
// ��������ƶ���ʱ
IMPORTint setmousemovementdelay(int mind, int maxd);
// ��������ƶ��ٶ�
IMPORTint setmousemovementspeed(int speedvalue);
// ��������ƶ�ģʽ
IMPORTint setmousemovementmode(int modevalue);


/***************** ˫�������ӿ� ******************/
// ������굱ǰλ�ã���Բ�֧�־���ֵ����꣩
IMPORTint setmouseposition(int x, int y);
// ����������λ�ã����֧�־���ֵ����꣩
IMPORTint setmouseabsoluteposition(int x, int y);
// ���ñ��ض���Ļ�ֱ���
IMPORTint setclientscreenresolution(int width, int height);
// ��ȡ���ض���Ļ�ֱ���
IMPORTchar getclientscreenresolution(void);
// ѡ��ͻ���
IMPORTint selectclient(int addr);


/***************** ���ܹ��ӿ� ******************/
// ��ʼ�����ܹ�
IMPORTint initializedongle(void);
// ���ö�����
IMPORTint setreadpassword(const char* writepwd, const char* newpwd);
// ����д����
IMPORTint setwritepassword(const char* oldpwd, const char* newpwd);
// ���豸���ַ���
IMPORTchar readstring(const char* readpwd, int addr, int count);
// ���ַ���д���豸
IMPORTint writestring(const char* writepwd, const char* str, int addr);
// ������Կ
IMPORTint setcipher(const char* writepwd, const char* cipher);
// �����ַ���
IMPORTchar encryptstring(const char* str);
// �����ַ���
IMPORTchar decryptstring(const char* str);


/***************** ��Դ���ƽӿ� ******************/
// ���µ�Դ��ť
IMPORTint presspowerbutton(void);
// �ͷŵ�Դ��ť
IMPORTint releasepowerbutton(void);
// ���²��ͷŵ�Դ��ť
IMPORTint pressandreleasepowerbutton(void);
// ��ȡ��Դ����״̬
IMPORTint getpowerstatus(void);


/***************** �豸����ӿ� ******************/
// �޸��豸�ٶ�
IMPORTint setspeed(int speed);
// �޸��豸ID
IMPORTint setdeviceid(int vid, int pid);
// �ָ��豸Ĭ��ID
IMPORTint restoredeviceid(void);
// ���ò�Ʒ����
IMPORTint setproductname(const char *pn);
// ��ȡ��Ʒ����
IMPORTchar getproductionname(void);


#endif // !GBIL_H

