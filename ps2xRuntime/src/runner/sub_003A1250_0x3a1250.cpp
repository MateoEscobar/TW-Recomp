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

// Function: sub_003A1250
// Address: 0x3a1250 - 0x3a13d0
void sub_003A1250_0x3a1250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1250_0x3a1250");
#endif

    switch (ctx->pc) {
        case 0x3a1250u: goto label_3a1250;
        case 0x3a1254u: goto label_3a1254;
        case 0x3a1258u: goto label_3a1258;
        case 0x3a125cu: goto label_3a125c;
        case 0x3a1260u: goto label_3a1260;
        case 0x3a1264u: goto label_3a1264;
        case 0x3a1268u: goto label_3a1268;
        case 0x3a126cu: goto label_3a126c;
        case 0x3a1270u: goto label_3a1270;
        case 0x3a1274u: goto label_3a1274;
        case 0x3a1278u: goto label_3a1278;
        case 0x3a127cu: goto label_3a127c;
        case 0x3a1280u: goto label_3a1280;
        case 0x3a1284u: goto label_3a1284;
        case 0x3a1288u: goto label_3a1288;
        case 0x3a128cu: goto label_3a128c;
        case 0x3a1290u: goto label_3a1290;
        case 0x3a1294u: goto label_3a1294;
        case 0x3a1298u: goto label_3a1298;
        case 0x3a129cu: goto label_3a129c;
        case 0x3a12a0u: goto label_3a12a0;
        case 0x3a12a4u: goto label_3a12a4;
        case 0x3a12a8u: goto label_3a12a8;
        case 0x3a12acu: goto label_3a12ac;
        case 0x3a12b0u: goto label_3a12b0;
        case 0x3a12b4u: goto label_3a12b4;
        case 0x3a12b8u: goto label_3a12b8;
        case 0x3a12bcu: goto label_3a12bc;
        case 0x3a12c0u: goto label_3a12c0;
        case 0x3a12c4u: goto label_3a12c4;
        case 0x3a12c8u: goto label_3a12c8;
        case 0x3a12ccu: goto label_3a12cc;
        case 0x3a12d0u: goto label_3a12d0;
        case 0x3a12d4u: goto label_3a12d4;
        case 0x3a12d8u: goto label_3a12d8;
        case 0x3a12dcu: goto label_3a12dc;
        case 0x3a12e0u: goto label_3a12e0;
        case 0x3a12e4u: goto label_3a12e4;
        case 0x3a12e8u: goto label_3a12e8;
        case 0x3a12ecu: goto label_3a12ec;
        case 0x3a12f0u: goto label_3a12f0;
        case 0x3a12f4u: goto label_3a12f4;
        case 0x3a12f8u: goto label_3a12f8;
        case 0x3a12fcu: goto label_3a12fc;
        case 0x3a1300u: goto label_3a1300;
        case 0x3a1304u: goto label_3a1304;
        case 0x3a1308u: goto label_3a1308;
        case 0x3a130cu: goto label_3a130c;
        case 0x3a1310u: goto label_3a1310;
        case 0x3a1314u: goto label_3a1314;
        case 0x3a1318u: goto label_3a1318;
        case 0x3a131cu: goto label_3a131c;
        case 0x3a1320u: goto label_3a1320;
        case 0x3a1324u: goto label_3a1324;
        case 0x3a1328u: goto label_3a1328;
        case 0x3a132cu: goto label_3a132c;
        case 0x3a1330u: goto label_3a1330;
        case 0x3a1334u: goto label_3a1334;
        case 0x3a1338u: goto label_3a1338;
        case 0x3a133cu: goto label_3a133c;
        case 0x3a1340u: goto label_3a1340;
        case 0x3a1344u: goto label_3a1344;
        case 0x3a1348u: goto label_3a1348;
        case 0x3a134cu: goto label_3a134c;
        case 0x3a1350u: goto label_3a1350;
        case 0x3a1354u: goto label_3a1354;
        case 0x3a1358u: goto label_3a1358;
        case 0x3a135cu: goto label_3a135c;
        case 0x3a1360u: goto label_3a1360;
        case 0x3a1364u: goto label_3a1364;
        case 0x3a1368u: goto label_3a1368;
        case 0x3a136cu: goto label_3a136c;
        case 0x3a1370u: goto label_3a1370;
        case 0x3a1374u: goto label_3a1374;
        case 0x3a1378u: goto label_3a1378;
        case 0x3a137cu: goto label_3a137c;
        case 0x3a1380u: goto label_3a1380;
        case 0x3a1384u: goto label_3a1384;
        case 0x3a1388u: goto label_3a1388;
        case 0x3a138cu: goto label_3a138c;
        case 0x3a1390u: goto label_3a1390;
        case 0x3a1394u: goto label_3a1394;
        case 0x3a1398u: goto label_3a1398;
        case 0x3a139cu: goto label_3a139c;
        case 0x3a13a0u: goto label_3a13a0;
        case 0x3a13a4u: goto label_3a13a4;
        case 0x3a13a8u: goto label_3a13a8;
        case 0x3a13acu: goto label_3a13ac;
        case 0x3a13b0u: goto label_3a13b0;
        case 0x3a13b4u: goto label_3a13b4;
        case 0x3a13b8u: goto label_3a13b8;
        case 0x3a13bcu: goto label_3a13bc;
        case 0x3a13c0u: goto label_3a13c0;
        case 0x3a13c4u: goto label_3a13c4;
        case 0x3a13c8u: goto label_3a13c8;
        case 0x3a13ccu: goto label_3a13cc;
        default: break;
    }

    ctx->pc = 0x3a1250u;

