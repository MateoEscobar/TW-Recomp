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

// Function: sub_001CB418
// Address: 0x1cb418 - 0x1cb468
void sub_001CB418_0x1cb418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB418_0x1cb418");
#endif

    switch (ctx->pc) {
        case 0x1cb418u: goto label_1cb418;
        case 0x1cb41cu: goto label_1cb41c;
        case 0x1cb420u: goto label_1cb420;
        case 0x1cb424u: goto label_1cb424;
        case 0x1cb428u: goto label_1cb428;
        case 0x1cb42cu: goto label_1cb42c;
        case 0x1cb430u: goto label_1cb430;
        case 0x1cb434u: goto label_1cb434;
        case 0x1cb438u: goto label_1cb438;
        case 0x1cb43cu: goto label_1cb43c;
        case 0x1cb440u: goto label_1cb440;
        case 0x1cb444u: goto label_1cb444;
        case 0x1cb448u: goto label_1cb448;
        case 0x1cb44cu: goto label_1cb44c;
        case 0x1cb450u: goto label_1cb450;
        case 0x1cb454u: goto label_1cb454;
        case 0x1cb458u: goto label_1cb458;
        case 0x1cb45cu: goto label_1cb45c;
        case 0x1cb460u: goto label_1cb460;
        case 0x1cb464u: goto label_1cb464;
        default: break;
    }

    ctx->pc = 0x1cb418u;

label_1cb418:
    // 0x1cb418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cb41c:
    // 0x1cb41c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cb41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1cb420:
    // 0x1cb420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cb424:
    // 0x1cb424: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb428:
    // 0x1cb428: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cb428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb42c:
    // 0x1cb42c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1cb42cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1cb430:
    // 0x1cb430: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1cb430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1cb434:
    // 0x1cb434: 0x40f809  jalr        $v0
label_1cb438:
    if (ctx->pc == 0x1CB438u) {
        ctx->pc = 0x1CB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB434u;
        // 0x1cb438: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB43Cu;
        goto label_1cb43c;
    }
    ctx->pc = 0x1CB434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB43Cu);
        ctx->pc = 0x1CB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB434u;
        // 0x1cb438: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB434u, 0x1CB43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CB43Cu;
label_1cb43c:
    // 0x1cb43c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1cb440:
    if (ctx->pc == 0x1CB440u) {
        ctx->pc = 0x1CB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB43Cu;
        // 0x1cb440: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB444u;
        goto label_1cb444;
    }
    ctx->pc = 0x1CB43Cu;
    {
        const bool branch_taken_0x1cb43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb43c) {
            ctx->pc = 0x1CB440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB43Cu;
            // 0x1cb440: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB45Cu;
            goto label_1cb45c;
        }
    }
    ctx->pc = 0x1CB444u;
label_1cb444:
    // 0x1cb444: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1cb444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cb448:
    // 0x1cb448: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1cb448u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1cb44c:
    // 0x1cb44c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1cb44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1cb450:
    // 0x1cb450: 0x40f809  jalr        $v0
label_1cb454:
    if (ctx->pc == 0x1CB454u) {
        ctx->pc = 0x1CB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB450u;
        // 0x1cb454: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB458u;
        goto label_1cb458;
    }
    ctx->pc = 0x1CB450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CB458u);
        ctx->pc = 0x1CB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB450u;
        // 0x1cb454: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB450u, 0x1CB458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CB458u;
label_1cb458:
    // 0x1cb458: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cb458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb45c:
    // 0x1cb45c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb460:
    // 0x1cb460: 0x3e00008  jr          $ra
label_1cb464:
    if (ctx->pc == 0x1CB464u) {
        ctx->pc = 0x1CB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB460u;
        // 0x1cb464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CB468u;
        goto label_fallthrough_0x1cb460;
    }
    ctx->pc = 0x1CB460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB460u;
        // 0x1cb464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cb460:
    ctx->pc = 0x1CB468u;
}
