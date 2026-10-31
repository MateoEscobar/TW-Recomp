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

// Function: sub_001CE3C0
// Address: 0x1ce3c0 - 0x1ce550
void sub_001CE3C0_0x1ce3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE3C0_0x1ce3c0");
#endif

    switch (ctx->pc) {
        case 0x1ce3c0u: goto label_1ce3c0;
        case 0x1ce3c4u: goto label_1ce3c4;
        case 0x1ce3c8u: goto label_1ce3c8;
        case 0x1ce3ccu: goto label_1ce3cc;
        case 0x1ce3d0u: goto label_1ce3d0;
        case 0x1ce3d4u: goto label_1ce3d4;
        case 0x1ce3d8u: goto label_1ce3d8;
        case 0x1ce3dcu: goto label_1ce3dc;
        case 0x1ce3e0u: goto label_1ce3e0;
        case 0x1ce3e4u: goto label_1ce3e4;
        case 0x1ce3e8u: goto label_1ce3e8;
        case 0x1ce3ecu: goto label_1ce3ec;
        case 0x1ce3f0u: goto label_1ce3f0;
        case 0x1ce3f4u: goto label_1ce3f4;
        case 0x1ce3f8u: goto label_1ce3f8;
        case 0x1ce3fcu: goto label_1ce3fc;
        case 0x1ce400u: goto label_1ce400;
        case 0x1ce404u: goto label_1ce404;
        case 0x1ce408u: goto label_1ce408;
        case 0x1ce40cu: goto label_1ce40c;
        case 0x1ce410u: goto label_1ce410;
        case 0x1ce414u: goto label_1ce414;
        case 0x1ce418u: goto label_1ce418;
        case 0x1ce41cu: goto label_1ce41c;
        case 0x1ce420u: goto label_1ce420;
        case 0x1ce424u: goto label_1ce424;
        case 0x1ce428u: goto label_1ce428;
        case 0x1ce42cu: goto label_1ce42c;
        case 0x1ce430u: goto label_1ce430;
        case 0x1ce434u: goto label_1ce434;
        case 0x1ce438u: goto label_1ce438;
        case 0x1ce43cu: goto label_1ce43c;
        case 0x1ce440u: goto label_1ce440;
        case 0x1ce444u: goto label_1ce444;
        case 0x1ce448u: goto label_1ce448;
        case 0x1ce44cu: goto label_1ce44c;
        case 0x1ce450u: goto label_1ce450;
        case 0x1ce454u: goto label_1ce454;
        case 0x1ce458u: goto label_1ce458;
        case 0x1ce45cu: goto label_1ce45c;
        case 0x1ce460u: goto label_1ce460;
        case 0x1ce464u: goto label_1ce464;
        case 0x1ce468u: goto label_1ce468;
        case 0x1ce46cu: goto label_1ce46c;
        case 0x1ce470u: goto label_1ce470;
        case 0x1ce474u: goto label_1ce474;
        case 0x1ce478u: goto label_1ce478;
        case 0x1ce47cu: goto label_1ce47c;
        case 0x1ce480u: goto label_1ce480;
        case 0x1ce484u: goto label_1ce484;
        case 0x1ce488u: goto label_1ce488;
        case 0x1ce48cu: goto label_1ce48c;
        case 0x1ce490u: goto label_1ce490;
        case 0x1ce494u: goto label_1ce494;
        case 0x1ce498u: goto label_1ce498;
        case 0x1ce49cu: goto label_1ce49c;
        case 0x1ce4a0u: goto label_1ce4a0;
        case 0x1ce4a4u: goto label_1ce4a4;
        case 0x1ce4a8u: goto label_1ce4a8;
        case 0x1ce4acu: goto label_1ce4ac;
        case 0x1ce4b0u: goto label_1ce4b0;
        case 0x1ce4b4u: goto label_1ce4b4;
        case 0x1ce4b8u: goto label_1ce4b8;
        case 0x1ce4bcu: goto label_1ce4bc;
        case 0x1ce4c0u: goto label_1ce4c0;
        case 0x1ce4c4u: goto label_1ce4c4;
        case 0x1ce4c8u: goto label_1ce4c8;
        case 0x1ce4ccu: goto label_1ce4cc;
        case 0x1ce4d0u: goto label_1ce4d0;
        case 0x1ce4d4u: goto label_1ce4d4;
        case 0x1ce4d8u: goto label_1ce4d8;
        case 0x1ce4dcu: goto label_1ce4dc;
        case 0x1ce4e0u: goto label_1ce4e0;
        case 0x1ce4e4u: goto label_1ce4e4;
        case 0x1ce4e8u: goto label_1ce4e8;
        case 0x1ce4ecu: goto label_1ce4ec;
        case 0x1ce4f0u: goto label_1ce4f0;
        case 0x1ce4f4u: goto label_1ce4f4;
        case 0x1ce4f8u: goto label_1ce4f8;
        case 0x1ce4fcu: goto label_1ce4fc;
        case 0x1ce500u: goto label_1ce500;
        case 0x1ce504u: goto label_1ce504;
        case 0x1ce508u: goto label_1ce508;
        case 0x1ce50cu: goto label_1ce50c;
        case 0x1ce510u: goto label_1ce510;
        case 0x1ce514u: goto label_1ce514;
        case 0x1ce518u: goto label_1ce518;
        case 0x1ce51cu: goto label_1ce51c;
        case 0x1ce520u: goto label_1ce520;
        case 0x1ce524u: goto label_1ce524;
        case 0x1ce528u: goto label_1ce528;
        case 0x1ce52cu: goto label_1ce52c;
        case 0x1ce530u: goto label_1ce530;
        case 0x1ce534u: goto label_1ce534;
        case 0x1ce538u: goto label_1ce538;
        case 0x1ce53cu: goto label_1ce53c;
        case 0x1ce540u: goto label_1ce540;
        case 0x1ce544u: goto label_1ce544;
        case 0x1ce548u: goto label_1ce548;
        case 0x1ce54cu: goto label_1ce54c;
        default: break;
    }

    ctx->pc = 0x1ce3c0u;

