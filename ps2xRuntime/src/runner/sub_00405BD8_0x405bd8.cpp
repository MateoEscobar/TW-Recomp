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

// Function: sub_00405BD8
// Address: 0x405bd8 - 0x405c98
void sub_00405BD8_0x405bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00405BD8_0x405bd8");
#endif

    switch (ctx->pc) {
        case 0x405bd8u: goto label_405bd8;
        case 0x405bdcu: goto label_405bdc;
        case 0x405be0u: goto label_405be0;
        case 0x405be4u: goto label_405be4;
        case 0x405be8u: goto label_405be8;
        case 0x405becu: goto label_405bec;
        case 0x405bf0u: goto label_405bf0;
        case 0x405bf4u: goto label_405bf4;
        case 0x405bf8u: goto label_405bf8;
        case 0x405bfcu: goto label_405bfc;
        case 0x405c00u: goto label_405c00;
        case 0x405c04u: goto label_405c04;
        case 0x405c08u: goto label_405c08;
        case 0x405c0cu: goto label_405c0c;
        case 0x405c10u: goto label_405c10;
        case 0x405c14u: goto label_405c14;
        case 0x405c18u: goto label_405c18;
        case 0x405c1cu: goto label_405c1c;
        case 0x405c20u: goto label_405c20;
        case 0x405c24u: goto label_405c24;
        case 0x405c28u: goto label_405c28;
        case 0x405c2cu: goto label_405c2c;
        case 0x405c30u: goto label_405c30;
        case 0x405c34u: goto label_405c34;
        case 0x405c38u: goto label_405c38;
        case 0x405c3cu: goto label_405c3c;
        case 0x405c40u: goto label_405c40;
        case 0x405c44u: goto label_405c44;
        case 0x405c48u: goto label_405c48;
        case 0x405c4cu: goto label_405c4c;
        case 0x405c50u: goto label_405c50;
        case 0x405c54u: goto label_405c54;
        case 0x405c58u: goto label_405c58;
        case 0x405c5cu: goto label_405c5c;
        case 0x405c60u: goto label_405c60;
        case 0x405c64u: goto label_405c64;
        case 0x405c68u: goto label_405c68;
        case 0x405c6cu: goto label_405c6c;
        case 0x405c70u: goto label_405c70;
        case 0x405c74u: goto label_405c74;
        case 0x405c78u: goto label_405c78;
        case 0x405c7cu: goto label_405c7c;
        case 0x405c80u: goto label_405c80;
        case 0x405c84u: goto label_405c84;
        case 0x405c88u: goto label_405c88;
        case 0x405c8cu: goto label_405c8c;
        case 0x405c90u: goto label_405c90;
        case 0x405c94u: goto label_405c94;
        default: break;
    }

    ctx->pc = 0x405bd8u;

label_405bd8:
    // 0x405bd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x405bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_405bdc:
    // 0x405bdc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x405bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_405be0:
    // 0x405be0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x405be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_405be4:
    // 0x405be4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x405be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_405be8:
    // 0x405be8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x405be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_405bec:
    // 0x405bec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x405becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_405bf0:
    // 0x405bf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x405bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_405bf4:
    // 0x405bf4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x405bf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_405bf8:
    // 0x405bf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x405bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_405bfc:
    // 0x405bfc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x405bfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_405c00:
    // 0x405c00: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x405c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_405c04:
    // 0x405c04: 0x40f809  jalr        $v0
label_405c08:
    if (ctx->pc == 0x405C08u) {
        ctx->pc = 0x405C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C04u;
        // 0x405c08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405C0Cu;
        goto label_405c0c;
    }
    ctx->pc = 0x405C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x405C0Cu);
        ctx->pc = 0x405C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C04u;
        // 0x405c08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405C04u, 0x405C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x405C0Cu;
label_405c0c:
    // 0x405c0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x405c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405c10:
    // 0x405c10: 0xc0ea13a  jal         func_3A84E8
label_405c14:
    if (ctx->pc == 0x405C14u) {
        ctx->pc = 0x405C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C10u;
        // 0x405c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405C18u;
        goto label_405c18;
    }
    ctx->pc = 0x405C10u;
    SET_GPR_U32(ctx, 31, 0x405C18u);
    ctx->pc = 0x405C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405C10u;
    // 0x405c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x405C10u, 0x405C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405C18u;
