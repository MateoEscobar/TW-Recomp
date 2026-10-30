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

// Function: sub_004D1240
// Address: 0x4d1240 - 0x4d1db8
void sub_004D1240_0x4d1240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1240_0x4d1240");
#endif

    switch (ctx->pc) {
        case 0x4d1320u: goto label_4d1320;
        case 0x4d1358u: goto label_4d1358;
        case 0x4d18b4u: goto label_4d18b4;
        default: break;
    }

    ctx->pc = 0x4d1240u;

    // 0x4d1240: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x4d1240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x4d1244: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x4d1244u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x4d1248: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x4d1248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x4d124c: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x4d124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x4d1250: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d1250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1254: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x4d1254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x4d1258: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4d1258u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d125c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x4d125cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x4d1260: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x4d1260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x4d1264: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x4d1264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4d1268: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x4d1268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x4d126c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x4d126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x4d1270: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4d1270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x4d1274: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x4d1274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x4d1278: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x4d1278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x4d127c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x4d127cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x4d1280: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x4d1280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x4d1284: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x4d1284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x4d1288: 0x2f220004  sltiu       $v0, $t9, 0x4
    ctx->pc = 0x4d1288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4d128c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x4d128cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x4d1290: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D1290u;
    {
        const bool branch_taken_0x4d1290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1290u;
        // 0x4d1294: 0x8e980000  lw          $t8, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1290) {
            ctx->pc = 0x4D12A8u;
            goto label_4d12a8;
        }
    }
    ctx->pc = 0x4D1298u;
    // 0x4d1298: 0x330e000f  andi        $t6, $t8, 0xF
    ctx->pc = 0x4d1298u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)15);
    // 0x4d129c: 0x2739fffc  addiu       $t9, $t9, -0x4
    ctx->pc = 0x4d129cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967292));
    // 0x4d12a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D12A0u;
    {
        const bool branch_taken_0x4d12a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D12A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D12A0u;
        // 0x4d12a4: 0x18c102  srl         $t8, $t8, 4 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d12a0) {
            ctx->pc = 0x4D12CCu;
            goto label_4d12cc;
        }
    }
    ctx->pc = 0x4D12A8u;
label_4d12a8:
    // 0x4d12a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d12a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d12ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d12acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d12b0: 0x791823  subu        $v1, $v1, $t9
    ctx->pc = 0x4d12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x4d12b4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d12b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d12b8: 0x3241004  sllv        $v0, $a0, $t9
    ctx->pc = 0x4d12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 25) & 0x1F));
    // 0x4d12bc: 0x3021025  or          $v0, $t8, $v0
    ctx->pc = 0x4d12bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) | GPR_U64(ctx, 2));
    // 0x4d12c0: 0x2739001c  addiu       $t9, $t9, 0x1C
    ctx->pc = 0x4d12c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 28));
    // 0x4d12c4: 0x64c006  srlv        $t8, $a0, $v1
    ctx->pc = 0x4d12c4u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x4d12c8: 0x304e000f  andi        $t6, $v0, 0xF
    ctx->pc = 0x4d12c8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_4d12cc:
    // 0x4d12cc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4d12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4d12d0: 0x25c4ffff  addiu       $a0, $t6, -0x1
    ctx->pc = 0x4d12d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x4d12d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x4d12d8: 0xa3a30044  sb          $v1, 0x44($sp)
    ctx->pc = 0x4d12d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d12dc: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x4d12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4d12e0: 0x27a90044  addiu       $t1, $sp, 0x44
    ctx->pc = 0x4d12e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x4d12e4: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x4d12e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4d12e8: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x4d12e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x4d12ec: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4d12ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4d12f0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x4d12f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4d12f4: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x4d12f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4d12f8: 0x26403  sra         $t4, $v0, 16
    ctx->pc = 0x4d12f8u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4d12fc: 0xa1230001  sb          $v1, 0x1($t1)
    ctx->pc = 0x4d12fcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d1300: 0x27ab004a  addiu       $t3, $sp, 0x4A
    ctx->pc = 0x4d1300u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 74));
    // 0x4d1304: 0xa1240002  sb          $a0, 0x2($t1)
    ctx->pc = 0x4d1304u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x4d1308: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x4d1308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d130c: 0xa1250003  sb          $a1, 0x3($t1)
    ctx->pc = 0x4d130cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x4d1310: 0x2dc20002  sltiu       $v0, $t6, 0x2
    ctx->pc = 0x4d1310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d1314: 0xa1260004  sb          $a2, 0x4($t1)
    ctx->pc = 0x4d1314u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x4d1318: 0x14400164  bnez        $v0, . + 4 + (0x164 << 2)
    ctx->pc = 0x4D1318u;
    {
        const bool branch_taken_0x4d1318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1318u;
        // 0x4d131c: 0xa1270005  sb          $a3, 0x5($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1318) {
            ctx->pc = 0x4D18ACu;
            goto label_4d18ac;
        }
    }
    ctx->pc = 0x4D1320u;
label_4d1320:
    // 0x4d1320: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x4d1320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4d1324: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4d1324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d1328: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x4d1328u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4d132c: 0xeb182b  sltu        $v1, $a3, $t3
    ctx->pc = 0x4d132cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4d1330: 0x1060015b  beqz        $v1, . + 4 + (0x15B << 2)
    ctx->pc = 0x4D1330u;
    {
        const bool branch_taken_0x4d1330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1330u;
        // 0x4d1334: 0xc7843  sra         $t7, $t4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1330) {
            ctx->pc = 0x4D18A0u;
            goto label_4d18a0;
        }
    }
    ctx->pc = 0x4D1338u;
    // 0x4d1338: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4d1338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x4d133c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4d133cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4d1340: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x4d1340u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4d1344: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d1344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d1348: 0x625006  srlv        $t2, $v0, $v1
    ctx->pc = 0x4d1348u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4d134c: 0x250dffe0  addiu       $t5, $t0, -0x20
    ctx->pc = 0x4d134cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
    // 0x4d1350: 0x90e60000  lbu         $a2, 0x0($a3)
    ctx->pc = 0x4d1350u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d1354: 0x0  nop
    ctx->pc = 0x4d1354u;
    // NOP
label_4d1358:
    // 0x4d1358: 0x50c0014e  beql        $a2, $zero, . + 4 + (0x14E << 2)
    ctx->pc = 0x4D1358u;
    {
        const bool branch_taken_0x4d1358 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d1358) {
            ctx->pc = 0x4D135Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D1358u;
            // 0x4d135c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D1894u;
            goto label_4d1894;
        }
    }
    ctx->pc = 0x4D1360u;
    // 0x4d1360: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1360u;
    {
        const bool branch_taken_0x4d1360 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1360u;
        // 0x4d1364: 0x33050001  andi        $a1, $t8, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1360) {
            ctx->pc = 0x4D137Cu;
            goto label_4d137c;
        }
    }
    ctx->pc = 0x4D1368u;
    // 0x4d1368: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1368u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d136c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D136Cu;
    {
        const bool branch_taken_0x4d136c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D136Cu;
        // 0x4d1370: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d136c) {
            ctx->pc = 0x4D1394u;
            goto label_4d1394;
        }
    }
    ctx->pc = 0x4D1374u;
    // 0x4d1374: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x4D1374u;
    {
        const bool branch_taken_0x4d1374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1374u;
        // 0x4d1378: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1374) {
            ctx->pc = 0x4D1894u;
            goto label_4d1894;
        }
    }
    ctx->pc = 0x4D137Cu;
label_4d137c:
    // 0x4d137c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4d137cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1380: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1380u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1384: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1388: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4d1388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4d138c: 0x10400140  beqz        $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x4D138Cu;
    {
        const bool branch_taken_0x4d138c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D138Cu;
        // 0x4d1390: 0x5c042  srl         $t8, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d138c) {
            ctx->pc = 0x4D1890u;
            goto label_4d1890;
        }
    }
    ctx->pc = 0x4D1394u;
label_4d1394:
    // 0x4d1394: 0x30c30003  andi        $v1, $a2, 0x3
    ctx->pc = 0x4d1394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x4d1398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d1398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d139c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4D139Cu;
    {
        const bool branch_taken_0x4d139c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D13A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D139Cu;
        // 0x4d13a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d139c) {
            ctx->pc = 0x4D13E8u;
            goto label_4d13e8;
        }
    }
    ctx->pc = 0x4D13A4u;
    // 0x4d13a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D13A4u;
    {
        const bool branch_taken_0x4d13a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D13A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D13A4u;
        // 0x4d13a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d13a4) {
            ctx->pc = 0x4D13BCu;
            goto label_4d13bc;
        }
    }
    ctx->pc = 0x4D13ACu;
    // 0x4d13ac: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D13ACu;
    {
        const bool branch_taken_0x4d13ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D13B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D13ACu;
        // 0x4d13b0: 0x63082  srl         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d13ac) {
            ctx->pc = 0x4D13D4u;
            goto label_4d13d4;
        }
    }
    ctx->pc = 0x4D13B4u;
    // 0x4d13b4: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x4D13B4u;
    {
        const bool branch_taken_0x4d13b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D13B4u;
        // 0x4d13b8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d13b4) {
            ctx->pc = 0x4D1894u;
            goto label_4d1894;
        }
    }
    ctx->pc = 0x4D13BCu;
