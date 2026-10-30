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

// Function: sub_004EC660
// Address: 0x4ec660 - 0x4eca10
void sub_004EC660_0x4ec660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC660_0x4ec660");
#endif

    switch (ctx->pc) {
        case 0x4ec660u: goto label_4ec660;
        case 0x4ec664u: goto label_4ec664;
        case 0x4ec668u: goto label_4ec668;
        case 0x4ec66cu: goto label_4ec66c;
        case 0x4ec670u: goto label_4ec670;
        case 0x4ec674u: goto label_4ec674;
        case 0x4ec678u: goto label_4ec678;
        case 0x4ec67cu: goto label_4ec67c;
        case 0x4ec680u: goto label_4ec680;
        case 0x4ec684u: goto label_4ec684;
        case 0x4ec688u: goto label_4ec688;
        case 0x4ec68cu: goto label_4ec68c;
        case 0x4ec690u: goto label_4ec690;
        case 0x4ec694u: goto label_4ec694;
        case 0x4ec698u: goto label_4ec698;
        case 0x4ec69cu: goto label_4ec69c;
        case 0x4ec6a0u: goto label_4ec6a0;
        case 0x4ec6a4u: goto label_4ec6a4;
        case 0x4ec6a8u: goto label_4ec6a8;
        case 0x4ec6acu: goto label_4ec6ac;
        case 0x4ec6b0u: goto label_4ec6b0;
        case 0x4ec6b4u: goto label_4ec6b4;
        case 0x4ec6b8u: goto label_4ec6b8;
        case 0x4ec6bcu: goto label_4ec6bc;
        case 0x4ec6c0u: goto label_4ec6c0;
        case 0x4ec6c4u: goto label_4ec6c4;
        case 0x4ec6c8u: goto label_4ec6c8;
        case 0x4ec6ccu: goto label_4ec6cc;
        case 0x4ec6d0u: goto label_4ec6d0;
        case 0x4ec6d4u: goto label_4ec6d4;
        case 0x4ec6d8u: goto label_4ec6d8;
        case 0x4ec6dcu: goto label_4ec6dc;
        case 0x4ec6e0u: goto label_4ec6e0;
        case 0x4ec6e4u: goto label_4ec6e4;
        case 0x4ec6e8u: goto label_4ec6e8;
        case 0x4ec6ecu: goto label_4ec6ec;
        case 0x4ec6f0u: goto label_4ec6f0;
        case 0x4ec6f4u: goto label_4ec6f4;
        case 0x4ec6f8u: goto label_4ec6f8;
        case 0x4ec6fcu: goto label_4ec6fc;
        case 0x4ec700u: goto label_4ec700;
        case 0x4ec704u: goto label_4ec704;
        case 0x4ec708u: goto label_4ec708;
        case 0x4ec70cu: goto label_4ec70c;
        case 0x4ec710u: goto label_4ec710;
        case 0x4ec714u: goto label_4ec714;
        case 0x4ec718u: goto label_4ec718;
        case 0x4ec71cu: goto label_4ec71c;
        case 0x4ec720u: goto label_4ec720;
        case 0x4ec724u: goto label_4ec724;
        case 0x4ec728u: goto label_4ec728;
        case 0x4ec72cu: goto label_4ec72c;
        case 0x4ec730u: goto label_4ec730;
        case 0x4ec734u: goto label_4ec734;
        case 0x4ec738u: goto label_4ec738;
        case 0x4ec73cu: goto label_4ec73c;
        case 0x4ec740u: goto label_4ec740;
        case 0x4ec744u: goto label_4ec744;
        case 0x4ec748u: goto label_4ec748;
        case 0x4ec74cu: goto label_4ec74c;
        case 0x4ec750u: goto label_4ec750;
        case 0x4ec754u: goto label_4ec754;
        case 0x4ec758u: goto label_4ec758;
        case 0x4ec75cu: goto label_4ec75c;
        case 0x4ec760u: goto label_4ec760;
        case 0x4ec764u: goto label_4ec764;
        case 0x4ec768u: goto label_4ec768;
        case 0x4ec76cu: goto label_4ec76c;
        case 0x4ec770u: goto label_4ec770;
        case 0x4ec774u: goto label_4ec774;
        case 0x4ec778u: goto label_4ec778;
        case 0x4ec77cu: goto label_4ec77c;
        case 0x4ec780u: goto label_4ec780;
        case 0x4ec784u: goto label_4ec784;
        case 0x4ec788u: goto label_4ec788;
        case 0x4ec78cu: goto label_4ec78c;
        case 0x4ec790u: goto label_4ec790;
        case 0x4ec794u: goto label_4ec794;
        case 0x4ec798u: goto label_4ec798;
        case 0x4ec79cu: goto label_4ec79c;
        case 0x4ec7a0u: goto label_4ec7a0;
        case 0x4ec7a4u: goto label_4ec7a4;
        case 0x4ec7a8u: goto label_4ec7a8;
        case 0x4ec7acu: goto label_4ec7ac;
        case 0x4ec7b0u: goto label_4ec7b0;
        case 0x4ec7b4u: goto label_4ec7b4;
        case 0x4ec7b8u: goto label_4ec7b8;
        case 0x4ec7bcu: goto label_4ec7bc;
        case 0x4ec7c0u: goto label_4ec7c0;
        case 0x4ec7c4u: goto label_4ec7c4;
        case 0x4ec7c8u: goto label_4ec7c8;
        case 0x4ec7ccu: goto label_4ec7cc;
        case 0x4ec7d0u: goto label_4ec7d0;
        case 0x4ec7d4u: goto label_4ec7d4;
        case 0x4ec7d8u: goto label_4ec7d8;
        case 0x4ec7dcu: goto label_4ec7dc;
        case 0x4ec7e0u: goto label_4ec7e0;
        case 0x4ec7e4u: goto label_4ec7e4;
        case 0x4ec7e8u: goto label_4ec7e8;
        case 0x4ec7ecu: goto label_4ec7ec;
        case 0x4ec7f0u: goto label_4ec7f0;
        case 0x4ec7f4u: goto label_4ec7f4;
        case 0x4ec7f8u: goto label_4ec7f8;
        case 0x4ec7fcu: goto label_4ec7fc;
        case 0x4ec800u: goto label_4ec800;
        case 0x4ec804u: goto label_4ec804;
        case 0x4ec808u: goto label_4ec808;
        case 0x4ec80cu: goto label_4ec80c;
        case 0x4ec810u: goto label_4ec810;
        case 0x4ec814u: goto label_4ec814;
        case 0x4ec818u: goto label_4ec818;
        case 0x4ec81cu: goto label_4ec81c;
        case 0x4ec820u: goto label_4ec820;
        case 0x4ec824u: goto label_4ec824;
        case 0x4ec828u: goto label_4ec828;
        case 0x4ec82cu: goto label_4ec82c;
        case 0x4ec830u: goto label_4ec830;
        case 0x4ec834u: goto label_4ec834;
        case 0x4ec838u: goto label_4ec838;
        case 0x4ec83cu: goto label_4ec83c;
        case 0x4ec840u: goto label_4ec840;
        case 0x4ec844u: goto label_4ec844;
        case 0x4ec848u: goto label_4ec848;
        case 0x4ec84cu: goto label_4ec84c;
        case 0x4ec850u: goto label_4ec850;
        case 0x4ec854u: goto label_4ec854;
        case 0x4ec858u: goto label_4ec858;
        case 0x4ec85cu: goto label_4ec85c;
        case 0x4ec860u: goto label_4ec860;
        case 0x4ec864u: goto label_4ec864;
        case 0x4ec868u: goto label_4ec868;
        case 0x4ec86cu: goto label_4ec86c;
        case 0x4ec870u: goto label_4ec870;
        case 0x4ec874u: goto label_4ec874;
        case 0x4ec878u: goto label_4ec878;
        case 0x4ec87cu: goto label_4ec87c;
        case 0x4ec880u: goto label_4ec880;
        case 0x4ec884u: goto label_4ec884;
        case 0x4ec888u: goto label_4ec888;
        case 0x4ec88cu: goto label_4ec88c;
        case 0x4ec890u: goto label_4ec890;
        case 0x4ec894u: goto label_4ec894;
        case 0x4ec898u: goto label_4ec898;
        case 0x4ec89cu: goto label_4ec89c;
        case 0x4ec8a0u: goto label_4ec8a0;
        case 0x4ec8a4u: goto label_4ec8a4;
        case 0x4ec8a8u: goto label_4ec8a8;
        case 0x4ec8acu: goto label_4ec8ac;
        case 0x4ec8b0u: goto label_4ec8b0;
        case 0x4ec8b4u: goto label_4ec8b4;
        case 0x4ec8b8u: goto label_4ec8b8;
        case 0x4ec8bcu: goto label_4ec8bc;
        case 0x4ec8c0u: goto label_4ec8c0;
        case 0x4ec8c4u: goto label_4ec8c4;
        case 0x4ec8c8u: goto label_4ec8c8;
        case 0x4ec8ccu: goto label_4ec8cc;
        case 0x4ec8d0u: goto label_4ec8d0;
        case 0x4ec8d4u: goto label_4ec8d4;
        case 0x4ec8d8u: goto label_4ec8d8;
        case 0x4ec8dcu: goto label_4ec8dc;
        case 0x4ec8e0u: goto label_4ec8e0;
        case 0x4ec8e4u: goto label_4ec8e4;
        case 0x4ec8e8u: goto label_4ec8e8;
        case 0x4ec8ecu: goto label_4ec8ec;
        case 0x4ec8f0u: goto label_4ec8f0;
        case 0x4ec8f4u: goto label_4ec8f4;
        case 0x4ec8f8u: goto label_4ec8f8;
        case 0x4ec8fcu: goto label_4ec8fc;
        case 0x4ec900u: goto label_4ec900;
        case 0x4ec904u: goto label_4ec904;
        case 0x4ec908u: goto label_4ec908;
        case 0x4ec90cu: goto label_4ec90c;
        case 0x4ec910u: goto label_4ec910;
        case 0x4ec914u: goto label_4ec914;
        case 0x4ec918u: goto label_4ec918;
        case 0x4ec91cu: goto label_4ec91c;
        case 0x4ec920u: goto label_4ec920;
        case 0x4ec924u: goto label_4ec924;
        case 0x4ec928u: goto label_4ec928;
        case 0x4ec92cu: goto label_4ec92c;
        case 0x4ec930u: goto label_4ec930;
        case 0x4ec934u: goto label_4ec934;
        case 0x4ec938u: goto label_4ec938;
        case 0x4ec93cu: goto label_4ec93c;
        case 0x4ec940u: goto label_4ec940;
        case 0x4ec944u: goto label_4ec944;
        case 0x4ec948u: goto label_4ec948;
        case 0x4ec94cu: goto label_4ec94c;
        case 0x4ec950u: goto label_4ec950;
        case 0x4ec954u: goto label_4ec954;
        case 0x4ec958u: goto label_4ec958;
        case 0x4ec95cu: goto label_4ec95c;
        case 0x4ec960u: goto label_4ec960;
        case 0x4ec964u: goto label_4ec964;
        case 0x4ec968u: goto label_4ec968;
        case 0x4ec96cu: goto label_4ec96c;
        case 0x4ec970u: goto label_4ec970;
        case 0x4ec974u: goto label_4ec974;
        case 0x4ec978u: goto label_4ec978;
        case 0x4ec97cu: goto label_4ec97c;
        case 0x4ec980u: goto label_4ec980;
        case 0x4ec984u: goto label_4ec984;
        case 0x4ec988u: goto label_4ec988;
        case 0x4ec98cu: goto label_4ec98c;
        case 0x4ec990u: goto label_4ec990;
        case 0x4ec994u: goto label_4ec994;
        case 0x4ec998u: goto label_4ec998;
        case 0x4ec99cu: goto label_4ec99c;
        case 0x4ec9a0u: goto label_4ec9a0;
        case 0x4ec9a4u: goto label_4ec9a4;
        case 0x4ec9a8u: goto label_4ec9a8;
        case 0x4ec9acu: goto label_4ec9ac;
        case 0x4ec9b0u: goto label_4ec9b0;
        case 0x4ec9b4u: goto label_4ec9b4;
        case 0x4ec9b8u: goto label_4ec9b8;
        case 0x4ec9bcu: goto label_4ec9bc;
        case 0x4ec9c0u: goto label_4ec9c0;
        case 0x4ec9c4u: goto label_4ec9c4;
        case 0x4ec9c8u: goto label_4ec9c8;
        case 0x4ec9ccu: goto label_4ec9cc;
        case 0x4ec9d0u: goto label_4ec9d0;
        case 0x4ec9d4u: goto label_4ec9d4;
        case 0x4ec9d8u: goto label_4ec9d8;
        case 0x4ec9dcu: goto label_4ec9dc;
        case 0x4ec9e0u: goto label_4ec9e0;
        case 0x4ec9e4u: goto label_4ec9e4;
        case 0x4ec9e8u: goto label_4ec9e8;
        case 0x4ec9ecu: goto label_4ec9ec;
        case 0x4ec9f0u: goto label_4ec9f0;
        case 0x4ec9f4u: goto label_4ec9f4;
        case 0x4ec9f8u: goto label_4ec9f8;
        case 0x4ec9fcu: goto label_4ec9fc;
        case 0x4eca00u: goto label_4eca00;
        case 0x4eca04u: goto label_4eca04;
        case 0x4eca08u: goto label_4eca08;
        case 0x4eca0cu: goto label_4eca0c;
        default: break;
    }

    ctx->pc = 0x4ec660u;

