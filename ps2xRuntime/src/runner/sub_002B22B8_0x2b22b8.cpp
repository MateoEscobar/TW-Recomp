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

// Function: sub_002B22B8
// Address: 0x2b22b8 - 0x2b2300
void sub_002B22B8_0x2b22b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B22B8_0x2b22b8");
#endif

    switch (ctx->pc) {
        case 0x2b22b8u: goto label_2b22b8;
        case 0x2b22bcu: goto label_2b22bc;
        case 0x2b22c0u: goto label_2b22c0;
        case 0x2b22c4u: goto label_2b22c4;
        case 0x2b22c8u: goto label_2b22c8;
        case 0x2b22ccu: goto label_2b22cc;
        case 0x2b22d0u: goto label_2b22d0;
        case 0x2b22d4u: goto label_2b22d4;
        case 0x2b22d8u: goto label_2b22d8;
        case 0x2b22dcu: goto label_2b22dc;
        case 0x2b22e0u: goto label_2b22e0;
        case 0x2b22e4u: goto label_2b22e4;
        case 0x2b22e8u: goto label_2b22e8;
        case 0x2b22ecu: goto label_2b22ec;
        case 0x2b22f0u: goto label_2b22f0;
        case 0x2b22f4u: goto label_2b22f4;
        case 0x2b22f8u: goto label_2b22f8;
        case 0x2b22fcu: goto label_2b22fc;
        default: break;
    }

    ctx->pc = 0x2b22b8u;

label_2b22b8:
    // 0x2b22b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b22b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2b22bc:
    // 0x2b22bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b22bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b22c0:
    // 0x2b22c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b22c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b22c4:
    // 0x2b22c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b22c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b22c8:
    // 0x2b22c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b22c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b22cc:
    // 0x2b22cc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b22ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b22d0:
    // 0x2b22d0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b22d4:
    // 0x2b22d4: 0x40f809  jalr        $v0
label_2b22d8:
    if (ctx->pc == 0x2B22D8u) {
        ctx->pc = 0x2B22D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22D4u;
        // 0x2b22d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22DCu;
        goto label_2b22dc;
    }
    ctx->pc = 0x2B22D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B22DCu);
        ctx->pc = 0x2B22D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22D4u;
        // 0x2b22d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B22D4u, 0x2B22DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B22DCu;
label_2b22dc:
    // 0x2b22dc: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2b22dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2b22e0:
    // 0x2b22e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b22e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b22e4:
    // 0x2b22e4: 0x24c63fd0  addiu       $a2, $a2, 0x3FD0
    ctx->pc = 0x2b22e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16336));
label_2b22e8:
    // 0x2b22e8: 0xc08e1a4  jal         func_238690
label_2b22ec:
    if (ctx->pc == 0x2B22ECu) {
        ctx->pc = 0x2B22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22E8u;
        // 0x2b22ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22F0u;
        goto label_2b22f0;
    }
    ctx->pc = 0x2B22E8u;
    SET_GPR_U32(ctx, 31, 0x2B22F0u);
    ctx->pc = 0x2B22ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B22E8u;
    // 0x2b22ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2B22E8u, 0x2B22F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B22F0u;
label_2b22f0:
    // 0x2b22f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b22f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b22f4:
    // 0x2b22f4: 0x3e00008  jr          $ra
label_2b22f8:
    if (ctx->pc == 0x2B22F8u) {
        ctx->pc = 0x2B22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22F4u;
        // 0x2b22f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B22FCu;
        goto label_2b22fc;
    }
    ctx->pc = 0x2B22F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22F4u;
        // 0x2b22f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B22F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B22FCu;
label_2b22fc:
    // 0x2b22fc: 0x0  nop
    ctx->pc = 0x2b22fcu;
    // NOP
    ctx->pc = 0x2b2300u;
}
