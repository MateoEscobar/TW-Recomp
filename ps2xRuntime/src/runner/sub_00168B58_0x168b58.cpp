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

// Function: sub_00168B58
// Address: 0x168b58 - 0x168be0
void sub_00168B58_0x168b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168B58_0x168b58");
#endif

    switch (ctx->pc) {
        case 0x168b80u: goto label_168b80;
        case 0x168b98u: goto label_168b98;
        default: break;
    }

    ctx->pc = 0x168b58u;

    // 0x168b58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x168b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168b5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x168b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x168b60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x168b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x168b64: 0x24900640  addiu       $s0, $a0, 0x640
    ctx->pc = 0x168b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1600));
    // 0x168b68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168b6c: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x168b6cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
    // 0x168b70: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x168b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x168b74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x168b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168b7c: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x168b7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
label_168b80:
    // 0x168b80: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x168b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x168b84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x168B84u;
    {
        const bool branch_taken_0x168b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B84u;
        // 0x168b88: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b84) {
            ctx->pc = 0x168BA8u;
            goto label_168ba8;
        }
    }
    ctx->pc = 0x168B8Cu;
    // 0x168b8c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x168b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x168b90: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x168B90u;
    SET_GPR_U32(ctx, 31, 0x168B98u);
    ctx->pc = 0x168B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B90u;
    // 0x168b94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x168B90u, 0x168B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B98u;
label_168b98:
    // 0x168b98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168B98u;
    {
        const bool branch_taken_0x168b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B98u;
        // 0x168b9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b98) {
            ctx->pc = 0x168BA8u;
            goto label_168ba8;
        }
    }
    ctx->pc = 0x168BA0u;
    // 0x168ba0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x168BA0u;
    {
        const bool branch_taken_0x168ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BA0u;
        // 0x168ba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ba0) {
            ctx->pc = 0x168BC0u;
            goto label_168bc0;
        }
    }
    ctx->pc = 0x168BA8u;
label_168ba8:
    // 0x168ba8: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x168ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x168bac: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x168bacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x168bb0: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x168bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x168bb4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x168BB4u;
    {
        const bool branch_taken_0x168bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BB4u;
        // 0x168bb8: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168bb4) {
            ctx->pc = 0x168B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168b80;
        }
    }
    ctx->pc = 0x168BBCu;
    // 0x168bbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x168bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_168bc0:
    // 0x168bc0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x168bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x168bc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x168bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168bc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x168bc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168bcc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x168bccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x168BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BD4u;
        // 0x168bd8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168BDCu;
    // 0x168bdc: 0x0  nop
    ctx->pc = 0x168bdcu;
    // NOP
    ctx->pc = 0x168be0u;
}
