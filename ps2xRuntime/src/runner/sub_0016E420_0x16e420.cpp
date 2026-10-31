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

// Function: sub_0016E420
// Address: 0x16e420 - 0x16e6a8
void sub_0016E420_0x16e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E420_0x16e420");
#endif

    switch (ctx->pc) {
        case 0x16e420u: goto label_16e420;
        case 0x16e424u: goto label_16e424;
        case 0x16e428u: goto label_16e428;
        case 0x16e42cu: goto label_16e42c;
        case 0x16e430u: goto label_16e430;
        case 0x16e434u: goto label_16e434;
        case 0x16e438u: goto label_16e438;
        case 0x16e43cu: goto label_16e43c;
        case 0x16e440u: goto label_16e440;
        case 0x16e444u: goto label_16e444;
        case 0x16e448u: goto label_16e448;
        case 0x16e44cu: goto label_16e44c;
        case 0x16e450u: goto label_16e450;
        case 0x16e454u: goto label_16e454;
        case 0x16e458u: goto label_16e458;
        case 0x16e45cu: goto label_16e45c;
        case 0x16e460u: goto label_16e460;
        case 0x16e464u: goto label_16e464;
        case 0x16e468u: goto label_16e468;
        case 0x16e46cu: goto label_16e46c;
        case 0x16e470u: goto label_16e470;
        case 0x16e474u: goto label_16e474;
        case 0x16e478u: goto label_16e478;
        case 0x16e47cu: goto label_16e47c;
        case 0x16e480u: goto label_16e480;
        case 0x16e484u: goto label_16e484;
        case 0x16e488u: goto label_16e488;
        case 0x16e48cu: goto label_16e48c;
        case 0x16e490u: goto label_16e490;
        case 0x16e494u: goto label_16e494;
        case 0x16e498u: goto label_16e498;
        case 0x16e49cu: goto label_16e49c;
        case 0x16e4a0u: goto label_16e4a0;
        case 0x16e4a4u: goto label_16e4a4;
        case 0x16e4a8u: goto label_16e4a8;
        case 0x16e4acu: goto label_16e4ac;
        case 0x16e4b0u: goto label_16e4b0;
        case 0x16e4b4u: goto label_16e4b4;
        case 0x16e4b8u: goto label_16e4b8;
        case 0x16e4bcu: goto label_16e4bc;
        case 0x16e4c0u: goto label_16e4c0;
        case 0x16e4c4u: goto label_16e4c4;
        case 0x16e4c8u: goto label_16e4c8;
        case 0x16e4ccu: goto label_16e4cc;
        case 0x16e4d0u: goto label_16e4d0;
        case 0x16e4d4u: goto label_16e4d4;
        case 0x16e4d8u: goto label_16e4d8;
        case 0x16e4dcu: goto label_16e4dc;
        case 0x16e4e0u: goto label_16e4e0;
        case 0x16e4e4u: goto label_16e4e4;
        case 0x16e4e8u: goto label_16e4e8;
        case 0x16e4ecu: goto label_16e4ec;
        case 0x16e4f0u: goto label_16e4f0;
        case 0x16e4f4u: goto label_16e4f4;
        case 0x16e4f8u: goto label_16e4f8;
        case 0x16e4fcu: goto label_16e4fc;
        case 0x16e500u: goto label_16e500;
        case 0x16e504u: goto label_16e504;
        case 0x16e508u: goto label_16e508;
        case 0x16e50cu: goto label_16e50c;
        case 0x16e510u: goto label_16e510;
        case 0x16e514u: goto label_16e514;
        case 0x16e518u: goto label_16e518;
        case 0x16e51cu: goto label_16e51c;
        case 0x16e520u: goto label_16e520;
        case 0x16e524u: goto label_16e524;
        case 0x16e528u: goto label_16e528;
        case 0x16e52cu: goto label_16e52c;
        case 0x16e530u: goto label_16e530;
        case 0x16e534u: goto label_16e534;
        case 0x16e538u: goto label_16e538;
        case 0x16e53cu: goto label_16e53c;
        case 0x16e540u: goto label_16e540;
        case 0x16e544u: goto label_16e544;
        case 0x16e548u: goto label_16e548;
        case 0x16e54cu: goto label_16e54c;
        case 0x16e550u: goto label_16e550;
        case 0x16e554u: goto label_16e554;
        case 0x16e558u: goto label_16e558;
        case 0x16e55cu: goto label_16e55c;
        case 0x16e560u: goto label_16e560;
        case 0x16e564u: goto label_16e564;
        case 0x16e568u: goto label_16e568;
        case 0x16e56cu: goto label_16e56c;
        case 0x16e570u: goto label_16e570;
        case 0x16e574u: goto label_16e574;
        case 0x16e578u: goto label_16e578;
        case 0x16e57cu: goto label_16e57c;
        case 0x16e580u: goto label_16e580;
        case 0x16e584u: goto label_16e584;
        case 0x16e588u: goto label_16e588;
        case 0x16e58cu: goto label_16e58c;
        case 0x16e590u: goto label_16e590;
        case 0x16e594u: goto label_16e594;
        case 0x16e598u: goto label_16e598;
        case 0x16e59cu: goto label_16e59c;
        case 0x16e5a0u: goto label_16e5a0;
        case 0x16e5a4u: goto label_16e5a4;
        case 0x16e5a8u: goto label_16e5a8;
        case 0x16e5acu: goto label_16e5ac;
        case 0x16e5b0u: goto label_16e5b0;
        case 0x16e5b4u: goto label_16e5b4;
        case 0x16e5b8u: goto label_16e5b8;
        case 0x16e5bcu: goto label_16e5bc;
        case 0x16e5c0u: goto label_16e5c0;
        case 0x16e5c4u: goto label_16e5c4;
        case 0x16e5c8u: goto label_16e5c8;
        case 0x16e5ccu: goto label_16e5cc;
        case 0x16e5d0u: goto label_16e5d0;
        case 0x16e5d4u: goto label_16e5d4;
        case 0x16e5d8u: goto label_16e5d8;
        case 0x16e5dcu: goto label_16e5dc;
        case 0x16e5e0u: goto label_16e5e0;
        case 0x16e5e4u: goto label_16e5e4;
        case 0x16e5e8u: goto label_16e5e8;
        case 0x16e5ecu: goto label_16e5ec;
        case 0x16e5f0u: goto label_16e5f0;
        case 0x16e5f4u: goto label_16e5f4;
        case 0x16e5f8u: goto label_16e5f8;
        case 0x16e5fcu: goto label_16e5fc;
        case 0x16e600u: goto label_16e600;
        case 0x16e604u: goto label_16e604;
        case 0x16e608u: goto label_16e608;
        case 0x16e60cu: goto label_16e60c;
        case 0x16e610u: goto label_16e610;
        case 0x16e614u: goto label_16e614;
        case 0x16e618u: goto label_16e618;
        case 0x16e61cu: goto label_16e61c;
        case 0x16e620u: goto label_16e620;
        case 0x16e624u: goto label_16e624;
        case 0x16e628u: goto label_16e628;
        case 0x16e62cu: goto label_16e62c;
        case 0x16e630u: goto label_16e630;
        case 0x16e634u: goto label_16e634;
        case 0x16e638u: goto label_16e638;
        case 0x16e63cu: goto label_16e63c;
        case 0x16e640u: goto label_16e640;
        case 0x16e644u: goto label_16e644;
        case 0x16e648u: goto label_16e648;
        case 0x16e64cu: goto label_16e64c;
        case 0x16e650u: goto label_16e650;
        case 0x16e654u: goto label_16e654;
        case 0x16e658u: goto label_16e658;
        case 0x16e65cu: goto label_16e65c;
        case 0x16e660u: goto label_16e660;
        case 0x16e664u: goto label_16e664;
        case 0x16e668u: goto label_16e668;
        case 0x16e66cu: goto label_16e66c;
        case 0x16e670u: goto label_16e670;
        case 0x16e674u: goto label_16e674;
        case 0x16e678u: goto label_16e678;
        case 0x16e67cu: goto label_16e67c;
        case 0x16e680u: goto label_16e680;
        case 0x16e684u: goto label_16e684;
        case 0x16e688u: goto label_16e688;
        case 0x16e68cu: goto label_16e68c;
        case 0x16e690u: goto label_16e690;
        case 0x16e694u: goto label_16e694;
        case 0x16e698u: goto label_16e698;
        case 0x16e69cu: goto label_16e69c;
        case 0x16e6a0u: goto label_16e6a0;
        case 0x16e6a4u: goto label_16e6a4;
        default: break;
    }

    ctx->pc = 0x16e420u;

