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

// Function: sub_001B2950
// Address: 0x1b2950 - 0x1b2990
void sub_001B2950_0x1b2950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2950_0x1b2950");
#endif

    switch (ctx->pc) {
        case 0x1b2980u: goto label_1b2980;
        default: break;
    }

    ctx->pc = 0x1b2950u;

    // 0x1b2950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2954: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b2954u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2958: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x1b2958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b295c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B295Cu;
    {
        const bool branch_taken_0x1b295c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B295Cu;
        // 0x1b2960: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b295c) {
            ctx->pc = 0x1B2980u;
            goto label_1b2980;
        }
    }
    ctx->pc = 0x1B2964u;
    // 0x1b2964: 0x24040b10  addiu       $a0, $zero, 0xB10
    ctx->pc = 0x1b2964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2832));
    // 0x1b2968: 0x3402fea0  ori         $v0, $zero, 0xFEA0
    ctx->pc = 0x1b2968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65184);
    // 0x1b296c: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1b296cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b2970: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1b2970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2974: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b2974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b2978: 0xc072884  jal         func_1CA210
    ctx->pc = 0x1B2978u;
    SET_GPR_U32(ctx, 31, 0x1B2980u);
    ctx->pc = 0x1B297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2978u;
    // 0x1b297c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA210u, 0x1B2978u, 0x1B2980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2980u;
label_1b2980:
    // 0x1b2980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2984: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2984u;
        // 0x1b2988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B298Cu;
    // 0x1b298c: 0x0  nop
    ctx->pc = 0x1b298cu;
    // NOP
    ctx->pc = 0x1b2990u;
}
