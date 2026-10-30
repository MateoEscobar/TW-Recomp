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

// Function: sub_004ED3F8
// Address: 0x4ed3f8 - 0x4ed440
void sub_004ED3F8_0x4ed3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED3F8_0x4ed3f8");
#endif

    switch (ctx->pc) {
        case 0x4ed3f8u: goto label_4ed3f8;
        case 0x4ed3fcu: goto label_4ed3fc;
        case 0x4ed400u: goto label_4ed400;
        case 0x4ed404u: goto label_4ed404;
        case 0x4ed408u: goto label_4ed408;
        case 0x4ed40cu: goto label_4ed40c;
        case 0x4ed410u: goto label_4ed410;
        case 0x4ed414u: goto label_4ed414;
        case 0x4ed418u: goto label_4ed418;
        case 0x4ed41cu: goto label_4ed41c;
        case 0x4ed420u: goto label_4ed420;
        case 0x4ed424u: goto label_4ed424;
        case 0x4ed428u: goto label_4ed428;
        case 0x4ed42cu: goto label_4ed42c;
        case 0x4ed430u: goto label_4ed430;
        case 0x4ed434u: goto label_4ed434;
        case 0x4ed438u: goto label_4ed438;
        case 0x4ed43cu: goto label_4ed43c;
        default: break;
    }

    ctx->pc = 0x4ed3f8u;

label_4ed3f8:
    // 0x4ed3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ed3fc:
    // 0x4ed3fc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4ed3fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ed400:
    // 0x4ed400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ed404:
    // 0x4ed404: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4ed408:
    if (ctx->pc == 0x4ED408u) {
        ctx->pc = 0x4ED408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED404u;
        // 0x4ed408: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED40Cu;
        goto label_4ed40c;
    }
    ctx->pc = 0x4ED404u;
    {
        const bool branch_taken_0x4ed404 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED404u;
        // 0x4ed408: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed404) {
            ctx->pc = 0x4ED430u;
            goto label_4ed430;
        }
    }
    ctx->pc = 0x4ED40Cu;
label_4ed40c:
    // 0x4ed40c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ed40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ed410:
    // 0x4ed410: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ed410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ed414:
    // 0x4ed414: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ed414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ed418:
    // 0x4ed418: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4ed418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4ed41c:
    // 0x4ed41c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ed41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ed420:
    // 0x4ed420: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ed420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ed424:
    // 0x4ed424: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ed424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ed428:
    // 0x4ed428: 0x60f809  jalr        $v1
label_4ed42c:
    if (ctx->pc == 0x4ED42Cu) {
        ctx->pc = 0x4ED42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED428u;
        // 0x4ed42c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED430u;
        goto label_4ed430;
    }
    ctx->pc = 0x4ED428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4ED430u);
        ctx->pc = 0x4ED42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED428u;
        // 0x4ed42c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED428u, 0x4ED430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4ED430u;
label_4ed430:
    // 0x4ed430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ed434:
    // 0x4ed434: 0x3e00008  jr          $ra
label_4ed438:
    if (ctx->pc == 0x4ED438u) {
        ctx->pc = 0x4ED438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED434u;
        // 0x4ed438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ED43Cu;
        goto label_4ed43c;
    }
    ctx->pc = 0x4ED434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED434u;
        // 0x4ed438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED43Cu;
label_4ed43c:
    // 0x4ed43c: 0x0  nop
    ctx->pc = 0x4ed43cu;
    // NOP
    ctx->pc = 0x4ed440u;
}
