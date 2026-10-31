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

// Function: sub_00452BF0
// Address: 0x452bf0 - 0x452e60
void sub_00452BF0_0x452bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452BF0_0x452bf0");
#endif

    switch (ctx->pc) {
        case 0x452c3cu: goto label_452c3c;
        case 0x452cd8u: goto label_452cd8;
        case 0x452ce4u: goto label_452ce4;
        case 0x452db0u: goto label_452db0;
        case 0x452db8u: goto label_452db8;
        default: break;
    }

    ctx->pc = 0x452bf0u;

    // 0x452bf0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x452bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x452bf4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x452bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x452bf8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x452bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x452bfc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x452bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x452c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x452c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452c04: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x452c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x452c08: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x452c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452c0c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x452c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x452c10: 0x26120030  addiu       $s2, $s0, 0x30
    ctx->pc = 0x452c10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x452c14: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x452c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x452c18: 0x2613003c  addiu       $s3, $s0, 0x3C
    ctx->pc = 0x452c18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x452c1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x452c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x452c20: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x452c20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x452c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x452c28: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x452c28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x452c2c: 0x8c43ad18  lw          $v1, -0x52E8($v0)
    ctx->pc = 0x452c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70AD18u));
    // 0x452c30: 0x8e34004c  lw          $s4, 0x4C($s1)
    ctx->pc = 0x452c30u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x452c34: 0xc12104a  jal         func_484128
    ctx->pc = 0x452C34u;
    SET_GPR_U32(ctx, 31, 0x452C3Cu);
    ctx->pc = 0x452C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452C34u;
    // 0x452c38: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x452C34u, 0x452C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452C3Cu;
label_452c3c:
    // 0x452c3c: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x452c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x452c40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x452c40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452c44: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x452c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x452c48: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x452C48u;
    {
        const bool branch_taken_0x452c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x452C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452C48u;
        // 0x452c4c: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452c48) {
            ctx->pc = 0x452C88u;
            goto label_452c88;
        }
    }
    ctx->pc = 0x452C50u;
    // 0x452c50: 0x6a2200b7  ldl         $v0, 0xB7($s1)
    ctx->pc = 0x452c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x452c54: 0x6e2200b0  ldr         $v0, 0xB0($s1)
    ctx->pc = 0x452c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x452c58: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x452c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x452c5c: 0xb2020037  sdl         $v0, 0x37($s0)
    ctx->pc = 0x452c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x452c60: 0xb6020030  sdr         $v0, 0x30($s0)
    ctx->pc = 0x452c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x452c64: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x452c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x452c68: 0x6a2200c7  ldl         $v0, 0xC7($s1)
    ctx->pc = 0x452c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x452c6c: 0x6e2200c0  ldr         $v0, 0xC0($s1)
    ctx->pc = 0x452c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x452c70: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x452c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x452c74: 0xb2020043  sdl         $v0, 0x43($s0)
    ctx->pc = 0x452c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x452c78: 0xb602003c  sdr         $v0, 0x3C($s0)
    ctx->pc = 0x452c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x452c7c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x452c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x452c80: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x452C80u;
    {
        const bool branch_taken_0x452c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x452C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452C80u;
        // 0x452c84: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452c80) {
            ctx->pc = 0x452D9Cu;
            goto label_452d9c;
        }
    }
    ctx->pc = 0x452C88u;
label_452c88:
    // 0x452c88: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x452c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x452c8c: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x452C8Cu;
    {
        const bool branch_taken_0x452c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x452c8c) {
            ctx->pc = 0x452C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x452C8Cu;
            // 0x452c90: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x452D60u;
            goto label_452d60;
        }
    }
    ctx->pc = 0x452C94u;
    // 0x452c94: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x452c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452c98: 0xc62c0078  lwc1        $f12, 0x78($s1)
    ctx->pc = 0x452c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x452c9c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x452c9cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x452ca0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x452ca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x452ca4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x452ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452ca8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x452ca8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x452cac: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x452cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x452cb0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x452cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452cb4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x452cb4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x452cb8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x452cb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x452cbc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x452cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452cc0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x452cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x452cc4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x452cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452cc8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x452cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x452ccc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x452cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452cd0: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x452CD0u;
    SET_GPR_U32(ctx, 31, 0x452CD8u);
    ctx->pc = 0x452CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452CD0u;
    // 0x452cd4: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x452CD0u, 0x452CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452CD8u;
label_452cd8:
    // 0x452cd8: 0xc62c0078  lwc1        $f12, 0x78($s1)
    ctx->pc = 0x452cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x452cdc: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x452CDCu;
    SET_GPR_U32(ctx, 31, 0x452CE4u);
    ctx->pc = 0x452CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452CDCu;
    // 0x452ce0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x452CDCu, 0x452CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452CE4u;
