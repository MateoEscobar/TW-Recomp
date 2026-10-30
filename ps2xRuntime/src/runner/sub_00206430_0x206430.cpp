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

// Function: sub_00206430
// Address: 0x206430 - 0x206488
void sub_00206430_0x206430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206430_0x206430");
#endif

    switch (ctx->pc) {
        case 0x206430u: goto label_206430;
        case 0x206434u: goto label_206434;
        case 0x206438u: goto label_206438;
        case 0x20643cu: goto label_20643c;
        case 0x206440u: goto label_206440;
        case 0x206444u: goto label_206444;
        case 0x206448u: goto label_206448;
        case 0x20644cu: goto label_20644c;
        case 0x206450u: goto label_206450;
        case 0x206454u: goto label_206454;
        case 0x206458u: goto label_206458;
        case 0x20645cu: goto label_20645c;
        case 0x206460u: goto label_206460;
        case 0x206464u: goto label_206464;
        case 0x206468u: goto label_206468;
        case 0x20646cu: goto label_20646c;
        case 0x206470u: goto label_206470;
        case 0x206474u: goto label_206474;
        case 0x206478u: goto label_206478;
        case 0x20647cu: goto label_20647c;
        case 0x206480u: goto label_206480;
        case 0x206484u: goto label_206484;
        default: break;
    }

    ctx->pc = 0x206430u;

label_206430:
    // 0x206430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_206434:
    // 0x206434: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x206434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_206438:
    // 0x206438: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x206438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20643c:
    // 0x20643c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x20643cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_206440:
    // 0x206440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206444:
    // 0x206444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206448:
    // 0x206448: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x206448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_20644c:
    // 0x20644c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20644cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_206450:
    // 0x206450: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x206450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_206454:
    // 0x206454: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x206454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_206458:
    // 0x206458: 0xa0f809  jalr        $a1
label_20645c:
    if (ctx->pc == 0x20645Cu) {
        ctx->pc = 0x20645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206458u;
        // 0x20645c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206460u;
        goto label_206460;
    }
    ctx->pc = 0x206458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x206460u);
        ctx->pc = 0x20645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206458u;
        // 0x20645c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206458u, 0x206460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206460u;
label_206460:
    // 0x206460: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x206460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_206464:
    // 0x206464: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x206464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_206468:
    // 0x206468: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x206468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20646c:
    // 0x20646c: 0x60f809  jalr        $v1
label_206470:
    if (ctx->pc == 0x206470u) {
        ctx->pc = 0x206470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20646Cu;
        // 0x206470: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206474u;
        goto label_206474;
    }
    ctx->pc = 0x20646Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x206474u);
        ctx->pc = 0x206470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20646Cu;
        // 0x206470: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20646Cu, 0x206474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206474u;
label_206474:
    // 0x206474: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x206474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_206478:
    // 0x206478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x206478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20647c:
    // 0x20647c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20647cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206480:
    // 0x206480: 0x3e00008  jr          $ra
label_206484:
    if (ctx->pc == 0x206484u) {
        ctx->pc = 0x206484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206480u;
        // 0x206484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206488u;
        goto label_fallthrough_0x206480;
    }
    ctx->pc = 0x206480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206480u;
        // 0x206484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x206480:
    ctx->pc = 0x206488u;
}
