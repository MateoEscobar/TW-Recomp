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

// Function: sub_0017CAA8
// Address: 0x17caa8 - 0x17d0b0
void sub_0017CAA8_0x17caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CAA8_0x17caa8");
#endif

    switch (ctx->pc) {
        case 0x17cb2cu: goto label_17cb2c;
        case 0x17cb3cu: goto label_17cb3c;
        case 0x17cbb0u: goto label_17cbb0;
        case 0x17cbe4u: goto label_17cbe4;
        case 0x17cbf4u: goto label_17cbf4;
        case 0x17ccc4u: goto label_17ccc4;
        case 0x17ccdcu: goto label_17ccdc;
        case 0x17ccf4u: goto label_17ccf4;
        case 0x17cd10u: goto label_17cd10;
        case 0x17cd20u: goto label_17cd20;
        case 0x17cdd0u: goto label_17cdd0;
        case 0x17ce3cu: goto label_17ce3c;
        case 0x17ce50u: goto label_17ce50;
        case 0x17ce6cu: goto label_17ce6c;
        case 0x17ce8cu: goto label_17ce8c;
        case 0x17d050u: goto label_17d050;
        case 0x17d05cu: goto label_17d05c;
        case 0x17d088u: goto label_17d088;
        default: break;
    }

    ctx->pc = 0x17caa8u;

    // 0x17caa8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x17caa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x17caac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17cab0: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x17cab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x17cab4: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x17cab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x17cab8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17cab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cabc: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x17cabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x17cac0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17cac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cac4: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x17cac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x17cac8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x17cac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cacc: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x17caccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x17cad0: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x17cad0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x17cad4: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x17cad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x17cad8: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x17cad8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17cadc: 0x6a240047  ldl         $a0, 0x47($s1)
    ctx->pc = 0x17cadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x17cae0: 0x6e240040  ldr         $a0, 0x40($s1)
    ctx->pc = 0x17cae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x17cae4: 0x6a26004f  ldl         $a2, 0x4F($s1)
    ctx->pc = 0x17cae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17cae8: 0x6e260048  ldr         $a2, 0x48($s1)
    ctx->pc = 0x17cae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17caec: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x17caecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17caf0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x17caf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17caf4: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x17caf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17caf8: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x17caf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17cafc: 0x3063001e  andi        $v1, $v1, 0x1E
    ctx->pc = 0x17cafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30);
    // 0x17cb00: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x17CB00u;
    {
        const bool branch_taken_0x17cb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB00u;
        // 0x17cb04: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb00) {
            ctx->pc = 0x17CBB8u;
            goto label_17cbb8;
        }
    }
    ctx->pc = 0x17CB08u;
    // 0x17cb08: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x17cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x17cb0c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17cb10: 0x44100d6  bgez        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x17CB10u;
    {
        const bool branch_taken_0x17cb10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB10u;
        // 0x17cb14: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb10) {
            ctx->pc = 0x17CE6Cu;
            goto label_17ce6c;
        }
    }
    ctx->pc = 0x17CB18u;
    // 0x17cb18: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x17cb18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x17cb1c: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x17cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x17cb20: 0x2610b8a8  addiu       $s0, $s0, -0x4758
    ctx->pc = 0x17cb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949032));
    // 0x17cb24: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x17CB24u;
    SET_GPR_U32(ctx, 31, 0x17CB2Cu);
    ctx->pc = 0x17CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB24u;
    // 0x17cb28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x17CB24u, 0x17CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB2Cu;
label_17cb2c:
    // 0x17cb2c: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x17cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x17cb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb34: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x17CB34u;
    SET_GPR_U32(ctx, 31, 0x17CB3Cu);
    ctx->pc = 0x17CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CB34u;
    // 0x17cb38: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x17CB34u, 0x17CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CB3Cu;
label_17cb3c:
    // 0x17cb3c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CB3Cu;
    {
        const bool branch_taken_0x17cb3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CB3Cu;
        // 0x17cb40: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cb3c) {
            ctx->pc = 0x17CB58u;
            goto label_17cb58;
        }
    }
    ctx->pc = 0x17CB44u;
    // 0x17cb44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cb48: 0x0  nop
    ctx->pc = 0x17cb48u;
    // NOP
    // 0x17cb4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17cb4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17cb50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17CB50u;
    {
        const bool branch_taken_0x17cb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cb50) {
            ctx->pc = 0x17CB70u;
            goto label_17cb70;
        }
    }
    ctx->pc = 0x17CB58u;
