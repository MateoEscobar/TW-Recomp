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

// Function: sub_004BF7A8
// Address: 0x4bf7a8 - 0x4bf808
void sub_004BF7A8_0x4bf7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BF7A8_0x4bf7a8");
#endif

    switch (ctx->pc) {
        case 0x4bf7a8u: goto label_4bf7a8;
        case 0x4bf7acu: goto label_4bf7ac;
        case 0x4bf7b0u: goto label_4bf7b0;
        case 0x4bf7b4u: goto label_4bf7b4;
        case 0x4bf7b8u: goto label_4bf7b8;
        case 0x4bf7bcu: goto label_4bf7bc;
        case 0x4bf7c0u: goto label_4bf7c0;
        case 0x4bf7c4u: goto label_4bf7c4;
        case 0x4bf7c8u: goto label_4bf7c8;
        case 0x4bf7ccu: goto label_4bf7cc;
        case 0x4bf7d0u: goto label_4bf7d0;
        case 0x4bf7d4u: goto label_4bf7d4;
        case 0x4bf7d8u: goto label_4bf7d8;
        case 0x4bf7dcu: goto label_4bf7dc;
        case 0x4bf7e0u: goto label_4bf7e0;
        case 0x4bf7e4u: goto label_4bf7e4;
        case 0x4bf7e8u: goto label_4bf7e8;
        case 0x4bf7ecu: goto label_4bf7ec;
        case 0x4bf7f0u: goto label_4bf7f0;
        case 0x4bf7f4u: goto label_4bf7f4;
        case 0x4bf7f8u: goto label_4bf7f8;
        case 0x4bf7fcu: goto label_4bf7fc;
        case 0x4bf800u: goto label_4bf800;
        case 0x4bf804u: goto label_4bf804;
        default: break;
    }

    ctx->pc = 0x4bf7a8u;

label_4bf7a8:
    // 0x4bf7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4bf7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4bf7ac:
    // 0x4bf7ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4bf7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4bf7b0:
    // 0x4bf7b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4bf7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4bf7b4:
    // 0x4bf7b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bf7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bf7b8:
    // 0x4bf7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4bf7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4bf7bc:
    // 0x4bf7bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4bf7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4bf7c0:
    // 0x4bf7c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4bf7c4:
    if (ctx->pc == 0x4BF7C4u) {
        ctx->pc = 0x4BF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF7C0u;
        // 0x4bf7c4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF7C8u;
        goto label_4bf7c8;
    }
    ctx->pc = 0x4BF7C0u;
    {
        const bool branch_taken_0x4bf7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF7C0u;
        // 0x4bf7c4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bf7c0) {
            ctx->pc = 0x4BF7F0u;
            goto label_4bf7f0;
        }
    }
    ctx->pc = 0x4BF7C8u;
label_4bf7c8:
    // 0x4bf7c8: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x4bf7c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4bf7cc:
    // 0x4bf7cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4bf7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4bf7d0:
    // 0x4bf7d0: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4bf7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4bf7d4:
    // 0x4bf7d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4bf7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4bf7d8:
    // 0x4bf7d8: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x4bf7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_4bf7dc:
    // 0x4bf7dc: 0x40f809  jalr        $v0
label_4bf7e0:
    if (ctx->pc == 0x4BF7E0u) {
        ctx->pc = 0x4BF7E4u;
        goto label_4bf7e4;
    }
    ctx->pc = 0x4BF7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4BF7E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF7DCu, 0x4BF7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4BF7E4u;
label_4bf7e4:
    // 0x4bf7e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4bf7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4bf7e8:
    // 0x4bf7e8: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_4bf7ec:
    if (ctx->pc == 0x4BF7ECu) {
        ctx->pc = 0x4BF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF7E8u;
        // 0x4bf7ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF7F0u;
        goto label_4bf7f0;
    }
    ctx->pc = 0x4BF7E8u;
    {
        const bool branch_taken_0x4bf7e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bf7e8) {
            ctx->pc = 0x4BF7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BF7E8u;
            // 0x4bf7ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BF7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bf7d0;
        }
    }
    ctx->pc = 0x4BF7F0u;
label_4bf7f0:
    // 0x4bf7f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4bf7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4bf7f4:
    // 0x4bf7f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4bf7f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4bf7f8:
    // 0x4bf7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4bf7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4bf7fc:
    // 0x4bf7fc: 0x3e00008  jr          $ra
label_4bf800:
    if (ctx->pc == 0x4BF800u) {
        ctx->pc = 0x4BF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF7FCu;
        // 0x4bf800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BF804u;
        goto label_4bf804;
    }
    ctx->pc = 0x4BF7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BF7FCu;
        // 0x4bf800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BF7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BF804u;
label_4bf804:
    // 0x4bf804: 0x0  nop
    ctx->pc = 0x4bf804u;
    // NOP
    ctx->pc = 0x4bf808u;
}
