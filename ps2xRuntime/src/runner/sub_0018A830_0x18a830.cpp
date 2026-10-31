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

// Function: sub_0018A830
// Address: 0x18a830 - 0x18a900
void sub_0018A830_0x18a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A830_0x18a830");
#endif

    switch (ctx->pc) {
        case 0x18a8b0u: goto label_18a8b0;
        default: break;
    }

    ctx->pc = 0x18a830u;

    // 0x18a830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18a834: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18a834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18a838: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18a838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18a83c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18a83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a840: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18a840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18a844: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18a844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a848: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x18a848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18a84c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18a84cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a854: 0x1240001c  beqz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x18A854u;
    {
        const bool branch_taken_0x18a854 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A854u;
        // 0x18a858: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a854) {
            ctx->pc = 0x18A8C8u;
            goto label_18a8c8;
        }
    }
    ctx->pc = 0x18A85Cu;
    // 0x18a85c: 0x92020041  lbu         $v0, 0x41($s0)
    ctx->pc = 0x18a85cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 65)));
    // 0x18a860: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x18A860u;
    {
        const bool branch_taken_0x18a860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a860) {
            ctx->pc = 0x18A88Cu;
            goto label_18a88c;
        }
    }
    ctx->pc = 0x18A868u;
    // 0x18a868: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x18a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x18a86c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18A86Cu;
    {
        const bool branch_taken_0x18a86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a86c) {
            ctx->pc = 0x18A88Cu;
            goto label_18a88c;
        }
    }
    ctx->pc = 0x18A874u;
    // 0x18a874: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x18a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x18a878: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A878u;
    {
        const bool branch_taken_0x18a878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a878) {
            ctx->pc = 0x18A88Cu;
            goto label_18a88c;
        }
    }
    ctx->pc = 0x18A880u;
    // 0x18a880: 0x3c015015  lui         $at, 0x5015
    ctx->pc = 0x18a880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20501 << 16));
    // 0x18a884: 0x342102f9  ori         $at, $at, 0x2F9
    ctx->pc = 0x18a884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)761);
    // 0x18a888: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18a888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18a88c:
    // 0x18a88c: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x18A88Cu;
    {
        const bool branch_taken_0x18a88c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a88c) {
            ctx->pc = 0x18A890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A88Cu;
            // 0x18a890: 0xc6200bec  lwc1        $f0, 0xBEC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A8CCu;
            goto label_18a8cc;
        }
    }
    ctx->pc = 0x18A894u;
    // 0x18a894: 0xc6200be8  lwc1        $f0, 0xBE8($s1)
    ctx->pc = 0x18a894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a898: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18a898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a89c: 0x0  nop
    ctx->pc = 0x18a89cu;
    // NOP
    // 0x18a8a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x18A8A0u;
    {
        const bool branch_taken_0x18a8a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a8a0) {
            ctx->pc = 0x18A8C0u;
            goto label_18a8c0;
        }
    }
    ctx->pc = 0x18A8A8u;
    // 0x18a8a8: 0xc065b58  jal         func_196D60
    ctx->pc = 0x18A8A8u;
    SET_GPR_U32(ctx, 31, 0x18A8B0u);
    ctx->pc = 0x18A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A8A8u;
    // 0x18a8ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196D60u, 0x18A8A8u, 0x18A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A8B0u;
label_18a8b0:
    // 0x18a8b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A8B0u;
    {
        const bool branch_taken_0x18a8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a8b0) {
            ctx->pc = 0x18A8C0u;
            goto label_18a8c0;
        }
    }
    ctx->pc = 0x18A8B8u;
    // 0x18a8b8: 0xe6340be8  swc1        $f20, 0xBE8($s1)
    ctx->pc = 0x18a8b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3048), bits); }
    // 0x18a8bc: 0xae300be0  sw          $s0, 0xBE0($s1)
    ctx->pc = 0x18a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3040), GPR_U32(ctx, 16));
label_18a8c0:
    // 0x18a8c0: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x18A8C0u;
    {
        const bool branch_taken_0x18a8c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a8c0) {
            ctx->pc = 0x18A8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A8C0u;
            // 0x18a8c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A8E8u;
            goto label_18a8e8;
        }
    }
    ctx->pc = 0x18A8C8u;
label_18a8c8:
    // 0x18a8c8: 0xc6200bec  lwc1        $f0, 0xBEC($s1)
    ctx->pc = 0x18a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a8cc:
    // 0x18a8cc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18a8ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18a8d0: 0x0  nop
    ctx->pc = 0x18a8d0u;
    // NOP
    // 0x18a8d4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x18A8D4u;
    {
        const bool branch_taken_0x18a8d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a8d4) {
            ctx->pc = 0x18A8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18A8D4u;
            // 0x18a8d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18A8E8u;
            goto label_18a8e8;
        }
    }
    ctx->pc = 0x18A8DCu;
    // 0x18a8dc: 0xae300be4  sw          $s0, 0xBE4($s1)
    ctx->pc = 0x18a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3044), GPR_U32(ctx, 16));
    // 0x18a8e0: 0xe6340bec  swc1        $f20, 0xBEC($s1)
    ctx->pc = 0x18a8e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3052), bits); }
    // 0x18a8e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18a8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18a8e8:
    // 0x18a8e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18a8e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a8ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18a8ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a8f4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x18a8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18a8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x18A8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8F8u;
        // 0x18a8fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A900u;
}