label_4d13bc:
    // 0x4d13bc: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4D13BCu;
    {
        const bool branch_taken_0x4d13bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D13C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D13BCu;
        // 0x4d13c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d13bc) {
            ctx->pc = 0x4D1438u;
            goto label_4d1438;
        }
    }
    ctx->pc = 0x4D13C4u;
    // 0x4d13c4: 0x1062010a  beq         $v1, $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x4D13C4u;
    {
        const bool branch_taken_0x4d13c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D13C4u;
        // 0x4d13c8: 0x328102b  sltu        $v0, $t9, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d13c4) {
            ctx->pc = 0x4D17F0u;
            goto label_4d17f0;
        }
    }
    ctx->pc = 0x4D13CCu;
    // 0x4d13cc: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x4D13CCu;
    {
        const bool branch_taken_0x4d13cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D13D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D13CCu;
        // 0x4d13d0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d13cc) {
            ctx->pc = 0x4D1894u;
            goto label_4d1894;
        }
    }
    ctx->pc = 0x4D13D4u;
label_4d13d4:
    // 0x4d13d4: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x4d13d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4d13d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d13dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d13e0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4D13E0u;
    {
        const bool branch_taken_0x4d13e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D13E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D13E0u;
        // 0x4d13e4: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d13e0) {
            ctx->pc = 0x4D1444u;
            goto label_4d1444;
        }
    }
    ctx->pc = 0x4D13E8u;
label_4d13e8:
    // 0x4d13e8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x4d13e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x4d13ec: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4d13ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d13f0: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x4d13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4d13f4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d13f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4d13f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d13fc: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x4d13fcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d1400: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d1400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d1404: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x4d1404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x4d1408: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x4d1408u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d140c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d140cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d1410: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4d1410u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4d1414: 0x24c2000c  addiu       $v0, $a2, 0xC
    ctx->pc = 0x4d1414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x4d1418: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d1418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4d141c: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x4d141cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d1420: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d1420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d1424: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4d1424u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4d1428: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d1428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d142c: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x4d142cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d1430: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x4D1430u;
    {
        const bool branch_taken_0x4d1430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1430u;
        // 0x4d1434: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1430) {
            ctx->pc = 0x4D1894u;
            goto label_4d1894;
        }
    }
    ctx->pc = 0x4D1438u;
label_4d1438:
    // 0x4d1438: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x4d1438u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d143c: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x4d143cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x4d1440: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4d1440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4d1444:
    // 0x4d1444: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1444u;
    {
        const bool branch_taken_0x4d1444 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1444u;
        // 0x4d1448: 0x33050001  andi        $a1, $t8, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1444) {
            ctx->pc = 0x4D1460u;
            goto label_4d1460;
        }
    }
    ctx->pc = 0x4D144Cu;
    // 0x4d144c: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d144cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1450: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1450u;
    {
        const bool branch_taken_0x4d1450 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1450u;
        // 0x4d1454: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1450) {
            ctx->pc = 0x4D1478u;
            goto label_4d1478;
        }
    }
    ctx->pc = 0x4D1458u;
    // 0x4d1458: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D1458u;
    {
        const bool branch_taken_0x4d1458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D145Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1458u;
        // 0x4d145c: 0x328102b  sltu        $v0, $t9, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1458) {
            ctx->pc = 0x4D1490u;
            goto label_4d1490;
        }
    }
    ctx->pc = 0x4D1460u;
label_4d1460:
    // 0x4d1460: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4d1460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1464: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1464u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1468: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d146c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4d146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4d1470: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1470u;
    {
        const bool branch_taken_0x4d1470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1470u;
        // 0x4d1474: 0x5c042  srl         $t8, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1470) {
            ctx->pc = 0x4D148Cu;
            goto label_4d148c;
        }
    }
    ctx->pc = 0x4D1478u;
label_4d1478:
    // 0x4d1478: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d1478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d147c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4d147cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4d1480: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d1480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d1484: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x4D1484u;
    {
        const bool branch_taken_0x4d1484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1484u;
        // 0x4d1488: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1484) {
            ctx->pc = 0x4D1528u;
            goto label_4d1528;
        }
    }
    ctx->pc = 0x4D148Cu;
label_4d148c:
    // 0x4d148c: 0x328102b  sltu        $v0, $t9, $t0
    ctx->pc = 0x4d148cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4d1490:
    // 0x4d1490: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1490u;
    {
        const bool branch_taken_0x4d1490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d1490) {
            ctx->pc = 0x4D1494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D1490u;
            // 0x4d1494: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D14B0u;
            goto label_4d14b0;
        }
    }
    ctx->pc = 0x4D1498u;
    // 0x4d1498: 0x30a1024  and         $v0, $t8, $t2
    ctx->pc = 0x4d1498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & GPR_U64(ctx, 10));
    // 0x4d149c: 0x328c823  subu        $t9, $t9, $t0
    ctx->pc = 0x4d149cu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x4d14a0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d14a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d14a4: 0x118c006  srlv        $t8, $t8, $t0
    ctx->pc = 0x4d14a4u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 8) & 0x1F));
    // 0x4d14a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D14A8u;
    {
        const bool branch_taken_0x4d14a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D14ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D14A8u;
        // 0x4d14ac: 0x21c03  sra         $v1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d14a8) {
            ctx->pc = 0x4D14D4u;
            goto label_4d14d4;
        }
    }
    ctx->pc = 0x4D14B0u;
label_4d14b0:
    // 0x4d14b0: 0x1192023  subu        $a0, $t0, $t9
    ctx->pc = 0x4d14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x4d14b4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d14b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d14b8: 0x3221804  sllv        $v1, $v0, $t9
    ctx->pc = 0x4d14b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x4d14bc: 0x3031825  or          $v1, $t8, $v1
    ctx->pc = 0x4d14bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x4d14c0: 0x32dc823  subu        $t9, $t9, $t5
    ctx->pc = 0x4d14c0u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x4d14c4: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4d14c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4d14c8: 0x82c006  srlv        $t8, $v0, $a0
    ctx->pc = 0x4d14c8u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4d14cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d14ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d14d0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4d14d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_4d14d4:
    // 0x4d14d4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4d14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4d14d8: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4d14d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4d14dc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4d14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x4d14e0: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D14E0u;
    {
        const bool branch_taken_0x4d14e0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D14E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D14E0u;
        // 0x4d14e4: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d14e0) {
            ctx->pc = 0x4D1500u;
            goto label_4d1500;
        }
    }
    ctx->pc = 0x4D14E8u;
    // 0x4d14e8: 0x33050001  andi        $a1, $t8, 0x1
    ctx->pc = 0x4d14e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d14ec: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d14ecu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d14f0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D14F0u;
    {
        const bool branch_taken_0x4d14f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D14F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D14F0u;
        // 0x4d14f4: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d14f0) {
            ctx->pc = 0x4D1518u;
            goto label_4d1518;
        }
    }
    ctx->pc = 0x4D14F8u;
    // 0x4d14f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D14F8u;
    {
        const bool branch_taken_0x4d14f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D14FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D14F8u;
        // 0x4d14fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d14f8) {
            ctx->pc = 0x4D1524u;
            goto label_4d1524;
        }
    }
    ctx->pc = 0x4D1500u;
label_4d1500:
    // 0x4d1500: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4d1500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1504: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1504u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1508: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d150c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4d150cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4d1510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D1510u;
    {
        const bool branch_taken_0x4d1510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1510u;
        // 0x4d1514: 0x5c042  srl         $t8, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1510) {
            ctx->pc = 0x4D1520u;
            goto label_4d1520;
        }
    }
    ctx->pc = 0x4D1518u;
label_4d1518:
    // 0x4d1518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D1518u;
    {
        const bool branch_taken_0x4d1518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1518u;
        // 0x4d151c: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1518) {
            ctx->pc = 0x4D1524u;
            goto label_4d1524;
        }
    }
    ctx->pc = 0x4D1520u;
label_4d1520:
    // 0x4d1520: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4d1520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d1524:
    // 0x4d1524: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4d1524u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d1528:
    // 0x4d1528: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x4d1528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4d152c: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D152Cu;
    {
        const bool branch_taken_0x4d152c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D152Cu;
        // 0x4d1530: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d152c) {
            ctx->pc = 0x4D154Cu;
            goto label_4d154c;
        }
    }
    ctx->pc = 0x4D1534u;
    // 0x4d1534: 0x33050001  andi        $a1, $t8, 0x1
    ctx->pc = 0x4d1534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1538: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1538u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d153c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D153Cu;
    {
        const bool branch_taken_0x4d153c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D153Cu;
        // 0x4d1540: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d153c) {
            ctx->pc = 0x4D1564u;
            goto label_4d1564;
        }
    }
    ctx->pc = 0x4D1544u;
    // 0x4d1544: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D1544u;
    {
        const bool branch_taken_0x4d1544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1544u;
        // 0x4d1548: 0x328102b  sltu        $v0, $t9, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1544) {
            ctx->pc = 0x4D157Cu;
            goto label_4d157c;
        }
    }
    ctx->pc = 0x4D154Cu;
