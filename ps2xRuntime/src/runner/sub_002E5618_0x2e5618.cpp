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

// Function: sub_002E5618
// Address: 0x2e5618 - 0x2e5650
void sub_002E5618_0x2e5618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5618_0x2e5618");
#endif

    switch (ctx->pc) {
        case 0x2e5638u: goto label_2e5638;
        default: break;
    }

    ctx->pc = 0x2e5618u;

    // 0x2e5618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e561c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e561cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5620: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e5620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e5624: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2e5624u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
    // 0x2e5628: 0x5c600006  bgtzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5628u;
    {
        const bool branch_taken_0x2e5628 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2e5628) {
            ctx->pc = 0x2E562Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5628u;
            // 0x2e562c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5644u;
            goto label_2e5644;
        }
    }
    ctx->pc = 0x2E5630u;
    // 0x2e5630: 0xc0d5016  jal         func_354058
    ctx->pc = 0x2E5630u;
    SET_GPR_U32(ctx, 31, 0x2E5638u);
    ctx->pc = 0x2E5634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5630u;
    // 0x2e5634: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354058u, 0x2E5630u, 0x2E5638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5638u;
label_2e5638:
    // 0x2e5638: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x2e5638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2e563c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5640: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x2e5640u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_2e5644:
    // 0x2e5644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5648: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5648u;
        // 0x2e564c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5650u;
}
