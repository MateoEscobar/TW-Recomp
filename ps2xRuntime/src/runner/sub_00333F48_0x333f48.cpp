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

// Function: sub_00333F48
// Address: 0x333f48 - 0x333fe8
void sub_00333F48_0x333f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333F48_0x333f48");
#endif

    switch (ctx->pc) {
        case 0x333f78u: goto label_333f78;
        case 0x333f84u: goto label_333f84;
        case 0x333f94u: goto label_333f94;
        default: break;
    }

    ctx->pc = 0x333f48u;

    // 0x333f48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x333f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x333f4c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x333f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x333f50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x333f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x333f54: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x333f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x333f58: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x333f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x333f5c: 0x24b20010  addiu       $s2, $a1, 0x10
    ctx->pc = 0x333f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x333f60: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x333f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x333f64: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x333f64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x333f68: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x333f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x333f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333f70: 0x94930008  lhu         $s3, 0x8($a0)
    ctx->pc = 0x333f70u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x333f74: 0x94b10008  lhu         $s1, 0x8($a1)
    ctx->pc = 0x333f74u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_333f78:
    // 0x333f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333f7c: 0xc10d708  jal         func_435C20
    ctx->pc = 0x333F7Cu;
    SET_GPR_U32(ctx, 31, 0x333F84u);
    ctx->pc = 0x333F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F7Cu;
    // 0x333f80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435C20u, 0x333F7Cu, 0x333F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F84u;
label_333f84:
    // 0x333f84: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x333F84u;
    {
        const bool branch_taken_0x333f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x333f84) {
            ctx->pc = 0x333F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333F84u;
            // 0x333f88: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333FCCu;
            goto label_333fcc;
        }
    }
    ctx->pc = 0x333F8Cu;
    // 0x333f8c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x333F8Cu;
    SET_GPR_U32(ctx, 31, 0x333F94u);
    ctx->pc = 0x333F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333F8Cu;
    // 0x333f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x333F8Cu, 0x333F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333F94u;
label_333f94:
    // 0x333f94: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x333F94u;
    {
        const bool branch_taken_0x333f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x333F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333F94u;
        // 0x333f98: 0x511826  xor         $v1, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333f94) {
            ctx->pc = 0x333FA8u;
            goto label_333fa8;
        }
    }
    ctx->pc = 0x333F9Cu;
    // 0x333f9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x333f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333fa0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x333FA0u;
    {
        const bool branch_taken_0x333fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FA0u;
        // 0x333fa4: 0x283100b  movn        $v0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333fa0) {
            ctx->pc = 0x333FC8u;
            goto label_333fc8;
        }
    }
    ctx->pc = 0x333FA8u;
label_333fa8:
    // 0x333fa8: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x333FA8u;
    {
        const bool branch_taken_0x333fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x333FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FA8u;
        // 0x333fac: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333fa8) {
            ctx->pc = 0x333FC4u;
            goto label_333fc4;
        }
    }
    ctx->pc = 0x333FB0u;
    // 0x333fb0: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x333fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x333fb4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x333fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x333fb8: 0x2629823  subu        $s3, $s3, $v0
    ctx->pc = 0x333fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x333fbc: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x333FBCu;
    {
        const bool branch_taken_0x333fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FBCu;
        // 0x333fc0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333fbc) {
            ctx->pc = 0x333F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333f78;
        }
    }
    ctx->pc = 0x333FC4u;
label_333fc4:
    // 0x333fc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333fc8:
    // 0x333fc8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x333fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_333fcc:
    // 0x333fcc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x333fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x333fd0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x333fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333fd4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x333fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333fd8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x333fd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x333FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333FE0u;
        // 0x333fe4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333FE8u;
}
