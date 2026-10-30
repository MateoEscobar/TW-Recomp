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

// Function: sub_003A1810
// Address: 0x3a1810 - 0x3a1858
void sub_003A1810_0x3a1810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1810_0x3a1810");
#endif

    switch (ctx->pc) {
        case 0x3a1838u: goto label_3a1838;
        case 0x3a1844u: goto label_3a1844;
        default: break;
    }

    ctx->pc = 0x3a1810u;

    // 0x3a1810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a1810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a1814: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a1814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3a1818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a1818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3a181c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a181cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a1824: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3a1824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1828: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a1828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a182c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3a182cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3a1830: 0xc0e862e  jal         func_3A18B8
    ctx->pc = 0x3A1830u;
    SET_GPR_U32(ctx, 31, 0x3A1838u);
    ctx->pc = 0x3A1834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1830u;
    // 0x3a1834: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3A1830u, 0x3A1838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1838u;
label_3a1838:
    // 0x3a1838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a183c: 0xc0e896c  jal         func_3A25B0
    ctx->pc = 0x3A183Cu;
    SET_GPR_U32(ctx, 31, 0x3A1844u);
    ctx->pc = 0x3A1840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A183Cu;
    // 0x3a1840: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3A183Cu, 0x3A1844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1844u;
label_3a1844:
    // 0x3a1844: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a1844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a1848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a1848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a184c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a184cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1850: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1850u;
        // 0x3a1854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1858u;
}
