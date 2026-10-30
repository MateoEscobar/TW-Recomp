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

// Function: sub_0011BB98
// Address: 0x11bb98 - 0x11bc48
void sub_0011BB98_0x11bb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BB98_0x11bb98");
#endif

    switch (ctx->pc) {
        case 0x11bb98u: goto label_11bb98;
        case 0x11bb9cu: goto label_11bb9c;
        case 0x11bba0u: goto label_11bba0;
        case 0x11bba4u: goto label_11bba4;
        case 0x11bba8u: goto label_11bba8;
        case 0x11bbacu: goto label_11bbac;
        case 0x11bbb0u: goto label_11bbb0;
        case 0x11bbb4u: goto label_11bbb4;
        case 0x11bbb8u: goto label_11bbb8;
        case 0x11bbbcu: goto label_11bbbc;
        case 0x11bbc0u: goto label_11bbc0;
        case 0x11bbc4u: goto label_11bbc4;
        case 0x11bbc8u: goto label_11bbc8;
        case 0x11bbccu: goto label_11bbcc;
        case 0x11bbd0u: goto label_11bbd0;
        case 0x11bbd4u: goto label_11bbd4;
        case 0x11bbd8u: goto label_11bbd8;
        case 0x11bbdcu: goto label_11bbdc;
        case 0x11bbe0u: goto label_11bbe0;
        case 0x11bbe4u: goto label_11bbe4;
        case 0x11bbe8u: goto label_11bbe8;
        case 0x11bbecu: goto label_11bbec;
        case 0x11bbf0u: goto label_11bbf0;
        case 0x11bbf4u: goto label_11bbf4;
        case 0x11bbf8u: goto label_11bbf8;
        case 0x11bbfcu: goto label_11bbfc;
        case 0x11bc00u: goto label_11bc00;
        case 0x11bc04u: goto label_11bc04;
        case 0x11bc08u: goto label_11bc08;
        case 0x11bc0cu: goto label_11bc0c;
        case 0x11bc10u: goto label_11bc10;
        case 0x11bc14u: goto label_11bc14;
        case 0x11bc18u: goto label_11bc18;
        case 0x11bc1cu: goto label_11bc1c;
        case 0x11bc20u: goto label_11bc20;
        case 0x11bc24u: goto label_11bc24;
        case 0x11bc28u: goto label_11bc28;
        case 0x11bc2cu: goto label_11bc2c;
        case 0x11bc30u: goto label_11bc30;
        case 0x11bc34u: goto label_11bc34;
        case 0x11bc38u: goto label_11bc38;
        case 0x11bc3cu: goto label_11bc3c;
        case 0x11bc40u: goto label_11bc40;
        case 0x11bc44u: goto label_11bc44;
        default: break;
    }

    ctx->pc = 0x11bb98u;

label_11bb98:
    // 0x11bb98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11bb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_11bb9c:
    // 0x11bb9c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x11bb9cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_11bba0:
    // 0x11bba0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11bba0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_11bba4:
    // 0x11bba4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11bba4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_11bba8:
    // 0x11bba8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11bba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_11bbac:
    // 0x11bbac: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11bbacu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_11bbb0:
    // 0x11bbb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_11bbb4:
    // 0x11bbb4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11bbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_11bbb8:
    // 0x11bbb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11bbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11bbbc:
    // 0x11bbbc: 0xc0e4060  jal         func_390180
label_11bbc0:
    if (ctx->pc == 0x11BBC0u) {
        ctx->pc = 0x11BBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBBCu;
        // 0x11bbc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BBC4u;
        goto label_11bbc4;
    }
    ctx->pc = 0x11BBBCu;
    SET_GPR_U32(ctx, 31, 0x11BBC4u);
    ctx->pc = 0x11BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBBCu;
    // 0x11bbc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11BBBCu, 0x11BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBC4u;
label_11bbc4:
    // 0x11bbc4: 0xc047a5e  jal         func_11E978
label_11bbc8:
    if (ctx->pc == 0x11BBC8u) {
        ctx->pc = 0x11BBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBC4u;
        // 0x11bbc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BBCCu;
        goto label_11bbcc;
    }
    ctx->pc = 0x11BBC4u;
    SET_GPR_U32(ctx, 31, 0x11BBCCu);
    ctx->pc = 0x11BBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BBC4u;
    // 0x11bbc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E978u, 0x11BBC4u, 0x11BBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BBCCu;
