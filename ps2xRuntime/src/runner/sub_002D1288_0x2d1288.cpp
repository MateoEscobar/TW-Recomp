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

// Function: sub_002D1288
// Address: 0x2d1288 - 0x2d1498
void sub_002D1288_0x2d1288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1288_0x2d1288");
#endif

    switch (ctx->pc) {
        case 0x2d1300u: goto label_2d1300;
        case 0x2d1330u: goto label_2d1330;
        case 0x2d1344u: goto label_2d1344;
        case 0x2d1364u: goto label_2d1364;
        case 0x2d1390u: goto label_2d1390;
        case 0x2d13b0u: goto label_2d13b0;
        case 0x2d13bcu: goto label_2d13bc;
        case 0x2d13f8u: goto label_2d13f8;
        case 0x2d1408u: goto label_2d1408;
        case 0x2d1418u: goto label_2d1418;
        case 0x2d1450u: goto label_2d1450;
        default: break;
    }

    ctx->pc = 0x2d1288u;

    // 0x2d1288: 0x27bdfd60  addiu       $sp, $sp, -0x2A0
    ctx->pc = 0x2d1288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966624));
    // 0x2d128c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2d128cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2d1290: 0x7fb10280  sq          $s1, 0x280($sp)
    ctx->pc = 0x2d1290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 17));
    // 0x2d1294: 0x7fb20270  sq          $s2, 0x270($sp)
    ctx->pc = 0x2d1294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 18));
    // 0x2d1298: 0x7fb60230  sq          $s6, 0x230($sp)
    ctx->pc = 0x2d1298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 22));
    // 0x2d129c: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x2d129cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2d12a0: 0x7fb00290  sq          $s0, 0x290($sp)
    ctx->pc = 0x2d12a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 16));
    // 0x2d12a4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2d12a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d12a8: 0x7fb30260  sq          $s3, 0x260($sp)
    ctx->pc = 0x2d12a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 19));
    // 0x2d12ac: 0x7fb40250  sq          $s4, 0x250($sp)
    ctx->pc = 0x2d12acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 20));
    // 0x2d12b0: 0x7fb50240  sq          $s5, 0x240($sp)
    ctx->pc = 0x2d12b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 21));
    // 0x2d12b4: 0x7fb70220  sq          $s7, 0x220($sp)
    ctx->pc = 0x2d12b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 23));
    // 0x2d12b8: 0x7fbe0210  sq          $fp, 0x210($sp)
    ctx->pc = 0x2d12b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 30));
    // 0x2d12bc: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x2d12bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x2d12c0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2d12c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d12c4: 0x8c9e0000  lw          $fp, 0x0($a0)
    ctx->pc = 0x2d12c4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d12c8: 0x27d10090  addiu       $s1, $fp, 0x90
    ctx->pc = 0x2d12c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x2d12cc: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x2d12ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d12d0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2d12d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2d12d4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2d12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2d12d8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d12d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d12dc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2d12dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2d12e0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d12e4: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2d12e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2d12e8: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2D12E8u;
    {
        const bool branch_taken_0x2d12e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D12ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D12E8u;
        // 0x2d12ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d12e8) {
            ctx->pc = 0x2D1468u;
            goto label_2d1468;
        }
    }
    ctx->pc = 0x2D12F0u;
    // 0x2d12f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2d12f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2d12f4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2d12f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2d12f8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2D12F8u;
    SET_GPR_U32(ctx, 31, 0x2D1300u);
    ctx->pc = 0x2D12FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D12F8u;
    // 0x2d12fc: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2D12F8u, 0x2D1300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1300u;
label_2d1300:
    // 0x2d1300: 0x92c30035  lbu         $v1, 0x35($s6)
    ctx->pc = 0x2d1300u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 53)));
    // 0x2d1304: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2d1304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d1308: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2d1308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2d130c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d130cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1314: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2d1314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2d1318: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x2d1318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2d131c: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x2d131cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
    // 0x2d1320: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2d1320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1324: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d1324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1328: 0xc089d2a  jal         func_2274A8
    ctx->pc = 0x2D1328u;
    SET_GPR_U32(ctx, 31, 0x2D1330u);
    ctx->pc = 0x2D132Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1328u;
    // 0x2d132c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x2D1328u, 0x2D1330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1330u;
