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

// Function: sub_00227E18
// Address: 0x227e18 - 0x227e60
void sub_00227E18_0x227e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227E18_0x227e18");
#endif

    switch (ctx->pc) {
        case 0x227e40u: goto label_227e40;
        default: break;
    }

    ctx->pc = 0x227e18u;

    // 0x227e18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227e1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227e20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227e24: 0x8c8200d4  lw          $v0, 0xD4($a0)
    ctx->pc = 0x227e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x227e28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x227E28u;
    {
        const bool branch_taken_0x227e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E28u;
        // 0x227e2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e28) {
            ctx->pc = 0x227E48u;
            goto label_227e48;
        }
    }
    ctx->pc = 0x227E30u;
    // 0x227e30: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x227e30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x227e34: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x227e34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x227e38: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x227E38u;
    SET_GPR_U32(ctx, 31, 0x227E40u);
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x227E38u, 0x227E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E40u;
label_227e40:
    // 0x227e40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x227E40u;
    {
        const bool branch_taken_0x227e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E40u;
        // 0x227e44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227e40) {
            ctx->pc = 0x227E50u;
            goto label_227e50;
        }
    }
    ctx->pc = 0x227E48u;
label_227e48:
    // 0x227e48: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x227e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227e4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x227e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_227e50:
    // 0x227e50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227e54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227e58: 0x3e00008  jr          $ra
    ctx->pc = 0x227E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227E58u;
        // 0x227e5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227E60u;
}