label_452ce4:
    // 0x452ce4: 0x4600a107  neg.s       $f4, $f20
    ctx->pc = 0x452ce4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x452ce8: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x452ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x452cec: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x452cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x452cf0: 0xc7ab0014  lwc1        $f11, 0x14($sp)
    ctx->pc = 0x452cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x452cf4: 0x460500c2  mul.s       $f3, $f0, $f5
    ctx->pc = 0x452cf4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x452cf8: 0xc7aa0004  lwc1        $f10, 0x4($sp)
    ctx->pc = 0x452cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x452cfc: 0x46082242  mul.s       $f9, $f4, $f8
    ctx->pc = 0x452cfcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x452d00: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x452d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452d04: 0x460b2302  mul.s       $f12, $f4, $f11
    ctx->pc = 0x452d04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x452d08: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x452d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x452d0c: 0x460a01c2  mul.s       $f7, $f0, $f10
    ctx->pc = 0x452d0cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x452d10: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x452d10u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x452d14: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x452d14u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x452d18: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x452d18u;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x452d1c: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x452d1cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x452d20: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x452d20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x452d24: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x452d24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x452d28: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x452d28u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x452d2c: 0x460aa502  mul.s       $f20, $f20, $f10
    ctx->pc = 0x452d2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[10]);
    // 0x452d30: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x452d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
    // 0x452d34: 0x460c39c0  add.s       $f7, $f7, $f12
    ctx->pc = 0x452d34u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x452d38: 0xe6030030  swc1        $f3, 0x30($s0)
    ctx->pc = 0x452d38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x452d3c: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x452d3cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x452d40: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x452d40u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x452d44: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x452d44u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x452d48: 0xe6470004  swc1        $f7, 0x4($s2)
    ctx->pc = 0x452d48u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x452d4c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x452d4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x452d50: 0xe6460008  swc1        $f6, 0x8($s2)
    ctx->pc = 0x452d50u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x452d54: 0xe605003c  swc1        $f5, 0x3C($s0)
    ctx->pc = 0x452d54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x452d58: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x452D58u;
    {
        const bool branch_taken_0x452d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x452D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452D58u;
        // 0x452d5c: 0xe6740004  swc1        $f20, 0x4($s3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x452d58) {
            ctx->pc = 0x452D94u;
            goto label_452d94;
        }
    }
    ctx->pc = 0x452D60u;
label_452d60:
    // 0x452d60: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x452d60u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x452d64: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x452d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x452d68: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x452d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452d6c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x452d6cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x452d70: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x452d70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x452d74: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x452d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452d78: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x452d78u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x452d7c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x452d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x452d80: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x452d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x452d84: 0xe601003c  swc1        $f1, 0x3C($s0)
    ctx->pc = 0x452d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x452d88: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x452d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x452d8c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x452d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x452d90: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x452d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_452d94:
    // 0x452d94: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x452d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x452d98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x452d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_452d9c:
    // 0x452d9c: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x452d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x452da0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x452DA0u;
    {
        const bool branch_taken_0x452da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x452DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452DA0u;
        // 0x452da4: 0x8e9200e4  lw          $s2, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452da0) {
            ctx->pc = 0x452DB0u;
            goto label_452db0;
        }
    }
    ctx->pc = 0x452DA8u;
    // 0x452da8: 0xc113b66  jal         func_44ED98
    ctx->pc = 0x452DA8u;
    SET_GPR_U32(ctx, 31, 0x452DB0u);
    ctx->pc = 0x452DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x452DA8u;
    // 0x452dac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44ED98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44ED98u, 0x452DA8u, 0x452DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452DB0u;
label_452db0:
    // 0x452db0: 0xc123508  jal         func_48D420
    ctx->pc = 0x452DB0u;
    SET_GPR_U32(ctx, 31, 0x452DB8u);
    ctx->pc = 0x48D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D420u, 0x452DB0u, 0x452DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452DB8u;
label_452db8:
    // 0x452db8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x452db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x452dbc: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x452dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x452dc0: 0x3c02ffe7  lui         $v0, 0xFFE7
    ctx->pc = 0x452dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65511 << 16));
    // 0x452dc4: 0x2443018  mult        $a2, $s2, $a0
    ctx->pc = 0x452dc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x452dc8: 0x3463dfbd  ori         $v1, $v1, 0xDFBD
    ctx->pc = 0x452dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57277);
    // 0x452dcc: 0x3442fe7f  ori         $v0, $v0, 0xFE7F
    ctx->pc = 0x452dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65151);
    // 0x452dd0: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x452dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x452dd4: 0x2a31824  and         $v1, $s5, $v1
    ctx->pc = 0x452dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 3));
    // 0x452dd8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x452dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x452ddc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x452ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x452de0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x452de0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x452de4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x452de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x452de8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x452de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x452dec: 0x2862821  addu        $a1, $s4, $a2
    ctx->pc = 0x452decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x452df0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x452df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x452df4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x452df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x452df8: 0x8ca40140  lw          $a0, 0x140($a1)
    ctx->pc = 0x452df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x452dfc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x452dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x452e00: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x452E00u;
    {
        const bool branch_taken_0x452e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x452E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452E00u;
        // 0x452e04: 0xae040010  sw          $a0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452e00) {
            ctx->pc = 0x452E1Cu;
            goto label_452e1c;
        }
    }
    ctx->pc = 0x452E08u;
    // 0x452e08: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x452e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x452e0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x452e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x452e10: 0x8c440154  lw          $a0, 0x154($v0)
    ctx->pc = 0x452e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x452e14: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x452e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x452e18: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x452e18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
label_452e1c:
    // 0x452e1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x452e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x452e20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x452E20u;
    {
        const bool branch_taken_0x452e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x452E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452E20u;
        // 0x452e24: 0x2861021  addu        $v0, $s4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x452e20) {
            ctx->pc = 0x452E38u;
            goto label_452e38;
        }
    }
    ctx->pc = 0x452E28u;
    // 0x452e28: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x452e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x452e2c: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x452e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x452e30: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x452e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x452e34: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x452e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_452e38:
    // 0x452e38: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x452e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x452e3c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x452e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x452e40: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x452e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x452e44: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x452e44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x452e48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x452e48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x452e4c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x452e4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x452e50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x452e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x452e54: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x452e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x452e58: 0x3e00008  jr          $ra
    ctx->pc = 0x452E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x452E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x452E58u;
        // 0x452e5c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x452E60u;
}
