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

// Function: sub_002FCF50
// Address: 0x2fcf50 - 0x2fcff0
void sub_002FCF50_0x2fcf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCF50_0x2fcf50");
#endif

    switch (ctx->pc) {
        case 0x2fcf50u: goto label_2fcf50;
        case 0x2fcf54u: goto label_2fcf54;
        case 0x2fcf58u: goto label_2fcf58;
        case 0x2fcf5cu: goto label_2fcf5c;
        case 0x2fcf60u: goto label_2fcf60;
        case 0x2fcf64u: goto label_2fcf64;
        case 0x2fcf68u: goto label_2fcf68;
        case 0x2fcf6cu: goto label_2fcf6c;
        case 0x2fcf70u: goto label_2fcf70;
        case 0x2fcf74u: goto label_2fcf74;
        case 0x2fcf78u: goto label_2fcf78;
        case 0x2fcf7cu: goto label_2fcf7c;
        case 0x2fcf80u: goto label_2fcf80;
        case 0x2fcf84u: goto label_2fcf84;
        case 0x2fcf88u: goto label_2fcf88;
        case 0x2fcf8cu: goto label_2fcf8c;
        case 0x2fcf90u: goto label_2fcf90;
        case 0x2fcf94u: goto label_2fcf94;
        case 0x2fcf98u: goto label_2fcf98;
        case 0x2fcf9cu: goto label_2fcf9c;
        case 0x2fcfa0u: goto label_2fcfa0;
        case 0x2fcfa4u: goto label_2fcfa4;
        case 0x2fcfa8u: goto label_2fcfa8;
        case 0x2fcfacu: goto label_2fcfac;
        case 0x2fcfb0u: goto label_2fcfb0;
        case 0x2fcfb4u: goto label_2fcfb4;
        case 0x2fcfb8u: goto label_2fcfb8;
        case 0x2fcfbcu: goto label_2fcfbc;
        case 0x2fcfc0u: goto label_2fcfc0;
        case 0x2fcfc4u: goto label_2fcfc4;
        case 0x2fcfc8u: goto label_2fcfc8;
        case 0x2fcfccu: goto label_2fcfcc;
        case 0x2fcfd0u: goto label_2fcfd0;
        case 0x2fcfd4u: goto label_2fcfd4;
        case 0x2fcfd8u: goto label_2fcfd8;
        case 0x2fcfdcu: goto label_2fcfdc;
        case 0x2fcfe0u: goto label_2fcfe0;
        case 0x2fcfe4u: goto label_2fcfe4;
        case 0x2fcfe8u: goto label_2fcfe8;
        case 0x2fcfecu: goto label_2fcfec;
        default: break;
    }

    ctx->pc = 0x2fcf50u;

label_2fcf50:
    // 0x2fcf50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2fcf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2fcf54:
    // 0x2fcf54: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2fcf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2fcf58:
    // 0x2fcf58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fcf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2fcf5c:
    // 0x2fcf5c: 0x244231e0  addiu       $v0, $v0, 0x31E0
    ctx->pc = 0x2fcf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12768));
label_2fcf60:
    // 0x2fcf60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fcf60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fcf64:
    // 0x2fcf64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fcf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fcf68:
    // 0x2fcf68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fcf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2fcf6c:
    // 0x2fcf6c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2fcf6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2fcf70:
    // 0x2fcf70: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2fcf70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2fcf74:
    // 0x2fcf74: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2fcf74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2fcf78:
    // 0x2fcf78: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2fcf78u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_2fcf7c:
    // 0x2fcf7c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2fcf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2fcf80:
    // 0x2fcf80: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2fcf80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_2fcf84:
    // 0x2fcf84: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x2fcf84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
label_2fcf88:
    // 0x2fcf88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2fcf88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2fcf8c:
    // 0x2fcf8c: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2fcf8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
label_2fcf90:
    // 0x2fcf90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2fcf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2fcf94:
    // 0x2fcf94: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2fcf94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2fcf98:
    // 0x2fcf98: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2fcf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fcf9c:
    // 0x2fcf9c: 0x40f809  jalr        $v0
label_2fcfa0:
    if (ctx->pc == 0x2FCFA0u) {
        ctx->pc = 0x2FCFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF9Cu;
        // 0x2fcfa0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCFA4u;
        goto label_2fcfa4;
    }
    ctx->pc = 0x2FCF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FCFA4u);
        ctx->pc = 0x2FCFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCF9Cu;
        // 0x2fcfa0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCF9Cu, 0x2FCFA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FCFA4u;
label_2fcfa4:
    // 0x2fcfa4: 0x4615ad42  mul.s       $f21, $f21, $f21
    ctx->pc = 0x2fcfa4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_2fcfa8:
    // 0x2fcfa8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2fcfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2fcfac:
    // 0x2fcfac: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2fcfacu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_2fcfb0:
    // 0x2fcfb0: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x2fcfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
label_2fcfb4:
    // 0x2fcfb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fcfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fcfb8:
    // 0x2fcfb8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2fcfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2fcfbc:
    // 0x2fcfbc: 0xe6150010  swc1        $f21, 0x10($s0)
    ctx->pc = 0x2fcfbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2fcfc0:
    // 0x2fcfc0: 0xe6140014  swc1        $f20, 0x14($s0)
    ctx->pc = 0x2fcfc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_2fcfc4:
    // 0x2fcfc4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2fcfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2fcfc8:
    // 0x2fcfc8: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x2fcfc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
label_2fcfcc:
    // 0x2fcfcc: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x2fcfccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
label_2fcfd0:
    // 0x2fcfd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fcfd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fcfd4:
    // 0x2fcfd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fcfd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fcfd8:
    // 0x2fcfd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fcfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fcfdc:
    // 0x2fcfdc: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2fcfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2fcfe0:
    // 0x2fcfe0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2fcfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2fcfe4:
    // 0x2fcfe4: 0x3e00008  jr          $ra
label_2fcfe8:
    if (ctx->pc == 0x2FCFE8u) {
        ctx->pc = 0x2FCFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFE4u;
        // 0x2fcfe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FCFECu;
        goto label_2fcfec;
    }
    ctx->pc = 0x2FCFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCFE4u;
        // 0x2fcfe8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCFECu;
label_2fcfec:
    // 0x2fcfec: 0x0  nop
    ctx->pc = 0x2fcfecu;
    // NOP
    ctx->pc = 0x2fcff0u;
}
