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

// Function: sub_004E93D0
// Address: 0x4e93d0 - 0x4e9580
void sub_004E93D0_0x4e93d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E93D0_0x4e93d0");
#endif

    switch (ctx->pc) {
        case 0x4e93d0u: goto label_4e93d0;
        case 0x4e93d4u: goto label_4e93d4;
        case 0x4e93d8u: goto label_4e93d8;
        case 0x4e93dcu: goto label_4e93dc;
        case 0x4e93e0u: goto label_4e93e0;
        case 0x4e93e4u: goto label_4e93e4;
        case 0x4e93e8u: goto label_4e93e8;
        case 0x4e93ecu: goto label_4e93ec;
        case 0x4e93f0u: goto label_4e93f0;
        case 0x4e93f4u: goto label_4e93f4;
        case 0x4e93f8u: goto label_4e93f8;
        case 0x4e93fcu: goto label_4e93fc;
        case 0x4e9400u: goto label_4e9400;
        case 0x4e9404u: goto label_4e9404;
        case 0x4e9408u: goto label_4e9408;
        case 0x4e940cu: goto label_4e940c;
        case 0x4e9410u: goto label_4e9410;
        case 0x4e9414u: goto label_4e9414;
        case 0x4e9418u: goto label_4e9418;
        case 0x4e941cu: goto label_4e941c;
        case 0x4e9420u: goto label_4e9420;
        case 0x4e9424u: goto label_4e9424;
        case 0x4e9428u: goto label_4e9428;
        case 0x4e942cu: goto label_4e942c;
        case 0x4e9430u: goto label_4e9430;
        case 0x4e9434u: goto label_4e9434;
        case 0x4e9438u: goto label_4e9438;
        case 0x4e943cu: goto label_4e943c;
        case 0x4e9440u: goto label_4e9440;
        case 0x4e9444u: goto label_4e9444;
        case 0x4e9448u: goto label_4e9448;
        case 0x4e944cu: goto label_4e944c;
        case 0x4e9450u: goto label_4e9450;
        case 0x4e9454u: goto label_4e9454;
        case 0x4e9458u: goto label_4e9458;
        case 0x4e945cu: goto label_4e945c;
        case 0x4e9460u: goto label_4e9460;
        case 0x4e9464u: goto label_4e9464;
        case 0x4e9468u: goto label_4e9468;
        case 0x4e946cu: goto label_4e946c;
        case 0x4e9470u: goto label_4e9470;
        case 0x4e9474u: goto label_4e9474;
        case 0x4e9478u: goto label_4e9478;
        case 0x4e947cu: goto label_4e947c;
        case 0x4e9480u: goto label_4e9480;
        case 0x4e9484u: goto label_4e9484;
        case 0x4e9488u: goto label_4e9488;
        case 0x4e948cu: goto label_4e948c;
        case 0x4e9490u: goto label_4e9490;
        case 0x4e9494u: goto label_4e9494;
        case 0x4e9498u: goto label_4e9498;
        case 0x4e949cu: goto label_4e949c;
        case 0x4e94a0u: goto label_4e94a0;
        case 0x4e94a4u: goto label_4e94a4;
        case 0x4e94a8u: goto label_4e94a8;
        case 0x4e94acu: goto label_4e94ac;
        case 0x4e94b0u: goto label_4e94b0;
        case 0x4e94b4u: goto label_4e94b4;
        case 0x4e94b8u: goto label_4e94b8;
        case 0x4e94bcu: goto label_4e94bc;
        case 0x4e94c0u: goto label_4e94c0;
        case 0x4e94c4u: goto label_4e94c4;
        case 0x4e94c8u: goto label_4e94c8;
        case 0x4e94ccu: goto label_4e94cc;
        case 0x4e94d0u: goto label_4e94d0;
        case 0x4e94d4u: goto label_4e94d4;
        case 0x4e94d8u: goto label_4e94d8;
        case 0x4e94dcu: goto label_4e94dc;
        case 0x4e94e0u: goto label_4e94e0;
        case 0x4e94e4u: goto label_4e94e4;
        case 0x4e94e8u: goto label_4e94e8;
        case 0x4e94ecu: goto label_4e94ec;
        case 0x4e94f0u: goto label_4e94f0;
        case 0x4e94f4u: goto label_4e94f4;
        case 0x4e94f8u: goto label_4e94f8;
        case 0x4e94fcu: goto label_4e94fc;
        case 0x4e9500u: goto label_4e9500;
        case 0x4e9504u: goto label_4e9504;
        case 0x4e9508u: goto label_4e9508;
        case 0x4e950cu: goto label_4e950c;
        case 0x4e9510u: goto label_4e9510;
        case 0x4e9514u: goto label_4e9514;
        case 0x4e9518u: goto label_4e9518;
        case 0x4e951cu: goto label_4e951c;
        case 0x4e9520u: goto label_4e9520;
        case 0x4e9524u: goto label_4e9524;
        case 0x4e9528u: goto label_4e9528;
        case 0x4e952cu: goto label_4e952c;
        case 0x4e9530u: goto label_4e9530;
        case 0x4e9534u: goto label_4e9534;
        case 0x4e9538u: goto label_4e9538;
        case 0x4e953cu: goto label_4e953c;
        case 0x4e9540u: goto label_4e9540;
        case 0x4e9544u: goto label_4e9544;
        case 0x4e9548u: goto label_4e9548;
        case 0x4e954cu: goto label_4e954c;
        case 0x4e9550u: goto label_4e9550;
        case 0x4e9554u: goto label_4e9554;
        case 0x4e9558u: goto label_4e9558;
        case 0x4e955cu: goto label_4e955c;
        case 0x4e9560u: goto label_4e9560;
        case 0x4e9564u: goto label_4e9564;
        case 0x4e9568u: goto label_4e9568;
        case 0x4e956cu: goto label_4e956c;
        case 0x4e9570u: goto label_4e9570;
        case 0x4e9574u: goto label_4e9574;
        case 0x4e9578u: goto label_4e9578;
        case 0x4e957cu: goto label_4e957c;
        default: break;
    }

    ctx->pc = 0x4e93d0u;

