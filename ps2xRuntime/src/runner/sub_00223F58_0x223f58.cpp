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

// Function: sub_00223F58
// Address: 0x223f58 - 0x224000
void sub_00223F58_0x223f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223F58_0x223f58");
#endif

    switch (ctx->pc) {
        case 0x223f6cu: goto label_223f6c;
        case 0x223f74u: goto label_223f74;
        case 0x223f90u: goto label_223f90;
        case 0x223fbcu: goto label_223fbc;
        default: break;
    }

    ctx->pc = 0x223f58u;

    // 0x223f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223f5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x223f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x223f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223f64: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x223F64u;
    SET_GPR_U32(ctx, 31, 0x223F6Cu);
    ctx->pc = 0x223F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F64u;
    // 0x223f68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x223F64u, 0x223F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F6Cu;
label_223f6c:
    // 0x223f6c: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x223F6Cu;
    SET_GPR_U32(ctx, 31, 0x223F74u);
    ctx->pc = 0x223F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F6Cu;
    // 0x223f70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x223F6Cu, 0x223F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F74u;
label_223f74:
    // 0x223f74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x223f74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f78: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x223F78u;
    {
        const bool branch_taken_0x223f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F78u;
        // 0x223f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f78) {
            ctx->pc = 0x223FECu;
            goto label_223fec;
        }
    }
    ctx->pc = 0x223F80u;
    // 0x223f80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x223f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x223f84: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x223f84u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x223f88: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x223F88u;
    SET_GPR_U32(ctx, 31, 0x223F90u);
    ctx->pc = 0x223F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F88u;
    // 0x223f8c: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x223F88u, 0x223F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F90u;
label_223f90:
    // 0x223f90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x223f90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f94: 0x80640087  lb          $a0, 0x87($v1)
    ctx->pc = 0x223f94u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 135)));
    // 0x223f98: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x223f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x223f9c: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x223F9Cu;
    {
        const bool branch_taken_0x223f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x223FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F9Cu;
        // 0x223fa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f9c) {
            ctx->pc = 0x223FE8u;
            goto label_223fe8;
        }
    }
    ctx->pc = 0x223FA4u;
    // 0x223fa4: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223FA4u;
    {
        const bool branch_taken_0x223fa4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x223fa4) {
            ctx->pc = 0x223FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223FA4u;
            // 0x223fa8: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223FC4u;
            goto label_223fc4;
        }
    }
    ctx->pc = 0x223FACu;
    // 0x223fac: 0x80630086  lb          $v1, 0x86($v1)
    ctx->pc = 0x223facu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x223fb0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x223fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x223fb4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223FB4u;
    {
        const bool branch_taken_0x223fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x223fb4) {
            ctx->pc = 0x223FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223FB4u;
            // 0x223fb8: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223FC4u;
            goto label_223fc4;
        }
    }
    ctx->pc = 0x223FBCu;
label_223fbc:
    // 0x223fbc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x223FBCu;
    {
        const bool branch_taken_0x223fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FBCu;
        // 0x223fc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fbc) {
            ctx->pc = 0x223FECu;
            goto label_223fec;
        }
    }
    ctx->pc = 0x223FC4u;
label_223fc4:
    // 0x223fc4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x223fc4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x223fc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223FC8u;
    {
        const bool branch_taken_0x223fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FC8u;
        // 0x223fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fc8) {
            ctx->pc = 0x223FE8u;
            goto label_223fe8;
        }
    }
    ctx->pc = 0x223FD0u;
    // 0x223fd0: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x223FD0u;
    {
        const bool branch_taken_0x223fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x223FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FD0u;
        // 0x223fd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fd0) {
            ctx->pc = 0x223FBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223fbc;
        }
    }
    ctx->pc = 0x223FD8u;
    // 0x223fd8: 0x1082fff8  beq         $a0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x223FD8u;
    {
        const bool branch_taken_0x223fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x223FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FD8u;
        // 0x223fdc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fd8) {
            ctx->pc = 0x223FBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223fbc;
        }
    }
    ctx->pc = 0x223FE0u;
    // 0x223fe0: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223FE0u;
    {
        const bool branch_taken_0x223fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x223FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FE0u;
        // 0x223fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223fe0) {
            ctx->pc = 0x223FECu;
            goto label_223fec;
        }
    }
    ctx->pc = 0x223FE8u;
label_223fe8:
    // 0x223fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x223fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_223fec:
    // 0x223fec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x223fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x223FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FF4u;
        // 0x223ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223FFCu;
    // 0x223ffc: 0x0  nop
    ctx->pc = 0x223ffcu;
    // NOP
    ctx->pc = 0x224000u;
}