label_17cb58:
    // 0x17cb58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17cb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17cb5c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17cb60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cb64: 0x0  nop
    ctx->pc = 0x17cb64u;
    // NOP
    // 0x17cb68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17cb68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17cb6c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17cb6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17cb70:
    // 0x17cb70: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x17cb70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x17cb74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17cb74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17cb78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17cb78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cb7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17cb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cb80: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17cb84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17cb84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17cb88: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x17cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17cb8c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x17cb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cb90: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17cb94: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17cb94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17cb98: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x17cb98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17cb9c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x17cb9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x17cba0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17cba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17cba4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x17cba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17cba8: 0xc11b212  jal         func_46C848
    ctx->pc = 0x17CBA8u;
    SET_GPR_U32(ctx, 31, 0x17CBB0u);
    ctx->pc = 0x17CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBA8u;
    // 0x17cbac: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C848u, 0x17CBA8u, 0x17CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBB0u;
label_17cbb0:
    // 0x17cbb0: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x17CBB0u;
    {
        const bool branch_taken_0x17cbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBB0u;
        // 0x17cbb4: 0x9623002a  lhu         $v1, 0x2A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbb0) {
            ctx->pc = 0x17CE70u;
            goto label_17ce70;
        }
    }
    ctx->pc = 0x17CBB8u;
label_17cbb8:
    // 0x17cbb8: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x17CBB8u;
    {
        const bool branch_taken_0x17cbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBB8u;
        // 0x17cbbc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbb8) {
            ctx->pc = 0x17CC84u;
            goto label_17cc84;
        }
    }
    ctx->pc = 0x17CBC0u;
    // 0x17cbc0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x17cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x17cbc4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17cbc8: 0x44100a8  bgez        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x17CBC8u;
    {
        const bool branch_taken_0x17cbc8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBC8u;
        // 0x17cbcc: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbc8) {
            ctx->pc = 0x17CE6Cu;
            goto label_17ce6c;
        }
    }
    ctx->pc = 0x17CBD0u;
    // 0x17cbd0: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x17cbd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x17cbd4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x17cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x17cbd8: 0x2610b8a8  addiu       $s0, $s0, -0x4758
    ctx->pc = 0x17cbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949032));
    // 0x17cbdc: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x17CBDCu;
    SET_GPR_U32(ctx, 31, 0x17CBE4u);
    ctx->pc = 0x17CBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBDCu;
    // 0x17cbe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x17CBDCu, 0x17CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBE4u;
label_17cbe4:
    // 0x17cbe4: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x17cbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x17cbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbec: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x17CBECu;
    SET_GPR_U32(ctx, 31, 0x17CBF4u);
    ctx->pc = 0x17CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CBECu;
    // 0x17cbf0: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x17CBECu, 0x17CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CBF4u;
label_17cbf4:
    // 0x17cbf4: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x17cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x17cbf8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CBF8u;
    {
        const bool branch_taken_0x17cbf8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CBF8u;
        // 0x17cbfc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cbf8) {
            ctx->pc = 0x17CC14u;
            goto label_17cc14;
        }
    }
    ctx->pc = 0x17CC00u;
    // 0x17cc00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cc00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cc04: 0x0  nop
    ctx->pc = 0x17cc04u;
    // NOP
    // 0x17cc08: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17cc08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17cc0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17CC0Cu;
    {
        const bool branch_taken_0x17cc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cc0c) {
            ctx->pc = 0x17CC2Cu;
            goto label_17cc2c;
        }
    }
    ctx->pc = 0x17CC14u;
