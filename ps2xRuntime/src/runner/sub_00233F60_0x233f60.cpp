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

// Function: sub_00233F60
// Address: 0x233f60 - 0x234038
void sub_00233F60_0x233f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233F60_0x233f60");
#endif

    switch (ctx->pc) {
        case 0x233f8cu: goto label_233f8c;
        case 0x233f94u: goto label_233f94;
        case 0x233fa8u: goto label_233fa8;
        case 0x233fb0u: goto label_233fb0;
        case 0x233fc4u: goto label_233fc4;
        case 0x233fe0u: goto label_233fe0;
        case 0x233ff4u: goto label_233ff4;
        case 0x233ffcu: goto label_233ffc;
        case 0x23400cu: goto label_23400c;
        case 0x234018u: goto label_234018;
        default: break;
    }

    ctx->pc = 0x233f60u;

    // 0x233f60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x233f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x233f64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x233f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x233f68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x233f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x233f6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x233f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f70: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x233f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x233f74: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x233f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x233f78: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x233f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x233f7c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x233f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x233f80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x233f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x233f84: 0xc0e4060  jal         func_390180
    ctx->pc = 0x233F84u;
    SET_GPR_U32(ctx, 31, 0x233F8Cu);
    ctx->pc = 0x233F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F84u;
    // 0x233f88: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x233F84u, 0x233F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F8Cu;
label_233f8c:
    // 0x233f8c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x233F8Cu;
    SET_GPR_U32(ctx, 31, 0x233F94u);
    ctx->pc = 0x233F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233F8Cu;
    // 0x233f90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x233F8Cu, 0x233F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233F94u;
label_233f94:
    // 0x233f94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x233f94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233f98: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
    ctx->pc = 0x233F98u;
    {
        const bool branch_taken_0x233f98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x233F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233F98u;
        // 0x233f9c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233f98) {
            ctx->pc = 0x23401Cu;
            goto label_23401c;
        }
    }
    ctx->pc = 0x233FA0u;
    // 0x233fa0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x233FA0u;
    SET_GPR_U32(ctx, 31, 0x233FA8u);
    ctx->pc = 0x233FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FA0u;
    // 0x233fa4: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x233FA0u, 0x233FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FA8u;
label_233fa8:
    // 0x233fa8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x233FA8u;
    SET_GPR_U32(ctx, 31, 0x233FB0u);
    ctx->pc = 0x233FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FA8u;
    // 0x233fac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x233FA8u, 0x233FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FB0u;
label_233fb0:
    // 0x233fb0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x233fb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fb4: 0x12800019  beqz        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x233FB4u;
    {
        const bool branch_taken_0x233fb4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x233FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FB4u;
        // 0x233fb8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233fb4) {
            ctx->pc = 0x23401Cu;
            goto label_23401c;
        }
    }
    ctx->pc = 0x233FBCu;
    // 0x233fbc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x233FBCu;
    SET_GPR_U32(ctx, 31, 0x233FC4u);
    ctx->pc = 0x233FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FBCu;
    // 0x233fc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x233FBCu, 0x233FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FC4u;
label_233fc4:
    // 0x233fc4: 0x80520019  lb          $s2, 0x19($v0)
    ctx->pc = 0x233fc4u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x233fc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x233fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fcc: 0x8e710380  lw          $s1, 0x380($s3)
    ctx->pc = 0x233fccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 896)));
    // 0x233fd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fd4: 0x827001b0  lb          $s0, 0x1B0($s3)
    ctx->pc = 0x233fd4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 432)));
    // 0x233fd8: 0xc08a8aa  jal         func_22A2A8
    ctx->pc = 0x233FD8u;
    SET_GPR_U32(ctx, 31, 0x233FE0u);
    ctx->pc = 0x233FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FD8u;
    // 0x233fdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2A8u, 0x233FD8u, 0x233FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FE0u;
label_233fe0:
    // 0x233fe0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x233fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fe4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x233fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x233fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233fec: 0xc08a710  jal         func_229C40
    ctx->pc = 0x233FECu;
    SET_GPR_U32(ctx, 31, 0x233FF4u);
    ctx->pc = 0x233FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FECu;
    // 0x233ff0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229C40u, 0x233FECu, 0x233FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FF4u;
label_233ff4:
    // 0x233ff4: 0xc048892  jal         func_122248
    ctx->pc = 0x233FF4u;
    SET_GPR_U32(ctx, 31, 0x233FFCu);
    ctx->pc = 0x233FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233FF4u;
    // 0x233ff8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x233FF4u, 0x233FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233FFCu;
label_233ffc:
    // 0x233ffc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x233FFCu;
    {
        const bool branch_taken_0x233ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233FFCu;
        // 0x234000: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ffc) {
            ctx->pc = 0x234018u;
            goto label_234018;
        }
    }
    ctx->pc = 0x234004u;
    // 0x234004: 0xc04890e  jal         func_122438
    ctx->pc = 0x234004u;
    SET_GPR_U32(ctx, 31, 0x23400Cu);
    ctx->pc = 0x234008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234004u;
    // 0x234008: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122438u, 0x234004u, 0x23400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23400Cu;
label_23400c:
    // 0x23400c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23400cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234010: 0xc0488ac  jal         func_1222B0
    ctx->pc = 0x234010u;
    SET_GPR_U32(ctx, 31, 0x234018u);
    ctx->pc = 0x234014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234010u;
    // 0x234014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x234010u, 0x234018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234018u;
label_234018:
    // 0x234018: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x234018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23401c:
    // 0x23401c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x23401cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x234020: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x234020u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x234024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234028: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x234028u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23402c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234030: 0x3e00008  jr          $ra
    ctx->pc = 0x234030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234030u;
        // 0x234034: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234038u;
}
