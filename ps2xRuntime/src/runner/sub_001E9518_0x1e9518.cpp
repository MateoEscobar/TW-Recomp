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

// Function: sub_001E9518
// Address: 0x1e9518 - 0x1e95c0
void sub_001E9518_0x1e9518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9518_0x1e9518");
#endif

    switch (ctx->pc) {
        case 0x1e9598u: goto label_1e9598;
        case 0x1e95acu: goto label_1e95ac;
        default: break;
    }

    ctx->pc = 0x1e9518u;

    // 0x1e9518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e951c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e951cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e9520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e952c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e9530: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E9530u;
    {
        const bool branch_taken_0x1e9530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9530u;
        // 0x1e9534: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9530) {
            ctx->pc = 0x1E95ACu;
            goto label_1e95ac;
        }
    }
    ctx->pc = 0x1E9538u;
    // 0x1e9538: 0x80640019  lb          $a0, 0x19($v1)
    ctx->pc = 0x1e9538u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x1e953c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9540: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9540u;
    {
        const bool branch_taken_0x1e9540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9540u;
        // 0x1e9544: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9540) {
            ctx->pc = 0x1E955Cu;
            goto label_1e955c;
        }
    }
    ctx->pc = 0x1E9548u;
    // 0x1e9548: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1e9548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1e954c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1e954cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e9550: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1e9550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1e9554: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9554u;
    {
        const bool branch_taken_0x1e9554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9554u;
        // 0x1e9558: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9554) {
            ctx->pc = 0x1E9560u;
            goto label_1e9560;
        }
    }
    ctx->pc = 0x1E955Cu;
label_1e955c:
    // 0x1e955c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e955cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9560:
    // 0x1e9560: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E9560u;
    {
        const bool branch_taken_0x1e9560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9560u;
        // 0x1e9564: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9560) {
            ctx->pc = 0x1E95ACu;
            goto label_1e95ac;
        }
    }
    ctx->pc = 0x1E9568u;
    // 0x1e9568: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e9568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e956c: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x1e956cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1e9570: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9570u;
    {
        const bool branch_taken_0x1e9570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9570u;
        // 0x1e9574: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9570) {
            ctx->pc = 0x1E958Cu;
            goto label_1e958c;
        }
    }
    ctx->pc = 0x1E9578u;
    // 0x1e9578: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1e9578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1e957c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1e957cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e9580: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1e9580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1e9584: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E9584u;
    {
        const bool branch_taken_0x1e9584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9584u;
        // 0x1e9588: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9584) {
            ctx->pc = 0x1E9590u;
            goto label_1e9590;
        }
    }
    ctx->pc = 0x1E958Cu;
label_1e958c:
    // 0x1e958c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9590:
    // 0x1e9590: 0xc0512a0  jal         func_144A80
    ctx->pc = 0x1E9590u;
    SET_GPR_U32(ctx, 31, 0x1E9598u);
    ctx->pc = 0x1E9594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9590u;
    // 0x1e9594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A80u, 0x1E9590u, 0x1E9598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9598u;
label_1e9598:
    // 0x1e9598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e9598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e959c: 0x512824  and         $a1, $v0, $s1
    ctx->pc = 0x1e959cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1e95a0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1e95a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1e95a4: 0xc07a570  jal         func_1E95C0
    ctx->pc = 0x1E95A4u;
    SET_GPR_U32(ctx, 31, 0x1E95ACu);
    ctx->pc = 0x1E95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E95A4u;
    // 0x1e95a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95C0u, 0x1E95A4u, 0x1E95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E95ACu;
label_1e95ac:
    // 0x1e95ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e95acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e95b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e95b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e95b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e95b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e95b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E95B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E95BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95B8u;
        // 0x1e95bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E95B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E95C0u;
}
