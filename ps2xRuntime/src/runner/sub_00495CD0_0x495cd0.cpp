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

// Function: sub_00495CD0
// Address: 0x495cd0 - 0x495dc0
void sub_00495CD0_0x495cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495CD0_0x495cd0");
#endif

    switch (ctx->pc) {
        case 0x495ce4u: goto label_495ce4;
        case 0x495cecu: goto label_495cec;
        case 0x495cfcu: goto label_495cfc;
        case 0x495d10u: goto label_495d10;
        case 0x495d20u: goto label_495d20;
        case 0x495d44u: goto label_495d44;
        default: break;
    }

    ctx->pc = 0x495cd0u;

    // 0x495cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x495cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x495cd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x495cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x495cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x495cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x495cdc: 0xc12877c  jal         func_4A1DF0
    ctx->pc = 0x495CDCu;
    SET_GPR_U32(ctx, 31, 0x495CE4u);
    ctx->pc = 0x495CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495CDCu;
    // 0x495ce0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1DF0u, 0x495CDCu, 0x495CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495CE4u;
label_495ce4:
    // 0x495ce4: 0xc127760  jal         func_49DD80
    ctx->pc = 0x495CE4u;
    SET_GPR_U32(ctx, 31, 0x495CECu);
    ctx->pc = 0x49DD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49DD80u, 0x495CE4u, 0x495CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495CECu;
label_495cec:
    // 0x495cec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x495CECu;
    {
        const bool branch_taken_0x495cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495cec) {
            ctx->pc = 0x495D00u;
            goto label_495d00;
        }
    }
    ctx->pc = 0x495CF4u;
    // 0x495cf4: 0xc125f16  jal         func_497C58
    ctx->pc = 0x495CF4u;
    SET_GPR_U32(ctx, 31, 0x495CFCu);
    ctx->pc = 0x497C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x497C58u, 0x495CF4u, 0x495CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495CFCu;
label_495cfc:
    // 0x495cfc: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x495cfcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_495d00:
    // 0x495d00: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x495D00u;
    {
        const bool branch_taken_0x495d00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x495D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495D00u;
        // 0x495d04: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495d00) {
            ctx->pc = 0x495D18u;
            goto label_495d18;
        }
    }
    ctx->pc = 0x495D08u;
    // 0x495d08: 0xc128790  jal         func_4A1E40
    ctx->pc = 0x495D08u;
    SET_GPR_U32(ctx, 31, 0x495D10u);
    ctx->pc = 0x4A1E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1E40u, 0x495D08u, 0x495D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495D10u;
label_495d10:
    // 0x495d10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x495D10u;
    {
        const bool branch_taken_0x495d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495D10u;
        // 0x495d14: 0x3c050071  lui         $a1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495d10) {
            ctx->pc = 0x495D48u;
            goto label_495d48;
        }
    }
    ctx->pc = 0x495D18u;
label_495d18:
    // 0x495d18: 0xc11f5b0  jal         func_47D6C0
    ctx->pc = 0x495D18u;
    SET_GPR_U32(ctx, 31, 0x495D20u);
    ctx->pc = 0x495D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495D18u;
    // 0x495d1c: 0x24848bf0  addiu       $a0, $a0, -0x7410 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D6C0u, 0x495D18u, 0x495D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495D20u;
label_495d20:
    // 0x495d20: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x495d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x495d24: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x495d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x495d28: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x495d28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x495d2c: 0x3c07004a  lui         $a3, 0x4A
    ctx->pc = 0x495d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)74 << 16));
    // 0x495d30: 0x24848c68  addiu       $a0, $a0, -0x7398
    ctx->pc = 0x495d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937704));
    // 0x495d34: 0x24a58cc8  addiu       $a1, $a1, -0x7338
    ctx->pc = 0x495d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937800));
    // 0x495d38: 0x24c68d58  addiu       $a2, $a2, -0x72A8
    ctx->pc = 0x495d38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937944));
    // 0x495d3c: 0xc1200a2  jal         func_480288
    ctx->pc = 0x495D3Cu;
    SET_GPR_U32(ctx, 31, 0x495D44u);
    ctx->pc = 0x495D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495D3Cu;
    // 0x495d40: 0x24e78db0  addiu       $a3, $a3, -0x7250 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x480288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x480288u, 0x495D3Cu, 0x495D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495D44u;
label_495d44:
    // 0x495d44: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x495d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_495d48:
    // 0x495d48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x495d48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x495d4c: 0x24a2ff40  addiu       $v0, $a1, -0xC0
    ctx->pc = 0x495d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x495d50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x495d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x495d54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x495d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x495d58: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x495d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x495d5c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x495d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x495d60: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x495d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x495d64: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x495d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x495d68: 0xe4a1ff40  swc1        $f1, -0xC0($a1)
    ctx->pc = 0x495d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967104), bits); }
    // 0x495d6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x495d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x495d70: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x495d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x495d74: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x495d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x495d78: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x495d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x495d7c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x495d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x495d80: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x495d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x495d84: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x495d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x495d88: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x495d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x495d8c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x495d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x495d90: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x495d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x495d94: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x495d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x495d98: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x495d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x495d9c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x495d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x495da0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x495da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495da4: 0x3463dead  ori         $v1, $v1, 0xDEAD
    ctx->pc = 0x495da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57005);
    // 0x495da8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x495da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x495dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x495dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x495db0: 0xaf838a38  sw          $v1, -0x75C8($gp)
    ctx->pc = 0x495db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937144), GPR_U32(ctx, 3));
    // 0x495db4: 0x3e00008  jr          $ra
    ctx->pc = 0x495DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x495DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495DB4u;
        // 0x495db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x495DBCu;
    // 0x495dbc: 0x0  nop
    ctx->pc = 0x495dbcu;
    // NOP
    ctx->pc = 0x495dc0u;
}