label_4e93d0:
    // 0x4e93d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e93d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e93d4:
    // 0x4e93d4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e93d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e93d8:
    // 0x4e93d8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e93d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e93dc:
    // 0x4e93dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e93dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e93e0:
    // 0x4e93e0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e93e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e93e4:
    // 0x4e93e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e93e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e93e8:
    // 0x4e93e8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e93e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e93ec:
    // 0x4e93ec: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e93ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e93f0:
    // 0x4e93f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e93f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e93f4:
    // 0x4e93f4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e93f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e93f8:
    // 0x4e93f8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e93f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e93fc:
    // 0x4e93fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e93fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9400:
    // 0x4e9400: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e9400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e9404:
    // 0x4e9404: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e9404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e9408:
    // 0x4e9408: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e940c:
    if (ctx->pc == 0x4E940Cu) {
        ctx->pc = 0x4E940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9408u;
        // 0x4e940c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9410u;
        goto label_4e9410;
    }
    ctx->pc = 0x4E9408u;
    {
        const bool branch_taken_0x4e9408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9408u;
        // 0x4e940c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9408) {
            ctx->pc = 0x4E9454u;
            goto label_4e9454;
        }
    }
    ctx->pc = 0x4E9410u;
label_4e9410:
    // 0x4e9410: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e9414:
    if (ctx->pc == 0x4E9414u) {
        ctx->pc = 0x4E9414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9410u;
        // 0x4e9414: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9418u;
        goto label_4e9418;
    }
    ctx->pc = 0x4E9410u;
    {
        const bool branch_taken_0x4e9410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9410) {
            ctx->pc = 0x4E9414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9410u;
            // 0x4e9414: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9424u;
            goto label_4e9424;
        }
    }
    ctx->pc = 0x4E9418u;
label_4e9418:
    // 0x4e9418: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e9418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e941c:
    // 0x4e941c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e941cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e9420:
    // 0x4e9420: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e9420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e9424:
    // 0x4e9424: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e9424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e9428:
    // 0x4e9428: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e9428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e942c:
    // 0x4e942c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e9430:
    // 0x4e9430: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e9430u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e9434:
    // 0x4e9434: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e9434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e9438:
    // 0x4e9438: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e9438u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e943c:
    // 0x4e943c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e943cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e9440:
    // 0x4e9440: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e9440u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e9444:
    // 0x4e9444: 0xc10c1bb  jal         func_4306EC