label_2d1330:
    // 0x2d1330: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2d1330u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1334: 0x16800018  bnez        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D1334u;
    {
        const bool branch_taken_0x2d1334 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1334u;
        // 0x2d1338: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1334) {
            ctx->pc = 0x2D1398u;
            goto label_2d1398;
        }
    }
    ctx->pc = 0x2D133Cu;
    // 0x2d133c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2D133Cu;
    {
        const bool branch_taken_0x2d133c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D133Cu;
        // 0x2d1340: 0x7bb00290  lq          $s0, 0x290($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d133c) {
            ctx->pc = 0x2D146Cu;
            goto label_2d146c;
        }
    }
    ctx->pc = 0x2D1344u;
label_2d1344:
    // 0x2d1344: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x2d1344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d1348: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d1348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d134c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d134cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1350: 0x24061f40  addiu       $a2, $zero, 0x1F40
    ctx->pc = 0x2d1350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x2d1354: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2d1354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x2d1358: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d1358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d135c: 0xc0a34ba  jal         func_28D2E8
    ctx->pc = 0x2D135Cu;
    SET_GPR_U32(ctx, 31, 0x2D1364u);
    ctx->pc = 0x2D1360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D135Cu;
    // 0x2d1360: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2E8u, 0x2D135Cu, 0x2D1364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1364u;
label_2d1364:
    // 0x2d1364: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2d1364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2d1368: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d1368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d136c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d136cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d1370: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2d1370u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2d1374: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2d1374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1378: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2d1378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2d137c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d137cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1380: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d1380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1384: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d1384u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1388: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2D1388u;
    SET_GPR_U32(ctx, 31, 0x2D1390u);
    ctx->pc = 0x2D138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1388u;
    // 0x2d138c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2D1388u, 0x2D1390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1390u;
label_2d1390:
    // 0x2d1390: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2D1390u;
    {
        const bool branch_taken_0x2d1390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1390u;
        // 0x2d1394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1390) {
            ctx->pc = 0x2D1468u;
            goto label_2d1468;
        }
    }
    ctx->pc = 0x2D1398u;
label_2d1398:
    // 0x2d1398: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D1398u;
    {
        const bool branch_taken_0x2d1398 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D139Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1398u;
        // 0x2d139c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1398) {
            ctx->pc = 0x2D1464u;
            goto label_2d1464;
        }
    }
    ctx->pc = 0x2D13A0u;
    // 0x2d13a0: 0xafb101f4  sw          $s1, 0x1F4($sp)
    ctx->pc = 0x2d13a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 17));
    // 0x2d13a4: 0x240b82d  daddu       $s7, $s2, $zero
    ctx->pc = 0x2d13a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13a8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2d13a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13ac: 0x0  nop
    ctx->pc = 0x2d13acu;
    // NOP
label_2d13b0:
    // 0x2d13b0: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x2d13b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2d13b4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2D13B4u;
    SET_GPR_U32(ctx, 31, 0x2D13BCu);
    ctx->pc = 0x2D13B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D13B4u;
    // 0x2d13b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2D13B4u, 0x2D13BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13BCu;
label_2d13bc:
    // 0x2d13bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d13bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d13c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d13c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d13c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d13c8: 0x50430023  beql        $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D13C8u;
    {
        const bool branch_taken_0x2d13c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d13c8) {
            ctx->pc = 0x2D13CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D13C8u;
            // 0x2d13cc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1458u;
            goto label_2d1458;
        }
    }
    ctx->pc = 0x2D13D0u;
    // 0x2d13d0: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x2d13d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x2d13d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2d13d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2d13d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D13D8u;
    {
        const bool branch_taken_0x2d13d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D13DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D13D8u;
        // 0x2d13dc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d13d8) {
            ctx->pc = 0x2D13ECu;
            goto label_2d13ec;
        }
    }
    ctx->pc = 0x2D13E0u;
    // 0x2d13e0: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x2d13e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2d13e4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2D13E4u;
    {
        const bool branch_taken_0x2d13e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d13e4) {
            ctx->pc = 0x2D13E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D13E4u;
            // 0x2d13e8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1458u;
            goto label_2d1458;
        }
    }
    ctx->pc = 0x2D13ECu;
label_2d13ec:
    // 0x2d13ec: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x2d13ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d13f0: 0xc0a408c  jal         func_290230
    ctx->pc = 0x2D13F0u;
    SET_GPR_U32(ctx, 31, 0x2D13F8u);
    ctx->pc = 0x2D13F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D13F0u;
    // 0x2d13f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2D13F0u, 0x2D13F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D13F8u;