label_16e420:
    // 0x16e420: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x16e420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_16e424:
    // 0x16e424: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x16e424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_16e428:
    // 0x16e428: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x16e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_16e42c:
    // 0x16e42c: 0x24428988  addiu       $v0, $v0, -0x7678
    ctx->pc = 0x16e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936968));
label_16e430:
    // 0x16e430: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x16e430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_16e434:
    // 0x16e434: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16e434u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e438:
    // 0x16e438: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x16e438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_16e43c:
    // 0x16e43c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16e43cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e440:
    // 0x16e440: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x16e440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_16e444:
    // 0x16e444: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x16e444u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_16e448:
    // 0x16e448: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x16e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_16e44c:
    // 0x16e44c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x16e44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_16e450:
    // 0x16e450: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x16e450u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e454:
    // 0x16e454: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x16e454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_16e458:
    // 0x16e458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e45c:
    // 0x16e45c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x16e45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_16e460:
    // 0x16e460: 0x3c1e0055  lui         $fp, 0x55
    ctx->pc = 0x16e460u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)85 << 16));
label_16e464:
    // 0x16e464: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x16e464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_16e468:
    // 0x16e468: 0x27d41900  addiu       $s4, $fp, 0x1900
    ctx->pc = 0x16e468u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 6400));
label_16e46c:
    // 0x16e46c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16e470:
    // 0x16e470: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x16e470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_16e474:
    // 0x16e474: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x16e474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_16e478:
    // 0x16e478: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x16e478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16e47c:
    // 0x16e47c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x16e47cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_16e480:
    // 0x16e480: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x16e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_16e484:
    // 0x16e484: 0x40f809  jalr        $v0
