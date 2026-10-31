#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ADAC0
// Address: 0x2adac0 - 0x2adc70
void sub_002ADAC0_0x2adac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADAC0_0x2adac0");
#endif

    switch (ctx->pc) {
        case 0x2adb28u: goto label_2adb28;
        case 0x2adb48u: goto label_2adb48;
        case 0x2adb60u: goto label_2adb60;
        case 0x2adbccu: goto label_2adbcc;
        case 0x2adbd8u: goto label_2adbd8;
        case 0x2adbf4u: goto label_2adbf4;
        case 0x2adc00u: goto label_2adc00;
        default: break;
    }

    ctx->pc = 0x2adac0u;

    // 0x2adac0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2adac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2adac4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2adac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2adac8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2adac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2adacc: 0x6802b  sltu        $s0, $zero, $a2
    ctx->pc = 0x2adaccu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2adad0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2adad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2adad4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2adad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adad8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2adad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2adadc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2adadcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adae0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2adae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2adae4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2adae4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adae8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2adae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2adaec: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2adaecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adaf0: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2adaf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2adaf4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2adaf4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adaf8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2adaf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2adafc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2adafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2adb00: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2adb00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2adb04: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2adb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2adb08: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2adb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2adb0c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2adb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x2adb10: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2adb10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2adb14: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2adb14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2adb18: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADB18u;
    {
        const bool branch_taken_0x2adb18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB18u;
        // 0x2adb1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb18) {
            ctx->pc = 0x2ADB2Cu;
            goto label_2adb2c;
        }
    }
    ctx->pc = 0x2ADB20u;
    // 0x2adb20: 0xc0a9d4e  jal         func_2A7538
    ctx->pc = 0x2ADB20u;
    SET_GPR_U32(ctx, 31, 0x2ADB28u);
    ctx->pc = 0x2ADB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB20u;
    // 0x2adb24: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7538u, 0x2ADB20u, 0x2ADB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB28u;
label_2adb28:
    // 0x2adb28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2adb28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2adb2c:
    // 0x2adb2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2adb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2adb30: 0x3a430020  xori        $v1, $s2, 0x20
    ctx->pc = 0x2adb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)32);
    // 0x2adb34: 0x24429440  addiu       $v0, $v0, -0x6BC0
    ctx->pc = 0x2adb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x2adb38: 0x3a82b  sltu        $s5, $zero, $v1
    ctx->pc = 0x2adb38u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2adb3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2adb3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb40: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2adb40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb44: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2adb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2adb48:
    // 0x2adb48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2adb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2adb4c: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x2adb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
    // 0x2adb50: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2ADB50u;
    {
        const bool branch_taken_0x2adb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB50u;
        // 0x2adb54: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb50) {
            ctx->pc = 0x2ADC1Cu;
            goto label_2adc1c;
        }
    }
    ctx->pc = 0x2ADB58u;
    // 0x2adb58: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2ADB58u;
    SET_GPR_U32(ctx, 31, 0x2ADB60u);
    ctx->pc = 0x2ADB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB58u;
    // 0x2adb5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2ADB58u, 0x2ADB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADB60u;
label_2adb60:
    // 0x2adb60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2adb60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adb64: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2adb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2adb68: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2ADB68u;
    {
        const bool branch_taken_0x2adb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB68u;
        // 0x2adb6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb68) {
            ctx->pc = 0x2ADC18u;
            goto label_2adc18;
        }
    }
    ctx->pc = 0x2ADB70u;
    // 0x2adb70: 0x16c40008  bne         $s6, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADB70u;
    {
        const bool branch_taken_0x2adb70 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 4));
        if (branch_taken_0x2adb70) {
            ctx->pc = 0x2ADB94u;
            goto label_2adb94;
        }
    }
    ctx->pc = 0x2ADB78u;
    // 0x2adb78: 0x960200d0  lhu         $v0, 0xD0($s0)
    ctx->pc = 0x2adb78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x2adb7c: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x2ADB7Cu;
    {
        const bool branch_taken_0x2adb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adb7c) {
            ctx->pc = 0x2ADB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADB7Cu;
            // 0x2adb80: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADC1Cu;
            goto label_2adc1c;
        }
    }
    ctx->pc = 0x2ADB84u;
    // 0x2adb84: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x2adb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2adb88: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2adb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2adb8c: 0x50430023  beql        $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2ADB8Cu;
    {
        const bool branch_taken_0x2adb8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2adb8c) {
            ctx->pc = 0x2ADB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADB8Cu;
            // 0x2adb90: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADC1Cu;
            goto label_2adc1c;
        }
    }
    ctx->pc = 0x2ADB94u;
