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

// Function: sub_0030ACA8
// Address: 0x30aca8 - 0x30ad20
void sub_0030ACA8_0x30aca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030ACA8_0x30aca8");
#endif

    switch (ctx->pc) {
        case 0x30acccu: goto label_30accc;
        case 0x30ace8u: goto label_30ace8;
        case 0x30acf8u: goto label_30acf8;
        case 0x30ad08u: goto label_30ad08;
        default: break;
    }

    ctx->pc = 0x30aca8u;

    // 0x30aca8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30aca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30acac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30acacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30acb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30acb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30acb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30acb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30acb8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x30acb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30acbc: 0x14d1000c  bne         $a2, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x30ACBCu;
    {
        const bool branch_taken_0x30acbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        ctx->pc = 0x30ACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ACBCu;
        // 0x30acc0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30acbc) {
            ctx->pc = 0x30ACF0u;
            goto label_30acf0;
        }
    }
    ctx->pc = 0x30ACC4u;
    // 0x30acc4: 0xc089d02  jal         func_227408
    ctx->pc = 0x30ACC4u;
    SET_GPR_U32(ctx, 31, 0x30ACCCu);
    ctx->pc = 0x30ACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACC4u;
    // 0x30acc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227408u, 0x30ACC4u, 0x30ACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACCCu;
label_30accc:
    // 0x30accc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x30ACCCu;
    {
        const bool branch_taken_0x30accc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30accc) {
            ctx->pc = 0x30ACD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30ACCCu;
            // 0x30acd0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30AD0Cu;
            goto label_30ad0c;
        }
    }
    ctx->pc = 0x30ACD4u;
    // 0x30acd4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x30acd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x30acd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30acd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30acdc: 0x24a5b978  addiu       $a1, $a1, -0x4688
    ctx->pc = 0x30acdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949240));
    // 0x30ace0: 0xc089c7c  jal         func_2271F0
    ctx->pc = 0x30ACE0u;
    SET_GPR_U32(ctx, 31, 0x30ACE8u);
    ctx->pc = 0x30ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACE0u;
    // 0x30ace4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271F0u, 0x30ACE0u, 0x30ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACE8u;
label_30ace8:
    // 0x30ace8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30ACE8u;
    {
        const bool branch_taken_0x30ace8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ACE8u;
        // 0x30acec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ace8) {
            ctx->pc = 0x30AD0Cu;
            goto label_30ad0c;
        }
    }
    ctx->pc = 0x30ACF0u;
label_30acf0:
    // 0x30acf0: 0xc089d02  jal         func_227408
    ctx->pc = 0x30ACF0u;
    SET_GPR_U32(ctx, 31, 0x30ACF8u);
    ctx->pc = 0x30ACF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACF0u;
    // 0x30acf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227408u, 0x30ACF0u, 0x30ACF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACF8u;
label_30acf8:
    // 0x30acf8: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30ACF8u;
    {
        const bool branch_taken_0x30acf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x30acf8) {
            ctx->pc = 0x30ACFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30ACF8u;
            // 0x30acfc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30AD0Cu;
            goto label_30ad0c;
        }
    }
    ctx->pc = 0x30AD00u;
    // 0x30ad00: 0xc089ce2  jal         func_227388
    ctx->pc = 0x30AD00u;
    SET_GPR_U32(ctx, 31, 0x30AD08u);
    ctx->pc = 0x30AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD00u;
    // 0x30ad04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x30AD00u, 0x30AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD08u;
label_30ad08:
    // 0x30ad08: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30ad08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30ad0c:
    // 0x30ad0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30ad0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30ad10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ad10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30ad14: 0x3e00008  jr          $ra
    ctx->pc = 0x30AD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AD14u;
        // 0x30ad18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AD1Cu;
    // 0x30ad1c: 0x0  nop
    ctx->pc = 0x30ad1cu;
    // NOP
    ctx->pc = 0x30ad20u;
}
