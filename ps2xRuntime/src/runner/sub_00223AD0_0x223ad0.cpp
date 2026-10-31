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

// Function: sub_00223AD0
// Address: 0x223ad0 - 0x223b28
void sub_00223AD0_0x223ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223AD0_0x223ad0");
#endif

    switch (ctx->pc) {
        case 0x223af0u: goto label_223af0;
        case 0x223b04u: goto label_223b04;
        default: break;
    }

    ctx->pc = 0x223ad0u;

    // 0x223ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223ad4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x223ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x223ad8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x223ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x223adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223ae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223ae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223ae8: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x223AE8u;
    SET_GPR_U32(ctx, 31, 0x223AF0u);
    ctx->pc = 0x223AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AE8u;
    // 0x223aec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x223AE8u, 0x223AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223AF0u;
label_223af0:
    // 0x223af0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x223AF0u;
    {
        const bool branch_taken_0x223af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223af0) {
            ctx->pc = 0x223AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223AF0u;
            // 0x223af4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223B10u;
            goto label_223b10;
        }
    }
    ctx->pc = 0x223AF8u;
    // 0x223af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223afc: 0xc089998  jal         func_226660
    ctx->pc = 0x223AFCu;
    SET_GPR_U32(ctx, 31, 0x223B04u);
    ctx->pc = 0x223B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AFCu;
    // 0x223b00: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x223AFCu, 0x223B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B04u;
label_223b04:
    // 0x223b04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223B04u;
    {
        const bool branch_taken_0x223b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B04u;
        // 0x223b08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b04) {
            ctx->pc = 0x223B14u;
            goto label_223b14;
        }
    }
    ctx->pc = 0x223B0Cu;
    // 0x223b0c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x223b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_223b10:
    // 0x223b10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x223b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223b14:
    // 0x223b14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x223b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223b1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223b20: 0x3e00008  jr          $ra
    ctx->pc = 0x223B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B20u;
        // 0x223b24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223B28u;
}