label_2adb94:
    // 0x2adb94: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2ADB94u;
    {
        const bool branch_taken_0x2adb94 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adb94) {
            ctx->pc = 0x2ADBC4u;
            goto label_2adbc4;
        }
    }
    ctx->pc = 0x2ADB9Cu;
    // 0x2adb9c: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x2adb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x2adba0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADBA0u;
    {
        const bool branch_taken_0x2adba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adba0) {
            ctx->pc = 0x2ADBC4u;
            goto label_2adbc4;
        }
    }
    ctx->pc = 0x2ADBA8u;
    // 0x2adba8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADBA8u;
    {
        const bool branch_taken_0x2adba8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADBA8u;
        // 0x2adbac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adba8) {
            ctx->pc = 0x2ADBBCu;
            goto label_2adbbc;
        }
    }
    ctx->pc = 0x2ADBB0u;
    // 0x2adbb0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2adbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2adbb4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2adbb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adbb8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x2adbb8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2adbbc:
    // 0x2adbbc: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2ADBBCu;
    {
        const bool branch_taken_0x2adbbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADBBCu;
        // 0x2adbc0: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adbbc) {
            ctx->pc = 0x2ADC1Cu;
            goto label_2adc1c;
        }
    }
    ctx->pc = 0x2ADBC4u;
label_2adbc4:
    // 0x2adbc4: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2ADBC4u;
    SET_GPR_U32(ctx, 31, 0x2ADBCCu);
    ctx->pc = 0x2ADBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBC4u;
    // 0x2adbc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2ADBC4u, 0x2ADBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBCCu;
label_2adbcc:
    // 0x2adbcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2adbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adbd0: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2ADBD0u;
    SET_GPR_U32(ctx, 31, 0x2ADBD8u);
    ctx->pc = 0x2ADBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBD0u;
    // 0x2adbd4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2ADBD0u, 0x2ADBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBD8u;
label_2adbd8:
    // 0x2adbd8: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x2adbd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2adbdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2adbdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adbe0: 0x0  nop
    ctx->pc = 0x2adbe0u;
    // NOP
    // 0x2adbe4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2ADBE4u;
    {
        const bool branch_taken_0x2adbe4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ADBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADBE4u;
        // 0x2adbe8: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adbe4) {
            ctx->pc = 0x2ADC1Cu;
            goto label_2adc1c;
        }
    }
    ctx->pc = 0x2ADBECu;
    // 0x2adbec: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2ADBECu;
    SET_GPR_U32(ctx, 31, 0x2ADBF4u);
    ctx->pc = 0x2ADBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBECu;
    // 0x2adbf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2ADBECu, 0x2ADBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADBF4u;
label_2adbf4:
    // 0x2adbf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2adbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adbf8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2ADBF8u;
    SET_GPR_U32(ctx, 31, 0x2ADC00u);
    ctx->pc = 0x2ADBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADBF8u;
    // 0x2adbfc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2ADBF8u, 0x2ADC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ADC00u;
label_2adc00:
    // 0x2adc00: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x2adc00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2adc04: 0x0  nop
    ctx->pc = 0x2adc04u;
    // NOP
    // 0x2adc08: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADC08u;
    {
        const bool branch_taken_0x2adc08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ADC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC08u;
        // 0x2adc0c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc08) {
            ctx->pc = 0x2ADC1Cu;
            goto label_2adc1c;
        }
    }
    ctx->pc = 0x2ADC10u;
    // 0x2adc10: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2adc10u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2adc14: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2adc14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2adc18:
    // 0x2adc18: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2adc18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2adc1c:
    // 0x2adc1c: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x2adc1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2adc20: 0x24849e40  addiu       $a0, $a0, -0x61C0
    ctx->pc = 0x2adc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942272));
    // 0x2adc24: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x2adc24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2adc28: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2ADC28u;
    {
        const bool branch_taken_0x2adc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adc28) {
            ctx->pc = 0x2ADC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ADC28u;
            // 0x2adc2c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ADB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2adb48;
        }
    }
    ctx->pc = 0x2ADC30u;
    // 0x2adc30: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2adc30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc34: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2adc34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2adc38: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2adc38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2adc3c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2adc3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2adc40: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2adc40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2adc44: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2adc44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2adc48: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2adc48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2adc4c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2adc4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2adc50: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2adc50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2adc54: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2adc54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2adc58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2adc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adc5c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2adc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2adc60: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2adc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2adc64: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADC64u;
        // 0x2adc68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADC6Cu;
    // 0x2adc6c: 0x0  nop
    ctx->pc = 0x2adc6cu;
    // NOP
    ctx->pc = 0x2adc70u;
}
