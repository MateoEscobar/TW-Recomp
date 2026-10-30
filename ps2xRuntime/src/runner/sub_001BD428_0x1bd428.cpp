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

// Function: sub_001BD428
// Address: 0x1bd428 - 0x1bd6e8
void sub_001BD428_0x1bd428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD428_0x1bd428");
#endif

    switch (ctx->pc) {
        case 0x1bd428u: goto label_1bd428;
        case 0x1bd42cu: goto label_1bd42c;
        case 0x1bd430u: goto label_1bd430;
        case 0x1bd434u: goto label_1bd434;
        case 0x1bd438u: goto label_1bd438;
        case 0x1bd43cu: goto label_1bd43c;
        case 0x1bd440u: goto label_1bd440;
        case 0x1bd444u: goto label_1bd444;
        case 0x1bd448u: goto label_1bd448;
        case 0x1bd44cu: goto label_1bd44c;
        case 0x1bd450u: goto label_1bd450;
        case 0x1bd454u: goto label_1bd454;
        case 0x1bd458u: goto label_1bd458;
        case 0x1bd45cu: goto label_1bd45c;
        case 0x1bd460u: goto label_1bd460;
        case 0x1bd464u: goto label_1bd464;
        case 0x1bd468u: goto label_1bd468;
        case 0x1bd46cu: goto label_1bd46c;
        case 0x1bd470u: goto label_1bd470;
        case 0x1bd474u: goto label_1bd474;
        case 0x1bd478u: goto label_1bd478;
        case 0x1bd47cu: goto label_1bd47c;
        case 0x1bd480u: goto label_1bd480;
        case 0x1bd484u: goto label_1bd484;
        case 0x1bd488u: goto label_1bd488;
        case 0x1bd48cu: goto label_1bd48c;
        case 0x1bd490u: goto label_1bd490;
        case 0x1bd494u: goto label_1bd494;
        case 0x1bd498u: goto label_1bd498;
        case 0x1bd49cu: goto label_1bd49c;
        case 0x1bd4a0u: goto label_1bd4a0;
        case 0x1bd4a4u: goto label_1bd4a4;
        case 0x1bd4a8u: goto label_1bd4a8;
        case 0x1bd4acu: goto label_1bd4ac;
        case 0x1bd4b0u: goto label_1bd4b0;
        case 0x1bd4b4u: goto label_1bd4b4;
        case 0x1bd4b8u: goto label_1bd4b8;
        case 0x1bd4bcu: goto label_1bd4bc;
        case 0x1bd4c0u: goto label_1bd4c0;
        case 0x1bd4c4u: goto label_1bd4c4;
        case 0x1bd4c8u: goto label_1bd4c8;
        case 0x1bd4ccu: goto label_1bd4cc;
        case 0x1bd4d0u: goto label_1bd4d0;
        case 0x1bd4d4u: goto label_1bd4d4;
        case 0x1bd4d8u: goto label_1bd4d8;
        case 0x1bd4dcu: goto label_1bd4dc;
        case 0x1bd4e0u: goto label_1bd4e0;
        case 0x1bd4e4u: goto label_1bd4e4;
        case 0x1bd4e8u: goto label_1bd4e8;
        case 0x1bd4ecu: goto label_1bd4ec;
        case 0x1bd4f0u: goto label_1bd4f0;
        case 0x1bd4f4u: goto label_1bd4f4;
        case 0x1bd4f8u: goto label_1bd4f8;
        case 0x1bd4fcu: goto label_1bd4fc;
        case 0x1bd500u: goto label_1bd500;
        case 0x1bd504u: goto label_1bd504;
        case 0x1bd508u: goto label_1bd508;
        case 0x1bd50cu: goto label_1bd50c;
        case 0x1bd510u: goto label_1bd510;
        case 0x1bd514u: goto label_1bd514;
        case 0x1bd518u: goto label_1bd518;
        case 0x1bd51cu: goto label_1bd51c;
        case 0x1bd520u: goto label_1bd520;
        case 0x1bd524u: goto label_1bd524;
        case 0x1bd528u: goto label_1bd528;
        case 0x1bd52cu: goto label_1bd52c;
        case 0x1bd530u: goto label_1bd530;
        case 0x1bd534u: goto label_1bd534;
        case 0x1bd538u: goto label_1bd538;
        case 0x1bd53cu: goto label_1bd53c;
        case 0x1bd540u: goto label_1bd540;
        case 0x1bd544u: goto label_1bd544;
        case 0x1bd548u: goto label_1bd548;
        case 0x1bd54cu: goto label_1bd54c;
        case 0x1bd550u: goto label_1bd550;
        case 0x1bd554u: goto label_1bd554;
        case 0x1bd558u: goto label_1bd558;
        case 0x1bd55cu: goto label_1bd55c;
        case 0x1bd560u: goto label_1bd560;
        case 0x1bd564u: goto label_1bd564;
        case 0x1bd568u: goto label_1bd568;
        case 0x1bd56cu: goto label_1bd56c;
        case 0x1bd570u: goto label_1bd570;
        case 0x1bd574u: goto label_1bd574;
        case 0x1bd578u: goto label_1bd578;
        case 0x1bd57cu: goto label_1bd57c;
        case 0x1bd580u: goto label_1bd580;
        case 0x1bd584u: goto label_1bd584;
        case 0x1bd588u: goto label_1bd588;
        case 0x1bd58cu: goto label_1bd58c;
        case 0x1bd590u: goto label_1bd590;
        case 0x1bd594u: goto label_1bd594;
        case 0x1bd598u: goto label_1bd598;
        case 0x1bd59cu: goto label_1bd59c;
        case 0x1bd5a0u: goto label_1bd5a0;
        case 0x1bd5a4u: goto label_1bd5a4;
        case 0x1bd5a8u: goto label_1bd5a8;
        case 0x1bd5acu: goto label_1bd5ac;
        case 0x1bd5b0u: goto label_1bd5b0;
        case 0x1bd5b4u: goto label_1bd5b4;
        case 0x1bd5b8u: goto label_1bd5b8;
        case 0x1bd5bcu: goto label_1bd5bc;
        case 0x1bd5c0u: goto label_1bd5c0;
        case 0x1bd5c4u: goto label_1bd5c4;
        case 0x1bd5c8u: goto label_1bd5c8;
        case 0x1bd5ccu: goto label_1bd5cc;
        case 0x1bd5d0u: goto label_1bd5d0;
        case 0x1bd5d4u: goto label_1bd5d4;
        case 0x1bd5d8u: goto label_1bd5d8;
        case 0x1bd5dcu: goto label_1bd5dc;
        case 0x1bd5e0u: goto label_1bd5e0;
        case 0x1bd5e4u: goto label_1bd5e4;
        case 0x1bd5e8u: goto label_1bd5e8;
        case 0x1bd5ecu: goto label_1bd5ec;
        case 0x1bd5f0u: goto label_1bd5f0;
        case 0x1bd5f4u: goto label_1bd5f4;
        case 0x1bd5f8u: goto label_1bd5f8;
        case 0x1bd5fcu: goto label_1bd5fc;
        case 0x1bd600u: goto label_1bd600;
        case 0x1bd604u: goto label_1bd604;
        case 0x1bd608u: goto label_1bd608;
        case 0x1bd60cu: goto label_1bd60c;
        case 0x1bd610u: goto label_1bd610;
        case 0x1bd614u: goto label_1bd614;
        case 0x1bd618u: goto label_1bd618;
        case 0x1bd61cu: goto label_1bd61c;
        case 0x1bd620u: goto label_1bd620;
        case 0x1bd624u: goto label_1bd624;
        case 0x1bd628u: goto label_1bd628;
        case 0x1bd62cu: goto label_1bd62c;
        case 0x1bd630u: goto label_1bd630;
        case 0x1bd634u: goto label_1bd634;
        case 0x1bd638u: goto label_1bd638;
        case 0x1bd63cu: goto label_1bd63c;
        case 0x1bd640u: goto label_1bd640;
        case 0x1bd644u: goto label_1bd644;
        case 0x1bd648u: goto label_1bd648;
        case 0x1bd64cu: goto label_1bd64c;
        case 0x1bd650u: goto label_1bd650;
        case 0x1bd654u: goto label_1bd654;
        case 0x1bd658u: goto label_1bd658;
        case 0x1bd65cu: goto label_1bd65c;
        case 0x1bd660u: goto label_1bd660;
        case 0x1bd664u: goto label_1bd664;
        case 0x1bd668u: goto label_1bd668;
        case 0x1bd66cu: goto label_1bd66c;
        case 0x1bd670u: goto label_1bd670;
        case 0x1bd674u: goto label_1bd674;
        case 0x1bd678u: goto label_1bd678;
        case 0x1bd67cu: goto label_1bd67c;
        case 0x1bd680u: goto label_1bd680;
        case 0x1bd684u: goto label_1bd684;
        case 0x1bd688u: goto label_1bd688;
        case 0x1bd68cu: goto label_1bd68c;
        case 0x1bd690u: goto label_1bd690;
        case 0x1bd694u: goto label_1bd694;
        case 0x1bd698u: goto label_1bd698;
        case 0x1bd69cu: goto label_1bd69c;
        case 0x1bd6a0u: goto label_1bd6a0;
        case 0x1bd6a4u: goto label_1bd6a4;
        case 0x1bd6a8u: goto label_1bd6a8;
        case 0x1bd6acu: goto label_1bd6ac;
        case 0x1bd6b0u: goto label_1bd6b0;
        case 0x1bd6b4u: goto label_1bd6b4;
        case 0x1bd6b8u: goto label_1bd6b8;
        case 0x1bd6bcu: goto label_1bd6bc;
        case 0x1bd6c0u: goto label_1bd6c0;
        case 0x1bd6c4u: goto label_1bd6c4;
        case 0x1bd6c8u: goto label_1bd6c8;
        case 0x1bd6ccu: goto label_1bd6cc;
        case 0x1bd6d0u: goto label_1bd6d0;
        case 0x1bd6d4u: goto label_1bd6d4;
        case 0x1bd6d8u: goto label_1bd6d8;
        case 0x1bd6dcu: goto label_1bd6dc;
        case 0x1bd6e0u: goto label_1bd6e0;
        case 0x1bd6e4u: goto label_1bd6e4;
        default: break;
    }

    ctx->pc = 0x1bd428u;

