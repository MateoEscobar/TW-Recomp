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

// Function: sub_00329CA0
// Address: 0x329ca0 - 0x329d08
void sub_00329CA0_0x329ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329CA0_0x329ca0");
#endif

    switch (ctx->pc) {
        case 0x329cc8u: goto label_329cc8;
        case 0x329ce8u: goto label_329ce8;
        default: break;
    }

    ctx->pc = 0x329ca0u;

    // 0x329ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x329ca4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x329ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x329ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x329ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x329cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x329cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cb4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x329cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x329cb8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x329CB8u;
    {
        const bool branch_taken_0x329cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CB8u;
        // 0x329cbc: 0x26300028  addiu       $s0, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cb8) {
            ctx->pc = 0x329CF4u;
            goto label_329cf4;
        }
    }
    ctx->pc = 0x329CC0u;
    // 0x329cc0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x329cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x329cc4: 0x0  nop
    ctx->pc = 0x329cc4u;
    // NOP
label_329cc8:
    // 0x329cc8: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x329CC8u;
    {
        const bool branch_taken_0x329cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x329cc8) {
            ctx->pc = 0x329CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329CC8u;
            // 0x329ccc: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329CDCu;
            goto label_329cdc;
        }
    }
    ctx->pc = 0x329CD0u;
    // 0x329cd0: 0x24b0000c  addiu       $s0, $a1, 0xC
    ctx->pc = 0x329cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x329cd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x329CD4u;
    {
        const bool branch_taken_0x329cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329CD4u;
        // 0x329cd8: 0xaca50010  sw          $a1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329cd4) {
            ctx->pc = 0x329CE8u;
            goto label_329ce8;
        }
    }
    ctx->pc = 0x329CDCu;
label_329cdc:
    // 0x329cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329ce0: 0xc0cc808  jal         func_332020
    ctx->pc = 0x329CE0u;
    SET_GPR_U32(ctx, 31, 0x329CE8u);
    ctx->pc = 0x329CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CE0u;
    // 0x329ce4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332020u, 0x329CE0u, 0x329CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CE8u;
label_329ce8:
    // 0x329ce8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x329ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x329cec: 0x54a0fff6  bnel        $a1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x329CECu;
    {
        const bool branch_taken_0x329cec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x329cec) {
            ctx->pc = 0x329CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329CECu;
            // 0x329cf0: 0x8ca20010  lw          $v0, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329cc8;
        }
    }
    ctx->pc = 0x329CF4u;
label_329cf4:
    // 0x329cf4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x329cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329cf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x329cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329d00: 0x3e00008  jr          $ra
    ctx->pc = 0x329D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329D00u;
        // 0x329d04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329D08u;
}
