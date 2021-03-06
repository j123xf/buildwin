/*****************************************************************************
 * Module    : User
 * File      : user_config_6680M.h
 * Author    : junwen
 * Email     : NC
 * Function  : 用户 USER_6680M 自定义参数设置
 *****************************************************************************/
#ifndef USER_CONFIG_6680M_H
#define USER_CONFIG_6680M_H


/*****************************************************************************
 * Module    : 系统配置
 *****************************************************************************/
#define SYS_PKG                         PKG_QFN48_6680M //主控封装选择
#define SYS_CRY                         CRY_RC          //系统时钟源选择
#define MAKECODE_ID                     1               //升级时使用P13
#define SD_UPDATE_ID                    2               //SD升级使用P3口
#define MP3RES_ID                       0x01            //默认用英文语音资源


/*****************************************************************************
 * Module    : 主菜单及功能相关配置
 *****************************************************************************/
#define TASK_MUSIC_EN                   1   //是否打开MUSIC功能
#define TASK_AUX_EN                     1   //是否打开LINEIN功能
#define TASK_FM_EN                      1   //是否打开FM功能
#define TASK_USBDEV_EN                  1   //是否打开USB设备功能
#define TASK_POWEROFF_EN                1   //是否打开关机功能
#define TASK_BT_EN                      1   //是否打开蓝牙功能
#define TASK_LOUDSPEAKER_EN             0   //是否打开扩音器模块
#define TASK_MIC_EN                     1   //是否打开MIC录音模块
#define TASK_VOICE_EN                   1   //是否打开录音播放模块


/*****************************************************************************
 * Module    : 主题选择
 *****************************************************************************/
//整体主题，必须要有全套的主题才能选。否则请分别定制局部主题
#define THEME_SELECT                    NO_THEME


/*****************************************************************************
 * Module    : 系统提示音相关配置
 *****************************************************************************/
#define POWER_ON_VOICE                  1   //是否需要开机提示音
#define BT_RING_NUMBER                  1   //是否需要来电报号
#define VOICE_MODE_WARNING_MUSIC        1   //是否需要录音播放模式提示音
#define MIC_RECORD_WARNING_MUSIC        1   //是否需要录音模式提示音
#define LOUDSPEAKER_WARNING_MUSIC       1   //是否需要扩音器模式提示音
#define USB_DEVICE_WARNING_MUSIC        1   //是否需要USB设备模式提示音


/*****************************************************************************
 * Module    : Music模块相关配置
 *****************************************************************************/
#define AUTO_CHANGE_DEVICE              1   //双设备时自动切换设备
#define K_MODE_CHANGE_DEVICE            1   //双设备时使用模式键切换设备
#define MUSIC_MODE_AUTO                 1   //插入设备，自动切换到音乐播放
#define BREAK_POINT_EN                  1   //断点记忆


/*****************************************************************************
 * Module    : FM模块相关配置
 *****************************************************************************/
#define FM_TYPE                         FM_RTC6218  //FM类型选择
#define FMOSC_FREQ_SEL                  FMOSC_32K   //复用SDCLK作为FM时钟源时FM时钟频率选择
#define KU_PLAY_TO_SEEKCHANNEL          1           //是否使用短按播放键来搜台( 包括PALY 和 PLAY_S10)


/*****************************************************************************
 * Module    : AUX录音功能相关配置
 *****************************************************************************/
#define AUX_RECORD_EN                   1   //AUX是否需要录音
#define KU_PLAY_LINEIN_MUTE_EN          0   //LINEIN模式下是否使用短按播放键MUTE功放(包括PALY 和 PLAY_S10)


/*****************************************************************************
 * Module    : 蓝牙相关配置
 *****************************************************************************/
#define BT_TYPE                         BT6639
#define BT_UART_IO                      0   //蓝牙串口IO选择，0=P16 P17，1=P36 P37
#define BT_PWK_SEL                      1   //蓝牙使用P07唤醒
#define BT_CALL_PRIVATE                 0   //强制私密接听
#define KU_PLAY_ANSWER_AND_HANGUP       1   //是否使用短按播放键来接听和挂断电话(包括PALY 和 PLAY_S10)
#define BT_PHONE_SWITCH		            0   //通话时或正在拨出电话时是否需要手机与蓝牙接听切换
#define BT_NAME_WITH_ADDR               1   //蓝牙名称是否显示3位地址(调试用，例如：BW-BTBOX-***)
#define BTRST_REUSE_SDCMD               1   //是否复用SD_CMD作蓝牙复位脚