label_17cc14:
    // 0x17cc14: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17cc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17cc18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17cc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17cc1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cc20: 0x0  nop
    ctx->pc = 0x17cc20u;
    // NOP
    // 0x17cc24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17cc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17cc28: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17cc28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17cc2c:
    // 0x17cc2c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x17cc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x17cc30: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17cc30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17cc34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17cc34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cc38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17cc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17cc3c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17cc3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17cc40: 0x6843001f  ldl         $v1, 0x1F($v0)
    ctx->pc = 0x17cc40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17cc44: 0x6c430018  ldr         $v1, 0x18($v0)
    ctx->pc = 0x17cc44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17cc48: 0x68440027  ldl         $a0, 0x27($v0)
    ctx->pc = 0x17cc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x17cc4c: 0x6c440020  ldr         $a0, 0x20($v0)
    ctx->pc = 0x17cc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x17cc50: 0xb2230047  sdl         $v1, 0x47($s1)
    ctx->pc = 0x17cc50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17cc54: 0xb6230040  sdr         $v1, 0x40($s1)
    ctx->pc = 0x17cc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17cc58: 0xb224004f  sdl         $a0, 0x4F($s1)
    ctx->pc = 0x17cc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17cc5c: 0xb6240048  sdr         $a0, 0x48($s1)
    ctx->pc = 0x17cc5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17cc60: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x17cc60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x17cc64: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x17cc64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x17cc68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17cc68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17cc6c: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x17cc6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x17cc70: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x17cc70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17cc74: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x17cc74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17cc78: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x17cc78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x17cc7c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x17CC7Cu;
    {
        const bool branch_taken_0x17cc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC7Cu;
        // 0x17cc80: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc7c) {
            ctx->pc = 0x17CE6Cu;
            goto label_17ce6c;
        }
    }
    ctx->pc = 0x17CC84u;
label_17cc84:
    // 0x17cc84: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x17CC84u;
    {
        const bool branch_taken_0x17cc84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC84u;
        // 0x17cc88: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc84) {
            ctx->pc = 0x17CD98u;
            goto label_17cd98;
        }
    }
    ctx->pc = 0x17CC8Cu;
    // 0x17cc8c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x17cc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x17cc90: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17cc94: 0x4410075  bgez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x17CC94u;
    {
        const bool branch_taken_0x17cc94 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CC94u;
        // 0x17cc98: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cc94) {
            ctx->pc = 0x17CE6Cu;
            goto label_17ce6c;
        }
    }
    ctx->pc = 0x17CC9Cu;
    // 0x17cc9c: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x17cc9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x17cca0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17cca4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x17cca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x17cca8: 0x4610014  bgez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x17CCA8u;
    {
        const bool branch_taken_0x17cca8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x17CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCA8u;
        // 0x17ccac: 0xa2220018  sb          $v0, 0x18($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cca8) {
            ctx->pc = 0x17CCFCu;
            goto label_17ccfc;
        }
    }
    ctx->pc = 0x17CCB0u;
    // 0x17ccb0: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x17ccb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x17ccb4: 0x9625001c  lhu         $a1, 0x1C($s1)
    ctx->pc = 0x17ccb4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17ccb8: 0x2610b8a8  addiu       $s0, $s0, -0x4758
    ctx->pc = 0x17ccb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949032));
    // 0x17ccbc: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x17CCBCu;
    SET_GPR_U32(ctx, 31, 0x17CCC4u);
    ctx->pc = 0x17CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CCBCu;
    // 0x17ccc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x17CCBCu, 0x17CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CCC4u;
label_17ccc4:
    // 0x17ccc4: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x17ccc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x17ccc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ccc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cccc: 0x9225001b  lbu         $a1, 0x1B($s1)
    ctx->pc = 0x17ccccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
    // 0x17ccd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17ccd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ccd4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x17CCD4u;
    SET_GPR_U32(ctx, 31, 0x17CCDCu);
    ctx->pc = 0x17CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CCD4u;
    // 0x17ccd8: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x17CCD4u, 0x17CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CCDCu;
label_17ccdc:
    // 0x17ccdc: 0x9223001a  lbu         $v1, 0x1A($s1)
    ctx->pc = 0x17ccdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x17cce0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17cce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cce4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17cce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ccec: 0xc11b212  jal         func_46C848
    ctx->pc = 0x17CCECu;
    SET_GPR_U32(ctx, 31, 0x17CCF4u);
    ctx->pc = 0x17CCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CCECu;
    // 0x17ccf0: 0xa2230018  sb          $v1, 0x18($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C848u, 0x17CCECu, 0x17CCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CCF4u;
label_17ccf4:
    // 0x17ccf4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x17CCF4u;
    {
        const bool branch_taken_0x17ccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CCF4u;
        // 0x17ccf8: 0x9623002a  lhu         $v1, 0x2A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ccf4) {
            ctx->pc = 0x17CE70u;
            goto label_17ce70;
        }
    }
    ctx->pc = 0x17CCFCu;
