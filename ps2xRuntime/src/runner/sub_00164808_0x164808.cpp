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

// Function: sub_00164808
// Address: 0x164808 - 0x164a28
void sub_00164808_0x164808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164808_0x164808");
#endif

    switch (ctx->pc) {
        case 0x164840u: goto label_164840;
        case 0x164848u: goto label_164848;
        case 0x164858u: goto label_164858;
        case 0x164898u: goto label_164898;
        case 0x1648bcu: goto label_1648bc;
        case 0x1648c8u: goto label_1648c8;
        case 0x164928u: goto label_164928;
        case 0x16493cu: goto label_16493c;
        case 0x164950u: goto label_164950;
        case 0x164960u: goto label_164960;
        case 0x16496cu: goto label_16496c;
        case 0x164978u: goto label_164978;
        case 0x1649acu: goto label_1649ac;
        case 0x1649c0u: goto label_1649c0;
        case 0x1649d0u: goto label_1649d0;
        case 0x164a04u: goto label_164a04;
        default: break;
    }

    ctx->pc = 0x164808u;

    // 0x164808: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x164808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16480c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x16480cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x164810: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x164810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x164814: 0x24a510d8  addiu       $a1, $a1, 0x10D8
    ctx->pc = 0x164814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4312));
    // 0x164818: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x164818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x16481c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16481cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164820: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x164820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x164824: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x164824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x164828: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x164828u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
    // 0x16482c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x16482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x164830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x164830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164834: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x164834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x164838: 0xc059bf2  jal         func_166FC8
    ctx->pc = 0x164838u;
    SET_GPR_U32(ctx, 31, 0x164840u);
    ctx->pc = 0x16483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164838u;
    // 0x16483c: 0xa20000d4  sb          $zero, 0xD4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166FC8u, 0x164838u, 0x164840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164840u;
label_164840:
    // 0x164840: 0xc13782a  jal         func_4DE0A8
    ctx->pc = 0x164840u;
    SET_GPR_U32(ctx, 31, 0x164848u);
    ctx->pc = 0x164844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164840u;
    // 0x164844: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x164840u, 0x164848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164848u;
label_164848:
    // 0x164848: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x164848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16484c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16484cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164850: 0x2603062a  addiu       $v1, $s0, 0x62A
    ctx->pc = 0x164850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1578));
    // 0x164854: 0x0  nop
    ctx->pc = 0x164854u;
    // NOP
label_164858:
    // 0x164858: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x164858u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x16485c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x164860: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x164860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x164864: 0x0  nop
    ctx->pc = 0x164864u;
    // NOP
    // 0x164868: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x164868u;
    {
        const bool branch_taken_0x164868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164868u;
        // 0x16486c: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164868) {
            ctx->pc = 0x164858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164858;
        }
    }
    ctx->pc = 0x164870u;
    // 0x164870: 0xa6000634  sh          $zero, 0x634($s0)
    ctx->pc = 0x164870u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1588), (uint16_t)GPR_U32(ctx, 0));
    // 0x164874: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x164874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164878: 0xa6000626  sh          $zero, 0x626($s0)
    ctx->pc = 0x164878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1574), (uint16_t)GPR_U32(ctx, 0));
    // 0x16487c: 0x2611014c  addiu       $s1, $s0, 0x14C
    ctx->pc = 0x16487cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
    // 0x164880: 0xa6000624  sh          $zero, 0x624($s0)
    ctx->pc = 0x164880u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1572), (uint16_t)GPR_U32(ctx, 0));
    // 0x164884: 0x261301b0  addiu       $s3, $s0, 0x1B0
    ctx->pc = 0x164884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x164888: 0xa6000620  sh          $zero, 0x620($s0)
    ctx->pc = 0x164888u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1568), (uint16_t)GPR_U32(ctx, 0));
    // 0x16488c: 0x2603015c  addiu       $v1, $s0, 0x15C
    ctx->pc = 0x16488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x164890: 0xa600061e  sh          $zero, 0x61E($s0)
    ctx->pc = 0x164890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1566), (uint16_t)GPR_U32(ctx, 0));
    // 0x164894: 0xa6000636  sh          $zero, 0x636($s0)
    ctx->pc = 0x164894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1590), (uint16_t)GPR_U32(ctx, 0));
