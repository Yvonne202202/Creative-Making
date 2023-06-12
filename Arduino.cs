using System;
using System.Diagnostics;
using System.IO.Ports;
using UnityEngine;
using Debug = UnityEngine.Debug;

public class Arduino : MonoBehaviour
{
    SerialPort serialPort;

    void Start()
    {
        serialPort = new SerialPort("COM10", 9600); // 根据您的 Arduino 连接端口和波特率进行调整
        serialPort.Open();

        // 游戏开始时发送信号 2 给 Arduino
        SendSignalToArduino(2);
    }

    void Update()
    {
        // 在 Update 方法中检查按下空格键的条件
       /* if (Input.GetKeyDown(KeyCode.Escape))
        {
            // 发送信号 3 给 Arduino
            SendSignalToArduino(3);
        }*/
    }

    void OnDestroy()
    {
        // 游戏结束时关闭串行端口并发送信号 3 给 Arduino
        if (serialPort != null && serialPort.IsOpen)
        {
            SendSignalToArduino(3);
            serialPort.Close();
        }
    }

    void SendSignalToArduino(int signal)
    {
        if (serialPort != null && serialPort.IsOpen)
        {
            string signalString = signal.ToString();
            serialPort.WriteLine(signalString);
            Debug.Log("Sent signal " + signalString + " to Arduino");
        }
    }
}
