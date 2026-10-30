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

// Function: sub_002D6CA0
// Address: 0x2d6ca0 - 0x2d6db0
void sub_002D6CA0_0x2d6ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6CA0_0x2d6ca0");
#endif

    switch (ctx->pc) {
        case 0x2d6d40u: goto label_2d6d40;
        case 0x2d6d48u: goto label_2d6d48;
        case 0x2d6d94u: goto label_2d6d94;
        default: break;
    }

    ctx->pc = 0x2d6ca0u;

    // 0x2d6ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d6ca4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2d6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2d6ca8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d6ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d6cac: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2d6cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2d6cb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d6cbc: 0x246310b0  addiu       $v1, $v1, 0x10B0
    ctx->pc = 0x2d6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x2d6cc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2d6cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2d6cc4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2d6cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2d6cc8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2d6cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2d6ccc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2d6cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2d6cd0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2d6cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2d6cd4: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x2d6cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x2d6cd8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2d6cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6cdc: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2d6cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2d6ce0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2d6ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6ce4: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2d6ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x2d6ce8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2d6ce8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x2d6cec: 0xe60d0038  swc1        $f13, 0x38($s0)
    ctx->pc = 0x2d6cecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2d6cf0: 0xe60c0034  swc1        $f12, 0x34($s0)
    ctx->pc = 0x2d6cf0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x2d6cf4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2d6cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x2d6cf8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2d6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2d6cfc: 0xa2000042  sb          $zero, 0x42($s0)
    ctx->pc = 0x2d6cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6d00: 0xa2000043  sb          $zero, 0x43($s0)
    ctx->pc = 0x2d6d00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6d04: 0xa2000047  sb          $zero, 0x47($s0)
    ctx->pc = 0x2d6d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6d08: 0xa2000048  sb          $zero, 0x48($s0)
    ctx->pc = 0x2d6d08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6d0c: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x2d6d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6d10: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2d6d10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d6d14: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x2d6d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2d6d18: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x2d6d18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2d6d1c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d6d20: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2d6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d6d24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d6d24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6d28: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2d6d28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2d6d2c: 0x84a40002  lh          $a0, 0x2($a1)
    ctx->pc = 0x2d6d2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2d6d30: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d6d34: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2d6d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d6d38: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2D6D38u;
    SET_GPR_U32(ctx, 31, 0x2D6D40u);
    ctx->pc = 0x2D6D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D38u;
    // 0x2d6d3c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2D6D38u, 0x2D6D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D40u;
label_2d6d40:
    // 0x2d6d40: 0xc0cd742  jal         func_335D08
    ctx->pc = 0x2D6D40u;
    SET_GPR_U32(ctx, 31, 0x2D6D48u);
    ctx->pc = 0x2D6D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D40u;
    // 0x2d6d44: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2D6D40u, 0x2D6D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D48u;
label_2d6d48:
    // 0x2d6d48: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x2d6d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d50: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x2d6d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x2d6d54: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2d6d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2d6d58: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d6d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d6d5c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2d6d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2d6d60: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d6d60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d6d64: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2d6d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6d68: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x2d6d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x2d6d6c: 0x8ca3021c  lw          $v1, 0x21C($a1)
    ctx->pc = 0x2d6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
    // 0x2d6d70: 0xa2030044  sb          $v1, 0x44($s0)
    ctx->pc = 0x2d6d70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d6d74: 0x90a20265  lbu         $v0, 0x265($a1)
    ctx->pc = 0x2d6d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 613)));
    // 0x2d6d78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d6d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d6d7c: 0xa2020045  sb          $v0, 0x45($s0)
    ctx->pc = 0x2d6d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d6d80: 0x8ca30144  lw          $v1, 0x144($a1)
    ctx->pc = 0x2d6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 324)));
    // 0x2d6d84: 0xa6030040  sh          $v1, 0x40($s0)
    ctx->pc = 0x2d6d84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d6d88: 0x90a2000b  lbu         $v0, 0xB($a1)
    ctx->pc = 0x2d6d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
    // 0x2d6d8c: 0xc095fce  jal         func_257F38
    ctx->pc = 0x2D6D8Cu;
    SET_GPR_U32(ctx, 31, 0x2D6D94u);
    ctx->pc = 0x2D6D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6D8Cu;
    // 0x2d6d90: 0xa2020046  sb          $v0, 0x46($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x2D6D8Cu, 0x2D6D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6D94u;
label_2d6d94:
    // 0x2d6d94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d6d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6d98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6d9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d6d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6da4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DA4u;
        // 0x2d6da8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6DACu;
    // 0x2d6dac: 0x0  nop
    ctx->pc = 0x2d6dacu;
    // NOP
    ctx->pc = 0x2d6db0u;
}