label_1bd428:
    // 0x1bd428: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bd428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1bd42c:
    // 0x1bd42c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1bd42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1bd430:
    // 0x1bd430: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1bd430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1bd434:
    // 0x1bd434: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1bd434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd438:
    // 0x1bd438: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1bd438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1bd43c:
    // 0x1bd43c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1bd43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1bd440:
    // 0x1bd440: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1bd440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1bd444:
    // 0x1bd444: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1bd444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1bd448:
    // 0x1bd448: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1bd448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1bd44c:
    // 0x1bd44c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1bd44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1bd450:
    // 0x1bd450: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1bd450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1bd454:
    // 0x1bd454: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bd454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1bd458:
    // 0x1bd458: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x1bd458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1bd45c:
    // 0x1bd45c: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
label_1bd460:
    if (ctx->pc == 0x1BD460u) {
        ctx->pc = 0x1BD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD45Cu;
        // 0x1bd460: 0x268300a0  addiu       $v1, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD464u;
        goto label_1bd464;
    }
    ctx->pc = 0x1BD45Cu;
    {
        const bool branch_taken_0x1bd45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD45Cu;
        // 0x1bd460: 0x268300a0  addiu       $v1, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd45c) {
            ctx->pc = 0x1BD6B8u;
            goto label_1bd6b8;
        }
    }
    ctx->pc = 0x1BD464u;
