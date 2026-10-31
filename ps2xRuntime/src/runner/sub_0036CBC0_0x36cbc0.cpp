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

// Function: sub_0036CBC0
// Address: 0x36cbc0 - 0x36ccc0
void sub_0036CBC0_0x36cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CBC0_0x36cbc0");
#endif

    switch (ctx->pc) {
        case 0x36cbecu: goto label_36cbec;
        case 0x36cbf4u: goto label_36cbf4;
        case 0x36cc0cu: goto label_36cc0c;
        case 0x36cc14u: goto label_36cc14;
        case 0x36cc20u: goto label_36cc20;
        case 0x36cc38u: goto label_36cc38;
        case 0x36cc40u: goto label_36cc40;
        case 0x36cc60u: goto label_36cc60;
        case 0x36cc68u: goto label_36cc68;
        case 0x36cc78u: goto label_36cc78;
        case 0x36cc8cu: goto label_36cc8c;
        default: break;
    }

    ctx->pc = 0x36cbc0u;

    // 0x36cbc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x36cbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36cbc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36cbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cbc8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x36cbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x36cbcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36cbccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cbd0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x36cbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x36cbd4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x36cbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x36cbd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36cbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36cbdc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x36cbdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x36cbe0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36cbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36cbe4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CBE4u;
    SET_GPR_U32(ctx, 31, 0x36CBECu);
    ctx->pc = 0x36CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CBE4u;
    // 0x36cbe8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CBE4u, 0x36CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CBECu;
label_36cbec:
    // 0x36cbec: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CBECu;
    SET_GPR_U32(ctx, 31, 0x36CBF4u);
    ctx->pc = 0x36CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CBECu;
    // 0x36cbf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CBECu, 0x36CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CBF4u;
label_36cbf4:
    // 0x36cbf4: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x36cbf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x36cbf8: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x36cbf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x36cbfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36cbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36cc04: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CC04u;
    SET_GPR_U32(ctx, 31, 0x36CC0Cu);
    ctx->pc = 0x36CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CC04u;
    // 0x36cc08: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CC04u, 0x36CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC0Cu;
label_36cc0c:
    // 0x36cc0c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36CC0Cu;
    SET_GPR_U32(ctx, 31, 0x36CC14u);
    ctx->pc = 0x36CC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CC0Cu;
    // 0x36cc10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36CC0Cu, 0x36CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC14u;
label_36cc14:
    // 0x36cc14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x36cc14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36cc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc1c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36cc1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36cc20:
    // 0x36cc20: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36cc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36cc24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36cc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36cc2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36cc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc30: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36CC30u;
    SET_GPR_U32(ctx, 31, 0x36CC38u);
    ctx->pc = 0x36CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CC30u;
    // 0x36cc34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36CC30u, 0x36CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC38u;
label_36cc38:
    // 0x36cc38: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36CC38u;
    SET_GPR_U32(ctx, 31, 0x36CC40u);
    ctx->pc = 0x36CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CC38u;
    // 0x36cc3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36CC38u, 0x36CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC40u;
label_36cc40:
    // 0x36cc40: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36cc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36cc44: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36cc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36cc48: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36CC48u;
    {
        const bool branch_taken_0x36cc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC48u;
        // 0x36cc4c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cc48) {
            ctx->pc = 0x36CC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36cc20;
        }
    }
    ctx->pc = 0x36CC50u;
    // 0x36cc50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36cc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36cc54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc58: 0xc0e16ee  jal         func_385BB8
    ctx->pc = 0x36CC58u;
    SET_GPR_U32(ctx, 31, 0x36CC60u);
    ctx->pc = 0x36CC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CC58u;
    // 0x36cc5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385BB8u, 0x36CC58u, 0x36CC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC60u;
label_36cc60:
    // 0x36cc60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36cc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc64: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36cc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36cc68:
    // 0x36cc68: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x36cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x36cc6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36cc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36cc70: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36CC70u;
    SET_GPR_U32(ctx, 31, 0x36CC78u);
    ctx->pc = 0x36CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CC70u;
    // 0x36cc74: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36CC70u, 0x36CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC78u;
label_36cc78:
    // 0x36cc78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36cc78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36cc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cc80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36cc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36cc84: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36CC84u;
    SET_GPR_U32(ctx, 31, 0x36CC8Cu);
    ctx->pc = 0x36CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CC84u;
    // 0x36cc88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36CC84u, 0x36CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CC8Cu;
label_36cc8c:
    // 0x36cc8c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x36cc8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x36cc90: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36CC90u;
    {
        const bool branch_taken_0x36cc90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC90u;
        // 0x36cc94: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cc90) {
            ctx->pc = 0x36CC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36cc68;
        }
    }
    ctx->pc = 0x36CC98u;
    // 0x36cc98: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x36cc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36cc9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36cc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cca0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x36cca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36cca4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x36cca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36cca8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36cca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36ccac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x36ccacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36ccb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36ccb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36ccb4: 0x3e00008  jr          $ra
    ctx->pc = 0x36CCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CCB4u;
        // 0x36ccb8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CCBCu;
    // 0x36ccbc: 0x0  nop
    ctx->pc = 0x36ccbcu;
    // NOP
    ctx->pc = 0x36ccc0u;
}