label_17ccfc:
    // 0x17ccfc: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x17ccfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x17cd00: 0x9625001e  lhu         $a1, 0x1E($s1)
    ctx->pc = 0x17cd00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x17cd04: 0x2610b8a8  addiu       $s0, $s0, -0x4758
    ctx->pc = 0x17cd04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949032));
    // 0x17cd08: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x17CD08u;
    SET_GPR_U32(ctx, 31, 0x17CD10u);
    ctx->pc = 0x17CD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD08u;
    // 0x17cd0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x17CD08u, 0x17CD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD10u;
label_17cd10:
    // 0x17cd10: 0x92250019  lbu         $a1, 0x19($s1)
    ctx->pc = 0x17cd10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x17cd14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17cd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd18: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x17CD18u;
    SET_GPR_U32(ctx, 31, 0x17CD20u);
    ctx->pc = 0x17CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CD18u;
    // 0x17cd1c: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x17CD18u, 0x17CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CD20u;
label_17cd20:
    // 0x17cd20: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17CD20u;
    {
        const bool branch_taken_0x17cd20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD20u;
        // 0x17cd24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd20) {
            ctx->pc = 0x17CD3Cu;
            goto label_17cd3c;
        }
    }
    ctx->pc = 0x17CD28u;
    // 0x17cd28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cd2c: 0x0  nop
    ctx->pc = 0x17cd2cu;
    // NOP
    // 0x17cd30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17cd30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17cd34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17CD34u;
    {
        const bool branch_taken_0x17cd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cd34) {
            ctx->pc = 0x17CD54u;
            goto label_17cd54;
        }
    }
    ctx->pc = 0x17CD3Cu;
label_17cd3c:
    // 0x17cd3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17cd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17cd40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x17cd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x17cd44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17cd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cd48: 0x0  nop
    ctx->pc = 0x17cd48u;
    // NOP
    // 0x17cd4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17cd4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17cd50: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x17cd50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_17cd54:
    // 0x17cd54: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x17cd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x17cd58: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17cd58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17cd5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17cd5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cd60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17cd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cd64: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17cd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17cd68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17cd68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17cd6c: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x17cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17cd70: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x17cd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cd74: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x17cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17cd78: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x17cd78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17cd7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17cd80: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17cd80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17cd84: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x17cd84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x17cd88: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x17cd88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x17cd8c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x17cd8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17cd90: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x17CD90u;
    {
        const bool branch_taken_0x17cd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD90u;
        // 0x17cd94: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cd90) {
            ctx->pc = 0x17CE30u;
            goto label_17ce30;
        }
    }
    ctx->pc = 0x17CD98u;
label_17cd98:
    // 0x17cd98: 0x54620035  bnel        $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x17CD98u;
    {
        const bool branch_taken_0x17cd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17cd98) {
            ctx->pc = 0x17CD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CD98u;
            // 0x17cd9c: 0x9623002a  lhu         $v1, 0x2A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE70u;
            goto label_17ce70;
        }
    }
    ctx->pc = 0x17CDA0u;
    // 0x17cda0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x17cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x17cda4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17cda8: 0x4410030  bgez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x17CDA8u;
    {
        const bool branch_taken_0x17cda8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CDA8u;
        // 0x17cdac: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cda8) {
            ctx->pc = 0x17CE6Cu;
            goto label_17ce6c;
        }
    }
    ctx->pc = 0x17CDB0u;
    // 0x17cdb0: 0x82220018  lb          $v0, 0x18($s1)
    ctx->pc = 0x17cdb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x17cdb4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17cdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cdb8: 0x54500022  bnel        $v0, $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x17CDB8u;
    {
        const bool branch_taken_0x17cdb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x17cdb8) {
            ctx->pc = 0x17CDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CDB8u;
            // 0x17cdbc: 0x96250020  lhu         $a1, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CE44u;
            goto label_17ce44;
        }
    }
    ctx->pc = 0x17CDC0u;
    // 0x17cdc0: 0x96250022  lhu         $a1, 0x22($s1)
    ctx->pc = 0x17cdc0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17cdc4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x17cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x17cdc8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x17CDC8u;
    SET_GPR_U32(ctx, 31, 0x17CDD0u);
    ctx->pc = 0x17CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CDC8u;
    // 0x17cdcc: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x17CDC8u, 0x17CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CDD0u;