label_164898:
    // 0x164898: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x164898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x16489c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1648a0: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1648a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1648a4: 0x0  nop
    ctx->pc = 0x1648a4u;
    // NOP
    // 0x1648a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1648A8u;
    {
        const bool branch_taken_0x1648a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1648ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648A8u;
        // 0x1648ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648a8) {
            ctx->pc = 0x164898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164898;
        }
    }
    ctx->pc = 0x1648B0u;
    // 0x1648b0: 0xae00017c  sw          $zero, 0x17C($s0)
    ctx->pc = 0x1648b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
    // 0x1648b4: 0xc0591f8  jal         func_1647E0
    ctx->pc = 0x1648B4u;
    SET_GPR_U32(ctx, 31, 0x1648BCu);
    ctx->pc = 0x1648B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648B4u;
    // 0x1648b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647E0u, 0x1648B4u, 0x1648BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648BCu;
label_1648bc:
    // 0x1648bc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1648bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1648c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648c4: 0x0  nop
    ctx->pc = 0x1648c4u;
    // NOP
label_1648c8:
    // 0x1648c8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1648c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1648cc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1648ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1648d0: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x1648d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1648d4: 0x0  nop
    ctx->pc = 0x1648d4u;
    // NOP
    // 0x1648d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1648D8u;
    {
        const bool branch_taken_0x1648d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1648DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648D8u;
        // 0x1648dc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648d8) {
            ctx->pc = 0x1648C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1648c8;
        }
    }
    ctx->pc = 0x1648E0u;
    // 0x1648e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1648e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1648e4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1648e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1648e8: 0xa203060d  sb          $v1, 0x60D($s0)
    ctx->pc = 0x1648e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1549), (uint8_t)GPR_U32(ctx, 3));
    // 0x1648ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1648ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648f0: 0xa203060c  sb          $v1, 0x60C($s0)
    ctx->pc = 0x1648f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1548), (uint8_t)GPR_U32(ctx, 3));
    // 0x1648f4: 0x26110640  addiu       $s1, $s0, 0x640
    ctx->pc = 0x1648f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    // 0x1648f8: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1648f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1648fc: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x1648fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x164900: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x164900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x164904: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x164904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x164908: 0x8e82bd30  lw          $v0, -0x42D0($s4)
    ctx->pc = 0x164908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x16490c: 0xae020614  sw          $v0, 0x614($s0)
    ctx->pc = 0x16490cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1556), GPR_U32(ctx, 2));
    // 0x164910: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x164910u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x598690u));
    // 0x164914: 0xae020610  sw          $v0, 0x610($s0)
    ctx->pc = 0x164914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 2));
    // 0x164918: 0x8e83bd30  lw          $v1, -0x42D0($s4)
    ctx->pc = 0x164918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    // 0x16491c: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x16491cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x164920: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x164920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x164924: 0xa2200050  sb          $zero, 0x50($s1)
    ctx->pc = 0x164924u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
label_164928:
    // 0x164928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x164928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16492c: 0xa6200052  sh          $zero, 0x52($s1)
    ctx->pc = 0x16492cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x164930: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x164930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x164934: 0xc05b7be  jal         func_16DEF8
    ctx->pc = 0x164934u;
    SET_GPR_U32(ctx, 31, 0x16493Cu);
    ctx->pc = 0x164938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164934u;
    // 0x164938: 0x26310130  addiu       $s1, $s1, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16DEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16DEF8u, 0x164934u, 0x16493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16493Cu;
label_16493c:
    // 0x16493c: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x16493cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x164940: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x164940u;
    {
        const bool branch_taken_0x164940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164940) {
            ctx->pc = 0x164944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164940u;
            // 0x164944: 0xa2200050  sb          $zero, 0x50($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164928;
        }
    }
    ctx->pc = 0x164948u;
    // 0x164948: 0xc0590ac  jal         func_1642B0
    ctx->pc = 0x164948u;
    SET_GPR_U32(ctx, 31, 0x164950u);
    ctx->pc = 0x16494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164948u;
    // 0x16494c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1642B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1642B0u, 0x164948u, 0x164950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164950u;
label_164950:
    // 0x164950: 0xa20000d3  sb          $zero, 0xD3($s0)
    ctx->pc = 0x164950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 211), (uint8_t)GPR_U32(ctx, 0));
    // 0x164954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164958: 0xc05a61e  jal         func_169878
    ctx->pc = 0x164958u;
    SET_GPR_U32(ctx, 31, 0x164960u);
    ctx->pc = 0x16495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164958u;
    // 0x16495c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169878u, 0x164958u, 0x164960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164960u;
label_164960:
    // 0x164960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164964: 0xc05a628  jal         func_1698A0
    ctx->pc = 0x164964u;
    SET_GPR_U32(ctx, 31, 0x16496Cu);
    ctx->pc = 0x164968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164964u;
    // 0x164968: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698A0u, 0x164964u, 0x16496Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16496Cu;
label_16496c:
    // 0x16496c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16496cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164970: 0xc05a632  jal         func_1698C8
    ctx->pc = 0x164970u;
    SET_GPR_U32(ctx, 31, 0x164978u);
    ctx->pc = 0x164974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164970u;
    // 0x164974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698C8u, 0x164970u, 0x164978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164978u;
