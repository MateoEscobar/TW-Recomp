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

// Function: sub_003E1430
// Address: 0x3e1430 - 0x3e14f0
void sub_003E1430_0x3e1430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1430_0x3e1430");
#endif

    switch (ctx->pc) {
        case 0x3e1430u: goto label_3e1430;
        case 0x3e1434u: goto label_3e1434;
        case 0x3e1438u: goto label_3e1438;
        case 0x3e143cu: goto label_3e143c;
        case 0x3e1440u: goto label_3e1440;
        case 0x3e1444u: goto label_3e1444;
        case 0x3e1448u: goto label_3e1448;
        case 0x3e144cu: goto label_3e144c;
        case 0x3e1450u: goto label_3e1450;
        case 0x3e1454u: goto label_3e1454;
        case 0x3e1458u: goto label_3e1458;
        case 0x3e145cu: goto label_3e145c;
        case 0x3e1460u: goto label_3e1460;
        case 0x3e1464u: goto label_3e1464;
        case 0x3e1468u: goto label_3e1468;
        case 0x3e146cu: goto label_3e146c;
        case 0x3e1470u: goto label_3e1470;
        case 0x3e1474u: goto label_3e1474;
        case 0x3e1478u: goto label_3e1478;
        case 0x3e147cu: goto label_3e147c;
        case 0x3e1480u: goto label_3e1480;
        case 0x3e1484u: goto label_3e1484;
        case 0x3e1488u: goto label_3e1488;
        case 0x3e148cu: goto label_3e148c;
        case 0x3e1490u: goto label_3e1490;
        case 0x3e1494u: goto label_3e1494;
        case 0x3e1498u: goto label_3e1498;
        case 0x3e149cu: goto label_3e149c;
        case 0x3e14a0u: goto label_3e14a0;
        case 0x3e14a4u: goto label_3e14a4;
        case 0x3e14a8u: goto label_3e14a8;
        case 0x3e14acu: goto label_3e14ac;
        case 0x3e14b0u: goto label_3e14b0;
        case 0x3e14b4u: goto label_3e14b4;
        case 0x3e14b8u: goto label_3e14b8;
        case 0x3e14bcu: goto label_3e14bc;
        case 0x3e14c0u: goto label_3e14c0;
        case 0x3e14c4u: goto label_3e14c4;
        case 0x3e14c8u: goto label_3e14c8;
        case 0x3e14ccu: goto label_3e14cc;
        case 0x3e14d0u: goto label_3e14d0;
        case 0x3e14d4u: goto label_3e14d4;
        case 0x3e14d8u: goto label_3e14d8;
        case 0x3e14dcu: goto label_3e14dc;
        case 0x3e14e0u: goto label_3e14e0;
        case 0x3e14e4u: goto label_3e14e4;
        case 0x3e14e8u: goto label_3e14e8;
        case 0x3e14ecu: goto label_3e14ec;
        default: break;
    }

    ctx->pc = 0x3e1430u;

label_3e1430:
    // 0x3e1430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e1430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3e1434:
    // 0x3e1434: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3e1434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3e1438:
    // 0x3e1438: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3e1438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3e143c:
    // 0x3e143c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e143cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e1440:
    // 0x3e1440: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e1440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3e1444:
    // 0x3e1444: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e1444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e1448:
    // 0x3e1448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e1448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3e144c:
    // 0x3e144c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e144cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e1450:
    // 0x3e1450: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e1450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e1454:
    // 0x3e1454: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e1454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e1458:
    // 0x3e1458: 0x40f809  jalr        $v0
label_3e145c:
    if (ctx->pc == 0x3E145Cu) {
        ctx->pc = 0x3E145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1458u;
        // 0x3e145c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1460u;
        goto label_3e1460;
    }
    ctx->pc = 0x3E1458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E1460u);
        ctx->pc = 0x3E145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1458u;
        // 0x3e145c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1458u, 0x3E1460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E1460u;
