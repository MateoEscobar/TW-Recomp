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

// Function: sub_002E8288
// Address: 0x2e8288 - 0x2e8418
void sub_002E8288_0x2e8288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8288_0x2e8288");
#endif

    switch (ctx->pc) {
        case 0x2e8288u: goto label_2e8288;
        case 0x2e828cu: goto label_2e828c;
        case 0x2e8290u: goto label_2e8290;
        case 0x2e8294u: goto label_2e8294;
        case 0x2e8298u: goto label_2e8298;
        case 0x2e829cu: goto label_2e829c;
        case 0x2e82a0u: goto label_2e82a0;
        case 0x2e82a4u: goto label_2e82a4;
        case 0x2e82a8u: goto label_2e82a8;
        case 0x2e82acu: goto label_2e82ac;
        case 0x2e82b0u: goto label_2e82b0;
        case 0x2e82b4u: goto label_2e82b4;
        case 0x2e82b8u: goto label_2e82b8;
        case 0x2e82bcu: goto label_2e82bc;
        case 0x2e82c0u: goto label_2e82c0;
        case 0x2e82c4u: goto label_2e82c4;
        case 0x2e82c8u: goto label_2e82c8;
        case 0x2e82ccu: goto label_2e82cc;
        case 0x2e82d0u: goto label_2e82d0;
        case 0x2e82d4u: goto label_2e82d4;
        case 0x2e82d8u: goto label_2e82d8;
        case 0x2e82dcu: goto label_2e82dc;
        case 0x2e82e0u: goto label_2e82e0;
        case 0x2e82e4u: goto label_2e82e4;
        case 0x2e82e8u: goto label_2e82e8;
        case 0x2e82ecu: goto label_2e82ec;
        case 0x2e82f0u: goto label_2e82f0;
        case 0x2e82f4u: goto label_2e82f4;
        case 0x2e82f8u: goto label_2e82f8;
        case 0x2e82fcu: goto label_2e82fc;
        case 0x2e8300u: goto label_2e8300;
        case 0x2e8304u: goto label_2e8304;
        case 0x2e8308u: goto label_2e8308;
        case 0x2e830cu: goto label_2e830c;
        case 0x2e8310u: goto label_2e8310;
        case 0x2e8314u: goto label_2e8314;
        case 0x2e8318u: goto label_2e8318;
        case 0x2e831cu: goto label_2e831c;
        case 0x2e8320u: goto label_2e8320;
        case 0x2e8324u: goto label_2e8324;
        case 0x2e8328u: goto label_2e8328;
        case 0x2e832cu: goto label_2e832c;
        case 0x2e8330u: goto label_2e8330;
        case 0x2e8334u: goto label_2e8334;
        case 0x2e8338u: goto label_2e8338;
        case 0x2e833cu: goto label_2e833c;
        case 0x2e8340u: goto label_2e8340;
        case 0x2e8344u: goto label_2e8344;
        case 0x2e8348u: goto label_2e8348;
        case 0x2e834cu: goto label_2e834c;
        case 0x2e8350u: goto label_2e8350;
        case 0x2e8354u: goto label_2e8354;
        case 0x2e8358u: goto label_2e8358;
        case 0x2e835cu: goto label_2e835c;
        case 0x2e8360u: goto label_2e8360;
        case 0x2e8364u: goto label_2e8364;
        case 0x2e8368u: goto label_2e8368;
        case 0x2e836cu: goto label_2e836c;
        case 0x2e8370u: goto label_2e8370;
        case 0x2e8374u: goto label_2e8374;
        case 0x2e8378u: goto label_2e8378;
        case 0x2e837cu: goto label_2e837c;
        case 0x2e8380u: goto label_2e8380;
        case 0x2e8384u: goto label_2e8384;
        case 0x2e8388u: goto label_2e8388;
        case 0x2e838cu: goto label_2e838c;
        case 0x2e8390u: goto label_2e8390;
        case 0x2e8394u: goto label_2e8394;
        case 0x2e8398u: goto label_2e8398;
        case 0x2e839cu: goto label_2e839c;
        case 0x2e83a0u: goto label_2e83a0;
        case 0x2e83a4u: goto label_2e83a4;
        case 0x2e83a8u: goto label_2e83a8;
        case 0x2e83acu: goto label_2e83ac;
        case 0x2e83b0u: goto label_2e83b0;
        case 0x2e83b4u: goto label_2e83b4;
        case 0x2e83b8u: goto label_2e83b8;
        case 0x2e83bcu: goto label_2e83bc;
        case 0x2e83c0u: goto label_2e83c0;
        case 0x2e83c4u: goto label_2e83c4;
        case 0x2e83c8u: goto label_2e83c8;
        case 0x2e83ccu: goto label_2e83cc;
        case 0x2e83d0u: goto label_2e83d0;
        case 0x2e83d4u: goto label_2e83d4;
        case 0x2e83d8u: goto label_2e83d8;
        case 0x2e83dcu: goto label_2e83dc;
        case 0x2e83e0u: goto label_2e83e0;
        case 0x2e83e4u: goto label_2e83e4;
        case 0x2e83e8u: goto label_2e83e8;
        case 0x2e83ecu: goto label_2e83ec;
        case 0x2e83f0u: goto label_2e83f0;
        case 0x2e83f4u: goto label_2e83f4;
        case 0x2e83f8u: goto label_2e83f8;
        case 0x2e83fcu: goto label_2e83fc;
        case 0x2e8400u: goto label_2e8400;
        case 0x2e8404u: goto label_2e8404;
        case 0x2e8408u: goto label_2e8408;
        case 0x2e840cu: goto label_2e840c;
        case 0x2e8410u: goto label_2e8410;
        case 0x2e8414u: goto label_2e8414;
        default: break;
    }

    ctx->pc = 0x2e8288u;