label_4ec660:
    // 0x4ec660: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x4ec660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_4ec664:
    // 0x4ec664: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ec664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4ec668:
    // 0x4ec668: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x4ec668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_4ec66c:
    // 0x4ec66c: 0x2442edf8  addiu       $v0, $v0, -0x1208
    ctx->pc = 0x4ec66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962680));
label_4ec670:
    // 0x4ec670: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x4ec670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_4ec674:
    // 0x4ec674: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4ec674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ec678:
    // 0x4ec678: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x4ec678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_4ec67c:
    // 0x4ec67c: 0x26434150  addiu       $v1, $s2, 0x4150
    ctx->pc = 0x4ec67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16720));
label_4ec680:
    // 0x4ec680: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x4ec680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_4ec684:
    // 0x4ec684: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4ec684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ec688:
    // 0x4ec688: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x4ec688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_4ec68c:
    // 0x4ec68c: 0x3c130054  lui         $s3, 0x54
    ctx->pc = 0x4ec68cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)84 << 16));
label_4ec690:
    // 0x4ec690: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x4ec690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_4ec694:
    // 0x4ec694: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x4ec694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_4ec698:
    // 0x4ec698: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4ec698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4ec69c:
    // 0x4ec69c: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x4ec69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_4ec6a0:
    // 0x4ec6a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4ec6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4ec6a4:
    // 0x4ec6a4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4ec6a8:
    if (ctx->pc == 0x4EC6A8u) {
        ctx->pc = 0x4EC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC6A4u;
        // 0x4ec6a8: 0xae424120  sw          $v0, 0x4120($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC6ACu;
        goto label_4ec6ac;
    }
    ctx->pc = 0x4EC6A4u;
    {
        const bool branch_taken_0x4ec6a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC6A4u;
        // 0x4ec6a8: 0xae424120  sw          $v0, 0x4120($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec6a4) {
            ctx->pc = 0x4EC6E0u;
            goto label_4ec6e0;
        }
    }
    ctx->pc = 0x4EC6ACu;