label_4d154c:
    // 0x4d154c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4d154cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1550: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1550u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1554: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1558: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4d1558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4d155c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D155Cu;
    {
        const bool branch_taken_0x4d155c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D155Cu;
        // 0x4d1560: 0x5c042  srl         $t8, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d155c) {
            ctx->pc = 0x4D1578u;
            goto label_4d1578;
        }
    }
    ctx->pc = 0x4D1564u;
label_4d1564:
    // 0x4d1564: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d1564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d1568: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4d1568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4d156c: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d156cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d1570: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x4D1570u;
    {
        const bool branch_taken_0x4d1570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1570u;
        // 0x4d1574: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1570) {
            ctx->pc = 0x4D1614u;
            goto label_4d1614;
        }
    }
    ctx->pc = 0x4D1578u;
label_4d1578:
    // 0x4d1578: 0x328102b  sltu        $v0, $t9, $t0
    ctx->pc = 0x4d1578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4d157c:
    // 0x4d157c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D157Cu;
    {
        const bool branch_taken_0x4d157c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d157c) {
            ctx->pc = 0x4D1580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D157Cu;
            // 0x4d1580: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D159Cu;
            goto label_4d159c;
        }
    }
    ctx->pc = 0x4D1584u;
    // 0x4d1584: 0x30a1024  and         $v0, $t8, $t2
    ctx->pc = 0x4d1584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & GPR_U64(ctx, 10));
    // 0x4d1588: 0x328c823  subu        $t9, $t9, $t0
    ctx->pc = 0x4d1588u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x4d158c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d158cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d1590: 0x118c006  srlv        $t8, $t8, $t0
    ctx->pc = 0x4d1590u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 8) & 0x1F));
    // 0x4d1594: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D1594u;
    {
        const bool branch_taken_0x4d1594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1594u;
        // 0x4d1598: 0x21c03  sra         $v1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1594) {
            ctx->pc = 0x4D15C0u;
            goto label_4d15c0;
        }
    }
    ctx->pc = 0x4D159Cu;
label_4d159c:
    // 0x4d159c: 0x1192023  subu        $a0, $t0, $t9
    ctx->pc = 0x4d159cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x4d15a0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d15a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d15a4: 0x3221804  sllv        $v1, $v0, $t9
    ctx->pc = 0x4d15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x4d15a8: 0x3031825  or          $v1, $t8, $v1
    ctx->pc = 0x4d15a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x4d15ac: 0x32dc823  subu        $t9, $t9, $t5
    ctx->pc = 0x4d15acu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x4d15b0: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4d15b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4d15b4: 0x82c006  srlv        $t8, $v0, $a0
    ctx->pc = 0x4d15b4u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4d15b8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d15b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d15bc: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4d15bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_4d15c0:
    // 0x4d15c0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4d15c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4d15c4: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4d15c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4d15c8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4d15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x4d15cc: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D15CCu;
    {
        const bool branch_taken_0x4d15cc = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D15D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D15CCu;
        // 0x4d15d0: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d15cc) {
            ctx->pc = 0x4D15ECu;
            goto label_4d15ec;
        }
    }
    ctx->pc = 0x4D15D4u;
    // 0x4d15d4: 0x33050001  andi        $a1, $t8, 0x1
    ctx->pc = 0x4d15d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d15d8: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d15d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d15dc: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D15DCu;
    {
        const bool branch_taken_0x4d15dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D15E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D15DCu;
        // 0x4d15e0: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d15dc) {
            ctx->pc = 0x4D1604u;
            goto label_4d1604;
        }
    }
    ctx->pc = 0x4D15E4u;
    // 0x4d15e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D15E4u;
    {
        const bool branch_taken_0x4d15e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D15E4u;
        // 0x4d15e8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d15e4) {
            ctx->pc = 0x4D1610u;
            goto label_4d1610;
        }
    }
    ctx->pc = 0x4D15ECu;
label_4d15ec:
    // 0x4d15ec: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4d15ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d15f0: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d15f0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d15f4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d15f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d15f8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4d15f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4d15fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D15FCu;
    {
        const bool branch_taken_0x4d15fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D15FCu;
        // 0x4d1600: 0x5c042  srl         $t8, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d15fc) {
            ctx->pc = 0x4D160Cu;
            goto label_4d160c;
        }
    }
    ctx->pc = 0x4D1604u;
label_4d1604:
    // 0x4d1604: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D1604u;
    {
        const bool branch_taken_0x4d1604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1604u;
        // 0x4d1608: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1604) {
            ctx->pc = 0x4D1610u;
            goto label_4d1610;
        }
    }
    ctx->pc = 0x4D160Cu;
label_4d160c:
    // 0x4d160c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4d160cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d1610:
    // 0x4d1610: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4d1610u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d1614:
    // 0x4d1614: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x4d1614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4d1618: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1618u;
    {
        const bool branch_taken_0x4d1618 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1618u;
        // 0x4d161c: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1618) {
            ctx->pc = 0x4D1638u;
            goto label_4d1638;
        }
    }
    ctx->pc = 0x4D1620u;
    // 0x4d1620: 0x33050001  andi        $a1, $t8, 0x1
    ctx->pc = 0x4d1620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1624: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1624u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1628: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1628u;
    {
        const bool branch_taken_0x4d1628 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1628u;
        // 0x4d162c: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1628) {
            ctx->pc = 0x4D1650u;
            goto label_4d1650;
        }
    }
    ctx->pc = 0x4D1630u;
    // 0x4d1630: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D1630u;
    {
        const bool branch_taken_0x4d1630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1630u;
        // 0x4d1634: 0x328102b  sltu        $v0, $t9, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1630) {
            ctx->pc = 0x4D1668u;
            goto label_4d1668;
        }
    }
    ctx->pc = 0x4D1638u;
label_4d1638:
    // 0x4d1638: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4d1638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d163c: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d163cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1640: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1644: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4d1644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4d1648: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1648u;
    {
        const bool branch_taken_0x4d1648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1648u;
        // 0x4d164c: 0x5c042  srl         $t8, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1648) {
            ctx->pc = 0x4D1664u;
            goto label_4d1664;
        }
    }
    ctx->pc = 0x4D1650u;
label_4d1650:
    // 0x4d1650: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d1650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d1654: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4d1654u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4d1658: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d1658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d165c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x4D165Cu;
    {
        const bool branch_taken_0x4d165c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D165Cu;
        // 0x4d1660: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d165c) {
            ctx->pc = 0x4D1700u;
            goto label_4d1700;
        }
    }
    ctx->pc = 0x4D1664u;
label_4d1664:
    // 0x4d1664: 0x328102b  sltu        $v0, $t9, $t0
    ctx->pc = 0x4d1664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4d1668:
    // 0x4d1668: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1668u;
    {
        const bool branch_taken_0x4d1668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d1668) {
            ctx->pc = 0x4D166Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D1668u;
            // 0x4d166c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D1688u;
            goto label_4d1688;
        }
    }
    ctx->pc = 0x4D1670u;
    // 0x4d1670: 0x30a1024  and         $v0, $t8, $t2
    ctx->pc = 0x4d1670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & GPR_U64(ctx, 10));
    // 0x4d1674: 0x328c823  subu        $t9, $t9, $t0
    ctx->pc = 0x4d1674u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x4d1678: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d1678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d167c: 0x118c006  srlv        $t8, $t8, $t0
    ctx->pc = 0x4d167cu;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 8) & 0x1F));
    // 0x4d1680: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D1680u;
    {
        const bool branch_taken_0x4d1680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1680u;
        // 0x4d1684: 0x21c03  sra         $v1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1680) {
            ctx->pc = 0x4D16ACu;
            goto label_4d16ac;
        }
    }
    ctx->pc = 0x4D1688u;
label_4d1688:
    // 0x4d1688: 0x1192023  subu        $a0, $t0, $t9
    ctx->pc = 0x4d1688u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x4d168c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d168cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1690: 0x3221804  sllv        $v1, $v0, $t9
    ctx->pc = 0x4d1690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x4d1694: 0x3031825  or          $v1, $t8, $v1
    ctx->pc = 0x4d1694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x4d1698: 0x32dc823  subu        $t9, $t9, $t5
    ctx->pc = 0x4d1698u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x4d169c: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4d169cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4d16a0: 0x82c006  srlv        $t8, $v0, $a0
    ctx->pc = 0x4d16a0u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4d16a4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d16a8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4d16a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_4d16ac:
    // 0x4d16ac: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4d16acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4d16b0: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4d16b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4d16b4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4d16b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x4d16b8: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D16B8u;
    {
        const bool branch_taken_0x4d16b8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D16BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D16B8u;
        // 0x4d16bc: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d16b8) {
            ctx->pc = 0x4D16D8u;
            goto label_4d16d8;
        }
    }
    ctx->pc = 0x4D16C0u;
    // 0x4d16c0: 0x33050001  andi        $a1, $t8, 0x1
    ctx->pc = 0x4d16c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d16c4: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d16c4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d16c8: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D16C8u;
    {
        const bool branch_taken_0x4d16c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D16CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D16C8u;
        // 0x4d16cc: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d16c8) {
            ctx->pc = 0x4D16F0u;
            goto label_4d16f0;
        }
    }
    ctx->pc = 0x4D16D0u;
    // 0x4d16d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D16D0u;
    {
        const bool branch_taken_0x4d16d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D16D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D16D0u;
        // 0x4d16d4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d16d0) {
            ctx->pc = 0x4D16FCu;
            goto label_4d16fc;
        }
    }
    ctx->pc = 0x4D16D8u;
