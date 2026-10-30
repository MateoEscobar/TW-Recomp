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

// Function: sub_00227EF8
// Address: 0x227ef8 - 0x227f40
void sub_00227EF8_0x227ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227EF8_0x227ef8");
#endif

    switch (ctx->pc) {
        case 0x227f20u: goto label_227f20;
        default: break;
    }

    ctx->pc = 0x227ef8u;

    // 0x227ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227efc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227f04: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x227f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x227f08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227F08u;
    {
        const bool branch_taken_0x227f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F08u;
        // 0x227f0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f08) {
            ctx->pc = 0x227F28u;
            goto label_227f28;
        }
    }
    ctx->pc = 0x227F10u;
    // 0x227f10: 0x34058005  ori         $a1, $zero, 0x8005
    ctx->pc = 0x227f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    // 0x227f14: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x227f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x227f18: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227F18u;
    SET_GPR_U32(ctx, 31, 0x227F20u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227F18u, 0x227F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F20u;
label_227f20:
    // 0x227f20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227F20u;
    {
        const bool branch_taken_0x227f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F20u;
        // 0x227f24: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f20) {
            ctx->pc = 0x227F30u;
            goto label_227f30;
        }
    }
    ctx->pc = 0x227F28u;
label_227f28:
    // 0x227f28: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x227f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227f2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227f30:
    // 0x227f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227f34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227f38: 0x3e00008  jr          $ra
    ctx->pc = 0x227F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F38u;
        // 0x227f3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227F40u;
}