label_3a1250:
    // 0x3a1250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3a1250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3a1254:
    // 0x3a1254: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3a1254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_3a1258:
    // 0x3a1258: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3a1258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3a125c:
    // 0x3a125c: 0x24425a70  addiu       $v0, $v0, 0x5A70
    ctx->pc = 0x3a125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23152));
label_3a1260:
    // 0x3a1260: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3a1260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3a1264:
    // 0x3a1264: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a1264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a1268:
    // 0x3a1268: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3a1268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3a126c:
    // 0x3a126c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a126cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a1270:
    // 0x3a1270: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3a1270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3a1274:
    // 0x3a1274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a1274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a1278:
    // 0x3a1278: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a1278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a127c:
    // 0x3a127c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3a127cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3a1280:
    // 0x3a1280: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_3a1284:
    if (ctx->pc == 0x3A1284u) {
        ctx->pc = 0x3A1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1280u;
        // 0x3a1284: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1288u;
        goto label_3a1288;
    }
    ctx->pc = 0x3A1280u;
    {
        const bool branch_taken_0x3a1280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1280u;
        // 0x3a1284: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1280) {
            ctx->pc = 0x3A1328u;
            goto label_3a1328;
        }
    }
    ctx->pc = 0x3A1288u;
label_3a1288:
    // 0x3a1288: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3a1288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a128c:
    // 0x3a128c: 0x0  nop
    ctx->pc = 0x3a128cu;
    // NOP
label_3a1290:
    // 0x3a1290: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3a1290u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a1294:
    // 0x3a1294: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a1294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1298:
    // 0x3a1298: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3a1298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3a129c:
    // 0x3a129c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3a129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3a12a0:
    // 0x3a12a0: 0x40f809  jalr        $v0
label_3a12a4:
    if (ctx->pc == 0x3A12A4u) {
        ctx->pc = 0x3A12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12A0u;
        // 0x3a12a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12A8u;
        goto label_3a12a8;
    }
    ctx->pc = 0x3A12A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A12A8u);
        ctx->pc = 0x3A12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12A0u;
        // 0x3a12a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A12A0u, 0x3A12A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A12A8u;
label_3a12a8:
    // 0x3a12a8: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_3a12ac:
    if (ctx->pc == 0x3A12ACu) {
        ctx->pc = 0x3A12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12A8u;
        // 0x3a12ac: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12B0u;
        goto label_3a12b0;
    }
    ctx->pc = 0x3A12A8u;
    {
        const bool branch_taken_0x3a12a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a12a8) {
            ctx->pc = 0x3A12ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A12A8u;
            // 0x3a12ac: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1320u;
            goto label_3a1320;
        }
    }
    ctx->pc = 0x3A12B0u;