label_4e9448:
    if (ctx->pc == 0x4E9448u) {
        ctx->pc = 0x4E9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9444u;
        // 0x4e9448: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E944Cu;
        goto label_4e944c;
    }
    ctx->pc = 0x4E9444u;
    SET_GPR_U32(ctx, 31, 0x4E944Cu);
    ctx->pc = 0x4E9448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9444u;
    // 0x4e9448: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E9444u, 0x4E944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E944Cu;
label_4e944c:
    // 0x4e944c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e9450:
    if (ctx->pc == 0x4E9450u) {
        ctx->pc = 0x4E9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E944Cu;
        // 0x4e9450: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9454u;
        goto label_4e9454;
    }
    ctx->pc = 0x4E944Cu;
    {
        const bool branch_taken_0x4e944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E944Cu;
        // 0x4e9450: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e944c) {
            ctx->pc = 0x4E9544u;
            goto label_4e9544;
        }
    }
    ctx->pc = 0x4E9454u;
label_4e9454:
    // 0x4e9454: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e9454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e9458:
    // 0x4e9458: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e9458u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e945c:
    // 0x4e945c: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e945cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e9460:
    // 0x4e9460: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e9460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e9464:
    // 0x4e9464: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e9464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e9468:
    // 0x4e9468: 0x249669a8  addiu       $s6, $a0, 0x69A8
    ctx->pc = 0x4e9468u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 27048));
label_4e946c:
    // 0x4e946c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e946cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e9470:
    // 0x4e9470: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e9470u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e9474:
    // 0x4e9474: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e9474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e9478:
    // 0x4e9478: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e9478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e947c:
    // 0x4e947c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e947cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e9480:
    // 0x4e9480: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e9480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e9484:
    // 0x4e9484: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e9484u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e9488:
    // 0x4e9488: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e9488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e948c:
    // 0x4e948c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e9490:
    // 0x4e9490: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e9490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e9494:
    // 0x4e9494: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e9494u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e9498:
    // 0x4e9498: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e9498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e949c:
    // 0x4e949c: 0x24a569a0  addiu       $a1, $a1, 0x69A0
    ctx->pc = 0x4e949cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
label_4e94a0:
    // 0x4e94a0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e94a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e94a4:
    // 0x4e94a4: 0x254a69d0  addiu       $t2, $t2, 0x69D0
    ctx->pc = 0x4e94a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 27088));
label_4e94a8:
    // 0x4e94a8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e94a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e94ac:
    // 0x4e94ac: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e94acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e94b0:
    // 0x4e94b0: 0x40f809  jalr        $v0
label_4e94b4:
    if (ctx->pc == 0x4E94B4u) {
        ctx->pc = 0x4E94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E94B0u;
        // 0x4e94b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E94B8u;
        goto label_4e94b8;
    }
    ctx->pc = 0x4E94B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E94B8u);
        ctx->pc = 0x4E94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E94B0u;
        // 0x4e94b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E94B0u, 0x4E94B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E94B8u;
label_4e94b8:
    // 0x4e94b8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e94b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e94bc:
    // 0x4e94bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e94bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e94c0:
    // 0x4e94c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e94c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e94c4:
    // 0x4e94c4: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e94c8:
    // 0x4e94c8: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e94c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e94cc:
    // 0x4e94cc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e94ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e94d0:
    // 0x4e94d0: 0xc10c1bb  jal         func_4306EC
label_4e94d4:
    if (ctx->pc == 0x4E94D4u) {
        ctx->pc = 0x4E94D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E94D0u;
        // 0x4e94d4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E94D8u;
        goto label_4e94d8;
    }
    ctx->pc = 0x4E94D0u;
    SET_GPR_U32(ctx, 31, 0x4E94D8u);
    ctx->pc = 0x4E94D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E94D0u;
    // 0x4e94d4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E94D0u, 0x4E94D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E94D8u;