label_1ce3c0:
    // 0x1ce3c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ce3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ce3c4:
    // 0x1ce3c4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1ce3c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ce3c8:
    // 0x1ce3c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ce3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ce3cc:
    // 0x1ce3cc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ce3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1ce3d0:
    // 0x1ce3d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce3d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ce3d4:
    // 0x1ce3d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ce3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1ce3d8:
    // 0x1ce3d8: 0x30d200ff  andi        $s2, $a2, 0xFF
    ctx->pc = 0x1ce3d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_1ce3dc:
    // 0x1ce3dc: 0x1500000e  bnez        $t0, . + 4 + (0xE << 2)
label_1ce3e0:
    if (ctx->pc == 0x1CE3E0u) {
        ctx->pc = 0x1CE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3DCu;
        // 0x1ce3e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE3E4u;
        goto label_1ce3e4;
    }
    ctx->pc = 0x1CE3DCu;
    {
        const bool branch_taken_0x1ce3dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3DCu;
        // 0x1ce3e0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3dc) {
            ctx->pc = 0x1CE418u;
            goto label_1ce418;
        }
    }
    ctx->pc = 0x1CE3E4u;
label_1ce3e4:
    // 0x1ce3e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ce3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ce3e8:
    // 0x1ce3e8: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x1ce3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1ce3ec:
    // 0x1ce3ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ce3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ce3f0:
    // 0x1ce3f0: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1ce3f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1ce3f4:
    // 0x1ce3f4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1ce3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1ce3f8:
    // 0x1ce3f8: 0x40f809  jalr        $v0
label_1ce3fc:
    if (ctx->pc == 0x1CE3FCu) {
        ctx->pc = 0x1CE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3F8u;
        // 0x1ce3fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE400u;
        goto label_1ce400;
    }
    ctx->pc = 0x1CE3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CE400u);
        ctx->pc = 0x1CE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3F8u;
        // 0x1ce3fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE3F8u, 0x1CE400u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE400u;
