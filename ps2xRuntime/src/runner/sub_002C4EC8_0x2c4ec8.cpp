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

// Function: sub_002C4EC8
// Address: 0x2c4ec8 - 0x2c4fb0
void sub_002C4EC8_0x2c4ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4EC8_0x2c4ec8");
#endif

    switch (ctx->pc) {
        case 0x2c4efcu: goto label_2c4efc;
        case 0x2c4f04u: goto label_2c4f04;
        case 0x2c4f14u: goto label_2c4f14;
        case 0x2c4f24u: goto label_2c4f24;
        case 0x2c4f34u: goto label_2c4f34;
        case 0x2c4f44u: goto label_2c4f44;
        case 0x2c4f60u: goto label_2c4f60;
        case 0x2c4f80u: goto label_2c4f80;
        case 0x2c4f8cu: goto label_2c4f8c;
        default: break;
    }

    ctx->pc = 0x2c4ec8u;

    // 0x2c4ec8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c4ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c4ecc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c4eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c4ed0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2c4ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2c4ed4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c4ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ed8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4edc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2c4edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ee0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2c4ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2c4ee4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c4ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ee8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2c4ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2c4eec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2c4eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2c4ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c4ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c4ef4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2C4EF4u;
    SET_GPR_U32(ctx, 31, 0x2C4EFCu);
    ctx->pc = 0x2C4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4EF4u;
    // 0x2c4ef8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2C4EF4u, 0x2C4EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4EFCu;
label_2c4efc:
    // 0x2c4efc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2C4EFCu;
    SET_GPR_U32(ctx, 31, 0x2C4F04u);
    ctx->pc = 0x2C4F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4EFCu;
    // 0x2c4f00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2C4EFCu, 0x2C4F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F04u;
label_2c4f04:
    // 0x2c4f04: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C4F04u;
    {
        const bool branch_taken_0x2c4f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F04u;
        // 0x2c4f08: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f04) {
            ctx->pc = 0x2C4F90u;
            goto label_2c4f90;
        }
    }
    ctx->pc = 0x2C4F0Cu;
    // 0x2c4f0c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C4F0Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F14u);
    ctx->pc = 0x2C4F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4F0Cu;
    // 0x2c4f10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C4F0Cu, 0x2C4F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F14u;
label_2c4f14:
    // 0x2c4f14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c4f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f18: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x2c4f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2c4f1c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C4F1Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F24u);
    ctx->pc = 0x2C4F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4F1Cu;
    // 0x2c4f20: 0xafb20004  sw          $s2, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C4F1Cu, 0x2C4F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F24u;
label_2c4f24:
    // 0x2c4f24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c4f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f2c: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2C4F2Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F34u);
    ctx->pc = 0x2C4F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4F2Cu;
    // 0x2c4f30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2C4F2Cu, 0x2C4F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F34u;
label_2c4f34:
    // 0x2c4f34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4F34u;
    {
        const bool branch_taken_0x2c4f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4f34) {
            ctx->pc = 0x2C4F58u;
            goto label_2c4f58;
        }
    }
    ctx->pc = 0x2C4F3Cu;
    // 0x2c4f3c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2C4F3Cu;
    SET_GPR_U32(ctx, 31, 0x2C4F44u);
    ctx->pc = 0x2C4F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4F3Cu;
    // 0x2c4f40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2C4F3Cu, 0x2C4F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F44u;
label_2c4f44:
    // 0x2c4f44: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x2c4f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2c4f48: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2c4f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2c4f4c: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x2c4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2c4f50: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2c4f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2c4f54: 0xaca305f4  sw          $v1, 0x5F4($a1)
    ctx->pc = 0x2c4f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1524), GPR_U32(ctx, 3));
label_2c4f58:
    // 0x2c4f58: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2C4F58u;
    SET_GPR_U32(ctx, 31, 0x2C4F60u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2C4F58u, 0x2C4F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F60u;
label_2c4f60:
    // 0x2c4f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c4f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f64: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4F64u;
    {
        const bool branch_taken_0x2c4f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F64u;
        // 0x2c4f68: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f64) {
            ctx->pc = 0x2C4F80u;
            goto label_2c4f80;
        }
    }
    ctx->pc = 0x2C4F6Cu;
    // 0x2c4f6c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2c4f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f70: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2c4f70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f78: 0xc0b13ec  jal         func_2C4FB0
    ctx->pc = 0x2C4F78u;
    SET_GPR_U32(ctx, 31, 0x2C4F80u);
    ctx->pc = 0x2C4F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4F78u;
    // 0x2c4f7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4FB0u, 0x2C4F78u, 0x2C4F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F80u;
label_2c4f80:
    // 0x2c4f80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f84: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2C4F84u;
    SET_GPR_U32(ctx, 31, 0x2C4F8Cu);
    ctx->pc = 0x2C4F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4F84u;
    // 0x2c4f88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2C4F84u, 0x2C4F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4F8Cu;
label_2c4f8c:
    // 0x2c4f8c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2c4f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c4f90:
    // 0x2c4f90: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2c4f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4f94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2c4f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4f98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c4f98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4f9c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2c4f9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4fa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c4fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4FA4u;
        // 0x2c4fa8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4FACu;
    // 0x2c4fac: 0x0  nop
    ctx->pc = 0x2c4facu;
    // NOP
    ctx->pc = 0x2c4fb0u;
}
