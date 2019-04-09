#pragma once

#include "Object.h"
#include "Camera.h"

class CShader;
class CUI : public CGameObject
{
public:
	CUI(ID3D12Device *pd3dDevice, ID3D12GraphicsCommandList *pd3dCommandList, ID3D12RootSignature *pd3dGraphicsRootSignature, int nWidth, int nLength, XMFLOAT3 xmfPosition);
	~CUI();
	void SetCbvGPUDescriptorHandle(D3D12_GPU_DESCRIPTOR_HANDLE d3dCbvGPUDescriptorHandle) { m_d3dCbvGPUDescriptorHandle = d3dCbvGPUDescriptorHandle; }
	void SetCbvGPUDescriptorHandlePtr(UINT64 nCbvGPUDescriptorHandlePtr) { m_d3dCbvGPUDescriptorHandle.ptr = nCbvGPUDescriptorHandlePtr; }

	void FollowCamera();
public:
	int							m_nWidth;
	int							m_nLength;
	CCamera*						m_pCamera;
	CPlayer*						m_pPlayer = NULL;

	D3D12_GPU_DESCRIPTOR_HANDLE		m_d3dCbvGPUDescriptorHandle;

};