label_4ec6ac:
    // 0x4ec6ac: 0x26504a50  addiu       $s0, $s2, 0x4A50
    ctx->pc = 0x4ec6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 19024));
label_4ec6b0:
    // 0x4ec6b0: 0x1070000c  beq         $v1, $s0, . + 4 + (0xC << 2)
label_4ec6b4:
    if (ctx->pc == 0x4EC6B4u) {
        ctx->pc = 0x4EC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC6B0u;
        // 0x4ec6b4: 0x2662e9c0  addiu       $v0, $s3, -0x1640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC6B8u;
        goto label_4ec6b8;
    }
    ctx->pc = 0x4EC6B0u;
    {
        const bool branch_taken_0x4ec6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x4EC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC6B0u;
        // 0x4ec6b4: 0x2662e9c0  addiu       $v0, $s3, -0x1640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec6b0) {
            ctx->pc = 0x4EC6E4u;
            goto label_4ec6e4;
        }
    }
    ctx->pc = 0x4EC6B8u;
label_4ec6b8:
    // 0x4ec6b8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x4ec6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4ec6bc:
    // 0x4ec6bc: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x4ec6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_4ec6c0:
    // 0x4ec6c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ec6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ec6c4:
    // 0x4ec6c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ec6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ec6c8:
    // 0x4ec6c8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ec6c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ec6cc:
    // 0x4ec6cc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ec6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ec6d0:
    // 0x4ec6d0: 0x60f809  jalr        $v1
label_4ec6d4:
    if (ctx->pc == 0x4EC6D4u) {
        ctx->pc = 0x4EC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC6D0u;
        // 0x4ec6d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC6D8u;
        goto label_4ec6d8;
    }
    ctx->pc = 0x4EC6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EC6D8u);
        ctx->pc = 0x4EC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC6D0u;
        // 0x4ec6d4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC6D0u, 0x4EC6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EC6D8u;
label_4ec6d8:
    // 0x4ec6d8: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_4ec6dc:
    if (ctx->pc == 0x4EC6DCu) {
        ctx->pc = 0x4EC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC6D8u;
        // 0x4ec6dc: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC6E0u;
        goto label_4ec6e0;
    }
    ctx->pc = 0x4EC6D8u;
    {
        const bool branch_taken_0x4ec6d8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x4EC6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC6D8u;
        // 0x4ec6dc: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec6d8) {
            ctx->pc = 0x4EC6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ec6c0;
        }
    }
    ctx->pc = 0x4EC6E0u;
label_4ec6e0:
    // 0x4ec6e0: 0x2662e9c0  addiu       $v0, $s3, -0x1640
    ctx->pc = 0x4ec6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961600));
label_4ec6e4:
    // 0x4ec6e4: 0x26443fe0  addiu       $a0, $s2, 0x3FE0
    ctx->pc = 0x4ec6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16352));
label_4ec6e8:
    // 0x4ec6e8: 0xae424120  sw          $v0, 0x4120($s2)
    ctx->pc = 0x4ec6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16672), GPR_U32(ctx, 2));
label_4ec6ec:
    // 0x4ec6ec: 0xc06870c  jal         func_1A1C30
label_4ec6f0:
    if (ctx->pc == 0x4EC6F0u) {
        ctx->pc = 0x4EC6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC6ECu;
        // 0x4ec6f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC6F4u;
        goto label_4ec6f4;
    }
    ctx->pc = 0x4EC6ECu;
    SET_GPR_U32(ctx, 31, 0x4EC6F4u);
    ctx->pc = 0x4EC6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC6ECu;
    // 0x4ec6f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC6ECu, 0x4EC6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC6F4u;
label_4ec6f4:
    // 0x4ec6f4: 0x32940001  andi        $s4, $s4, 0x1
    ctx->pc = 0x4ec6f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_4ec6f8:
    // 0x4ec6f8: 0xafb4000c  sw          $s4, 0xC($sp)
    ctx->pc = 0x4ec6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
label_4ec6fc:
    // 0x4ec6fc: 0x26443ee0  addiu       $a0, $s2, 0x3EE0
    ctx->pc = 0x4ec6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16096));
label_4ec700:
    // 0x4ec700: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec704:
    // 0x4ec704: 0xc06870c  jal         func_1A1C30
