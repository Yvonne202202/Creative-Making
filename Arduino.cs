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
        serialPort = new SerialPort("COM10", 9600); // �������� Arduino ���Ӷ˿ںͲ����ʽ��е���
        serialPort.Open();

        // ��Ϸ��ʼʱ�����ź� 2 �� Arduino
        SendSignalToArduino(2);
    }

    void Update()
    {
        // �� Update �����м�鰴�¿ո��������
       /* if (Input.GetKeyDown(KeyCode.Escape))
        {
            // �����ź� 3 �� Arduino
            SendSignalToArduino(3);
        }*/
    }

    void OnDestroy()
    {
        // ��Ϸ����ʱ�رմ��ж˿ڲ������ź� 3 �� Arduino
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
