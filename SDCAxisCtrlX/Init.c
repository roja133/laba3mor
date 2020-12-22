
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	//������������� ���� SDC �������
	gAxis_X_HW.EncIf1_Typ = ncSDC_ENC16;
	gAxis_X_HW.DiDoIf_Typ = ncSDC_DIDO;
	gAxis_X_HW.DrvIf_Typ = ncSDC_DRVSERVO16;
	//������������� ����� ����������
	strcpy(gAxis_X_HW.EncIf1_Name, "gAxis_X_EncIf");
	strcpy(gAxis_X_HW.DrvIf_Name, "gAxis_X_DrvIf");
	strcpy(gAxis_X_HW.DiDoIf_Name, "gAxis_X_DiDoIf");
	//strcpy(gAxis_X_HW.iPosHwEnd_Name, "gAxis_X_iPosHwEnd");
	//strcpy(gAxis_X_HW.DiDoIf_Name, "");
	
	//������������� ����� ���������� � ���������� ������
	gAxis_X_EncIf.iEncOK = 1;
	gAxis_X_DrvIf.iDrvOK = 1;
	gAxis_X_DrvIf.iStatusEnable = 1;
	gAxis_X_DiDoIf.iDriveReady = 1;
	
	fb_controller.k_p=8;
	fb_controller.k_i=20;
	fb_controller.dt=0.01;
	fb_controller.max_abs_value=24;
	enable=1;
}
