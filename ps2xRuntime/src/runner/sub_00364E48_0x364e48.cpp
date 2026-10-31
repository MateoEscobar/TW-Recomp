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

// Function: sub_00364E48
// Address: 0x364e48 - 0x364f50
void sub_00364E48_0x364e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364E48_0x364e48");
#endif

    switch (ctx->pc) {
        case 0x364e7cu: goto label_364e7c;
        case 0x364e84u: goto label_364e84;
        case 0x364e98u: goto label_364e98;
        case 0x364eacu: goto label_364eac;
        case 0x364ec0u: goto label_364ec0;
        case 0x364ec8u: goto label_364ec8;
        case 0x364edcu: goto label_364edc;
        case 0x364f04u: goto label_364f04;
        case 0x364f0cu: goto label_364f0c;
        case 0x364f28u: goto label_364f28;
        default: break;
    }

    ctx->pc = 0x364e48u;

    // 0x364e48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x364e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x364e4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x364e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364e50: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x364e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x364e54: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x364e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x364e58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x364e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364e5c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x364e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364e60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x364e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x364e64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x364e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x364e68: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x364e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x364e6c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x364e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x364e70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x364e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364e74: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364E74u;
    SET_GPR_U32(ctx, 31, 0x364E7Cu);
    ctx->pc = 0x364E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E74u;
    // 0x364e78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364E74u, 0x364E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E7Cu;
label_364e7c:
    // 0x364e7c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364E7Cu;
    SET_GPR_U32(ctx, 31, 0x364E84u);
    ctx->pc = 0x364E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E7Cu;
    // 0x364e80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364E7Cu, 0x364E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E84u;
label_364e84:
    // 0x364e84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x364e84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364e8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x364e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x364e90: 0xc102488  jal         func_409220
    ctx->pc = 0x364E90u;
    SET_GPR_U32(ctx, 31, 0x364E98u);
    ctx->pc = 0x364E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364E90u;
    // 0x364e94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x364E90u, 0x364E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364E98u;
label_364e98:
    // 0x364e98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x364e98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ea0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x364ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364ea4: 0xc102488  jal         func_409220
    ctx->pc = 0x364EA4u;
    SET_GPR_U32(ctx, 31, 0x364EACu);
    ctx->pc = 0x364EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364EA4u;
    // 0x364ea8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x364EA4u, 0x364EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364EACu;
label_364eac:
    // 0x364eac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x364eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364eb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x364eb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364eb4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x364eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x364eb8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364EB8u;
    SET_GPR_U32(ctx, 31, 0x364EC0u);
    ctx->pc = 0x364EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364EB8u;
    // 0x364ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364EB8u, 0x364EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364EC0u;
label_364ec0:
    // 0x364ec0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x364EC0u;
    SET_GPR_U32(ctx, 31, 0x364EC8u);
    ctx->pc = 0x364EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364EC0u;
    // 0x364ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x364EC0u, 0x364EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364EC8u;
label_364ec8:
    // 0x364ec8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x364ec8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ed0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x364ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x364ed4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x364ED4u;
    SET_GPR_U32(ctx, 31, 0x364EDCu);
    ctx->pc = 0x364ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364ED4u;
    // 0x364ed8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x364ED4u, 0x364EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364EDCu;
label_364edc:
    // 0x364edc: 0x340683df  ori         $a2, $zero, 0x83DF
    ctx->pc = 0x364edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33759);
    // 0x364ee0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x364ee0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x364ee4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x364ee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x364ee8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x364ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x364eec: 0x34c6ffc0  ori         $a2, $a2, 0xFFC0
    ctx->pc = 0x364eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65472);
    // 0x364ef0: 0x633f8  dsll        $a2, $a2, 15
    ctx->pc = 0x364ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 15);
    // 0x364ef4: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x364ef4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x364ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364efc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364EFCu;
    SET_GPR_U32(ctx, 31, 0x364F04u);
    ctx->pc = 0x364F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364EFCu;
    // 0x364f00: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364EFCu, 0x364F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F04u;
label_364f04:
    // 0x364f04: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364F04u;
    SET_GPR_U32(ctx, 31, 0x364F0Cu);
    ctx->pc = 0x364F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F04u;
    // 0x364f08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364F04u, 0x364F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F0Cu;
label_364f0c:
    // 0x364f0c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x364f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x364f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x364f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f18: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x364f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f1c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x364f1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f20: 0xc08e4dc  jal         func_239370
    ctx->pc = 0x364F20u;
    SET_GPR_U32(ctx, 31, 0x364F28u);
    ctx->pc = 0x364F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364F20u;
    // 0x364f24: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239370u, 0x364F20u, 0x364F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364F28u;
label_364f28:
    // 0x364f28: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x364f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x364f2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364f2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364f30: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x364f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x364f34: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x364f34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x364f38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x364f38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x364f3c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x364f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x364f40: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x364f40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364f48: 0x3e00008  jr          $ra
    ctx->pc = 0x364F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364F48u;
        // 0x364f4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364F50u;
}
