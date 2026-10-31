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

// Function: sub_00105510
// Address: 0x105510 - 0x105570
void sub_00105510_0x105510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105510_0x105510");
#endif

    switch (ctx->pc) {
        case 0x105510u: goto label_105510;
        case 0x105514u: goto label_105514;
        case 0x105518u: goto label_105518;
        case 0x10551cu: goto label_10551c;
        case 0x105520u: goto label_105520;
        case 0x105524u: goto label_105524;
        case 0x105528u: goto label_105528;
        case 0x10552cu: goto label_10552c;
        case 0x105530u: goto label_105530;
        case 0x105534u: goto label_105534;
        case 0x105538u: goto label_105538;
        case 0x10553cu: goto label_10553c;
        case 0x105540u: goto label_105540;
        case 0x105544u: goto label_105544;
        case 0x105548u: goto label_105548;
        case 0x10554cu: goto label_10554c;
        case 0x105550u: goto label_105550;
        case 0x105554u: goto label_105554;
        case 0x105558u: goto label_105558;
        case 0x10555cu: goto label_10555c;
        case 0x105560u: goto label_105560;
        case 0x105564u: goto label_105564;
        case 0x105568u: goto label_105568;
        case 0x10556cu: goto label_10556c;
        default: break;
    }

    ctx->pc = 0x105510u;

label_105510:
    // 0x105510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_105514:
    // 0x105514: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x105514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_105518:
    // 0x105518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10551c:
    // 0x10551c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10551cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_105520:
    // 0x105520: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x105520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_105524:
    // 0x105524: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x105524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_105528:
    // 0x105528: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x105528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_10552c:
    // 0x10552c: 0x60f809  jalr        $v1
label_105530:
    if (ctx->pc == 0x105530u) {
        ctx->pc = 0x105530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10552Cu;
        // 0x105530: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105534u;
        goto label_105534;
    }
    ctx->pc = 0x10552Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x105534u);
        ctx->pc = 0x105530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10552Cu;
        // 0x105530: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10552Cu, 0x105534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x105534u;
label_105534:
    // 0x105534: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x105534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_105538:
    // 0x105538: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_10553c:
    if (ctx->pc == 0x10553Cu) {
        ctx->pc = 0x10553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105538u;
        // 0x10553c: 0x8c45a898  lw          $a1, -0x5768($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944920)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x105540u;
        goto label_105540;
    }
    ctx->pc = 0x105538u;
    {
        const bool branch_taken_0x105538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105538u;
        // 0x10553c: 0x8c45a898  lw          $a1, -0x5768($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105538) {
            ctx->pc = 0x10555Cu;
            goto label_10555c;
        }
    }
    ctx->pc = 0x105540u;
label_105540:
    // 0x105540: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x105540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_105544:
    // 0x105544: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x105544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_105548:
    // 0x105548: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10554c:
    // 0x10554c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10554cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_105550:
    // 0x105550: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x105550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_105554:
    // 0x105554: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x105554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_105558:
    // 0x105558: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x105558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_10555c:
    // 0x10555c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10555cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_105560:
    // 0x105560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_105564:
    // 0x105564: 0x3e00008  jr          $ra
label_105568:
    if (ctx->pc == 0x105568u) {
        ctx->pc = 0x105568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105564u;
        // 0x105568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10556Cu;
        goto label_10556c;
    }
    ctx->pc = 0x105564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105564u;
        // 0x105568: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10556Cu;
label_10556c:
    // 0x10556c: 0x0  nop
    ctx->pc = 0x10556cu;
    // NOP
    ctx->pc = 0x105570u;
}
