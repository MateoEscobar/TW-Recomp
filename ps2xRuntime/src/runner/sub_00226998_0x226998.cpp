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

// Function: sub_00226998
// Address: 0x226998 - 0x2269d8
void sub_00226998_0x226998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226998_0x226998");
#endif

    switch (ctx->pc) {
        case 0x226998u: goto label_226998;
        case 0x22699cu: goto label_22699c;
        case 0x2269a0u: goto label_2269a0;
        case 0x2269a4u: goto label_2269a4;
        case 0x2269a8u: goto label_2269a8;
        case 0x2269acu: goto label_2269ac;
        case 0x2269b0u: goto label_2269b0;
        case 0x2269b4u: goto label_2269b4;
        case 0x2269b8u: goto label_2269b8;
        case 0x2269bcu: goto label_2269bc;
        case 0x2269c0u: goto label_2269c0;
        case 0x2269c4u: goto label_2269c4;
        case 0x2269c8u: goto label_2269c8;
        case 0x2269ccu: goto label_2269cc;
        case 0x2269d0u: goto label_2269d0;
        case 0x2269d4u: goto label_2269d4;
        default: break;
    }

    ctx->pc = 0x226998u;

label_226998:
    // 0x226998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22699c:
    // 0x22699c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2269a0:
    // 0x2269a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2269a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2269a4:
    // 0x2269a4: 0x8c9000d4  lw          $s0, 0xD4($a0)
    ctx->pc = 0x2269a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_2269a8:
    // 0x2269a8: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_2269ac:
    if (ctx->pc == 0x2269ACu) {
        ctx->pc = 0x2269ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269A8u;
        // 0x2269ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2269B0u;
        goto label_2269b0;
    }
    ctx->pc = 0x2269A8u;
    {
        const bool branch_taken_0x2269a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2269a8) {
            ctx->pc = 0x2269ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2269A8u;
            // 0x2269ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2269CCu;
            goto label_2269cc;
        }
    }
    ctx->pc = 0x2269B0u;
label_2269b0:
    // 0x2269b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2269b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2269b4:
    // 0x2269b4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2269b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2269b8:
    // 0x2269b8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2269b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2269bc:
    // 0x2269bc: 0x40f809  jalr        $v0
label_2269c0:
    if (ctx->pc == 0x2269C0u) {
        ctx->pc = 0x2269C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269BCu;
        // 0x2269c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2269C4u;
        goto label_2269c4;
    }
    ctx->pc = 0x2269BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2269C4u);
        ctx->pc = 0x2269C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269BCu;
        // 0x2269c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2269BCu, 0x2269C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2269C4u;
label_2269c4:
    // 0x2269c4: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x2269c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
label_2269c8:
    // 0x2269c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2269c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2269cc:
    // 0x2269cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2269ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2269d0:
    // 0x2269d0: 0x3e00008  jr          $ra
label_2269d4:
    if (ctx->pc == 0x2269D4u) {
        ctx->pc = 0x2269D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269D0u;
        // 0x2269d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2269D8u;
        goto label_fallthrough_0x2269d0;
    }
    ctx->pc = 0x2269D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2269D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2269D0u;
        // 0x2269d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2269D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2269d0:
    ctx->pc = 0x2269D8u;
}