label_17cdd0:
    // 0x17cdd0: 0x92230019  lbu         $v1, 0x19($s1)
    ctx->pc = 0x17cdd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
    // 0x17cdd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17cdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cdd8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x17cdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x17cddc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17cddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17cde0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x17cde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17cde4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17cde4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cde8: 0x0  nop
    ctx->pc = 0x17cde8u;
    // NOP
    // 0x17cdec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17cdecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17cdf0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17cdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17cdf4: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x17cdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17cdf8: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x17cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cdfc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x17cdfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x17ce00: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x17ce00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x17ce04: 0x96230026  lhu         $v1, 0x26($s1)
    ctx->pc = 0x17ce04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x17ce08: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x17ce08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ce0c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17ce0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17ce10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17ce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ce14: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x17ce14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17ce18: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17ce18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ce1c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x17ce1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x17ce20: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x17ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x17ce24: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x17ce24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x17ce28: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x17ce28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17ce2c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x17ce2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17ce30:
    // 0x17ce30: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x17ce30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17ce34: 0xc11b212  jal         func_46C848
    ctx->pc = 0x17CE34u;
    SET_GPR_U32(ctx, 31, 0x17CE3Cu);
    ctx->pc = 0x17CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE34u;
    // 0x17ce38: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C848u, 0x17CE34u, 0x17CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE3Cu;
label_17ce3c:
    // 0x17ce3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17CE3Cu;
    {
        const bool branch_taken_0x17ce3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE3Cu;
        // 0x17ce40: 0x9623002a  lhu         $v1, 0x2A($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce3c) {
            ctx->pc = 0x17CE70u;
            goto label_17ce70;
        }
    }
    ctx->pc = 0x17CE44u;
label_17ce44:
    // 0x17ce44: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x17ce44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x17ce48: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x17CE48u;
    SET_GPR_U32(ctx, 31, 0x17CE50u);
    ctx->pc = 0x17CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE48u;
    // 0x17ce4c: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x17CE48u, 0x17CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE50u;
label_17ce50:
    // 0x17ce50: 0x96230024  lhu         $v1, 0x24($s1)
    ctx->pc = 0x17ce50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17ce54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17ce54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ce58: 0xa2300018  sb          $s0, 0x18($s1)
    ctx->pc = 0x17ce58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 16));
    // 0x17ce5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ce60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ce64: 0xc11b212  jal         func_46C848
    ctx->pc = 0x17CE64u;
    SET_GPR_U32(ctx, 31, 0x17CE6Cu);
    ctx->pc = 0x17CE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE64u;
    // 0x17ce68: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C848u, 0x17CE64u, 0x17CE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE6Cu;
label_17ce6c:
    // 0x17ce6c: 0x9623002a  lhu         $v1, 0x2A($s1)
    ctx->pc = 0x17ce6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
label_17ce70:
    // 0x17ce70: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17ce70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x17ce74: 0x10620085  beq         $v1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x17CE74u;
    {
        const bool branch_taken_0x17ce74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CE74u;
        // 0x17ce78: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ce74) {
            ctx->pc = 0x17D08Cu;
            goto label_17d08c;
        }
    }
    ctx->pc = 0x17CE7Cu;
    // 0x17ce7c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x17ce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ce80: 0xc6350014  lwc1        $f21, 0x14($s1)
    ctx->pc = 0x17ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17ce84: 0xc05eb4c  jal         func_17AD30
    ctx->pc = 0x17CE84u;
    SET_GPR_U32(ctx, 31, 0x17CE8Cu);
    ctx->pc = 0x17CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CE84u;
    // 0x17ce88: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AD30u, 0x17CE84u, 0x17CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CE8Cu;
