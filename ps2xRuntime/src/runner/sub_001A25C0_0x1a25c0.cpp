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

// Function: sub_001A25C0
// Address: 0x1a25c0 - 0x1a2638
void sub_001A25C0_0x1a25c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A25C0_0x1a25c0");
#endif

    switch (ctx->pc) {
        case 0x1a25c0u: goto label_1a25c0;
        case 0x1a25c4u: goto label_1a25c4;
        case 0x1a25c8u: goto label_1a25c8;
        case 0x1a25ccu: goto label_1a25cc;
        case 0x1a25d0u: goto label_1a25d0;
        case 0x1a25d4u: goto label_1a25d4;
        case 0x1a25d8u: goto label_1a25d8;
        case 0x1a25dcu: goto label_1a25dc;
        case 0x1a25e0u: goto label_1a25e0;
        case 0x1a25e4u: goto label_1a25e4;
        case 0x1a25e8u: goto label_1a25e8;
        case 0x1a25ecu: goto label_1a25ec;
        case 0x1a25f0u: goto label_1a25f0;
        case 0x1a25f4u: goto label_1a25f4;
        case 0x1a25f8u: goto label_1a25f8;
        case 0x1a25fcu: goto label_1a25fc;
        case 0x1a2600u: goto label_1a2600;
        case 0x1a2604u: goto label_1a2604;
        case 0x1a2608u: goto label_1a2608;
        case 0x1a260cu: goto label_1a260c;
        case 0x1a2610u: goto label_1a2610;
        case 0x1a2614u: goto label_1a2614;
        case 0x1a2618u: goto label_1a2618;
        case 0x1a261cu: goto label_1a261c;
        case 0x1a2620u: goto label_1a2620;
        case 0x1a2624u: goto label_1a2624;
        case 0x1a2628u: goto label_1a2628;
        case 0x1a262cu: goto label_1a262c;
        case 0x1a2630u: goto label_1a2630;
        case 0x1a2634u: goto label_1a2634;
        default: break;
    }

    ctx->pc = 0x1a25c0u;

label_1a25c0:
    // 0x1a25c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a25c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a25c4:
    // 0x1a25c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a25c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a25c8:
    // 0x1a25c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a25c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a25cc:
    // 0x1a25cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a25ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a25d0:
    // 0x1a25d0: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x1a25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_1a25d4:
    // 0x1a25d4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1a25d8:
    if (ctx->pc == 0x1A25D8u) {
        ctx->pc = 0x1A25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25D4u;
        // 0x1a25d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25DCu;
        goto label_1a25dc;
    }
    ctx->pc = 0x1A25D4u;
    {
        const bool branch_taken_0x1a25d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25D4u;
        // 0x1a25d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25d4) {
            ctx->pc = 0x1A2624u;
            goto label_1a2624;
        }
    }
    ctx->pc = 0x1A25DCu;
label_1a25dc:
    // 0x1a25dc: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1a25dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1a25e0:
    // 0x1a25e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a25e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a25e4:
    // 0x1a25e4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a25e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a25e8:
    // 0x1a25e8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a25e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a25ec:
    // 0x1a25ec: 0x40f809  jalr        $v0
label_1a25f0:
    if (ctx->pc == 0x1A25F0u) {
        ctx->pc = 0x1A25F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25ECu;
        // 0x1a25f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25F4u;
        goto label_1a25f4;
    }
    ctx->pc = 0x1A25ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A25F4u);
        ctx->pc = 0x1A25F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25ECu;
        // 0x1a25f0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A25ECu, 0x1A25F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A25F4u;
label_1a25f4:
    // 0x1a25f4: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x1a25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_1a25f8:
    // 0x1a25f8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1a25f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a25fc:
    // 0x1a25fc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1a2600:
    if (ctx->pc == 0x1A2600u) {
        ctx->pc = 0x1A2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25FCu;
        // 0x1a2600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2604u;
        goto label_1a2604;
    }
    ctx->pc = 0x1A25FCu;
    {
        const bool branch_taken_0x1a25fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25FCu;
        // 0x1a2600: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25fc) {
            ctx->pc = 0x1A2624u;
            goto label_1a2624;
        }
    }
    ctx->pc = 0x1A2604u;
label_1a2604:
    // 0x1a2604: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a2604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2608:
    // 0x1a2608: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1a2608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_1a260c:
    // 0x1a260c: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a260cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a2610:
    // 0x1a2610: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a2610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a2614:
    // 0x1a2614: 0x60f809  jalr        $v1
label_1a2618:
    if (ctx->pc == 0x1A2618u) {
        ctx->pc = 0x1A2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2614u;
        // 0x1a2618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A261Cu;
        goto label_1a261c;
    }
    ctx->pc = 0x1A2614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A261Cu);
        ctx->pc = 0x1A2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2614u;
        // 0x1a2618: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2614u, 0x1A261Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A261Cu;
label_1a261c:
    // 0x1a261c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a2620:
    if (ctx->pc == 0x1A2620u) {
        ctx->pc = 0x1A2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A261Cu;
        // 0x1a2620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2624u;
        goto label_1a2624;
    }
    ctx->pc = 0x1A261Cu;
    {
        const bool branch_taken_0x1a261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A261Cu;
        // 0x1a2620: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a261c) {
            ctx->pc = 0x1A2628u;
            goto label_1a2628;
        }
    }
    ctx->pc = 0x1A2624u;
label_1a2624:
    // 0x1a2624: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a2624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2628:
    // 0x1a2628: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a2628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a262c:
    // 0x1a262c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a262cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2630:
    // 0x1a2630: 0x3e00008  jr          $ra
label_1a2634:
    if (ctx->pc == 0x1A2634u) {
        ctx->pc = 0x1A2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2630u;
        // 0x1a2634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2638u;
        goto label_fallthrough_0x1a2630;
    }
    ctx->pc = 0x1A2630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2630u;
        // 0x1a2634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2630:
    ctx->pc = 0x1A2638u;
}