label_4ec708:
    if (ctx->pc == 0x4EC708u) {
        ctx->pc = 0x4EC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC704u;
        // 0x4ec708: 0x26533480  addiu       $s3, $s2, 0x3480 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 13440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC70Cu;
        goto label_4ec70c;
    }
    ctx->pc = 0x4EC704u;
    SET_GPR_U32(ctx, 31, 0x4EC70Cu);
    ctx->pc = 0x4EC708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC704u;
    // 0x4ec708: 0x26533480  addiu       $s3, $s2, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC704u, 0x4EC70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC70Cu;
label_4ec70c:
    // 0x4ec70c: 0x26561ef0  addiu       $s6, $s2, 0x1EF0
    ctx->pc = 0x4ec70cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 7920));
label_4ec710:
    // 0x4ec710: 0x26443de0  addiu       $a0, $s2, 0x3DE0
    ctx->pc = 0x4ec710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15840));
label_4ec714:
    // 0x4ec714: 0xc06870c  jal         func_1A1C30
label_4ec718:
    if (ctx->pc == 0x4EC718u) {
        ctx->pc = 0x4EC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC714u;
        // 0x4ec718: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC71Cu;
        goto label_4ec71c;
    }
    ctx->pc = 0x4EC714u;
    SET_GPR_U32(ctx, 31, 0x4EC71Cu);
    ctx->pc = 0x4EC718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC714u;
    // 0x4ec718: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC714u, 0x4EC71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC71Cu;
label_4ec71c:
    // 0x4ec71c: 0x26541dc0  addiu       $s4, $s2, 0x1DC0
    ctx->pc = 0x4ec71cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 7616));
label_4ec720:
    // 0x4ec720: 0x26443ce0  addiu       $a0, $s2, 0x3CE0
    ctx->pc = 0x4ec720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15584));
label_4ec724:
    // 0x4ec724: 0xc06870c  jal         func_1A1C30
label_4ec728:
    if (ctx->pc == 0x4EC728u) {
        ctx->pc = 0x4EC728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC724u;
        // 0x4ec728: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC72Cu;
        goto label_4ec72c;
    }
    ctx->pc = 0x4EC724u;
    SET_GPR_U32(ctx, 31, 0x4EC72Cu);
    ctx->pc = 0x4EC728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC724u;
    // 0x4ec728: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC724u, 0x4EC72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC72Cu;
label_4ec72c:
    // 0x4ec72c: 0x26551bd0  addiu       $s5, $s2, 0x1BD0
    ctx->pc = 0x4ec72cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 7120));
label_4ec730:
    // 0x4ec730: 0x26421ac0  addiu       $v0, $s2, 0x1AC0
    ctx->pc = 0x4ec730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6848));
label_4ec734:
    // 0x4ec734: 0x26443ac0  addiu       $a0, $s2, 0x3AC0
    ctx->pc = 0x4ec734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15040));
label_4ec738:
    // 0x4ec738: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x4ec738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_4ec73c:
    // 0x4ec73c: 0xc06e410  jal         func_1B9040
label_4ec740:
    if (ctx->pc == 0x4EC740u) {
        ctx->pc = 0x4EC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC73Cu;
        // 0x4ec740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC744u;
        goto label_4ec744;
    }
    ctx->pc = 0x4EC73Cu;
    SET_GPR_U32(ctx, 31, 0x4EC744u);
    ctx->pc = 0x4EC740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC73Cu;
    // 0x4ec740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC73Cu, 0x4EC744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC744u;
label_4ec744:
    // 0x4ec744: 0x26571b00  addiu       $s7, $s2, 0x1B00
    ctx->pc = 0x4ec744u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 6912));
label_4ec748:
    // 0x4ec748: 0x26431690  addiu       $v1, $s2, 0x1690
    ctx->pc = 0x4ec748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 5776));
label_4ec74c:
    // 0x4ec74c: 0x26423780  addiu       $v0, $s2, 0x3780
    ctx->pc = 0x4ec74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 14208));
label_4ec750:
    // 0x4ec750: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x4ec750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_4ec754:
    // 0x4ec754: 0x265e1990  addiu       $fp, $s2, 0x1990
    ctx->pc = 0x4ec754u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 6544));
label_4ec758:
    // 0x4ec758: 0x264317a0  addiu       $v1, $s2, 0x17A0
    ctx->pc = 0x4ec758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 6048));
label_4ec75c:
    // 0x4ec75c: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x4ec75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_4ec760:
    // 0x4ec760: 0x264316d0  addiu       $v1, $s2, 0x16D0
    ctx->pc = 0x4ec760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 5840));
label_4ec764:
    // 0x4ec764: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x4ec764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
label_4ec768:
    // 0x4ec768: 0x26431260  addiu       $v1, $s2, 0x1260
    ctx->pc = 0x4ec768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4704));
label_4ec76c:
    // 0x4ec76c: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x4ec76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_4ec770:
    // 0x4ec770: 0x26431560  addiu       $v1, $s2, 0x1560
    ctx->pc = 0x4ec770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 5472));
label_4ec774:
    // 0x4ec774: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4ec774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_4ec778:
    // 0x4ec778: 0x26431370  addiu       $v1, $s2, 0x1370
    ctx->pc = 0x4ec778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4976));
label_4ec77c:
    // 0x4ec77c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x4ec77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_4ec780:
    // 0x4ec780: 0x264312a0  addiu       $v1, $s2, 0x12A0
    ctx->pc = 0x4ec780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4768));
label_4ec784:
    // 0x4ec784: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x4ec784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_4ec788:
    // 0x4ec788: 0x26430e30  addiu       $v1, $s2, 0xE30
    ctx->pc = 0x4ec788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3632));
label_4ec78c:
    // 0x4ec78c: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x4ec78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_4ec790:
    // 0x4ec790: 0x26431130  addiu       $v1, $s2, 0x1130
    ctx->pc = 0x4ec790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4400));
label_4ec794:
    // 0x4ec794: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4ec794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_4ec798:
    // 0x4ec798: 0x26430f40  addiu       $v1, $s2, 0xF40
    ctx->pc = 0x4ec798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3904));
label_4ec79c:
    // 0x4ec79c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x4ec79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_4ec7a0:
    // 0x4ec7a0: 0x26430e70  addiu       $v1, $s2, 0xE70
    ctx->pc = 0x4ec7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3696));
label_4ec7a4:
    // 0x4ec7a4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x4ec7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_4ec7a8:
    // 0x4ec7a8: 0x26430400  addiu       $v1, $s2, 0x400
    ctx->pc = 0x4ec7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
label_4ec7ac:
    // 0x4ec7ac: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x4ec7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_4ec7b0:
    // 0x4ec7b0: 0x26430880  addiu       $v1, $s2, 0x880
    ctx->pc = 0x4ec7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2176));
label_4ec7b4:
    // 0x4ec7b4: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x4ec7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_4ec7b8:
    // 0x4ec7b8: 0x26430460  addiu       $v1, $s2, 0x460
    ctx->pc = 0x4ec7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1120));