label_4d16d8:
    // 0x4d16d8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4d16d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d16dc: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d16dcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d16e0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d16e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d16e4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4d16e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4d16e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D16E8u;
    {
        const bool branch_taken_0x4d16e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D16E8u;
        // 0x4d16ec: 0x5c042  srl         $t8, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d16e8) {
            ctx->pc = 0x4D16F8u;
            goto label_4d16f8;
        }
    }
    ctx->pc = 0x4D16F0u;
label_4d16f0:
    // 0x4d16f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D16F0u;
    {
        const bool branch_taken_0x4d16f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D16F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D16F0u;
        // 0x4d16f4: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d16f0) {
            ctx->pc = 0x4D16FCu;
            goto label_4d16fc;
        }
    }
    ctx->pc = 0x4D16F8u;
label_4d16f8:
    // 0x4d16f8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4d16f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d16fc:
    // 0x4d16fc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4d16fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d1700:
    // 0x4d1700: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x4d1700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4d1704: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1704u;
    {
        const bool branch_taken_0x4d1704 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1704u;
        // 0x4d1708: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1704) {
            ctx->pc = 0x4D1724u;
            goto label_4d1724;
        }
    }
    ctx->pc = 0x4D170Cu;
    // 0x4d170c: 0x33050001  andi        $a1, $t8, 0x1
    ctx->pc = 0x4d170cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1710: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1710u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1714: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1714u;
    {
        const bool branch_taken_0x4d1714 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1714u;
        // 0x4d1718: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1714) {
            ctx->pc = 0x4D173Cu;
            goto label_4d173c;
        }
    }
    ctx->pc = 0x4D171Cu;
    // 0x4d171c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D171Cu;
    {
        const bool branch_taken_0x4d171c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D171Cu;
        // 0x4d1720: 0x328102b  sltu        $v0, $t9, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d171c) {
            ctx->pc = 0x4D1754u;
            goto label_4d1754;
        }
    }
    ctx->pc = 0x4D1724u;
label_4d1724:
    // 0x4d1724: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4d1724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1728: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1728u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d172c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d172cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1730: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4d1730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4d1734: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1734u;
    {
        const bool branch_taken_0x4d1734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1734u;
        // 0x4d1738: 0x5c042  srl         $t8, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1734) {
            ctx->pc = 0x4D1750u;
            goto label_4d1750;
        }
    }
    ctx->pc = 0x4D173Cu;
label_4d173c:
    // 0x4d173c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x4d173cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d1740: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4d1740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4d1744: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d1744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d1748: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x4D1748u;
    {
        const bool branch_taken_0x4d1748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1748u;
        // 0x4d174c: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1748) {
            ctx->pc = 0x4D1894u;
            goto label_4d1894;
        }
    }
    ctx->pc = 0x4D1750u;
label_4d1750:
    // 0x4d1750: 0x328102b  sltu        $v0, $t9, $t0
    ctx->pc = 0x4d1750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4d1754:
    // 0x4d1754: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1754u;
    {
        const bool branch_taken_0x4d1754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d1754) {
            ctx->pc = 0x4D1758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D1754u;
            // 0x4d1758: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D1774u;
            goto label_4d1774;
        }
    }
    ctx->pc = 0x4D175Cu;
    // 0x4d175c: 0x30a1024  and         $v0, $t8, $t2
    ctx->pc = 0x4d175cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & GPR_U64(ctx, 10));
    // 0x4d1760: 0x328c823  subu        $t9, $t9, $t0
    ctx->pc = 0x4d1760u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x4d1764: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d1764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d1768: 0x118c006  srlv        $t8, $t8, $t0
    ctx->pc = 0x4d1768u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 8) & 0x1F));
    // 0x4d176c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D176Cu;
    {
        const bool branch_taken_0x4d176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D176Cu;
        // 0x4d1770: 0x21c03  sra         $v1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d176c) {
            ctx->pc = 0x4D1798u;
            goto label_4d1798;
        }
    }
    ctx->pc = 0x4D1774u;
label_4d1774:
    // 0x4d1774: 0x1192023  subu        $a0, $t0, $t9
    ctx->pc = 0x4d1774u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x4d1778: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d177c: 0x3221804  sllv        $v1, $v0, $t9
    ctx->pc = 0x4d177cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x4d1780: 0x3031825  or          $v1, $t8, $v1
    ctx->pc = 0x4d1780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x4d1784: 0x32dc823  subu        $t9, $t9, $t5
    ctx->pc = 0x4d1784u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x4d1788: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4d1788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4d178c: 0x82c006  srlv        $t8, $v0, $a0
    ctx->pc = 0x4d178cu;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4d1790: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d1790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d1794: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4d1794u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_4d1798:
    // 0x4d1798: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4d1798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4d179c: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4d179cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4d17a0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4d17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x4d17a4: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D17A4u;
    {
        const bool branch_taken_0x4d17a4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D17A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D17A4u;
        // 0x4d17a8: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d17a4) {
            ctx->pc = 0x4D17C4u;
            goto label_4d17c4;
        }
    }
    ctx->pc = 0x4D17ACu;
    // 0x4d17ac: 0x33050001  andi        $a1, $t8, 0x1
    ctx->pc = 0x4d17acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d17b0: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d17b0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d17b4: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D17B4u;
    {
        const bool branch_taken_0x4d17b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D17B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D17B4u;
        // 0x4d17b8: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d17b4) {
            ctx->pc = 0x4D17DCu;
            goto label_4d17dc;
        }
    }
    ctx->pc = 0x4D17BCu;
    // 0x4d17bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D17BCu;
    {
        const bool branch_taken_0x4d17bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D17C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D17BCu;
        // 0x4d17c0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d17bc) {
            ctx->pc = 0x4D17E8u;
            goto label_4d17e8;
        }
    }
    ctx->pc = 0x4D17C4u;
label_4d17c4:
    // 0x4d17c4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4d17c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d17c8: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d17c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d17cc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d17ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d17d0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4d17d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4d17d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D17D4u;
    {
        const bool branch_taken_0x4d17d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D17D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D17D4u;
        // 0x4d17d8: 0x5c042  srl         $t8, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d17d4) {
            ctx->pc = 0x4D17E4u;
            goto label_4d17e4;
        }
    }
    ctx->pc = 0x4D17DCu;
label_4d17dc:
    // 0x4d17dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D17DCu;
    {
        const bool branch_taken_0x4d17dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D17E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D17DCu;
        // 0x4d17e0: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d17dc) {
            ctx->pc = 0x4D17E8u;
            goto label_4d17e8;
        }
    }
    ctx->pc = 0x4D17E4u;
label_4d17e4:
    // 0x4d17e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4d17e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d17e8:
    // 0x4d17e8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x4D17E8u;
    {
        const bool branch_taken_0x4d17e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D17ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D17E8u;
        // 0x4d17ec: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d17e8) {
            ctx->pc = 0x4D1894u;
            goto label_4d1894;
        }
    }
    ctx->pc = 0x4D17F0u;
label_4d17f0:
    // 0x4d17f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D17F0u;
    {
        const bool branch_taken_0x4d17f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D17F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D17F0u;
        // 0x4d17f4: 0x63082  srl         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d17f0) {
            ctx->pc = 0x4D1810u;
            goto label_4d1810;
        }
    }
    ctx->pc = 0x4D17F8u;
    // 0x4d17f8: 0x30a1024  and         $v0, $t8, $t2
    ctx->pc = 0x4d17f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 24) & GPR_U64(ctx, 10));
    // 0x4d17fc: 0x328c823  subu        $t9, $t9, $t0
    ctx->pc = 0x4d17fcu;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 8)));
    // 0x4d1800: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4d1800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4d1804: 0x118c006  srlv        $t8, $t8, $t0
    ctx->pc = 0x4d1804u;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), GPR_U32(ctx, 8) & 0x1F));
    // 0x4d1808: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4D1808u;
    {
        const bool branch_taken_0x4d1808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1808u;
        // 0x4d180c: 0x21c03  sra         $v1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1808) {
            ctx->pc = 0x4D1838u;
            goto label_4d1838;
        }
    }
    ctx->pc = 0x4D1810u;
