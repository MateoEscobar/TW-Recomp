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

// Function: sub_001C1228
// Address: 0x1c1228 - 0x1c1688
void sub_001C1228_0x1c1228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1228_0x1c1228");
#endif

    switch (ctx->pc) {
        case 0x1c1264u: goto label_1c1264;
        case 0x1c13a0u: goto label_1c13a0;
        case 0x1c13d8u: goto label_1c13d8;
        case 0x1c1500u: goto label_1c1500;
        default: break;
    }

    ctx->pc = 0x1c1228u;

    // 0x1c1228: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c1228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1c122c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1c1230: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1c1230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1c1234: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1c1234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1c1238: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1c1238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1c123c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x1c123cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x1c1240: 0x14a2010a  bne         $a1, $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x1C1240u;
    {
        const bool branch_taken_0x1c1240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C1244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1240u;
        // 0x1c1244: 0xffbf0090  sd          $ra, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1240) {
            ctx->pc = 0x1C166Cu;
            goto label_1c166c;
        }
    }
    ctx->pc = 0x1C1248u;
    // 0x1c1248: 0x10800108  beqz        $a0, . + 4 + (0x108 << 2)
    ctx->pc = 0x1C1248u;
    {
        const bool branch_taken_0x1c1248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1248u;
        // 0x1c124c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1248) {
            ctx->pc = 0x1C166Cu;
            goto label_1c166c;
        }
    }
    ctx->pc = 0x1C1250u;
    // 0x1c1250: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c1250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1254: 0x24502e50  addiu       $s0, $v0, 0x2E50
    ctx->pc = 0x1c1254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11856));
    // 0x1c1258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c125c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1C125Cu;
    SET_GPR_U32(ctx, 31, 0x1C1264u);
    ctx->pc = 0x1C1260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C125Cu;
    // 0x1c1260: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1C125Cu, 0x1C1264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1264u;
label_1c1264:
    // 0x1c1264: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c1264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c1268: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1c1268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
    // 0x1c126c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1c126cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1c1270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1274: 0xc446e8f8  lwc1        $f6, -0x1708($v0)
    ctx->pc = 0x1c1274u;
    { uint32_t bits = FAST_READ32(0x50E8F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c1278: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c1278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c127c: 0x3c013f18  lui         $at, 0x3F18
    ctx->pc = 0x1c127cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16152 << 16));
    // 0x1c1280: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1c1280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1c1284: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c1284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1288: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c1288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c128c: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1c128cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1c1290: 0xc467e8f4  lwc1        $f7, -0x170C($v1)
    ctx->pc = 0x1c1290u;
    { uint32_t bits = FAST_READ32(0x50E8F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1c1294: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1c1294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
    // 0x1c1298: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1c1298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1c129c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c129cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c12a0: 0x46023080  add.s       $f2, $f6, $f2
    ctx->pc = 0x1c12a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x1c12a4: 0x3c013c65  lui         $at, 0x3C65
    ctx->pc = 0x1c12a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15461 << 16));
    // 0x1c12a8: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1c12a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x1c12ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c12acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c12b0: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1c12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c12b4: 0x46013840  add.s       $f1, $f7, $f1
    ctx->pc = 0x1c12b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x1c12b8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c12b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c12bc: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1c12bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x1c12c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c12c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c12c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c12c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c12c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1c12c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c12cc: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x1c12ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c12d0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1c12d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12d4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1c12d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c12d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c12d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12dc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c12dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c12e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c12e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12e4: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1c12e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1c12e8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c12e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c12ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c12ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c12f0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1c12f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c12f4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1c12f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1c12f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c12f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c12fc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c12fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c1300: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1c1300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c1304: 0x460338c0  add.s       $f3, $f7, $f3
    ctx->pc = 0x1c1304u;
    ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x1c1308: 0x3c013dd7  lui         $at, 0x3DD7
    ctx->pc = 0x1c1308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15831 << 16));
    // 0x1c130c: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1c130cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1c1310: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c1310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1314: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x1c1314u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x1c1318: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1c1318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1c131c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c131cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c1320: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c1320u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c1324: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c1324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c1328: 0x46023880  add.s       $f2, $f7, $f2
    ctx->pc = 0x1c1328u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x1c132c: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1c132cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1c1330: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c1330u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c1334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1338: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1c1338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x1c133c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1c133cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1c1340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1344: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x1c1344u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x1c1348: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x1c1348u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c134c: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x1c134cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x1c1350: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x1c1350u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c1354: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x1c1354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x1c1358: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1c1358u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1c135c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c135cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c1360: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x1c1360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
    // 0x1c1364: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c1364u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c1368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c136c: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x1c136cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
    // 0x1c1370: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c1370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c1374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1378: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1c1378u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c137c: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x1c137cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c1380: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1c1380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1c1384: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x1c1384u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c1388: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1c1388u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c138c: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x1c138cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c1390: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1c1390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c1394: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1c1394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1c1398: 0xe7a70080  swc1        $f7, 0x80($sp)
    ctx->pc = 0x1c1398u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c139c: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x1c139cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1c13a0:
    // 0x1c13a0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1c13a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c13a4: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x1c13a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1c13a8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x1c13a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x1c13ac: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1c13acu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
    // 0x1c13b0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1c13b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1c13b4: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C13B4u;
    {
        const bool branch_taken_0x1c13b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C13B4u;
        // 0x1c13b8: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c13b4) {
            ctx->pc = 0x1C13A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c13a0;
        }
    }
    ctx->pc = 0x1C13BCu;
    // 0x1c13bc: 0x78690000  lq          $t1, 0x0($v1)
    ctx->pc = 0x1c13bcu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c13c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c13c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c13c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c13c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c13c8: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x1c13c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1c13cc: 0x7ce90000  sq          $t1, 0x0($a3)
    ctx->pc = 0x1c13ccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 9));
    // 0x1c13d0: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1C13D0u;
    SET_GPR_U32(ctx, 31, 0x1C13D8u);
    ctx->pc = 0x1C13D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C13D0u;
    // 0x1c13d4: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1C13D0u, 0x1C13D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C13D8u;