label_4ec7bc:
    // 0x4ec7bc: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x4ec7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_4ec7c0:
    // 0x4ec7c0: 0x26430760  addiu       $v1, $s2, 0x760
    ctx->pc = 0x4ec7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1888));
label_4ec7c4:
    // 0x4ec7c4: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x4ec7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_4ec7c8:
    // 0x4ec7c8: 0x26430570  addiu       $v1, $s2, 0x570
    ctx->pc = 0x4ec7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1392));
label_4ec7cc:
    // 0x4ec7cc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4ec7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_4ec7d0:
    // 0x4ec7d0: 0x264304a0  addiu       $v1, $s2, 0x4A0
    ctx->pc = 0x4ec7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1184));
label_4ec7d4:
    // 0x4ec7d4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4ec7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_4ec7d8:
    // 0x4ec7d8: 0x26430070  addiu       $v1, $s2, 0x70
    ctx->pc = 0x4ec7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_4ec7dc:
    // 0x4ec7dc: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4ec7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_4ec7e0:
    // 0x4ec7e0: 0x264302a0  addiu       $v1, $s2, 0x2A0
    ctx->pc = 0x4ec7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 672));
label_4ec7e4:
    // 0x4ec7e4: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4ec7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_4ec7e8:
    // 0x4ec7e8: 0x264300b0  addiu       $v1, $s2, 0xB0
    ctx->pc = 0x4ec7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
label_4ec7ec:
    // 0x4ec7ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4ec7f0:
    if (ctx->pc == 0x4EC7F0u) {
        ctx->pc = 0x4EC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC7ECu;
        // 0x4ec7f0: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC7F4u;
        goto label_4ec7f4;
    }
    ctx->pc = 0x4EC7ECu;
    {
        const bool branch_taken_0x4ec7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC7ECu;
        // 0x4ec7f0: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec7ec) {
            ctx->pc = 0x4EC828u;
            goto label_4ec828;
        }
    }
    ctx->pc = 0x4EC7F4u;
label_4ec7f4:
    // 0x4ec7f4: 0x26503a80  addiu       $s0, $s2, 0x3A80
    ctx->pc = 0x4ec7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 14976));
label_4ec7f8:
    // 0x4ec7f8: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
label_4ec7fc:
    if (ctx->pc == 0x4EC7FCu) {
        ctx->pc = 0x4EC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC7F8u;
        // 0x4ec7fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC800u;
        goto label_4ec800;
    }
    ctx->pc = 0x4EC7F8u;
    {
        const bool branch_taken_0x4ec7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x4EC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC7F8u;
        // 0x4ec7fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec7f8) {
            ctx->pc = 0x4EC828u;
            goto label_4ec828;
        }
    }
    ctx->pc = 0x4EC800u;
label_4ec800:
    // 0x4ec800: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x4ec800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_4ec804:
    // 0x4ec804: 0x0  nop
    ctx->pc = 0x4ec804u;
    // NOP
label_4ec808:
    // 0x4ec808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ec808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ec80c:
    // 0x4ec80c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ec80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ec810:
    // 0x4ec810: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ec810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ec814:
    // 0x4ec814: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ec814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ec818:
    // 0x4ec818: 0x60f809  jalr        $v1
label_4ec81c:
    if (ctx->pc == 0x4EC81Cu) {
        ctx->pc = 0x4EC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC818u;
        // 0x4ec81c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC820u;
        goto label_4ec820;
    }
    ctx->pc = 0x4EC818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EC820u);
        ctx->pc = 0x4EC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC818u;
        // 0x4ec81c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC818u, 0x4EC820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EC820u;
label_4ec820:
    // 0x4ec820: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_4ec824:
    if (ctx->pc == 0x4EC824u) {
        ctx->pc = 0x4EC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC820u;
        // 0x4ec824: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC828u;
        goto label_4ec828;
    }
    ctx->pc = 0x4EC820u;
    {
        const bool branch_taken_0x4ec820 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x4EC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC820u;
        // 0x4ec824: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec820) {
            ctx->pc = 0x4EC808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ec808;
        }
    }
    ctx->pc = 0x4EC828u;
label_4ec828:
    // 0x4ec828: 0x26640200  addiu       $a0, $s3, 0x200
    ctx->pc = 0x4ec828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
label_4ec82c:
    // 0x4ec82c: 0xc06870c  jal         func_1A1C30
label_4ec830:
    if (ctx->pc == 0x4EC830u) {
        ctx->pc = 0x4EC830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC82Cu;
        // 0x4ec830: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC834u;
        goto label_4ec834;
    }
    ctx->pc = 0x4EC82Cu;
    SET_GPR_U32(ctx, 31, 0x4EC834u);
    ctx->pc = 0x4EC830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC82Cu;
    // 0x4ec830: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC82Cu, 0x4EC834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC834u;
label_4ec834:
    // 0x4ec834: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ec834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4ec838:
    // 0x4ec838: 0x26640100  addiu       $a0, $s3, 0x100
    ctx->pc = 0x4ec838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_4ec83c:
    // 0x4ec83c: 0x245194a0  addiu       $s1, $v0, -0x6B60
    ctx->pc = 0x4ec83cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
label_4ec840:
    // 0x4ec840: 0xc06870c  jal         func_1A1C30
label_4ec844:
    if (ctx->pc == 0x4EC844u) {
        ctx->pc = 0x4EC844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC840u;
        // 0x4ec844: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC848u;
        goto label_4ec848;
    }
    ctx->pc = 0x4EC840u;
    SET_GPR_U32(ctx, 31, 0x4EC848u);
    ctx->pc = 0x4EC844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC840u;
    // 0x4ec844: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC840u, 0x4EC848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC848u;
label_4ec848:
    // 0x4ec848: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ec848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4ec84c:
    // 0x4ec84c: 0xae710078  sw          $s1, 0x78($s3)
    ctx->pc = 0x4ec84cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 17));
label_4ec850:
    // 0x4ec850: 0xae7100e8  sw          $s1, 0xE8($s3)
    ctx->pc = 0x4ec850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 17));
label_4ec854:
    // 0x4ec854: 0x24709fd0  addiu       $s0, $v1, -0x6030
    ctx->pc = 0x4ec854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942672));
label_4ec858:
    // 0x4ec858: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4ec858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4ec85c:
    // 0x4ec85c: 0xc069860  jal         func_1A6180
label_4ec860:
    if (ctx->pc == 0x4EC860u) {
        ctx->pc = 0x4EC860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC85Cu;
        // 0x4ec860: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC864u;
        goto label_4ec864;
    }
    ctx->pc = 0x4EC85Cu;
    SET_GPR_U32(ctx, 31, 0x4EC864u);
    ctx->pc = 0x4EC860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC85Cu;
    // 0x4ec860: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6180u, 0x4EC85Cu, 0x4EC864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC864u;
