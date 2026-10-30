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

// Function: sub_00469EF8
// Address: 0x469ef8 - 0x469f48
void sub_00469EF8_0x469ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469EF8_0x469ef8");
#endif

    switch (ctx->pc) {
        case 0x469f30u: goto label_469f30;
        default: break;
    }

    ctx->pc = 0x469ef8u;

    // 0x469ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x469ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x469efc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x469efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x469f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x469f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469f08: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x469f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x469f0c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x469F0Cu;
    {
        const bool branch_taken_0x469f0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x469F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469F0Cu;
        // 0x469f10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469f0c) {
            ctx->pc = 0x469F28u;
            goto label_469f28;
        }
    }
    ctx->pc = 0x469F14u;
    // 0x469f14: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x469f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x469f18: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x469f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x469f1c: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x469f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x469f20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x469f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x469f24: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x469f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_469f28:
    // 0x469f28: 0xc129622  jal         func_4A5888
    ctx->pc = 0x469F28u;
    SET_GPR_U32(ctx, 31, 0x469F30u);
    ctx->pc = 0x469F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469F28u;
    // 0x469f2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5888u, 0x469F28u, 0x469F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469F30u;
label_469f30:
    // 0x469f30: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x469f30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x469f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469f38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x469f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x469f3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x469f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469f40: 0x3e00008  jr          $ra
    ctx->pc = 0x469F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469F40u;
        // 0x469f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469F48u;
}
