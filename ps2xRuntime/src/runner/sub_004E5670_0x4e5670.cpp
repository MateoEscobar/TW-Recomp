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

// Function: sub_004E5670
// Address: 0x4e5670 - 0x4e58f8
void sub_004E5670_0x4e5670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5670_0x4e5670");
#endif

    switch (ctx->pc) {
        case 0x4e56b8u: goto label_4e56b8;
        case 0x4e56d8u: goto label_4e56d8;
        case 0x4e5720u: goto label_4e5720;
        case 0x4e5730u: goto label_4e5730;
        case 0x4e5768u: goto label_4e5768;
        case 0x4e5778u: goto label_4e5778;
        case 0x4e57b8u: goto label_4e57b8;
        case 0x4e57c8u: goto label_4e57c8;
        case 0x4e5800u: goto label_4e5800;
        case 0x4e5810u: goto label_4e5810;
        case 0x4e5850u: goto label_4e5850;
        case 0x4e5860u: goto label_4e5860;
        case 0x4e5894u: goto label_4e5894;
        case 0x4e58b0u: goto label_4e58b0;
        default: break;
    }

    ctx->pc = 0x4e5670u;

label_4e5670:
    // 0x4e5670: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4e5670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4e5674: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e5674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x4e5678: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e5678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4e567c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e567cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5680: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4e5680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5684: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e5684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x4e5688: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x4e5688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x4e568c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e568cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x4e5690: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e5690u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e5694: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e5694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4e5698: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e5698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4e569c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4e569cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e56a0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e56a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x4e56a4: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4e56a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4e56a8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e56a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x4e56ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e56acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e56b0: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x4E56B0u;
    {
        const bool branch_taken_0x4e56b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E56B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E56B0u;
        // 0x4e56b4: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e56b0) {
            ctx->pc = 0x4E58C8u;
            goto label_4e58c8;
        }
    }
    ctx->pc = 0x4E56B8u;
label_4e56b8:
    // 0x4e56b8: 0x16c00009  bnez        $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x4E56B8u;
    {
        const bool branch_taken_0x4e56b8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E56BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E56B8u;
        // 0x4e56bc: 0x2531023  subu        $v0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e56b8) {
            ctx->pc = 0x4E56E0u;
            goto label_4e56e0;
        }
    }
    ctx->pc = 0x4E56C0u;
    // 0x4e56c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e56c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e56c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e56c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e56c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4e56c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e56cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4e56ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e56d0: 0xc13950a  jal         func_4E5428
    ctx->pc = 0x4E56D0u;
    SET_GPR_U32(ctx, 31, 0x4E56D8u);
    ctx->pc = 0x4E56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E56D0u;
    // 0x4e56d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5428u, 0x4E56D0u, 0x4E56D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E56D8u;
label_4e56d8:
    // 0x4e56d8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x4E56D8u;
    {
        const bool branch_taken_0x4e56d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E56D8u;
        // 0x4e56dc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e56d8) {
            ctx->pc = 0x4E58CCu;
            goto label_4e58cc;
        }
    }
    ctx->pc = 0x4E56E0u;
label_4e56e0:
    // 0x4e56e0: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x4e56e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x4e56e4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4e56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4e56e8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4e56e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e56ec: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e56ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e56f0: 0x8eb0489c  lw          $s0, 0x489C($s5)
    ctx->pc = 0x4e56f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
    // 0x4e56f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e56f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4e56f8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4e56f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e56fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4e56fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4e5700: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e5700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e5704: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e5704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4e5708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e570c: 0x53a021  addu        $s4, $v0, $s3
    ctx->pc = 0x4e570cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4e5710: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x4e5710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x4e5714: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x4e5714u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5718: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5718u;
    SET_GPR_U32(ctx, 31, 0x4E5720u);
    ctx->pc = 0x4E571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5718u;
    // 0x4e571c: 0x2657fffc  addiu       $s7, $s2, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5718u, 0x4E5720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5720u;
label_4e5720:
    // 0x4e5720: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e5720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5728: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5728u;
    SET_GPR_U32(ctx, 31, 0x4E5730u);
    ctx->pc = 0x4E572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5728u;
    // 0x4e572c: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5728u, 0x4E5730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5730u;