label_16e488:
    if (ctx->pc == 0x16E488u) {
        ctx->pc = 0x16E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E484u;
        // 0x16e488: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E48Cu;
        goto label_16e48c;
    }
    ctx->pc = 0x16E484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E48Cu);
        ctx->pc = 0x16E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E484u;
        // 0x16e488: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E484u, 0x16E48Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E48Cu;
label_16e48c:
    // 0x16e48c: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x16e48cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_16e490:
    // 0x16e490: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x16e490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_16e494:
    // 0x16e494: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16e494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16e498:
    // 0x16e498: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x16e498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_16e49c:
    // 0x16e49c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x16e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_16e4a0:
    // 0x16e4a0: 0x60f809  jalr        $v1
label_16e4a4:
    if (ctx->pc == 0x16E4A4u) {
        ctx->pc = 0x16E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4A0u;
        // 0x16e4a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4A8u;
        goto label_16e4a8;
    }
    ctx->pc = 0x16E4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E4A8u);
        ctx->pc = 0x16E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4A0u;
        // 0x16e4a4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E4A0u, 0x16E4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E4A8u;
label_16e4a8:
    // 0x16e4a8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x16e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_16e4ac:
    // 0x16e4ac: 0x240502d1  addiu       $a1, $zero, 0x2D1
    ctx->pc = 0x16e4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 721));
label_16e4b0:
    // 0x16e4b0: 0x8c82cd4c  lw          $v0, -0x32B4($a0)
    ctx->pc = 0x16e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954316)));
