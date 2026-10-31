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

// Function: sub_00146078
// Address: 0x146078 - 0x1461e0
void sub_00146078_0x146078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146078_0x146078");
#endif

    switch (ctx->pc) {
        case 0x1460e0u: goto label_1460e0;
        case 0x146144u: goto label_146144;
        case 0x1461c4u: goto label_1461c4;
        default: break;
    }

    ctx->pc = 0x146078u;

    // 0x146078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x146078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14607c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14607cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x146080: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14608c: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x14608cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x146090: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x146090u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x146094: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x146094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x146098: 0x9203001b  lbu         $v1, 0x1B($s0)
    ctx->pc = 0x146098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
    // 0x14609c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1460a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1460a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1460a4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1460A4u;
    {
        const bool branch_taken_0x1460a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1460A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460A4u;
        // 0x1460a8: 0xa2020018  sb          $v0, 0x18($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460a4) {
            ctx->pc = 0x1460D8u;
            goto label_1460d8;
        }
    }
    ctx->pc = 0x1460ACu;
    // 0x1460ac: 0x82040019  lb          $a0, 0x19($s0)
    ctx->pc = 0x1460acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1460b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1460b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1460b4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1460B4u;
    {
        const bool branch_taken_0x1460b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1460B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460B4u;
        // 0x1460b8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460b4) {
            ctx->pc = 0x1460D8u;
            goto label_1460d8;
        }
    }
    ctx->pc = 0x1460BCu;
    // 0x1460bc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x1460bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x1460c0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1460c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1460c4: 0x2465d810  addiu       $a1, $v1, -0x27F0
    ctx->pc = 0x1460c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957072));
    // 0x1460c8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1460c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1460cc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x1460ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1460d0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1460D0u;
    {
        const bool branch_taken_0x1460d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1460D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460D0u;
        // 0x1460d4: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460d0) {
            ctx->pc = 0x1460E8u;
            goto label_1460e8;
        }
    }
    ctx->pc = 0x1460D8u;
label_1460d8:
    // 0x1460d8: 0xc051800  jal         func_146000
    ctx->pc = 0x1460D8u;
    SET_GPR_U32(ctx, 31, 0x1460E0u);
    ctx->pc = 0x1460DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1460D8u;
    // 0x1460dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1460D8u, 0x1460E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1460E0u;
label_1460e0:
    // 0x1460e0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1460E0u;
    {
        const bool branch_taken_0x1460e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1460E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460E0u;
        // 0x1460e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460e0) {
            ctx->pc = 0x1461C8u;
            goto label_1461c8;
        }
    }
    ctx->pc = 0x1460E8u;
label_1460e8:
    // 0x1460e8: 0x6a22000f  ldl         $v0, 0xF($s1)
    ctx->pc = 0x1460e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1460ec: 0x6e220008  ldr         $v0, 0x8($s1)
    ctx->pc = 0x1460ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1460f0: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x1460f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1460f4: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x1460f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1460f8: 0x9202001f  lbu         $v0, 0x1F($s0)
    ctx->pc = 0x1460f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    // 0x1460fc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1460FCu;
    {
        const bool branch_taken_0x1460fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1460fc) {
            ctx->pc = 0x146100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1460FCu;
            // 0x146100: 0xc6340000  lwc1        $f20, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x146134u;
            goto label_146134;
        }
    }
    ctx->pc = 0x146104u;
    // 0x146104: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x146104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x146108: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x146108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x14610c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x14610cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x146110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x146110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146114: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146118: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x146118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14611c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14611cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x146120: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x146120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x146124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146128: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x146128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14612c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14612Cu;
    {
        const bool branch_taken_0x14612c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14612Cu;
        // 0x146130: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14612c) {
            ctx->pc = 0x1461A8u;
            goto label_1461a8;
        }
    }
    ctx->pc = 0x146134u;
label_146134:
    // 0x146134: 0xc6350004  lwc1        $f21, 0x4($s1)
    ctx->pc = 0x146134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x146138: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x146138u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x14613c: 0xc0cd5ea  jal         func_3357A8
    ctx->pc = 0x14613Cu;
    SET_GPR_U32(ctx, 31, 0x146144u);
    ctx->pc = 0x146140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14613Cu;
    // 0x146140: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x14613Cu, 0x146144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146144u;
label_146144:
    // 0x146144: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x146144u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x146148: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x146148u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x14614c: 0x4615ad42  mul.s       $f21, $f21, $f21
    ctx->pc = 0x14614cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x146150: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x146150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x146154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146158: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14615c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14615cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146160: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x146160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x146164: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x146164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x146168: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x146168u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x14616c: 0x0  nop
    ctx->pc = 0x14616cu;
    // NOP
    // 0x146170: 0x0  nop
    ctx->pc = 0x146170u;
    // NOP
    // 0x146174: 0x46140504  c1          0x140504
    ctx->pc = 0x146174u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x146178: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x146178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x14617c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14617cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146180: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x146180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x146184: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x146184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x146188: 0x92030018  lbu         $v1, 0x18($s0)
    ctx->pc = 0x146188u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x14618c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14618cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146190: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x146190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x146194: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x146194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146198: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x146198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14619c: 0x0  nop
    ctx->pc = 0x14619cu;
    // NOP
    // 0x1461a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1461A0u;
    {
        const bool branch_taken_0x1461a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1461a0) {
            ctx->pc = 0x1461A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1461A0u;
            // 0x1461a4: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1461A8u;
            goto label_1461a8;
        }
    }
    ctx->pc = 0x1461A8u;
label_1461a8:
    // 0x1461a8: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x1461a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1461ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1461acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1461b0: 0xa2230041  sb          $v1, 0x41($s1)
    ctx->pc = 0x1461b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x1461b4: 0x9202001d  lbu         $v0, 0x1D($s0)
    ctx->pc = 0x1461b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x1461b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1461b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1461bc: 0xc051e50  jal         func_147940
    ctx->pc = 0x1461BCu;
    SET_GPR_U32(ctx, 31, 0x1461C4u);
    ctx->pc = 0x1461C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461BCu;
    // 0x1461c0: 0xa2220040  sb          $v0, 0x40($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147940u, 0x1461BCu, 0x1461C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461C4u;
label_1461c4:
    // 0x1461c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1461c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1461c8:
    // 0x1461c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1461c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1461cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1461ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1461d0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1461d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1461d4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1461d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1461d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1461D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1461DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461D8u;
        // 0x1461dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1461D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1461E0u;
}