label_4e5730:
    // 0x4e5730: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e5730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e5734: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e5734u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e5738: 0x0  nop
    ctx->pc = 0x4e5738u;
    // NOP
    // 0x4e573c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E573Cu;
    {
        const bool branch_taken_0x4e573c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E573Cu;
        // 0x4e5740: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e573c) {
            ctx->pc = 0x4E5748u;
            goto label_4e5748;
        }
    }
    ctx->pc = 0x4E5744u;
    // 0x4e5744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e5744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5748:
    // 0x4e5748: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4E5748u;
    {
        const bool branch_taken_0x4e5748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5748u;
        // 0x4e574c: 0x8eb0489c  lw          $s0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5748) {
            ctx->pc = 0x4E57E8u;
            goto label_4e57e8;
        }
    }
    ctx->pc = 0x4E5750u;
    // 0x4e5750: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4e5750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5754: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e5754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e5758: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e5758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e575c: 0x8e51fffc  lw          $s1, -0x4($s2)
    ctx->pc = 0x4e575cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x4e5760: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5760u;
    SET_GPR_U32(ctx, 31, 0x4E5768u);
    ctx->pc = 0x4E5764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5760u;
    // 0x4e5764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5760u, 0x4E5768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5768u;
label_4e5768:
    // 0x4e5768: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e5768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e576c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5770: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5770u;
    SET_GPR_U32(ctx, 31, 0x4E5778u);
    ctx->pc = 0x4E5774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5770u;
    // 0x4e5774: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5770u, 0x4E5778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5778u;
label_4e5778:
    // 0x4e5778: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e5778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e577c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e577cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e5780: 0x0  nop
    ctx->pc = 0x4e5780u;
    // NOP
    // 0x4e5784: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E5784u;
    {
        const bool branch_taken_0x4e5784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E5788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5784u;
        // 0x4e5788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5784) {
            ctx->pc = 0x4E5790u;
            goto label_4e5790;
        }
    }
    ctx->pc = 0x4E578Cu;
    // 0x4e578c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e578cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5790:
    // 0x4e5790: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E5790u;
    {
        const bool branch_taken_0x4e5790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5790u;
        // 0x4e5794: 0x8eb0489c  lw          $s0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5790) {
            ctx->pc = 0x4E57A0u;
            goto label_4e57a0;
        }
    }
    ctx->pc = 0x4E5798u;
    // 0x4e5798: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x4E5798u;
    {
        const bool branch_taken_0x4e5798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5798u;
        // 0x4e579c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5798) {
            ctx->pc = 0x4E5880u;
            goto label_4e5880;
        }
    }
    ctx->pc = 0x4E57A0u;
label_4e57a0:
    // 0x4e57a0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e57a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e57a4: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e57a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e57a8: 0x8e51fffc  lw          $s1, -0x4($s2)
    ctx->pc = 0x4e57a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x4e57ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e57acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e57b0: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E57B0u;
    SET_GPR_U32(ctx, 31, 0x4E57B8u);
    ctx->pc = 0x4E57B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E57B0u;
    // 0x4e57b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E57B0u, 0x4E57B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E57B8u;
label_4e57b8:
    // 0x4e57b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e57b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e57bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e57bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e57c0: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E57C0u;
    SET_GPR_U32(ctx, 31, 0x4E57C8u);
    ctx->pc = 0x4E57C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E57C0u;
    // 0x4e57c4: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E57C0u, 0x4E57C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E57C8u;
label_4e57c8:
    // 0x4e57c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e57c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e57cc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e57ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e57d0: 0x0  nop
    ctx->pc = 0x4e57d0u;
    // NOP
    // 0x4e57d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E57D4u;
    {
        const bool branch_taken_0x4e57d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E57D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E57D4u;
        // 0x4e57d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e57d4) {
            ctx->pc = 0x4E57E0u;
            goto label_4e57e0;
        }
    }
    ctx->pc = 0x4E57DCu;
    // 0x4e57dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e57dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e57e0:
    // 0x4e57e0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x4E57E0u;
    {
        const bool branch_taken_0x4e57e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E57E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E57E0u;
        // 0x4e57e4: 0x262b80a  movz        $s7, $s3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e57e0) {
            ctx->pc = 0x4E587Cu;
            goto label_4e587c;
        }
    }
    ctx->pc = 0x4E57E8u;
label_4e57e8:
    // 0x4e57e8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e57ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e57ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e57f0: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e57f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e57f4: 0x8e51fffc  lw          $s1, -0x4($s2)
    ctx->pc = 0x4e57f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x4e57f8: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E57F8u;
    SET_GPR_U32(ctx, 31, 0x4E5800u);
    ctx->pc = 0x4E57FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E57F8u;
    // 0x4e57fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E57F8u, 0x4E5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5800u;
label_4e5800:
    // 0x4e5800: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e5800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5808: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5808u;
    SET_GPR_U32(ctx, 31, 0x4E5810u);
    ctx->pc = 0x4E580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5808u;
    // 0x4e580c: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5808u, 0x4E5810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5810u;
