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

// Function: sub_002F9F78
// Address: 0x2f9f78 - 0x2fa0e0
void sub_002F9F78_0x2f9f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9F78_0x2f9f78");
#endif

    switch (ctx->pc) {
        case 0x2f9fc0u: goto label_2f9fc0;
        case 0x2f9fe8u: goto label_2f9fe8;
        case 0x2f9ff0u: goto label_2f9ff0;
        case 0x2fa008u: goto label_2fa008;
        case 0x2fa028u: goto label_2fa028;
        case 0x2fa04cu: goto label_2fa04c;
        case 0x2fa090u: goto label_2fa090;
        case 0x2fa0c0u: goto label_2fa0c0;
        default: break;
    }

    ctx->pc = 0x2f9f78u;

    // 0x2f9f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f9f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f9f7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f9f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9f80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f9f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f9f84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f9f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f9f88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9f88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9f8c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2f9f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2f9f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f9f94: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2f9f94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f9f98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f9f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f9f9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2f9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2f9fa0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2F9FA0u;
    {
        const bool branch_taken_0x2f9fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FA0u;
        // 0x2f9fa4: 0x240200dd  addiu       $v0, $zero, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fa0) {
            ctx->pc = 0x2F9FD0u;
            goto label_2f9fd0;
        }
    }
    ctx->pc = 0x2F9FA8u;
    // 0x2f9fa8: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2f9fa8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f9fac: 0x8e4400cc  lw          $a0, 0xCC($s2)
    ctx->pc = 0x2f9facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x2f9fb0: 0x10820044  beq         $a0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F9FB0u;
    {
        const bool branch_taken_0x2f9fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F9FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FB0u;
        // 0x2f9fb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fb0) {
            ctx->pc = 0x2FA0C4u;
            goto label_2fa0c4;
        }
    }
    ctx->pc = 0x2F9FB8u;
    // 0x2f9fb8: 0xc08a200  jal         func_228800
    ctx->pc = 0x2F9FB8u;
    SET_GPR_U32(ctx, 31, 0x2F9FC0u);
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x2F9FB8u, 0x2F9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FC0u;
label_2f9fc0:
    // 0x2f9fc0: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x2f9fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x2f9fc4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2f9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f9fc8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F9FC8u;
    {
        const bool branch_taken_0x2f9fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f9fc8) {
            ctx->pc = 0x2F9FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9FC8u;
            // 0x2f9fcc: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9FD8u;
            goto label_2f9fd8;
        }
    }
    ctx->pc = 0x2F9FD0u;
label_2f9fd0:
    // 0x2f9fd0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2F9FD0u;
    {
        const bool branch_taken_0x2f9fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FD0u;
        // 0x2f9fd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fd0) {
            ctx->pc = 0x2FA0C4u;
            goto label_2fa0c4;
        }
    }
    ctx->pc = 0x2F9FD8u;
label_2f9fd8:
    // 0x2f9fd8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F9FD8u;
    {
        const bool branch_taken_0x2f9fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FD8u;
        // 0x2f9fdc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9fd8) {
            ctx->pc = 0x2FA014u;
            goto label_2fa014;
        }
    }
    ctx->pc = 0x2F9FE0u;
    // 0x2f9fe0: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x2F9FE0u;
    SET_GPR_U32(ctx, 31, 0x2F9FE8u);
    ctx->pc = 0x2F9FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9FE0u;
    // 0x2f9fe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2F9FE0u, 0x2F9FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FE8u;
label_2f9fe8:
    // 0x2f9fe8: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x2F9FE8u;
    SET_GPR_U32(ctx, 31, 0x2F9FF0u);
    ctx->pc = 0x2F9FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9FE8u;
    // 0x2f9fec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2F9FE8u, 0x2F9FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9FF0u;
label_2f9ff0:
    // 0x2f9ff0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f9ff0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ff4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F9FF4u;
    {
        const bool branch_taken_0x2f9ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9FF4u;
        // 0x2f9ff8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ff4) {
            ctx->pc = 0x2FA014u;
            goto label_2fa014;
        }
    }
    ctx->pc = 0x2F9FFCu;
    // 0x2f9ffc: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x2f9ffcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x2fa000: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x2FA000u;
    SET_GPR_U32(ctx, 31, 0x2FA008u);
    ctx->pc = 0x2FA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA000u;
    // 0x2fa004: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x2FA000u, 0x2FA008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA008u;
