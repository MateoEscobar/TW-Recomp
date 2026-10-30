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

// Function: sub_0032CC78
// Address: 0x32cc78 - 0x32ccd0
void sub_0032CC78_0x32cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CC78_0x32cc78");
#endif

    switch (ctx->pc) {
        case 0x32cc9cu: goto label_32cc9c;
        case 0x32ccb0u: goto label_32ccb0;
        case 0x32ccbcu: goto label_32ccbc;
        default: break;
    }

    ctx->pc = 0x32cc78u;

    // 0x32cc78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x32cc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x32cc7c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x32cc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x32cc80: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x32cc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x32cc84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32cc84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc88: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x32cc88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x32cc8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x32cc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cc90: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x32cc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x32cc94: 0xc0ca8d6  jal         func_32A358
    ctx->pc = 0x32CC94u;
    SET_GPR_U32(ctx, 31, 0x32CC9Cu);
    ctx->pc = 0x32CC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CC94u;
    // 0x32cc98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A358u, 0x32CC94u, 0x32CC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CC9Cu;
label_32cc9c:
    // 0x32cc9c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32cc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32cca0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32cca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cca4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32cca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32cca8: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x32CCA8u;
    SET_GPR_U32(ctx, 31, 0x32CCB0u);
    ctx->pc = 0x32CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CCA8u;
    // 0x32ccac: 0x24a55bd0  addiu       $a1, $a1, 0x5BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x32CCA8u, 0x32CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCB0u;
label_32ccb0:
    // 0x32ccb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ccb4: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x32CCB4u;
    SET_GPR_U32(ctx, 31, 0x32CCBCu);
    ctx->pc = 0x32CCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CCB4u;
    // 0x32ccb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x32CCB4u, 0x32CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CCBCu;
label_32ccbc:
    // 0x32ccbc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x32ccbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32ccc0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x32ccc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32ccc4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x32ccc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32ccc8: 0x3e00008  jr          $ra
    ctx->pc = 0x32CCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CCC8u;
        // 0x32cccc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CCD0u;
}
