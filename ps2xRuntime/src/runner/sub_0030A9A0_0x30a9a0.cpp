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

// Function: sub_0030A9A0
// Address: 0x30a9a0 - 0x30aab0
void sub_0030A9A0_0x30a9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A9A0_0x30a9a0");
#endif

    switch (ctx->pc) {
        case 0x30aa40u: goto label_30aa40;
        default: break;
    }

    ctx->pc = 0x30a9a0u;

    // 0x30a9a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x30a9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x30a9a4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30a9a8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x30a9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x30a9ac: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x30a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x30a9b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30a9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9b4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x30a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x30a9b8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x30a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x30a9bc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x30a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x30a9c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x30a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x30a9c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x30a9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x30a9c8: 0x89400  sll         $s2, $t0, 16
    ctx->pc = 0x30a9c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x30a9cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x30a9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30a9d0: 0x30f3ffff  andi        $s3, $a3, 0xFFFF
    ctx->pc = 0x30a9d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x30a9d4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x30a9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x30a9d8: 0x3134ffff  andi        $s4, $t1, 0xFFFF
    ctx->pc = 0x30a9d8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x30a9dc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x30a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x30a9e0: 0x3155ffff  andi        $s5, $t2, 0xFFFF
    ctx->pc = 0x30a9e0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x30a9e4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x30a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x30a9e8: 0x3176ffff  andi        $s6, $t3, 0xFFFF
    ctx->pc = 0x30a9e8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x30a9ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30a9f0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x30a9f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a9f4: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x30a9f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x30a9f8: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x30a9f8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
    // 0x30a9fc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x30a9fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x30aa00: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x30aa00u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x30aa04: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x30aa04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x30aa08: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x30aa08u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x30aa0c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x30aa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x30aa10: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30aa10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30aa14: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30aa18: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x30aa18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aa1c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x30aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x30aa20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30aa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aa24: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30aa28: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x30aa2c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x30aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x30aa30: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x30aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x30aa34: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x30aa34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x30aa38: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x30AA38u;
    SET_GPR_U32(ctx, 31, 0x30AA40u);
    ctx->pc = 0x30AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AA38u;
    // 0x30aa3c: 0x8fb100b0  lw          $s1, 0xB0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x30AA38u, 0x30AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AA40u;
label_30aa40:
    // 0x30aa40: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30aa44: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x30aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x30aa48: 0x244234a0  addiu       $v0, $v0, 0x34A0
    ctx->pc = 0x30aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13472));
    // 0x30aa4c: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x30aa4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x30aa50: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30aa54: 0xe6160028  swc1        $f22, 0x28($s0)
    ctx->pc = 0x30aa54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x30aa58: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30aa58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aa5c: 0xe615002c  swc1        $f21, 0x2C($s0)
    ctx->pc = 0x30aa5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x30aa60: 0xa6130030  sh          $s3, 0x30($s0)
    ctx->pc = 0x30aa60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 19));
    // 0x30aa64: 0xa6120032  sh          $s2, 0x32($s0)
    ctx->pc = 0x30aa64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 18));
    // 0x30aa68: 0xa2170034  sb          $s7, 0x34($s0)
    ctx->pc = 0x30aa68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 23));
    // 0x30aa6c: 0xa2140035  sb          $s4, 0x35($s0)
    ctx->pc = 0x30aa6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 53), (uint8_t)GPR_U32(ctx, 20));
    // 0x30aa70: 0xa2150036  sb          $s5, 0x36($s0)
    ctx->pc = 0x30aa70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 21));
    // 0x30aa74: 0xa2160037  sb          $s6, 0x37($s0)
    ctx->pc = 0x30aa74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 55), (uint8_t)GPR_U32(ctx, 22));
    // 0x30aa78: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x30aa78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30aa7c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x30aa7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30aa80: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x30aa80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30aa84: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x30aa84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30aa88: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x30aa88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30aa8c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x30aa8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30aa90: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x30aa90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30aa94: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x30aa94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30aa98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30aa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30aa9c: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x30aa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x30aaa0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x30aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30aaa4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x30aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30aaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x30AAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AAA8u;
        // 0x30aaac: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AAB0u;
}