/*****************************************************************************
 * Module    : 系统细节配置
 *****************************************************************************/
#define MP3BT_DECT_EN                   0   //是否使用拨动开关开机检测MP3和BT的功能
#define MP3BT_DECT_REUSE_EN             0   //开关开机检测MP3和BT的IO是否复用其他IO
#define USE_P35_USBPOW_CTL              2   //是否使用P35控制USB供电
#define LED_BLUE_BLINK                  1   //是否使用蓝灯闪烁
#define KL_PLAY_S10_CHANGE_MODE         0   //是否使用长按 PLAY_S10 键切换模式(不包括 PLAY 键)
#define POWERON_TO_FM                   0   //是否需要开机检测进入FM
#define FMOSC_REUSE_SDCLK               1   //是否复用SDCLK作为FM时钟源(主要用于无晶振)
#define IICCLK_REUSE_USB                1   //IICCLK是否与USB复用(主要用于无晶振，SDCLK复用推12M时钟时)
#define IICDAT_REUSE_SDDAT              1   //IICDAT是否与SDDAT复用(主要用于无晶振，SDCLK复用推12M时钟时)
#define FM_SET_VOL_CHANGE_BANK          0   //FM模式下调节音量时是否需要切BANK
#define AUTO_STANDBY_EN                 0   //长时间无操作(时间由宏 STANDBY_TIME 控制)是否需要自动进入休眠待机
#define FM_VOUT_THROUGH_MCU             0   //FM_VOUT是否经过主控
#define SD_DECT_REUSE_ADKEY             1   //是否复用ADKEY检测SD卡
#define AUX_DECT_REUSE_ADKEY            1   //是否复用ADKEY检测LINE IN插入
#define LINEIN_DETECT_EN                1   //是否需要LineIn插入检测
#define RECORD_EN                       1   //录音功能总开关。为0时关闭所有的录音功能


/*****************************************************************************
 * Module    : 按键及外设IO配置
 *****************************************************************************/
//ADKey的使用，0为使用IOKey，1为1组ADKey，2为2组ADKey
#define USE_ADKEY                       1

//选择第1组ADKEY的IO
#define ADKEY_PORT                      ADKEY_P13

//sd_port值:0: P20 P21 P27,    1: P20 P21 P27, clk复用检测,    2: P30 P31 P32,    3: P30 P31 P32, clk复用检测
#define SD_PORT_SEL                     2

//是否使用P01作串口打印调试
#define DEBUG_UART_SEL                  1

//ADKEY键值表
#define KEY1_NUM                        4
#define KEY1_ADC                        0x14, 0x3E, 0x64, 0xA2, 0xFF
#define KEY1_VAL                        T_KEY_NEXT_S10, T_KEY_PLAY_S10, T_KEY_PREV_S10, T_KEY_MODE, NO_KEY
#define ADC_SD_LINE_IN                  0xCD
#define ADC_SD_IN                       0xDE
#define ADC_LINE_IN                     0xF3

//是否为接听键，用于中止铃声
#define IS_HSF_KEY(k)                   (k == KU_PLAY_S10)


/*****************************************************************************
 * Module    :AUX通道配置
 *****************************************************************************/
//定制MIC的通道
#define MIC_CHANNEL_SEL                 MCHANNEL_3

//定制FM的通道
#define FM_CHANNEL_SEL                  CHANNEL_11

//定制AUX的通道
#define AUX_CHANNEL_SEL                 CHANNEL_71


/*****************************************************************************
 * Module    :IIC IO配置
 *****************************************************************************/
