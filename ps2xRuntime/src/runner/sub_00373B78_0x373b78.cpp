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

// Function: sub_00373B78
// Address: 0x373b78 - 0x373bf0
void sub_00373B78_0x373b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373B78_0x373b78");
#endif

    switch (ctx->pc) {
        case 0x373ba0u: goto label_373ba0;
        case 0x373ba8u: goto label_373ba8;
        case 0x373bbcu: goto label_373bbc;
        case 0x373bc4u: goto label_373bc4;
        case 0x373bd0u: goto label_373bd0;
        default: break;
    }

    ctx->pc = 0x373b78u;

    // 0x373b78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x373b7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373b80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x373b84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x373b88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373b90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x373b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373b98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373B98u;
    SET_GPR_U32(ctx, 31, 0x373BA0u);
    ctx->pc = 0x373B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373B98u;
    // 0x373b9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373B98u, 0x373BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BA0u;
label_373ba0:
    // 0x373ba0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373BA0u;
    SET_GPR_U32(ctx, 31, 0x373BA8u);
    ctx->pc = 0x373BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373BA0u;
    // 0x373ba4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373BA0u, 0x373BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BA8u;
label_373ba8:
    // 0x373ba8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x373ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x373bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bb4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373BB4u;
    SET_GPR_U32(ctx, 31, 0x373BBCu);
    ctx->pc = 0x373BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373BB4u;
    // 0x373bb8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373BB4u, 0x373BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BBCu;
label_373bbc:
    // 0x373bbc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373BBCu;
    SET_GPR_U32(ctx, 31, 0x373BC4u);
    ctx->pc = 0x373BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373BBCu;
    // 0x373bc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373BBCu, 0x373BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BC4u;
label_373bc4:
    // 0x373bc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bc8: 0xc05ab3c  jal         func_16ACF0
    ctx->pc = 0x373BC8u;
    SET_GPR_U32(ctx, 31, 0x373BD0u);
    ctx->pc = 0x373BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373BC8u;
    // 0x373bcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ACF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ACF0u, 0x373BC8u, 0x373BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373BD0u;
label_373bd0:
    // 0x373bd0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x373bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373bd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373bd8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x373bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373bdc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373bdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373be4: 0x3e00008  jr          $ra
    ctx->pc = 0x373BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373BE4u;
        // 0x373be8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373BECu;
    // 0x373bec: 0x0  nop
    ctx->pc = 0x373becu;
    // NOP
    ctx->pc = 0x373bf0u;
}
