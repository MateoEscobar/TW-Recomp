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

// Function: sub_001A2538
// Address: 0x1a2538 - 0x1a25b8
void sub_001A2538_0x1a2538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2538_0x1a2538");
#endif

    switch (ctx->pc) {
        case 0x1a2538u: goto label_1a2538;
        case 0x1a253cu: goto label_1a253c;
        case 0x1a2540u: goto label_1a2540;
        case 0x1a2544u: goto label_1a2544;
        case 0x1a2548u: goto label_1a2548;
        case 0x1a254cu: goto label_1a254c;
        case 0x1a2550u: goto label_1a2550;
        case 0x1a2554u: goto label_1a2554;
        case 0x1a2558u: goto label_1a2558;
        case 0x1a255cu: goto label_1a255c;
        case 0x1a2560u: goto label_1a2560;
        case 0x1a2564u: goto label_1a2564;
        case 0x1a2568u: goto label_1a2568;
        case 0x1a256cu: goto label_1a256c;
        case 0x1a2570u: goto label_1a2570;
        case 0x1a2574u: goto label_1a2574;
        case 0x1a2578u: goto label_1a2578;
        case 0x1a257cu: goto label_1a257c;
        case 0x1a2580u: goto label_1a2580;
        case 0x1a2584u: goto label_1a2584;
        case 0x1a2588u: goto label_1a2588;
        case 0x1a258cu: goto label_1a258c;
        case 0x1a2590u: goto label_1a2590;
        case 0x1a2594u: goto label_1a2594;
        case 0x1a2598u: goto label_1a2598;
        case 0x1a259cu: goto label_1a259c;
        case 0x1a25a0u: goto label_1a25a0;
        case 0x1a25a4u: goto label_1a25a4;
        case 0x1a25a8u: goto label_1a25a8;
        case 0x1a25acu: goto label_1a25ac;
        case 0x1a25b0u: goto label_1a25b0;
        case 0x1a25b4u: goto label_1a25b4;
        default: break;
    }

    ctx->pc = 0x1a2538u;

label_1a2538:
    // 0x1a2538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a253c:
    // 0x1a253c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a2540:
    // 0x1a2540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a2544:
    // 0x1a2544: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2548:
    // 0x1a2548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a254c:
    // 0x1a254c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a254cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2550:
    // 0x1a2550: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a2550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2554:
    // 0x1a2554: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1a2554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1a2558:
    // 0x1a2558: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1a2558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1a255c:
    // 0x1a255c: 0x40f809  jalr        $v0
label_1a2560:
    if (ctx->pc == 0x1A2560u) {
        ctx->pc = 0x1A2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A255Cu;
        // 0x1a2560: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2564u;
        goto label_1a2564;
    }
    ctx->pc = 0x1A255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2564u);
        ctx->pc = 0x1A2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A255Cu;
        // 0x1a2560: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A255Cu, 0x1A2564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2564u;
label_1a2564:
    // 0x1a2564: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_1a2568:
    if (ctx->pc == 0x1A2568u) {
        ctx->pc = 0x1A2568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2564u;
        // 0x1a2568: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A256Cu;
        goto label_1a256c;
    }
    ctx->pc = 0x1A2564u;
    {
        const bool branch_taken_0x1a2564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2564) {
            ctx->pc = 0x1A2568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2564u;
            // 0x1a2568: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A25A4u;
            goto label_1a25a4;
        }
    }
    ctx->pc = 0x1A256Cu;
label_1a256c:
    // 0x1a256c: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x1a256cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_1a2570:
    // 0x1a2570: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1a2574:
    if (ctx->pc == 0x1A2574u) {
        ctx->pc = 0x1A2574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2570u;
        // 0x1a2574: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2578u;
        goto label_1a2578;
    }
    ctx->pc = 0x1A2570u;
    {
        const bool branch_taken_0x1a2570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2570) {
            ctx->pc = 0x1A2574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2570u;
            // 0x1a2574: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A25A4u;
            goto label_1a25a4;
        }
    }
    ctx->pc = 0x1A2578u;
label_1a2578:
    // 0x1a2578: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a2578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a257c:
    // 0x1a257c: 0xae1100f0  sw          $s1, 0xF0($s0)
    ctx->pc = 0x1a257cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 17));
label_1a2580:
    // 0x1a2580: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1a2580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1a2584:
    // 0x1a2584: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a2584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a2588:
    // 0x1a2588: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a2588u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a258c:
    // 0x1a258c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a2590:
    // 0x1a2590: 0x40f809  jalr        $v0
label_1a2594:
    if (ctx->pc == 0x1A2594u) {
        ctx->pc = 0x1A2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2590u;
        // 0x1a2594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2598u;
        goto label_1a2598;
    }
    ctx->pc = 0x1A2590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2598u);
        ctx->pc = 0x1A2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2590u;
        // 0x1a2594: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2590u, 0x1A2598u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2598u;
label_1a2598:
    // 0x1a2598: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1a2598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a259c:
    // 0x1a259c: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1a259cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_1a25a0:
    // 0x1a25a0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a25a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a25a4:
    // 0x1a25a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a25a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a25a8:
    // 0x1a25a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a25a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a25ac:
    // 0x1a25ac: 0x3e00008  jr          $ra
label_1a25b0:
    if (ctx->pc == 0x1A25B0u) {
        ctx->pc = 0x1A25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25ACu;
        // 0x1a25b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25B4u;
        goto label_1a25b4;
    }
    ctx->pc = 0x1A25ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25ACu;
        // 0x1a25b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A25ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A25B4u;
label_1a25b4:
    // 0x1a25b4: 0x0  nop
    ctx->pc = 0x1a25b4u;
    // NOP
    ctx->pc = 0x1a25b8u;
}
