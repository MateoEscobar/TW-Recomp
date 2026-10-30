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

// Function: sub_003A2688
// Address: 0x3a2688 - 0x3a26e0
void sub_003A2688_0x3a2688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2688_0x3a2688");
#endif

    switch (ctx->pc) {
        case 0x3a26a8u: goto label_3a26a8;
        case 0x3a26b8u: goto label_3a26b8;
        case 0x3a26c8u: goto label_3a26c8;
        default: break;
    }

    ctx->pc = 0x3a2688u;

    // 0x3a2688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a2688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a268c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a268cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a2690: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3a2690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3a2694: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a2694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2698: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a2698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3a269c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a26a0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3A26A0u;
    SET_GPR_U32(ctx, 31, 0x3A26A8u);
    ctx->pc = 0x3A26A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A26A0u;
    // 0x3a26a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3A26A0u, 0x3A26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A26A8u;
label_3a26a8:
    // 0x3a26a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A26A8u;
    {
        const bool branch_taken_0x3a26a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A26A8u;
        // 0x3a26ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a26a8) {
            ctx->pc = 0x3A26C8u;
            goto label_3a26c8;
        }
    }
    ctx->pc = 0x3A26B0u;
    // 0x3a26b0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3A26B0u;
    SET_GPR_U32(ctx, 31, 0x3A26B8u);
    ctx->pc = 0x3A26B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A26B0u;
    // 0x3a26b4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3A26B0u, 0x3A26B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A26B8u;
label_3a26b8:
    // 0x3a26b8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3a26b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3a26bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a26bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a26c0: 0xc0e8b80  jal         func_3A2E00
    ctx->pc = 0x3A26C0u;
    SET_GPR_U32(ctx, 31, 0x3A26C8u);
    ctx->pc = 0x3A26C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A26C0u;
    // 0x3a26c4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3A26C0u, 0x3A26C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A26C8u;
label_3a26c8:
    // 0x3a26c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a26c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a26cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a26ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a26d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a26d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a26d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A26D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A26D4u;
        // 0x3a26d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A26D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A26DCu;
    // 0x3a26dc: 0x0  nop
    ctx->pc = 0x3a26dcu;
    // NOP
    ctx->pc = 0x3a26e0u;
}
