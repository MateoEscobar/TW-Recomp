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

// Function: sub_0012D7A8
// Address: 0x12d7a8 - 0x12d908
void sub_0012D7A8_0x12d7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D7A8_0x12d7a8");
#endif

    switch (ctx->pc) {
        case 0x12d8b4u: goto label_12d8b4;
        default: break;
    }

    ctx->pc = 0x12d7a8u;

    // 0x12d7a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12d7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12d7ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12d7b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12d7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12d7b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d7b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7b8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x12d7b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x12d7bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12d7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7c0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x12d7c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x12d7c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d7c8: 0xc603032c  lwc1        $f3, 0x32C($s0)
    ctx->pc = 0x12d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12d7cc: 0xc6040330  lwc1        $f4, 0x330($s0)
    ctx->pc = 0x12d7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12d7d0: 0xc6000304  lwc1        $f0, 0x304($s0)
    ctx->pc = 0x12d7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d7d4: 0x460c1d00  add.s       $f20, $f3, $f12
    ctx->pc = 0x12d7d4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x12d7d8: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x12d7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d7dc: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x12d7dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x12d7e0: 0x460c2540  add.s       $f21, $f4, $f12
    ctx->pc = 0x12d7e0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x12d7e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x12d7e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12d7e8: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x12d7e8u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
    // 0x12d7ec: 0x56200014  bnel        $s1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x12D7ECu;
    {
        const bool branch_taken_0x12d7ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d7ec) {
            ctx->pc = 0x12D7F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D7ECu;
            // 0x12d7f0: 0xc6000300  lwc1        $f0, 0x300($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D840u;
            goto label_12d840;
        }
    }
    ctx->pc = 0x12D7F4u;
    // 0x12d7f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12d7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d7f8: 0x0  nop
    ctx->pc = 0x12d7f8u;
    // NOP
    // 0x12d7fc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x12d7fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d800: 0x0  nop
    ctx->pc = 0x12d800u;
    // NOP
    // 0x12d804: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x12D804u;
    {
        const bool branch_taken_0x12d804 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D804u;
        // 0x12d808: 0xc6010344  lwc1        $f1, 0x344($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d804) {
            ctx->pc = 0x12D81Cu;
            goto label_12d81c;
        }
    }
    ctx->pc = 0x12D80Cu;
    // 0x12d80c: 0x46011832  c.eq.s      $f3, $f1
    ctx->pc = 0x12d80cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d810: 0x0  nop
    ctx->pc = 0x12d810u;
    // NOP
    // 0x12d814: 0x45030035  bc1tl       . + 4 + (0x35 << 2)
    ctx->pc = 0x12D814u;
    {
        const bool branch_taken_0x12d814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d814) {
            ctx->pc = 0x12D818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D814u;
            // 0x12d818: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D8ECu;
            goto label_12d8ec;
        }
    }
    ctx->pc = 0x12D81Cu;
label_12d81c:
    // 0x12d81c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x12d81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d820: 0x0  nop
    ctx->pc = 0x12d820u;
    // NOP
    // 0x12d824: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x12D824u;
    {
        const bool branch_taken_0x12d824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d824) {
            ctx->pc = 0x12D828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D824u;
            // 0x12d828: 0xc6000300  lwc1        $f0, 0x300($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D840u;
            goto label_12d840;
        }
    }
    ctx->pc = 0x12D82Cu;
    // 0x12d82c: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x12d82cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x12d830: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x12d830u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x12d834: 0x460c2540  add.s       $f21, $f4, $f12
    ctx->pc = 0x12d834u;
    ctx->f[21] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x12d838: 0x460c1d00  add.s       $f20, $f3, $f12
    ctx->pc = 0x12d838u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x12d83c: 0xc6000300  lwc1        $f0, 0x300($s0)
    ctx->pc = 0x12d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12d840:
    // 0x12d840: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12d840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d844: 0x0  nop
    ctx->pc = 0x12d844u;
    // NOP
    // 0x12d848: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x12D848u;
    {
        const bool branch_taken_0x12d848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d848) {
            ctx->pc = 0x12D84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D848u;
            // 0x12d84c: 0xc6000304  lwc1        $f0, 0x304($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D85Cu;
            goto label_12d85c;
        }
    }
    ctx->pc = 0x12D850u;
    // 0x12d850: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12d850u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x12d854: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12D854u;
    {
        const bool branch_taken_0x12d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D854u;
        // 0x12d858: 0x4602a540  add.s       $f21, $f20, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d854) {
            ctx->pc = 0x12D874u;
            goto label_12d874;
        }
    }
    ctx->pc = 0x12D85Cu;
