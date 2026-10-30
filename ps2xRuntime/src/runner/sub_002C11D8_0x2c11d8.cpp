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

// Function: sub_002C11D8
// Address: 0x2c11d8 - 0x2c1338
void sub_002C11D8_0x2c11d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C11D8_0x2c11d8");
#endif

    switch (ctx->pc) {
        case 0x2c11d8u: goto label_2c11d8;
        case 0x2c11dcu: goto label_2c11dc;
        case 0x2c11e0u: goto label_2c11e0;
        case 0x2c11e4u: goto label_2c11e4;
        case 0x2c11e8u: goto label_2c11e8;
        case 0x2c11ecu: goto label_2c11ec;
        case 0x2c11f0u: goto label_2c11f0;
        case 0x2c11f4u: goto label_2c11f4;
        case 0x2c11f8u: goto label_2c11f8;
        case 0x2c11fcu: goto label_2c11fc;
        case 0x2c1200u: goto label_2c1200;
        case 0x2c1204u: goto label_2c1204;
        case 0x2c1208u: goto label_2c1208;
        case 0x2c120cu: goto label_2c120c;
        case 0x2c1210u: goto label_2c1210;
        case 0x2c1214u: goto label_2c1214;
        case 0x2c1218u: goto label_2c1218;
        case 0x2c121cu: goto label_2c121c;
        case 0x2c1220u: goto label_2c1220;
        case 0x2c1224u: goto label_2c1224;
        case 0x2c1228u: goto label_2c1228;
        case 0x2c122cu: goto label_2c122c;
        case 0x2c1230u: goto label_2c1230;
        case 0x2c1234u: goto label_2c1234;
        case 0x2c1238u: goto label_2c1238;
        case 0x2c123cu: goto label_2c123c;
        case 0x2c1240u: goto label_2c1240;
        case 0x2c1244u: goto label_2c1244;
        case 0x2c1248u: goto label_2c1248;
        case 0x2c124cu: goto label_2c124c;
        case 0x2c1250u: goto label_2c1250;
        case 0x2c1254u: goto label_2c1254;
        case 0x2c1258u: goto label_2c1258;
        case 0x2c125cu: goto label_2c125c;
        case 0x2c1260u: goto label_2c1260;
        case 0x2c1264u: goto label_2c1264;
        case 0x2c1268u: goto label_2c1268;
        case 0x2c126cu: goto label_2c126c;
        case 0x2c1270u: goto label_2c1270;
        case 0x2c1274u: goto label_2c1274;
        case 0x2c1278u: goto label_2c1278;
        case 0x2c127cu: goto label_2c127c;
        case 0x2c1280u: goto label_2c1280;
        case 0x2c1284u: goto label_2c1284;
        case 0x2c1288u: goto label_2c1288;
        case 0x2c128cu: goto label_2c128c;
        case 0x2c1290u: goto label_2c1290;
        case 0x2c1294u: goto label_2c1294;
        case 0x2c1298u: goto label_2c1298;
        case 0x2c129cu: goto label_2c129c;
        case 0x2c12a0u: goto label_2c12a0;
        case 0x2c12a4u: goto label_2c12a4;
        case 0x2c12a8u: goto label_2c12a8;
        case 0x2c12acu: goto label_2c12ac;
        case 0x2c12b0u: goto label_2c12b0;
        case 0x2c12b4u: goto label_2c12b4;
        case 0x2c12b8u: goto label_2c12b8;
        case 0x2c12bcu: goto label_2c12bc;
        case 0x2c12c0u: goto label_2c12c0;
        case 0x2c12c4u: goto label_2c12c4;
        case 0x2c12c8u: goto label_2c12c8;
        case 0x2c12ccu: goto label_2c12cc;
        case 0x2c12d0u: goto label_2c12d0;
        case 0x2c12d4u: goto label_2c12d4;
        case 0x2c12d8u: goto label_2c12d8;
        case 0x2c12dcu: goto label_2c12dc;
        case 0x2c12e0u: goto label_2c12e0;
        case 0x2c12e4u: goto label_2c12e4;
        case 0x2c12e8u: goto label_2c12e8;
        case 0x2c12ecu: goto label_2c12ec;
        case 0x2c12f0u: goto label_2c12f0;
        case 0x2c12f4u: goto label_2c12f4;
        case 0x2c12f8u: goto label_2c12f8;
        case 0x2c12fcu: goto label_2c12fc;
        case 0x2c1300u: goto label_2c1300;
        case 0x2c1304u: goto label_2c1304;
        case 0x2c1308u: goto label_2c1308;
        case 0x2c130cu: goto label_2c130c;
        case 0x2c1310u: goto label_2c1310;
        case 0x2c1314u: goto label_2c1314;
        case 0x2c1318u: goto label_2c1318;
        case 0x2c131cu: goto label_2c131c;
        case 0x2c1320u: goto label_2c1320;
        case 0x2c1324u: goto label_2c1324;
        case 0x2c1328u: goto label_2c1328;
        case 0x2c132cu: goto label_2c132c;
        case 0x2c1330u: goto label_2c1330;
        case 0x2c1334u: goto label_2c1334;
        default: break;
    }

    ctx->pc = 0x2c11d8u;