label_1ce400:
    // 0x1ce400: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_1ce404:
    if (ctx->pc == 0x1CE404u) {
        ctx->pc = 0x1CE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE400u;
        // 0x1ce404: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE408u;
        goto label_1ce408;
    }
    ctx->pc = 0x1CE400u;
    {
        const bool branch_taken_0x1ce400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE400u;
        // 0x1ce404: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce400) {
            ctx->pc = 0x1CE538u;
            goto label_1ce538;
        }
    }
    ctx->pc = 0x1CE408u;
label_1ce408:
    // 0x1ce408: 0xc06e4a4  jal         func_1B9290
label_1ce40c:
    if (ctx->pc == 0x1CE40Cu) {
        ctx->pc = 0x1CE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE408u;
        // 0x1ce40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE410u;
        goto label_1ce410;
    }
    ctx->pc = 0x1CE408u;
    SET_GPR_U32(ctx, 31, 0x1CE410u);
    ctx->pc = 0x1CE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE408u;
    // 0x1ce40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1CE408u, 0x1CE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE410u;
label_1ce410:
    // 0x1ce410: 0x10000049  b           . + 4 + (0x49 << 2)
label_1ce414:
    if (ctx->pc == 0x1CE414u) {
        ctx->pc = 0x1CE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE410u;
        // 0x1ce414: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE418u;
        goto label_1ce418;
    }
    ctx->pc = 0x1CE410u;
    {
        const bool branch_taken_0x1ce410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE410u;
        // 0x1ce414: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce410) {
            ctx->pc = 0x1CE538u;
            goto label_1ce538;
        }
    }
    ctx->pc = 0x1CE418u;
label_1ce418:
    // 0x1ce418: 0x8e260294  lw          $a2, 0x294($s1)
    ctx->pc = 0x1ce418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
label_1ce41c:
    // 0x1ce41c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ce41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ce420:
    // 0x1ce420: 0x18400045  blez        $v0, . + 4 + (0x45 << 2)
label_1ce424:
    if (ctx->pc == 0x1CE424u) {
        ctx->pc = 0x1CE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE420u;
        // 0x1ce424: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE428u;
        goto label_1ce428;
    }
    ctx->pc = 0x1CE420u;
    {
        const bool branch_taken_0x1ce420 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE420u;
        // 0x1ce424: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce420) {
            ctx->pc = 0x1CE538u;
            goto label_1ce538;
        }
    }
    ctx->pc = 0x1CE428u;
label_1ce428:
    // 0x1ce428: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1ce428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1ce42c:
    // 0x1ce42c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ce42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ce430:
    // 0x1ce430: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ce430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ce434:
    // 0x1ce434: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x1ce434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1ce438:
    // 0x1ce438: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ce438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ce43c:
    // 0x1ce43c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ce43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ce440:
    // 0x1ce440: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ce440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ce444:
    // 0x1ce444: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x1ce444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1ce448:
    // 0x1ce448: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ce44c:
    if (ctx->pc == 0x1CE44Cu) {
        ctx->pc = 0x1CE44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE448u;
        // 0x1ce44c: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE450u;
        goto label_1ce450;
    }
    ctx->pc = 0x1CE448u;
    {
        const bool branch_taken_0x1ce448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE448u;
        // 0x1ce44c: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce448) {
            ctx->pc = 0x1CE464u;
            goto label_1ce464;
        }
    }
    ctx->pc = 0x1CE450u;
label_1ce450:
    // 0x1ce450: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x1ce450u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ce454:
    // 0x1ce454: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_1ce458:
    if (ctx->pc == 0x1CE458u) {
        ctx->pc = 0x1CE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE454u;
        // 0x1ce458: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE45Cu;
        goto label_1ce45c;
    }
    ctx->pc = 0x1CE454u;
    {
        const bool branch_taken_0x1ce454 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce454) {
            ctx->pc = 0x1CE458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE454u;
            // 0x1ce458: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE45Cu;
            goto label_1ce45c;
        }
    }
    ctx->pc = 0x1CE45Cu;