label_4ec864:
    // 0x4ec864: 0xae501ac0  sw          $s0, 0x1AC0($s2)
    ctx->pc = 0x4ec864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6848), GPR_U32(ctx, 16));
label_4ec868:
    // 0x4ec868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ec868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ec86c:
    // 0x4ec86c: 0xc06870c  jal         func_1A1C30
label_4ec870:
    if (ctx->pc == 0x4EC870u) {
        ctx->pc = 0x4EC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC86Cu;
        // 0x4ec870: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC874u;
        goto label_4ec874;
    }
    ctx->pc = 0x4EC86Cu;
    SET_GPR_U32(ctx, 31, 0x4EC874u);
    ctx->pc = 0x4EC870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC86Cu;
    // 0x4ec870: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC86Cu, 0x4EC874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC874u;
label_4ec874:
    // 0x4ec874: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ec874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ec878:
    // 0x4ec878: 0xc06e410  jal         func_1B9040
label_4ec87c:
    if (ctx->pc == 0x4EC87Cu) {
        ctx->pc = 0x4EC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC878u;
        // 0x4ec87c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC880u;
        goto label_4ec880;
    }
    ctx->pc = 0x4EC878u;
    SET_GPR_U32(ctx, 31, 0x4EC880u);
    ctx->pc = 0x4EC87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC878u;
    // 0x4ec87c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC878u, 0x4EC880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC880u;
label_4ec880:
    // 0x4ec880: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4ec880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4ec884:
    // 0x4ec884: 0xc0733f0  jal         func_1CCFC0
label_4ec888:
    if (ctx->pc == 0x4EC888u) {
        ctx->pc = 0x4EC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC884u;
        // 0x4ec888: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC88Cu;
        goto label_4ec88c;
    }
    ctx->pc = 0x4EC884u;
    SET_GPR_U32(ctx, 31, 0x4EC88Cu);
    ctx->pc = 0x4EC888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC884u;
    // 0x4ec888: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC884u, 0x4EC88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC88Cu;
label_4ec88c:
    // 0x4ec88c: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x4ec88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_4ec890:
    // 0x4ec890: 0xc06a39e  jal         func_1A8E78
label_4ec894:
    if (ctx->pc == 0x4EC894u) {
        ctx->pc = 0x4EC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC890u;
        // 0x4ec894: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC898u;
        goto label_4ec898;
    }
    ctx->pc = 0x4EC890u;
    SET_GPR_U32(ctx, 31, 0x4EC898u);
    ctx->pc = 0x4EC894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC890u;
    // 0x4ec894: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC890u, 0x4EC898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC898u;
label_4ec898:
    // 0x4ec898: 0xae501690  sw          $s0, 0x1690($s2)
    ctx->pc = 0x4ec898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5776), GPR_U32(ctx, 16));
label_4ec89c:
    // 0x4ec89c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4ec89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4ec8a0:
    // 0x4ec8a0: 0xc06870c  jal         func_1A1C30
label_4ec8a4:
    if (ctx->pc == 0x4EC8A4u) {
        ctx->pc = 0x4EC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC8A0u;
        // 0x4ec8a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC8A8u;
        goto label_4ec8a8;
    }
    ctx->pc = 0x4EC8A0u;
    SET_GPR_U32(ctx, 31, 0x4EC8A8u);
    ctx->pc = 0x4EC8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC8A0u;
    // 0x4ec8a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC8A0u, 0x4EC8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC8A8u;
label_4ec8a8:
    // 0x4ec8a8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4ec8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4ec8ac:
    // 0x4ec8ac: 0xc06e410  jal         func_1B9040
label_4ec8b0:
    if (ctx->pc == 0x4EC8B0u) {
        ctx->pc = 0x4EC8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC8ACu;
        // 0x4ec8b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC8B4u;
        goto label_4ec8b4;
    }
    ctx->pc = 0x4EC8ACu;
    SET_GPR_U32(ctx, 31, 0x4EC8B4u);
    ctx->pc = 0x4EC8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC8ACu;
    // 0x4ec8b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC8ACu, 0x4EC8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC8B4u;
label_4ec8b4:
    // 0x4ec8b4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x4ec8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_4ec8b8:
    // 0x4ec8b8: 0xc0733f0  jal         func_1CCFC0
label_4ec8bc:
    if (ctx->pc == 0x4EC8BCu) {
        ctx->pc = 0x4EC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC8B8u;
        // 0x4ec8bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC8C0u;
        goto label_4ec8c0;
    }
    ctx->pc = 0x4EC8B8u;
    SET_GPR_U32(ctx, 31, 0x4EC8C0u);
    ctx->pc = 0x4EC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC8B8u;
    // 0x4ec8bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC8B8u, 0x4EC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC8C0u;
label_4ec8c0:
    // 0x4ec8c0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4ec8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_4ec8c4:
    // 0x4ec8c4: 0xc06a39e  jal         func_1A8E78
label_4ec8c8:
    if (ctx->pc == 0x4EC8C8u) {
        ctx->pc = 0x4EC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC8C4u;
        // 0x4ec8c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC8CCu;
        goto label_4ec8cc;
    }
    ctx->pc = 0x4EC8C4u;
    SET_GPR_U32(ctx, 31, 0x4EC8CCu);
    ctx->pc = 0x4EC8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC8C4u;
    // 0x4ec8c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC8C4u, 0x4EC8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC8CCu;
label_4ec8cc:
    // 0x4ec8cc: 0xae501260  sw          $s0, 0x1260($s2)
    ctx->pc = 0x4ec8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4704), GPR_U32(ctx, 16));
label_4ec8d0:
    // 0x4ec8d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec8d4:
    // 0x4ec8d4: 0xc06870c  jal         func_1A1C30
label_4ec8d8:
    if (ctx->pc == 0x4EC8D8u) {
        ctx->pc = 0x4EC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC8D4u;
        // 0x4ec8d8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC8DCu;
        goto label_4ec8dc;
    }
    ctx->pc = 0x4EC8D4u;
    SET_GPR_U32(ctx, 31, 0x4EC8DCu);
    ctx->pc = 0x4EC8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC8D4u;
    // 0x4ec8d8: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC8D4u, 0x4EC8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC8DCu;
label_4ec8dc:
    // 0x4ec8dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x4ec8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_4ec8e0:
    // 0x4ec8e0: 0xc06e410  jal         func_1B9040