label_2e8288:
    // 0x2e8288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e828c:
    // 0x2e828c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e828cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2e8290:
    // 0x2e8290: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e8290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2e8294:
    // 0x2e8294: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2e8294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2e8298:
    // 0x2e8298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e8298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e829c:
    // 0x2e829c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e82a0:
    // 0x2e82a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e82a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e82a4:
    // 0x2e82a4: 0x246329a0  addiu       $v1, $v1, 0x29A0
    ctx->pc = 0x2e82a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10656));
label_2e82a8:
    // 0x2e82a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e82a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e82ac:
    // 0x2e82ac: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e82acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2e82b0:
    // 0x2e82b0: 0xae0a0010  sw          $t2, 0x10($s0)
    ctx->pc = 0x2e82b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 10));
label_2e82b4:
    // 0x2e82b4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2e82b8:
    // 0x2e82b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e82b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2e82bc:
    // 0x2e82bc: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2e82bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2e82c0:
    // 0x2e82c0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2e82c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2e82c4:
    // 0x2e82c4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2e82c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e82c8:
    // 0x2e82c8: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2e82c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2e82cc:
    // 0x2e82cc: 0x260e0037  addiu       $t6, $s0, 0x37
    ctx->pc = 0x2e82ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 55));
label_2e82d0:
    // 0x2e82d0: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2e82d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2e82d4:
    // 0x2e82d4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2e82d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e82d8:
    // 0x2e82d8: 0x24180005  addiu       $t8, $zero, 0x5
    ctx->pc = 0x2e82d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e82dc:
    // 0x2e82dc: 0x240f0064  addiu       $t7, $zero, 0x64
    ctx->pc = 0x2e82dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2e82e0:
    // 0x2e82e0: 0x8c82bd30  lw          $v0, -0x42D0($a0)
    ctx->pc = 0x2e82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950192)));
