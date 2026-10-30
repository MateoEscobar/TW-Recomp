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

// Function: sub_002D1498
// Address: 0x2d1498 - 0x2d15d0
void sub_002D1498_0x2d1498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1498_0x2d1498");
#endif

    switch (ctx->pc) {
        case 0x2d14fcu: goto label_2d14fc;
        case 0x2d1550u: goto label_2d1550;
        case 0x2d1584u: goto label_2d1584;
        default: break;
    }

    ctx->pc = 0x2d1498u;

    // 0x2d1498: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d1498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d149c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2d149cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x2d14a0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2d14a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2d14a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d14a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d14a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d14a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d14ac: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x2d14acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x2d14b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d14b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d14b4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d14b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2d14b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d14b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d14bc: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2d14bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2d14c0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d14c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2d14c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2d14c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14c8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d14c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d14cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d14ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d14d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d14d4: 0x8cc4489c  lw          $a0, 0x489C($a2)
    ctx->pc = 0x2d14d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2d14d8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2d14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2d14dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d14dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d14e0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d14e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d14e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d14e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d14e8: 0x24b10090  addiu       $s1, $a1, 0x90
    ctx->pc = 0x2d14e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x2d14ec: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x2d14ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d14f0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d14f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d14f4: 0xc1067b8  jal         func_419EE0
    ctx->pc = 0x2D14F4u;
    SET_GPR_U32(ctx, 31, 0x2D14FCu);
    ctx->pc = 0x2D14F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D14F4u;
    // 0x2d14f8: 0xb22821  addu        $a1, $a1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2D14F4u, 0x2D14FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D14FCu;
label_2d14fc:
    // 0x2d14fc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D14FCu;
    {
        const bool branch_taken_0x2d14fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D14FCu;
        // 0x2d1500: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d14fc) {
            ctx->pc = 0x2D15A8u;
            goto label_2d15a8;
        }
    }
    ctx->pc = 0x2D1504u;
    // 0x2d1504: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2d1504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x2d1508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d1508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d150c: 0x0  nop
    ctx->pc = 0x2d150cu;
    // NOP
    // 0x2d1510: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d1510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d1514: 0x0  nop
    ctx->pc = 0x2d1514u;
    // NOP
    // 0x2d1518: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
    ctx->pc = 0x2D1518u;
    {
        const bool branch_taken_0x2d1518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d1518) {
            ctx->pc = 0x2D151Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1518u;
            // 0x2d151c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D15ACu;
            goto label_2d15ac;
        }
    }
    ctx->pc = 0x2D1520u;
    // 0x2d1520: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x2d1520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2d1524: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d1524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1528: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2d1528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2d152c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d152cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1530: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1534: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d1534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d1538: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2d1538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2d153c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2d153cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2d1540: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2d1540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2d1544: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2d1544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2d1548: 0xc0a7cf2  jal         func_29F3C8
    ctx->pc = 0x2D1548u;
    SET_GPR_U32(ctx, 31, 0x2D1550u);
    ctx->pc = 0x2D154Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1548u;
    // 0x2d154c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2D1548u, 0x2D1550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1550u;
label_2d1550:
    // 0x2d1550: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1558: 0x16020014  bne         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D1558u;
    {
        const bool branch_taken_0x2d1558 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1558u;
        // 0x2d155c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1558) {
            ctx->pc = 0x2D15ACu;
            goto label_2d15ac;
        }
    }
    ctx->pc = 0x2D1560u;
    // 0x2d1560: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x2d1560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d1564: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d1564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d156c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d156cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1570: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d1570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d1574: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d1574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1578: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2d1578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2d157c: 0xc09381e  jal         func_24E078
    ctx->pc = 0x2D157Cu;
    SET_GPR_U32(ctx, 31, 0x2D1584u);
    ctx->pc = 0x2D1580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D157Cu;
    // 0x2d1580: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2D157Cu, 0x2D1584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1584u;
label_2d1584:
    // 0x2d1584: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1584u;
    {
        const bool branch_taken_0x2d1584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D1588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1584u;
        // 0x2d1588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1584) {
            ctx->pc = 0x2D15ACu;
            goto label_2d15ac;
        }
    }
    ctx->pc = 0x2D158Cu;
    // 0x2d158c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2d158cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2d1590: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1594: 0x8ca4b734  lw          $a0, -0x48CC($a1)
    ctx->pc = 0x2d1594u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2d1598: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2d1598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2d159c: 0x24632710  addiu       $v1, $v1, 0x2710
    ctx->pc = 0x2d159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10000));
    // 0x2d15a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D15A0u;
    {
        const bool branch_taken_0x2d15a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D15A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D15A0u;
        // 0x2d15a4: 0xae830020  sw          $v1, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d15a0) {
            ctx->pc = 0x2D15ACu;
            goto label_2d15ac;
        }
    }
    ctx->pc = 0x2D15A8u;
label_2d15a8:
    // 0x2d15a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d15a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d15ac:
    // 0x2d15ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d15acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d15b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d15b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d15b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d15b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d15b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d15b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d15bc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d15bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d15c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d15c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d15c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D15C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D15C4u;
        // 0x2d15c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D15C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D15CCu;
    // 0x2d15cc: 0x0  nop
    ctx->pc = 0x2d15ccu;
    // NOP
    ctx->pc = 0x2d15d0u;
}