label_1bd464:
    // 0x1bd464: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x1bd464u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_1bd468:
    // 0x1bd468: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x1bd468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
label_1bd46c:
    // 0x1bd46c: 0x26820070  addiu       $v0, $s4, 0x70
    ctx->pc = 0x1bd46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_1bd470:
    // 0x1bd470: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1bd470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_1bd474:
    // 0x1bd474: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1bd474u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd478:
    // 0x1bd478: 0x268301b0  addiu       $v1, $s4, 0x1B0
    ctx->pc = 0x1bd478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 432));
label_1bd47c:
    // 0x1bd47c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1bd47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_1bd480:
    // 0x1bd480: 0x26830590  addiu       $v1, $s4, 0x590
    ctx->pc = 0x1bd480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1424));
label_1bd484:
    // 0x1bd484: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1bd484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1bd488:
    // 0x1bd488: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bd488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1bd48c:
    // 0x1bd48c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bd48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1bd490:
    // 0x1bd490: 0x268202b0  addiu       $v0, $s4, 0x2B0
    ctx->pc = 0x1bd490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 688));
label_1bd494:
    // 0x1bd494: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
label_1bd498:
    if (ctx->pc == 0x1BD498u) {
        ctx->pc = 0x1BD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD494u;
        // 0x1bd498: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD49Cu;
        goto label_1bd49c;
    }
    ctx->pc = 0x1BD494u;
    {
        const bool branch_taken_0x1bd494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD494u;
        // 0x1bd498: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd494) {
            ctx->pc = 0x1BD588u;
            goto label_1bd588;
        }
    }
    ctx->pc = 0x1BD49Cu;
label_1bd49c:
    // 0x1bd49c: 0x8c930000  lw          $s3, 0x0($a0)
    ctx->pc = 0x1bd49cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bd4a0:
    // 0x1bd4a0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1bd4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1bd4a4:
    // 0x1bd4a4: 0x12600034  beqz        $s3, . + 4 + (0x34 << 2)
label_1bd4a8:
    if (ctx->pc == 0x1BD4A8u) {
        ctx->pc = 0x1BD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4A4u;
        // 0x1bd4a8: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD4ACu;
        goto label_1bd4ac;
    }
    ctx->pc = 0x1BD4A4u;
    {
        const bool branch_taken_0x1bd4a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4A4u;
        // 0x1bd4a8: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4a4) {
            ctx->pc = 0x1BD578u;
            goto label_1bd578;
        }
    }
    ctx->pc = 0x1BD4ACu;
label_1bd4ac:
    // 0x1bd4ac: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x1bd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1bd4b0:
    // 0x1bd4b0: 0x3c150055  lui         $s5, 0x55
    ctx->pc = 0x1bd4b0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)85 << 16));
label_1bd4b4:
    // 0x1bd4b4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x1bd4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1bd4b8:
    // 0x1bd4b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bd4b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd4bc:
    // 0x1bd4bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bd4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1bd4c0:
    // 0x1bd4c0: 0x26760130  addiu       $s6, $s3, 0x130
    ctx->pc = 0x1bd4c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
label_1bd4c4:
    // 0x1bd4c4: 0x1223001a  beq         $s1, $v1, . + 4 + (0x1A << 2)
label_1bd4c8:
    if (ctx->pc == 0x1BD4C8u) {
        ctx->pc = 0x1BD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4C4u;
        // 0x1bd4c8: 0x26770020  addiu       $s7, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD4CCu;
        goto label_1bd4cc;
    }
    ctx->pc = 0x1BD4C4u;
    {
        const bool branch_taken_0x1bd4c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BD4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4C4u;
        // 0x1bd4c8: 0x26770020  addiu       $s7, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd4c4) {
            ctx->pc = 0x1BD530u;
            goto label_1bd530;
        }
    }
    ctx->pc = 0x1BD4CCu;