label_2fa008:
    // 0x2fa008: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x2fa008u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x2fa00c: 0x3863000b  xori        $v1, $v1, 0xB
    ctx->pc = 0x2fa00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)11);
    // 0x2fa010: 0x3880a  movz        $s1, $zero, $v1
    ctx->pc = 0x2fa010u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_2fa014:
    // 0x2fa014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa018: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA018u;
    {
        const bool branch_taken_0x2fa018 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fa018) {
            ctx->pc = 0x2FA01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA018u;
            // 0x2fa01c: 0x86020014  lh          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA034u;
            goto label_2fa034;
        }
    }
    ctx->pc = 0x2FA020u;
    // 0x2fa020: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2FA020u;
    SET_GPR_U32(ctx, 31, 0x2FA028u);
    ctx->pc = 0x2FA024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA020u;
    // 0x2fa024: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x2FA020u, 0x2FA028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA028u;
label_2fa028:
    // 0x2fa028: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2FA028u;
    {
        const bool branch_taken_0x2fa028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA028u;
        // 0x2fa02c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa028) {
            ctx->pc = 0x2FA0C4u;
            goto label_2fa0c4;
        }
    }
    ctx->pc = 0x2FA030u;
    // 0x2fa030: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x2fa030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_2fa034:
    // 0x2fa034: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FA034u;
    {
        const bool branch_taken_0x2fa034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa034) {
            ctx->pc = 0x2FA038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA034u;
            // 0x2fa038: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA094u;
            goto label_2fa094;
        }
    }
    ctx->pc = 0x2FA03Cu;
    // 0x2fa03c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fa03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fa040: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fa040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fa044: 0xc089b98  jal         func_226E60
    ctx->pc = 0x2FA044u;
    SET_GPR_U32(ctx, 31, 0x2FA04Cu);
    ctx->pc = 0x2FA048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA044u;
    // 0x2fa048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2FA044u, 0x2FA04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA04Cu;
label_2fa04c:
    // 0x2fa04c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA04Cu;
    {
        const bool branch_taken_0x2fa04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa04c) {
            ctx->pc = 0x2FA050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA04Cu;
            // 0x2fa050: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA06Cu;
            goto label_2fa06c;
        }
    }
    ctx->pc = 0x2FA054u;
    // 0x2fa054: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x2fa054u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2fa058: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2fa058u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2fa05c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA05Cu;
    {
        const bool branch_taken_0x2fa05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA05Cu;
        // 0x2fa060: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa05c) {
            ctx->pc = 0x2FA06Cu;
            goto label_2fa06c;
        }
    }
    ctx->pc = 0x2FA064u;
    // 0x2fa064: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2fa064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2fa068: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fa068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2fa06c:
    // 0x2fa06c: 0x86050014  lh          $a1, 0x14($s0)
    ctx->pc = 0x2fa06cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fa070: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2fa070u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2fa074: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2fa074u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2fa078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa07c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fa07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fa080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa084: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2fa084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fa088: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2FA088u;
    SET_GPR_U32(ctx, 31, 0x2FA090u);
    ctx->pc = 0x2FA08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA088u;
    // 0x2fa08c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2FA088u, 0x2FA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA090u;
label_2fa090:
    // 0x2fa090: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2fa090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2fa094:
    // 0x2fa094: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA094u;
    {
        const bool branch_taken_0x2fa094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa094) {
            ctx->pc = 0x2FA098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA094u;
            // 0x2fa098: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA0B4u;
            goto label_2fa0b4;
        }
    }
    ctx->pc = 0x2FA09Cu;
    // 0x2fa09c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fa09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fa0a0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2fa0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2fa0a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fa0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fa0a8: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA0A8u;
    {
        const bool branch_taken_0x2fa0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2FA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0A8u;
        // 0x2fa0ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0a8) {
            ctx->pc = 0x2FA0C4u;
            goto label_2fa0c4;
        }
    }
    ctx->pc = 0x2FA0B0u;
    // 0x2fa0b0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2fa0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2fa0b4:
    // 0x2fa0b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fa0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa0b8: 0xc08c6b2  jal         func_231AC8
    ctx->pc = 0x2FA0B8u;
    SET_GPR_U32(ctx, 31, 0x2FA0C0u);
    ctx->pc = 0x2FA0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA0B8u;
    // 0x2fa0bc: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231AC8u, 0x2FA0B8u, 0x2FA0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0C0u;
label_2fa0c0:
    // 0x2fa0c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fa0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0c4:
    // 0x2fa0c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2fa0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fa0c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fa0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa0cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2fa0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fa0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa0d4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2fa0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fa0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0D8u;
        // 0x2fa0dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA0E0u;
}