#define IIC_IO_SET
#define IIC_DATA                        2       //P32
#define IIC_DATA_CLK_OUT()              USB_DM_OUTPUT(); P3DIR |= BIT(IIC_DATA); P3PU0 |= BIT(IIC_DATA*2+1); P3PU0 &= ~BIT(IIC_DATA*2)
#define IIC_DATA_IN()                   P3DIR |= BIT(IIC_DATA); P3PD0 &= ~(BIT(IIC_DATA*2+1)|BIT(IIC_DATA*2)); P3PU0 &= ~BIT(IIC_DATA*2+1); P3PU0 |= BIT(IIC_DATA*2)
#define IIC_DATA_OUT()
#define IIC_DATA_HIGH()                 P3DIR |= BIT(IIC_DATA); P3PD0 &= ~(BIT(IIC_DATA*2+1)|BIT(IIC_DATA*2)); P3PU0 |= BIT(IIC_DATA*2+1); P3PU0 &= ~BIT(IIC_DATA*2)
#define IIC_DATA_LOW()                  P3DIR |= BIT(IIC_DATA); P3PU0 &= ~(BIT(IIC_DATA*2+1)|BIT(IIC_DATA*2)); P3PD0 |= BIT(IIC_DATA*2+1); P3PD0 &= ~BIT(IIC_DATA*2)
#define IIC_DATA_CLK_HIGH()             USB_DM_HIHG(); IIC_DATA_HIGH()
#define IIC_CLK_HIGH()                  USB_DM_HIHG()
#define IIC_CLK_LOW()                   USB_DM_LOW()
#define IIC_DATA_IS_HIGH()              (P3 & BIT(IIC_DATA))


/*****************************************************************************
 * Module    :LED IO配置
 *****************************************************************************/
//蓝色LED
#define LED_BLUE                        7
#define LED_BLUE_INIT()                 P0DIR &= ~BIT(LED_BLUE);P0 &= ~BIT(LED_BLUE)
#define LED_BLUE_ON()                   P0 |= BIT(LED_BLUE)
#define LED_BLUE_OFF()                  P0 &= ~BIT(LED_BLUE)
#define LED_BLUE_TOG()                  P0 ^= BIT(LED_BLUE)
#define LED_BLUE_IS_ON()                (P0 & BIT(LED_BLUE))


/*****************************************************************************
 * Module    : 蓝牙相关IO配置
 *****************************************************************************/
//#define BT_SLEEP_IO_SET
//#define BT_IS_SLEEP()                   (P0 & BIT(7))
//#define BT_IS_SLEEP_INIT()              IE_EA = 0; P0DIR |= BIT(7);\
                                        asm("nop");asm("nop");asm("nop");asm("nop");\
                                        asm("nop");asm("nop");asm("nop");asm("nop");
//#define BT_IS_SLEEP_END()               P0DIR &= ~BIT(7); IE_EA = 1;

//蓝牙模块复位 IO
//#define BT_RESET_IO_SET
//#define BT_RST_INIT()                   SD_CMD_DIR_OUT();
//#define BT_RST_LOW()                    SD_CMD_CLR();
//#define BT_RST_HIGH()                   SD_CMD_SET();


/*****************************************************************************
 * Module    : 其它杂项IO相关配置
 *****************************************************************************/
//上电时BT/MP3检测
//#define MP3BT_DECT_INIT()               P0DIR |= BIT(5);P0PU0 |= BIT(5);\
                                        asm("nop");asm("nop");asm("nop");asm("nop");\
                                        asm("nop");asm("nop");asm("nop");asm("nop");
//#define MP3BT_DECT_IS_BT()              (P0 & BIT(5))
//#define MP3BT_DECT_END()                P0PU0 &= ~BIT(5);P0DIR &= ~BIT(5)

//MUTE功放控制
#define MUSIC_MUTE()                    P1DIR &= ~BIT(2); P1 |= BIT(2);
#define MUSIC_UNMUTE()                  P1DIR &= ~BIT(2); P1 &= ~BIT(2);


/*****************************************************************************
 * Module    : 休眠及唤醒IO相关配置
 *****************************************************************************/
#define IO_SLEEP()                      {P1DIR &= ~BIT(3); P1 &= ~BIT(3);LED_BLUE_OFF();}
#define IO_WAKEUP()                     {P1DIR |= BIT(3);}
#define IS_KEY_WAKEUP()                 !(P1 & BIT(3))


#endif