label_2d13f8:
    // 0x2d13f8: 0x50510017  beql        $v0, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D13F8u;
    {
        const bool branch_taken_0x2d13f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2d13f8) {
            ctx->pc = 0x2D13FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D13F8u;
            // 0x2d13fc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1458u;
            goto label_2d1458;
        }
    }
    ctx->pc = 0x2D1400u;
    // 0x2d1400: 0xc0a40d2  jal         func_290348
    ctx->pc = 0x2D1400u;
    SET_GPR_U32(ctx, 31, 0x2D1408u);
    ctx->pc = 0x2D1404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1400u;
    // 0x2d1404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290348u, 0x2D1400u, 0x2D1408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1408u;
label_2d1408:
    // 0x2d1408: 0x50510013  beql        $v0, $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D1408u;
    {
        const bool branch_taken_0x2d1408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2d1408) {
            ctx->pc = 0x2D140Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1408u;
            // 0x2d140c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1458u;
            goto label_2d1458;
        }
    }
    ctx->pc = 0x2D1410u;
    // 0x2d1410: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x2D1410u;
    SET_GPR_U32(ctx, 31, 0x2D1418u);
    ctx->pc = 0x2D1414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1410u;
    // 0x2d1414: 0x260401a4  addiu       $a0, $s0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2D1410u, 0x2D1418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1418u;
label_2d1418:
    // 0x2d1418: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2D1418u;
    {
        const bool branch_taken_0x2d1418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1418) {
            ctx->pc = 0x2D141Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1418u;
            // 0x2d141c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1458u;
            goto label_2d1458;
        }
    }
    ctx->pc = 0x2D1420u;
    // 0x2d1420: 0x8fa301f4  lw          $v1, 0x1F4($sp)
    ctx->pc = 0x2d1420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x2d1424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d1424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1428: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x2d1428u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
    // 0x2d142c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2d142cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1430: 0x84640002  lh          $a0, 0x2($v1)
    ctx->pc = 0x2d1430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d1434: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2d1434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1438: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d1438u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2d143c: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x2d143cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d1440: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d1440u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2d1444: 0xb72821  addu        $a1, $a1, $s7
    ctx->pc = 0x2d1444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x2d1448: 0xc09381e  jal         func_24E078
    ctx->pc = 0x2D1448u;
    SET_GPR_U32(ctx, 31, 0x2D1450u);
    ctx->pc = 0x2D144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1448u;
    // 0x2d144c: 0x972021  addu        $a0, $a0, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2D1448u, 0x2D1450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1450u;
label_2d1450:
    // 0x2d1450: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2D1450u;
    {
        const bool branch_taken_0x2d1450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1450u;
        // 0x2d1454: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1450) {
            ctx->pc = 0x2D1344u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1344;
        }
    }
    ctx->pc = 0x2D1458u;
label_2d1458:
    // 0x2d1458: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x2d1458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2d145c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2D145Cu;
    {
        const bool branch_taken_0x2d145c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D1460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D145Cu;
        // 0x2d1460: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d145c) {
            ctx->pc = 0x2D13B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d13b0;
        }
    }
    ctx->pc = 0x2D1464u;
label_2d1464:
    // 0x2d1464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d1464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1468:
    // 0x2d1468: 0x7bb00290  lq          $s0, 0x290($sp)
    ctx->pc = 0x2d1468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_2d146c:
    // 0x2d146c: 0x7bb10280  lq          $s1, 0x280($sp)
    ctx->pc = 0x2d146cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2d1470: 0x7bb20270  lq          $s2, 0x270($sp)
    ctx->pc = 0x2d1470u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2d1474: 0x7bb30260  lq          $s3, 0x260($sp)
    ctx->pc = 0x2d1474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2d1478: 0x7bb40250  lq          $s4, 0x250($sp)
    ctx->pc = 0x2d1478u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2d147c: 0x7bb50240  lq          $s5, 0x240($sp)
    ctx->pc = 0x2d147cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2d1480: 0x7bb60230  lq          $s6, 0x230($sp)
    ctx->pc = 0x2d1480u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2d1484: 0x7bb70220  lq          $s7, 0x220($sp)
    ctx->pc = 0x2d1484u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2d1488: 0x7bbe0210  lq          $fp, 0x210($sp)
    ctx->pc = 0x2d1488u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2d148c: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x2d148cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2d1490: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1490u;
        // 0x2d1494: 0x27bd02a0  addiu       $sp, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1498u;
}
