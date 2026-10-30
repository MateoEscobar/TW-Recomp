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

// Function: sub_004692D8
// Address: 0x4692d8 - 0x4693f0
void sub_004692D8_0x4692d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004692D8_0x4692d8");
#endif

    switch (ctx->pc) {
        case 0x4692d8u: goto label_4692d8;
        case 0x4692dcu: goto label_4692dc;
        case 0x4692e0u: goto label_4692e0;
        case 0x4692e4u: goto label_4692e4;
        case 0x4692e8u: goto label_4692e8;
        case 0x4692ecu: goto label_4692ec;
        case 0x4692f0u: goto label_4692f0;
        case 0x4692f4u: goto label_4692f4;
        case 0x4692f8u: goto label_4692f8;
        case 0x4692fcu: goto label_4692fc;
        case 0x469300u: goto label_469300;
        case 0x469304u: goto label_469304;
        case 0x469308u: goto label_469308;
        case 0x46930cu: goto label_46930c;
        case 0x469310u: goto label_469310;
        case 0x469314u: goto label_469314;
        case 0x469318u: goto label_469318;
        case 0x46931cu: goto label_46931c;
        case 0x469320u: goto label_469320;
        case 0x469324u: goto label_469324;
        case 0x469328u: goto label_469328;
        case 0x46932cu: goto label_46932c;
        case 0x469330u: goto label_469330;
        case 0x469334u: goto label_469334;
        case 0x469338u: goto label_469338;
        case 0x46933cu: goto label_46933c;
        case 0x469340u: goto label_469340;
        case 0x469344u: goto label_469344;
        case 0x469348u: goto label_469348;
        case 0x46934cu: goto label_46934c;
        case 0x469350u: goto label_469350;
        case 0x469354u: goto label_469354;
        case 0x469358u: goto label_469358;
        case 0x46935cu: goto label_46935c;
        case 0x469360u: goto label_469360;
        case 0x469364u: goto label_469364;
        case 0x469368u: goto label_469368;
        case 0x46936cu: goto label_46936c;
        case 0x469370u: goto label_469370;
        case 0x469374u: goto label_469374;
        case 0x469378u: goto label_469378;
        case 0x46937cu: goto label_46937c;
        case 0x469380u: goto label_469380;
        case 0x469384u: goto label_469384;
        case 0x469388u: goto label_469388;
        case 0x46938cu: goto label_46938c;
        case 0x469390u: goto label_469390;
        case 0x469394u: goto label_469394;
        case 0x469398u: goto label_469398;
        case 0x46939cu: goto label_46939c;
        case 0x4693a0u: goto label_4693a0;
        case 0x4693a4u: goto label_4693a4;
        case 0x4693a8u: goto label_4693a8;
        case 0x4693acu: goto label_4693ac;
        case 0x4693b0u: goto label_4693b0;
        case 0x4693b4u: goto label_4693b4;
        case 0x4693b8u: goto label_4693b8;
        case 0x4693bcu: goto label_4693bc;
        case 0x4693c0u: goto label_4693c0;
        case 0x4693c4u: goto label_4693c4;
        case 0x4693c8u: goto label_4693c8;
        case 0x4693ccu: goto label_4693cc;
        case 0x4693d0u: goto label_4693d0;
        case 0x4693d4u: goto label_4693d4;
        case 0x4693d8u: goto label_4693d8;
        case 0x4693dcu: goto label_4693dc;
        case 0x4693e0u: goto label_4693e0;
        case 0x4693e4u: goto label_4693e4;
        case 0x4693e8u: goto label_4693e8;
        case 0x4693ecu: goto label_4693ec;
        default: break;
    }

    ctx->pc = 0x4692d8u;

label_4692d8:
    // 0x4692d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4692d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4692dc:
    // 0x4692dc: 0x8f8388b8  lw          $v1, -0x7748($gp)
    ctx->pc = 0x4692dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936760)));
label_4692e0:
    // 0x4692e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4692e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4692e4:
    // 0x4692e4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4692e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4692e8:
    // 0x4692e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4692e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4692ec:
    // 0x4692ec: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x4692ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_4692f0:
    // 0x4692f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4692f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4692f4:
    // 0x4692f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4692f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4692f8:
    // 0x4692f8: 0x8c820118  lw          $v0, 0x118($a0)
    ctx->pc = 0x4692f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_4692fc:
    // 0x4692fc: 0x34a50014  ori         $a1, $a1, 0x14
    ctx->pc = 0x4692fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20);
label_469300:
    // 0x469300: 0x40f809  jalr        $v0
label_469304:
    if (ctx->pc == 0x469304u) {
        ctx->pc = 0x469304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469300u;
        // 0x469304: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469308u;
        goto label_469308;
    }
    ctx->pc = 0x469300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x469308u);
        ctx->pc = 0x469304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469300u;
        // 0x469304: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469300u, 0x469308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x469308u;
label_469308:
    // 0x469308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x469308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46930c:
    // 0x46930c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_469310:
    if (ctx->pc == 0x469310u) {
        ctx->pc = 0x469310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46930Cu;
        // 0x469310: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469314u;
        goto label_469314;
    }
    ctx->pc = 0x46930Cu;
    {
        const bool branch_taken_0x46930c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x469310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46930Cu;
        // 0x469310: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46930c) {
            ctx->pc = 0x46931Cu;
            goto label_46931c;
        }
    }
    ctx->pc = 0x469314u;