label_12d85c:
    // 0x12d85c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x12d85cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d860: 0x0  nop
    ctx->pc = 0x12d860u;
    // NOP
    // 0x12d864: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x12D864u;
    {
        const bool branch_taken_0x12d864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D864u;
        // 0x12d868: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d864) {
            ctx->pc = 0x12D878u;
            goto label_12d878;
        }
    }
    ctx->pc = 0x12D86Cu;
    // 0x12d86c: 0x46020501  sub.s       $f20, $f0, $f2
    ctx->pc = 0x12d86cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x12d870: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x12d870u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_12d874:
    // 0x12d874: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12d874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_12d878:
    // 0x12d878: 0xe614032c  swc1        $f20, 0x32C($s0)
    ctx->pc = 0x12d878u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 812), bits); }
    // 0x12d87c: 0x8c62b194  lw          $v0, -0x4E6C($v1)
    ctx->pc = 0x12d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947220)));
    // 0x12d880: 0xe6150330  swc1        $f21, 0x330($s0)
    ctx->pc = 0x12d880u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x12d884: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x12d884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12d888: 0xe6140334  swc1        $f20, 0x334($s0)
    ctx->pc = 0x12d888u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 820), bits); }
    // 0x12d88c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x12D88Cu;
    {
        const bool branch_taken_0x12d88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D88Cu;
        // 0x12d890: 0xe6150338  swc1        $f21, 0x338($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d88c) {
            ctx->pc = 0x12D8CCu;
            goto label_12d8cc;
        }
    }
    ctx->pc = 0x12D894u;
    // 0x12d894: 0xc6000208  lwc1        $f0, 0x208($s0)
    ctx->pc = 0x12d894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d898: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12d898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12d89c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12d89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12d8a0: 0x0  nop
    ctx->pc = 0x12d8a0u;
    // NOP
    // 0x12d8a4: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x12d8a4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x12d8a8: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x12d8a8u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[21]); }
    // 0x12d8ac: 0xc12e34c  jal         func_4B8D30
    ctx->pc = 0x12D8ACu;
    SET_GPR_U32(ctx, 31, 0x12D8B4u);
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x12D8ACu, 0x12D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D8B4u;
label_12d8b4:
    // 0x12d8b4: 0x3c01beb2  lui         $at, 0xBEB2
    ctx->pc = 0x12d8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48818 << 16));
    // 0x12d8b8: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x12d8b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
    // 0x12d8bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12d8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12d8c0: 0x0  nop
    ctx->pc = 0x12d8c0u;
    // NOP
    // 0x12d8c4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x12d8c4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x12d8c8: 0xe60003b0  swc1        $f0, 0x3B0($s0)
    ctx->pc = 0x12d8c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 944), bits); }
label_12d8cc:
    // 0x12d8cc: 0xc60003b4  lwc1        $f0, 0x3B4($s0)
    ctx->pc = 0x12d8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d8d0: 0xc60103b0  lwc1        $f1, 0x3B0($s0)
    ctx->pc = 0x12d8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d8d4: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x12d8d4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x12d8d8: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D8D8u;
    {
        const bool branch_taken_0x12d8d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8D8u;
        // 0x12d8dc: 0xe60003b4  swc1        $f0, 0x3B4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8d8) {
            ctx->pc = 0x12D8E8u;
            goto label_12d8e8;
        }
    }
    ctx->pc = 0x12D8E0u;
    // 0x12d8e0: 0xe6150348  swc1        $f21, 0x348($s0)
    ctx->pc = 0x12d8e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 840), bits); }
    // 0x12d8e4: 0xe6140344  swc1        $f20, 0x344($s0)
    ctx->pc = 0x12d8e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 836), bits); }
label_12d8e8:
    // 0x12d8e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12d8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12d8ec:
    // 0x12d8ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12d8ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d8f4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x12d8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12d8f8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x12d8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12d8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x12D8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D8FCu;
        // 0x12d900: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D904u;
    // 0x12d904: 0x0  nop
    ctx->pc = 0x12d904u;
    // NOP
    ctx->pc = 0x12d908u;
}