label_1bd4cc:
    // 0x1bd4cc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1bd4ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1bd4d0:
    // 0x1bd4d0: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_1bd4d4:
    if (ctx->pc == 0x1BD4D4u) {
        ctx->pc = 0x1BD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4D0u;
        // 0x1bd4d4: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD4D8u;
        goto label_1bd4d8;
    }
    ctx->pc = 0x1BD4D0u;
    {
        const bool branch_taken_0x1bd4d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4d0) {
            ctx->pc = 0x1BD4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD4D0u;
            // 0x1bd4d4: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD524u;
            goto label_1bd524;
        }
    }
    ctx->pc = 0x1BD4D8u;
label_1bd4d8:
    // 0x1bd4d8: 0xc074d3c  jal         func_1D34F0
label_1bd4dc:
    if (ctx->pc == 0x1BD4DCu) {
        ctx->pc = 0x1BD4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4D8u;
        // 0x1bd4dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD4E0u;
        goto label_1bd4e0;
    }
    ctx->pc = 0x1BD4D8u;
    SET_GPR_U32(ctx, 31, 0x1BD4E0u);
    ctx->pc = 0x1BD4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD4D8u;
    // 0x1bd4dc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D34F0u, 0x1BD4D8u, 0x1BD4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD4E0u;
label_1bd4e0:
    // 0x1bd4e0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1bd4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bd4e4:
    // 0x1bd4e4: 0x50a0000b  beql        $a1, $zero, . + 4 + (0xB << 2)
label_1bd4e8:
    if (ctx->pc == 0x1BD4E8u) {
        ctx->pc = 0x1BD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4E4u;
        // 0x1bd4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD4ECu;
        goto label_1bd4ec;
    }
    ctx->pc = 0x1BD4E4u;
    {
        const bool branch_taken_0x1bd4e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd4e4) {
            ctx->pc = 0x1BD4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD4E4u;
            // 0x1bd4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD514u;
            goto label_1bd514;
        }
    }
    ctx->pc = 0x1BD4ECu;
label_1bd4ec:
    // 0x1bd4ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bd4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bd4f0:
    // 0x1bd4f0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1bd4f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1bd4f4:
    // 0x1bd4f4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1bd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1bd4f8:
    // 0x1bd4f8: 0x60f809  jalr        $v1
label_1bd4fc:
    if (ctx->pc == 0x1BD4FCu) {
        ctx->pc = 0x1BD4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4F8u;
        // 0x1bd4fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD500u;
        goto label_1bd500;
    }
    ctx->pc = 0x1BD4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BD500u);
        ctx->pc = 0x1BD4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD4F8u;
        // 0x1bd4fc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD4F8u, 0x1BD500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BD500u;
label_1bd500:
    // 0x1bd500: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1bd500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1bd504:
    // 0x1bd504: 0x26a54c08  addiu       $a1, $s5, 0x4C08
    ctx->pc = 0x1bd504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 19464));
label_1bd508:
    // 0x1bd508: 0xc1399a6  jal         func_4E6698
label_1bd50c:
    if (ctx->pc == 0x1BD50Cu) {
        ctx->pc = 0x1BD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD508u;
        // 0x1bd50c: 0x2406027a  addiu       $a2, $zero, 0x27A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD510u;
        goto label_1bd510;
    }
    ctx->pc = 0x1BD508u;
    SET_GPR_U32(ctx, 31, 0x1BD510u);
    ctx->pc = 0x1BD50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD508u;
    // 0x1bd50c: 0x2406027a  addiu       $a2, $zero, 0x27A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6698u, 0x1BD508u, 0x1BD510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD510u;
label_1bd510:
    // 0x1bd510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bd514:
    // 0x1bd514: 0x26a54c08  addiu       $a1, $s5, 0x4C08
    ctx->pc = 0x1bd514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 19464));
label_1bd518:
    // 0x1bd518: 0xc1399c6  jal         func_4E6718
label_1bd51c:
    if (ctx->pc == 0x1BD51Cu) {
        ctx->pc = 0x1BD51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD518u;
        // 0x1bd51c: 0x2406027c  addiu       $a2, $zero, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD520u;
        goto label_1bd520;
    }
    ctx->pc = 0x1BD518u;
    SET_GPR_U32(ctx, 31, 0x1BD520u);
    ctx->pc = 0x1BD51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD518u;
    // 0x1bd51c: 0x2406027c  addiu       $a2, $zero, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6718u, 0x1BD518u, 0x1BD520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD520u;
label_1bd520:
    // 0x1bd520: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1bd520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1bd524:
    // 0x1bd524: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1bd524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1bd528:
    // 0x1bd528: 0x5622ffe9  bnel        $s1, $v0, . + 4 + (-0x17 << 2)
label_1bd52c:
    if (ctx->pc == 0x1BD52Cu) {
        ctx->pc = 0x1BD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD528u;
        // 0x1bd52c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD530u;
        goto label_1bd530;
    }
    ctx->pc = 0x1BD528u;
    {
        const bool branch_taken_0x1bd528 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd528) {
            ctx->pc = 0x1BD52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD528u;
            // 0x1bd52c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd4d0;
        }
    }
    ctx->pc = 0x1BD530u;
label_1bd530:
    // 0x1bd530: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x1bd530u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1bd534:
    // 0x1bd534: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bd534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd538:
    // 0x1bd538: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1bd538u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1bd53c:
    // 0x1bd53c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bd540:
    // 0x1bd540: 0xc10c1bb  jal         func_4306EC
