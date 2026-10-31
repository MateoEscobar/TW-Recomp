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

// Function: sub_00386FA0
// Address: 0x386fa0 - 0x3871d0
void sub_00386FA0_0x386fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386FA0_0x386fa0");
#endif

    switch (ctx->pc) {
        case 0x387030u: goto label_387030;
        case 0x387040u: goto label_387040;
        default: break;
    }

    ctx->pc = 0x386fa0u;

    // 0x386fa0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x386fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x386fa4: 0x24a80030  addiu       $t0, $a1, 0x30
    ctx->pc = 0x386fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x386fa8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x386fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x386fac: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x386facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x386fb0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x386fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x386fb4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x386fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x386fb8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x386fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x386fbc: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x386fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x386fc0: 0xafa7005c  sw          $a3, 0x5C($sp)
    ctx->pc = 0x386fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 7));
    // 0x386fc4: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x386fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x386fc8: 0xafbd0050  sw          $sp, 0x50($sp)
    ctx->pc = 0x386fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 29));
    // 0x386fcc: 0x27ad0040  addiu       $t5, $sp, 0x40
    ctx->pc = 0x386fccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x386fd0: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x386fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x386fd4: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x386fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x386fd8: 0x6ba9005f  ldl         $t1, 0x5F($sp)
    ctx->pc = 0x386fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x386fdc: 0x6fa90058  ldr         $t1, 0x58($sp)
    ctx->pc = 0x386fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x386fe0: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x386fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386fe4: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x386fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386fe8: 0xb3a9004f  sdl         $t1, 0x4F($sp)
    ctx->pc = 0x386fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386fec: 0xb7a90048  sdr         $t1, 0x48($sp)
    ctx->pc = 0x386fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x386ff0: 0x27ac0050  addiu       $t4, $sp, 0x50
    ctx->pc = 0x386ff0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x386ff4: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x386ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x386ff8: 0x24c90030  addiu       $t1, $a2, 0x30
    ctx->pc = 0x386ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x386ffc: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x386ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x387000: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x387000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x387004: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x387004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x387008: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x387008u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38700c: 0xafa8005c  sw          $t0, 0x5C($sp)
    ctx->pc = 0x38700cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 8));
    // 0x387010: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x387010u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387014: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x387014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x387018: 0xafa70064  sw          $a3, 0x64($sp)
    ctx->pc = 0x387018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 7));
    // 0x38701c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x38701cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x387020: 0xafa9006c  sw          $t1, 0x6C($sp)
    ctx->pc = 0x387020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 9));
    // 0x387024: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x387024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x387028: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x387028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38702c: 0x0  nop
    ctx->pc = 0x38702cu;
    // NOP
label_387030:
    // 0x387030: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x387030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x387034: 0x1824821  addu        $t1, $t4, $v0
    ctx->pc = 0x387034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x387038: 0x1a24021  addu        $t0, $t5, $v0
    ctx->pc = 0x387038u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x38703c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38703cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387040:
    // 0x387040: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x387040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x387044: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x387044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x387048: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x387048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38704c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x38704cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x387050: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x387050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x387054: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x387054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x387058: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x387058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38705c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x38705cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x387060: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x387060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387064: 0x28e60003  slti        $a2, $a3, 0x3
    ctx->pc = 0x387064u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x387068: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x387068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38706c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x38706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x387070: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x387070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x387074: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x387074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x387078: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x387078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x38707c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x38707cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387080: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x387080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x387084: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x387084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x387088: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x387088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x38708c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x38708cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x387090: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x387090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x387094: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x387094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x387098: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x387098u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x38709c: 0x14c0ffe8  bnez        $a2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x38709Cu;
    {
        const bool branch_taken_0x38709c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3870A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38709Cu;
        // 0x3870a0: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38709c) {
            ctx->pc = 0x387040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387040;
        }
    }
    ctx->pc = 0x3870A4u;
    // 0x3870a4: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x3870a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3870a8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3870a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3870ac: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3870ACu;
    {
        const bool branch_taken_0x3870ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3870B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3870ACu;
        // 0x3870b0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3870ac) {
            ctx->pc = 0x387030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387030;
        }
    }
    ctx->pc = 0x3870B4u;
    // 0x3870b4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x3870b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x3870b8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x3870b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3870bc: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x3870bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x3870c0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3870c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3870c4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3870c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3870c8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3870c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3870cc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3870ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3870d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3870d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3870d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3870d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3870d8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3870d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3870dc: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x3870dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3870e0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3870e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3870e4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x3870e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x3870e8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3870e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3870ec: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x3870ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x3870f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3870f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3870f4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3870f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3870f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3870f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3870fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3870fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x387100: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x387100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x387104: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x387104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x387108: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x387108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38710c: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x38710cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x387110: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x387110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x387114: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x387114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x387118: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x387118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38711c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x38711cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387120: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x387120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x387124: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x387124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x387128: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x387128u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x38712c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x38712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x387130: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x387130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x387134: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x387134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x387138: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x387138u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x38713c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x38713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x387140: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x387140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x387144: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x387144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387148: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x387148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x38714c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38714cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x387150: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x387150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x387154: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x387154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x387158: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x387158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38715c: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x38715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x387160: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x387160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x387164: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x387164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x387168: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x387168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38716c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x38716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387170: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x387170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x387174: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x387174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x387178: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x387178u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x38717c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x38717cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x387180: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x387180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x387184: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x387184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x387188: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x387188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x38718c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x38718cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x387190: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x387190u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x387194: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x387194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x387198: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x387198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x38719c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38719cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3871a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3871a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3871a4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3871a4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3871a8: 0x7ba40010  lq          $a0, 0x10($sp)
    ctx->pc = 0x3871a8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3871ac: 0x7ba50020  lq          $a1, 0x20($sp)
    ctx->pc = 0x3871acu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3871b0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3871b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3871b4: 0x7d630000  sq          $v1, 0x0($t3)
    ctx->pc = 0x3871b4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 3));
    // 0x3871b8: 0x7d620030  sq          $v0, 0x30($t3)
    ctx->pc = 0x3871b8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 48), GPR_VEC(ctx, 2));
    // 0x3871bc: 0x7d640010  sq          $a0, 0x10($t3)
    ctx->pc = 0x3871bcu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 16), GPR_VEC(ctx, 4));
    // 0x3871c0: 0x7d650020  sq          $a1, 0x20($t3)
    ctx->pc = 0x3871c0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 32), GPR_VEC(ctx, 5));
    // 0x3871c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3871C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3871C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871C4u;
        // 0x3871c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3871C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3871CCu;
    // 0x3871cc: 0x0  nop
    ctx->pc = 0x3871ccu;
    // NOP
    ctx->pc = 0x3871d0u;
}