label_16e4b4:
    // 0x16e4b4: 0x8c550070  lw          $s5, 0x70($v0)
    ctx->pc = 0x16e4b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_16e4b8:
    // 0x16e4b8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x16e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_16e4bc:
    // 0x16e4bc: 0x0  nop
    ctx->pc = 0x16e4bcu;
    // NOP
label_16e4c0:
    // 0x16e4c0: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x16e4c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16e4c4:
    // 0x16e4c4: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x16e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_16e4c8:
    // 0x16e4c8: 0x24b3ffff  addiu       $s3, $a1, -0x1
    ctx->pc = 0x16e4c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_16e4cc:
    // 0x16e4cc: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x16e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_16e4d0:
    // 0x16e4d0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x16e4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16e4d4:
    // 0x16e4d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x16e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_16e4d8:
    // 0x16e4d8: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x16e4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16e4dc:
    // 0x16e4dc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_16e4e0:
    // 0x16e4e0: 0x12030017  beq         $s0, $v1, . + 4 + (0x17 << 2)
label_16e4e4:
    if (ctx->pc == 0x16E4E4u) {
        ctx->pc = 0x16E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4E0u;
        // 0x16e4e4: 0x32d70001  andi        $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4E8u;
        goto label_16e4e8;
    }
    ctx->pc = 0x16E4E0u;
    {
        const bool branch_taken_0x16e4e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4E0u;
        // 0x16e4e4: 0x32d70001  andi        $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4e0) {
            ctx->pc = 0x16E540u;
            goto label_16e540;
        }
    }
    ctx->pc = 0x16E4E8u;
label_16e4e8:
    // 0x16e4e8: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_16e4ec:
    if (ctx->pc == 0x16E4ECu) {
        ctx->pc = 0x16E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4E8u;
        // 0x16e4ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4F0u;
        goto label_16e4f0;
    }
    ctx->pc = 0x16E4E8u;
    {
        const bool branch_taken_0x16e4e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4E8u;
        // 0x16e4ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4e8) {
            ctx->pc = 0x16E540u;
            goto label_16e540;
        }
    }
    ctx->pc = 0x16E4F0u;
label_16e4f0:
    // 0x16e4f0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x16e4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_16e4f4:
    // 0x16e4f4: 0xc136ac2  jal         func_4DAB08
label_16e4f8:
    if (ctx->pc == 0x16E4F8u) {
        ctx->pc = 0x16E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E4F4u;
        // 0x16e4f8: 0x24060062  addiu       $a2, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E4FCu;
        goto label_16e4fc;
    }
    ctx->pc = 0x16E4F4u;
    SET_GPR_U32(ctx, 31, 0x16E4FCu);
    ctx->pc = 0x16E4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E4F4u;
    // 0x16e4f8: 0x24060062  addiu       $a2, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB08u, 0x16E4F4u, 0x16E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E4FCu;
label_16e4fc:
    // 0x16e4fc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x16e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_16e500:
    // 0x16e500: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x16e500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_16e504:
    // 0x16e504: 0x24060063  addiu       $a2, $zero, 0x63
    ctx->pc = 0x16e504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_16e508:
    // 0x16e508: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x16e508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_16e50c:
    // 0x16e50c: 0xc1378a4  jal         func_4DE290
label_16e510:
    if (ctx->pc == 0x16E510u) {
        ctx->pc = 0x16E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E50Cu;
        // 0x16e510: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E514u;
        goto label_16e514;
    }
    ctx->pc = 0x16E50Cu;
    SET_GPR_U32(ctx, 31, 0x16E514u);
    ctx->pc = 0x16E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E50Cu;
    // 0x16e510: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE290u, 0x16E50Cu, 0x16E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E514u;
label_16e514:
    // 0x16e514: 0x240502d1  addiu       $a1, $zero, 0x2D1
    ctx->pc = 0x16e514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 721));
label_16e518:
    // 0x16e518: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x16e518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_16e51c:
    // 0x16e51c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16e520:
    // 0x16e520: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x16e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_16e524:
    // 0x16e524: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16e524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_16e528:
    // 0x16e528: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x16e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e52c:
    // 0x16e52c: 0x52030001  beql        $s0, $v1, . + 4 + (0x1 << 2)