label_1bd544:
    if (ctx->pc == 0x1BD544u) {
        ctx->pc = 0x1BD544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD540u;
        // 0x1bd544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD548u;
        goto label_1bd548;
    }
    ctx->pc = 0x1BD540u;
    SET_GPR_U32(ctx, 31, 0x1BD548u);
    ctx->pc = 0x1BD544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD540u;
    // 0x1bd544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x1BD540u, 0x1BD548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD548u;
label_1bd548:
    // 0x1bd548: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1bd548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1bd54c:
    // 0x1bd54c: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x1bd54cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1bd550:
    // 0x1bd550: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1bd550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1bd554:
    // 0x1bd554: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1bd554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1bd558:
    // 0x1bd558: 0xc0687c4  jal         func_1A1F10
label_1bd55c:
    if (ctx->pc == 0x1BD55Cu) {
        ctx->pc = 0x1BD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD558u;
        // 0x1bd55c: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD560u;
        goto label_1bd560;
    }
    ctx->pc = 0x1BD558u;
    SET_GPR_U32(ctx, 31, 0x1BD560u);
    ctx->pc = 0x1BD55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD558u;
    // 0x1bd55c: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1BD558u, 0x1BD560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD560u;
label_1bd560:
    // 0x1bd560: 0xc078554  jal         func_1E1550
label_1bd564:
    if (ctx->pc == 0x1BD564u) {
        ctx->pc = 0x1BD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD560u;
        // 0x1bd564: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD568u;
        goto label_1bd568;
    }
    ctx->pc = 0x1BD560u;
    SET_GPR_U32(ctx, 31, 0x1BD568u);
    ctx->pc = 0x1BD564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD560u;
    // 0x1bd564: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1550u, 0x1BD560u, 0x1BD568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD568u;
label_1bd568:
    // 0x1bd568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bd56c:
    // 0x1bd56c: 0x26a54c08  addiu       $a1, $s5, 0x4C08
    ctx->pc = 0x1bd56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 19464));
label_1bd570:
    // 0x1bd570: 0xc1399e2  jal         func_4E6788
label_1bd574:
    if (ctx->pc == 0x1BD574u) {
        ctx->pc = 0x1BD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD570u;
        // 0x1bd574: 0x24060283  addiu       $a2, $zero, 0x283 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD578u;
        goto label_1bd578;
    }
    ctx->pc = 0x1BD570u;
    SET_GPR_U32(ctx, 31, 0x1BD578u);
    ctx->pc = 0x1BD574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD570u;
    // 0x1bd574: 0x24060283  addiu       $a2, $zero, 0x283 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 643));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6788u, 0x1BD570u, 0x1BD578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD578u;
label_1bd578:
    // 0x1bd578: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x1bd578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1bd57c:
    // 0x1bd57c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1bd57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1bd580:
    // 0x1bd580: 0x5482ffc7  bnel        $a0, $v0, . + 4 + (-0x39 << 2)
label_1bd584:
    if (ctx->pc == 0x1BD584u) {
        ctx->pc = 0x1BD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD580u;
        // 0x1bd584: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD588u;
        goto label_1bd588;
    }
    ctx->pc = 0x1BD580u;
    {
        const bool branch_taken_0x1bd580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd580) {
            ctx->pc = 0x1BD584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD580u;
            // 0x1bd584: 0x8c930000  lw          $s3, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd4a0;
        }
    }
    ctx->pc = 0x1BD588u;
label_1bd588:
    // 0x1bd588: 0x8fd10004  lw          $s1, 0x4($fp)
    ctx->pc = 0x1bd588u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_1bd58c:
    // 0x1bd58c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bd58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd590:
    // 0x1bd590: 0x8fd00008  lw          $s0, 0x8($fp)
    ctx->pc = 0x1bd590u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1bd594:
    // 0x1bd594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bd594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bd598:
    // 0x1bd598: 0xc10c1bb  jal         func_4306EC
label_1bd59c:
    if (ctx->pc == 0x1BD59Cu) {
        ctx->pc = 0x1BD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD598u;
        // 0x1bd59c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD5A0u;
        goto label_1bd5a0;
    }
    ctx->pc = 0x1BD598u;
    SET_GPR_U32(ctx, 31, 0x1BD5A0u);
    ctx->pc = 0x1BD59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD598u;
    // 0x1bd59c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x1BD598u, 0x1BD5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5A0u;
label_1bd5a0:
    // 0x1bd5a0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x1bd5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_1bd5a4:
    // 0x1bd5a4: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x1bd5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1bd5a8:
    // 0x1bd5a8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1bd5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1bd5ac:
    // 0x1bd5ac: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1bd5acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1bd5b0:
    // 0x1bd5b0: 0xc0687c4  jal         func_1A1F10
label_1bd5b4:
    if (ctx->pc == 0x1BD5B4u) {
        ctx->pc = 0x1BD5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5B0u;
        // 0x1bd5b4: 0xafc30008  sw          $v1, 0x8($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD5B8u;
        goto label_1bd5b8;
    }
    ctx->pc = 0x1BD5B0u;
    SET_GPR_U32(ctx, 31, 0x1BD5B8u);
    ctx->pc = 0x1BD5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5B0u;
    // 0x1bd5b4: 0xafc30008  sw          $v1, 0x8($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1BD5B0u, 0x1BD5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5B8u;