label_3e1460:
    // 0x3e1460: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3e1460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3e1464:
    // 0x3e1464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e1464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e1468:
    // 0x3e1468: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e1468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e146c:
    // 0x3e146c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3e146cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3e1470:
    // 0x3e1470: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e1470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e1474:
    // 0x3e1474: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3e1474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3e1478:
    // 0x3e1478: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3e1478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e147c:
    // 0x3e147c: 0xc0e858c  jal         func_3A1630
label_3e1480:
    if (ctx->pc == 0x3E1480u) {
        ctx->pc = 0x3E1480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E147Cu;
        // 0x3e1480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1484u;
        goto label_3e1484;
    }
    ctx->pc = 0x3E147Cu;
    SET_GPR_U32(ctx, 31, 0x3E1484u);
    ctx->pc = 0x3E1480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E147Cu;
    // 0x3e1480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E147Cu, 0x3E1484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1484u;
label_3e1484:
    // 0x3e1484: 0xc0ea14c  jal         func_3A8530
label_3e1488:
    if (ctx->pc == 0x3E1488u) {
        ctx->pc = 0x3E1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1484u;
        // 0x3e1488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E148Cu;
        goto label_3e148c;
    }
    ctx->pc = 0x3E1484u;
    SET_GPR_U32(ctx, 31, 0x3E148Cu);
    ctx->pc = 0x3E1488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1484u;
    // 0x3e1488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E1484u, 0x3E148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E148Cu;
label_3e148c:
    // 0x3e148c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e148cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e1490:
    // 0x3e1490: 0xc0ea12a  jal         func_3A84A8
label_3e1494:
    if (ctx->pc == 0x3E1494u) {
        ctx->pc = 0x3E1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1490u;
        // 0x3e1494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E1498u;
        goto label_3e1498;
    }
    ctx->pc = 0x3E1490u;
    SET_GPR_U32(ctx, 31, 0x3E1498u);
    ctx->pc = 0x3E1494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1490u;
    // 0x3e1494: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E1490u, 0x3E1498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1498u;
label_3e1498:
    // 0x3e1498: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3e1498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e149c:
    // 0x3e149c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e149cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e14a0:
    // 0x3e14a0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3e14a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e14a4:
    // 0x3e14a4: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3e14a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3e14a8:
    // 0x3e14a8: 0xc0e858c  jal         func_3A1630
label_3e14ac:
    if (ctx->pc == 0x3E14ACu) {
        ctx->pc = 0x3E14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E14A8u;
        // 0x3e14ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E14B0u;
        goto label_3e14b0;
    }
    ctx->pc = 0x3E14A8u;
    SET_GPR_U32(ctx, 31, 0x3E14B0u);
    ctx->pc = 0x3E14ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E14A8u;
    // 0x3e14ac: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E14A8u, 0x3E14B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E14B0u;
label_3e14b0:
    // 0x3e14b0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e14b4:
    // 0x3e14b4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3e14b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3e14b8:
    // 0x3e14b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3e14b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3e14bc:
    // 0x3e14bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e14bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e14c0:
    // 0x3e14c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3e14c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e14c4:
    // 0x3e14c4: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3e14c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3e14c8:
    // 0x3e14c8: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3e14c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3e14cc:
    // 0x3e14cc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3e14ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3e14d0:
    // 0x3e14d0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x3e14d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
label_3e14d4:
    // 0x3e14d4: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3e14d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3e14d8:
    // 0x3e14d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3e14d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e14dc:
    // 0x3e14dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e14dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e14e0:
    // 0x3e14e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e14e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3e14e4:
    // 0x3e14e4: 0x3e00008  jr          $ra
label_3e14e8:
    if (ctx->pc == 0x3E14E8u) {
        ctx->pc = 0x3E14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E14E4u;
        // 0x3e14e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E14ECu;
        goto label_3e14ec;
    }
    ctx->pc = 0x3E14E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E14E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E14E4u;
        // 0x3e14e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E14E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E14ECu;
label_3e14ec:
    // 0x3e14ec: 0x0  nop
    ctx->pc = 0x3e14ecu;
    // NOP
    ctx->pc = 0x3e14f0u;
}