label_17ce8c:
    // 0x17ce8c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x17ce8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x17ce90: 0x27a600c4  addiu       $a2, $sp, 0xC4
    ctx->pc = 0x17ce90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x17ce94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17ce98: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x17ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x17ce9c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x17ce9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17cea0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17cea4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x17cea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cea8: 0x78820040  lq          $v0, 0x40($a0)
    ctx->pc = 0x17cea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x17ceac: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x17ceacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x17ceb0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17ceb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17ceb4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x17ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x17ceb8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x17ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x17cebc: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x17cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cec0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17cec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17cec4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x17cec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x17cec8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x17cec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cecc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x17ceccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17ced0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x17ced0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17ced4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x17ced4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17ced8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x17ced8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x17cedc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x17cedcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17cee0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x17cee0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17cee4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17cee4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17cee8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x17cee8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17ceec: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x17ceecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17cef0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17cef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x17cef4: 0x48281800  qmfc2.ni    $t0, $vf3
    ctx->pc = 0x17cef4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x17cef8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x17cef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x17cefc: 0x4488a000  mtc1        $t0, $f20
    ctx->pc = 0x17cefcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17cf00: 0x0  nop
    ctx->pc = 0x17cf00u;
    // NOP
    // 0x17cf04: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x17cf04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cf08: 0x0  nop
    ctx->pc = 0x17cf08u;
    // NOP
    // 0x17cf0c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x17CF0Cu;
    {
        const bool branch_taken_0x17cf0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF0Cu;
        // 0x17cf10: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf0c) {
            ctx->pc = 0x17CF54u;
            goto label_17cf54;
        }
    }
    ctx->pc = 0x17CF14u;
    // 0x17cf14: 0x3c0141fe  lui         $at, 0x41FE
    ctx->pc = 0x17cf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16894 << 16));
    // 0x17cf18: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x17cf18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x17cf1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17cf1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17cf20: 0x0  nop
    ctx->pc = 0x17cf20u;
    // NOP
    // 0x17cf24: 0x0  nop
    ctx->pc = 0x17cf24u;
    // NOP
    // 0x17cf28: 0x46140004  c1          0x140004
    ctx->pc = 0x17cf28u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x17cf2c: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x17cf2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x17cf30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17cf30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17cf34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17cf34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x17cf38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x17cf38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x17cf3c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x17cf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x17cf40: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x17cf40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17cf44: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17CF44u;
    {
        const bool branch_taken_0x17cf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CF44u;
        // 0x17cf48: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cf44) {
            ctx->pc = 0x17CF50u;
            goto label_17cf50;
        }
    }
    ctx->pc = 0x17CF4Cu;
    // 0x17cf4c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x17cf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17cf50:
    // 0x17cf50: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x17cf50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