label_2e82e4:
    // 0x2e82e4: 0x240d001e  addiu       $t5, $zero, 0x1E
    ctx->pc = 0x2e82e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2e82e8:
    // 0x2e82e8: 0x8fb10030  lw          $s1, 0x30($sp)
    ctx->pc = 0x2e82e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e82ec:
    // 0x2e82ec: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2e82ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e82f0:
    // 0x2e82f0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2e82f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_2e82f4:
    // 0x2e82f4: 0xa206003d  sb          $a2, 0x3D($s0)
    ctx->pc = 0x2e82f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 61), (uint8_t)GPR_U32(ctx, 6));
label_2e82f8:
    // 0x2e82f8: 0x2603003a  addiu       $v1, $s0, 0x3A
    ctx->pc = 0x2e82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 58));
label_2e82fc:
    // 0x2e82fc: 0xa20a003f  sb          $t2, 0x3F($s0)
    ctx->pc = 0x2e82fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 10));
label_2e8300:
    // 0x2e8300: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2e8300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2e8304:
    // 0x2e8304: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2e8304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2e8308:
    // 0x2e8308: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2e8308u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2e830c:
    // 0x2e830c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2e830cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2e8310:
    // 0x2e8310: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2e8310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_2e8314:
    // 0x2e8314: 0xa200003e  sb          $zero, 0x3E($s0)
    ctx->pc = 0x2e8314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 62), (uint8_t)GPR_U32(ctx, 0));
label_2e8318:
    // 0x2e8318: 0xa2000040  sb          $zero, 0x40($s0)
    ctx->pc = 0x2e8318u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 0));
label_2e831c:
    // 0x2e831c: 0xa2000041  sb          $zero, 0x41($s0)
    ctx->pc = 0x2e831cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 0));
label_2e8320:
    // 0x2e8320: 0xa2000042  sb          $zero, 0x42($s0)
    ctx->pc = 0x2e8320u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 0));
label_2e8324:
    // 0x2e8324: 0xa2000043  sb          $zero, 0x43($s0)
    ctx->pc = 0x2e8324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 0));
label_2e8328:
    // 0x2e8328: 0xa2000044  sb          $zero, 0x44($s0)
    ctx->pc = 0x2e8328u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 0));
label_2e832c:
    // 0x2e832c: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x2e832cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
label_2e8330:
    // 0x2e8330: 0xa2000046  sb          $zero, 0x46($s0)
    ctx->pc = 0x2e8330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 0));
label_2e8334:
    // 0x2e8334: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2e8334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e8338:
    // 0x2e8338: 0x50e00002  beql        $a3, $zero, . + 4 + (0x2 << 2)
label_2e833c:
    if (ctx->pc == 0x2E833Cu) {
        ctx->pc = 0x2E833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8338u;
        // 0x2e833c: 0x30c1023  subu        $v0, $t8, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8340u;
        goto label_2e8340;
    }
    ctx->pc = 0x2E8338u;
    {
        const bool branch_taken_0x2e8338 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8338) {
            ctx->pc = 0x2E833Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8338u;
            // 0x2e833c: 0x30c1023  subu        $v0, $t8, $t4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8344u;
            goto label_2e8344;
        }
    }
    ctx->pc = 0x2E8340u;
label_2e8340:
    // 0x2e8340: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2e8340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2e8344:
    // 0x2e8344: 0xa062fffa  sb          $v0, -0x6($v1)
    ctx->pc = 0x2e8344u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967290), (uint8_t)GPR_U32(ctx, 2));
label_2e8348:
    // 0x2e8348: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
label_2e834c:
    if (ctx->pc == 0x2E834Cu) {
        ctx->pc = 0x2E834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8348u;
        // 0x2e834c: 0x1cc1021  addu        $v0, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8350u;
        goto label_2e8350;
    }
    ctx->pc = 0x2E8348u;
    {
        const bool branch_taken_0x2e8348 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8348u;
        // 0x2e834c: 0x1cc1021  addu        $v0, $t6, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8348) {
            ctx->pc = 0x2E835Cu;
            goto label_2e835c;
        }
    }
    ctx->pc = 0x2E8350u;
