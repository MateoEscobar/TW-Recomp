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

// Function: sub_003560A8
// Address: 0x3560a8 - 0x356188
void sub_003560A8_0x3560a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003560A8_0x3560a8");
#endif

    switch (ctx->pc) {
        case 0x3560f8u: goto label_3560f8;
        case 0x356110u: goto label_356110;
        case 0x356130u: goto label_356130;
        default: break;
    }

    ctx->pc = 0x3560a8u;

    // 0x3560a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3560a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3560ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3560acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3560b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3560b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3560b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3560b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3560b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3560b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3560bc: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x3560bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3560c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3560c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3560c4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x3560c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3560c8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x3560c8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x3560cc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3560ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3560d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3560d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3560d4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3560d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x3560d8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3560d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3560dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3560dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3560e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3560e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3560e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3560e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3560e8: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x3560e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3560ec: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x3560ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x3560f0: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x3560F0u;
    SET_GPR_U32(ctx, 31, 0x3560F8u);
    ctx->pc = 0x3560F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3560F0u;
    // 0x3560f4: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3560F0u, 0x3560F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3560F8u;
label_3560f8:
    // 0x3560f8: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x3560f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3560fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3560fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356100: 0x46166300  add.s       $f12, $f12, $f22
    ctx->pc = 0x356100u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[22]);
    // 0x356104: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x356104u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x356108: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x356108u;
    SET_GPR_U32(ctx, 31, 0x356110u);
    ctx->pc = 0x35610Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356108u;
    // 0x35610c: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x356108u, 0x356110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356110u;
label_356110:
    // 0x356110: 0x50802b  sltu        $s0, $v0, $s0
    ctx->pc = 0x356110u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x356114: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x356114u;
    {
        const bool branch_taken_0x356114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x356118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356114u;
        // 0x356118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356114) {
            ctx->pc = 0x35613Cu;
            goto label_35613c;
        }
    }
    ctx->pc = 0x35611Cu;
    // 0x35611c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x35611cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x356120: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x356120u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x356124: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x356124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356128: 0xc0d56ae  jal         func_355AB8
    ctx->pc = 0x356128u;
    SET_GPR_U32(ctx, 31, 0x356130u);
    ctx->pc = 0x35612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356128u;
    // 0x35612c: 0x452823  subu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x355AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355AB8u, 0x356128u, 0x356130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356130u;
label_356130:
    // 0x356130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x356130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x356134: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x356134u;
    {
        const bool branch_taken_0x356134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356134u;
        // 0x356138: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356134) {
            ctx->pc = 0x356164u;
            goto label_356164;
        }
    }
    ctx->pc = 0x35613Cu;
label_35613c:
    // 0x35613c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x35613cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x356140: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x356140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356144: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x356144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356148: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x356148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x35614c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x35614cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x356150: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x356150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x356154: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x356154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x356158: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x356158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x35615c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x35615cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x356160: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x356160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_356164:
    // 0x356164: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x356164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356168: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x356168u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35616c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35616cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356170: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x356170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x356174: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x356174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x356178: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x356178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35617c: 0x3e00008  jr          $ra
    ctx->pc = 0x35617Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35617Cu;
        // 0x356180: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35617Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356184u;
    // 0x356184: 0x0  nop
    ctx->pc = 0x356184u;
    // NOP
    ctx->pc = 0x356188u;
}