label_469314:
    // 0x469314: 0x10000031  b           . + 4 + (0x31 << 2)
label_469318:
    if (ctx->pc == 0x469318u) {
        ctx->pc = 0x469318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469314u;
        // 0x469318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46931Cu;
        goto label_46931c;
    }
    ctx->pc = 0x469314u;
    {
        const bool branch_taken_0x469314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x469318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469314u;
        // 0x469318: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469314) {
            ctx->pc = 0x4693DCu;
            goto label_4693dc;
        }
    }
    ctx->pc = 0x46931Cu;
label_46931c:
    // 0x46931c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x46931cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_469320:
    // 0x469320: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x469320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_469324:
    // 0x469324: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x469324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_469328:
    // 0x469328: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x469328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_46932c:
    // 0x46932c: 0x2442a8f8  addiu       $v0, $v0, -0x5708
    ctx->pc = 0x46932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945016));
label_469330:
    // 0x469330: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x469330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_469334:
    // 0x469334: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x469334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_469338:
    // 0x469338: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x469338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_46933c:
    // 0x46933c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46933cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_469340:
    // 0x469340: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x469340u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_469344:
    // 0x469344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x469344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_469348:
    // 0x469348: 0xc11a830  jal         func_46A0C0
label_46934c:
    if (ctx->pc == 0x46934Cu) {
        ctx->pc = 0x46934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469348u;
        // 0x46934c: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469350u;
        goto label_469350;
    }
    ctx->pc = 0x469348u;
    SET_GPR_U32(ctx, 31, 0x469350u);
    ctx->pc = 0x46934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x469348u;
    // 0x46934c: 0xa2030003  sb          $v1, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0C0u, 0x469348u, 0x469350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469350u;
label_469350:
    // 0x469350: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x469350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_469354:
    // 0x469354: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x469354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_469358:
    // 0x469358: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x469358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_46935c:
    // 0x46935c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x46935cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_469360:
    // 0x469360: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x469360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_469364:
    // 0x469364: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x469364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_469368:
    // 0x469368: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x469368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_46936c:
    // 0x46936c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x46936cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_469370:
    // 0x469370: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x469370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_469374:
    // 0x469374: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x469374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_469378:
    // 0x469378: 0x24429ef8  addiu       $v0, $v0, -0x6108
    ctx->pc = 0x469378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942456));
label_46937c:
    // 0x46937c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_469380:
    if (ctx->pc == 0x469380u) {
        ctx->pc = 0x469380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46937Cu;
        // 0x469380: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469384u;
        goto label_469384;
    }
    ctx->pc = 0x46937Cu;
    {
        const bool branch_taken_0x46937c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x469380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46937Cu;
        // 0x469380: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46937c) {
            ctx->pc = 0x469388u;
            goto label_469388;
        }
    }
    ctx->pc = 0x469384u;
label_469384:
    // 0x469384: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x469384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_469388:
    // 0x469388: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x469388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_46938c:
    // 0x46938c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x46938cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_469390:
    // 0x469390: 0x26020064  addiu       $v0, $s0, 0x64
    ctx->pc = 0x469390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_469394:
    // 0x469394: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x469394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_469398:
    // 0x469398: 0xa6000050  sh          $zero, 0x50($s0)
    ctx->pc = 0x469398u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 0));
label_46939c:
    // 0x46939c: 0xa6000052  sh          $zero, 0x52($s0)
    ctx->pc = 0x46939cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 0));
label_4693a0:
    // 0x4693a0: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x4693a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_4693a4:
    // 0x4693a4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x4693a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_4693a8:
    // 0x4693a8: 0x2484e6b0  addiu       $a0, $a0, -0x1950
    ctx->pc = 0x4693a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960816));
label_4693ac:
    // 0x4693ac: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x4693acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_4693b0:
    // 0x4693b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4693b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4693b4:
    // 0x4693b4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x4693b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_4693b8:
    // 0x4693b8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x4693b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_4693bc:
    // 0x4693bc: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x4693bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_4693c0:
    // 0x4693c0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x4693c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_4693c4:
    // 0x4693c4: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x4693c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
label_4693c8:
    // 0x4693c8: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x4693c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_4693cc:
    // 0x4693cc: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x4693ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_4693d0:
    // 0x4693d0: 0xc11ff8e  jal         func_47FE38
label_4693d4:
    if (ctx->pc == 0x4693D4u) {
        ctx->pc = 0x4693D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4693D0u;
        // 0x4693d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4693D8u;
        goto label_4693d8;
    }
    ctx->pc = 0x4693D0u;
    SET_GPR_U32(ctx, 31, 0x4693D8u);
    ctx->pc = 0x4693D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4693D0u;
    // 0x4693d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FE38u, 0x4693D0u, 0x4693D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4693D8u;
label_4693d8:
    // 0x4693d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4693d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4693dc:
    // 0x4693dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4693dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4693e0:
    // 0x4693e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4693e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4693e4:
    // 0x4693e4: 0x3e00008  jr          $ra
label_4693e8:
    if (ctx->pc == 0x4693E8u) {
        ctx->pc = 0x4693E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4693E4u;
        // 0x4693e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4693ECu;
        goto label_4693ec;
    }
    ctx->pc = 0x4693E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4693E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4693E4u;
        // 0x4693e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4693E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4693ECu;
label_4693ec:
    // 0x4693ec: 0x0  nop
    ctx->pc = 0x4693ecu;
    // NOP
    ctx->pc = 0x4693f0u;
}
