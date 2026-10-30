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

// Function: sub_003AF518
// Address: 0x3af518 - 0x3af590
void sub_003AF518_0x3af518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF518_0x3af518");
#endif

    switch (ctx->pc) {
        case 0x3af518u: goto label_3af518;
        case 0x3af51cu: goto label_3af51c;
        case 0x3af520u: goto label_3af520;
        case 0x3af524u: goto label_3af524;
        case 0x3af528u: goto label_3af528;
        case 0x3af52cu: goto label_3af52c;
        case 0x3af530u: goto label_3af530;
        case 0x3af534u: goto label_3af534;
        case 0x3af538u: goto label_3af538;
        case 0x3af53cu: goto label_3af53c;
        case 0x3af540u: goto label_3af540;
        case 0x3af544u: goto label_3af544;
        case 0x3af548u: goto label_3af548;
        case 0x3af54cu: goto label_3af54c;
        case 0x3af550u: goto label_3af550;
        case 0x3af554u: goto label_3af554;
        case 0x3af558u: goto label_3af558;
        case 0x3af55cu: goto label_3af55c;
        case 0x3af560u: goto label_3af560;
        case 0x3af564u: goto label_3af564;
        case 0x3af568u: goto label_3af568;
        case 0x3af56cu: goto label_3af56c;
        case 0x3af570u: goto label_3af570;
        case 0x3af574u: goto label_3af574;
        case 0x3af578u: goto label_3af578;
        case 0x3af57cu: goto label_3af57c;
        case 0x3af580u: goto label_3af580;
        case 0x3af584u: goto label_3af584;
        case 0x3af588u: goto label_3af588;
        case 0x3af58cu: goto label_3af58c;
        default: break;
    }

    ctx->pc = 0x3af518u;

label_3af518:
    // 0x3af518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3af518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3af51c:
    // 0x3af51c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3af51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3af520:
    // 0x3af520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3af520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3af524:
    // 0x3af524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3af524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3af528:
    // 0x3af528: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3af528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3af52c:
    // 0x3af52c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3af52cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3af530:
    // 0x3af530: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3af530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3af534:
    // 0x3af534: 0x40f809  jalr        $v0
label_3af538:
    if (ctx->pc == 0x3AF538u) {
        ctx->pc = 0x3AF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF534u;
        // 0x3af538: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF53Cu;
        goto label_3af53c;
    }
    ctx->pc = 0x3AF534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AF53Cu);
        ctx->pc = 0x3AF538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF534u;
        // 0x3af538: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF534u, 0x3AF53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AF53Cu;
label_3af53c:
    // 0x3af53c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3af53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3af540:
    // 0x3af540: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3af540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3af544:
    // 0x3af544: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3af544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3af548:
    // 0x3af548: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_3af54c:
    if (ctx->pc == 0x3AF54Cu) {
        ctx->pc = 0x3AF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF548u;
        // 0x3af54c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF550u;
        goto label_3af550;
    }
    ctx->pc = 0x3AF548u;
    {
        const bool branch_taken_0x3af548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AF54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF548u;
        // 0x3af54c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af548) {
            ctx->pc = 0x3AF57Cu;
            goto label_3af57c;
        }
    }
    ctx->pc = 0x3AF550u;
label_3af550:
    // 0x3af550: 0x920200b0  lbu         $v0, 0xB0($s0)
    ctx->pc = 0x3af550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 176)));
label_3af554:
    // 0x3af554: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3af554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3af558:
    // 0x3af558: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3af55c:
    if (ctx->pc == 0x3AF55Cu) {
        ctx->pc = 0x3AF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF558u;
        // 0x3af55c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF560u;
        goto label_3af560;
    }
    ctx->pc = 0x3AF558u;
    {
        const bool branch_taken_0x3af558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF558u;
        // 0x3af55c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af558) {
            ctx->pc = 0x3AF57Cu;
            goto label_3af57c;
        }
    }
    ctx->pc = 0x3AF560u;
label_3af560:
    // 0x3af560: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3af560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3af564:
    // 0x3af564: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3af564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3af568:
    // 0x3af568: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3af568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3af56c:
    // 0x3af56c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3af56cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3af570:
    // 0x3af570: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3af570u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3af574:
    // 0x3af574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3af574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3af578:
    // 0x3af578: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x3af578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_3af57c:
    // 0x3af57c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3af57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3af580:
    // 0x3af580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3af580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3af584:
    // 0x3af584: 0x3e00008  jr          $ra
label_3af588:
    if (ctx->pc == 0x3AF588u) {
        ctx->pc = 0x3AF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF584u;
        // 0x3af588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AF58Cu;
        goto label_3af58c;
    }
    ctx->pc = 0x3AF584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF584u;
        // 0x3af588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF58Cu;
label_3af58c:
    // 0x3af58c: 0x0  nop
    ctx->pc = 0x3af58cu;
    // NOP
    ctx->pc = 0x3af590u;
}