label_2e8350:
    // 0x2e8350: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2e8350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2e8354:
    // 0x2e8354: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e8358:
    if (ctx->pc == 0x2E8358u) {
        ctx->pc = 0x2E8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8354u;
        // 0x2e8358: 0xa062fffd  sb          $v0, -0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294967293), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E835Cu;
        goto label_2e835c;
    }
    ctx->pc = 0x2E8354u;
    {
        const bool branch_taken_0x2e8354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8354u;
        // 0x2e8358: 0xa062fffd  sb          $v0, -0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294967293), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8354) {
            ctx->pc = 0x2E8360u;
            goto label_2e8360;
        }
    }
    ctx->pc = 0x2E835Cu;
label_2e835c:
    // 0x2e835c: 0xa04d0000  sb          $t5, 0x0($v0)
    ctx->pc = 0x2e835cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 13));
label_2e8360:
    // 0x2e8360: 0x51200003  beql        $t1, $zero, . + 4 + (0x3 << 2)
label_2e8364:
    if (ctx->pc == 0x2E8364u) {
        ctx->pc = 0x2E8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8360u;
        // 0x2e8364: 0xa06f0000  sb          $t7, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8368u;
        goto label_2e8368;
    }
    ctx->pc = 0x2E8360u;
    {
        const bool branch_taken_0x2e8360 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8360) {
            ctx->pc = 0x2E8364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E8360u;
            // 0x2e8364: 0xa06f0000  sb          $t7, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E8370u;
            goto label_2e8370;
        }
    }
    ctx->pc = 0x2E8368u;
label_2e8368:
    // 0x2e8368: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x2e8368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_2e836c:
    // 0x2e836c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2e836cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_2e8370:
    // 0x2e8370: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2e8370u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_2e8374:
    // 0x2e8374: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x2e8374u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_2e8378:
    // 0x2e8378: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e8378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e837c:
    // 0x2e837c: 0x25adfff6  addiu       $t5, $t5, -0xA
    ctx->pc = 0x2e837cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967286));
label_2e8380:
    // 0x2e8380: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2e8380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2e8384:
    // 0x2e8384: 0x2d820003  sltiu       $v0, $t4, 0x3
    ctx->pc = 0x2e8384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2e8388:
    // 0x2e8388: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_2e838c:
    if (ctx->pc == 0x2E838Cu) {
        ctx->pc = 0x2E838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8388u;
        // 0x2e838c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8390u;
        goto label_2e8390;
    }
    ctx->pc = 0x2E8388u;
    {
        const bool branch_taken_0x2e8388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8388u;
        // 0x2e838c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8388) {
            ctx->pc = 0x2E8338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8338;
        }
    }
    ctx->pc = 0x2E8390u;
label_2e8390:
    // 0x2e8390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e8390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8394:
    // 0x2e8394: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2e8394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e8398:
    // 0x2e8398: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2e8398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2e839c:
    // 0x2e839c: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x2e839cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2e83a0:
    // 0x2e83a0: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
label_2e83a4:
    if (ctx->pc == 0x2E83A4u) {
        ctx->pc = 0x2E83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83A0u;
        // 0x2e83a4: 0xa4670000  sh          $a3, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83A8u;
        goto label_2e83a8;
    }
    ctx->pc = 0x2E83A0u;
    {
        const bool branch_taken_0x2e83a0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83A0u;
        // 0x2e83a4: 0xa4670000  sh          $a3, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83a0) {
            ctx->pc = 0x2E83B0u;
            goto label_2e83b0;
        }
    }
    ctx->pc = 0x2E83A8u;
