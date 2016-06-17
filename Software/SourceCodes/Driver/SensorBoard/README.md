Readme for VehicleDetection\Software\SourceCodes\Driver\SensorBoard Directory

关于SensorBoard的源代码，其中包含：

void Mag_Sensor_Init（void）;//传感器板初始化

void Power_On(void);//开启电源

void Power_Off(void);//关闭电源

void LED_Off(void);//关闭LED

void LED_On(void);//开启LED

void ADC_Init(void);//:ADC初始化 

uint ADC_Conver(void);//ADC采集

void Mag_X_Init(void);//X轴信号路径初始化

void Mag_Y_Init(void);//Y轴信号路径初始化

void Mag_Z_Init(void);//Z轴信号路径初始化

uint Mag_X_Sample(void);//X轴数据采集

uint Mag_Y_Sample(void);//Y轴数据采集

uint Mag_Z_Sample(void);//Z轴数据采集

void Mag_XYZ_SR(void);//磁传感器复位

void Usart1_Int(uint baud);//串口初始化

void Usart1_Send(uchar data);//
