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

// Function: sub_002354B8
// Address: 0x2354b8 - 0x235530
void sub_002354B8_0x2354b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002354B8_0x2354b8");
#endif

    switch (ctx->pc) {
        case 0x2354d8u: goto label_2354d8;
        case 0x2354e0u: goto label_2354e0;
        case 0x2354fcu: goto label_2354fc;
        case 0x23550cu: goto label_23550c;
        case 0x235518u: goto label_235518;
        default: break;
    }

    ctx->pc = 0x2354b8u;

    // 0x2354b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2354b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2354bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2354bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2354c0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2354c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2354c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2354c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2354c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2354c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2354cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2354ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2354d0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2354D0u;
    SET_GPR_U32(ctx, 31, 0x2354D8u);
    ctx->pc = 0x2354D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354D0u;
    // 0x2354d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2354D0u, 0x2354D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354D8u;
label_2354d8:
    // 0x2354d8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2354D8u;
    SET_GPR_U32(ctx, 31, 0x2354E0u);
    ctx->pc = 0x2354DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354D8u;
    // 0x2354dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2354D8u, 0x2354E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354E0u;
label_2354e0:
    // 0x2354e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2354e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2354e4: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2354E4u;
    {
        const bool branch_taken_0x2354e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2354e4) {
            ctx->pc = 0x2354E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2354E4u;
            // 0x2354e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23551Cu;
            goto label_23551c;
        }
    }
    ctx->pc = 0x2354ECu;
    // 0x2354ec: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2354ECu;
    {
        const bool branch_taken_0x2354ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354ECu;
        // 0x2354f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354ec) {
            ctx->pc = 0x235504u;
            goto label_235504;
        }
    }
    ctx->pc = 0x2354F4u;
    // 0x2354f4: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x2354F4u;
    SET_GPR_U32(ctx, 31, 0x2354FCu);
    ctx->pc = 0x2354F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2354F4u;
    // 0x2354f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2354F4u, 0x2354FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2354FCu;
label_2354fc:
    // 0x2354fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2354FCu;
    {
        const bool branch_taken_0x2354fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354FCu;
        // 0x235500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354fc) {
            ctx->pc = 0x235510u;
            goto label_235510;
        }
    }
    ctx->pc = 0x235504u;
label_235504:
    // 0x235504: 0xc08be36  jal         func_22F8D8
    ctx->pc = 0x235504u;
    SET_GPR_U32(ctx, 31, 0x23550Cu);
    ctx->pc = 0x235508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235504u;
    // 0x235508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x235504u, 0x23550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23550Cu;
label_23550c:
    // 0x23550c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235510:
    // 0x235510: 0xc089974  jal         func_2265D0
    ctx->pc = 0x235510u;
    SET_GPR_U32(ctx, 31, 0x235518u);
    ctx->pc = 0x235514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235510u;
    // 0x235514: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x235510u, 0x235518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235518u;
label_235518:
    // 0x235518: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x235518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23551c:
    // 0x23551c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23551cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235524: 0x3e00008  jr          $ra
    ctx->pc = 0x235524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235524u;
        // 0x235528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23552Cu;
    // 0x23552c: 0x0  nop
    ctx->pc = 0x23552cu;
    // NOP
    ctx->pc = 0x235530u;
}