label_4e94d8:
    // 0x4e94d8: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e94dc:
    if (ctx->pc == 0x4E94DCu) {
        ctx->pc = 0x4E94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E94D8u;
        // 0x4e94dc: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E94E0u;
        goto label_4e94e0;
    }
    ctx->pc = 0x4E94D8u;
    {
        const bool branch_taken_0x4e94d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e94d8) {
            ctx->pc = 0x4E94DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E94D8u;
            // 0x4e94dc: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E94ECu;
            goto label_4e94ec;
        }
    }
    ctx->pc = 0x4E94E0u;
label_4e94e0:
    // 0x4e94e0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e94e4:
    // 0x4e94e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e94e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e94e8:
    // 0x4e94e8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e94e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e94ec:
    // 0x4e94ec: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e94ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e94f0:
    // 0x4e94f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e94f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e94f4:
    // 0x4e94f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e94f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e94f8:
    // 0x4e94f8: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e94f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e94fc:
    // 0x4e94fc: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e94fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e9500:
    // 0x4e9500: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e9500u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e9504:
    // 0x4e9504: 0xc10c1bb  jal         func_4306EC
label_4e9508:
    if (ctx->pc == 0x4E9508u) {
        ctx->pc = 0x4E9508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9504u;
        // 0x4e9508: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E950Cu;
        goto label_4e950c;
    }
    ctx->pc = 0x4E9504u;
    SET_GPR_U32(ctx, 31, 0x4E950Cu);
    ctx->pc = 0x4E9508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9504u;
    // 0x4e9508: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E9504u, 0x4E950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E950Cu;
label_4e950c:
    // 0x4e950c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e950cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e9510:
    // 0x4e9510: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e9514:
    if (ctx->pc == 0x4E9514u) {
        ctx->pc = 0x4E9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9510u;
        // 0x4e9514: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9518u;
        goto label_4e9518;
    }
    ctx->pc = 0x4E9510u;
    {
        const bool branch_taken_0x4e9510 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9510u;
        // 0x4e9514: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9510) {
            ctx->pc = 0x4E9534u;
            goto label_4e9534;
        }
    }
    ctx->pc = 0x4E9518u;
label_4e9518:
    // 0x4e9518: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e9518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e951c:
    // 0x4e951c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e951cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e9520:
    // 0x4e9520: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9524:
    // 0x4e9524: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9528:
    // 0x4e9528: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e952c:
    // 0x4e952c: 0x60f809  jalr        $v1
label_4e9530:
    if (ctx->pc == 0x4E9530u) {
        ctx->pc = 0x4E9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E952Cu;
        // 0x4e9530: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9534u;
        goto label_4e9534;
    }
    ctx->pc = 0x4E952Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9534u);
        ctx->pc = 0x4E9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E952Cu;
        // 0x4e9530: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E952Cu, 0x4E9534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9534u;
label_4e9534:
    // 0x4e9534: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e9534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e9538:
    // 0x4e9538: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e9538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e953c:
    // 0x4e953c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e953cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e9540:
    // 0x4e9540: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e9540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e9544:
    // 0x4e9544: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e9544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e9548:
    // 0x4e9548: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e9548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e954c:
    // 0x4e954c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e954cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e9550:
    // 0x4e9550: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e9550u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e9554:
    // 0x4e9554: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e9554u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e9558:
    // 0x4e9558: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e9558u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e955c:
    // 0x4e955c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e955cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9560:
    // 0x4e9560: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e9560u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9564:
    // 0x4e9564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9568:
    // 0x4e9568: 0x3e00008  jr          $ra
label_4e956c:
    if (ctx->pc == 0x4E956Cu) {
        ctx->pc = 0x4E956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9568u;
        // 0x4e956c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9570u;
        goto label_4e9570;
    }
    ctx->pc = 0x4E9568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9568u;
        // 0x4e956c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9570u;
label_4e9570:
    // 0x4e9570: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4e9570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4e9574:
    // 0x4e9574: 0x0  nop
    ctx->pc = 0x4e9574u;
    // NOP
label_4e9578:
    // 0x4e9578: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4e9578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4e957c:
    // 0x4e957c: 0x0  nop
    ctx->pc = 0x4e957cu;
    // NOP
    ctx->pc = 0x4e9580u;
}
