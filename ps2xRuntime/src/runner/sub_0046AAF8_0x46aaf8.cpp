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

// Function: sub_0046AAF8
// Address: 0x46aaf8 - 0x46ac50
void sub_0046AAF8_0x46aaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AAF8_0x46aaf8");
#endif

    switch (ctx->pc) {
        case 0x46ab34u: goto label_46ab34;
        case 0x46ab90u: goto label_46ab90;
        default: break;
    }

    ctx->pc = 0x46aaf8u;

    // 0x46aaf8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x46aaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x46aafc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x46aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x46ab00: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x46ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x46ab04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x46ab04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ab08: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x46ab08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x46ab0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x46ab0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ab10: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x46ab10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x46ab14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x46ab14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46ab18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x46ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x46ab1c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x46ab1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x46ab20: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x46ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x46ab24: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x46ab24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x46ab28: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x46ab28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46ab2c: 0xc1201ea  jal         func_4807A8
    ctx->pc = 0x46AB2Cu;
    SET_GPR_U32(ctx, 31, 0x46AB34u);
    ctx->pc = 0x46AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46AB2Cu;
    // 0x46ab30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4807A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4807A8u, 0x46AB2Cu, 0x46AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AB34u;
label_46ab34:
    // 0x46ab34: 0xc7a4001c  lwc1        $f4, 0x1C($sp)
    ctx->pc = 0x46ab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x46ab38: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x46ab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46ab3c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x46ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x46ab40: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x46ab40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x46ab44: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x46ab44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x46ab48: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x46ab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46ab4c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x46ab4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46ab50: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x46ab50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x46ab54: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x46ab54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x46ab58: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x46ab58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x46ab5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x46ab5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x46ab60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x46ab60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x46ab64: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x46ab64u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x46ab68: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x46ab68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x46ab6c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x46ab6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x46ab70: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x46ab70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x46ab74: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x46ab74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x46ab78: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x46ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x46ab7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46ab7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ab80: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x46AB80u;
    {
        const bool branch_taken_0x46ab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AB80u;
        // 0x46ab84: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46ab80) {
            ctx->pc = 0x46ABE8u;
            goto label_46abe8;
        }
    }
    ctx->pc = 0x46AB88u;
    // 0x46ab88: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x46ab88u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x46ab8c: 0x0  nop
    ctx->pc = 0x46ab8cu;
    // NOP
label_46ab90:
    // 0x46ab90: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x46ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x46ab94: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x46ab94u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x46ab98: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x46ab98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x46ab9c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x46ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x46aba0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x46aba0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x46aba4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x46aba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x46aba8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x46aba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46abac: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x46abacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x46abb0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x46abb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x46abb4: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x46abb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x46abb8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x46abb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x46abbc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x46abbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x46abc0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x46abc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x46abc4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x46abc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x46abc8: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x46abc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x46abcc: 0x0  nop
    ctx->pc = 0x46abccu;
    // NOP
    // 0x46abd0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x46ABD0u;
    {
        const bool branch_taken_0x46abd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x46abd0) {
            ctx->pc = 0x46ABD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46ABD0u;
            // 0x46abd4: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x46ABD8u;
            goto label_46abd8;
        }
    }
    ctx->pc = 0x46ABD8u;
label_46abd8:
    // 0x46abd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46abd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46abdc: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x46abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x46abe0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x46ABE0u;
    {
        const bool branch_taken_0x46abe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46ABE0u;
        // 0x46abe4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46abe0) {
            ctx->pc = 0x46AB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46ab90;
        }
    }
    ctx->pc = 0x46ABE8u;
label_46abe8:
    // 0x46abe8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x46abe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x46abec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x46abecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x46abf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x46ABF0u;
    {
        const bool branch_taken_0x46abf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x46abf0) {
            ctx->pc = 0x46AC00u;
            goto label_46ac00;
        }
    }
    ctx->pc = 0x46ABF8u;
    // 0x46abf8: 0x46140504  c1          0x140504
    ctx->pc = 0x46abf8u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x46abfc: 0x0  nop
    ctx->pc = 0x46abfcu;
    // NOP
label_46ac00:
    // 0x46ac00: 0xc78081a8  lwc1        $f0, -0x7E58($gp)
    ctx->pc = 0x46ac00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x46ac04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x46ac04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ac08: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x46ac08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46ac0c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x46ac0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x46ac10: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x46ac10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46ac14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x46ac14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46ac18: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x46ac18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x46ac1c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x46ac1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x46ac20: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x46ac20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x46ac24: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x46ac24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x46ac28: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x46ac28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x46ac2c: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x46ac2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x46ac30: 0xb2430007  sdl         $v1, 0x7($s2)
    ctx->pc = 0x46ac30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46ac34: 0xb6430000  sdr         $v1, 0x0($s2)
    ctx->pc = 0x46ac34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46ac38: 0xb244000f  sdl         $a0, 0xF($s2)
    ctx->pc = 0x46ac38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46ac3c: 0xb6440008  sdr         $a0, 0x8($s2)
    ctx->pc = 0x46ac3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x46ac40: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x46ac40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46ac44: 0x3e00008  jr          $ra
    ctx->pc = 0x46AC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46AC44u;
        // 0x46ac48: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46AC4Cu;
    // 0x46ac4c: 0x0  nop
    ctx->pc = 0x46ac4cu;
    // NOP
    ctx->pc = 0x46ac50u;
}