label_1bd5b8:
    // 0x1bd5b8: 0xc0687c4  jal         func_1A1F10
label_1bd5bc:
    if (ctx->pc == 0x1BD5BCu) {
        ctx->pc = 0x1BD5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5B8u;
        // 0x1bd5bc: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD5C0u;
        goto label_1bd5c0;
    }
    ctx->pc = 0x1BD5B8u;
    SET_GPR_U32(ctx, 31, 0x1BD5C0u);
    ctx->pc = 0x1BD5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5B8u;
    // 0x1bd5bc: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1BD5B8u, 0x1BD5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5C0u;
label_1bd5c0:
    // 0x1bd5c0: 0xc0687c4  jal         func_1A1F10
label_1bd5c4:
    if (ctx->pc == 0x1BD5C4u) {
        ctx->pc = 0x1BD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5C0u;
        // 0x1bd5c4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD5C8u;
        goto label_1bd5c8;
    }
    ctx->pc = 0x1BD5C0u;
    SET_GPR_U32(ctx, 31, 0x1BD5C8u);
    ctx->pc = 0x1BD5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5C0u;
    // 0x1bd5c4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1BD5C0u, 0x1BD5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5C8u;
label_1bd5c8:
    // 0x1bd5c8: 0x8e850080  lw          $a1, 0x80($s4)
    ctx->pc = 0x1bd5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_1bd5cc:
    // 0x1bd5cc: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_1bd5d0:
    if (ctx->pc == 0x1BD5D0u) {
        ctx->pc = 0x1BD5D4u;
        goto label_1bd5d4;
    }
    ctx->pc = 0x1BD5CCu;
    {
        const bool branch_taken_0x1bd5cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd5cc) {
            ctx->pc = 0x1BD5FCu;
            goto label_1bd5fc;
        }
    }
    ctx->pc = 0x1BD5D4u;
label_1bd5d4:
    // 0x1bd5d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bd5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bd5d8:
    // 0x1bd5d8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1bd5d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1bd5dc:
    // 0x1bd5dc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1bd5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1bd5e0:
    // 0x1bd5e0: 0x60f809  jalr        $v1
label_1bd5e4:
    if (ctx->pc == 0x1BD5E4u) {
        ctx->pc = 0x1BD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5E0u;
        // 0x1bd5e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD5E8u;
        goto label_1bd5e8;
    }
    ctx->pc = 0x1BD5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1BD5E8u);
        ctx->pc = 0x1BD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5E0u;
        // 0x1bd5e4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD5E0u, 0x1BD5E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BD5E8u;
label_1bd5e8:
    // 0x1bd5e8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1bd5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1bd5ec:
    // 0x1bd5ec: 0x8e840080  lw          $a0, 0x80($s4)
    ctx->pc = 0x1bd5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 128)));
label_1bd5f0:
    // 0x1bd5f0: 0x24a54c08  addiu       $a1, $a1, 0x4C08
    ctx->pc = 0x1bd5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19464));
label_1bd5f4:
    // 0x1bd5f4: 0xc1399a6  jal         func_4E6698
label_1bd5f8:
    if (ctx->pc == 0x1BD5F8u) {
        ctx->pc = 0x1BD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5F4u;
        // 0x1bd5f8: 0x2406028e  addiu       $a2, $zero, 0x28E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD5FCu;
        goto label_1bd5fc;
    }
    ctx->pc = 0x1BD5F4u;
    SET_GPR_U32(ctx, 31, 0x1BD5FCu);
    ctx->pc = 0x1BD5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5F4u;
    // 0x1bd5f8: 0x2406028e  addiu       $a2, $zero, 0x28E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 654));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6698u, 0x1BD5F4u, 0x1BD5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5FCu;
label_1bd5fc:
    // 0x1bd5fc: 0xc073ac0  jal         func_1CEB00
label_1bd600:
    if (ctx->pc == 0x1BD600u) {
        ctx->pc = 0x1BD600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5FCu;
        // 0x1bd600: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD604u;
        goto label_1bd604;
    }
    ctx->pc = 0x1BD5FCu;
    SET_GPR_U32(ctx, 31, 0x1BD604u);
    ctx->pc = 0x1BD600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5FCu;
    // 0x1bd600: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEB00u, 0x1BD5FCu, 0x1BD604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD604u;
label_1bd604:
    // 0x1bd604: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd608:
    // 0x1bd608: 0x8e85008c  lw          $a1, 0x8C($s4)
    ctx->pc = 0x1bd608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_1bd60c:
    // 0x1bd60c: 0xc0616ac  jal         func_185AB0
label_1bd610:
    if (ctx->pc == 0x1BD610u) {
        ctx->pc = 0x1BD610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD60Cu;
        // 0x1bd610: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD614u;
        goto label_1bd614;
    }
    ctx->pc = 0x1BD60Cu;
    SET_GPR_U32(ctx, 31, 0x1BD614u);
    ctx->pc = 0x1BD610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD60Cu;
    // 0x1bd610: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1BD60Cu, 0x1BD614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD614u;
