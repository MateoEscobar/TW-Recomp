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

// Function: sub_002CAF78
// Address: 0x2caf78 - 0x2cb018
void sub_002CAF78_0x2caf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAF78_0x2caf78");
#endif

    switch (ctx->pc) {
        case 0x2cafccu: goto label_2cafcc;
        case 0x2caff0u: goto label_2caff0;
        case 0x2caff8u: goto label_2caff8;
        default: break;
    }

    ctx->pc = 0x2caf78u;

    // 0x2caf78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2caf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2caf7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2caf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2caf80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2caf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2caf84: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2caf84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2caf88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2caf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2caf8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2caf8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caf90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2caf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2caf94: 0x246318f0  addiu       $v1, $v1, 0x18F0
    ctx->pc = 0x2caf94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6384));
    // 0x2caf98: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2caf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2caf9c: 0xa2060028  sb          $a2, 0x28($s0)
    ctx->pc = 0x2caf9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x2cafa0: 0xa2070029  sb          $a3, 0x29($s0)
    ctx->pc = 0x2cafa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 7));
    // 0x2cafa4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2cafa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2cafa8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2cafa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2cafac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2cafacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2cafb0: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2cafb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cafb4: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2cafb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cafb8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2cafb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2cafbc: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x2cafbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cafc0: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2cafc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cafc4: 0xc087420  jal         func_21D080
    ctx->pc = 0x2CAFC4u;
    SET_GPR_U32(ctx, 31, 0x2CAFCCu);
    ctx->pc = 0x2CAFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAFC4u;
    // 0x2cafc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2CAFC4u, 0x2CAFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAFCCu;
label_2cafcc:
    // 0x2cafcc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2cafccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cafd0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2cafd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2cafd4: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2cafd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2cafd8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2cafd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2cafdc: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x2cafdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
    // 0x2cafe0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2cafe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2cafe4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2cafe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cafe8: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2CAFE8u;
    SET_GPR_U32(ctx, 31, 0x2CAFF0u);
    ctx->pc = 0x2CAFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAFE8u;
    // 0x2cafec: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2CAFE8u, 0x2CAFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAFF0u;
label_2caff0:
    // 0x2caff0: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2CAFF0u;
    SET_GPR_U32(ctx, 31, 0x2CAFF8u);
    ctx->pc = 0x2CAFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAFF0u;
    // 0x2caff4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2CAFF0u, 0x2CAFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAFF8u;
label_2caff8:
    // 0x2caff8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2caff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2caffc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2caffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb000: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2cb000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cb004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb00c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB00Cu;
        // 0x2cb010: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB014u;
    // 0x2cb014: 0x0  nop
    ctx->pc = 0x2cb014u;
    // NOP
    ctx->pc = 0x2cb018u;
}