label_1c13d8:
    // 0x1c13d8: 0xc626e8f8  lwc1        $f6, -0x1708($s1)
    ctx->pc = 0x1c13d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294961400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1c13dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c13e0: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x1c13e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
    // 0x1c13e4: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1c13e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1c13e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c13e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c13ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c13ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c13f0: 0xc447e8fc  lwc1        $f7, -0x1704($v0)
    ctx->pc = 0x1c13f0u;
    { uint32_t bits = FAST_READ32(0x50E8FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1c13f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c13f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c13f8: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x1c13f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1c13fc: 0x3c013f38  lui         $at, 0x3F38
    ctx->pc = 0x1c13fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16184 << 16));
    // 0x1c1400: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1c1400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1c1404: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c1404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1408: 0x3c013f18  lui         $at, 0x3F18
    ctx->pc = 0x1c1408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16152 << 16));
    // 0x1c140c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1c140cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1c1410: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c1410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c1414: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1c1414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c1418: 0x46023880  add.s       $f2, $f7, $f2
    ctx->pc = 0x1c1418u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x1c141c: 0x3c013c65  lui         $at, 0x3C65
    ctx->pc = 0x1c141cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15461 << 16));
    // 0x1c1420: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1c1420u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x1c1424: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c1424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c1428: 0x46013040  add.s       $f1, $f6, $f1
    ctx->pc = 0x1c1428u;
    ctx->f[1] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x1c142c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1c142cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c1430: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1c1430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x1c1434: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c1434u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c1438: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c143c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1c143cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c1440: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x1c1440u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c1444: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1c1444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c1448: 0x3c013f6a  lui         $at, 0x3F6A
    ctx->pc = 0x1c1448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16234 << 16));
    // 0x1c144c: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1c144cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1c1450: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c1450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c1454: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1c1454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1c1458: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c1458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c145c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c145cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c1460: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1c1460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1c1464: 0x460338c0  add.s       $f3, $f7, $f3
    ctx->pc = 0x1c1464u;
    ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x1c1468: 0x3c013f6e  lui         $at, 0x3F6E
    ctx->pc = 0x1c1468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16238 << 16));
    // 0x1c146c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1c146cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1c1470: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c1470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1474: 0x46043100  add.s       $f4, $f6, $f4
    ctx->pc = 0x1c1474u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x1c1478: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1c1478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1c147c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1c147cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1c1480: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c1480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c1484: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c1484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c1488: 0x46023880  add.s       $f2, $f7, $f2
    ctx->pc = 0x1c1488u;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x1c148c: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x1c148cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x1c1490: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1c1490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1c1494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c1498: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1c1498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x1c149c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1c149cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1c14a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c14a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c14a4: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x1c14a4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x1c14a8: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x1c14a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c14ac: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x1c14acu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
    // 0x1c14b0: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x1c14b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1c14b4: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x1c14b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x1c14b8: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1c14b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1c14bc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c14bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c14c0: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x1c14c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
    // 0x1c14c4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c14c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c14c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c14c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c14cc: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x1c14ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
    // 0x1c14d0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c14d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1c14d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c14d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c14d8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1c14d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1c14dc: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x1c14dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1c14e0: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x1c14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1c14e4: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x1c14e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1c14e8: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x1c14e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c14ec: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x1c14ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c14f0: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1c14f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1c14f4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1c14f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1c14f8: 0xe7a70080  swc1        $f7, 0x80($sp)
    ctx->pc = 0x1c14f8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1c14fc: 0xe7a60088  swc1        $f6, 0x88($sp)
    ctx->pc = 0x1c14fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1c1500:
    // 0x1c1500: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x1c1500u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1504: 0x788a0010  lq          $t2, 0x10($a0)
    ctx->pc = 0x1c1504u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c1508: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x1c1508u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x1c150c: 0x7caa0010  sq          $t2, 0x10($a1)
    ctx->pc = 0x1c150cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 10));
    // 0x1c1510: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1c1510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1c1514: 0x1492fffa  bne         $a0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C1514u;
    {
        const bool branch_taken_0x1c1514 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x1C1518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1514u;
        // 0x1c1518: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1514) {
            ctx->pc = 0x1C1500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1500;
        }
    }
    ctx->pc = 0x1C151Cu;
    // 0x1c151c: 0xc621e8f8  lwc1        $f1, -0x1708($s1)
    ctx->pc = 0x1c151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294961400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1520: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c1520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c1524: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x1c1524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x1c1528: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c1528u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c152c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c152cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c1530: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1c1530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1c1534: 0xc660e8f4  lwc1        $f0, -0x170C($s3)
    ctx->pc = 0x1c1534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294961396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1538: 0x46040900  add.s       $f4, $f1, $f4
    ctx->pc = 0x1c1538u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1c153c: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1c153cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1c1540: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c1540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c1544: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c1544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c1548: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x1c1548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x1c154c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1c154cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1c1550: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c1550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c1554: 0x460d0340  add.s       $f13, $f0, $f13
    ctx->pc = 0x1c1554u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x1c1558: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1c1558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1c155c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1c155cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1c1560: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1c1560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1c1564: 0xe4442f74  swc1        $f4, 0x2F74($v0)
    ctx->pc = 0x1c1564u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F74u, _value); } while (0); }
    // 0x1c1568: 0x46050940  add.s       $f5, $f1, $f5
    ctx->pc = 0x1c1568u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1c156c: 0x46060180  add.s       $f6, $f0, $f6
    ctx->pc = 0x1c156cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x1c1570: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c1570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c1574: 0x3c013f1a  lui         $at, 0x3F1A
    ctx->pc = 0x1c1574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16154 << 16));
    // 0x1c1578: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1c1578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x1c157c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1c157cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1c1580: 0x3c013e1e  lui         $at, 0x3E1E
    ctx->pc = 0x1c1580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15902 << 16));
    // 0x1c1584: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1c1584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1c1588: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1c1588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x1c158c: 0xe44d2f78  swc1        $f13, 0x2F78($v0)
    ctx->pc = 0x1c158cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F78u, _value); } while (0); }
    // 0x1c1590: 0x460709c0  add.s       $f7, $f1, $f7
    ctx->pc = 0x1c1590u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x1c1594: 0x46080200  add.s       $f8, $f0, $f8
    ctx->pc = 0x1c1594u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x1c1598: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c1598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c159c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1c159cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1c15a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c15a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c15a4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1c15a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1c15a8: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1c15a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x1c15ac: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1c15acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1c15b0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1c15b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x1c15b4: 0xe4652f7c  swc1        $f5, 0x2F7C($v1)
    ctx->pc = 0x1c15b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F7Cu, _value); } while (0); }
    // 0x1c15b8: 0x46090a40  add.s       $f9, $f1, $f9
    ctx->pc = 0x1c15b8u;
    ctx->f[9] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x1c15bc: 0xe4462f80  swc1        $f6, 0x2F80($v0)
    ctx->pc = 0x1c15bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F80u, _value); } while (0); }
    // 0x1c15c0: 0x460a0280  add.s       $f10, $f0, $f10
    ctx->pc = 0x1c15c0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x1c15c4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1c15c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1c15c8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c15cc: 0x3c013f10  lui         $at, 0x3F10
    ctx->pc = 0x1c15ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16144 << 16));
    // 0x1c15d0: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1c15d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1c15d4: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x1c15d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x1c15d8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1c15d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1c15dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c15dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c15e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c15e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c15e4: 0xe4672f84  swc1        $f7, 0x2F84($v1)
    ctx->pc = 0x1c15e4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F84u, _value); } while (0); }
    // 0x1c15e8: 0x460b0ac0  add.s       $f11, $f1, $f11
    ctx->pc = 0x1c15e8u;
    ctx->f[11] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x1c15ec: 0xe4482f88  swc1        $f8, 0x2F88($v0)
    ctx->pc = 0x1c15ecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F88u, _value); } while (0); }
    // 0x1c15f0: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x1c15f0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x1c15f4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1c15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1c15f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c15fc: 0x3c013f22  lui         $at, 0x3F22
    ctx->pc = 0x1c15fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16162 << 16));
    // 0x1c1600: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1c1600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1c1604: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c1604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c1608: 0x3c013dae  lui         $at, 0x3DAE
    ctx->pc = 0x1c1608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15790 << 16));
    // 0x1c160c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1c160cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1c1610: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c1610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c1614: 0xe4692f8c  swc1        $f9, 0x2F8C($v1)
    ctx->pc = 0x1c1614u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F8Cu, _value); } while (0); }
    // 0x1c1618: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c1618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c161c: 0xe44a2f90  swc1        $f10, 0x2F90($v0)
    ctx->pc = 0x1c161cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F90u, _value); } while (0); }
    // 0x1c1620: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1c1620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1c1624: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c1624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c1628: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1c1628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1c162c: 0xe46b2f9c  swc1        $f11, 0x2F9C($v1)
    ctx->pc = 0x1c162cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F9Cu, _value); } while (0); }
    // 0x1c1630: 0xe44c2fa0  swc1        $f12, 0x2FA0($v0)
    ctx->pc = 0x1c1630u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA0u, _value); } while (0); }
    // 0x1c1634: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1c1634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1c1638: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c1638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c163c: 0xe4602fa8  swc1        $f0, 0x2FA8($v1)
    ctx->pc = 0x1c163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA8u, _value); } while (0); }
    // 0x1c1640: 0xe4412fac  swc1        $f1, 0x2FAC($v0)
    ctx->pc = 0x1c1640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FACu, _value); } while (0); }
    // 0x1c1644: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1c1644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1c1648: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c1648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c164c: 0xe46d2f70  swc1        $f13, 0x2F70($v1)
    ctx->pc = 0x1c164cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F70u, _value); } while (0); }
    // 0x1c1650: 0xe44b2f94  swc1        $f11, 0x2F94($v0)
    ctx->pc = 0x1c1650u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F94u, _value); } while (0); }
    // 0x1c1654: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x1c1654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x1c1658: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1c1658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1c165c: 0xe46c2f98  swc1        $f12, 0x2F98($v1)
    ctx->pc = 0x1c165cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622F98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622F98u, _value); } while (0); }
    // 0x1c1660: 0xe4412fa4  swc1        $f1, 0x2FA4($v0)
    ctx->pc = 0x1c1660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622FA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622FA4u, _value); } while (0); }
    // 0x1c1664: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x1c1664u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1668: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x1c1668u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_1c166c:
    // 0x1c166c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1c166cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c1670: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1c1670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c1674: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1c1674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c1678: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x1c1678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c167c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c1680: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1680u;
        // 0x1c1684: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1688u;
}
