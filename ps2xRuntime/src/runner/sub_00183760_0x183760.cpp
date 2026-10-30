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

// Function: sub_00183760
// Address: 0x183760 - 0x1837c8
void sub_00183760_0x183760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183760_0x183760");
#endif

    ctx->pc = 0x183760u;

    // 0x183760: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x183760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x183764: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x183764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183768: 0x24836428  addiu       $v1, $a0, 0x6428
    ctx->pc = 0x183768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 25640));
    // 0x18376c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x18376cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x183770: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x183770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x183774: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x183774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x183778: 0x2cc20064  sltiu       $v0, $a2, 0x64
    ctx->pc = 0x183778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x18377c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18377Cu;
    {
        const bool branch_taken_0x18377c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18377Cu;
        // 0x183780: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18377c) {
            ctx->pc = 0x18378Cu;
            goto label_18378c;
        }
    }
    ctx->pc = 0x183784u;
    // 0x183784: 0x3e00008  jr          $ra
    ctx->pc = 0x183784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183784u;
        // 0x183788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18378Cu;
label_18378c:
    // 0x18378c: 0x8c436420  lw          $v1, 0x6420($v0)
    ctx->pc = 0x18378cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25632)));
    // 0x183790: 0x62980  sll         $a1, $a2, 6
    ctx->pc = 0x183790u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x183794: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x183794u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x183798: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x183798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18379c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x18379cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1837a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1837a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1837a4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1837a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1837a8: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x1837a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1837ac: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x1837acu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x1837b0: 0x78e40020  lq          $a0, 0x20($a3)
    ctx->pc = 0x1837b0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1837b4: 0x7ca40020  sq          $a0, 0x20($a1)
    ctx->pc = 0x1837b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 4));
    // 0x1837b8: 0x78e30030  lq          $v1, 0x30($a3)
    ctx->pc = 0x1837b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1837bc: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x1837bcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
    // 0x1837c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1837C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1837C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837C0u;
        // 0x1837c4: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1837C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1837C8u;
}
