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

// Function: sub_00238190
// Address: 0x238190 - 0x2381f0
void sub_00238190_0x238190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238190_0x238190");
#endif

    switch (ctx->pc) {
        case 0x2381b4u: goto label_2381b4;
        case 0x2381bcu: goto label_2381bc;
        default: break;
    }

    ctx->pc = 0x238190u;

    // 0x238190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x238194: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238198: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x238198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23819c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23819cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2381a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2381a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2381a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2381a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2381ac: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2381ACu;
    SET_GPR_U32(ctx, 31, 0x2381B4u);
    ctx->pc = 0x2381B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2381ACu;
    // 0x2381b0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2381ACu, 0x2381B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2381B4u;
label_2381b4:
    // 0x2381b4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2381B4u;
    SET_GPR_U32(ctx, 31, 0x2381BCu);
    ctx->pc = 0x2381B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2381B4u;
    // 0x2381b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2381B4u, 0x2381BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2381BCu;
label_2381bc:
    // 0x2381bc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2381BCu;
    {
        const bool branch_taken_0x2381bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2381bc) {
            ctx->pc = 0x2381C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2381BCu;
            // 0x2381c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2381DCu;
            goto label_2381dc;
        }
    }
    ctx->pc = 0x2381C4u;
    // 0x2381c4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2381C4u;
    {
        const bool branch_taken_0x2381c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381C4u;
        // 0x2381c8: 0xac500250  sw          $s0, 0x250($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381c4) {
            ctx->pc = 0x2381D4u;
            goto label_2381d4;
        }
    }
    ctx->pc = 0x2381CCu;
    // 0x2381cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2381CCu;
    {
        const bool branch_taken_0x2381cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381CCu;
        // 0x2381d0: 0xa0510254  sb          $s1, 0x254($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 596), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381cc) {
            ctx->pc = 0x2381D8u;
            goto label_2381d8;
        }
    }
    ctx->pc = 0x2381D4u;
label_2381d4:
    // 0x2381d4: 0xa0400254  sb          $zero, 0x254($v0)
    ctx->pc = 0x2381d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 596), (uint8_t)GPR_U32(ctx, 0));
label_2381d8:
    // 0x2381d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2381d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2381dc:
    // 0x2381dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2381dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2381e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2381e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2381e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2381E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2381E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381E4u;
        // 0x2381e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2381E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2381ECu;
    // 0x2381ec: 0x0  nop
    ctx->pc = 0x2381ecu;
    // NOP
    ctx->pc = 0x2381f0u;
}