label_3a12b0:
    // 0x3a12b0: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3a12b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3a12b4:
    // 0x3a12b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a12b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a12b8:
    // 0x3a12b8: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_3a12bc:
    if (ctx->pc == 0x3A12BCu) {
        ctx->pc = 0x3A12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12B8u;
        // 0x3a12bc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12C0u;
        goto label_3a12c0;
    }
    ctx->pc = 0x3A12B8u;
    {
        const bool branch_taken_0x3a12b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A12BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12B8u;
        // 0x3a12bc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a12b8) {
            ctx->pc = 0x3A131Cu;
            goto label_3a131c;
        }
    }
    ctx->pc = 0x3A12C0u;
label_3a12c0:
    // 0x3a12c0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3a12c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a12c4:
    // 0x3a12c4: 0x0  nop
    ctx->pc = 0x3a12c4u;
    // NOP
label_3a12c8:
    // 0x3a12c8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3a12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3a12cc:
    // 0x3a12cc: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x3a12ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3a12d0:
    // 0x3a12d0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3a12d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3a12d4:
    // 0x3a12d4: 0x1470000d  bne         $v1, $s0, . + 4 + (0xD << 2)
label_3a12d8:
    if (ctx->pc == 0x3A12D8u) {
        ctx->pc = 0x3A12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12D4u;
        // 0x3a12d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12DCu;
        goto label_3a12dc;
    }
    ctx->pc = 0x3A12D4u;
    {
        const bool branch_taken_0x3a12d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x3A12D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12D4u;
        // 0x3a12d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a12d4) {
            ctx->pc = 0x3A130Cu;
            goto label_3a130c;
        }
    }
    ctx->pc = 0x3A12DCu;
label_3a12dc:
    // 0x3a12dc: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x3a12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3a12e0:
    // 0x3a12e0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x3a12e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_3a12e4:
    // 0x3a12e4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3a12e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a12e8:
    // 0x3a12e8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3a12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_3a12ec:
    // 0x3a12ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a12ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a12f0:
    // 0x3a12f0: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3a12f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_3a12f4:
    // 0x3a12f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3a12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3a12f8:
    // 0x3a12f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3a12f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a12fc:
    // 0x3a12fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a12fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3a1300:
    // 0x3a1300: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a1300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a1304:
    // 0x3a1304: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a1308:
    if (ctx->pc == 0x3A1308u) {
        ctx->pc = 0x3A1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1304u;
        // 0x3a1308: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A130Cu;
        goto label_3a130c;
    }
    ctx->pc = 0x3A1304u;
    {
        const bool branch_taken_0x3a1304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1304u;
        // 0x3a1308: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1304) {
            ctx->pc = 0x3A131Cu;
            goto label_3a131c;
        }
    }
    ctx->pc = 0x3A130Cu;
label_3a130c:
    // 0x3a130c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3a130cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3a1310:
    // 0x3a1310: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x3a1310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3a1314:
    // 0x3a1314: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_3a1318:
    if (ctx->pc == 0x3A1318u) {
        ctx->pc = 0x3A1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1314u;
        // 0x3a1318: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A131Cu;
        goto label_3a131c;
    }
    ctx->pc = 0x3A1314u;
    {
        const bool branch_taken_0x3a1314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1314) {
            ctx->pc = 0x3A1318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1314u;
            // 0x3a1318: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A12C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a12c8;
        }
    }
    ctx->pc = 0x3A131Cu;
label_3a131c:
    // 0x3a131c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3a131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3a1320:
    // 0x3a1320: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_3a1324:
    if (ctx->pc == 0x3A1324u) {
        ctx->pc = 0x3A1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1320u;
        // 0x3a1324: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1328u;
        goto label_3a1328;
    }
    ctx->pc = 0x3A1320u;
    {
        const bool branch_taken_0x3a1320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1320) {
            ctx->pc = 0x3A1324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1320u;
            // 0x3a1324: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1290;
        }
    }
    ctx->pc = 0x3A1328u;
label_3a1328:
    // 0x3a1328: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3a1328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_3a132c:
    // 0x3a132c: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x3a132cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_3a1330:
    // 0x3a1330: 0x24425ad0  addiu       $v0, $v0, 0x5AD0
    ctx->pc = 0x3a1330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23248));
