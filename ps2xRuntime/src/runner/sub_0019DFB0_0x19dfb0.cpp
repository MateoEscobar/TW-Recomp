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

// Function: sub_0019DFB0
// Address: 0x19dfb0 - 0x19e030
void sub_0019DFB0_0x19dfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DFB0_0x19dfb0");
#endif

    switch (ctx->pc) {
        case 0x19dfd8u: goto label_19dfd8;
        case 0x19dfe0u: goto label_19dfe0;
        case 0x19dfecu: goto label_19dfec;
        default: break;
    }

    ctx->pc = 0x19dfb0u;

    // 0x19dfb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19dfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19dfb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19dfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19dfb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19dfb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfbc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19dfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19dfc0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19dfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19dfc4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19dfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19dfc8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x19dfc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19dfcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19dfccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19dfd0: 0xc0733e2  jal         func_1CCF88
    ctx->pc = 0x19DFD0u;
    SET_GPR_U32(ctx, 31, 0x19DFD8u);
    ctx->pc = 0x19DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFD0u;
    // 0x19dfd4: 0x265000d0  addiu       $s0, $s2, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF88u, 0x19DFD0u, 0x19DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFD8u;
label_19dfd8:
    // 0x19dfd8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19dfd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19dfdc: 0x0  nop
    ctx->pc = 0x19dfdcu;
    // NOP
label_19dfe0:
    // 0x19dfe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19dfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dfe4: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x19DFE4u;
    SET_GPR_U32(ctx, 31, 0x19DFECu);
    ctx->pc = 0x19DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFE4u;
    // 0x19dfe8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x19DFE4u, 0x19DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFECu;
label_19dfec:
    // 0x19dfec: 0x0  nop
    ctx->pc = 0x19dfecu;
    // NOP
    // 0x19dff0: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x19DFF0u;
    {
        const bool branch_taken_0x19dff0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x19DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFF0u;
        // 0x19dff4: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dff0) {
            ctx->pc = 0x19DFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dfe0;
        }
    }
    ctx->pc = 0x19DFF8u;
    // 0x19dff8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x19dffc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19dffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e000: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19e000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x19e004: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19e004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e008: 0xae4303d8  sw          $v1, 0x3D8($s2)
    ctx->pc = 0x19e008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 984), GPR_U32(ctx, 3));
    // 0x19e00c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19e00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19e010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e014: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19e014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e01c: 0x3e00008  jr          $ra
    ctx->pc = 0x19E01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E01Cu;
        // 0x19e020: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E01Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E024u;
    // 0x19e024: 0x0  nop
    ctx->pc = 0x19e024u;
    // NOP
    // 0x19e028: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x19e028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19e02c: 0x0  nop
    ctx->pc = 0x19e02cu;
    // NOP
    ctx->pc = 0x19e030u;
}