label_1bd614:
    // 0x1bd614: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bd618:
    if (ctx->pc == 0x1BD618u) {
        ctx->pc = 0x1BD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD614u;
        // 0x1bd618: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD61Cu;
        goto label_1bd61c;
    }
    ctx->pc = 0x1BD614u;
    {
        const bool branch_taken_0x1bd614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD614u;
        // 0x1bd618: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd614) {
            ctx->pc = 0x1BD628u;
            goto label_1bd628;
        }
    }
    ctx->pc = 0x1BD61Cu;
label_1bd61c:
    // 0x1bd61c: 0x9685008c  lhu         $a1, 0x8C($s4)
    ctx->pc = 0x1bd61cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 140)));
label_1bd620:
    // 0x1bd620: 0xc062be2  jal         func_18AF88
label_1bd624:
    if (ctx->pc == 0x1BD624u) {
        ctx->pc = 0x1BD624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD620u;
        // 0x1bd624: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD628u;
        goto label_1bd628;
    }
    ctx->pc = 0x1BD620u;
    SET_GPR_U32(ctx, 31, 0x1BD628u);
    ctx->pc = 0x1BD624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD620u;
    // 0x1bd624: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x1BD620u, 0x1BD628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD628u;
label_1bd628:
    // 0x1bd628: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd62c:
    // 0x1bd62c: 0x8e850090  lw          $a1, 0x90($s4)
    ctx->pc = 0x1bd62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
label_1bd630:
    // 0x1bd630: 0xc0616ac  jal         func_185AB0
label_1bd634:
    if (ctx->pc == 0x1BD634u) {
        ctx->pc = 0x1BD634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD630u;
        // 0x1bd634: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD638u;
        goto label_1bd638;
    }
    ctx->pc = 0x1BD630u;
    SET_GPR_U32(ctx, 31, 0x1BD638u);
    ctx->pc = 0x1BD634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD630u;
    // 0x1bd634: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1BD630u, 0x1BD638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD638u;
label_1bd638:
    // 0x1bd638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bd63c:
    if (ctx->pc == 0x1BD63Cu) {
        ctx->pc = 0x1BD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD638u;
        // 0x1bd63c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD640u;
        goto label_1bd640;
    }
    ctx->pc = 0x1BD638u;
    {
        const bool branch_taken_0x1bd638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD638u;
        // 0x1bd63c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd638) {
            ctx->pc = 0x1BD64Cu;
            goto label_1bd64c;
        }
    }
    ctx->pc = 0x1BD640u;
label_1bd640:
    // 0x1bd640: 0x96850090  lhu         $a1, 0x90($s4)
    ctx->pc = 0x1bd640u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 144)));
label_1bd644:
    // 0x1bd644: 0xc062be2  jal         func_18AF88
label_1bd648:
    if (ctx->pc == 0x1BD648u) {
        ctx->pc = 0x1BD648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD644u;
        // 0x1bd648: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD64Cu;
        goto label_1bd64c;
    }
    ctx->pc = 0x1BD644u;
    SET_GPR_U32(ctx, 31, 0x1BD64Cu);
    ctx->pc = 0x1BD648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD644u;
    // 0x1bd648: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x1BD644u, 0x1BD64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD64Cu;
label_1bd64c:
    // 0x1bd64c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd64cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd650:
    // 0x1bd650: 0x8e850094  lw          $a1, 0x94($s4)
    ctx->pc = 0x1bd650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
label_1bd654:
    // 0x1bd654: 0xc0616ac  jal         func_185AB0
label_1bd658:
    if (ctx->pc == 0x1BD658u) {
        ctx->pc = 0x1BD658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD654u;
        // 0x1bd658: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD65Cu;
        goto label_1bd65c;
    }
    ctx->pc = 0x1BD654u;
    SET_GPR_U32(ctx, 31, 0x1BD65Cu);
    ctx->pc = 0x1BD658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD654u;
    // 0x1bd658: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1BD654u, 0x1BD65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD65Cu;
label_1bd65c:
    // 0x1bd65c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bd660:
    if (ctx->pc == 0x1BD660u) {
        ctx->pc = 0x1BD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD65Cu;
        // 0x1bd660: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD664u;
        goto label_1bd664;
    }
    ctx->pc = 0x1BD65Cu;
    {
        const bool branch_taken_0x1bd65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD65Cu;
        // 0x1bd660: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd65c) {
            ctx->pc = 0x1BD670u;
            goto label_1bd670;
        }
    }
    ctx->pc = 0x1BD664u;
label_1bd664:
    // 0x1bd664: 0x96850094  lhu         $a1, 0x94($s4)
    ctx->pc = 0x1bd664u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 148)));
label_1bd668:
    // 0x1bd668: 0xc062be2  jal         func_18AF88
label_1bd66c:
    if (ctx->pc == 0x1BD66Cu) {
        ctx->pc = 0x1BD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD668u;
        // 0x1bd66c: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD670u;
        goto label_1bd670;
    }
    ctx->pc = 0x1BD668u;
    SET_GPR_U32(ctx, 31, 0x1BD670u);
    ctx->pc = 0x1BD66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD668u;
    // 0x1bd66c: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x1BD668u, 0x1BD670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD670u;
