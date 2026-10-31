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

// Function: sub_003EAA60
// Address: 0x3eaa60 - 0x3eab08
void sub_003EAA60_0x3eaa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAA60_0x3eaa60");
#endif

    switch (ctx->pc) {
        case 0x3eaa60u: goto label_3eaa60;
        case 0x3eaa64u: goto label_3eaa64;
        case 0x3eaa68u: goto label_3eaa68;
        case 0x3eaa6cu: goto label_3eaa6c;
        case 0x3eaa70u: goto label_3eaa70;
        case 0x3eaa74u: goto label_3eaa74;
        case 0x3eaa78u: goto label_3eaa78;
        case 0x3eaa7cu: goto label_3eaa7c;
        case 0x3eaa80u: goto label_3eaa80;
        case 0x3eaa84u: goto label_3eaa84;
        case 0x3eaa88u: goto label_3eaa88;
        case 0x3eaa8cu: goto label_3eaa8c;
        case 0x3eaa90u: goto label_3eaa90;
        case 0x3eaa94u: goto label_3eaa94;
        case 0x3eaa98u: goto label_3eaa98;
        case 0x3eaa9cu: goto label_3eaa9c;
        case 0x3eaaa0u: goto label_3eaaa0;
        case 0x3eaaa4u: goto label_3eaaa4;
        case 0x3eaaa8u: goto label_3eaaa8;
        case 0x3eaaacu: goto label_3eaaac;
        case 0x3eaab0u: goto label_3eaab0;
        case 0x3eaab4u: goto label_3eaab4;
        case 0x3eaab8u: goto label_3eaab8;
        case 0x3eaabcu: goto label_3eaabc;
        case 0x3eaac0u: goto label_3eaac0;
        case 0x3eaac4u: goto label_3eaac4;
        case 0x3eaac8u: goto label_3eaac8;
        case 0x3eaaccu: goto label_3eaacc;
        case 0x3eaad0u: goto label_3eaad0;
        case 0x3eaad4u: goto label_3eaad4;
        case 0x3eaad8u: goto label_3eaad8;
        case 0x3eaadcu: goto label_3eaadc;
        case 0x3eaae0u: goto label_3eaae0;
        case 0x3eaae4u: goto label_3eaae4;
        case 0x3eaae8u: goto label_3eaae8;
        case 0x3eaaecu: goto label_3eaaec;
        case 0x3eaaf0u: goto label_3eaaf0;
        case 0x3eaaf4u: goto label_3eaaf4;
        case 0x3eaaf8u: goto label_3eaaf8;
        case 0x3eaafcu: goto label_3eaafc;
        case 0x3eab00u: goto label_3eab00;
        case 0x3eab04u: goto label_3eab04;
        default: break;
    }

    ctx->pc = 0x3eaa60u;

label_3eaa60:
    // 0x3eaa60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3eaa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3eaa64:
    // 0x3eaa64: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3eaa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3eaa68:
    // 0x3eaa68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3eaa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3eaa6c:
    // 0x3eaa6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3eaa6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eaa70:
    // 0x3eaa70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3eaa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3eaa74:
    // 0x3eaa74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3eaa74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eaa78:
    // 0x3eaa78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3eaa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3eaa7c:
    // 0x3eaa7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3eaa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3eaa80:
    // 0x3eaa80: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eaa80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eaa84:
    // 0x3eaa84: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eaa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eaa88:
    // 0x3eaa88: 0x40f809  jalr        $v0
label_3eaa8c:
    if (ctx->pc == 0x3EAA8Cu) {
        ctx->pc = 0x3EAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA88u;
        // 0x3eaa8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA90u;
        goto label_3eaa90;
    }
    ctx->pc = 0x3EAA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAA90u);
        ctx->pc = 0x3EAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA88u;
        // 0x3eaa8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAA88u, 0x3EAA90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAA90u;
label_3eaa90:
    // 0x3eaa90: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3eaa90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3eaa94:
    // 0x3eaa94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3eaa94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3eaa98:
    // 0x3eaa98: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3eaa98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eaa9c:
    // 0x3eaa9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3eaa9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eaaa0:
    // 0x3eaaa0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3eaaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3eaaa4:
    // 0x3eaaa4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3eaaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3eaaa8:
    // 0x3eaaa8: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3eaaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3eaaac:
    // 0x3eaaac: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3eaaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3eaab0:
    // 0x3eaab0: 0xc0ea12a  jal         func_3A84A8
label_3eaab4:
    if (ctx->pc == 0x3EAAB4u) {
        ctx->pc = 0x3EAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAB0u;
        // 0x3eaab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAAB8u;
        goto label_3eaab8;
    }
    ctx->pc = 0x3EAAB0u;
    SET_GPR_U32(ctx, 31, 0x3EAAB8u);
    ctx->pc = 0x3EAAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAAB0u;
    // 0x3eaab4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EAAB0u, 0x3EAAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAAB8u;
label_3eaab8:
    // 0x3eaab8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3eaab8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eaabc:
    // 0x3eaabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eaabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eaac0:
    // 0x3eaac0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3eaac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3eaac4:
    // 0x3eaac4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3eaac4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3eaac8:
    // 0x3eaac8: 0xc0e858c  jal         func_3A1630
label_3eaacc:
    if (ctx->pc == 0x3EAACCu) {
        ctx->pc = 0x3EAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAC8u;
        // 0x3eaacc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAAD0u;
        goto label_3eaad0;
    }
    ctx->pc = 0x3EAAC8u;
    SET_GPR_U32(ctx, 31, 0x3EAAD0u);
    ctx->pc = 0x3EAACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAAC8u;
    // 0x3eaacc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3EAAC8u, 0x3EAAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAAD0u;
label_3eaad0:
    // 0x3eaad0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3eaad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3eaad4:
    // 0x3eaad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3eaad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eaad8:
    // 0x3eaad8: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3eaad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3eaadc:
    // 0x3eaadc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3eaadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3eaae0:
    // 0x3eaae0: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3eaae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3eaae4:
    // 0x3eaae4: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3eaae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3eaae8:
    // 0x3eaae8: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3eaae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3eaaec:
    // 0x3eaaec: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3eaaecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3eaaf0:
    // 0x3eaaf0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3eaaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3eaaf4:
    // 0x3eaaf4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3eaaf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3eaaf8:
    // 0x3eaaf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3eaaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3eaafc:
    // 0x3eaafc: 0x3e00008  jr          $ra
label_3eab00:
    if (ctx->pc == 0x3EAB00u) {
        ctx->pc = 0x3EAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAFCu;
        // 0x3eab00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB04u;
        goto label_3eab04;
    }
    ctx->pc = 0x3EAAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAAFCu;
        // 0x3eab00: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EAB04u;
label_3eab04:
    // 0x3eab04: 0x0  nop
    ctx->pc = 0x3eab04u;
    // NOP
    ctx->pc = 0x3eab08u;
}