label_11bbcc:
    // 0x11bbcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11bbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11bbd0:
    // 0x11bbd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11bbd4:
    // 0x11bbd4: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11bbd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11bbd8:
    // 0x11bbd8: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11bbdc:
    // 0x11bbdc: 0x40f809  jalr        $v0
label_11bbe0:
    if (ctx->pc == 0x11BBE0u) {
        ctx->pc = 0x11BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBDCu;
        // 0x11bbe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BBE4u;
        goto label_11bbe4;
    }
    ctx->pc = 0x11BBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BBE4u);
        ctx->pc = 0x11BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBDCu;
        // 0x11bbe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BBDCu, 0x11BBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BBE4u;
label_11bbe4:
    // 0x11bbe4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x11bbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_11bbe8:
    // 0x11bbe8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_11bbec:
    if (ctx->pc == 0x11BBECu) {
        ctx->pc = 0x11BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBE8u;
        // 0x11bbec: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BBF0u;
        goto label_11bbf0;
    }
    ctx->pc = 0x11BBE8u;
    {
        const bool branch_taken_0x11bbe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBE8u;
        // 0x11bbec: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbe8) {
            ctx->pc = 0x11BC2Cu;
            goto label_11bc2c;
        }
    }
    ctx->pc = 0x11BBF0u;
label_11bbf0:
    // 0x11bbf0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_11bbf4:
    if (ctx->pc == 0x11BBF4u) {
        ctx->pc = 0x11BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBF0u;
        // 0x11bbf4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BBF8u;
        goto label_11bbf8;
    }
    ctx->pc = 0x11BBF0u;
    {
        const bool branch_taken_0x11bbf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBF0u;
        // 0x11bbf4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbf0) {
            ctx->pc = 0x11BC0Cu;
            goto label_11bc0c;
        }
    }
    ctx->pc = 0x11BBF8u;
label_11bbf8:
    // 0x11bbf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11bbfc:
    // 0x11bbfc: 0x844401a0  lh          $a0, 0x1A0($v0)
    ctx->pc = 0x11bbfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 416)));
label_11bc00:
    // 0x11bc00: 0x8c4301a4  lw          $v1, 0x1A4($v0)
    ctx->pc = 0x11bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
label_11bc04:
    // 0x11bc04: 0x60f809  jalr        $v1
label_11bc08:
    if (ctx->pc == 0x11BC08u) {
        ctx->pc = 0x11BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC04u;
        // 0x11bc08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BC0Cu;
        goto label_11bc0c;
    }
    ctx->pc = 0x11BC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11BC0Cu);
        ctx->pc = 0x11BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC04u;
        // 0x11bc08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BC04u, 0x11BC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BC0Cu;
label_11bc0c:
    // 0x11bc0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11bc10:
    // 0x11bc10: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x11bc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_11bc14:
    // 0x11bc14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11bc14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11bc18:
    // 0x11bc18: 0x846401a8  lh          $a0, 0x1A8($v1)
    ctx->pc = 0x11bc18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
label_11bc1c:
    // 0x11bc1c: 0x460cab29  min.s       $f12, $f21, $f12
    ctx->pc = 0x11bc1cu;
    ctx->f[12] = std::min(ctx->f[21], ctx->f[12]);
label_11bc20:
    // 0x11bc20: 0x8c6201ac  lw          $v0, 0x1AC($v1)
    ctx->pc = 0x11bc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 428)));
label_11bc24:
    // 0x11bc24: 0x40f809  jalr        $v0
label_11bc28:
    if (ctx->pc == 0x11BC28u) {
        ctx->pc = 0x11BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC24u;
        // 0x11bc28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BC2Cu;
        goto label_11bc2c;
    }
    ctx->pc = 0x11BC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BC2Cu);
        ctx->pc = 0x11BC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC24u;
        // 0x11bc28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BC24u, 0x11BC2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11BC2Cu;
label_11bc2c:
    // 0x11bc2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11bc2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11bc30:
    // 0x11bc30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11bc30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11bc34:
    // 0x11bc34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11bc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11bc38:
    // 0x11bc38: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x11bc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11bc3c:
    // 0x11bc3c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11bc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11bc40:
    // 0x11bc40: 0x3e00008  jr          $ra
label_11bc44:
    if (ctx->pc == 0x11BC44u) {
        ctx->pc = 0x11BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC40u;
        // 0x11bc44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11BC48u;
        goto label_fallthrough_0x11bc40;
    }
    ctx->pc = 0x11BC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC40u;
        // 0x11bc44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x11bc40:
    ctx->pc = 0x11BC48u;
}