label_4d1810:
    // 0x4d1810: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d1810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1814: 0x1192023  subu        $a0, $t0, $t9
    ctx->pc = 0x4d1814u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x4d1818: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d181c: 0x3221804  sllv        $v1, $v0, $t9
    ctx->pc = 0x4d181cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x4d1820: 0x3031825  or          $v1, $t8, $v1
    ctx->pc = 0x4d1820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) | GPR_U64(ctx, 3));
    // 0x4d1824: 0x32dc823  subu        $t9, $t9, $t5
    ctx->pc = 0x4d1824u;
    SET_GPR_S32(ctx, 25, (int32_t)SUB32(GPR_U32(ctx, 25), GPR_U32(ctx, 13)));
    // 0x4d1828: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x4d1828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x4d182c: 0x82c006  srlv        $t8, $v0, $a0
    ctx->pc = 0x4d182cu;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4d1830: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4d1830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4d1834: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4d1834u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_4d1838:
    // 0x4d1838: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x4d1838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4d183c: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x4d183cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x4d1840: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4d1840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x4d1844: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1844u;
    {
        const bool branch_taken_0x4d1844 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1844u;
        // 0x4d1848: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1844) {
            ctx->pc = 0x4D1864u;
            goto label_4d1864;
        }
    }
    ctx->pc = 0x4D184Cu;
    // 0x4d184c: 0x33050001  andi        $a1, $t8, 0x1
    ctx->pc = 0x4d184cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1850: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1850u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1854: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1854u;
    {
        const bool branch_taken_0x4d1854 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1854u;
        // 0x4d1858: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1854) {
            ctx->pc = 0x4D187Cu;
            goto label_4d187c;
        }
    }
    ctx->pc = 0x4D185Cu;
    // 0x4d185c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D185Cu;
    {
        const bool branch_taken_0x4d185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D185Cu;
        // 0x4d1860: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d185c) {
            ctx->pc = 0x4D1888u;
            goto label_4d1888;
        }
    }
    ctx->pc = 0x4D1864u;
label_4d1864:
    // 0x4d1864: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4d1864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1868: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1868u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d186c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d186cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1870: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4d1870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4d1874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D1874u;
    {
        const bool branch_taken_0x4d1874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1874u;
        // 0x4d1878: 0x5c042  srl         $t8, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1874) {
            ctx->pc = 0x4D1884u;
            goto label_4d1884;
        }
    }
    ctx->pc = 0x4D187Cu;
label_4d187c:
    // 0x4d187c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D187Cu;
    {
        const bool branch_taken_0x4d187c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D187Cu;
        // 0x4d1880: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d187c) {
            ctx->pc = 0x4D1888u;
            goto label_4d1888;
        }
    }
    ctx->pc = 0x4D1884u;
label_4d1884:
    // 0x4d1884: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4d1884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d1888:
    // 0x4d1888: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4d1888u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d188c: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x4d188cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_4d1890:
    // 0x4d1890: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4d1890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4d1894:
    // 0x4d1894: 0xeb102b  sltu        $v0, $a3, $t3
    ctx->pc = 0x4d1894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4d1898: 0x5440feaf  bnel        $v0, $zero, . + 4 + (-0x151 << 2)
    ctx->pc = 0x4D1898u;
    {
        const bool branch_taken_0x4d1898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d1898) {
            ctx->pc = 0x4D189Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D1898u;
            // 0x4d189c: 0x90e60000  lbu         $a2, 0x0($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D1358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d1358;
        }
    }
    ctx->pc = 0x4D18A0u;
label_4d18a0:
    // 0x4d18a0: 0x2d020002  sltiu       $v0, $t0, 0x2
    ctx->pc = 0x4d18a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d18a4: 0x1040fe9e  beqz        $v0, . + 4 + (-0x162 << 2)
    ctx->pc = 0x4D18A4u;
    {
        const bool branch_taken_0x4d18a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D18A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D18A4u;
        // 0x4d18a8: 0x1e0602d  daddu       $t4, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d18a4) {
            ctx->pc = 0x4D1320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d1320;
        }
    }
    ctx->pc = 0x4D18ACu;
label_4d18ac:
    // 0x4d18ac: 0x11c000f8  beqz        $t6, . + 4 + (0xF8 << 2)
    ctx->pc = 0x4D18ACu;
    {
        const bool branch_taken_0x4d18ac = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D18B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D18ACu;
        // 0x4d18b0: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d18ac) {
            ctx->pc = 0x4D1C90u;
            goto label_4d1c90;
        }
    }
    ctx->pc = 0x4D18B4u;
label_4d18b4:
    // 0x4d18b4: 0xeb102b  sltu        $v0, $a3, $t3
    ctx->pc = 0x4d18b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x4d18b8: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x4D18B8u;
    {
        const bool branch_taken_0x4d18b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D18B8u;
        // 0x4d18bc: 0x97a30092  lhu         $v1, 0x92($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 146)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d18b8) {
            ctx->pc = 0x4D1C94u;
            goto label_4d1c94;
        }
    }
    ctx->pc = 0x4D18C0u;
    // 0x4d18c0: 0x90e50000  lbu         $a1, 0x0($a3)
    ctx->pc = 0x4d18c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4d18c4: 0x0  nop
    ctx->pc = 0x4d18c4u;
    // NOP
    // 0x4d18c8: 0x50a0fffa  beql        $a1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4D18C8u;
    {
        const bool branch_taken_0x4d18c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d18c8) {
            ctx->pc = 0x4D18CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D18C8u;
            // 0x4d18cc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D18B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d18b4;
        }
    }
    ctx->pc = 0x4D18D0u;
    // 0x4d18d0: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D18D0u;
    {
        const bool branch_taken_0x4d18d0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D18D0u;
        // 0x4d18d4: 0x33040001  andi        $a0, $t8, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d18d0) {
            ctx->pc = 0x4D18F0u;
            goto label_4d18f0;
        }
    }
    ctx->pc = 0x4D18D8u;
    // 0x4d18d8: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d18d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d18dc: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4D18DCu;
    {
        const bool branch_taken_0x4d18dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D18DCu;
        // 0x4d18e0: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d18dc) {
            ctx->pc = 0x4D1908u;
            goto label_4d1908;
        }
    }
    ctx->pc = 0x4D18E4u;
    // 0x4d18e4: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x4D18E4u;
    {
        const bool branch_taken_0x4d18e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D18E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D18E4u;
        // 0x4d18e8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d18e4) {
            ctx->pc = 0x4D18B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d18b4;
        }
    }
    ctx->pc = 0x4D18ECu;
    // 0x4d18ec: 0x0  nop
    ctx->pc = 0x4d18ecu;
    // NOP
label_4d18f0:
    // 0x4d18f0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d18f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d18f4: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d18f4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d18f8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d18f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d18fc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4d18fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d1900: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x4D1900u;
    {
        const bool branch_taken_0x4d1900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1900u;
        // 0x4d1904: 0x4c042  srl         $t8, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1900) {
            ctx->pc = 0x4D1C88u;
            goto label_4d1c88;
        }
    }
    ctx->pc = 0x4D1908u;
label_4d1908:
    // 0x4d1908: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x4d1908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x4d190c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d1910: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4D1910u;
    {
        const bool branch_taken_0x4d1910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1910u;
        // 0x4d1914: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1910) {
            ctx->pc = 0x4D195Cu;
            goto label_4d195c;
        }
    }
    ctx->pc = 0x4D1918u;
    // 0x4d1918: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D1918u;
    {
        const bool branch_taken_0x4d1918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1918u;
        // 0x4d191c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1918) {
            ctx->pc = 0x4D1930u;
            goto label_4d1930;
        }
    }
    ctx->pc = 0x4D1920u;
    // 0x4d1920: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1920u;
    {
        const bool branch_taken_0x4d1920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1920u;
        // 0x4d1924: 0x52882  srl         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1920) {
            ctx->pc = 0x4D1948u;
            goto label_4d1948;
        }
    }
    ctx->pc = 0x4D1928u;
    // 0x4d1928: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
    ctx->pc = 0x4D1928u;
    {
        const bool branch_taken_0x4d1928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D192Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1928u;
        // 0x4d192c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1928) {
            ctx->pc = 0x4D18B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d18b4;
        }
    }
    ctx->pc = 0x4D1930u;
label_4d1930:
    // 0x4d1930: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4D1930u;
    {
        const bool branch_taken_0x4d1930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D1934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1930u;
        // 0x4d1934: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1930) {
            ctx->pc = 0x4D19ACu;
            goto label_4d19ac;
        }
    }
    ctx->pc = 0x4D1938u;
    // 0x4d1938: 0x106200be  beq         $v1, $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x4D1938u;
    {
        const bool branch_taken_0x4d1938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4D193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1938u;
        // 0x4d193c: 0x52882  srl         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1938) {
            ctx->pc = 0x4D1C34u;
            goto label_4d1c34;
        }
    }
    ctx->pc = 0x4D1940u;
    // 0x4d1940: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x4D1940u;
    {
        const bool branch_taken_0x4d1940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1940u;
        // 0x4d1944: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1940) {
            ctx->pc = 0x4D18B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d18b4;
        }
    }
    ctx->pc = 0x4D1948u;
label_4d1948:
    // 0x4d1948: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x4d1948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4d194c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d194cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d1950: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d1950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4d1954: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4D1954u;
    {
        const bool branch_taken_0x4d1954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1954u;
        // 0x4d1958: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1954) {
            ctx->pc = 0x4D19B8u;
            goto label_4d19b8;
        }
    }
    ctx->pc = 0x4D195Cu;
label_4d195c:
    // 0x4d195c: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x4d195cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x4d1960: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4d1960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d1964: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x4d1964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4d1968: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d1968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d196c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d196cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d1970: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x4d1970u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d1974: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d1974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4d1978: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x4d1978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4d197c: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x4d197cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d1980: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d1980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d1984: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4d1984u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4d1988: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x4d1988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x4d198c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4d198cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4d1990: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x4d1990u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d1994: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d1994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d1998: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4d1998u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4d199c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4d199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4d19a0: 0xa1630000  sb          $v1, 0x0($t3)
    ctx->pc = 0x4d19a0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4d19a4: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x4D19A4u;
    {
        const bool branch_taken_0x4d19a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D19A4u;
        // 0x4d19a8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d19a4) {
            ctx->pc = 0x4D18B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d18b4;
        }
    }
    ctx->pc = 0x4D19ACu;