label_4ec8e4:
    if (ctx->pc == 0x4EC8E4u) {
        ctx->pc = 0x4EC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC8E0u;
        // 0x4ec8e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC8E8u;
        goto label_4ec8e8;
    }
    ctx->pc = 0x4EC8E0u;
    SET_GPR_U32(ctx, 31, 0x4EC8E8u);
    ctx->pc = 0x4EC8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC8E0u;
    // 0x4ec8e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC8E0u, 0x4EC8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC8E8u;
label_4ec8e8:
    // 0x4ec8e8: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x4ec8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_4ec8ec:
    // 0x4ec8ec: 0xc0733f0  jal         func_1CCFC0
label_4ec8f0:
    if (ctx->pc == 0x4EC8F0u) {
        ctx->pc = 0x4EC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC8ECu;
        // 0x4ec8f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC8F4u;
        goto label_4ec8f4;
    }
    ctx->pc = 0x4EC8ECu;
    SET_GPR_U32(ctx, 31, 0x4EC8F4u);
    ctx->pc = 0x4EC8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC8ECu;
    // 0x4ec8f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC8ECu, 0x4EC8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC8F4u;
label_4ec8f4:
    // 0x4ec8f4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x4ec8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_4ec8f8:
    // 0x4ec8f8: 0xc06a39e  jal         func_1A8E78
label_4ec8fc:
    if (ctx->pc == 0x4EC8FCu) {
        ctx->pc = 0x4EC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC8F8u;
        // 0x4ec8fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC900u;
        goto label_4ec900;
    }
    ctx->pc = 0x4EC8F8u;
    SET_GPR_U32(ctx, 31, 0x4EC900u);
    ctx->pc = 0x4EC8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC8F8u;
    // 0x4ec8fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC8F8u, 0x4EC900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC900u;
label_4ec900:
    // 0x4ec900: 0xae500e30  sw          $s0, 0xE30($s2)
    ctx->pc = 0x4ec900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 16));
label_4ec904:
    // 0x4ec904: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec908:
    // 0x4ec908: 0xc06870c  jal         func_1A1C30
label_4ec90c:
    if (ctx->pc == 0x4EC90Cu) {
        ctx->pc = 0x4EC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC908u;
        // 0x4ec90c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC910u;
        goto label_4ec910;
    }
    ctx->pc = 0x4EC908u;
    SET_GPR_U32(ctx, 31, 0x4EC910u);
    ctx->pc = 0x4EC90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC908u;
    // 0x4ec90c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC908u, 0x4EC910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC910u;
label_4ec910:
    // 0x4ec910: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x4ec910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_4ec914:
    // 0x4ec914: 0xc06e410  jal         func_1B9040
label_4ec918:
    if (ctx->pc == 0x4EC918u) {
        ctx->pc = 0x4EC918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC914u;
        // 0x4ec918: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC91Cu;
        goto label_4ec91c;
    }
    ctx->pc = 0x4EC914u;
    SET_GPR_U32(ctx, 31, 0x4EC91Cu);
    ctx->pc = 0x4EC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC914u;
    // 0x4ec918: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC914u, 0x4EC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC91Cu;
label_4ec91c:
    // 0x4ec91c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4ec91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4ec920:
    // 0x4ec920: 0xc0733f0  jal         func_1CCFC0
label_4ec924:
    if (ctx->pc == 0x4EC924u) {
        ctx->pc = 0x4EC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC920u;
        // 0x4ec924: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC928u;
        goto label_4ec928;
    }
    ctx->pc = 0x4EC920u;
    SET_GPR_U32(ctx, 31, 0x4EC928u);
    ctx->pc = 0x4EC924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC920u;
    // 0x4ec924: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC920u, 0x4EC928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC928u;
label_4ec928:
    // 0x4ec928: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x4ec928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_4ec92c:
    // 0x4ec92c: 0xc06a39e  jal         func_1A8E78
label_4ec930:
    if (ctx->pc == 0x4EC930u) {
        ctx->pc = 0x4EC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC92Cu;
        // 0x4ec930: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC934u;
        goto label_4ec934;
    }
    ctx->pc = 0x4EC92Cu;
    SET_GPR_U32(ctx, 31, 0x4EC934u);
    ctx->pc = 0x4EC930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC92Cu;
    // 0x4ec930: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC92Cu, 0x4EC934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC934u;
label_4ec934:
    // 0x4ec934: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ec934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4ec938:
    // 0x4ec938: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x4ec938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_4ec93c:
    // 0x4ec93c: 0x2462a4b8  addiu       $v0, $v1, -0x5B48
    ctx->pc = 0x4ec93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943928));
label_4ec940:
    // 0x4ec940: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec944:
    // 0x4ec944: 0xc079bbc  jal         func_1E6EF0
label_4ec948:
    if (ctx->pc == 0x4EC948u) {
        ctx->pc = 0x4EC948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC944u;
        // 0x4ec948: 0xae420400  sw          $v0, 0x400($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC94Cu;
        goto label_4ec94c;
    }
    ctx->pc = 0x4EC944u;
    SET_GPR_U32(ctx, 31, 0x4EC94Cu);
    ctx->pc = 0x4EC948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC944u;
    // 0x4ec948: 0xae420400  sw          $v0, 0x400($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6EF0u, 0x4EC944u, 0x4EC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC94Cu;
label_4ec94c:
    // 0x4ec94c: 0xae500460  sw          $s0, 0x460($s2)
    ctx->pc = 0x4ec94cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1120), GPR_U32(ctx, 16));
label_4ec950:
    // 0x4ec950: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec954:
    // 0x4ec954: 0xc06870c  jal         func_1A1C30
label_4ec958:
    if (ctx->pc == 0x4EC958u) {
        ctx->pc = 0x4EC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC954u;
        // 0x4ec958: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC95Cu;
        goto label_4ec95c;
    }
    ctx->pc = 0x4EC954u;
    SET_GPR_U32(ctx, 31, 0x4EC95Cu);
    ctx->pc = 0x4EC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC954u;
    // 0x4ec958: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC954u, 0x4EC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC95Cu;
label_4ec95c:
    // 0x4ec95c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4ec95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4ec960:
    // 0x4ec960: 0xc06e410  jal         func_1B9040
label_4ec964:
    if (ctx->pc == 0x4EC964u) {
        ctx->pc = 0x4EC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC960u;
        // 0x4ec964: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC968u;
        goto label_4ec968;
    }
    ctx->pc = 0x4EC960u;
    SET_GPR_U32(ctx, 31, 0x4EC968u);
    ctx->pc = 0x4EC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC960u;
    // 0x4ec964: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC960u, 0x4EC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC968u;
label_4ec968:
    // 0x4ec968: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4ec968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4ec96c:
    // 0x4ec96c: 0xc0733f0  jal         func_1CCFC0
