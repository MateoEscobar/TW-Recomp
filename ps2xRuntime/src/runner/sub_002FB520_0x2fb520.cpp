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

// Function: sub_002FB520
// Address: 0x2fb520 - 0x2fb578
void sub_002FB520_0x2fb520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB520_0x2fb520");
#endif

    switch (ctx->pc) {
        case 0x2fb520u: goto label_2fb520;
        case 0x2fb524u: goto label_2fb524;
        case 0x2fb528u: goto label_2fb528;
        case 0x2fb52cu: goto label_2fb52c;
        case 0x2fb530u: goto label_2fb530;
        case 0x2fb534u: goto label_2fb534;
        case 0x2fb538u: goto label_2fb538;
        case 0x2fb53cu: goto label_2fb53c;
        case 0x2fb540u: goto label_2fb540;
        case 0x2fb544u: goto label_2fb544;
        case 0x2fb548u: goto label_2fb548;
        case 0x2fb54cu: goto label_2fb54c;
        case 0x2fb550u: goto label_2fb550;
        case 0x2fb554u: goto label_2fb554;
        case 0x2fb558u: goto label_2fb558;
        case 0x2fb55cu: goto label_2fb55c;
        case 0x2fb560u: goto label_2fb560;
        case 0x2fb564u: goto label_2fb564;
        case 0x2fb568u: goto label_2fb568;
        case 0x2fb56cu: goto label_2fb56c;
        case 0x2fb570u: goto label_2fb570;
        case 0x2fb574u: goto label_2fb574;
        default: break;
    }

    ctx->pc = 0x2fb520u;

label_2fb520:
    // 0x2fb520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2fb524:
    // 0x2fb524: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fb524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2fb528:
    // 0x2fb528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fb52c:
    // 0x2fb52c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fb52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fb530:
    // 0x2fb530: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fb530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fb534:
    // 0x2fb534: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fb534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fb538:
    // 0x2fb538: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_2fb53c:
    if (ctx->pc == 0x2FB53Cu) {
        ctx->pc = 0x2FB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB538u;
        // 0x2fb53c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB540u;
        goto label_2fb540;
    }
    ctx->pc = 0x2FB538u;
    {
        const bool branch_taken_0x2fb538 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb538) {
            ctx->pc = 0x2FB53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB538u;
            // 0x2fb53c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB568u;
            goto label_2fb568;
        }
    }
    ctx->pc = 0x2FB540u;
label_2fb540:
    // 0x2fb540: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2fb540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2fb544:
    // 0x2fb544: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2fb544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2fb548:
    // 0x2fb548: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2fb548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fb54c:
    // 0x2fb54c: 0x40f809  jalr        $v0
label_2fb550:
    if (ctx->pc == 0x2FB550u) {
        ctx->pc = 0x2FB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB54Cu;
        // 0x2fb550: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB554u;
        goto label_2fb554;
    }
    ctx->pc = 0x2FB54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FB554u);
        ctx->pc = 0x2FB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB54Cu;
        // 0x2fb550: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB54Cu, 0x2FB554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FB554u;
label_2fb554:
    // 0x2fb554: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2fb554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2fb558:
    // 0x2fb558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fb55c:
    // 0x2fb55c: 0xc08e36c  jal         func_238DB0
label_2fb560:
    if (ctx->pc == 0x2FB560u) {
        ctx->pc = 0x2FB560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB55Cu;
        // 0x2fb560: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB564u;
        goto label_2fb564;
    }
    ctx->pc = 0x2FB55Cu;
    SET_GPR_U32(ctx, 31, 0x2FB564u);
    ctx->pc = 0x2FB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB55Cu;
    // 0x2fb560: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238DB0u, 0x2FB55Cu, 0x2FB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB564u;
label_2fb564:
    // 0x2fb564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb568:
    // 0x2fb568: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fb568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fb56c:
    // 0x2fb56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fb570:
    // 0x2fb570: 0x3e00008  jr          $ra
label_2fb574:
    if (ctx->pc == 0x2FB574u) {
        ctx->pc = 0x2FB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB570u;
        // 0x2fb574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FB578u;
        goto label_fallthrough_0x2fb570;
    }
    ctx->pc = 0x2FB570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB570u;
        // 0x2fb574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2fb570:
    ctx->pc = 0x2FB578u;
}