label_16e530:
    if (ctx->pc == 0x16E530u) {
        ctx->pc = 0x16E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E52Cu;
        // 0x16e530: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E534u;
        goto label_16e534;
    }
    ctx->pc = 0x16E52Cu;
    {
        const bool branch_taken_0x16e52c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e52c) {
            ctx->pc = 0x16E530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E52Cu;
            // 0x16e530: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E534u;
            goto label_16e534;
        }
    }
    ctx->pc = 0x16E534u;
label_16e534:
    // 0x16e534: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x16e534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_16e538:
    // 0x16e538: 0x4a1fff7  bgez        $a1, . + 4 + (-0x9 << 2)
label_16e53c:
    if (ctx->pc == 0x16E53Cu) {
        ctx->pc = 0x16E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E538u;
        // 0x16e53c: 0x8e46000c  lw          $a2, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E540u;
        goto label_16e540;
    }
    ctx->pc = 0x16E538u;
    {
        const bool branch_taken_0x16e538 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x16E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E538u;
        // 0x16e53c: 0x8e46000c  lw          $a2, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e538) {
            ctx->pc = 0x16E518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e518;
        }
    }
    ctx->pc = 0x16E540u;
label_16e540:
    // 0x16e540: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16e540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16e544:
    // 0x16e544: 0x4a3ffde  bgezl       $a1, . + 4 + (-0x22 << 2)
label_16e548:
    if (ctx->pc == 0x16E548u) {
        ctx->pc = 0x16E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E544u;
        // 0x16e548: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E54Cu;
        goto label_16e54c;
    }
    ctx->pc = 0x16E544u;
    {
        const bool branch_taken_0x16e544 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x16e544) {
            ctx->pc = 0x16E548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E544u;
            // 0x16e548: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16e4c0;
        }
    }
    ctx->pc = 0x16E54Cu;
label_16e54c:
    // 0x16e54c: 0x8cc40b54  lw          $a0, 0xB54($a2)
    ctx->pc = 0x16e54cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2900)));
label_16e550:
    // 0x16e550: 0x27d01900  addiu       $s0, $fp, 0x1900
    ctx->pc = 0x16e550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 6400));
label_16e554:
    // 0x16e554: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e558:
    // 0x16e558: 0x24060072  addiu       $a2, $zero, 0x72
    ctx->pc = 0x16e558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_16e55c:
    // 0x16e55c: 0xc1378c4  jal         func_4DE310
label_16e560:
    if (ctx->pc == 0x16E560u) {
        ctx->pc = 0x16E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E55Cu;
        // 0x16e560: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E564u;
        goto label_16e564;
    }
    ctx->pc = 0x16E55Cu;
    SET_GPR_U32(ctx, 31, 0x16E564u);
    ctx->pc = 0x16E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E55Cu;
    // 0x16e560: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE310u, 0x16E55Cu, 0x16E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E564u;
label_16e564:
    // 0x16e564: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x16e564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_16e568:
    // 0x16e568: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x16e568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_16e56c:
    // 0x16e56c: 0xc1378d6  jal         func_4DE358
label_16e570:
    if (ctx->pc == 0x16E570u) {
        ctx->pc = 0x16E570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E56Cu;
        // 0x16e570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E574u;
        goto label_16e574;
    }
    ctx->pc = 0x16E56Cu;
    SET_GPR_U32(ctx, 31, 0x16E574u);
    ctx->pc = 0x16E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E56Cu;
    // 0x16e570: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE358u, 0x16E56Cu, 0x16E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E574u;
label_16e574:
    // 0x16e574: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16e574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16e578:
    // 0x16e578: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x16e578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_16e57c:
    // 0x16e57c: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x16e57cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_16e580:
    // 0x16e580: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16e580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16e584:
    // 0x16e584: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x16e584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_16e588:
    // 0x16e588: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x16e588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_16e58c:
    // 0x16e58c: 0x60f809  jalr        $v1