label_2c11d8:
    // 0x2c11d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c11d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c11dc:
    // 0x2c11dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c11dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2c11e0:
    // 0x2c11e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c11e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2c11e4:
    // 0x2c11e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c11e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c11e8:
    // 0x2c11e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c11e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c11ec:
    // 0x2c11ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c11f0:
    // 0x2c11f0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c11f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c11f4:
    // 0x2c11f4: 0xc0e409a  jal         func_390268
label_2c11f8:
    if (ctx->pc == 0x2C11F8u) {
        ctx->pc = 0x2C11F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11F4u;
        // 0x2c11f8: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C11FCu;
        goto label_2c11fc;
    }
    ctx->pc = 0x2C11F4u;
    SET_GPR_U32(ctx, 31, 0x2C11FCu);
    ctx->pc = 0x2C11F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C11F4u;
    // 0x2c11f8: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C11F4u, 0x2C11FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C11FCu;
label_2c11fc:
    // 0x2c11fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2c11fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c1200:
    // 0x2c1200: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c1200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c1204:
    // 0x2c1204: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2c1204u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2c1208:
    // 0x2c1208: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2c1208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2c120c:
    // 0x2c120c: 0x40f809  jalr        $v0
label_2c1210:
    if (ctx->pc == 0x2C1210u) {
        ctx->pc = 0x2C1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C120Cu;
        // 0x2c1210: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1214u;
        goto label_2c1214;
    }
    ctx->pc = 0x2C120Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C1214u);
        ctx->pc = 0x2C1210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C120Cu;
        // 0x2c1210: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C120Cu, 0x2C1214u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C1214u;
label_2c1214:
    // 0x2c1214: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2c1214u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c1218:
    // 0x2c1218: 0x8630004c  lh          $s0, 0x4C($s1)
    ctx->pc = 0x2c1218u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 76)));
label_2c121c:
    // 0x2c121c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2c1220:
    if (ctx->pc == 0x2C1220u) {
        ctx->pc = 0x2C1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C121Cu;
        // 0x2c1220: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1224u;
        goto label_2c1224;
    }
    ctx->pc = 0x2C121Cu;
    {
        const bool branch_taken_0x2c121c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C121Cu;
        // 0x2c1220: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c121c) {
            ctx->pc = 0x2C1238u;
            goto label_2c1238;
        }
    }
    ctx->pc = 0x2C1224u;
label_2c1224:
    // 0x2c1224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1228:
    // 0x2c1228: 0x5202001c  beql        $s0, $v0, . + 4 + (0x1C << 2)
label_2c122c:
    if (ctx->pc == 0x2C122Cu) {
        ctx->pc = 0x2C122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1228u;
        // 0x2c122c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1230u;
        goto label_2c1230;
    }
    ctx->pc = 0x2C1228u;
    {
        const bool branch_taken_0x2c1228 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c1228) {
            ctx->pc = 0x2C122Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1228u;
            // 0x2c122c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C129Cu;
            goto label_2c129c;
        }
    }
    ctx->pc = 0x2C1230u;
label_2c1230:
    // 0x2c1230: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2c1234:
    if (ctx->pc == 0x2C1234u) {
        ctx->pc = 0x2C1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1230u;
        // 0x2c1234: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1238u;
        goto label_2c1238;
    }
    ctx->pc = 0x2C1230u;
    {
        const bool branch_taken_0x2c1230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1230u;
        // 0x2c1234: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1230) {
            ctx->pc = 0x2C1320u;
            goto label_2c1320;
        }
    }
    ctx->pc = 0x2C1238u;
label_2c1238:
    // 0x2c1238: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2c1238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2c123c:
    // 0x2c123c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c123cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1240:
    // 0x2c1240: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c1240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2c1244:
    // 0x2c1244: 0xc0a367c  jal         func_28D9F0
