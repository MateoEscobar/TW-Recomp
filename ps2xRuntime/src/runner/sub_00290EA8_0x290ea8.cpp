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

// Function: sub_00290EA8
// Address: 0x290ea8 - 0x290fd0
void sub_00290EA8_0x290ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290EA8_0x290ea8");
#endif

    switch (ctx->pc) {
        case 0x290ee0u: goto label_290ee0;
        case 0x290f08u: goto label_290f08;
        case 0x290f18u: goto label_290f18;
        case 0x290f28u: goto label_290f28;
        case 0x290f40u: goto label_290f40;
        case 0x290f54u: goto label_290f54;
        case 0x290f94u: goto label_290f94;
        case 0x290fa0u: goto label_290fa0;
        default: break;
    }

    ctx->pc = 0x290ea8u;

    // 0x290ea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x290ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x290eac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x290eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x290eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x290eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x290eb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290eb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290eb8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x290eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x290ebc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x290ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290ec0: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
    ctx->pc = 0x290EC0u;
    {
        const bool branch_taken_0x290ec0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x290EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EC0u;
        // 0x290ec4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ec0) {
            ctx->pc = 0x290FACu;
            goto label_290fac;
        }
    }
    ctx->pc = 0x290EC8u;
    // 0x290ec8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x290ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x290ecc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x290eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x290ed0: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x290ED0u;
    {
        const bool branch_taken_0x290ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x290ed0) {
            ctx->pc = 0x290F6Cu;
            goto label_290f6c;
        }
    }
    ctx->pc = 0x290ED8u;
    // 0x290ed8: 0xc087502  jal         func_21D408
    ctx->pc = 0x290ED8u;
    SET_GPR_U32(ctx, 31, 0x290EE0u);
    ctx->pc = 0x290EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290ED8u;
    // 0x290edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x290ED8u, 0x290EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290EE0u;
label_290ee0:
    // 0x290ee0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x290ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290ee4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x290ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x290ee8: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x290EE8u;
    {
        const bool branch_taken_0x290ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EE8u;
        // 0x290eec: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ee8) {
            ctx->pc = 0x290F6Cu;
            goto label_290f6c;
        }
    }
    ctx->pc = 0x290EF0u;
    // 0x290ef0: 0x8e22020c  lw          $v0, 0x20C($s1)
    ctx->pc = 0x290ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x290ef4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x290ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x290ef8: 0x1464001c  bne         $v1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x290EF8u;
    {
        const bool branch_taken_0x290ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x290EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EF8u;
        // 0x290efc: 0x26300124  addiu       $s0, $s1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290ef8) {
            ctx->pc = 0x290F6Cu;
            goto label_290f6c;
        }
    }
    ctx->pc = 0x290F00u;
    // 0x290f00: 0xc0e409a  jal         func_390268
    ctx->pc = 0x290F00u;
    SET_GPR_U32(ctx, 31, 0x290F08u);
    ctx->pc = 0x290F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F00u;
    // 0x290f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x290F00u, 0x290F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F08u;
label_290f08:
    // 0x290f08: 0x10520018  beq         $v0, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x290F08u;
    {
        const bool branch_taken_0x290f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x290f08) {
            ctx->pc = 0x290F6Cu;
            goto label_290f6c;
        }
    }
    ctx->pc = 0x290F10u;
    // 0x290f10: 0xc0e409a  jal         func_390268
    ctx->pc = 0x290F10u;
    SET_GPR_U32(ctx, 31, 0x290F18u);
    ctx->pc = 0x290F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F10u;
    // 0x290f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x290F10u, 0x290F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F18u;
label_290f18:
    // 0x290f18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290F18u;
    {
        const bool branch_taken_0x290f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290f18) {
            ctx->pc = 0x290F38u;
            goto label_290f38;
        }
    }
    ctx->pc = 0x290F20u;
    // 0x290f20: 0xc0e409a  jal         func_390268
    ctx->pc = 0x290F20u;
    SET_GPR_U32(ctx, 31, 0x290F28u);
    ctx->pc = 0x290F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F20u;
    // 0x290f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x290F20u, 0x290F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F28u;
