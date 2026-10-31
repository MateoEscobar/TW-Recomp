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

// Function: sub_001D4110
// Address: 0x1d4110 - 0x1d4200
void sub_001D4110_0x1d4110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4110_0x1d4110");
#endif

    switch (ctx->pc) {
        case 0x1d416cu: goto label_1d416c;
        default: break;
    }

    ctx->pc = 0x1d4110u;

    // 0x1d4110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d4110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d4114: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1d4114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1d4118: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d4118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d411c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d4120: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d4120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d4124: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4128: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d4128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d412c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4130: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d4130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d4134: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1d4134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1d4138: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d4138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d413c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d413cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4140: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d4140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4144: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1d4144u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1d4148: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1d4148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d414c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1d414cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1d4150: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d4150u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1d4154: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1d4154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1d4158: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1d4158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1d415c: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1d415cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1d4160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d4160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4164: 0xc06ba26  jal         func_1AE898
    ctx->pc = 0x1D4164u;
    SET_GPR_U32(ctx, 31, 0x1D416Cu);
    ctx->pc = 0x1D4168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4164u;
    // 0x1d4168: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1D4164u, 0x1D416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D416Cu;
label_1d416c:
    // 0x1d416c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1d416cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1d4170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4174: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d4174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d4178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d417c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1d417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1d4180: 0xae1100a8  sw          $s1, 0xA8($s0)
    ctx->pc = 0x1d4180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 17));
    // 0x1d4184: 0xae120080  sw          $s2, 0x80($s0)
    ctx->pc = 0x1d4184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 18));
    // 0x1d4188: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x1d4188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x1d418c: 0xae030098  sw          $v1, 0x98($s0)
    ctx->pc = 0x1d418cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
    // 0x1d4190: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x1d4190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x1d4194: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1d4194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1d4198: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1d4198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1d419c: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1d419cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1d41a0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1d41a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1d41a4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1d41a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1d41a8: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1d41a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x1d41ac: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x1d41acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1d41b0: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x1d41b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1d41b4: 0x6a64000f  ldl         $a0, 0xF($s3)
    ctx->pc = 0x1d41b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d41b8: 0x6e640008  ldr         $a0, 0x8($s3)
    ctx->pc = 0x1d41b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d41bc: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x1d41bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1d41c0: 0xb20200b7  sdl         $v0, 0xB7($s0)
    ctx->pc = 0x1d41c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d41c4: 0xb60200b0  sdr         $v0, 0xB0($s0)
    ctx->pc = 0x1d41c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d41c8: 0xb20400bf  sdl         $a0, 0xBF($s0)
    ctx->pc = 0x1d41c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d41cc: 0xb60400b8  sdr         $a0, 0xB8($s0)
    ctx->pc = 0x1d41ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d41d0: 0xae0500c0  sw          $a1, 0xC0($s0)
    ctx->pc = 0x1d41d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 5));
    // 0x1d41d4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1d41d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1d41d8: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x1d41d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x1d41dc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d41dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1d41e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d41e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d41e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d41e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d41e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d41e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d41ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1d41ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d41f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d41f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d41f4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1d41f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d41f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D41F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D41F8u;
        // 0x1d41fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D41F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4200u;
}
