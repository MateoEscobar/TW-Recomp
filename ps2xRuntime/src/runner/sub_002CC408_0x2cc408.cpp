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

// Function: sub_002CC408
// Address: 0x2cc408 - 0x2cc488
void sub_002CC408_0x2cc408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC408_0x2cc408");
#endif

    switch (ctx->pc) {
        case 0x2cc408u: goto label_2cc408;
        case 0x2cc40cu: goto label_2cc40c;
        case 0x2cc410u: goto label_2cc410;
        case 0x2cc414u: goto label_2cc414;
        case 0x2cc418u: goto label_2cc418;
        case 0x2cc41cu: goto label_2cc41c;
        case 0x2cc420u: goto label_2cc420;
        case 0x2cc424u: goto label_2cc424;
        case 0x2cc428u: goto label_2cc428;
        case 0x2cc42cu: goto label_2cc42c;
        case 0x2cc430u: goto label_2cc430;
        case 0x2cc434u: goto label_2cc434;
        case 0x2cc438u: goto label_2cc438;
        case 0x2cc43cu: goto label_2cc43c;
        case 0x2cc440u: goto label_2cc440;
        case 0x2cc444u: goto label_2cc444;
        case 0x2cc448u: goto label_2cc448;
        case 0x2cc44cu: goto label_2cc44c;
        case 0x2cc450u: goto label_2cc450;
        case 0x2cc454u: goto label_2cc454;
        case 0x2cc458u: goto label_2cc458;
        case 0x2cc45cu: goto label_2cc45c;
        case 0x2cc460u: goto label_2cc460;
        case 0x2cc464u: goto label_2cc464;
        case 0x2cc468u: goto label_2cc468;
        case 0x2cc46cu: goto label_2cc46c;
        case 0x2cc470u: goto label_2cc470;
        case 0x2cc474u: goto label_2cc474;
        case 0x2cc478u: goto label_2cc478;
        case 0x2cc47cu: goto label_2cc47c;
        case 0x2cc480u: goto label_2cc480;
        case 0x2cc484u: goto label_2cc484;
        default: break;
    }

    ctx->pc = 0x2cc408u;

label_2cc408:
    // 0x2cc408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2cc40c:
    // 0x2cc40c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2cc40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2cc410:
    // 0x2cc410: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cc410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2cc414:
    // 0x2cc414: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2cc414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2cc418:
    // 0x2cc418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cc41c:
    // 0x2cc41c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cc41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cc420:
    // 0x2cc420: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2cc420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2cc424:
    // 0x2cc424: 0x24421830  addiu       $v0, $v0, 0x1830
    ctx->pc = 0x2cc424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6192));
label_2cc428:
    // 0x2cc428: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2cc428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2cc42c:
    // 0x2cc42c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2cc42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2cc430:
    // 0x2cc430: 0x8c662b04  lw          $a2, 0x2B04($v1)
    ctx->pc = 0x2cc430u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11012)));
label_2cc434:
    // 0x2cc434: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2cc434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2cc438:
    // 0x2cc438: 0xae0a0008  sw          $t2, 0x8($s0)
    ctx->pc = 0x2cc438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 10));
label_2cc43c:
    // 0x2cc43c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2cc43cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2cc440:
    // 0x2cc440: 0xe60c0014  swc1        $f12, 0x14($s0)
    ctx->pc = 0x2cc440u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2cc444:
    // 0x2cc444: 0xe60d0018  swc1        $f13, 0x18($s0)
    ctx->pc = 0x2cc444u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_2cc448:
    // 0x2cc448: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x2cc448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
label_2cc44c:
    // 0x2cc44c: 0xae080024  sw          $t0, 0x24($s0)
    ctx->pc = 0x2cc44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
label_2cc450:
    // 0x2cc450: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2cc450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2cc454:
    // 0x2cc454: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x2cc454u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
label_2cc458:
    // 0x2cc458: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2cc458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2cc45c:
    // 0x2cc45c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2cc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2cc460:
    // 0x2cc460: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2cc460u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2cc464:
    // 0x2cc464: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2cc464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2cc468:
    // 0x2cc468: 0x40f809  jalr        $v0
label_2cc46c:
    if (ctx->pc == 0x2CC46Cu) {
        ctx->pc = 0x2CC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC468u;
        // 0x2cc46c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC470u;
        goto label_2cc470;
    }
    ctx->pc = 0x2CC468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CC470u);
        ctx->pc = 0x2CC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC468u;
        // 0x2cc46c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC468u, 0x2CC470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC470u;
label_2cc470:
    // 0x2cc470: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2cc470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_2cc474:
    // 0x2cc474: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cc474u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc478:
    // 0x2cc478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc47c:
    // 0x2cc47c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cc47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc480:
    // 0x2cc480: 0x3e00008  jr          $ra
label_2cc484:
    if (ctx->pc == 0x2CC484u) {
        ctx->pc = 0x2CC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC480u;
        // 0x2cc484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC488u;
        goto label_fallthrough_0x2cc480;
    }
    ctx->pc = 0x2CC480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC480u;
        // 0x2cc484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cc480:
    ctx->pc = 0x2CC488u;
}