label_2e83a8:
    // 0x2e83a8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2e83a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2e83ac:
    // 0x2e83ac: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2e83acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_2e83b0:
    // 0x2e83b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2e83b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2e83b4:
    // 0x2e83b4: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x2e83b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_2e83b8:
    // 0x2e83b8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x2e83b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2e83bc:
    // 0x2e83bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_2e83c0:
    if (ctx->pc == 0x2E83C0u) {
        ctx->pc = 0x2E83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83BCu;
        // 0x2e83c0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83C4u;
        goto label_2e83c4;
    }
    ctx->pc = 0x2E83BCu;
    {
        const bool branch_taken_0x2e83bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83BCu;
        // 0x2e83c0: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83bc) {
            ctx->pc = 0x2E83A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e83a0;
        }
    }
    ctx->pc = 0x2E83C4u;
label_2e83c4:
    // 0x2e83c4: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_2e83c8:
    if (ctx->pc == 0x2E83C8u) {
        ctx->pc = 0x2E83C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83C4u;
        // 0x2e83c8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83CCu;
        goto label_2e83cc;
    }
    ctx->pc = 0x2E83C4u;
    {
        const bool branch_taken_0x2e83c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e83c4) {
            ctx->pc = 0x2E83C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E83C4u;
            // 0x2e83c8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E83FCu;
            goto label_2e83fc;
        }
    }
    ctx->pc = 0x2E83CCu;
label_2e83cc:
    // 0x2e83cc: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2e83ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2e83d0:
    // 0x2e83d0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2e83d4:
    if (ctx->pc == 0x2E83D4u) {
        ctx->pc = 0x2E83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83D0u;
        // 0x2e83d4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83D8u;
        goto label_2e83d8;
    }
    ctx->pc = 0x2E83D0u;
    {
        const bool branch_taken_0x2e83d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e83d0) {
            ctx->pc = 0x2E83D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E83D0u;
            // 0x2e83d4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E83FCu;
            goto label_2e83fc;
        }
    }
    ctx->pc = 0x2E83D8u;
label_2e83d8:
    // 0x2e83d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2e83d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e83dc:
    // 0x2e83dc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e83dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e83e0:
    // 0x2e83e0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e83e4:
    // 0x2e83e4: 0x40f809  jalr        $v0
label_2e83e8:
    if (ctx->pc == 0x2E83E8u) {
        ctx->pc = 0x2E83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83E4u;
        // 0x2e83e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83ECu;
        goto label_2e83ec;
    }
    ctx->pc = 0x2E83E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E83ECu);
        ctx->pc = 0x2E83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83E4u;
        // 0x2e83e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E83E4u, 0x2E83ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E83ECu;
label_2e83ec:
    // 0x2e83ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e83ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e83f0:
    // 0x2e83f0: 0xc08e150  jal         func_238540
label_2e83f4:
    if (ctx->pc == 0x2E83F4u) {
        ctx->pc = 0x2E83F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E83F0u;
        // 0x2e83f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E83F8u;
        goto label_2e83f8;
    }
    ctx->pc = 0x2E83F0u;
    SET_GPR_U32(ctx, 31, 0x2E83F8u);
    ctx->pc = 0x2E83F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E83F0u;
    // 0x2e83f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238540u, 0x2E83F0u, 0x2E83F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E83F8u;
label_2e83f8:
    // 0x2e83f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e83f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e83fc:
    // 0x2e83fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e83fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e8400:
    // 0x2e8400: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e8400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8404:
    // 0x2e8404: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e8404u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e8408:
    // 0x2e8408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e8408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e840c:
    // 0x2e840c: 0xa060011e  sb          $zero, 0x11E($v1)
    ctx->pc = 0x2e840cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 0));
label_2e8410:
    // 0x2e8410: 0x3e00008  jr          $ra
label_2e8414:
    if (ctx->pc == 0x2E8414u) {
        ctx->pc = 0x2E8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8410u;
        // 0x2e8414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E8418u;
        goto label_fallthrough_0x2e8410;
    }
    ctx->pc = 0x2E8410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8410u;
        // 0x2e8414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E8410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e8410:
    ctx->pc = 0x2E8418u;
}
