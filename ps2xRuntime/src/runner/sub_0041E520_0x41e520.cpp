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

// Function: sub_0041E520
// Address: 0x41e520 - 0x41e5b0
void sub_0041E520_0x41e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041E520_0x41e520");
#endif

    switch (ctx->pc) {
        case 0x41e520u: goto label_41e520;
        case 0x41e524u: goto label_41e524;
        case 0x41e528u: goto label_41e528;
        case 0x41e52cu: goto label_41e52c;
        case 0x41e530u: goto label_41e530;
        case 0x41e534u: goto label_41e534;
        case 0x41e538u: goto label_41e538;
        case 0x41e53cu: goto label_41e53c;
        case 0x41e540u: goto label_41e540;
        case 0x41e544u: goto label_41e544;
        case 0x41e548u: goto label_41e548;
        case 0x41e54cu: goto label_41e54c;
        case 0x41e550u: goto label_41e550;
        case 0x41e554u: goto label_41e554;
        case 0x41e558u: goto label_41e558;
        case 0x41e55cu: goto label_41e55c;
        case 0x41e560u: goto label_41e560;
        case 0x41e564u: goto label_41e564;
        case 0x41e568u: goto label_41e568;
        case 0x41e56cu: goto label_41e56c;
        case 0x41e570u: goto label_41e570;
        case 0x41e574u: goto label_41e574;
        case 0x41e578u: goto label_41e578;
        case 0x41e57cu: goto label_41e57c;
        case 0x41e580u: goto label_41e580;
        case 0x41e584u: goto label_41e584;
        case 0x41e588u: goto label_41e588;
        case 0x41e58cu: goto label_41e58c;
        case 0x41e590u: goto label_41e590;
        case 0x41e594u: goto label_41e594;
        case 0x41e598u: goto label_41e598;
        case 0x41e59cu: goto label_41e59c;
        case 0x41e5a0u: goto label_41e5a0;
        case 0x41e5a4u: goto label_41e5a4;
        case 0x41e5a8u: goto label_41e5a8;
        case 0x41e5acu: goto label_41e5ac;
        default: break;
    }

    ctx->pc = 0x41e520u;

label_41e520:
    // 0x41e520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41e520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41e524:
    // 0x41e524: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41e524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41e528:
    // 0x41e528: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41e528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_41e52c:
    // 0x41e52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41e52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41e530:
    // 0x41e530: 0x80821014  lb          $v0, 0x1014($a0)
    ctx->pc = 0x41e530u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4116)));
label_41e534:
    // 0x41e534: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_41e538:
    if (ctx->pc == 0x41E538u) {
        ctx->pc = 0x41E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E534u;
        // 0x41e538: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E53Cu;
        goto label_41e53c;
    }
    ctx->pc = 0x41E534u;
    {
        const bool branch_taken_0x41e534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E534u;
        // 0x41e538: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e534) {
            ctx->pc = 0x41E59Cu;
            goto label_41e59c;
        }
    }
    ctx->pc = 0x41E53Cu;
label_41e53c:
    // 0x41e53c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x41e53cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_41e540:
    // 0x41e540: 0x24851014  addiu       $a1, $a0, 0x1014
    ctx->pc = 0x41e540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4116));
label_41e544:
    // 0x41e544: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x41e544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41e548:
    // 0x41e548: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x41e548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41e54c:
    // 0x41e54c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x41e54cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_41e550:
    // 0x41e550: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x41e550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_41e554:
    // 0x41e554: 0x40f809  jalr        $v0
label_41e558:
    if (ctx->pc == 0x41E558u) {
        ctx->pc = 0x41E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E554u;
        // 0x41e558: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E55Cu;
        goto label_41e55c;
    }
    ctx->pc = 0x41E554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41E55Cu);
        ctx->pc = 0x41E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E554u;
        // 0x41e558: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E554u, 0x41E55Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E55Cu;
label_41e55c:
    // 0x41e55c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_41e560:
    if (ctx->pc == 0x41E560u) {
        ctx->pc = 0x41E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E55Cu;
        // 0x41e560: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E564u;
        goto label_41e564;
    }
    ctx->pc = 0x41E55Cu;
    {
        const bool branch_taken_0x41e55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E55Cu;
        // 0x41e560: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e55c) {
            ctx->pc = 0x41E59Cu;
            goto label_41e59c;
        }
    }
    ctx->pc = 0x41E564u;
label_41e564:
    // 0x41e564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41e564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41e568:
    // 0x41e568: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41e568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41e56c:
    // 0x41e56c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x41e56cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_41e570:
    // 0x41e570: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x41e570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_41e574:
    // 0x41e574: 0x60f809  jalr        $v1
label_41e578:
    if (ctx->pc == 0x41E578u) {
        ctx->pc = 0x41E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E574u;
        // 0x41e578: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E57Cu;
        goto label_41e57c;
    }
    ctx->pc = 0x41E574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41E57Cu);
        ctx->pc = 0x41E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E574u;
        // 0x41e578: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E574u, 0x41E57Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E57Cu;
label_41e57c:
    // 0x41e57c: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x41e57cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41e580:
    // 0x41e580: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41e580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41e584:
    // 0x41e584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41e584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e588:
    // 0x41e588: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41e588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41e58c:
    // 0x41e58c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41e58cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41e590:
    // 0x41e590: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41e590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41e594:
    // 0x41e594: 0x60f809  jalr        $v1
label_41e598:
    if (ctx->pc == 0x41E598u) {
        ctx->pc = 0x41E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E594u;
        // 0x41e598: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E59Cu;
        goto label_41e59c;
    }
    ctx->pc = 0x41E594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41E59Cu);
        ctx->pc = 0x41E598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E594u;
        // 0x41e598: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E594u, 0x41E59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41E59Cu;
label_41e59c:
    // 0x41e59c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41e59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41e5a0:
    // 0x41e5a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41e5a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41e5a4:
    // 0x41e5a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41e5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41e5a8:
    // 0x41e5a8: 0x3e00008  jr          $ra
label_41e5ac:
    if (ctx->pc == 0x41E5ACu) {
        ctx->pc = 0x41E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E5A8u;
        // 0x41e5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41E5B0u;
        goto label_fallthrough_0x41e5a8;
    }
    ctx->pc = 0x41E5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41E5A8u;
        // 0x41e5ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41E5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41e5a8:
    ctx->pc = 0x41E5B0u;
}