label_17cf54:
    // 0x17cf54: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x17cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17cf58: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x17cf58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17cf5c: 0x0  nop
    ctx->pc = 0x17cf5cu;
    // NOP
    // 0x17cf60: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x17cf60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17cf64: 0x0  nop
    ctx->pc = 0x17cf64u;
    // NOP
    // 0x17cf68: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x17CF68u;
    {
        const bool branch_taken_0x17cf68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17cf68) {
            ctx->pc = 0x17CF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CF68u;
            // 0x17cf6c: 0x90c20003  lbu         $v0, 0x3($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17CFD8u;
            goto label_17cfd8;
        }
    }
    ctx->pc = 0x17CF70u;
    // 0x17cf70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17cf70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17cf74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17cf74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17cf78: 0x0  nop
    ctx->pc = 0x17cf78u;
    // NOP
    // 0x17cf7c: 0x0  nop
    ctx->pc = 0x17cf7cu;
    // NOP
    // 0x17cf80: 0x46140044  c1          0x140044
    ctx->pc = 0x17cf80u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x17cf84: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x17cf84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cf88: 0x0  nop
    ctx->pc = 0x17cf88u;
    // NOP
    // 0x17cf8c: 0x0  nop
    ctx->pc = 0x17cf8cu;
    // NOP
    // 0x17cf90: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17cf90u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17cf94: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x17cf94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cf98: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17cf98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x17cf9c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x17cf9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x17cfa0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17cfa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17cfa4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x17cfa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x17cfa8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x17cfa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17cfac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x17cfacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17cfb0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x17cfb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17cfb4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x17cfb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17cfb8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x17cfb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17cfbc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x17cfbcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x17cfc0: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x17cfc0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17cfc4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x17cfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x17cfc8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x17cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x17cfcc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x17cfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x17cfd0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x17cfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x17cfd4: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x17cfd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_17cfd8:
    // 0x17cfd8: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x17cfd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x17cfdc: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x17CFDCu;
    {
        const bool branch_taken_0x17cfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17cfdc) {
            ctx->pc = 0x17CFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CFDCu;
            // 0x17cfe0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D08Cu;
            goto label_17d08c;
        }
    }
    ctx->pc = 0x17CFE4u;
    // 0x17cfe4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x17cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x17cfe8: 0x9624002c  lhu         $a0, 0x2C($s1)
    ctx->pc = 0x17cfe8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17cfec: 0x8ca3cce4  lw          $v1, -0x331C($a1)
    ctx->pc = 0x17cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CCE4u));
    // 0x17cff0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x17cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x17cff4: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x17cff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17cff8: 0x24422308  addiu       $v0, $v0, 0x2308
    ctx->pc = 0x17cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8968));
    // 0x17cffc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x17cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x17d000: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17d000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17d004: 0x8c7000b0  lw          $s0, 0xB0($v1)
    ctx->pc = 0x17d004u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x17d008: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x17d008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17d00c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x17d00cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d010: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x17d010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x17d014: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x17d014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17d018: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x17d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x17d01c: 0xe7b50090  swc1        $f21, 0x90($sp)
    ctx->pc = 0x17d01cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17d020: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x17d020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x17d024: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17D024u;
    {
        const bool branch_taken_0x17d024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D024u;
        // 0x17d028: 0xe7b50094  swc1        $f21, 0x94($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d024) {
            ctx->pc = 0x17D040u;
            goto label_17d040;
        }
    }
    ctx->pc = 0x17D02Cu;
    // 0x17d02c: 0x3c013acc  lui         $at, 0x3ACC
    ctx->pc = 0x17d02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15052 << 16));
    // 0x17d030: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17d030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17d034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17d034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d038: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17D038u;
    {
        const bool branch_taken_0x17d038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D038u;
        // 0x17d03c: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d038) {
            ctx->pc = 0x17D044u;
            goto label_17d044;
        }
    }
    ctx->pc = 0x17D040u;
label_17d040:
    // 0x17d040: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x17d040u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_17d044:
    // 0x17d044: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x17d044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x17d048: 0xc060b58  jal         func_182D60
    ctx->pc = 0x17D048u;
    SET_GPR_U32(ctx, 31, 0x17D050u);
    ctx->pc = 0x17D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D048u;
    // 0x17d04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x17D048u, 0x17D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D050u;
label_17d050:
    // 0x17d050: 0x9625002c  lhu         $a1, 0x2C($s1)
    ctx->pc = 0x17d050u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17d054: 0xc06078e  jal         func_181E38
    ctx->pc = 0x17D054u;
    SET_GPR_U32(ctx, 31, 0x17D05Cu);
    ctx->pc = 0x17D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D054u;
    // 0x17d058: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x17D054u, 0x17D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D05Cu;
label_17d05c:
    // 0x17d05c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d060: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x17d060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17d064: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x17d064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17d068: 0x6847000f  ldl         $a3, 0xF($v0)
    ctx->pc = 0x17d068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17d06c: 0x6c470008  ldr         $a3, 0x8($v0)
    ctx->pc = 0x17d06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17d070: 0xb3a600ab  sdl         $a2, 0xAB($sp)
    ctx->pc = 0x17d070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 171); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17d074: 0xb7a600a4  sdr         $a2, 0xA4($sp)
    ctx->pc = 0x17d074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 164); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17d078: 0xb3a700b3  sdl         $a3, 0xB3($sp)
    ctx->pc = 0x17d078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 179); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17d07c: 0xb7a700ac  sdr         $a3, 0xAC($sp)
    ctx->pc = 0x17d07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 172); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17d080: 0xc060b78  jal         func_182DE0
    ctx->pc = 0x17D080u;
    SET_GPR_U32(ctx, 31, 0x17D088u);
    ctx->pc = 0x17D084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D080u;
    // 0x17d084: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x17D080u, 0x17D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D088u;
label_17d088:
    // 0x17d088: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x17d088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_17d08c:
    // 0x17d08c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x17d08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17d090: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x17d090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17d094: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x17d094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x17d098: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x17d098u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x17d09c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x17d09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x17d0a0: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x17d0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17d0a4: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x17d0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17d0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x17D0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D0A8u;
        // 0x17d0ac: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D0B0u;
}
