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

// Function: sub_00338420
// Address: 0x338420 - 0x338498
void sub_00338420_0x338420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338420_0x338420");
#endif

    switch (ctx->pc) {
        case 0x338420u: goto label_338420;
        case 0x338424u: goto label_338424;
        case 0x338428u: goto label_338428;
        case 0x33842cu: goto label_33842c;
        case 0x338430u: goto label_338430;
        case 0x338434u: goto label_338434;
        case 0x338438u: goto label_338438;
        case 0x33843cu: goto label_33843c;
        case 0x338440u: goto label_338440;
        case 0x338444u: goto label_338444;
        case 0x338448u: goto label_338448;
        case 0x33844cu: goto label_33844c;
        case 0x338450u: goto label_338450;
        case 0x338454u: goto label_338454;
        case 0x338458u: goto label_338458;
        case 0x33845cu: goto label_33845c;
        case 0x338460u: goto label_338460;
        case 0x338464u: goto label_338464;
        case 0x338468u: goto label_338468;
        case 0x33846cu: goto label_33846c;
        case 0x338470u: goto label_338470;
        case 0x338474u: goto label_338474;
        case 0x338478u: goto label_338478;
        case 0x33847cu: goto label_33847c;
        case 0x338480u: goto label_338480;
        case 0x338484u: goto label_338484;
        case 0x338488u: goto label_338488;
        case 0x33848cu: goto label_33848c;
        case 0x338490u: goto label_338490;
        case 0x338494u: goto label_338494;
        default: break;
    }

    ctx->pc = 0x338420u;

label_338420:
    // 0x338420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x338420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_338424:
    // 0x338424: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x338424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_338428:
    // 0x338428: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x338428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_33842c:
    // 0x33842c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x33842cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_338430:
    // 0x338430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x338430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_338434:
    // 0x338434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x338434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338438:
    // 0x338438: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33843c:
    // 0x33843c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33843cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_338440:
    // 0x338440: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x338440u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
label_338444:
    // 0x338444: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x338444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_338448:
    // 0x338448: 0x24a56b28  addiu       $a1, $a1, 0x6B28
    ctx->pc = 0x338448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27432));
label_33844c:
    // 0x33844c: 0x25086b40  addiu       $t0, $t0, 0x6B40
    ctx->pc = 0x33844cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27456));
label_338450:
    // 0x338450: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x338450u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_338454:
    // 0x338454: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x338454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_338458:
    // 0x338458: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x338458u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33845c:
    // 0x33845c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x33845cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_338460:
    // 0x338460: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x338460u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_338464:
    // 0x338464: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x338464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_338468:
    // 0x338468: 0x40f809  jalr        $v0
label_33846c:
    if (ctx->pc == 0x33846Cu) {
        ctx->pc = 0x33846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338468u;
        // 0x33846c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338470u;
        goto label_338470;
    }
    ctx->pc = 0x338468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338470u);
        ctx->pc = 0x33846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338468u;
        // 0x33846c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338468u, 0x338470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338470u;
label_338470:
    // 0x338470: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x338470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_338474:
    // 0x338474: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x338474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_338478:
    // 0x338478: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x338478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_33847c:
    // 0x33847c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x33847cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_338480:
    // 0x338480: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x338480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_338484:
    // 0x338484: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x338484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_338488:
    // 0x338488: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338488u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33848c:
    // 0x33848c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33848cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338490:
    // 0x338490: 0x3e00008  jr          $ra
label_338494:
    if (ctx->pc == 0x338494u) {
        ctx->pc = 0x338494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338490u;
        // 0x338494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338498u;
        goto label_fallthrough_0x338490;
    }
    ctx->pc = 0x338490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338490u;
        // 0x338494: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x338490:
    ctx->pc = 0x338498u;
}