label_4d19ac:
    // 0x4d19ac: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x4d19acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4d19b0: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x4d19b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x4d19b4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4d19b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4d19b8:
    // 0x4d19b8: 0x13200006  beqz        $t9, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D19B8u;
    {
        const bool branch_taken_0x4d19b8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D19BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D19B8u;
        // 0x4d19bc: 0x33040001  andi        $a0, $t8, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d19b8) {
            ctx->pc = 0x4D19D4u;
            goto label_4d19d4;
        }
    }
    ctx->pc = 0x4D19C0u;
    // 0x4d19c0: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d19c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d19c4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D19C4u;
    {
        const bool branch_taken_0x4d19c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D19C4u;
        // 0x4d19c8: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d19c4) {
            ctx->pc = 0x4D19ECu;
            goto label_4d19ec;
        }
    }
    ctx->pc = 0x4D19CCu;
    // 0x4d19cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D19CCu;
    {
        const bool branch_taken_0x4d19cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D19D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D19CCu;
        // 0x4d19d0: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d19cc) {
            ctx->pc = 0x4D1A04u;
            goto label_4d1a04;
        }
    }
    ctx->pc = 0x4D19D4u;
label_4d19d4:
    // 0x4d19d4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d19d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d19d8: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d19d8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d19dc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d19dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d19e0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4d19e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d19e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D19E4u;
    {
        const bool branch_taken_0x4d19e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D19E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D19E4u;
        // 0x4d19e8: 0x4c042  srl         $t8, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d19e4) {
            ctx->pc = 0x4D1A00u;
            goto label_4d1a00;
        }
    }
    ctx->pc = 0x4D19ECu;
label_4d19ec:
    // 0x4d19ec: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4d19ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d19f0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4d19f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4d19f4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d19f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d19f8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4D19F8u;
    {
        const bool branch_taken_0x4d19f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D19FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D19F8u;
        // 0x4d19fc: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d19f8) {
            ctx->pc = 0x4D1A50u;
            goto label_4d1a50;
        }
    }
    ctx->pc = 0x4D1A00u;
label_4d1a00:
    // 0x4d1a00: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4d1a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4d1a04:
    // 0x4d1a04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4d1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x4d1a08: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1A08u;
    {
        const bool branch_taken_0x4d1a08 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1A08u;
        // 0x4d1a0c: 0x24430090  addiu       $v1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a08) {
            ctx->pc = 0x4D1A28u;
            goto label_4d1a28;
        }
    }
    ctx->pc = 0x4D1A10u;
    // 0x4d1a10: 0x33040001  andi        $a0, $t8, 0x1
    ctx->pc = 0x4d1a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1a14: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1a14u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1a18: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1A18u;
    {
        const bool branch_taken_0x4d1a18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1A18u;
        // 0x4d1a1c: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a18) {
            ctx->pc = 0x4D1A40u;
            goto label_4d1a40;
        }
    }
    ctx->pc = 0x4D1A20u;
    // 0x4d1a20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D1A20u;
    {
        const bool branch_taken_0x4d1a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1A20u;
        // 0x4d1a24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a20) {
            ctx->pc = 0x4D1A4Cu;
            goto label_4d1a4c;
        }
    }
    ctx->pc = 0x4D1A28u;
label_4d1a28:
    // 0x4d1a28: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d1a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1a2c: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1a30: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1a34: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4d1a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d1a38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D1A38u;
    {
        const bool branch_taken_0x4d1a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1A38u;
        // 0x4d1a3c: 0x4c042  srl         $t8, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a38) {
            ctx->pc = 0x4D1A48u;
            goto label_4d1a48;
        }
    }
    ctx->pc = 0x4D1A40u;
label_4d1a40:
    // 0x4d1a40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D1A40u;
    {
        const bool branch_taken_0x4d1a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1A40u;
        // 0x4d1a44: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a40) {
            ctx->pc = 0x4D1A4Cu;
            goto label_4d1a4c;
        }
    }
    ctx->pc = 0x4D1A48u;
label_4d1a48:
    // 0x4d1a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1a4c:
    // 0x4d1a4c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d1a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d1a50:
    // 0x4d1a50: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4d1a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4d1a54: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1A54u;
    {
        const bool branch_taken_0x4d1a54 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1A54u;
        // 0x4d1a58: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a54) {
            ctx->pc = 0x4D1A74u;
            goto label_4d1a74;
        }
    }
    ctx->pc = 0x4D1A5Cu;
    // 0x4d1a5c: 0x33040001  andi        $a0, $t8, 0x1
    ctx->pc = 0x4d1a5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1a60: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1a60u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1a64: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1A64u;
    {
        const bool branch_taken_0x4d1a64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1A64u;
        // 0x4d1a68: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a64) {
            ctx->pc = 0x4D1A8Cu;
            goto label_4d1a8c;
        }
    }
    ctx->pc = 0x4D1A6Cu;
    // 0x4d1a6c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D1A6Cu;
    {
        const bool branch_taken_0x4d1a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1A6Cu;
        // 0x4d1a70: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a6c) {
            ctx->pc = 0x4D1AA4u;
            goto label_4d1aa4;
        }
    }
    ctx->pc = 0x4D1A74u;
label_4d1a74:
    // 0x4d1a74: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d1a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1a78: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1a78u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1a7c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1a80: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4d1a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d1a84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1A84u;
    {
        const bool branch_taken_0x4d1a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1A84u;
        // 0x4d1a88: 0x4c042  srl         $t8, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a84) {
            ctx->pc = 0x4D1AA0u;
            goto label_4d1aa0;
        }
    }
    ctx->pc = 0x4D1A8Cu;
label_4d1a8c:
    // 0x4d1a8c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4d1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d1a90: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4d1a90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4d1a94: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d1a98: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4D1A98u;
    {
        const bool branch_taken_0x4d1a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1A98u;
        // 0x4d1a9c: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1a98) {
            ctx->pc = 0x4D1AF0u;
            goto label_4d1af0;
        }
    }
    ctx->pc = 0x4D1AA0u;
label_4d1aa0:
    // 0x4d1aa0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4d1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4d1aa4:
    // 0x4d1aa4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4d1aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x4d1aa8: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1AA8u;
    {
        const bool branch_taken_0x4d1aa8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1AA8u;
        // 0x4d1aac: 0x24430090  addiu       $v1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1aa8) {
            ctx->pc = 0x4D1AC8u;
            goto label_4d1ac8;
        }
    }
    ctx->pc = 0x4D1AB0u;
    // 0x4d1ab0: 0x33040001  andi        $a0, $t8, 0x1
    ctx->pc = 0x4d1ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1ab4: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1ab8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1AB8u;
    {
        const bool branch_taken_0x4d1ab8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1AB8u;
        // 0x4d1abc: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ab8) {
            ctx->pc = 0x4D1AE0u;
            goto label_4d1ae0;
        }
    }
    ctx->pc = 0x4D1AC0u;
    // 0x4d1ac0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D1AC0u;
    {
        const bool branch_taken_0x4d1ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1AC0u;
        // 0x4d1ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ac0) {
            ctx->pc = 0x4D1AECu;
            goto label_4d1aec;
        }
    }
    ctx->pc = 0x4D1AC8u;
label_4d1ac8:
    // 0x4d1ac8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d1ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1acc: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1accu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1ad0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1ad4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4d1ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d1ad8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D1AD8u;
    {
        const bool branch_taken_0x4d1ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1AD8u;
        // 0x4d1adc: 0x4c042  srl         $t8, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ad8) {
            ctx->pc = 0x4D1AE8u;
            goto label_4d1ae8;
        }
    }
    ctx->pc = 0x4D1AE0u;
label_4d1ae0:
    // 0x4d1ae0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D1AE0u;
    {
        const bool branch_taken_0x4d1ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1AE0u;
        // 0x4d1ae4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ae0) {
            ctx->pc = 0x4D1AECu;
            goto label_4d1aec;
        }
    }
    ctx->pc = 0x4D1AE8u;
label_4d1ae8:
    // 0x4d1ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d1ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1aec:
    // 0x4d1aec: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d1aecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d1af0:
    // 0x4d1af0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4d1af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4d1af4: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1AF4u;
    {
        const bool branch_taken_0x4d1af4 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1AF4u;
        // 0x4d1af8: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1af4) {
            ctx->pc = 0x4D1B14u;
            goto label_4d1b14;
        }
    }
    ctx->pc = 0x4D1AFCu;
    // 0x4d1afc: 0x33040001  andi        $a0, $t8, 0x1
    ctx->pc = 0x4d1afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1b00: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1b00u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1b04: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1B04u;
    {
        const bool branch_taken_0x4d1b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1B04u;
        // 0x4d1b08: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b04) {
            ctx->pc = 0x4D1B2Cu;
            goto label_4d1b2c;
        }
    }
    ctx->pc = 0x4D1B0Cu;
    // 0x4d1b0c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D1B0Cu;
    {
        const bool branch_taken_0x4d1b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1B0Cu;
        // 0x4d1b10: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b0c) {
            ctx->pc = 0x4D1B44u;
            goto label_4d1b44;
        }
    }
    ctx->pc = 0x4D1B14u;
