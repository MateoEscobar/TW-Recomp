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

// Function: sub_002ABE98
// Address: 0x2abe98 - 0x2abef8
void sub_002ABE98_0x2abe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABE98_0x2abe98");
#endif

    switch (ctx->pc) {
        case 0x2abec0u: goto label_2abec0;
        case 0x2abed0u: goto label_2abed0;
        default: break;
    }

    ctx->pc = 0x2abe98u;

    // 0x2abe98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2abe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2abe9c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2abe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2abea0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2abea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2abea4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2abea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2abea8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2abea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abeac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2abeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2abeb0: 0x24510ff8  addiu       $s1, $v0, 0xFF8
    ctx->pc = 0x2abeb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4088));
    // 0x2abeb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2abeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2abeb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2abeb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abebc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2abebcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x510FF8u));
label_2abec0:
    // 0x2abec0: 0x3a450001  xori        $a1, $s2, 0x1
    ctx->pc = 0x2abec0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x2abec4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2abec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2abec8: 0xc10335e  jal         func_40CD78
    ctx->pc = 0x2ABEC8u;
    SET_GPR_U32(ctx, 31, 0x2ABED0u);
    ctx->pc = 0x2ABECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABEC8u;
    // 0x2abecc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CD78u, 0x2ABEC8u, 0x2ABED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABED0u;
label_2abed0:
    // 0x2abed0: 0x2e02000d  sltiu       $v0, $s0, 0xD
    ctx->pc = 0x2abed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x2abed4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2ABED4u;
    {
        const bool branch_taken_0x2abed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abed4) {
            ctx->pc = 0x2ABED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABED4u;
            // 0x2abed8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2abec0;
        }
    }
    ctx->pc = 0x2ABEDCu;
    // 0x2abedc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2abedcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2abee0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2abee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2abee4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2abee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2abee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2abeec: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEECu;
        // 0x2abef0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABEF4u;
    // 0x2abef4: 0x0  nop
    ctx->pc = 0x2abef4u;
    // NOP
    ctx->pc = 0x2abef8u;
}