label_16e590:
    if (ctx->pc == 0x16E590u) {
        ctx->pc = 0x16E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E58Cu;
        // 0x16e590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E594u;
        goto label_16e594;
    }
    ctx->pc = 0x16E58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E594u);
        ctx->pc = 0x16E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E58Cu;
        // 0x16e590: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E58Cu, 0x16E594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E594u;
label_16e594:
    // 0x16e594: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x16e594u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_16e598:
    // 0x16e598: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e59c:
    // 0x16e59c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e5a0:
    // 0x16e5a0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16e5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16e5a4:
    // 0x16e5a4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x16e5a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_16e5a8:
    // 0x16e5a8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x16e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_16e5ac:
    // 0x16e5ac: 0x60f809  jalr        $v1
label_16e5b0:
    if (ctx->pc == 0x16E5B0u) {
        ctx->pc = 0x16E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5ACu;
        // 0x16e5b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5B4u;
        goto label_16e5b4;
    }
    ctx->pc = 0x16E5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E5B4u);
        ctx->pc = 0x16E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5ACu;
        // 0x16e5b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E5ACu, 0x16E5B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E5B4u;
label_16e5b4:
    // 0x16e5b4: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x16e5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_16e5b8:
    // 0x16e5b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16e5bc:
    // 0x16e5bc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x16e5bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_16e5c0:
    // 0x16e5c0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x16e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_16e5c4:
    // 0x16e5c4: 0x40f809  jalr        $v0
label_16e5c8:
    if (ctx->pc == 0x16E5C8u) {
        ctx->pc = 0x16E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5C4u;
        // 0x16e5c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5CCu;
        goto label_16e5cc;
    }
    ctx->pc = 0x16E5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E5CCu);
        ctx->pc = 0x16E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5C4u;
        // 0x16e5c8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E5C4u, 0x16E5CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E5CCu;
label_16e5cc:
    // 0x16e5cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x16e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_16e5d0:
    // 0x16e5d0: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x16e5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_16e5d4:
    // 0x16e5d4: 0x8c4627e4  lw          $a2, 0x27E4($v0)
    ctx->pc = 0x16e5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_16e5d8:
    // 0x16e5d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16e5dc:
    // 0x16e5dc: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x16e5dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_16e5e0:
    // 0x16e5e0: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x16e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_16e5e4:
    // 0x16e5e4: 0x60f809  jalr        $v1
label_16e5e8:
    if (ctx->pc == 0x16E5E8u) {
        ctx->pc = 0x16E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5E4u;
        // 0x16e5e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E5ECu;
        goto label_16e5ec;
    }
    ctx->pc = 0x16E5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E5ECu);
        ctx->pc = 0x16E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5E4u;
        // 0x16e5e8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E5E4u, 0x16E5ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E5ECu;
label_16e5ec:
    // 0x16e5ec: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x16e5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_16e5f0:
    // 0x16e5f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16e5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e5f4:
    // 0x16e5f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e5f8:
    // 0x16e5f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16e5fc:
    // 0x16e5fc: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x16e5fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_16e600:
    // 0x16e600: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x16e600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_16e604:
    // 0x16e604: 0x60f809  jalr        $v1
label_16e608:
    if (ctx->pc == 0x16E608u) {
        ctx->pc = 0x16E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E604u;
        // 0x16e608: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E60Cu;
        goto label_16e60c;
    }
    ctx->pc = 0x16E604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E60Cu);
        ctx->pc = 0x16E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E604u;
        // 0x16e608: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E604u, 0x16E60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E60Cu;
label_16e60c:
    // 0x16e60c: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x16e60cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_16e610:
    // 0x16e610: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x16e610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_16e614:
    // 0x16e614: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16e614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16e618:
    // 0x16e618: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x16e618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_16e61c:
    // 0x16e61c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x16e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_16e620:
    // 0x16e620: 0x60f809  jalr        $v1
