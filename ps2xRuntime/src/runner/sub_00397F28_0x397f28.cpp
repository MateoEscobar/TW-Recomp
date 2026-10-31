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

// Function: sub_00397F28
// Address: 0x397f28 - 0x397fb8
void sub_00397F28_0x397f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397F28_0x397f28");
#endif

    switch (ctx->pc) {
        case 0x397f40u: goto label_397f40;
        case 0x397f98u: goto label_397f98;
        default: break;
    }

    ctx->pc = 0x397f28u;

    // 0x397f28: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x397f28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x397f2c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x397f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x397f30: 0x53403  sra         $a2, $a1, 16
    ctx->pc = 0x397f30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 16));
    // 0x397f34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x397f34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f38: 0x24455780  addiu       $a1, $v0, 0x5780
    ctx->pc = 0x397f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 22400));
    // 0x397f3c: 0x0  nop
    ctx->pc = 0x397f3cu;
    // NOP
label_397f40:
    // 0x397f40: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x397f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x397f44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x397f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x397f48: 0x2c620023  sltiu       $v0, $v1, 0x23
    ctx->pc = 0x397f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x397f4c: 0x0  nop
    ctx->pc = 0x397f4cu;
    // NOP
    // 0x397f50: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x397F50u;
    {
        const bool branch_taken_0x397f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F50u;
        // 0x397f54: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f50) {
            ctx->pc = 0x397F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397f40;
        }
    }
    ctx->pc = 0x397F58u;
    // 0x397f58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x397f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x397f5c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x397f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x397f60: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x397f60u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x51489Cu));
    // 0x397f64: 0xa483001e  sh          $v1, 0x1E($a0)
    ctx->pc = 0x397f64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x397f68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x397f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x397f6c: 0xa483001c  sh          $v1, 0x1C($a0)
    ctx->pc = 0x397f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x397f70: 0x8c442c20  lw          $a0, 0x2C20($v0)
    ctx->pc = 0x397f70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C20u));
    // 0x397f74: 0x94a356dc  lhu         $v1, 0x56DC($a1)
    ctx->pc = 0x397f74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22236)));
    // 0x397f78: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x397F78u;
    {
        const bool branch_taken_0x397f78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x397F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F78u;
        // 0x397f7c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f78) {
            ctx->pc = 0x397F90u;
            goto label_397f90;
        }
    }
    ctx->pc = 0x397F80u;
    // 0x397f80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x397f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x397f84: 0x8c432c1c  lw          $v1, 0x2C1C($v0)
    ctx->pc = 0x397f84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x512C1Cu));
    // 0x397f88: 0x10660009  beq         $v1, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x397F88u;
    {
        const bool branch_taken_0x397f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x397F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F88u;
        // 0x397f8c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f88) {
            ctx->pc = 0x397FB0u;
            goto label_397fb0;
        }
    }
    ctx->pc = 0x397F90u;
label_397f90:
    // 0x397f90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x397f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f94: 0x244356f0  addiu       $v1, $v0, 0x56F0
    ctx->pc = 0x397f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_397f98:
    // 0x397f98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x397f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x397f9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x397f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x397fa0: 0x2c820023  sltiu       $v0, $a0, 0x23
    ctx->pc = 0x397fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x397fa4: 0x0  nop
    ctx->pc = 0x397fa4u;
    // NOP
    // 0x397fa8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x397FA8u;
    {
        const bool branch_taken_0x397fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x397FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FA8u;
        // 0x397fac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fa8) {
            ctx->pc = 0x397F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397f98;
        }
    }
    ctx->pc = 0x397FB0u;
label_397fb0:
    // 0x397fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x397FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397FB8u;
}