label_1ce45c:
    // 0x1ce45c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ce45cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ce460:
    // 0x1ce460: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1ce460u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1ce464:
    // 0x1ce464: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ce464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ce468:
    // 0x1ce468: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ce46c:
    // 0x1ce46c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ce470:
    // 0x1ce470: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ce474:
    // 0x1ce474: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1ce474u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1ce478:
    // 0x1ce478: 0xa2120004  sb          $s2, 0x4($s0)
    ctx->pc = 0x1ce478u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 18));
label_1ce47c:
    // 0x1ce47c: 0xc073886  jal         func_1CE218
label_1ce480:
    if (ctx->pc == 0x1CE480u) {
        ctx->pc = 0x1CE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE47Cu;
        // 0x1ce480: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE484u;
        goto label_1ce484;
    }
    ctx->pc = 0x1CE47Cu;
    SET_GPR_U32(ctx, 31, 0x1CE484u);
    ctx->pc = 0x1CE480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE47Cu;
    // 0x1ce480: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE218u, 0x1CE47Cu, 0x1CE484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE484u;
label_1ce484:
    // 0x1ce484: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1ce484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_1ce488:
    // 0x1ce488: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_1ce48c:
    if (ctx->pc == 0x1CE48Cu) {
        ctx->pc = 0x1CE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE488u;
        // 0x1ce48c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE490u;
        goto label_1ce490;
    }
    ctx->pc = 0x1CE488u;
    {
        const bool branch_taken_0x1ce488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce488) {
            ctx->pc = 0x1CE48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE488u;
            // 0x1ce48c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE524u;
            goto label_1ce524;
        }
    }
    ctx->pc = 0x1CE490u;
label_1ce490:
    // 0x1ce490: 0x922203ac  lbu         $v0, 0x3AC($s1)
    ctx->pc = 0x1ce490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 940)));
label_1ce494:
    // 0x1ce494: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1ce494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ce498:
    // 0x1ce498: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_1ce49c:
    if (ctx->pc == 0x1CE49Cu) {
        ctx->pc = 0x1CE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE498u;
        // 0x1ce49c: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE4A0u;
        goto label_1ce4a0;
    }
    ctx->pc = 0x1CE498u;
    {
        const bool branch_taken_0x1ce498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce498) {
            ctx->pc = 0x1CE49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE498u;
            // 0x1ce49c: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE518u;
            goto label_1ce518;
        }
    }
    ctx->pc = 0x1CE4A0u;
label_1ce4a0:
    // 0x1ce4a0: 0x8e260294  lw          $a2, 0x294($s1)
    ctx->pc = 0x1ce4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
label_1ce4a4:
    // 0x1ce4a4: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1ce4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1ce4a8:
    // 0x1ce4a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ce4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ce4ac:
    // 0x1ce4ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ce4acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ce4b0:
    // 0x1ce4b0: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x1ce4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1ce4b4:
    // 0x1ce4b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ce4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ce4b8:
    // 0x1ce4b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ce4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1ce4bc:
    // 0x1ce4bc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1ce4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ce4c0:
    // 0x1ce4c0: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x1ce4c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1ce4c4:
    // 0x1ce4c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1ce4c8:
    if (ctx->pc == 0x1CE4C8u) {
        ctx->pc = 0x1CE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4C4u;
        // 0x1ce4c8: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE4CCu;
        goto label_1ce4cc;
    }
    ctx->pc = 0x1CE4C4u;
    {
        const bool branch_taken_0x1ce4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4C4u;
        // 0x1ce4c8: 0xacc4000c  sw          $a0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4c4) {
            ctx->pc = 0x1CE4E0u;
            goto label_1ce4e0;
        }
    }
    ctx->pc = 0x1CE4CCu;
label_1ce4cc:
    // 0x1ce4cc: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x1ce4ccu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ce4d0:
    // 0x1ce4d0: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_1ce4d4:
    if (ctx->pc == 0x1CE4D4u) {
        ctx->pc = 0x1CE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4D0u;
        // 0x1ce4d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE4D8u;
        goto label_1ce4d8;
    }
    ctx->pc = 0x1CE4D0u;
    {
        const bool branch_taken_0x1ce4d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce4d0) {
            ctx->pc = 0x1CE4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE4D0u;
            // 0x1ce4d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE4D8u;
            goto label_1ce4d8;
        }
    }
    ctx->pc = 0x1CE4D8u;
