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

// Function: sub_00357098
// Address: 0x357098 - 0x3570f0
void sub_00357098_0x357098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357098_0x357098");
#endif

    switch (ctx->pc) {
        case 0x3570b8u: goto label_3570b8;
        case 0x3570d0u: goto label_3570d0;
        case 0x3570dcu: goto label_3570dc;
        default: break;
    }

    ctx->pc = 0x357098u;

    // 0x357098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35709c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3570a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3570a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3570a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3570a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3570a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3570a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3570ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3570acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3570b0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3570B0u;
    SET_GPR_U32(ctx, 31, 0x3570B8u);
    ctx->pc = 0x3570B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3570B0u;
    // 0x3570b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3570B0u, 0x3570B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570B8u;
label_3570b8:
    // 0x3570b8: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3570B8u;
    {
        const bool branch_taken_0x3570b8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3570b8) {
            ctx->pc = 0x3570BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3570B8u;
            // 0x3570bc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3570D4u;
            goto label_3570d4;
        }
    }
    ctx->pc = 0x3570C0u;
    // 0x3570c0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3570c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3570c4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3570c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3570c8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3570C8u;
    SET_GPR_U32(ctx, 31, 0x3570D0u);
    ctx->pc = 0x3570CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3570C8u;
    // 0x3570cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3570C8u, 0x3570D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570D0u;
label_3570d0:
    // 0x3570d0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3570d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3570d4:
    // 0x3570d4: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x3570D4u;
    SET_GPR_U32(ctx, 31, 0x3570DCu);
    ctx->pc = 0x3570D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3570D4u;
    // 0x3570d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x3570D4u, 0x3570DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3570DCu;
label_3570dc:
    // 0x3570dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3570dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3570e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3570e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3570e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3570e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3570e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3570E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3570ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3570E8u;
        // 0x3570ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3570E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3570F0u;
}