label_164978:
    // 0x164978: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x164978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16497c: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x16497cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x164980: 0xae0005f8  sw          $zero, 0x5F8($s0)
    ctx->pc = 0x164980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1528), GPR_U32(ctx, 0));
    // 0x164984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164988: 0xae0005fc  sw          $zero, 0x5FC($s0)
    ctx->pc = 0x164988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1532), GPR_U32(ctx, 0));
    // 0x16498c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16498cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164990: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x164990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
    // 0x164994: 0xae000604  sw          $zero, 0x604($s0)
    ctx->pc = 0x164994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1540), GPR_U32(ctx, 0));
    // 0x164998: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x164998u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
    // 0x16499c: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x16499cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x1649a0: 0xa20000e1  sb          $zero, 0xE1($s0)
    ctx->pc = 0x1649a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 225), (uint8_t)GPR_U32(ctx, 0));
    // 0x1649a4: 0xc05a800  jal         func_16A000
    ctx->pc = 0x1649A4u;
    SET_GPR_U32(ctx, 31, 0x1649ACu);
    ctx->pc = 0x1649A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649A4u;
    // 0x1649a8: 0xa60200e2  sh          $v0, 0xE2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 226), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A000u, 0x1649A4u, 0x1649ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649ACu;
label_1649ac:
    // 0x1649ac: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1649acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1649b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649b4: 0xa20200d7  sb          $v0, 0xD7($s0)
    ctx->pc = 0x1649b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 215), (uint8_t)GPR_U32(ctx, 2));
    // 0x1649b8: 0xc05973e  jal         func_165CF8
    ctx->pc = 0x1649B8u;
    SET_GPR_U32(ctx, 31, 0x1649C0u);
    ctx->pc = 0x1649BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649B8u;
    // 0x1649bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165CF8u, 0x1649B8u, 0x1649C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649C0u;
label_1649c0:
    // 0x1649c0: 0xa20000d9  sb          $zero, 0xD9($s0)
    ctx->pc = 0x1649c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 217), (uint8_t)GPR_U32(ctx, 0));
    // 0x1649c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649c8: 0xc0592da  jal         func_164B68
    ctx->pc = 0x1649C8u;
    SET_GPR_U32(ctx, 31, 0x1649D0u);
    ctx->pc = 0x1649CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649C8u;
    // 0x1649cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B68u, 0x1649C8u, 0x1649D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1649D0u;
label_1649d0:
    // 0x1649d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1649d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1649d4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1649d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1649d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1649d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1649dc: 0xa20200dd  sb          $v0, 0xDD($s0)
    ctx->pc = 0x1649dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 221), (uint8_t)GPR_U32(ctx, 2));
    // 0x1649e0: 0xa20300e0  sb          $v1, 0xE0($s0)
    ctx->pc = 0x1649e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 224), (uint8_t)GPR_U32(ctx, 3));
    // 0x1649e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1649e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1649e8: 0xa20500df  sb          $a1, 0xDF($s0)
    ctx->pc = 0x1649e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 223), (uint8_t)GPR_U32(ctx, 5));
    // 0x1649ec: 0xa20000da  sb          $zero, 0xDA($s0)
    ctx->pc = 0x1649ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 218), (uint8_t)GPR_U32(ctx, 0));
    // 0x1649f0: 0xa20000db  sb          $zero, 0xDB($s0)
    ctx->pc = 0x1649f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 219), (uint8_t)GPR_U32(ctx, 0));
    // 0x1649f4: 0xa20000dc  sb          $zero, 0xDC($s0)
    ctx->pc = 0x1649f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 220), (uint8_t)GPR_U32(ctx, 0));
    // 0x1649f8: 0xa20500de  sb          $a1, 0xDE($s0)
    ctx->pc = 0x1649f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 222), (uint8_t)GPR_U32(ctx, 5));
    // 0x1649fc: 0xc0596dc  jal         func_165B70
    ctx->pc = 0x1649FCu;
    SET_GPR_U32(ctx, 31, 0x164A04u);
    ctx->pc = 0x164A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1649FCu;
    // 0x164a00: 0x8e85bd30  lw          $a1, -0x42D0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B70u, 0x1649FCu, 0x164A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164A04u;
label_164a04:
    // 0x164a04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x164a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164a08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x164a08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x164a0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x164a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164a10: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x164a10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164a14: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x164a14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x164a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x164A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164A1Cu;
        // 0x164a20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164A24u;
    // 0x164a24: 0x0  nop
    ctx->pc = 0x164a24u;
    // NOP
    ctx->pc = 0x164a28u;
}