label_1ce4d8:
    // 0x1ce4d8: 0x1010  mfhi        $v0
    ctx->pc = 0x1ce4d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ce4dc:
    // 0x1ce4dc: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1ce4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1ce4e0:
    // 0x1ce4e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ce4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1ce4e4:
    // 0x1ce4e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ce4e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ce4e8:
    // 0x1ce4e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ce4ec:
    // 0x1ce4ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ce4f0:
    // 0x1ce4f0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1ce4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1ce4f4:
    // 0x1ce4f4: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x1ce4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_1ce4f8:
    // 0x1ce4f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ce4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ce4fc:
    // 0x1ce4fc: 0x922203ac  lbu         $v0, 0x3AC($s1)
    ctx->pc = 0x1ce4fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 940)));
label_1ce500:
    // 0x1ce500: 0xc06e4a4  jal         func_1B9290
label_1ce504:
    if (ctx->pc == 0x1CE504u) {
        ctx->pc = 0x1CE504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE500u;
        // 0x1ce504: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE508u;
        goto label_1ce508;
    }
    ctx->pc = 0x1CE500u;
    SET_GPR_U32(ctx, 31, 0x1CE508u);
    ctx->pc = 0x1CE504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE500u;
    // 0x1ce504: 0xa2020004  sb          $v0, 0x4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1CE500u, 0x1CE508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE508u;
label_1ce508:
    // 0x1ce508: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ce508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ce50c:
    // 0x1ce50c: 0xc073886  jal         func_1CE218
label_1ce510:
    if (ctx->pc == 0x1CE510u) {
        ctx->pc = 0x1CE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE50Cu;
        // 0x1ce510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE514u;
        goto label_1ce514;
    }
    ctx->pc = 0x1CE50Cu;
    SET_GPR_U32(ctx, 31, 0x1CE514u);
    ctx->pc = 0x1CE510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE50Cu;
    // 0x1ce510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE218u, 0x1CE50Cu, 0x1CE514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE514u;
label_1ce514:
    // 0x1ce514: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x1ce514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_1ce518:
    // 0x1ce518: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ce51c:
    if (ctx->pc == 0x1CE51Cu) {
        ctx->pc = 0x1CE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE518u;
        // 0x1ce51c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE520u;
        goto label_1ce520;
    }
    ctx->pc = 0x1CE518u;
    {
        const bool branch_taken_0x1ce518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE518u;
        // 0x1ce51c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce518) {
            ctx->pc = 0x1CE538u;
            goto label_1ce538;
        }
    }
    ctx->pc = 0x1CE520u;
label_1ce520:
    // 0x1ce520: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1ce520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ce524:
    // 0x1ce524: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ce524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ce528:
    // 0x1ce528: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ce528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ce52c:
    // 0x1ce52c: 0x60f809  jalr        $v1
label_1ce530:
    if (ctx->pc == 0x1CE530u) {
        ctx->pc = 0x1CE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE52Cu;
        // 0x1ce530: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE534u;
        goto label_1ce534;
    }
    ctx->pc = 0x1CE52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CE534u);
        ctx->pc = 0x1CE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE52Cu;
        // 0x1ce530: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE52Cu, 0x1CE534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CE534u;
label_1ce534:
    // 0x1ce534: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ce534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ce538:
    // 0x1ce538: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ce538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce53c:
    // 0x1ce53c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ce53cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce540:
    // 0x1ce540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce544:
    // 0x1ce544: 0x3e00008  jr          $ra
label_1ce548:
    if (ctx->pc == 0x1CE548u) {
        ctx->pc = 0x1CE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE544u;
        // 0x1ce548: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CE54Cu;
        goto label_1ce54c;
    }
    ctx->pc = 0x1CE544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE544u;
        // 0x1ce548: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE54Cu;
label_1ce54c:
    // 0x1ce54c: 0x0  nop
    ctx->pc = 0x1ce54cu;
    // NOP
    ctx->pc = 0x1ce550u;
}