label_290f28:
    // 0x290f28: 0x804301b0  lb          $v1, 0x1B0($v0)
    ctx->pc = 0x290f28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x290f2c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x290f2cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x290f30: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x290F30u;
    {
        const bool branch_taken_0x290f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x290f30) {
            ctx->pc = 0x290F6Cu;
            goto label_290f6c;
        }
    }
    ctx->pc = 0x290F38u;
label_290f38:
    // 0x290f38: 0xc087502  jal         func_21D408
    ctx->pc = 0x290F38u;
    SET_GPR_U32(ctx, 31, 0x290F40u);
    ctx->pc = 0x290F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F38u;
    // 0x290f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x290F38u, 0x290F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F40u;
label_290f40:
    // 0x290f40: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x290f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x290f44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f48: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x290f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x290f4c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x290F4Cu;
    SET_GPR_U32(ctx, 31, 0x290F54u);
    ctx->pc = 0x290F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F4Cu;
    // 0x290f50: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x290F4Cu, 0x290F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F54u;
label_290f54:
    // 0x290f54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x290f54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f58: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x290F58u;
    {
        const bool branch_taken_0x290f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F58u;
        // 0x290f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f58) {
            ctx->pc = 0x290FB4u;
            goto label_290fb4;
        }
    }
    ctx->pc = 0x290F60u;
    // 0x290f60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x290f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x290f64: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x290F64u;
    {
        const bool branch_taken_0x290f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x290F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F64u;
        // 0x290f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f64) {
            ctx->pc = 0x290FB4u;
            goto label_290fb4;
        }
    }
    ctx->pc = 0x290F6Cu;
label_290f6c:
    // 0x290f6c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x290F6Cu;
    {
        const bool branch_taken_0x290f6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x290F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F6Cu;
        // 0x290f70: 0x240400dd  addiu       $a0, $zero, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f6c) {
            ctx->pc = 0x290FACu;
            goto label_290fac;
        }
    }
    ctx->pc = 0x290F74u;
    // 0x290f74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x290f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x290f78: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x290f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x290f7c: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x290F7Cu;
    {
        const bool branch_taken_0x290f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x290F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290F7Cu;
        // 0x290f80: 0x9222011f  lbu         $v0, 0x11F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 287)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290f7c) {
            ctx->pc = 0x290FB0u;
            goto label_290fb0;
        }
    }
    ctx->pc = 0x290F84u;
    // 0x290f84: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x290F84u;
    {
        const bool branch_taken_0x290f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290f84) {
            ctx->pc = 0x290F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290F84u;
            // 0x290f88: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x290FB4u;
            goto label_290fb4;
        }
    }
    ctx->pc = 0x290F8Cu;
    // 0x290f8c: 0xc087502  jal         func_21D408
    ctx->pc = 0x290F8Cu;
    SET_GPR_U32(ctx, 31, 0x290F94u);
    ctx->pc = 0x290F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F8Cu;
    // 0x290f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x290F8Cu, 0x290F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290F94u;
label_290f94:
    // 0x290f94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x290f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290f98: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x290F98u;
    SET_GPR_U32(ctx, 31, 0x290FA0u);
    ctx->pc = 0x290F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290F98u;
    // 0x290f9c: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x290F98u, 0x290FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290FA0u;
label_290fa0:
    // 0x290fa0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x290fa0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x290fa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x290FA4u;
    {
        const bool branch_taken_0x290fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FA4u;
        // 0x290fa8: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290fa4) {
            ctx->pc = 0x290FB4u;
            goto label_290fb4;
        }
    }
    ctx->pc = 0x290FACu;
label_290fac:
    // 0x290fac: 0x9222011f  lbu         $v0, 0x11F($s1)
    ctx->pc = 0x290facu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 287)));
label_290fb0:
    // 0x290fb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x290fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_290fb4:
    // 0x290fb4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x290fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290fb8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x290fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290fbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x290fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x290fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x290FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290FC4u;
        // 0x290fc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290FCCu;
    // 0x290fcc: 0x0  nop
    ctx->pc = 0x290fccu;
    // NOP
    ctx->pc = 0x290fd0u;
}