label_4ec970:
    if (ctx->pc == 0x4EC970u) {
        ctx->pc = 0x4EC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC96Cu;
        // 0x4ec970: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC974u;
        goto label_4ec974;
    }
    ctx->pc = 0x4EC96Cu;
    SET_GPR_U32(ctx, 31, 0x4EC974u);
    ctx->pc = 0x4EC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC96Cu;
    // 0x4ec970: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC96Cu, 0x4EC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC974u;
label_4ec974:
    // 0x4ec974: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4ec974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4ec978:
    // 0x4ec978: 0xc06a39e  jal         func_1A8E78
label_4ec97c:
    if (ctx->pc == 0x4EC97Cu) {
        ctx->pc = 0x4EC97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC978u;
        // 0x4ec97c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC980u;
        goto label_4ec980;
    }
    ctx->pc = 0x4EC978u;
    SET_GPR_U32(ctx, 31, 0x4EC980u);
    ctx->pc = 0x4EC97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC978u;
    // 0x4ec97c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC978u, 0x4EC980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC980u;
label_4ec980:
    // 0x4ec980: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x4ec980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_4ec984:
    // 0x4ec984: 0xc06a39e  jal         func_1A8E78
label_4ec988:
    if (ctx->pc == 0x4EC988u) {
        ctx->pc = 0x4EC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC984u;
        // 0x4ec988: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC98Cu;
        goto label_4ec98c;
    }
    ctx->pc = 0x4EC984u;
    SET_GPR_U32(ctx, 31, 0x4EC98Cu);
    ctx->pc = 0x4EC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC984u;
    // 0x4ec988: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC984u, 0x4EC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC98Cu;
label_4ec98c:
    // 0x4ec98c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ec98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4ec990:
    // 0x4ec990: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x4ec990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4ec994:
    // 0x4ec994: 0x2462a930  addiu       $v0, $v1, -0x56D0
    ctx->pc = 0x4ec994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945072));
label_4ec998:
    // 0x4ec998: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec99c:
    // 0x4ec99c: 0xc0733f0  jal         func_1CCFC0
label_4ec9a0:
    if (ctx->pc == 0x4EC9A0u) {
        ctx->pc = 0x4EC9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC99Cu;
        // 0x4ec9a0: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC9A4u;
        goto label_4ec9a4;
    }
    ctx->pc = 0x4EC99Cu;
    SET_GPR_U32(ctx, 31, 0x4EC9A4u);
    ctx->pc = 0x4EC9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC99Cu;
    // 0x4ec9a0: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC99Cu, 0x4EC9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC9A4u;
label_4ec9a4:
    // 0x4ec9a4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x4ec9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_4ec9a8:
    // 0x4ec9a8: 0xc06e410  jal         func_1B9040
label_4ec9ac:
    if (ctx->pc == 0x4EC9ACu) {
        ctx->pc = 0x4EC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC9A8u;
        // 0x4ec9ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC9B0u;
        goto label_4ec9b0;
    }
    ctx->pc = 0x4EC9A8u;
    SET_GPR_U32(ctx, 31, 0x4EC9B0u);
    ctx->pc = 0x4EC9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC9A8u;
    // 0x4ec9ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC9A8u, 0x4EC9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC9B0u;
label_4ec9b0:
    // 0x4ec9b0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4ec9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4ec9b4:
    // 0x4ec9b4: 0xc06a39e  jal         func_1A8E78
label_4ec9b8:
    if (ctx->pc == 0x4EC9B8u) {
        ctx->pc = 0x4EC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC9B4u;
        // 0x4ec9b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC9BCu;
        goto label_4ec9bc;
    }
    ctx->pc = 0x4EC9B4u;
    SET_GPR_U32(ctx, 31, 0x4EC9BCu);
    ctx->pc = 0x4EC9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC9B4u;
    // 0x4ec9b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC9B4u, 0x4EC9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC9BCu;
label_4ec9bc:
    // 0x4ec9bc: 0xae510068  sw          $s1, 0x68($s2)
    ctx->pc = 0x4ec9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 17));
label_4ec9c0:
    // 0x4ec9c0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4ec9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_4ec9c4:
    // 0x4ec9c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4ec9c8:
    if (ctx->pc == 0x4EC9C8u) {
        ctx->pc = 0x4EC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC9C4u;
        // 0x4ec9c8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC9CCu;
        goto label_4ec9cc;
    }
    ctx->pc = 0x4EC9C4u;
    {
        const bool branch_taken_0x4ec9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC9C4u;
        // 0x4ec9c8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec9c4) {
            ctx->pc = 0x4EC9D8u;
            goto label_4ec9d8;
        }
    }
    ctx->pc = 0x4EC9CCu;
label_4ec9cc:
    // 0x4ec9cc: 0xc10b208  jal         func_42C820
label_4ec9d0:
    if (ctx->pc == 0x4EC9D0u) {
        ctx->pc = 0x4EC9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC9CCu;
        // 0x4ec9d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC9D4u;
        goto label_4ec9d4;
    }
    ctx->pc = 0x4EC9CCu;
    SET_GPR_U32(ctx, 31, 0x4EC9D4u);
    ctx->pc = 0x4EC9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC9CCu;
    // 0x4ec9d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4EC9CCu, 0x4EC9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC9D4u;
label_4ec9d4:
    // 0x4ec9d4: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x4ec9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4ec9d8:
    // 0x4ec9d8: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x4ec9d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4ec9dc:
    // 0x4ec9dc: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x4ec9dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4ec9e0:
    // 0x4ec9e0: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x4ec9e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4ec9e4:
    // 0x4ec9e4: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x4ec9e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4ec9e8:
    // 0x4ec9e8: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x4ec9e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4ec9ec:
    // 0x4ec9ec: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x4ec9ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4ec9f0:
    // 0x4ec9f0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4ec9f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ec9f4:
    // 0x4ec9f4: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x4ec9f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ec9f8:
    // 0x4ec9f8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4ec9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4ec9fc:
    // 0x4ec9fc: 0x3e00008  jr          $ra
label_4eca00:
    if (ctx->pc == 0x4ECA00u) {
        ctx->pc = 0x4ECA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC9FCu;
        // 0x4eca00: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4ECA04u;
        goto label_4eca04;
    }
    ctx->pc = 0x4EC9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ECA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC9FCu;
        // 0x4eca00: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ECA04u;
label_4eca04:
    // 0x4eca04: 0x0  nop
    ctx->pc = 0x4eca04u;
    // NOP
label_4eca08:
    // 0x4eca08: 0x7c8240e0  sq          $v0, 0x40E0($a0)
    ctx->pc = 0x4eca08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16608), GPR_VEC(ctx, 2));
label_4eca0c:
    // 0x4eca0c: 0x0  nop
    ctx->pc = 0x4eca0cu;
    // NOP
    ctx->pc = 0x4eca10u;
}
