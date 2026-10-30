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

// Function: sub_0015E790
// Address: 0x15e790 - 0x15e7e8
void sub_0015E790_0x15e790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E790_0x15e790");
#endif

    switch (ctx->pc) {
        case 0x15e790u: goto label_15e790;
        case 0x15e794u: goto label_15e794;
        case 0x15e798u: goto label_15e798;
        case 0x15e79cu: goto label_15e79c;
        case 0x15e7a0u: goto label_15e7a0;
        case 0x15e7a4u: goto label_15e7a4;
        case 0x15e7a8u: goto label_15e7a8;
        case 0x15e7acu: goto label_15e7ac;
        case 0x15e7b0u: goto label_15e7b0;
        case 0x15e7b4u: goto label_15e7b4;
        case 0x15e7b8u: goto label_15e7b8;
        case 0x15e7bcu: goto label_15e7bc;
        case 0x15e7c0u: goto label_15e7c0;
        case 0x15e7c4u: goto label_15e7c4;
        case 0x15e7c8u: goto label_15e7c8;
        case 0x15e7ccu: goto label_15e7cc;
        case 0x15e7d0u: goto label_15e7d0;
        case 0x15e7d4u: goto label_15e7d4;
        case 0x15e7d8u: goto label_15e7d8;
        case 0x15e7dcu: goto label_15e7dc;
        case 0x15e7e0u: goto label_15e7e0;
        case 0x15e7e4u: goto label_15e7e4;
        default: break;
    }

    ctx->pc = 0x15e790u;

label_15e790:
    // 0x15e790: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15e794:
    // 0x15e794: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15e794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15e798:
    // 0x15e798: 0x8c43c784  lw          $v1, -0x387C($v0)
    ctx->pc = 0x15e798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952836)));
label_15e79c:
    // 0x15e79c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_15e7a0:
    if (ctx->pc == 0x15E7A0u) {
        ctx->pc = 0x15E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E79Cu;
        // 0x15e7a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E7A4u;
        goto label_15e7a4;
    }
    ctx->pc = 0x15E79Cu;
    {
        const bool branch_taken_0x15e79c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x15E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E79Cu;
        // 0x15e7a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e79c) {
            ctx->pc = 0x15E7ACu;
            goto label_15e7ac;
        }
    }
    ctx->pc = 0x15E7A4u;
label_15e7a4:
    // 0x15e7a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_15e7a8:
    if (ctx->pc == 0x15E7A8u) {
        ctx->pc = 0x15E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7A4u;
        // 0x15e7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E7ACu;
        goto label_15e7ac;
    }
    ctx->pc = 0x15E7A4u;
    {
        const bool branch_taken_0x15e7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7A4u;
        // 0x15e7a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e7a4) {
            ctx->pc = 0x15E7D8u;
            goto label_15e7d8;
        }
    }
    ctx->pc = 0x15E7ACu;
label_15e7ac:
    // 0x15e7ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_15e7b0:
    // 0x15e7b0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15e7b4:
    // 0x15e7b4: 0x244266a0  addiu       $v0, $v0, 0x66A0
    ctx->pc = 0x15e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26272));
label_15e7b8:
    // 0x15e7b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15e7bc:
    // 0x15e7bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15e7c0:
    // 0x15e7c0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x15e7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15e7c4:
    // 0x15e7c4: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x15e7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_15e7c8:
    // 0x15e7c8: 0x84a40010  lh          $a0, 0x10($a1)
    ctx->pc = 0x15e7c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_15e7cc:
    // 0x15e7cc: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x15e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_15e7d0:
    // 0x15e7d0: 0x40f809  jalr        $v0
label_15e7d4:
    if (ctx->pc == 0x15E7D4u) {
        ctx->pc = 0x15E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7D0u;
        // 0x15e7d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E7D8u;
        goto label_15e7d8;
    }
    ctx->pc = 0x15E7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15E7D8u);
        ctx->pc = 0x15E7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7D0u;
        // 0x15e7d4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E7D0u, 0x15E7D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E7D8u;
label_15e7d8:
    // 0x15e7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15e7dc:
    // 0x15e7dc: 0x3e00008  jr          $ra
label_15e7e0:
    if (ctx->pc == 0x15E7E0u) {
        ctx->pc = 0x15E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7DCu;
        // 0x15e7e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E7E4u;
        goto label_15e7e4;
    }
    ctx->pc = 0x15E7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E7DCu;
        // 0x15e7e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E7E4u;
label_15e7e4:
    // 0x15e7e4: 0x0  nop
    ctx->pc = 0x15e7e4u;
    // NOP
    ctx->pc = 0x15e7e8u;
}
