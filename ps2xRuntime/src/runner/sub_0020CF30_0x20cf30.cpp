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

// Function: sub_0020CF30
// Address: 0x20cf30 - 0x20cfd0
void sub_0020CF30_0x20cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CF30_0x20cf30");
#endif

    switch (ctx->pc) {
        case 0x20cf64u: goto label_20cf64;
        case 0x20cf80u: goto label_20cf80;
        case 0x20cfa4u: goto label_20cfa4;
        case 0x20cfacu: goto label_20cfac;
        case 0x20cfb4u: goto label_20cfb4;
        case 0x20cfbcu: goto label_20cfbc;
        default: break;
    }

    ctx->pc = 0x20cf30u;

    // 0x20cf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20cf34: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20cf38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20cf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20cf3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cf40: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20CF40u;
    {
        const bool branch_taken_0x20cf40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF40u;
        // 0x20cf44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf40) {
            ctx->pc = 0x20CF6Cu;
            goto label_20cf6c;
        }
    }
    ctx->pc = 0x20CF48u;
    // 0x20cf48: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x20cf4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x20cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x20cf50: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x20cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x20cf54: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x20cf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
    // 0x20cf58: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x20cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x20cf5c: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x20CF5Cu;
    SET_GPR_U32(ctx, 31, 0x20CF64u);
    ctx->pc = 0x20CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF5Cu;
    // 0x20cf60: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x20CF5Cu, 0x20CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF64u;
label_20cf64:
    // 0x20cf64: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x20CF64u;
    {
        const bool branch_taken_0x20cf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF64u;
        // 0x20cf68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf64) {
            ctx->pc = 0x20CFC0u;
            goto label_20cfc0;
        }
    }
    ctx->pc = 0x20CF6Cu;
label_20cf6c:
    // 0x20cf6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20cf70: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20CF70u;
    {
        const bool branch_taken_0x20cf70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF70u;
        // 0x20cf74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cf70) {
            ctx->pc = 0x20CFC0u;
            goto label_20cfc0;
        }
    }
    ctx->pc = 0x20CF78u;
    // 0x20cf78: 0xc0750fa  jal         func_1D43E8
    ctx->pc = 0x20CF78u;
    SET_GPR_U32(ctx, 31, 0x20CF80u);
    ctx->pc = 0x20CF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF78u;
    // 0x20cf7c: 0x8e040090  lw          $a0, 0x90($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x20CF78u, 0x20CF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF80u;
label_20cf80:
    // 0x20cf80: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x20cf80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x20cf84: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x20cf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x20cf88: 0x8c86489c  lw          $a2, 0x489C($a0)
    ctx->pc = 0x20cf88u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x51489Cu));
    // 0x20cf8c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x20cf8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x20cf90: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x20cf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
    // 0x20cf94: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x20cf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20cf98: 0xacc20438  sw          $v0, 0x438($a2)
    ctx->pc = 0x20cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1080), GPR_U32(ctx, 2));
    // 0x20cf9c: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x20CF9Cu;
    SET_GPR_U32(ctx, 31, 0x20CFA4u);
    ctx->pc = 0x20CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF9Cu;
    // 0x20cfa0: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x20CF9Cu, 0x20CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFA4u;
label_20cfa4:
    // 0x20cfa4: 0xc080ffe  jal         func_203FF8
    ctx->pc = 0x20CFA4u;
    SET_GPR_U32(ctx, 31, 0x20CFACu);
    ctx->pc = 0x20CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CFA4u;
    // 0x20cfa8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FF8u, 0x20CFA4u, 0x20CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFACu;
label_20cfac:
    // 0x20cfac: 0xc081006  jal         func_204018
    ctx->pc = 0x20CFACu;
    SET_GPR_U32(ctx, 31, 0x20CFB4u);
    ctx->pc = 0x20CFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CFACu;
    // 0x20cfb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204018u, 0x20CFACu, 0x20CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFB4u;
label_20cfb4:
    // 0x20cfb4: 0xc080fee  jal         func_203FB8
    ctx->pc = 0x20CFB4u;
    SET_GPR_U32(ctx, 31, 0x20CFBCu);
    ctx->pc = 0x20CFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CFB4u;
    // 0x20cfb8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FB8u, 0x20CFB4u, 0x20CFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CFBCu;
label_20cfbc:
    // 0x20cfbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cfc0:
    // 0x20cfc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20cfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cfc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x20CFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CFC8u;
        // 0x20cfcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CFD0u;
}