label_2c1248:
    if (ctx->pc == 0x2C1248u) {
        ctx->pc = 0x2C1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1244u;
        // 0x2c1248: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C124Cu;
        goto label_2c124c;
    }
    ctx->pc = 0x2C1244u;
    SET_GPR_U32(ctx, 31, 0x2C124Cu);
    ctx->pc = 0x2C1248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1244u;
    // 0x2c1248: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C1244u, 0x2C124Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C124Cu;
label_2c124c:
    // 0x2c124c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c124cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1250:
    // 0x2c1250: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2c1254:
    if (ctx->pc == 0x2C1254u) {
        ctx->pc = 0x2C1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1250u;
        // 0x2c1254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1258u;
        goto label_2c1258;
    }
    ctx->pc = 0x2C1250u;
    {
        const bool branch_taken_0x2c1250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1250u;
        // 0x2c1254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1250) {
            ctx->pc = 0x2C1294u;
            goto label_2c1294;
        }
    }
    ctx->pc = 0x2C1258u;
label_2c1258:
    // 0x2c1258: 0xc10587a  jal         func_4161E8
label_2c125c:
    if (ctx->pc == 0x2C125Cu) {
        ctx->pc = 0x2C125Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1258u;
        // 0x2c125c: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1260u;
        goto label_2c1260;
    }
    ctx->pc = 0x2C1258u;
    SET_GPR_U32(ctx, 31, 0x2C1260u);
    ctx->pc = 0x2C125Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1258u;
    // 0x2c125c: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C1258u, 0x2C1260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1260u;
label_2c1260:
    // 0x2c1260: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2c1260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2c1264:
    // 0x2c1264: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c1264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c1268:
    // 0x2c1268: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2c1268u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2c126c:
    // 0x2c126c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c126cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c1270:
    // 0x2c1270: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c1270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2c1274:
    // 0x2c1274: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c1278:
    // 0x2c1278: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c1278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c127c:
    // 0x2c127c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c127cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c1280:
    // 0x2c1280: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c1280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1284:
    // 0x2c1284: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2c1284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c1288:
    // 0x2c1288: 0xc0bee7a  jal         func_2FB9E8
label_2c128c:
    if (ctx->pc == 0x2C128Cu) {
        ctx->pc = 0x2C128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1288u;
        // 0x2c128c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1290u;
        goto label_2c1290;
    }
    ctx->pc = 0x2C1288u;
    SET_GPR_U32(ctx, 31, 0x2C1290u);
    ctx->pc = 0x2C128Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1288u;
    // 0x2c128c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C1288u, 0x2C1290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1290u;
label_2c1290:
    // 0x2c1290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c1290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c1294:
    // 0x2c1294: 0x10000021  b           . + 4 + (0x21 << 2)
label_2c1298:
    if (ctx->pc == 0x2C1298u) {
        ctx->pc = 0x2C1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1294u;
        // 0x2c1298: 0xa622004c  sh          $v0, 0x4C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C129Cu;
        goto label_2c129c;
    }
    ctx->pc = 0x2C1294u;
    {
        const bool branch_taken_0x2c1294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1294u;
        // 0x2c1298: 0xa622004c  sh          $v0, 0x4C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 76), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1294) {
            ctx->pc = 0x2C131Cu;
            goto label_2c131c;
        }
    }
    ctx->pc = 0x2C129Cu;
label_2c129c:
    // 0x2c129c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2c129cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2c12a0:
    // 0x2c12a0: 0x5c60001f  bgtzl       $v1, . + 4 + (0x1F << 2)
label_2c12a4:
    if (ctx->pc == 0x2C12A4u) {
        ctx->pc = 0x2C12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12A0u;
        // 0x2c12a4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C12A8u;
        goto label_2c12a8;
    }
    ctx->pc = 0x2C12A0u;
    {
        const bool branch_taken_0x2c12a0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2c12a0) {
            ctx->pc = 0x2C12A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C12A0u;
            // 0x2c12a4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1320u;
            goto label_2c1320;
        }
    }
    ctx->pc = 0x2C12A8u;
label_2c12a8:
    // 0x2c12a8: 0xc0b81f4  jal         func_2E07D0
label_2c12ac:
    if (ctx->pc == 0x2C12ACu) {
        ctx->pc = 0x2C12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12A8u;
        // 0x2c12ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C12B0u;
        goto label_2c12b0;
    }
    ctx->pc = 0x2C12A8u;
    SET_GPR_U32(ctx, 31, 0x2C12B0u);
    ctx->pc = 0x2C12ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C12A8u;
    // 0x2c12ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07D0u, 0x2C12A8u, 0x2C12B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C12B0u;
label_2c12b0:
    // 0x2c12b0: 0x1450001b  bne         $v0, $s0, . + 4 + (0x1B << 2)