label_4e5810:
    // 0x4e5810: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e5810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e5814: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e5814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e5818: 0x0  nop
    ctx->pc = 0x4e5818u;
    // NOP
    // 0x4e581c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E581Cu;
    {
        const bool branch_taken_0x4e581c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E581Cu;
        // 0x4e5820: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e581c) {
            ctx->pc = 0x4E5828u;
            goto label_4e5828;
        }
    }
    ctx->pc = 0x4E5824u;
    // 0x4e5824: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e5824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5828:
    // 0x4e5828: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4E5828u;
    {
        const bool branch_taken_0x4e5828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5828u;
        // 0x4e582c: 0x8eb0489c  lw          $s0, 0x489C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5828) {
            ctx->pc = 0x4E5838u;
            goto label_4e5838;
        }
    }
    ctx->pc = 0x4E5830u;
    // 0x4e5830: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4E5830u;
    {
        const bool branch_taken_0x4e5830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5830u;
        // 0x4e5834: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5830) {
            ctx->pc = 0x4E5880u;
            goto label_4e5880;
        }
    }
    ctx->pc = 0x4E5838u;
label_4e5838:
    // 0x4e5838: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4e5838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e583c: 0x261014d4  addiu       $s0, $s0, 0x14D4
    ctx->pc = 0x4e583cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5332));
    // 0x4e5840: 0x8e51fffc  lw          $s1, -0x4($s2)
    ctx->pc = 0x4e5840u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x4e5844: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4e5844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e5848: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5848u;
    SET_GPR_U32(ctx, 31, 0x4E5850u);
    ctx->pc = 0x4E584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5848u;
    // 0x4e584c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5848u, 0x4E5850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5850u;
label_4e5850:
    // 0x4e5850: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e5850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e5854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5858: 0xc107d50  jal         func_41F540
    ctx->pc = 0x4E5858u;
    SET_GPR_U32(ctx, 31, 0x4E5860u);
    ctx->pc = 0x4E585Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5858u;
    // 0x4e585c: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F540u, 0x4E5858u, 0x4E5860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5860u;
label_4e5860:
    // 0x4e5860: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x4e5860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4e5864: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4e5864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4e5868: 0x0  nop
    ctx->pc = 0x4e5868u;
    // NOP
    // 0x4e586c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x4E586Cu;
    {
        const bool branch_taken_0x4e586c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E586Cu;
        // 0x4e5870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e586c) {
            ctx->pc = 0x4E5878u;
            goto label_4e5878;
        }
    }
    ctx->pc = 0x4E5874u;
    // 0x4e5874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e5874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5878:
    // 0x4e5878: 0x282b80a  movz        $s7, $s4, $v0
    ctx->pc = 0x4e5878u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 20));
label_4e587c:
    // 0x4e587c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x4e587cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4e5880:
    // 0x4e5880: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4e5880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e5884: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e5884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e5888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e588c: 0xc139552  jal         func_4E5548
    ctx->pc = 0x4E588Cu;
    SET_GPR_U32(ctx, 31, 0x4E5894u);
    ctx->pc = 0x4E5890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E588Cu;
    // 0x4e5890: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E5548u, 0x4E588Cu, 0x4E5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5894u;
label_4e5894:
    // 0x4e5894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e5894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5898: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4e5898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e589c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e589cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e58a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e58a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e58a4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x4e58a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e58a8: 0xc13959c  jal         func_4E5670
    ctx->pc = 0x4E58A8u;
    SET_GPR_U32(ctx, 31, 0x4E58B0u);
    ctx->pc = 0x4E58ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E58A8u;
    // 0x4e58ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E5670u;
    goto label_4e5670;
    ctx->pc = 0x4E58B0u;
label_4e58b0:
    // 0x4e58b0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4e58b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e58b4: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x4e58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x4e58b8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e58b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e58bc: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x4e58bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x4e58c0: 0x1040ff7d  beqz        $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x4E58C0u;
    {
        const bool branch_taken_0x4e58c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e58c0) {
            ctx->pc = 0x4E56B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e56b8;
        }
    }
    ctx->pc = 0x4E58C8u;
label_4e58c8:
    // 0x4e58c8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e58c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e58cc:
    // 0x4e58cc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e58ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4e58d0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e58d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4e58d4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e58d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e58d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e58d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e58dc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e58dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e58e0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e58e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e58e4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e58e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e58e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e58e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e58ec: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x4e58ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4e58f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E58F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E58F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E58F0u;
        // 0x4e58f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E58F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E58F8u;
}
