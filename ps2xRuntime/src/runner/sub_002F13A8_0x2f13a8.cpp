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

// Function: sub_002F13A8
// Address: 0x2f13a8 - 0x2f14b0
void sub_002F13A8_0x2f13a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F13A8_0x2f13a8");
#endif

    switch (ctx->pc) {
        case 0x2f1428u: goto label_2f1428;
        case 0x2f144cu: goto label_2f144c;
        case 0x2f1480u: goto label_2f1480;
        default: break;
    }

    ctx->pc = 0x2f13a8u;

    // 0x2f13a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f13a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f13ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2f13acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2f13b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f13b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f13b4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2f13b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2f13b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f13b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f13bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f13bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f13c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f13c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f13c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f13c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2f13c8: 0x244226e8  addiu       $v0, $v0, 0x26E8
    ctx->pc = 0x2f13c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9960));
    // 0x2f13cc: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2f13ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2f13d0: 0xe62c0024  swc1        $f12, 0x24($s1)
    ctx->pc = 0x2f13d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2f13d4: 0xe62d0028  swc1        $f13, 0x28($s1)
    ctx->pc = 0x2f13d4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2f13d8: 0xa627003c  sh          $a3, 0x3C($s1)
    ctx->pc = 0x2f13d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 7));
    // 0x2f13dc: 0xa628003e  sh          $t0, 0x3E($s1)
    ctx->pc = 0x2f13dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 8));
    // 0x2f13e0: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x2f13e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x2f13e4: 0xa2260047  sb          $a2, 0x47($s1)
    ctx->pc = 0x2f13e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 71), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f13e8: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2f13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2f13ec: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x2f13ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x2f13f0: 0xa2260046  sb          $a2, 0x46($s1)
    ctx->pc = 0x2f13f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f13f4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2f13f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2f13f8: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2f13f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f13fc: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2f13fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1400: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2f1400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2f1404: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2f1404u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x2f1408: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x2f1408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x2f140c: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x2f140cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1410: 0xa2200049  sb          $zero, 0x49($s1)
    ctx->pc = 0x2f1410u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1414: 0xa220004a  sb          $zero, 0x4A($s1)
    ctx->pc = 0x2f1414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1418: 0xa220004b  sb          $zero, 0x4B($s1)
    ctx->pc = 0x2f1418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f141c: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x2f141cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f1420: 0xc087420  jal         func_21D080
    ctx->pc = 0x2F1420u;
    SET_GPR_U32(ctx, 31, 0x2F1428u);
    ctx->pc = 0x2F1424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1420u;
    // 0x2f1424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2F1420u, 0x2F1428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1428u;
label_2f1428:
    // 0x2f1428: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f1428u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f142c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2f142cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2f1430: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x2f1430u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x2f1434: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2f1434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2f1438: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2f1438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2f143c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2f143cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2f1440: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2f1440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f1444: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2F1444u;
    SET_GPR_U32(ctx, 31, 0x2F144Cu);
    ctx->pc = 0x2F1448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1444u;
    // 0x2f1448: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2F1444u, 0x2F144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F144Cu;
label_2f144c:
    // 0x2f144c: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x2f144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f1450: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x2f1450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2f1454: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x2f1454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
    // 0x2f1458: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2f1458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2f145c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f145cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f1460: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f1460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1464: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2f1464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f1468: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2f1468u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2f146c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2f146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2f1470: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2f1470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2f1474: 0xe6220024  swc1        $f2, 0x24($s1)
    ctx->pc = 0x2f1474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2f1478: 0xe6210028  swc1        $f1, 0x28($s1)
    ctx->pc = 0x2f1478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x2f147c: 0x0  nop
    ctx->pc = 0x2f147cu;
    // NOP
label_2f1480:
    // 0x2f1480: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2f1480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2f1484: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f1484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f1488: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x2f1488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2f148c: 0x0  nop
    ctx->pc = 0x2f148cu;
    // NOP
    // 0x2f1490: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2F1490u;
    {
        const bool branch_taken_0x2f1490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1490u;
        // 0x2f1494: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1490) {
            ctx->pc = 0x2F1480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1480;
        }
    }
    ctx->pc = 0x2F1498u;
    // 0x2f1498: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f1498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f149c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f149cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f14a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f14a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f14a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f14a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f14a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F14A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F14A8u;
        // 0x2f14ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F14A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F14B0u;
}
