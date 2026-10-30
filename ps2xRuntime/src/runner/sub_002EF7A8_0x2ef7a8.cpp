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

// Function: sub_002EF7A8
// Address: 0x2ef7a8 - 0x2ef8c0
void sub_002EF7A8_0x2ef7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF7A8_0x2ef7a8");
#endif

    switch (ctx->pc) {
        case 0x2ef838u: goto label_2ef838;
        case 0x2ef85cu: goto label_2ef85c;
        case 0x2ef890u: goto label_2ef890;
        default: break;
    }

    ctx->pc = 0x2ef7a8u;

    // 0x2ef7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ef7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ef7ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2ef7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2ef7b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef7b4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2ef7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2ef7b8: 0x8fac0030  lw          $t4, 0x30($sp)
    ctx->pc = 0x2ef7b8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ef7bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ef7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef7c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ef7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ef7c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ef7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ef7c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ef7cc: 0x24422760  addiu       $v0, $v0, 0x2760
    ctx->pc = 0x2ef7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10080));
    // 0x2ef7d0: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2ef7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2ef7d4: 0xe62c0024  swc1        $f12, 0x24($s1)
    ctx->pc = 0x2ef7d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2ef7d8: 0xe62d0028  swc1        $f13, 0x28($s1)
    ctx->pc = 0x2ef7d8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2ef7dc: 0xe62e002c  swc1        $f14, 0x2C($s1)
    ctx->pc = 0x2ef7dcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2ef7e0: 0xae2c003c  sw          $t4, 0x3C($s1)
    ctx->pc = 0x2ef7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 12));
    // 0x2ef7e4: 0xa6270044  sh          $a3, 0x44($s1)
    ctx->pc = 0x2ef7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 68), (uint16_t)GPR_U32(ctx, 7));
    // 0x2ef7e8: 0xa6280046  sh          $t0, 0x46($s1)
    ctx->pc = 0x2ef7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 8));
    // 0x2ef7ec: 0xa226004d  sb          $a2, 0x4D($s1)
    ctx->pc = 0x2ef7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 77), (uint8_t)GPR_U32(ctx, 6));
    // 0x2ef7f0: 0xa229004f  sb          $t1, 0x4F($s1)
    ctx->pc = 0x2ef7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 79), (uint8_t)GPR_U32(ctx, 9));
    // 0x2ef7f4: 0xa22a0050  sb          $t2, 0x50($s1)
    ctx->pc = 0x2ef7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 10));
    // 0x2ef7f8: 0xa22b0051  sb          $t3, 0x51($s1)
    ctx->pc = 0x2ef7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 11));
    // 0x2ef7fc: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x2ef7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x2ef800: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2ef800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2ef804: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2ef804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x2ef808: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2ef808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2ef80c: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2ef80cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef810: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2ef810u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef814: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2ef814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2ef818: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2ef818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x2ef81c: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2ef81cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x2ef820: 0xa220004e  sb          $zero, 0x4E($s1)
    ctx->pc = 0x2ef820u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef824: 0xa2200052  sb          $zero, 0x52($s1)
    ctx->pc = 0x2ef824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef828: 0xa2200053  sb          $zero, 0x53($s1)
    ctx->pc = 0x2ef828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ef82c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x2ef82cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ef830: 0xc087420  jal         func_21D080
    ctx->pc = 0x2EF830u;
    SET_GPR_U32(ctx, 31, 0x2EF838u);
    ctx->pc = 0x2EF834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF830u;
    // 0x2ef834: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2EF830u, 0x2EF838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF838u;
label_2ef838:
    // 0x2ef838: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2ef838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ef83c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2ef83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2ef840: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x2ef840u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x2ef844: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2ef844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2ef848: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2ef848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2ef84c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2ef84cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2ef850: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ef850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ef854: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2EF854u;
    SET_GPR_U32(ctx, 31, 0x2EF85Cu);
    ctx->pc = 0x2EF858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF854u;
    // 0x2ef858: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2EF854u, 0x2EF85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF85Cu;
label_2ef85c:
    // 0x2ef85c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x2ef85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ef860: 0x26250048  addiu       $a1, $s1, 0x48
    ctx->pc = 0x2ef860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x2ef864: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x2ef864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x2ef868: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2ef868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2ef86c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ef86cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ef870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ef870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef874: 0xc621002c  lwc1        $f1, 0x2C($s1)
    ctx->pc = 0x2ef874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ef878: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2ef878u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ef87c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2ef87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2ef880: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2ef880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2ef884: 0xe6220028  swc1        $f2, 0x28($s1)
    ctx->pc = 0x2ef884u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2ef888: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x2ef888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x2ef88c: 0x0  nop
    ctx->pc = 0x2ef88cu;
    // NOP
label_2ef890:
    // 0x2ef890: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2ef890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2ef894: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ef894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ef898: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2ef898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ef89c: 0x0  nop
    ctx->pc = 0x2ef89cu;
    // NOP
    // 0x2ef8a0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2EF8A0u;
    {
        const bool branch_taken_0x2ef8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8A0u;
        // 0x2ef8a4: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef8a0) {
            ctx->pc = 0x2EF890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ef890;
        }
    }
    ctx->pc = 0x2EF8A8u;
    // 0x2ef8a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ef8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef8ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ef8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef8b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef8b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef8b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8B8u;
        // 0x2ef8bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF8C0u;
}
