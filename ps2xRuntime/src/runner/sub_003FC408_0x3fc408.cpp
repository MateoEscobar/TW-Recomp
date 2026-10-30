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

// Function: sub_003FC408
// Address: 0x3fc408 - 0x3fc478
void sub_003FC408_0x3fc408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FC408_0x3fc408");
#endif

    switch (ctx->pc) {
        case 0x3fc408u: goto label_3fc408;
        case 0x3fc40cu: goto label_3fc40c;
        case 0x3fc410u: goto label_3fc410;
        case 0x3fc414u: goto label_3fc414;
        case 0x3fc418u: goto label_3fc418;
        case 0x3fc41cu: goto label_3fc41c;
        case 0x3fc420u: goto label_3fc420;
        case 0x3fc424u: goto label_3fc424;
        case 0x3fc428u: goto label_3fc428;
        case 0x3fc42cu: goto label_3fc42c;
        case 0x3fc430u: goto label_3fc430;
        case 0x3fc434u: goto label_3fc434;
        case 0x3fc438u: goto label_3fc438;
        case 0x3fc43cu: goto label_3fc43c;
        case 0x3fc440u: goto label_3fc440;
        case 0x3fc444u: goto label_3fc444;
        case 0x3fc448u: goto label_3fc448;
        case 0x3fc44cu: goto label_3fc44c;
        case 0x3fc450u: goto label_3fc450;
        case 0x3fc454u: goto label_3fc454;
        case 0x3fc458u: goto label_3fc458;
        case 0x3fc45cu: goto label_3fc45c;
        case 0x3fc460u: goto label_3fc460;
        case 0x3fc464u: goto label_3fc464;
        case 0x3fc468u: goto label_3fc468;
        case 0x3fc46cu: goto label_3fc46c;
        case 0x3fc470u: goto label_3fc470;
        case 0x3fc474u: goto label_3fc474;
        default: break;
    }

    ctx->pc = 0x3fc408u;

label_3fc408:
    // 0x3fc408: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3fc408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3fc40c:
    // 0x3fc40c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fc40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3fc410:
    // 0x3fc410: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3fc410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fc414:
    // 0x3fc414: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3fc414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3fc418:
    // 0x3fc418: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3fc418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fc41c:
    // 0x3fc41c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fc41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3fc420:
    // 0x3fc420: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fc420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fc424:
    // 0x3fc424: 0xc0e90ca  jal         func_3A4328
label_3fc428:
    if (ctx->pc == 0x3FC428u) {
        ctx->pc = 0x3FC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC424u;
        // 0x3fc428: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC42Cu;
        goto label_3fc42c;
    }
    ctx->pc = 0x3FC424u;
    SET_GPR_U32(ctx, 31, 0x3FC42Cu);
    ctx->pc = 0x3FC428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC424u;
    // 0x3fc428: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FC424u, 0x3FC42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC42Cu;
label_3fc42c:
    // 0x3fc42c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fc42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fc430:
    // 0x3fc430: 0xc0e91f0  jal         func_3A47C0
label_3fc434:
    if (ctx->pc == 0x3FC434u) {
        ctx->pc = 0x3FC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC430u;
        // 0x3fc434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC438u;
        goto label_3fc438;
    }
    ctx->pc = 0x3FC430u;
    SET_GPR_U32(ctx, 31, 0x3FC438u);
    ctx->pc = 0x3FC434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FC430u;
    // 0x3fc434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x3FC430u, 0x3FC438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FC438u;
label_3fc438:
    // 0x3fc438: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x3fc438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3fc43c:
    // 0x3fc43c: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_3fc440:
    if (ctx->pc == 0x3FC440u) {
        ctx->pc = 0x3FC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC43Cu;
        // 0x3fc440: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC444u;
        goto label_3fc444;
    }
    ctx->pc = 0x3FC43Cu;
    {
        const bool branch_taken_0x3fc43c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FC440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC43Cu;
        // 0x3fc440: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fc43c) {
            ctx->pc = 0x3FC45Cu;
            goto label_3fc45c;
        }
    }
    ctx->pc = 0x3FC444u;
label_3fc444:
    // 0x3fc444: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3fc444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3fc448:
    // 0x3fc448: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3fc448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3fc44c:
    // 0x3fc44c: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3fc44cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3fc450:
    // 0x3fc450: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3fc450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3fc454:
    // 0x3fc454: 0x60f809  jalr        $v1
label_3fc458:
    if (ctx->pc == 0x3FC458u) {
        ctx->pc = 0x3FC458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC454u;
        // 0x3fc458: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC45Cu;
        goto label_3fc45c;
    }
    ctx->pc = 0x3FC454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3FC45Cu);
        ctx->pc = 0x3FC458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC454u;
        // 0x3fc458: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC454u, 0x3FC45Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FC45Cu;
label_3fc45c:
    // 0x3fc45c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3fc45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3fc460:
    // 0x3fc460: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3fc460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fc464:
    // 0x3fc464: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fc464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fc468:
    // 0x3fc468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fc468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3fc46c:
    // 0x3fc46c: 0x3e00008  jr          $ra
label_3fc470:
    if (ctx->pc == 0x3FC470u) {
        ctx->pc = 0x3FC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC46Cu;
        // 0x3fc470: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FC474u;
        goto label_3fc474;
    }
    ctx->pc = 0x3FC46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FC470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FC46Cu;
        // 0x3fc470: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FC46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FC474u;
label_3fc474:
    // 0x3fc474: 0x0  nop
    ctx->pc = 0x3fc474u;
    // NOP
    ctx->pc = 0x3fc478u;
}
