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

// Function: sub_00358DE0
// Address: 0x358de0 - 0x358ef0
void sub_00358DE0_0x358de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358DE0_0x358de0");
#endif

    switch (ctx->pc) {
        case 0x358e14u: goto label_358e14;
        case 0x358e1cu: goto label_358e1c;
        case 0x358e30u: goto label_358e30;
        case 0x358e38u: goto label_358e38;
        case 0x358e58u: goto label_358e58;
        case 0x358e60u: goto label_358e60;
        case 0x358e78u: goto label_358e78;
        case 0x358e80u: goto label_358e80;
        case 0x358e94u: goto label_358e94;
        case 0x358ea8u: goto label_358ea8;
        case 0x358ec4u: goto label_358ec4;
        default: break;
    }

    ctx->pc = 0x358de0u;

    // 0x358de0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x358de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x358de4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358de8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x358de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x358dec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x358decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x358df0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x358df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358df4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x358df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358df8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x358df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x358dfc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x358dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x358e00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x358e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e04: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x358e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x358e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x358e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x358e0c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358E0Cu;
    SET_GPR_U32(ctx, 31, 0x358E14u);
    ctx->pc = 0x358E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E0Cu;
    // 0x358e10: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358E0Cu, 0x358E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E14u;
label_358e14:
    // 0x358e14: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358E14u;
    SET_GPR_U32(ctx, 31, 0x358E1Cu);
    ctx->pc = 0x358E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E14u;
    // 0x358e18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358E14u, 0x358E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E1Cu;
label_358e1c:
    // 0x358e1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x358e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x358e20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x358e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x358e28: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358E28u;
    SET_GPR_U32(ctx, 31, 0x358E30u);
    ctx->pc = 0x358E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E28u;
    // 0x358e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358E28u, 0x358E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E30u;
label_358e30:
    // 0x358e30: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358E30u;
    SET_GPR_U32(ctx, 31, 0x358E38u);
    ctx->pc = 0x358E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E30u;
    // 0x358e34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358E30u, 0x358E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E38u;
label_358e38:
    // 0x358e38: 0x3406813e  ori         $a2, $zero, 0x813E
    ctx->pc = 0x358e38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33086);
    // 0x358e3c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x358e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x358e40: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x358e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x358e44: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x358e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x358e48: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x358e48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x358e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x358e50: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358E50u;
    SET_GPR_U32(ctx, 31, 0x358E58u);
    ctx->pc = 0x358E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E50u;
    // 0x358e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358E50u, 0x358E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E58u;
label_358e58:
    // 0x358e58: 0xc10b108  jal         func_42C420
    ctx->pc = 0x358E58u;
    SET_GPR_U32(ctx, 31, 0x358E60u);
    ctx->pc = 0x358E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E58u;
    // 0x358e5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x358E58u, 0x358E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E60u;
label_358e60:
    // 0x358e60: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x358e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x358e64: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x358e64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x358e68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x358e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e6c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x358e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x358e70: 0xc102472  jal         func_4091C8
    ctx->pc = 0x358E70u;
    SET_GPR_U32(ctx, 31, 0x358E78u);
    ctx->pc = 0x358E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E70u;
    // 0x358e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x358E70u, 0x358E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E78u;
label_358e78:
    // 0x358e78: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x358E78u;
    SET_GPR_U32(ctx, 31, 0x358E80u);
    ctx->pc = 0x358E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E78u;
    // 0x358e7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x358E78u, 0x358E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E80u;
label_358e80:
    // 0x358e80: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x358e80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x358e84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e88: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x358e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x358e8c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x358E8Cu;
    SET_GPR_U32(ctx, 31, 0x358E94u);
    ctx->pc = 0x358E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E8Cu;
    // 0x358e90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x358E8Cu, 0x358E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E94u;
label_358e94:
    // 0x358e94: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x358e94u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358e9c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x358e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x358ea0: 0xc1024c6  jal         func_409318
    ctx->pc = 0x358EA0u;
    SET_GPR_U32(ctx, 31, 0x358EA8u);
    ctx->pc = 0x358EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358EA0u;
    // 0x358ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x358EA0u, 0x358EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358EA8u;
label_358ea8:
    // 0x358ea8: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x358ea8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x358eac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x358eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358eb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x358eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358eb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x358eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358eb8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x358eb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x358ebc: 0xc08e8ee  jal         func_23A3B8
    ctx->pc = 0x358EBCu;
    SET_GPR_U32(ctx, 31, 0x358EC4u);
    ctx->pc = 0x358EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358EBCu;
    // 0x358ec0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A3B8u, 0x358EBCu, 0x358EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358EC4u;
label_358ec4:
    // 0x358ec4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x358ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x358ec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ecc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x358eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x358ed0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x358ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358ed4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x358ed4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358ed8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x358ed8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358edc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358ee0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x358ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x358ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x358EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358EE4u;
        // 0x358ee8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358EECu;
    // 0x358eec: 0x0  nop
    ctx->pc = 0x358eecu;
    // NOP
    ctx->pc = 0x358ef0u;
}