label_16e624:
    if (ctx->pc == 0x16E624u) {
        ctx->pc = 0x16E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E620u;
        // 0x16e624: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E628u;
        goto label_16e628;
    }
    ctx->pc = 0x16E620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E628u);
        ctx->pc = 0x16E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E620u;
        // 0x16e624: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E620u, 0x16E628u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E628u;
label_16e628:
    // 0x16e628: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x16e628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_16e62c:
    // 0x16e62c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e630:
    // 0x16e630: 0xc1378f6  jal         func_4DE3D8
label_16e634:
    if (ctx->pc == 0x16E634u) {
        ctx->pc = 0x16E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E630u;
        // 0x16e634: 0x24060082  addiu       $a2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E638u;
        goto label_16e638;
    }
    ctx->pc = 0x16E630u;
    SET_GPR_U32(ctx, 31, 0x16E638u);
    ctx->pc = 0x16E634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E630u;
    // 0x16e634: 0x24060082  addiu       $a2, $zero, 0x82 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE3D8u, 0x16E630u, 0x16E638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E638u;
label_16e638:
    // 0x16e638: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x16e638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_16e63c:
    // 0x16e63c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e640:
    // 0x16e640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e644:
    // 0x16e644: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x16e644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16e648:
    // 0x16e648: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x16e648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_16e64c:
    // 0x16e64c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x16e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_16e650:
    // 0x16e650: 0x60f809  jalr        $v1
label_16e654:
    if (ctx->pc == 0x16E654u) {
        ctx->pc = 0x16E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E650u;
        // 0x16e654: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E658u;
        goto label_16e658;
    }
    ctx->pc = 0x16E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x16E658u);
        ctx->pc = 0x16E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E650u;
        // 0x16e654: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E650u, 0x16E658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E658u;
label_16e658:
    // 0x16e658: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x16e658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_16e65c:
    // 0x16e65c: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x16e65cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_16e660:
    // 0x16e660: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x16e660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_16e664:
    // 0x16e664: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_16e668:
    if (ctx->pc == 0x16E668u) {
        ctx->pc = 0x16E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E664u;
        // 0x16e668: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E66Cu;
        goto label_16e66c;
    }
    ctx->pc = 0x16E664u;
    {
        const bool branch_taken_0x16e664 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E664u;
        // 0x16e668: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e664) {
            ctx->pc = 0x16E674u;
            goto label_16e674;
        }
    }
    ctx->pc = 0x16E66Cu;
label_16e66c:
    // 0x16e66c: 0xc10b208  jal         func_42C820
label_16e670:
    if (ctx->pc == 0x16E670u) {
        ctx->pc = 0x16E670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E66Cu;
        // 0x16e670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E674u;
        goto label_16e674;
    }
    ctx->pc = 0x16E66Cu;
    SET_GPR_U32(ctx, 31, 0x16E674u);
    ctx->pc = 0x16E670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E66Cu;
    // 0x16e670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x16E66Cu, 0x16E674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E674u;
label_16e674:
    // 0x16e674: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x16e674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_16e678:
    // 0x16e678: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x16e678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_16e67c:
    // 0x16e67c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x16e67cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16e680:
    // 0x16e680: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x16e680u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16e684:
    // 0x16e684: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x16e684u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16e688:
    // 0x16e688: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x16e688u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16e68c:
    // 0x16e68c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x16e68cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16e690:
    // 0x16e690: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x16e690u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16e694:
    // 0x16e694: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x16e694u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16e698:
    // 0x16e698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e69c:
    // 0x16e69c: 0x3e00008  jr          $ra
label_16e6a0:
    if (ctx->pc == 0x16E6A0u) {
        ctx->pc = 0x16E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E69Cu;
        // 0x16e6a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E6A4u;
        goto label_16e6a4;
    }
    ctx->pc = 0x16E69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E69Cu;
        // 0x16e6a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E6A4u;
label_16e6a4:
    // 0x16e6a4: 0x0  nop
    ctx->pc = 0x16e6a4u;
    // NOP
    ctx->pc = 0x16e6a8u;
}