label_4d1b14:
    // 0x4d1b14: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d1b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1b18: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1b18u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1b1c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1b1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1b20: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4d1b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d1b24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1B24u;
    {
        const bool branch_taken_0x4d1b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1B24u;
        // 0x4d1b28: 0x4c042  srl         $t8, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b24) {
            ctx->pc = 0x4D1B40u;
            goto label_4d1b40;
        }
    }
    ctx->pc = 0x4D1B2Cu;
label_4d1b2c:
    // 0x4d1b2c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4d1b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d1b30: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4d1b30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4d1b34: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d1b38: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4D1B38u;
    {
        const bool branch_taken_0x4d1b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1B38u;
        // 0x4d1b3c: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b38) {
            ctx->pc = 0x4D1B90u;
            goto label_4d1b90;
        }
    }
    ctx->pc = 0x4D1B40u;
label_4d1b40:
    // 0x4d1b40: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4d1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4d1b44:
    // 0x4d1b44: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4d1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x4d1b48: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1B48u;
    {
        const bool branch_taken_0x4d1b48 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1B48u;
        // 0x4d1b4c: 0x24430090  addiu       $v1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b48) {
            ctx->pc = 0x4D1B68u;
            goto label_4d1b68;
        }
    }
    ctx->pc = 0x4D1B50u;
    // 0x4d1b50: 0x33040001  andi        $a0, $t8, 0x1
    ctx->pc = 0x4d1b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1b54: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1b54u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1b58: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1B58u;
    {
        const bool branch_taken_0x4d1b58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1B58u;
        // 0x4d1b5c: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b58) {
            ctx->pc = 0x4D1B80u;
            goto label_4d1b80;
        }
    }
    ctx->pc = 0x4D1B60u;
    // 0x4d1b60: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D1B60u;
    {
        const bool branch_taken_0x4d1b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1B60u;
        // 0x4d1b64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b60) {
            ctx->pc = 0x4D1B8Cu;
            goto label_4d1b8c;
        }
    }
    ctx->pc = 0x4D1B68u;
label_4d1b68:
    // 0x4d1b68: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d1b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1b6c: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1b70: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1b70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1b74: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4d1b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d1b78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D1B78u;
    {
        const bool branch_taken_0x4d1b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1B78u;
        // 0x4d1b7c: 0x4c042  srl         $t8, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b78) {
            ctx->pc = 0x4D1B88u;
            goto label_4d1b88;
        }
    }
    ctx->pc = 0x4D1B80u;
label_4d1b80:
    // 0x4d1b80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D1B80u;
    {
        const bool branch_taken_0x4d1b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1B80u;
        // 0x4d1b84: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b80) {
            ctx->pc = 0x4D1B8Cu;
            goto label_4d1b8c;
        }
    }
    ctx->pc = 0x4D1B88u;
label_4d1b88:
    // 0x4d1b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1b8c:
    // 0x4d1b8c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d1b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d1b90:
    // 0x4d1b90: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4d1b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4d1b94: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1B94u;
    {
        const bool branch_taken_0x4d1b94 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1B94u;
        // 0x4d1b98: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1b94) {
            ctx->pc = 0x4D1BB4u;
            goto label_4d1bb4;
        }
    }
    ctx->pc = 0x4D1B9Cu;
    // 0x4d1b9c: 0x33040001  andi        $a0, $t8, 0x1
    ctx->pc = 0x4d1b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1ba0: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1ba4: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1BA4u;
    {
        const bool branch_taken_0x4d1ba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1BA4u;
        // 0x4d1ba8: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1ba4) {
            ctx->pc = 0x4D1BCCu;
            goto label_4d1bcc;
        }
    }
    ctx->pc = 0x4D1BACu;
    // 0x4d1bac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4D1BACu;
    {
        const bool branch_taken_0x4d1bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1BACu;
        // 0x4d1bb0: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1bac) {
            ctx->pc = 0x4D1BE4u;
            goto label_4d1be4;
        }
    }
    ctx->pc = 0x4D1BB4u;
label_4d1bb4:
    // 0x4d1bb4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d1bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1bb8: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1bb8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1bbc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1bc0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4d1bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d1bc4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D1BC4u;
    {
        const bool branch_taken_0x4d1bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1BC4u;
        // 0x4d1bc8: 0x4c042  srl         $t8, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1bc4) {
            ctx->pc = 0x4D1BE0u;
            goto label_4d1be0;
        }
    }
    ctx->pc = 0x4D1BCCu;
label_4d1bcc:
    // 0x4d1bcc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4d1bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d1bd0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x4d1bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x4d1bd4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4d1bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4d1bd8: 0x1000ff36  b           . + 4 + (-0xCA << 2)
    ctx->pc = 0x4D1BD8u;
    {
        const bool branch_taken_0x4d1bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1BD8u;
        // 0x4d1bdc: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1bd8) {
            ctx->pc = 0x4D18B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d18b4;
        }
    }
    ctx->pc = 0x4D1BE0u;
label_4d1be0:
    // 0x4d1be0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4d1be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_4d1be4:
    // 0x4d1be4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4d1be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x4d1be8: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1BE8u;
    {
        const bool branch_taken_0x4d1be8 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1BE8u;
        // 0x4d1bec: 0x24430090  addiu       $v1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1be8) {
            ctx->pc = 0x4D1C08u;
            goto label_4d1c08;
        }
    }
    ctx->pc = 0x4D1BF0u;
    // 0x4d1bf0: 0x33040001  andi        $a0, $t8, 0x1
    ctx->pc = 0x4d1bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1bf4: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1bf4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1bf8: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1BF8u;
    {
        const bool branch_taken_0x4d1bf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1BF8u;
        // 0x4d1bfc: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1bf8) {
            ctx->pc = 0x4D1C20u;
            goto label_4d1c20;
        }
    }
    ctx->pc = 0x4D1C00u;
    // 0x4d1c00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D1C00u;
    {
        const bool branch_taken_0x4d1c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1C00u;
        // 0x4d1c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1c00) {
            ctx->pc = 0x4D1C2Cu;
            goto label_4d1c2c;
        }
    }
    ctx->pc = 0x4D1C08u;
label_4d1c08:
    // 0x4d1c08: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d1c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1c0c: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1c10: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1c10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1c14: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4d1c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d1c18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D1C18u;
    {
        const bool branch_taken_0x4d1c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1C18u;
        // 0x4d1c1c: 0x4c042  srl         $t8, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1c18) {
            ctx->pc = 0x4D1C28u;
            goto label_4d1c28;
        }
    }
    ctx->pc = 0x4D1C20u;
label_4d1c20:
    // 0x4d1c20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D1C20u;
    {
        const bool branch_taken_0x4d1c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1C20u;
        // 0x4d1c24: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1c20) {
            ctx->pc = 0x4D1C2Cu;
            goto label_4d1c2c;
        }
    }
    ctx->pc = 0x4D1C28u;
label_4d1c28:
    // 0x4d1c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1c2c:
    // 0x4d1c2c: 0x1000ff21  b           . + 4 + (-0xDF << 2)
    ctx->pc = 0x4D1C2Cu;
    {
        const bool branch_taken_0x4d1c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1C2Cu;
        // 0x4d1c30: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1c2c) {
            ctx->pc = 0x4D18B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d18b4;
        }
    }
    ctx->pc = 0x4D1C34u;
label_4d1c34:
    // 0x4d1c34: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x4d1c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4d1c38: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x4d1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x4d1c3c: 0x13200007  beqz        $t9, . + 4 + (0x7 << 2)
    ctx->pc = 0x4D1C3Cu;
    {
        const bool branch_taken_0x4d1c3c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1C3Cu;
        // 0x4d1c40: 0x24430090  addiu       $v1, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1c3c) {
            ctx->pc = 0x4D1C5Cu;
            goto label_4d1c5c;
        }
    }
    ctx->pc = 0x4D1C44u;
    // 0x4d1c44: 0x33040001  andi        $a0, $t8, 0x1
    ctx->pc = 0x4d1c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)1);
    // 0x4d1c48: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x4d1c48u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x4d1c4c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4D1C4Cu;
    {
        const bool branch_taken_0x4d1c4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1C4Cu;
        // 0x4d1c50: 0x18c042  srl         $t8, $t8, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 24), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1c4c) {
            ctx->pc = 0x4D1C74u;
            goto label_4d1c74;
        }
    }
    ctx->pc = 0x4D1C54u;
    // 0x4d1c54: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D1C54u;
    {
        const bool branch_taken_0x4d1c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1C54u;
        // 0x4d1c58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1c54) {
            ctx->pc = 0x4D1C80u;
            goto label_4d1c80;
        }
    }
    ctx->pc = 0x4D1C5Cu;
label_4d1c5c:
    // 0x4d1c5c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4d1c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d1c60: 0x2419001f  addiu       $t9, $zero, 0x1F
    ctx->pc = 0x4d1c60u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x4d1c64: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4d1c64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4d1c68: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x4d1c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x4d1c6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D1C6Cu;
    {
        const bool branch_taken_0x4d1c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1C6Cu;
        // 0x4d1c70: 0x4c042  srl         $t8, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1c6c) {
            ctx->pc = 0x4D1C7Cu;
            goto label_4d1c7c;
        }
    }
    ctx->pc = 0x4D1C74u;