label_1bd670:
    // 0x1bd670: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd674:
    // 0x1bd674: 0x8e850098  lw          $a1, 0x98($s4)
    ctx->pc = 0x1bd674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
label_1bd678:
    // 0x1bd678: 0xc0616ac  jal         func_185AB0
label_1bd67c:
    if (ctx->pc == 0x1BD67Cu) {
        ctx->pc = 0x1BD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD678u;
        // 0x1bd67c: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD680u;
        goto label_1bd680;
    }
    ctx->pc = 0x1BD678u;
    SET_GPR_U32(ctx, 31, 0x1BD680u);
    ctx->pc = 0x1BD67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD678u;
    // 0x1bd67c: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1BD678u, 0x1BD680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD680u;
label_1bd680:
    // 0x1bd680: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bd684:
    if (ctx->pc == 0x1BD684u) {
        ctx->pc = 0x1BD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD680u;
        // 0x1bd684: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD688u;
        goto label_1bd688;
    }
    ctx->pc = 0x1BD680u;
    {
        const bool branch_taken_0x1bd680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD680u;
        // 0x1bd684: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd680) {
            ctx->pc = 0x1BD694u;
            goto label_1bd694;
        }
    }
    ctx->pc = 0x1BD688u;
label_1bd688:
    // 0x1bd688: 0x96850098  lhu         $a1, 0x98($s4)
    ctx->pc = 0x1bd688u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 152)));
label_1bd68c:
    // 0x1bd68c: 0xc062be2  jal         func_18AF88
label_1bd690:
    if (ctx->pc == 0x1BD690u) {
        ctx->pc = 0x1BD690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD68Cu;
        // 0x1bd690: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD694u;
        goto label_1bd694;
    }
    ctx->pc = 0x1BD68Cu;
    SET_GPR_U32(ctx, 31, 0x1BD694u);
    ctx->pc = 0x1BD690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD68Cu;
    // 0x1bd690: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x1BD68Cu, 0x1BD694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD694u;
label_1bd694:
    // 0x1bd694: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bd694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1bd698:
    // 0x1bd698: 0x8e85009c  lw          $a1, 0x9C($s4)
    ctx->pc = 0x1bd698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_1bd69c:
    // 0x1bd69c: 0xc0616ac  jal         func_185AB0
label_1bd6a0:
    if (ctx->pc == 0x1BD6A0u) {
        ctx->pc = 0x1BD6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD69Cu;
        // 0x1bd6a0: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD6A4u;
        goto label_1bd6a4;
    }
    ctx->pc = 0x1BD69Cu;
    SET_GPR_U32(ctx, 31, 0x1BD6A4u);
    ctx->pc = 0x1BD6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD69Cu;
    // 0x1bd6a0: 0x8c64cd4c  lw          $a0, -0x32B4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1BD69Cu, 0x1BD6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD6A4u;
label_1bd6a4:
    // 0x1bd6a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bd6a8:
    if (ctx->pc == 0x1BD6A8u) {
        ctx->pc = 0x1BD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6A4u;
        // 0x1bd6a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD6ACu;
        goto label_1bd6ac;
    }
    ctx->pc = 0x1BD6A4u;
    {
        const bool branch_taken_0x1bd6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6A4u;
        // 0x1bd6a8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd6a4) {
            ctx->pc = 0x1BD6B8u;
            goto label_1bd6b8;
        }
    }
    ctx->pc = 0x1BD6ACu;
label_1bd6ac:
    // 0x1bd6ac: 0x9685009c  lhu         $a1, 0x9C($s4)
    ctx->pc = 0x1bd6acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 156)));
label_1bd6b0:
    // 0x1bd6b0: 0xc062be2  jal         func_18AF88
label_1bd6b4:
    if (ctx->pc == 0x1BD6B4u) {
        ctx->pc = 0x1BD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6B0u;
        // 0x1bd6b4: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD6B8u;
        goto label_1bd6b8;
    }
    ctx->pc = 0x1BD6B0u;
    SET_GPR_U32(ctx, 31, 0x1BD6B8u);
    ctx->pc = 0x1BD6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD6B0u;
    // 0x1bd6b4: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x1BD6B0u, 0x1BD6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD6B8u;
label_1bd6b8:
    // 0x1bd6b8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1bd6b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1bd6bc:
    // 0x1bd6bc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1bd6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1bd6c0:
    // 0x1bd6c0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1bd6c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1bd6c4:
    // 0x1bd6c4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1bd6c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1bd6c8:
    // 0x1bd6c8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1bd6c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1bd6cc:
    // 0x1bd6cc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1bd6ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bd6d0:
    // 0x1bd6d0: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1bd6d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1bd6d4:
    // 0x1bd6d4: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1bd6d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bd6d8:
    // 0x1bd6d8: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1bd6d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bd6dc:
    // 0x1bd6dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bd6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bd6e0:
    // 0x1bd6e0: 0x3e00008  jr          $ra
label_1bd6e4:
    if (ctx->pc == 0x1BD6E4u) {
        ctx->pc = 0x1BD6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6E0u;
        // 0x1bd6e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BD6E8u;
        goto label_fallthrough_0x1bd6e0;
    }
    ctx->pc = 0x1BD6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD6E0u;
        // 0x1bd6e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bd6e0:
    ctx->pc = 0x1BD6E8u;
}