label_2c12b4:
    if (ctx->pc == 0x2C12B4u) {
        ctx->pc = 0x2C12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12B0u;
        // 0x2c12b4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C12B8u;
        goto label_2c12b8;
    }
    ctx->pc = 0x2C12B0u;
    {
        const bool branch_taken_0x2c12b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2C12B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12B0u;
        // 0x2c12b4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12b0) {
            ctx->pc = 0x2C1320u;
            goto label_2c1320;
        }
    }
    ctx->pc = 0x2C12B8u;
label_2c12b8:
    // 0x2c12b8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2c12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2c12bc:
    // 0x2c12bc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x2c12bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2c12c0:
    // 0x2c12c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c12c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2c12c4:
    // 0x2c12c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c12c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c12c8:
    // 0x2c12c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c12cc:
    // 0x2c12cc: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2c12ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2c12d0:
    // 0x2c12d0: 0xc0a367c  jal         func_28D9F0
label_2c12d4:
    if (ctx->pc == 0x2C12D4u) {
        ctx->pc = 0x2C12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12D0u;
        // 0x2c12d4: 0xae250038  sw          $a1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C12D8u;
        goto label_2c12d8;
    }
    ctx->pc = 0x2C12D0u;
    SET_GPR_U32(ctx, 31, 0x2C12D8u);
    ctx->pc = 0x2C12D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C12D0u;
    // 0x2c12d4: 0xae250038  sw          $a1, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C12D0u, 0x2C12D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C12D8u;
label_2c12d8:
    // 0x2c12d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c12d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c12dc:
    // 0x2c12dc: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_2c12e0:
    if (ctx->pc == 0x2C12E0u) {
        ctx->pc = 0x2C12E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12DCu;
        // 0x2c12e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C12E4u;
        goto label_2c12e4;
    }
    ctx->pc = 0x2C12DCu;
    {
        const bool branch_taken_0x2c12dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c12dc) {
            ctx->pc = 0x2C12E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C12DCu;
            // 0x2c12e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C1320u;
            goto label_2c1320;
        }
    }
    ctx->pc = 0x2C12E4u;
label_2c12e4:
    // 0x2c12e4: 0xc10587a  jal         func_4161E8
label_2c12e8:
    if (ctx->pc == 0x2C12E8u) {
        ctx->pc = 0x2C12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12E4u;
        // 0x2c12e8: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C12ECu;
        goto label_2c12ec;
    }
    ctx->pc = 0x2C12E4u;
    SET_GPR_U32(ctx, 31, 0x2C12ECu);
    ctx->pc = 0x2C12E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C12E4u;
    // 0x2c12e8: 0x8e240038  lw          $a0, 0x38($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C12E4u, 0x2C12ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C12ECu;
label_2c12ec:
    // 0x2c12ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2c12ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2c12f0:
    // 0x2c12f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c12f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c12f4:
    // 0x2c12f4: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2c12f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2c12f8:
    // 0x2c12f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c12f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c12fc:
    // 0x2c12fc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c12fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2c1300:
    // 0x2c1300: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c1300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c1304:
    // 0x2c1304: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c1304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c1308:
    // 0x2c1308: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c1308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c130c:
    // 0x2c130c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c130cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1310:
    // 0x2c1310: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2c1310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c1314:
    // 0x2c1314: 0xc0bee7a  jal         func_2FB9E8
label_2c1318:
    if (ctx->pc == 0x2C1318u) {
        ctx->pc = 0x2C1318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1314u;
        // 0x2c1318: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C131Cu;
        goto label_2c131c;
    }
    ctx->pc = 0x2C1314u;
    SET_GPR_U32(ctx, 31, 0x2C131Cu);
    ctx->pc = 0x2C1318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1314u;
    // 0x2c1318: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C1314u, 0x2C131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C131Cu;
label_2c131c:
    // 0x2c131c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c131cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c1320:
    // 0x2c1320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c1324:
    // 0x2c1324: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c1324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c1328:
    // 0x2c1328: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c1328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c132c:
    // 0x2c132c: 0x3e00008  jr          $ra
label_2c1330:
    if (ctx->pc == 0x2C1330u) {
        ctx->pc = 0x2C1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C132Cu;
        // 0x2c1330: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1334u;
        goto label_2c1334;
    }
    ctx->pc = 0x2C132Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C132Cu;
        // 0x2c1330: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C132Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1334u;
label_2c1334:
    // 0x2c1334: 0x0  nop
    ctx->pc = 0x2c1334u;
    // NOP
    ctx->pc = 0x2c1338u;
}
