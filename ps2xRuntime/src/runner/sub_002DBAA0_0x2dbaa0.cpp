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

// Function: sub_002DBAA0
// Address: 0x2dbaa0 - 0x2dbae8
void sub_002DBAA0_0x2dbaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBAA0_0x2dbaa0");
#endif

    switch (ctx->pc) {
        case 0x2dbaa0u: goto label_2dbaa0;
        case 0x2dbaa4u: goto label_2dbaa4;
        case 0x2dbaa8u: goto label_2dbaa8;
        case 0x2dbaacu: goto label_2dbaac;
        case 0x2dbab0u: goto label_2dbab0;
        case 0x2dbab4u: goto label_2dbab4;
        case 0x2dbab8u: goto label_2dbab8;
        case 0x2dbabcu: goto label_2dbabc;
        case 0x2dbac0u: goto label_2dbac0;
        case 0x2dbac4u: goto label_2dbac4;
        case 0x2dbac8u: goto label_2dbac8;
        case 0x2dbaccu: goto label_2dbacc;
        case 0x2dbad0u: goto label_2dbad0;
        case 0x2dbad4u: goto label_2dbad4;
        case 0x2dbad8u: goto label_2dbad8;
        case 0x2dbadcu: goto label_2dbadc;
        case 0x2dbae0u: goto label_2dbae0;
        case 0x2dbae4u: goto label_2dbae4;
        default: break;
    }

    ctx->pc = 0x2dbaa0u;

label_2dbaa0:
    // 0x2dbaa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dbaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dbaa4:
    // 0x2dbaa4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dbaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2dbaa8:
    // 0x2dbaa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dbaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2dbaac:
    // 0x2dbaac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dbaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dbab0:
    // 0x2dbab0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2dbab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2dbab4:
    // 0x2dbab4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2dbab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dbab8:
    // 0x2dbab8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2dbab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2dbabc:
    // 0x2dbabc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2dbabcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2dbac0:
    // 0x2dbac0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2dbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2dbac4:
    // 0x2dbac4: 0x40f809  jalr        $v0
label_2dbac8:
    if (ctx->pc == 0x2DBAC8u) {
        ctx->pc = 0x2DBAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAC4u;
        // 0x2dbac8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBACCu;
        goto label_2dbacc;
    }
    ctx->pc = 0x2DBAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DBACCu);
        ctx->pc = 0x2DBAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAC4u;
        // 0x2dbac8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBAC4u, 0x2DBACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DBACCu;
label_2dbacc:
    // 0x2dbacc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2dbaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2dbad0:
    // 0x2dbad0: 0xc10586e  jal         func_4161B8
label_2dbad4:
    if (ctx->pc == 0x2DBAD4u) {
        ctx->pc = 0x2DBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAD0u;
        // 0x2dbad4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBAD8u;
        goto label_2dbad8;
    }
    ctx->pc = 0x2DBAD0u;
    SET_GPR_U32(ctx, 31, 0x2DBAD8u);
    ctx->pc = 0x2DBAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBAD0u;
    // 0x2dbad4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161B8u, 0x2DBAD0u, 0x2DBAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBAD8u;
label_2dbad8:
    // 0x2dbad8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dbad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dbadc:
    // 0x2dbadc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dbadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dbae0:
    // 0x2dbae0: 0x3e00008  jr          $ra
label_2dbae4:
    if (ctx->pc == 0x2DBAE4u) {
        ctx->pc = 0x2DBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAE0u;
        // 0x2dbae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DBAE8u;
        goto label_fallthrough_0x2dbae0;
    }
    ctx->pc = 0x2DBAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAE0u;
        // 0x2dbae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2dbae0:
    ctx->pc = 0x2DBAE8u;
}
