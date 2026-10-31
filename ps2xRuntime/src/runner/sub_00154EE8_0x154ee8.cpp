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

// Function: sub_00154EE8
// Address: 0x154ee8 - 0x154f28
void sub_00154EE8_0x154ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154EE8_0x154ee8");
#endif

    switch (ctx->pc) {
        case 0x154f18u: goto label_154f18;
        default: break;
    }

    ctx->pc = 0x154ee8u;

    // 0x154ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x154eec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x154EECu;
    {
        const bool branch_taken_0x154eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x154EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EECu;
        // 0x154ef0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154eec) {
            ctx->pc = 0x154F18u;
            goto label_154f18;
        }
    }
    ctx->pc = 0x154EF4u;
    // 0x154ef4: 0x3c02cdcd  lui         $v0, 0xCDCD
    ctx->pc = 0x154ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52685 << 16));
    // 0x154ef8: 0x3442cdcd  ori         $v0, $v0, 0xCDCD
    ctx->pc = 0x154ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52685);
    // 0x154efc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154EFCu;
    {
        const bool branch_taken_0x154efc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x154F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154EFCu;
        // 0x154f00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154efc) {
            ctx->pc = 0x154F0Cu;
            goto label_154f0c;
        }
    }
    ctx->pc = 0x154F04u;
    // 0x154f04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x154F04u;
    {
        const bool branch_taken_0x154f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F04u;
        // 0x154f08: 0xac45c6a8  sw          $a1, -0x3958($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952616), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f04) {
            ctx->pc = 0x154F18u;
            goto label_154f18;
        }
    }
    ctx->pc = 0x154F0Cu;
label_154f0c:
    // 0x154f0c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x154f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x154f10: 0xc10c978  jal         func_4325E0
    ctx->pc = 0x154F10u;
    SET_GPR_U32(ctx, 31, 0x154F18u);
    ctx->pc = 0x154F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154F10u;
    // 0x154f14: 0x2484e780  addiu       $a0, $a0, -0x1880 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x154F10u, 0x154F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F18u;
label_154f18:
    // 0x154f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x154F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154F1Cu;
        // 0x154f20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154F24u;
    // 0x154f24: 0x0  nop
    ctx->pc = 0x154f24u;
    // NOP
    ctx->pc = 0x154f28u;
}
