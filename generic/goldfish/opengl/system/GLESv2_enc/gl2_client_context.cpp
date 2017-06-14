// Generated Code - DO NOT EDIT !!
// generated by 'emugen'


#include <string.h>
#include "gl2_client_context.h"


#include <stdio.h>

int gl2_client_context_t::initDispatchByName(void *(*getProc)(const char *, void *userData), void *userData)
{
	glActiveTexture = (glActiveTexture_client_proc_t) getProc("glActiveTexture", userData);
	glAttachShader = (glAttachShader_client_proc_t) getProc("glAttachShader", userData);
	glBindAttribLocation = (glBindAttribLocation_client_proc_t) getProc("glBindAttribLocation", userData);
	glBindBuffer = (glBindBuffer_client_proc_t) getProc("glBindBuffer", userData);
	glBindFramebuffer = (glBindFramebuffer_client_proc_t) getProc("glBindFramebuffer", userData);
	glBindRenderbuffer = (glBindRenderbuffer_client_proc_t) getProc("glBindRenderbuffer", userData);
	glBindTexture = (glBindTexture_client_proc_t) getProc("glBindTexture", userData);
	glBlendColor = (glBlendColor_client_proc_t) getProc("glBlendColor", userData);
	glBlendEquation = (glBlendEquation_client_proc_t) getProc("glBlendEquation", userData);
	glBlendEquationSeparate = (glBlendEquationSeparate_client_proc_t) getProc("glBlendEquationSeparate", userData);
	glBlendFunc = (glBlendFunc_client_proc_t) getProc("glBlendFunc", userData);
	glBlendFuncSeparate = (glBlendFuncSeparate_client_proc_t) getProc("glBlendFuncSeparate", userData);
	glBufferData = (glBufferData_client_proc_t) getProc("glBufferData", userData);
	glBufferSubData = (glBufferSubData_client_proc_t) getProc("glBufferSubData", userData);
	glCheckFramebufferStatus = (glCheckFramebufferStatus_client_proc_t) getProc("glCheckFramebufferStatus", userData);
	glClear = (glClear_client_proc_t) getProc("glClear", userData);
	glClearColor = (glClearColor_client_proc_t) getProc("glClearColor", userData);
	glClearDepthf = (glClearDepthf_client_proc_t) getProc("glClearDepthf", userData);
	glClearStencil = (glClearStencil_client_proc_t) getProc("glClearStencil", userData);
	glColorMask = (glColorMask_client_proc_t) getProc("glColorMask", userData);
	glCompileShader = (glCompileShader_client_proc_t) getProc("glCompileShader", userData);
	glCompressedTexImage2D = (glCompressedTexImage2D_client_proc_t) getProc("glCompressedTexImage2D", userData);
	glCompressedTexSubImage2D = (glCompressedTexSubImage2D_client_proc_t) getProc("glCompressedTexSubImage2D", userData);
	glCopyTexImage2D = (glCopyTexImage2D_client_proc_t) getProc("glCopyTexImage2D", userData);
	glCopyTexSubImage2D = (glCopyTexSubImage2D_client_proc_t) getProc("glCopyTexSubImage2D", userData);
	glCreateProgram = (glCreateProgram_client_proc_t) getProc("glCreateProgram", userData);
	glCreateShader = (glCreateShader_client_proc_t) getProc("glCreateShader", userData);
	glCullFace = (glCullFace_client_proc_t) getProc("glCullFace", userData);
	glDeleteBuffers = (glDeleteBuffers_client_proc_t) getProc("glDeleteBuffers", userData);
	glDeleteFramebuffers = (glDeleteFramebuffers_client_proc_t) getProc("glDeleteFramebuffers", userData);
	glDeleteProgram = (glDeleteProgram_client_proc_t) getProc("glDeleteProgram", userData);
	glDeleteRenderbuffers = (glDeleteRenderbuffers_client_proc_t) getProc("glDeleteRenderbuffers", userData);
	glDeleteShader = (glDeleteShader_client_proc_t) getProc("glDeleteShader", userData);
	glDeleteTextures = (glDeleteTextures_client_proc_t) getProc("glDeleteTextures", userData);
	glDepthFunc = (glDepthFunc_client_proc_t) getProc("glDepthFunc", userData);
	glDepthMask = (glDepthMask_client_proc_t) getProc("glDepthMask", userData);
	glDepthRangef = (glDepthRangef_client_proc_t) getProc("glDepthRangef", userData);
	glDetachShader = (glDetachShader_client_proc_t) getProc("glDetachShader", userData);
	glDisable = (glDisable_client_proc_t) getProc("glDisable", userData);
	glDisableVertexAttribArray = (glDisableVertexAttribArray_client_proc_t) getProc("glDisableVertexAttribArray", userData);
	glDrawArrays = (glDrawArrays_client_proc_t) getProc("glDrawArrays", userData);
	glDrawElements = (glDrawElements_client_proc_t) getProc("glDrawElements", userData);
	glEnable = (glEnable_client_proc_t) getProc("glEnable", userData);
	glEnableVertexAttribArray = (glEnableVertexAttribArray_client_proc_t) getProc("glEnableVertexAttribArray", userData);
	glFinish = (glFinish_client_proc_t) getProc("glFinish", userData);
	glFlush = (glFlush_client_proc_t) getProc("glFlush", userData);
	glFramebufferRenderbuffer = (glFramebufferRenderbuffer_client_proc_t) getProc("glFramebufferRenderbuffer", userData);
	glFramebufferTexture2D = (glFramebufferTexture2D_client_proc_t) getProc("glFramebufferTexture2D", userData);
	glFrontFace = (glFrontFace_client_proc_t) getProc("glFrontFace", userData);
	glGenBuffers = (glGenBuffers_client_proc_t) getProc("glGenBuffers", userData);
	glGenerateMipmap = (glGenerateMipmap_client_proc_t) getProc("glGenerateMipmap", userData);
	glGenFramebuffers = (glGenFramebuffers_client_proc_t) getProc("glGenFramebuffers", userData);
	glGenRenderbuffers = (glGenRenderbuffers_client_proc_t) getProc("glGenRenderbuffers", userData);
	glGenTextures = (glGenTextures_client_proc_t) getProc("glGenTextures", userData);
	glGetActiveAttrib = (glGetActiveAttrib_client_proc_t) getProc("glGetActiveAttrib", userData);
	glGetActiveUniform = (glGetActiveUniform_client_proc_t) getProc("glGetActiveUniform", userData);
	glGetAttachedShaders = (glGetAttachedShaders_client_proc_t) getProc("glGetAttachedShaders", userData);
	glGetAttribLocation = (glGetAttribLocation_client_proc_t) getProc("glGetAttribLocation", userData);
	glGetBooleanv = (glGetBooleanv_client_proc_t) getProc("glGetBooleanv", userData);
	glGetBufferParameteriv = (glGetBufferParameteriv_client_proc_t) getProc("glGetBufferParameteriv", userData);
	glGetError = (glGetError_client_proc_t) getProc("glGetError", userData);
	glGetFloatv = (glGetFloatv_client_proc_t) getProc("glGetFloatv", userData);
	glGetFramebufferAttachmentParameteriv = (glGetFramebufferAttachmentParameteriv_client_proc_t) getProc("glGetFramebufferAttachmentParameteriv", userData);
	glGetIntegerv = (glGetIntegerv_client_proc_t) getProc("glGetIntegerv", userData);
	glGetProgramiv = (glGetProgramiv_client_proc_t) getProc("glGetProgramiv", userData);
	glGetProgramInfoLog = (glGetProgramInfoLog_client_proc_t) getProc("glGetProgramInfoLog", userData);
	glGetRenderbufferParameteriv = (glGetRenderbufferParameteriv_client_proc_t) getProc("glGetRenderbufferParameteriv", userData);
	glGetShaderiv = (glGetShaderiv_client_proc_t) getProc("glGetShaderiv", userData);
	glGetShaderInfoLog = (glGetShaderInfoLog_client_proc_t) getProc("glGetShaderInfoLog", userData);
	glGetShaderPrecisionFormat = (glGetShaderPrecisionFormat_client_proc_t) getProc("glGetShaderPrecisionFormat", userData);
	glGetShaderSource = (glGetShaderSource_client_proc_t) getProc("glGetShaderSource", userData);
	glGetString = (glGetString_client_proc_t) getProc("glGetString", userData);
	glGetTexParameterfv = (glGetTexParameterfv_client_proc_t) getProc("glGetTexParameterfv", userData);
	glGetTexParameteriv = (glGetTexParameteriv_client_proc_t) getProc("glGetTexParameteriv", userData);
	glGetUniformfv = (glGetUniformfv_client_proc_t) getProc("glGetUniformfv", userData);
	glGetUniformiv = (glGetUniformiv_client_proc_t) getProc("glGetUniformiv", userData);
	glGetUniformLocation = (glGetUniformLocation_client_proc_t) getProc("glGetUniformLocation", userData);
	glGetVertexAttribfv = (glGetVertexAttribfv_client_proc_t) getProc("glGetVertexAttribfv", userData);
	glGetVertexAttribiv = (glGetVertexAttribiv_client_proc_t) getProc("glGetVertexAttribiv", userData);
	glGetVertexAttribPointerv = (glGetVertexAttribPointerv_client_proc_t) getProc("glGetVertexAttribPointerv", userData);
	glHint = (glHint_client_proc_t) getProc("glHint", userData);
	glIsBuffer = (glIsBuffer_client_proc_t) getProc("glIsBuffer", userData);
	glIsEnabled = (glIsEnabled_client_proc_t) getProc("glIsEnabled", userData);
	glIsFramebuffer = (glIsFramebuffer_client_proc_t) getProc("glIsFramebuffer", userData);
	glIsProgram = (glIsProgram_client_proc_t) getProc("glIsProgram", userData);
	glIsRenderbuffer = (glIsRenderbuffer_client_proc_t) getProc("glIsRenderbuffer", userData);
	glIsShader = (glIsShader_client_proc_t) getProc("glIsShader", userData);
	glIsTexture = (glIsTexture_client_proc_t) getProc("glIsTexture", userData);
	glLineWidth = (glLineWidth_client_proc_t) getProc("glLineWidth", userData);
	glLinkProgram = (glLinkProgram_client_proc_t) getProc("glLinkProgram", userData);
	glPixelStorei = (glPixelStorei_client_proc_t) getProc("glPixelStorei", userData);
	glPolygonOffset = (glPolygonOffset_client_proc_t) getProc("glPolygonOffset", userData);
	glReadPixels = (glReadPixels_client_proc_t) getProc("glReadPixels", userData);
	glReleaseShaderCompiler = (glReleaseShaderCompiler_client_proc_t) getProc("glReleaseShaderCompiler", userData);
	glRenderbufferStorage = (glRenderbufferStorage_client_proc_t) getProc("glRenderbufferStorage", userData);
	glSampleCoverage = (glSampleCoverage_client_proc_t) getProc("glSampleCoverage", userData);
	glScissor = (glScissor_client_proc_t) getProc("glScissor", userData);
	glShaderBinary = (glShaderBinary_client_proc_t) getProc("glShaderBinary", userData);
	glShaderSource = (glShaderSource_client_proc_t) getProc("glShaderSource", userData);
	glStencilFunc = (glStencilFunc_client_proc_t) getProc("glStencilFunc", userData);
	glStencilFuncSeparate = (glStencilFuncSeparate_client_proc_t) getProc("glStencilFuncSeparate", userData);
	glStencilMask = (glStencilMask_client_proc_t) getProc("glStencilMask", userData);
	glStencilMaskSeparate = (glStencilMaskSeparate_client_proc_t) getProc("glStencilMaskSeparate", userData);
	glStencilOp = (glStencilOp_client_proc_t) getProc("glStencilOp", userData);
	glStencilOpSeparate = (glStencilOpSeparate_client_proc_t) getProc("glStencilOpSeparate", userData);
	glTexImage2D = (glTexImage2D_client_proc_t) getProc("glTexImage2D", userData);
	glTexParameterf = (glTexParameterf_client_proc_t) getProc("glTexParameterf", userData);
	glTexParameterfv = (glTexParameterfv_client_proc_t) getProc("glTexParameterfv", userData);
	glTexParameteri = (glTexParameteri_client_proc_t) getProc("glTexParameteri", userData);
	glTexParameteriv = (glTexParameteriv_client_proc_t) getProc("glTexParameteriv", userData);
	glTexSubImage2D = (glTexSubImage2D_client_proc_t) getProc("glTexSubImage2D", userData);
	glUniform1f = (glUniform1f_client_proc_t) getProc("glUniform1f", userData);
	glUniform1fv = (glUniform1fv_client_proc_t) getProc("glUniform1fv", userData);
	glUniform1i = (glUniform1i_client_proc_t) getProc("glUniform1i", userData);
	glUniform1iv = (glUniform1iv_client_proc_t) getProc("glUniform1iv", userData);
	glUniform2f = (glUniform2f_client_proc_t) getProc("glUniform2f", userData);
	glUniform2fv = (glUniform2fv_client_proc_t) getProc("glUniform2fv", userData);
	glUniform2i = (glUniform2i_client_proc_t) getProc("glUniform2i", userData);
	glUniform2iv = (glUniform2iv_client_proc_t) getProc("glUniform2iv", userData);
	glUniform3f = (glUniform3f_client_proc_t) getProc("glUniform3f", userData);
	glUniform3fv = (glUniform3fv_client_proc_t) getProc("glUniform3fv", userData);
	glUniform3i = (glUniform3i_client_proc_t) getProc("glUniform3i", userData);
	glUniform3iv = (glUniform3iv_client_proc_t) getProc("glUniform3iv", userData);
	glUniform4f = (glUniform4f_client_proc_t) getProc("glUniform4f", userData);
	glUniform4fv = (glUniform4fv_client_proc_t) getProc("glUniform4fv", userData);
	glUniform4i = (glUniform4i_client_proc_t) getProc("glUniform4i", userData);
	glUniform4iv = (glUniform4iv_client_proc_t) getProc("glUniform4iv", userData);
	glUniformMatrix2fv = (glUniformMatrix2fv_client_proc_t) getProc("glUniformMatrix2fv", userData);
	glUniformMatrix3fv = (glUniformMatrix3fv_client_proc_t) getProc("glUniformMatrix3fv", userData);
	glUniformMatrix4fv = (glUniformMatrix4fv_client_proc_t) getProc("glUniformMatrix4fv", userData);
	glUseProgram = (glUseProgram_client_proc_t) getProc("glUseProgram", userData);
	glValidateProgram = (glValidateProgram_client_proc_t) getProc("glValidateProgram", userData);
	glVertexAttrib1f = (glVertexAttrib1f_client_proc_t) getProc("glVertexAttrib1f", userData);
	glVertexAttrib1fv = (glVertexAttrib1fv_client_proc_t) getProc("glVertexAttrib1fv", userData);
	glVertexAttrib2f = (glVertexAttrib2f_client_proc_t) getProc("glVertexAttrib2f", userData);
	glVertexAttrib2fv = (glVertexAttrib2fv_client_proc_t) getProc("glVertexAttrib2fv", userData);
	glVertexAttrib3f = (glVertexAttrib3f_client_proc_t) getProc("glVertexAttrib3f", userData);
	glVertexAttrib3fv = (glVertexAttrib3fv_client_proc_t) getProc("glVertexAttrib3fv", userData);
	glVertexAttrib4f = (glVertexAttrib4f_client_proc_t) getProc("glVertexAttrib4f", userData);
	glVertexAttrib4fv = (glVertexAttrib4fv_client_proc_t) getProc("glVertexAttrib4fv", userData);
	glVertexAttribPointer = (glVertexAttribPointer_client_proc_t) getProc("glVertexAttribPointer", userData);
	glViewport = (glViewport_client_proc_t) getProc("glViewport", userData);
	glEGLImageTargetTexture2DOES = (glEGLImageTargetTexture2DOES_client_proc_t) getProc("glEGLImageTargetTexture2DOES", userData);
	glEGLImageTargetRenderbufferStorageOES = (glEGLImageTargetRenderbufferStorageOES_client_proc_t) getProc("glEGLImageTargetRenderbufferStorageOES", userData);
	glGetProgramBinaryOES = (glGetProgramBinaryOES_client_proc_t) getProc("glGetProgramBinaryOES", userData);
	glProgramBinaryOES = (glProgramBinaryOES_client_proc_t) getProc("glProgramBinaryOES", userData);
	glMapBufferOES = (glMapBufferOES_client_proc_t) getProc("glMapBufferOES", userData);
	glUnmapBufferOES = (glUnmapBufferOES_client_proc_t) getProc("glUnmapBufferOES", userData);
	glTexImage3DOES = (glTexImage3DOES_client_proc_t) getProc("glTexImage3DOES", userData);
	glTexSubImage3DOES = (glTexSubImage3DOES_client_proc_t) getProc("glTexSubImage3DOES", userData);
	glCopyTexSubImage3DOES = (glCopyTexSubImage3DOES_client_proc_t) getProc("glCopyTexSubImage3DOES", userData);
	glCompressedTexImage3DOES = (glCompressedTexImage3DOES_client_proc_t) getProc("glCompressedTexImage3DOES", userData);
	glCompressedTexSubImage3DOES = (glCompressedTexSubImage3DOES_client_proc_t) getProc("glCompressedTexSubImage3DOES", userData);
	glFramebufferTexture3DOES = (glFramebufferTexture3DOES_client_proc_t) getProc("glFramebufferTexture3DOES", userData);
	glBindVertexArrayOES = (glBindVertexArrayOES_client_proc_t) getProc("glBindVertexArrayOES", userData);
	glDeleteVertexArraysOES = (glDeleteVertexArraysOES_client_proc_t) getProc("glDeleteVertexArraysOES", userData);
	glGenVertexArraysOES = (glGenVertexArraysOES_client_proc_t) getProc("glGenVertexArraysOES", userData);
	glIsVertexArrayOES = (glIsVertexArrayOES_client_proc_t) getProc("glIsVertexArrayOES", userData);
	glDiscardFramebufferEXT = (glDiscardFramebufferEXT_client_proc_t) getProc("glDiscardFramebufferEXT", userData);
	glMultiDrawArraysEXT = (glMultiDrawArraysEXT_client_proc_t) getProc("glMultiDrawArraysEXT", userData);
	glMultiDrawElementsEXT = (glMultiDrawElementsEXT_client_proc_t) getProc("glMultiDrawElementsEXT", userData);
	glGetPerfMonitorGroupsAMD = (glGetPerfMonitorGroupsAMD_client_proc_t) getProc("glGetPerfMonitorGroupsAMD", userData);
	glGetPerfMonitorCountersAMD = (glGetPerfMonitorCountersAMD_client_proc_t) getProc("glGetPerfMonitorCountersAMD", userData);
	glGetPerfMonitorGroupStringAMD = (glGetPerfMonitorGroupStringAMD_client_proc_t) getProc("glGetPerfMonitorGroupStringAMD", userData);
	glGetPerfMonitorCounterStringAMD = (glGetPerfMonitorCounterStringAMD_client_proc_t) getProc("glGetPerfMonitorCounterStringAMD", userData);
	glGetPerfMonitorCounterInfoAMD = (glGetPerfMonitorCounterInfoAMD_client_proc_t) getProc("glGetPerfMonitorCounterInfoAMD", userData);
	glGenPerfMonitorsAMD = (glGenPerfMonitorsAMD_client_proc_t) getProc("glGenPerfMonitorsAMD", userData);
	glDeletePerfMonitorsAMD = (glDeletePerfMonitorsAMD_client_proc_t) getProc("glDeletePerfMonitorsAMD", userData);
	glSelectPerfMonitorCountersAMD = (glSelectPerfMonitorCountersAMD_client_proc_t) getProc("glSelectPerfMonitorCountersAMD", userData);
	glBeginPerfMonitorAMD = (glBeginPerfMonitorAMD_client_proc_t) getProc("glBeginPerfMonitorAMD", userData);
	glEndPerfMonitorAMD = (glEndPerfMonitorAMD_client_proc_t) getProc("glEndPerfMonitorAMD", userData);
	glGetPerfMonitorCounterDataAMD = (glGetPerfMonitorCounterDataAMD_client_proc_t) getProc("glGetPerfMonitorCounterDataAMD", userData);
	glRenderbufferStorageMultisampleIMG = (glRenderbufferStorageMultisampleIMG_client_proc_t) getProc("glRenderbufferStorageMultisampleIMG", userData);
	glFramebufferTexture2DMultisampleIMG = (glFramebufferTexture2DMultisampleIMG_client_proc_t) getProc("glFramebufferTexture2DMultisampleIMG", userData);
	glDeleteFencesNV = (glDeleteFencesNV_client_proc_t) getProc("glDeleteFencesNV", userData);
	glGenFencesNV = (glGenFencesNV_client_proc_t) getProc("glGenFencesNV", userData);
	glIsFenceNV = (glIsFenceNV_client_proc_t) getProc("glIsFenceNV", userData);
	glTestFenceNV = (glTestFenceNV_client_proc_t) getProc("glTestFenceNV", userData);
	glGetFenceivNV = (glGetFenceivNV_client_proc_t) getProc("glGetFenceivNV", userData);
	glFinishFenceNV = (glFinishFenceNV_client_proc_t) getProc("glFinishFenceNV", userData);
	glSetFenceNV = (glSetFenceNV_client_proc_t) getProc("glSetFenceNV", userData);
	glCoverageMaskNV = (glCoverageMaskNV_client_proc_t) getProc("glCoverageMaskNV", userData);
	glCoverageOperationNV = (glCoverageOperationNV_client_proc_t) getProc("glCoverageOperationNV", userData);
	glGetDriverControlsQCOM = (glGetDriverControlsQCOM_client_proc_t) getProc("glGetDriverControlsQCOM", userData);
	glGetDriverControlStringQCOM = (glGetDriverControlStringQCOM_client_proc_t) getProc("glGetDriverControlStringQCOM", userData);
	glEnableDriverControlQCOM = (glEnableDriverControlQCOM_client_proc_t) getProc("glEnableDriverControlQCOM", userData);
	glDisableDriverControlQCOM = (glDisableDriverControlQCOM_client_proc_t) getProc("glDisableDriverControlQCOM", userData);
	glExtGetTexturesQCOM = (glExtGetTexturesQCOM_client_proc_t) getProc("glExtGetTexturesQCOM", userData);
	glExtGetBuffersQCOM = (glExtGetBuffersQCOM_client_proc_t) getProc("glExtGetBuffersQCOM", userData);
	glExtGetRenderbuffersQCOM = (glExtGetRenderbuffersQCOM_client_proc_t) getProc("glExtGetRenderbuffersQCOM", userData);
	glExtGetFramebuffersQCOM = (glExtGetFramebuffersQCOM_client_proc_t) getProc("glExtGetFramebuffersQCOM", userData);
	glExtGetTexLevelParameterivQCOM = (glExtGetTexLevelParameterivQCOM_client_proc_t) getProc("glExtGetTexLevelParameterivQCOM", userData);
	glExtTexObjectStateOverrideiQCOM = (glExtTexObjectStateOverrideiQCOM_client_proc_t) getProc("glExtTexObjectStateOverrideiQCOM", userData);
	glExtGetTexSubImageQCOM = (glExtGetTexSubImageQCOM_client_proc_t) getProc("glExtGetTexSubImageQCOM", userData);
	glExtGetBufferPointervQCOM = (glExtGetBufferPointervQCOM_client_proc_t) getProc("glExtGetBufferPointervQCOM", userData);
	glExtGetShadersQCOM = (glExtGetShadersQCOM_client_proc_t) getProc("glExtGetShadersQCOM", userData);
	glExtGetProgramsQCOM = (glExtGetProgramsQCOM_client_proc_t) getProc("glExtGetProgramsQCOM", userData);
	glExtIsProgramBinaryQCOM = (glExtIsProgramBinaryQCOM_client_proc_t) getProc("glExtIsProgramBinaryQCOM", userData);
	glExtGetProgramBinarySourceQCOM = (glExtGetProgramBinarySourceQCOM_client_proc_t) getProc("glExtGetProgramBinarySourceQCOM", userData);
	glStartTilingQCOM = (glStartTilingQCOM_client_proc_t) getProc("glStartTilingQCOM", userData);
	glEndTilingQCOM = (glEndTilingQCOM_client_proc_t) getProc("glEndTilingQCOM", userData);
	glVertexAttribPointerData = (glVertexAttribPointerData_client_proc_t) getProc("glVertexAttribPointerData", userData);
	glVertexAttribPointerOffset = (glVertexAttribPointerOffset_client_proc_t) getProc("glVertexAttribPointerOffset", userData);
	glDrawElementsOffset = (glDrawElementsOffset_client_proc_t) getProc("glDrawElementsOffset", userData);
	glDrawElementsData = (glDrawElementsData_client_proc_t) getProc("glDrawElementsData", userData);
	glGetCompressedTextureFormats = (glGetCompressedTextureFormats_client_proc_t) getProc("glGetCompressedTextureFormats", userData);
	glShaderString = (glShaderString_client_proc_t) getProc("glShaderString", userData);
	glFinishRoundTrip = (glFinishRoundTrip_client_proc_t) getProc("glFinishRoundTrip", userData);
	return 0;
}