label_405c18:
    // 0x405c18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x405c18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_405c1c:
    // 0x405c1c: 0xc0ea14c  jal         func_3A8530
label_405c20:
    if (ctx->pc == 0x405C20u) {
        ctx->pc = 0x405C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C1Cu;
        // 0x405c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405C24u;
        goto label_405c24;
    }
    ctx->pc = 0x405C1Cu;
    SET_GPR_U32(ctx, 31, 0x405C24u);
    ctx->pc = 0x405C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405C1Cu;
    // 0x405c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x405C1Cu, 0x405C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405C24u;
label_405c24:
    // 0x405c24: 0x24030098  addiu       $v1, $zero, 0x98
    ctx->pc = 0x405c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
label_405c28:
    // 0x405c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x405c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405c2c:
    // 0x405c2c: 0xc0e896e  jal         func_3A25B8
label_405c30:
    if (ctx->pc == 0x405C30u) {
        ctx->pc = 0x405C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C2Cu;
        // 0x405c30: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405C34u;
        goto label_405c34;
    }
    ctx->pc = 0x405C2Cu;
    SET_GPR_U32(ctx, 31, 0x405C34u);
    ctx->pc = 0x405C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405C2Cu;
    // 0x405c30: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x405C2Cu, 0x405C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405C34u;
label_405c34:
    // 0x405c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x405c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_405c38:
    // 0x405c38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x405c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405c3c:
    // 0x405c3c: 0xc0e8604  jal         func_3A1810
label_405c40:
    if (ctx->pc == 0x405C40u) {
        ctx->pc = 0x405C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C3Cu;
        // 0x405c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405C44u;
        goto label_405c44;
    }
    ctx->pc = 0x405C3Cu;
    SET_GPR_U32(ctx, 31, 0x405C44u);
    ctx->pc = 0x405C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405C3Cu;
    // 0x405c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x405C3Cu, 0x405C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405C44u;
label_405c44:
    // 0x405c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x405c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_405c48:
    // 0x405c48: 0xc0e858c  jal         func_3A1630
label_405c4c:
    if (ctx->pc == 0x405C4Cu) {
        ctx->pc = 0x405C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C48u;
        // 0x405c4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405C50u;
        goto label_405c50;
    }
    ctx->pc = 0x405C48u;
    SET_GPR_U32(ctx, 31, 0x405C50u);
    ctx->pc = 0x405C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405C48u;
    // 0x405c4c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x405C48u, 0x405C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405C50u;
label_405c50:
    // 0x405c50: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x405c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_405c54:
    // 0x405c54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x405c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_405c58:
    // 0x405c58: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x405c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_405c5c:
    // 0x405c5c: 0x344200e4  ori         $v0, $v0, 0xE4
    ctx->pc = 0x405c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)228);
label_405c60:
    // 0x405c60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x405c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_405c64:
    // 0x405c64: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x405c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_405c68:
    // 0x405c68: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x405c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_405c6c:
    // 0x405c6c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x405c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_405c70:
    // 0x405c70: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x405c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_405c74:
    // 0x405c74: 0xe6540004  swc1        $f20, 0x4($s2)
    ctx->pc = 0x405c74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_405c78:
    // 0x405c78: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x405c78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_405c7c:
    // 0x405c7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x405c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_405c80:
    // 0x405c80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x405c80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_405c84:
    // 0x405c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x405c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_405c88:
    // 0x405c88: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x405c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_405c8c:
    // 0x405c8c: 0x3e00008  jr          $ra
label_405c90:
    if (ctx->pc == 0x405C90u) {
        ctx->pc = 0x405C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C8Cu;
        // 0x405c90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x405C94u;
        goto label_405c94;
    }
    ctx->pc = 0x405C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x405C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C8Cu;
        // 0x405c90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x405C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x405C94u;
label_405c94:
    // 0x405c94: 0x0  nop
    ctx->pc = 0x405c94u;
    // NOP
    ctx->pc = 0x405c98u;
}
