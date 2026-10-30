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

// Function: sub_00368EC0
// Address: 0x368ec0 - 0x368fb8
void sub_00368EC0_0x368ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368EC0_0x368ec0");
#endif

    switch (ctx->pc) {
        case 0x368ee8u: goto label_368ee8;
        case 0x368ef0u: goto label_368ef0;
        case 0x368f00u: goto label_368f00;
        case 0x368f18u: goto label_368f18;
        case 0x368f20u: goto label_368f20;
        case 0x368f3cu: goto label_368f3c;
        case 0x368f48u: goto label_368f48;
        case 0x368f5cu: goto label_368f5c;
        case 0x368f74u: goto label_368f74;
        case 0x368f88u: goto label_368f88;
        default: break;
    }

    ctx->pc = 0x368ec0u;

    // 0x368ec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x368ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x368ec4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x368ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368ec8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x368ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x368ecc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x368eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ed0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x368ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x368ed4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x368ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x368ed8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x368ed8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x368edc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x368edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x368ee0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x368EE0u;
    SET_GPR_U32(ctx, 31, 0x368EE8u);
    ctx->pc = 0x368EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368EE0u;
    // 0x368ee4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x368EE0u, 0x368EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368EE8u;
label_368ee8:
    // 0x368ee8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368EE8u;
    SET_GPR_U32(ctx, 31, 0x368EF0u);
    ctx->pc = 0x368EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368EE8u;
    // 0x368eec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368EE8u, 0x368EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368EF0u;
label_368ef0:
    // 0x368ef0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x368ef0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x368ef4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368ef8: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x368ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368efc: 0x0  nop
    ctx->pc = 0x368efcu;
    // NOP
label_368f00:
    // 0x368f00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368f0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x368f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f10: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x368F10u;
    SET_GPR_U32(ctx, 31, 0x368F18u);
    ctx->pc = 0x368F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F10u;
    // 0x368f14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x368F10u, 0x368F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F18u;
label_368f18:
    // 0x368f18: 0xc10b108  jal         func_42C420
    ctx->pc = 0x368F18u;
    SET_GPR_U32(ctx, 31, 0x368F20u);
    ctx->pc = 0x368F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F18u;
    // 0x368f1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x368F18u, 0x368F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F20u;
label_368f20:
    // 0x368f20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x368f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x368f24: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x368f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x368f28: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368F28u;
    {
        const bool branch_taken_0x368f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F28u;
        // 0x368f2c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f28) {
            ctx->pc = 0x368F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368f00;
        }
    }
    ctx->pc = 0x368F30u;
    // 0x368f30: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x368f30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x368f34: 0xc06381c  jal         func_18E070
    ctx->pc = 0x368F34u;
    SET_GPR_U32(ctx, 31, 0x368F3Cu);
    ctx->pc = 0x368F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F34u;
    // 0x368f38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E070u, 0x368F34u, 0x368F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F3Cu;
label_368f3c:
    // 0x368f3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x368f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f40: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x368f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x368f44: 0x0  nop
    ctx->pc = 0x368f44u;
    // NOP
label_368f48:
    // 0x368f48: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x368f48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x368f4c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x368f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x368f50: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x368f50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x368f54: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x368F54u;
    SET_GPR_U32(ctx, 31, 0x368F5Cu);
    ctx->pc = 0x368F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F54u;
    // 0x368f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x368F54u, 0x368F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F5Cu;
label_368f5c:
    // 0x368f5c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x368F5Cu;
    {
        const bool branch_taken_0x368f5c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x368F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F5Cu;
        // 0x368f60: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f5c) {
            ctx->pc = 0x368F78u;
            goto label_368f78;
        }
    }
    ctx->pc = 0x368F64u;
    // 0x368f64: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x368f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x368f68: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x368f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x368f6c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x368F6Cu;
    SET_GPR_U32(ctx, 31, 0x368F74u);
    ctx->pc = 0x368F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F6Cu;
    // 0x368f70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x368F6Cu, 0x368F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F74u;
label_368f74:
    // 0x368f74: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x368f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_368f78:
    // 0x368f78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x368f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f80: 0xc102576  jal         func_4095D8
    ctx->pc = 0x368F80u;
    SET_GPR_U32(ctx, 31, 0x368F88u);
    ctx->pc = 0x368F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F80u;
    // 0x368f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x368F80u, 0x368F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F88u;
label_368f88:
    // 0x368f88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x368f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f8c: 0x28c20005  slti        $v0, $a2, 0x5
    ctx->pc = 0x368f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x368f90: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x368F90u;
    {
        const bool branch_taken_0x368f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x368F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F90u;
        // 0x368f94: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f90) {
            ctx->pc = 0x368F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368f48;
        }
    }
    ctx->pc = 0x368F98u;
    // 0x368f98: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x368f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x368f9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368fa0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x368fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368fa4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x368fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368fa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x368fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368fac: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x368facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x368fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x368FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368FB0u;
        // 0x368fb4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368FB8u;
}
