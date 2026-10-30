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

// Function: sub_00313F38
// Address: 0x313f38 - 0x314038
void sub_00313F38_0x313f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313F38_0x313f38");
#endif

    switch (ctx->pc) {
        case 0x313facu: goto label_313fac;
        default: break;
    }

    ctx->pc = 0x313f38u;

    // 0x313f38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x313f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x313f3c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x313f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x313f40: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x313f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x313f44: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x313f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x313f48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x313f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f4c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x313f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x313f50: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x313f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x313f54: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x313f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x313f58: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x313f58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x313f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x313f60: 0x313200ff  andi        $s2, $t1, 0xFF
    ctx->pc = 0x313f60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x313f64: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x313f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x313f68: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x313f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f6c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x313f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x313f70: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x313f70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313f78: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x313f78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f7c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x313f7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x313f80: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x313f80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x313f84: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x313f84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x313f88: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x313f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x313f8c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x313f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f90: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x313f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x313f94: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x313f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x313f98: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x313f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x313f9c: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x313f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x313fa0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x313fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x313fa4: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x313FA4u;
    SET_GPR_U32(ctx, 31, 0x313FACu);
    ctx->pc = 0x313FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313FA4u;
    // 0x313fa8: 0xae0b0008  sw          $t3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x313FA4u, 0x313FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313FACu;
label_313fac:
    // 0x313fac: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x313facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x313fb0: 0xa2120074  sb          $s2, 0x74($s0)
    ctx->pc = 0x313fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 116), (uint8_t)GPR_U32(ctx, 18));
    // 0x313fb4: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x313fb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x313fb8: 0xa2000075  sb          $zero, 0x75($s0)
    ctx->pc = 0x313fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 117), (uint8_t)GPR_U32(ctx, 0));
    // 0x313fbc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x313fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x313fc0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x313fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x313fc4: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x313fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x313fc8: 0x24423a40  addiu       $v0, $v0, 0x3A40
    ctx->pc = 0x313fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14912));
    // 0x313fcc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x313fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x313fd0: 0xae150020  sw          $s5, 0x20($s0)
    ctx->pc = 0x313fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 21));
    // 0x313fd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x313fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313fd8: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x313fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x313fdc: 0xae130028  sw          $s3, 0x28($s0)
    ctx->pc = 0x313fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 19));
    // 0x313fe0: 0xe6140060  swc1        $f20, 0x60($s0)
    ctx->pc = 0x313fe0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x313fe4: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x313fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x313fe8: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x313fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x313fec: 0xae11006c  sw          $s1, 0x6C($s0)
    ctx->pc = 0x313fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 17));
    // 0x313ff0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x313ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x313ff4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x313ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x313ff8: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x313ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x313ffc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x313ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314000: 0x246306d6  addiu       $v1, $v1, 0x6D6
    ctx->pc = 0x314000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1750));
    // 0x314004: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x314004u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314008: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x314008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
    // 0x31400c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x31400cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314010: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x314010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x314014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314018: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x314018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x31401c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x31401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x314020: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x314020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x314024: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x314024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x314028: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x314028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31402c: 0x3e00008  jr          $ra
    ctx->pc = 0x31402Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31402Cu;
        // 0x314030: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31402Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314034u;
    // 0x314034: 0x0  nop
    ctx->pc = 0x314034u;
    // NOP
    ctx->pc = 0x314038u;
}