label_4d1c74:
    // 0x4d1c74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D1C74u;
    {
        const bool branch_taken_0x4d1c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1C74u;
        // 0x4d1c78: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1c74) {
            ctx->pc = 0x4D1C80u;
            goto label_4d1c80;
        }
    }
    ctx->pc = 0x4D1C7Cu;
label_4d1c7c:
    // 0x4d1c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d1c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d1c80:
    // 0x4d1c80: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d1c80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4d1c84: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x4d1c84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_4d1c88:
    // 0x4d1c88: 0x1000ff0a  b           . + 4 + (-0xF6 << 2)
    ctx->pc = 0x4D1C88u;
    {
        const bool branch_taken_0x4d1c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1C88u;
        // 0x4d1c8c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1c88) {
            ctx->pc = 0x4D18B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d18b4;
        }
    }
    ctx->pc = 0x4D1C90u;
label_4d1c90:
    // 0x4d1c90: 0x97a30092  lhu         $v1, 0x92($sp)
    ctx->pc = 0x4d1c90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 146)));
label_4d1c94:
    // 0x4d1c94: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x4d1c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x4d1c98: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x4d1c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4d1c9c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x4d1c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x4d1ca0: 0x8fa70094  lw          $a3, 0x94($sp)
    ctx->pc = 0x4d1ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x4d1ca4: 0x8fa8009c  lw          $t0, 0x9C($sp)
    ctx->pc = 0x4d1ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x4d1ca8: 0x8fa900a4  lw          $t1, 0xA4($sp)
    ctx->pc = 0x4d1ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x4d1cac: 0x8faa00ac  lw          $t2, 0xAC($sp)
    ctx->pc = 0x4d1cacu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x4d1cb0: 0x8fab00c0  lw          $t3, 0xC0($sp)
    ctx->pc = 0x4d1cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4d1cb4: 0x8fac00e8  lw          $t4, 0xE8($sp)
    ctx->pc = 0x4d1cb4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x4d1cb8: 0x8fad00b0  lw          $t5, 0xB0($sp)
    ctx->pc = 0x4d1cb8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4d1cbc: 0x8fae00b8  lw          $t6, 0xB8($sp)
    ctx->pc = 0x4d1cbcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x4d1cc0: 0x8faf00c4  lw          $t7, 0xC4($sp)
    ctx->pc = 0x4d1cc0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x4d1cc4: 0x8fb000ec  lw          $s0, 0xEC($sp)
    ctx->pc = 0x4d1cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x4d1cc8: 0x8fb100b4  lw          $s1, 0xB4($sp)
    ctx->pc = 0x4d1cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x4d1ccc: 0xae990008  sw          $t9, 0x8($s4)
    ctx->pc = 0x4d1cccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 25));
    // 0x4d1cd0: 0xae980000  sw          $t8, 0x0($s4)
    ctx->pc = 0x4d1cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 24));
    // 0x4d1cd4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x4d1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x4d1cd8: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x4d1cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
    // 0x4d1cdc: 0xa6630002  sh          $v1, 0x2($s3)
    ctx->pc = 0x4d1cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x4d1ce0: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x4d1ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
    // 0x4d1ce4: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x4d1ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
    // 0x4d1ce8: 0xae66000c  sw          $a2, 0xC($s3)
    ctx->pc = 0x4d1ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 6));
    // 0x4d1cec: 0xae670010  sw          $a3, 0x10($s3)
    ctx->pc = 0x4d1cecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 7));
    // 0x4d1cf0: 0xae680014  sw          $t0, 0x14($s3)
    ctx->pc = 0x4d1cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 8));
    // 0x4d1cf4: 0xae690018  sw          $t1, 0x18($s3)
    ctx->pc = 0x4d1cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 9));
    // 0x4d1cf8: 0xae6a001c  sw          $t2, 0x1C($s3)
    ctx->pc = 0x4d1cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 10));
    // 0x4d1cfc: 0xae6b0020  sw          $t3, 0x20($s3)
    ctx->pc = 0x4d1cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 11));
    // 0x4d1d00: 0xae6c0024  sw          $t4, 0x24($s3)
    ctx->pc = 0x4d1d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 12));
    // 0x4d1d04: 0xae6d0028  sw          $t5, 0x28($s3)
    ctx->pc = 0x4d1d04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 13));
    // 0x4d1d08: 0xae6e002c  sw          $t6, 0x2C($s3)
    ctx->pc = 0x4d1d08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 14));
    // 0x4d1d0c: 0xae6f0030  sw          $t7, 0x30($s3)
    ctx->pc = 0x4d1d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 15));
    // 0x4d1d10: 0xae700034  sw          $s0, 0x34($s3)
    ctx->pc = 0x4d1d10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 16));
    // 0x4d1d14: 0xae710038  sw          $s1, 0x38($s3)
    ctx->pc = 0x4d1d14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 17));
    // 0x4d1d18: 0xae62003c  sw          $v0, 0x3C($s3)
    ctx->pc = 0x4d1d18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 2));
    // 0x4d1d1c: 0x8fb000e4  lw          $s0, 0xE4($sp)
    ctx->pc = 0x4d1d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x4d1d20: 0x8fb10104  lw          $s1, 0x104($sp)
    ctx->pc = 0x4d1d20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x4d1d24: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x4d1d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x4d1d28: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x4d1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4d1d2c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x4d1d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x4d1d30: 0x8fa600f8  lw          $a2, 0xF8($sp)
    ctx->pc = 0x4d1d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x4d1d34: 0x8fa700cc  lw          $a3, 0xCC($sp)
    ctx->pc = 0x4d1d34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x4d1d38: 0x8fa800d4  lw          $t0, 0xD4($sp)
    ctx->pc = 0x4d1d38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x4d1d3c: 0x8fa900f4  lw          $t1, 0xF4($sp)
    ctx->pc = 0x4d1d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x4d1d40: 0x8faa00fc  lw          $t2, 0xFC($sp)
    ctx->pc = 0x4d1d40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x4d1d44: 0x8fab00d8  lw          $t3, 0xD8($sp)
    ctx->pc = 0x4d1d44u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x4d1d48: 0x8fac00e0  lw          $t4, 0xE0($sp)
    ctx->pc = 0x4d1d48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4d1d4c: 0x8fad0100  lw          $t5, 0x100($sp)
    ctx->pc = 0x4d1d4cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4d1d50: 0x8fae0108  lw          $t6, 0x108($sp)
    ctx->pc = 0x4d1d50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x4d1d54: 0x8faf00dc  lw          $t7, 0xDC($sp)
    ctx->pc = 0x4d1d54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x4d1d58: 0x8fa2010c  lw          $v0, 0x10C($sp)
    ctx->pc = 0x4d1d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x4d1d5c: 0xae700074  sw          $s0, 0x74($s3)
    ctx->pc = 0x4d1d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 16));
    // 0x4d1d60: 0xae710078  sw          $s1, 0x78($s3)
    ctx->pc = 0x4d1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 17));
    // 0x4d1d64: 0xae630040  sw          $v1, 0x40($s3)
    ctx->pc = 0x4d1d64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 3));
    // 0x4d1d68: 0xae62007c  sw          $v0, 0x7C($s3)
    ctx->pc = 0x4d1d68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
    // 0x4d1d6c: 0xae640044  sw          $a0, 0x44($s3)
    ctx->pc = 0x4d1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 4));
    // 0x4d1d70: 0xae650048  sw          $a1, 0x48($s3)
    ctx->pc = 0x4d1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 5));
    // 0x4d1d74: 0xae66004c  sw          $a2, 0x4C($s3)
    ctx->pc = 0x4d1d74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 76), GPR_U32(ctx, 6));
    // 0x4d1d78: 0xae670050  sw          $a3, 0x50($s3)
    ctx->pc = 0x4d1d78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 7));
    // 0x4d1d7c: 0xae680054  sw          $t0, 0x54($s3)
    ctx->pc = 0x4d1d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 8));
    // 0x4d1d80: 0xae690058  sw          $t1, 0x58($s3)
    ctx->pc = 0x4d1d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 9));
    // 0x4d1d84: 0xae6a005c  sw          $t2, 0x5C($s3)
    ctx->pc = 0x4d1d84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 10));
    // 0x4d1d88: 0xae6b0060  sw          $t3, 0x60($s3)
    ctx->pc = 0x4d1d88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 11));
    // 0x4d1d8c: 0xae6c0064  sw          $t4, 0x64($s3)
    ctx->pc = 0x4d1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 12));
    // 0x4d1d90: 0xae6d0068  sw          $t5, 0x68($s3)
    ctx->pc = 0x4d1d90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 13));
    // 0x4d1d94: 0xae6e006c  sw          $t6, 0x6C($s3)
    ctx->pc = 0x4d1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 14));
    // 0x4d1d98: 0xae6f0070  sw          $t7, 0x70($s3)
    ctx->pc = 0x4d1d98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 15));
    // 0x4d1d9c: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x4d1d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4d1da0: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x4d1da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x4d1da4: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x4d1da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4d1da8: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x4d1da8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x4d1dac: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x4d1dacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x4d1db0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D1DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1DB0u;
        // 0x4d1db4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D1DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D1DB8u;
}
