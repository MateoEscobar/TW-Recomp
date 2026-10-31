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

// Function: sub_004134A0
// Address: 0x4134a0 - 0x4134f8
void sub_004134A0_0x4134a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004134A0_0x4134a0");
#endif

    switch (ctx->pc) {
        case 0x4134a0u: goto label_4134a0;
        case 0x4134a4u: goto label_4134a4;
        case 0x4134a8u: goto label_4134a8;
        case 0x4134acu: goto label_4134ac;
        case 0x4134b0u: goto label_4134b0;
        case 0x4134b4u: goto label_4134b4;
        case 0x4134b8u: goto label_4134b8;
        case 0x4134bcu: goto label_4134bc;
        case 0x4134c0u: goto label_4134c0;
        case 0x4134c4u: goto label_4134c4;
        case 0x4134c8u: goto label_4134c8;
        case 0x4134ccu: goto label_4134cc;
        case 0x4134d0u: goto label_4134d0;
        case 0x4134d4u: goto label_4134d4;
        case 0x4134d8u: goto label_4134d8;
        case 0x4134dcu: goto label_4134dc;
        case 0x4134e0u: goto label_4134e0;
        case 0x4134e4u: goto label_4134e4;
        case 0x4134e8u: goto label_4134e8;
        case 0x4134ecu: goto label_4134ec;
        case 0x4134f0u: goto label_4134f0;
        case 0x4134f4u: goto label_4134f4;
        default: break;
    }

    ctx->pc = 0x4134a0u;

label_4134a0:
    // 0x4134a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4134a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4134a4:
    // 0x4134a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4134a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4134a8:
    // 0x4134a8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_4134ac:
    if (ctx->pc == 0x4134ACu) {
        ctx->pc = 0x4134ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4134A8u;
        // 0x4134ac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4134B0u;
        goto label_4134b0;
    }
    ctx->pc = 0x4134A8u;
    {
        const bool branch_taken_0x4134a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4134ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4134A8u;
        // 0x4134ac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4134a8) {
            ctx->pc = 0x4134E4u;
            goto label_4134e4;
        }
    }
    ctx->pc = 0x4134B0u;
label_4134b0:
    // 0x4134b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4134b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4134b4:
    // 0x4134b4: 0x249000f0  addiu       $s0, $a0, 0xF0
    ctx->pc = 0x4134b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
label_4134b8:
    // 0x4134b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x4134b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_4134bc:
    // 0x4134bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x4134bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_4134c0:
    // 0x4134c0: 0x40f809  jalr        $v0
label_4134c4:
    if (ctx->pc == 0x4134C4u) {
        ctx->pc = 0x4134C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4134C0u;
        // 0x4134c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4134C8u;
        goto label_4134c8;
    }
    ctx->pc = 0x4134C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4134C8u);
        ctx->pc = 0x4134C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4134C0u;
        // 0x4134c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4134C0u, 0x4134C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4134C8u;
label_4134c8:
    // 0x4134c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4134c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4134cc:
    // 0x4134cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4134ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4134d0:
    // 0x4134d0: 0xc136e3e  jal         func_4DB8F8
label_4134d4:
    if (ctx->pc == 0x4134D4u) {
        ctx->pc = 0x4134D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4134D0u;
        // 0x4134d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4134D8u;
        goto label_4134d8;
    }
    ctx->pc = 0x4134D0u;
    SET_GPR_U32(ctx, 31, 0x4134D8u);
    ctx->pc = 0x4134D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4134D0u;
    // 0x4134d4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB8F8u, 0x4134D0u, 0x4134D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4134D8u;
label_4134d8:
    // 0x4134d8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4134d8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_4134dc:
    // 0x4134dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_4134e0:
    if (ctx->pc == 0x4134E0u) {
        ctx->pc = 0x4134E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4134DCu;
        // 0x4134e0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4134E4u;
        goto label_4134e4;
    }
    ctx->pc = 0x4134DCu;
    {
        const bool branch_taken_0x4134dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4134E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4134DCu;
        // 0x4134e0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4134dc) {
            ctx->pc = 0x4134E8u;
            goto label_4134e8;
        }
    }
    ctx->pc = 0x4134E4u;
label_4134e4:
    // 0x4134e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4134e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4134e8:
    // 0x4134e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4134e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4134ec:
    // 0x4134ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4134ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4134f0:
    // 0x4134f0: 0x3e00008  jr          $ra
label_4134f4:
    if (ctx->pc == 0x4134F4u) {
        ctx->pc = 0x4134F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4134F0u;
        // 0x4134f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4134F8u;
        goto label_fallthrough_0x4134f0;
    }
    ctx->pc = 0x4134F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4134F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4134F0u;
        // 0x4134f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4134F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4134f0:
    ctx->pc = 0x4134F8u;
}