label_3a1334:
    // 0x3a1334: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3a1334u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3a1338:
    // 0x3a1338: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a1338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a133c:
    // 0x3a133c: 0x26101678  addiu       $s0, $s0, 0x1678
    ctx->pc = 0x3a133cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5752));
label_3a1340:
    // 0x3a1340: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3a1340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3a1344:
    // 0x3a1344: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a1344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1348:
    // 0x3a1348: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3a1348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3a134c:
    // 0x3a134c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x3a134cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3a1350:
    // 0x3a1350: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x3a1350u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_3a1354:
    // 0x3a1354: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x3a1354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3a1358:
    // 0x3a1358: 0x60f809  jalr        $v1
label_3a135c:
    if (ctx->pc == 0x3A135Cu) {
        ctx->pc = 0x3A135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1358u;
        // 0x3a135c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1360u;
        goto label_3a1360;
    }
    ctx->pc = 0x3A1358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1360u);
        ctx->pc = 0x3A135Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1358u;
        // 0x3a135c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1358u, 0x3A1360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1360u;
label_3a1360:
    // 0x3a1360: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x3a1360u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_3a1364:
    // 0x3a1364: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a1364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1368:
    // 0x3a1368: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3a1368u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3a136c:
    // 0x3a136c: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x3a136cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_3a1370:
    // 0x3a1370: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3a1370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3a1374:
    // 0x3a1374: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3a1374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3a1378:
    // 0x3a1378: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x3a1378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_3a137c:
    // 0x3a137c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x3a137cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3a1380:
    // 0x3a1380: 0x60f809  jalr        $v1
label_3a1384:
    if (ctx->pc == 0x3A1384u) {
        ctx->pc = 0x3A1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1380u;
        // 0x3a1384: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1388u;
        goto label_3a1388;
    }
    ctx->pc = 0x3A1380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1388u);
        ctx->pc = 0x3A1384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1380u;
        // 0x3a1384: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1380u, 0x3A1388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1388u;
label_3a1388:
    // 0x3a1388: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3a1388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_3a138c:
    // 0x3a138c: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x3a138cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_3a1390:
    // 0x3a1390: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x3a1390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_3a1394:
    // 0x3a1394: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3a1394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_3a1398:
    // 0x3a1398: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a1398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a139c:
    // 0x3a139c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3a139cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3a13a0:
    // 0x3a13a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3a13a4:
    if (ctx->pc == 0x3A13A4u) {
        ctx->pc = 0x3A13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13A0u;
        // 0x3a13a4: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A13A8u;
        goto label_3a13a8;
    }
    ctx->pc = 0x3A13A0u;
    {
        const bool branch_taken_0x3a13a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13A0u;
        // 0x3a13a4: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a13a0) {
            ctx->pc = 0x3A13B0u;
            goto label_3a13b0;
        }
    }
    ctx->pc = 0x3A13A8u;
label_3a13a8:
    // 0x3a13a8: 0xc10b208  jal         func_42C820
label_3a13ac:
    if (ctx->pc == 0x3A13ACu) {
        ctx->pc = 0x3A13ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13A8u;
        // 0x3a13ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A13B0u;
        goto label_3a13b0;
    }
    ctx->pc = 0x3A13A8u;
    SET_GPR_U32(ctx, 31, 0x3A13B0u);
    ctx->pc = 0x3A13ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A13A8u;
    // 0x3a13ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x3A13A8u, 0x3A13B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A13B0u;
label_3a13b0:
    // 0x3a13b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3a13b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a13b4:
    // 0x3a13b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3a13b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a13b8:
    // 0x3a13b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3a13b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a13bc:
    // 0x3a13bc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3a13bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a13c0:
    // 0x3a13c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a13c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a13c4:
    // 0x3a13c4: 0x3e00008  jr          $ra
label_3a13c8:
    if (ctx->pc == 0x3A13C8u) {
        ctx->pc = 0x3A13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13C4u;
        // 0x3a13c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A13CCu;
        goto label_3a13cc;
    }
    ctx->pc = 0x3A13C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A13C4u;
        // 0x3a13c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A13C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A13CCu;
label_3a13cc:
    // 0x3a13cc: 0x0  nop
    ctx->pc = 0x3a13ccu;
    // NOP
    ctx->pc = 0x3a13d0u;
}
