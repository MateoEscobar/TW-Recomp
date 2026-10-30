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

// Function: sub_0023E408
// Address: 0x23e408 - 0x23e6e8
void sub_0023E408_0x23e408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E408_0x23e408");
#endif

    switch (ctx->pc) {
        case 0x23e408u: goto label_23e408;
        case 0x23e40cu: goto label_23e40c;
        case 0x23e410u: goto label_23e410;
        case 0x23e414u: goto label_23e414;
        case 0x23e418u: goto label_23e418;
        case 0x23e41cu: goto label_23e41c;
        case 0x23e420u: goto label_23e420;
        case 0x23e424u: goto label_23e424;
        case 0x23e428u: goto label_23e428;
        case 0x23e42cu: goto label_23e42c;
        case 0x23e430u: goto label_23e430;
        case 0x23e434u: goto label_23e434;
        case 0x23e438u: goto label_23e438;
        case 0x23e43cu: goto label_23e43c;
        case 0x23e440u: goto label_23e440;
        case 0x23e444u: goto label_23e444;
        case 0x23e448u: goto label_23e448;
        case 0x23e44cu: goto label_23e44c;
        case 0x23e450u: goto label_23e450;
        case 0x23e454u: goto label_23e454;
        case 0x23e458u: goto label_23e458;
        case 0x23e45cu: goto label_23e45c;
        case 0x23e460u: goto label_23e460;
        case 0x23e464u: goto label_23e464;
        case 0x23e468u: goto label_23e468;
        case 0x23e46cu: goto label_23e46c;
        case 0x23e470u: goto label_23e470;
        case 0x23e474u: goto label_23e474;
        case 0x23e478u: goto label_23e478;
        case 0x23e47cu: goto label_23e47c;
        case 0x23e480u: goto label_23e480;
        case 0x23e484u: goto label_23e484;
        case 0x23e488u: goto label_23e488;
        case 0x23e48cu: goto label_23e48c;
        case 0x23e490u: goto label_23e490;
        case 0x23e494u: goto label_23e494;
        case 0x23e498u: goto label_23e498;
        case 0x23e49cu: goto label_23e49c;
        case 0x23e4a0u: goto label_23e4a0;
        case 0x23e4a4u: goto label_23e4a4;
        case 0x23e4a8u: goto label_23e4a8;
        case 0x23e4acu: goto label_23e4ac;
        case 0x23e4b0u: goto label_23e4b0;
        case 0x23e4b4u: goto label_23e4b4;
        case 0x23e4b8u: goto label_23e4b8;
        case 0x23e4bcu: goto label_23e4bc;
        case 0x23e4c0u: goto label_23e4c0;
        case 0x23e4c4u: goto label_23e4c4;
        case 0x23e4c8u: goto label_23e4c8;
        case 0x23e4ccu: goto label_23e4cc;
        case 0x23e4d0u: goto label_23e4d0;
        case 0x23e4d4u: goto label_23e4d4;
        case 0x23e4d8u: goto label_23e4d8;
        case 0x23e4dcu: goto label_23e4dc;
        case 0x23e4e0u: goto label_23e4e0;
        case 0x23e4e4u: goto label_23e4e4;
        case 0x23e4e8u: goto label_23e4e8;
        case 0x23e4ecu: goto label_23e4ec;
        case 0x23e4f0u: goto label_23e4f0;
        case 0x23e4f4u: goto label_23e4f4;
        case 0x23e4f8u: goto label_23e4f8;
        case 0x23e4fcu: goto label_23e4fc;
        case 0x23e500u: goto label_23e500;
        case 0x23e504u: goto label_23e504;
        case 0x23e508u: goto label_23e508;
        case 0x23e50cu: goto label_23e50c;
        case 0x23e510u: goto label_23e510;
        case 0x23e514u: goto label_23e514;
        case 0x23e518u: goto label_23e518;
        case 0x23e51cu: goto label_23e51c;
        case 0x23e520u: goto label_23e520;
        case 0x23e524u: goto label_23e524;
        case 0x23e528u: goto label_23e528;
        case 0x23e52cu: goto label_23e52c;
        case 0x23e530u: goto label_23e530;
        case 0x23e534u: goto label_23e534;
        case 0x23e538u: goto label_23e538;
        case 0x23e53cu: goto label_23e53c;
        case 0x23e540u: goto label_23e540;
        case 0x23e544u: goto label_23e544;
        case 0x23e548u: goto label_23e548;
        case 0x23e54cu: goto label_23e54c;
        case 0x23e550u: goto label_23e550;
        case 0x23e554u: goto label_23e554;
        case 0x23e558u: goto label_23e558;
        case 0x23e55cu: goto label_23e55c;
        case 0x23e560u: goto label_23e560;
        case 0x23e564u: goto label_23e564;
        case 0x23e568u: goto label_23e568;
        case 0x23e56cu: goto label_23e56c;
        case 0x23e570u: goto label_23e570;
        case 0x23e574u: goto label_23e574;
        case 0x23e578u: goto label_23e578;
        case 0x23e57cu: goto label_23e57c;
        case 0x23e580u: goto label_23e580;
        case 0x23e584u: goto label_23e584;
        case 0x23e588u: goto label_23e588;
        case 0x23e58cu: goto label_23e58c;
        case 0x23e590u: goto label_23e590;
        case 0x23e594u: goto label_23e594;
        case 0x23e598u: goto label_23e598;
        case 0x23e59cu: goto label_23e59c;
        case 0x23e5a0u: goto label_23e5a0;
        case 0x23e5a4u: goto label_23e5a4;
        case 0x23e5a8u: goto label_23e5a8;
        case 0x23e5acu: goto label_23e5ac;
        case 0x23e5b0u: goto label_23e5b0;
        case 0x23e5b4u: goto label_23e5b4;
        case 0x23e5b8u: goto label_23e5b8;
        case 0x23e5bcu: goto label_23e5bc;
        case 0x23e5c0u: goto label_23e5c0;
        case 0x23e5c4u: goto label_23e5c4;
        case 0x23e5c8u: goto label_23e5c8;
        case 0x23e5ccu: goto label_23e5cc;
        case 0x23e5d0u: goto label_23e5d0;
        case 0x23e5d4u: goto label_23e5d4;
        case 0x23e5d8u: goto label_23e5d8;
        case 0x23e5dcu: goto label_23e5dc;
        case 0x23e5e0u: goto label_23e5e0;
        case 0x23e5e4u: goto label_23e5e4;
        case 0x23e5e8u: goto label_23e5e8;
        case 0x23e5ecu: goto label_23e5ec;
        case 0x23e5f0u: goto label_23e5f0;
        case 0x23e5f4u: goto label_23e5f4;
        case 0x23e5f8u: goto label_23e5f8;
        case 0x23e5fcu: goto label_23e5fc;
        case 0x23e600u: goto label_23e600;
        case 0x23e604u: goto label_23e604;
        case 0x23e608u: goto label_23e608;
        case 0x23e60cu: goto label_23e60c;
        case 0x23e610u: goto label_23e610;
        case 0x23e614u: goto label_23e614;
        case 0x23e618u: goto label_23e618;
        case 0x23e61cu: goto label_23e61c;
        case 0x23e620u: goto label_23e620;
        case 0x23e624u: goto label_23e624;
        case 0x23e628u: goto label_23e628;
        case 0x23e62cu: goto label_23e62c;
        case 0x23e630u: goto label_23e630;
        case 0x23e634u: goto label_23e634;
        case 0x23e638u: goto label_23e638;
        case 0x23e63cu: goto label_23e63c;
        case 0x23e640u: goto label_23e640;
        case 0x23e644u: goto label_23e644;
        case 0x23e648u: goto label_23e648;
        case 0x23e64cu: goto label_23e64c;
        case 0x23e650u: goto label_23e650;
        case 0x23e654u: goto label_23e654;
        case 0x23e658u: goto label_23e658;
        case 0x23e65cu: goto label_23e65c;
        case 0x23e660u: goto label_23e660;
        case 0x23e664u: goto label_23e664;
        case 0x23e668u: goto label_23e668;
        case 0x23e66cu: goto label_23e66c;
        case 0x23e670u: goto label_23e670;
        case 0x23e674u: goto label_23e674;
        case 0x23e678u: goto label_23e678;
        case 0x23e67cu: goto label_23e67c;
        case 0x23e680u: goto label_23e680;
        case 0x23e684u: goto label_23e684;
        case 0x23e688u: goto label_23e688;
        case 0x23e68cu: goto label_23e68c;
        case 0x23e690u: goto label_23e690;
        case 0x23e694u: goto label_23e694;
        case 0x23e698u: goto label_23e698;
        case 0x23e69cu: goto label_23e69c;
        case 0x23e6a0u: goto label_23e6a0;
        case 0x23e6a4u: goto label_23e6a4;
        case 0x23e6a8u: goto label_23e6a8;
        case 0x23e6acu: goto label_23e6ac;
        case 0x23e6b0u: goto label_23e6b0;
        case 0x23e6b4u: goto label_23e6b4;
        case 0x23e6b8u: goto label_23e6b8;
        case 0x23e6bcu: goto label_23e6bc;
        case 0x23e6c0u: goto label_23e6c0;
        case 0x23e6c4u: goto label_23e6c4;
        case 0x23e6c8u: goto label_23e6c8;
        case 0x23e6ccu: goto label_23e6cc;
        case 0x23e6d0u: goto label_23e6d0;
        case 0x23e6d4u: goto label_23e6d4;
        case 0x23e6d8u: goto label_23e6d8;
        case 0x23e6dcu: goto label_23e6dc;
        case 0x23e6e0u: goto label_23e6e0;
        case 0x23e6e4u: goto label_23e6e4;
        default: break;
    }

    ctx->pc = 0x23e408u;

label_23e408:
    // 0x23e408: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x23e408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_23e40c:
    // 0x23e40c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x23e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_23e410:
    // 0x23e410: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x23e410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_23e414:
    // 0x23e414: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x23e414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_23e418:
    // 0x23e418: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x23e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_23e41c:
    // 0x23e41c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x23e41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23e420:
    // 0x23e420: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x23e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_23e424:
    // 0x23e424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23e424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e428:
    // 0x23e428: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x23e428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_23e42c:
    // 0x23e42c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23e42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e430:
    // 0x23e430: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x23e430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_23e434:
    // 0x23e434: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23e434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e438:
    // 0x23e438: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x23e438u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_23e43c:
    // 0x23e43c: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x23e43cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_23e440:
    // 0x23e440: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x23e440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_23e444:
    // 0x23e444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23e444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23e448:
    // 0x23e448: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x23e448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23e44c:
    // 0x23e44c: 0xc089fda  jal         func_227F68
label_23e450:
    if (ctx->pc == 0x23E450u) {
        ctx->pc = 0x23E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E44Cu;
        // 0x23e450: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E454u;
        goto label_23e454;
    }
    ctx->pc = 0x23E44Cu;
    SET_GPR_U32(ctx, 31, 0x23E454u);
    ctx->pc = 0x23E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E44Cu;
    // 0x23e450: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F68u, 0x23E44Cu, 0x23E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E454u;
label_23e454:
    // 0x23e454: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23e458:
    if (ctx->pc == 0x23E458u) {
        ctx->pc = 0x23E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E454u;
        // 0x23e458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E45Cu;
        goto label_23e45c;
    }
    ctx->pc = 0x23E454u;
    {
        const bool branch_taken_0x23e454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E454u;
        // 0x23e458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e454) {
            ctx->pc = 0x23E474u;
            goto label_23e474;
        }
    }
    ctx->pc = 0x23E45Cu;
label_23e45c:
    // 0x23e45c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x23e45cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23e460:
    // 0x23e460: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x23e460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
label_23e464:
    // 0x23e464: 0xc08997c  jal         func_2265F0
label_23e468:
    if (ctx->pc == 0x23E468u) {
        ctx->pc = 0x23E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E464u;
        // 0x23e468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E46Cu;
        goto label_23e46c;
    }
    ctx->pc = 0x23E464u;
    SET_GPR_U32(ctx, 31, 0x23E46Cu);
    ctx->pc = 0x23E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E464u;
    // 0x23e468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x23E464u, 0x23E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E46Cu;
label_23e46c:
    // 0x23e46c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23e470:
    if (ctx->pc == 0x23E470u) {
        ctx->pc = 0x23E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E46Cu;
        // 0x23e470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E474u;
        goto label_23e474;
    }
    ctx->pc = 0x23E46Cu;
    {
        const bool branch_taken_0x23e46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E46Cu;
        // 0x23e470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e46c) {
            ctx->pc = 0x23E484u;
            goto label_23e484;
        }
    }
    ctx->pc = 0x23E474u;
label_23e474:
    // 0x23e474: 0xc089998  jal         func_226660
label_23e478:
    if (ctx->pc == 0x23E478u) {
        ctx->pc = 0x23E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E474u;
        // 0x23e478: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E47Cu;
        goto label_23e47c;
    }
    ctx->pc = 0x23E474u;
    SET_GPR_U32(ctx, 31, 0x23E47Cu);
    ctx->pc = 0x23E478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E474u;
    // 0x23e478: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x23E474u, 0x23E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E47Cu;
label_23e47c:
    // 0x23e47c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_23e480:
    if (ctx->pc == 0x23E480u) {
        ctx->pc = 0x23E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E47Cu;
        // 0x23e480: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E484u;
        goto label_23e484;
    }
    ctx->pc = 0x23E47Cu;
    {
        const bool branch_taken_0x23e47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e47c) {
            ctx->pc = 0x23E480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E47Cu;
            // 0x23e480: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E4D4u;
            goto label_23e4d4;
        }
    }
    ctx->pc = 0x23E484u;
label_23e484:
    // 0x23e484: 0xc087408  jal         func_21D020
label_23e488:
    if (ctx->pc == 0x23E488u) {
        ctx->pc = 0x23E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E484u;
        // 0x23e488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E48Cu;
        goto label_23e48c;
    }
    ctx->pc = 0x23E484u;
    SET_GPR_U32(ctx, 31, 0x23E48Cu);
    ctx->pc = 0x23E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E484u;
    // 0x23e488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x23E484u, 0x23E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E48Cu;
label_23e48c:
    // 0x23e48c: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x23e48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_23e490:
    // 0x23e490: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23e490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_23e494:
    // 0x23e494: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23e494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23e498:
    // 0x23e498: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x23e498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23e49c:
    // 0x23e49c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23e49cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_23e4a0:
    // 0x23e4a0: 0xc6230560  lwc1        $f3, 0x560($s1)
    ctx->pc = 0x23e4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23e4a4:
    // 0x23e4a4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x23e4a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_23e4a8:
    // 0x23e4a8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x23e4a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_23e4ac:
    // 0x23e4ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x23e4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_23e4b0:
    // 0x23e4b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23e4b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_23e4b4:
    // 0x23e4b4: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x23e4b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_23e4b8:
    // 0x23e4b8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x23e4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23e4bc:
    // 0x23e4bc: 0x0  nop
    ctx->pc = 0x23e4bcu;
    // NOP
label_23e4c0:
    // 0x23e4c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_23e4c4:
    if (ctx->pc == 0x23E4C4u) {
        ctx->pc = 0x23E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4C0u;
        // 0x23e4c4: 0xe7a10078  swc1        $f1, 0x78($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E4C8u;
        goto label_23e4c8;
    }
    ctx->pc = 0x23E4C0u;
    {
        const bool branch_taken_0x23e4c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4C0u;
        // 0x23e4c4: 0xe7a10078  swc1        $f1, 0x78($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e4c0) {
            ctx->pc = 0x23E4D0u;
            goto label_23e4d0;
        }
    }
    ctx->pc = 0x23E4C8u;
label_23e4c8:
    // 0x23e4c8: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x23e4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_23e4cc:
    // 0x23e4cc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x23e4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_23e4d0:
    // 0x23e4d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23e4d4:
    // 0x23e4d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x23e4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_23e4d8:
    // 0x23e4d8: 0x84450060  lh          $a1, 0x60($v0)
    ctx->pc = 0x23e4d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_23e4dc:
    // 0x23e4dc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x23e4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_23e4e0:
    // 0x23e4e0: 0x60f809  jalr        $v1
label_23e4e4:
    if (ctx->pc == 0x23E4E4u) {
        ctx->pc = 0x23E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4E0u;
        // 0x23e4e4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E4E8u;
        goto label_23e4e8;
    }
    ctx->pc = 0x23E4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23E4E8u);
        ctx->pc = 0x23E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4E0u;
        // 0x23e4e4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E4E0u, 0x23E4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E4E8u;
label_23e4e8:
    // 0x23e4e8: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x23e4e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_23e4ec:
    // 0x23e4ec: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x23e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_23e4f0:
    // 0x23e4f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23e4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e4f4:
    // 0x23e4f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23e4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e4f8:
    // 0x23e4f8: 0xc136b18  jal         func_4DAC60
label_23e4fc:
    if (ctx->pc == 0x23E4FCu) {
        ctx->pc = 0x23E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E4F8u;
        // 0x23e4fc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E500u;
        goto label_23e500;
    }
    ctx->pc = 0x23E4F8u;
    SET_GPR_U32(ctx, 31, 0x23E500u);
    ctx->pc = 0x23E4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E4F8u;
    // 0x23e4fc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x23E4F8u, 0x23E500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E500u;
label_23e500:
    // 0x23e500: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x23e500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23e504:
    // 0x23e504: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x23e504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23e508:
    // 0x23e508: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23e508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23e50c:
    // 0x23e50c: 0x0  nop
    ctx->pc = 0x23e50cu;
    // NOP
label_23e510:
    // 0x23e510: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_23e514:
    if (ctx->pc == 0x23E514u) {
        ctx->pc = 0x23E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E510u;
        // 0x23e514: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E518u;
        goto label_23e518;
    }
    ctx->pc = 0x23E510u;
    {
        const bool branch_taken_0x23e510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E510u;
        // 0x23e514: 0x7ba30000  lq          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e510) {
            ctx->pc = 0x23E528u;
            goto label_23e528;
        }
    }
    ctx->pc = 0x23E518u;
label_23e518:
    // 0x23e518: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x23e518u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23e51c:
    // 0x23e51c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x23e51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_23e520:
    // 0x23e520: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x23e520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_23e524:
    // 0x23e524: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x23e524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_23e528:
    // 0x23e528: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x23e528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23e52c:
    // 0x23e52c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23e52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23e530:
    // 0x23e530: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23e530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23e534:
    // 0x23e534: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x23e534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e538:
    // 0x23e538: 0xc136afa  jal         func_4DABE8
label_23e53c:
    if (ctx->pc == 0x23E53Cu) {
        ctx->pc = 0x23E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E538u;
        // 0x23e53c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E540u;
        goto label_23e540;
    }
    ctx->pc = 0x23E538u;
    SET_GPR_U32(ctx, 31, 0x23E540u);
    ctx->pc = 0x23E53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E538u;
    // 0x23e53c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x23E538u, 0x23E540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E540u;
label_23e540:
    // 0x23e540: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x23e540u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23e544:
    // 0x23e544: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23e544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23e548:
    // 0x23e548: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23e548u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23e54c:
    // 0x23e54c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x23e54cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23e550:
    // 0x23e550: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x23e550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23e554:
    // 0x23e554: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x23e554u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23e558:
    // 0x23e558: 0x4a0303bd  .word       0x4A0303BD                   # vsqrt       $Q, $vf3x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x23e558u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
label_23e55c:
    // 0x23e55c: 0x4a0003bf  vwaitq
    ctx->pc = 0x23e55cu;
    // VWAITQ (Q already resolved in this runtime)
label_23e560:
    // 0x23e560: 0x4b0000e0  vaddq.x     $vf3, $vf0, $Q
    ctx->pc = 0x23e560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_23e564:
    // 0x23e564: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x23e564u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_23e568:
    // 0x23e568: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23e568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23e56c:
    // 0x23e56c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23e570:
    // 0x23e570: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x23e570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23e574:
    // 0x23e574: 0x0  nop
    ctx->pc = 0x23e574u;
    // NOP
label_23e578:
    // 0x23e578: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x23e578u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_23e57c:
    // 0x23e57c: 0x0  nop
    ctx->pc = 0x23e57cu;
    // NOP
label_23e580:
    // 0x23e580: 0x0  nop
    ctx->pc = 0x23e580u;
    // NOP
label_23e584:
    // 0x23e584: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x23e584u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
label_23e588:
    // 0x23e588: 0xc136b24  jal         func_4DAC90
label_23e58c:
    if (ctx->pc == 0x23E58Cu) {
        ctx->pc = 0x23E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E588u;
        // 0x23e58c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E590u;
        goto label_23e590;
    }
    ctx->pc = 0x23E588u;
    SET_GPR_U32(ctx, 31, 0x23E590u);
    ctx->pc = 0x23E58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E588u;
    // 0x23e58c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x23E588u, 0x23E590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E590u;
label_23e590:
    // 0x23e590: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23e590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23e594:
    // 0x23e594: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x23e594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23e598:
    // 0x23e598: 0x8c4447c4  lw          $a0, 0x47C4($v0)
    ctx->pc = 0x23e598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_23e59c:
    // 0x23e59c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x23e59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23e5a0:
    // 0x23e5a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23e5a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e5a4:
    // 0x23e5a4: 0xc1036e2  jal         func_40DB88
label_23e5a8:
    if (ctx->pc == 0x23E5A8u) {
        ctx->pc = 0x23E5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5A4u;
        // 0x23e5a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5ACu;
        goto label_23e5ac;
    }
    ctx->pc = 0x23E5A4u;
    SET_GPR_U32(ctx, 31, 0x23E5ACu);
    ctx->pc = 0x23E5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E5A4u;
    // 0x23e5a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB88u, 0x23E5A4u, 0x23E5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E5ACu;
label_23e5ac:
    // 0x23e5ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_23e5b0:
    // 0x23e5b0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_23e5b4:
    if (ctx->pc == 0x23E5B4u) {
        ctx->pc = 0x23E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5B0u;
        // 0x23e5b4: 0xc7a10038  lwc1        $f1, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5B8u;
        goto label_23e5b8;
    }
    ctx->pc = 0x23E5B0u;
    {
        const bool branch_taken_0x23e5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5B0u;
        // 0x23e5b4: 0xc7a10038  lwc1        $f1, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5b0) {
            ctx->pc = 0x23E6C0u;
            goto label_23e6c0;
        }
    }
    ctx->pc = 0x23E5B8u;
label_23e5b8:
    // 0x23e5b8: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x23e5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_23e5bc:
    // 0x23e5bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x23e5bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_23e5c0:
    // 0x23e5c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23e5c4:
    // 0x23e5c4: 0x0  nop
    ctx->pc = 0x23e5c4u;
    // NOP
label_23e5c8:
    // 0x23e5c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23e5c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23e5cc:
    // 0x23e5cc: 0x0  nop
    ctx->pc = 0x23e5ccu;
    // NOP
label_23e5d0:
    // 0x23e5d0: 0x4500003b  bc1f        . + 4 + (0x3B << 2)
label_23e5d4:
    if (ctx->pc == 0x23E5D4u) {
        ctx->pc = 0x23E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5D0u;
        // 0x23e5d4: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E5D8u;
        goto label_23e5d8;
    }
    ctx->pc = 0x23E5D0u;
    {
        const bool branch_taken_0x23e5d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E5D0u;
        // 0x23e5d4: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e5d0) {
            ctx->pc = 0x23E6C0u;
            goto label_23e6c0;
        }
    }
    ctx->pc = 0x23E5D8u;
label_23e5d8:
    // 0x23e5d8: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x23e5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_23e5dc:
    // 0x23e5dc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x23e5dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23e5e0:
    // 0x23e5e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23e5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e5e4:
    // 0x23e5e4: 0xae2301d8  sw          $v1, 0x1D8($s1)
    ctx->pc = 0x23e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 472), GPR_U32(ctx, 3));
label_23e5e8:
    // 0x23e5e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e5ec:
    // 0x23e5ec: 0x7e220230  sq          $v0, 0x230($s1)
    ctx->pc = 0x23e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), GPR_VEC(ctx, 2));
label_23e5f0:
    // 0x23e5f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23e5f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e5f4:
    // 0x23e5f4: 0x8e2801a0  lw          $t0, 0x1A0($s1)
    ctx->pc = 0x23e5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_23e5f8:
    // 0x23e5f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x23e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23e5fc:
    // 0x23e5fc: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x23e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_23e600:
    // 0x23e600: 0x444818  mult        $t1, $v0, $a0
    ctx->pc = 0x23e600u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_23e604:
    // 0x23e604: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x23e604u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_23e608:
    // 0x23e608: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x23e608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_23e60c:
    // 0x23e60c: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x23e60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_23e610:
    // 0x23e610: 0x40f809  jalr        $v0
label_23e614:
    if (ctx->pc == 0x23E614u) {
        ctx->pc = 0x23E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E610u;
        // 0x23e614: 0x1338021  addu        $s0, $t1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E618u;
        goto label_23e618;
    }
    ctx->pc = 0x23E610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23E618u);
        ctx->pc = 0x23E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E610u;
        // 0x23e614: 0x1338021  addu        $s0, $t1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E610u, 0x23E618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E618u;
label_23e618:
    // 0x23e618: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x23e618u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23e61c:
    // 0x23e61c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_23e620:
    // 0x23e620: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23e620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23e624:
    // 0x23e624: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x23e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_23e628:
    // 0x23e628: 0x7e040050  sq          $a0, 0x50($s0)
    ctx->pc = 0x23e628u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 4));
label_23e62c:
    // 0x23e62c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x23e62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_23e630:
    // 0x23e630: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x23e630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23e634:
    // 0x23e634: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x23e634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_23e638:
    // 0x23e638: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x23e638u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
label_23e63c:
    // 0x23e63c: 0xae0400b4  sw          $a0, 0xB4($s0)
    ctx->pc = 0x23e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 4));
label_23e640:
    // 0x23e640: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x23e640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_23e644:
    // 0x23e644: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x23e644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_23e648:
    // 0x23e648: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23e64c:
    // 0x23e64c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x23e64cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_23e650:
    // 0x23e650: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x23e650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_23e654:
    // 0x23e654: 0x60f809  jalr        $v1
label_23e658:
    if (ctx->pc == 0x23E658u) {
        ctx->pc = 0x23E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E654u;
        // 0x23e658: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E65Cu;
        goto label_23e65c;
    }
    ctx->pc = 0x23E654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23E65Cu);
        ctx->pc = 0x23E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E654u;
        // 0x23e658: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E654u, 0x23E65Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E65Cu;
label_23e65c:
    // 0x23e65c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x23e65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23e660:
    // 0x23e660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23e660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23e664:
    // 0x23e664: 0x0  nop
    ctx->pc = 0x23e664u;
    // NOP
label_23e668:
    // 0x23e668: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_23e66c:
    if (ctx->pc == 0x23E66Cu) {
        ctx->pc = 0x23E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E668u;
        // 0x23e66c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E670u;
        goto label_23e670;
    }
    ctx->pc = 0x23E668u;
    {
        const bool branch_taken_0x23e668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23e668) {
            ctx->pc = 0x23E66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E668u;
            // 0x23e66c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E678u;
            goto label_23e678;
        }
    }
    ctx->pc = 0x23E670u;
label_23e670:
    // 0x23e670: 0x10000011  b           . + 4 + (0x11 << 2)
label_23e674:
    if (ctx->pc == 0x23E674u) {
        ctx->pc = 0x23E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E670u;
        // 0x23e674: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E678u;
        goto label_23e678;
    }
    ctx->pc = 0x23E670u;
    {
        const bool branch_taken_0x23e670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E670u;
        // 0x23e674: 0xae000080  sw          $zero, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e670) {
            ctx->pc = 0x23E6B8u;
            goto label_23e6b8;
        }
    }
    ctx->pc = 0x23E678u;
label_23e678:
    // 0x23e678: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x23e678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_23e67c:
    // 0x23e67c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x23e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_23e680:
    // 0x23e680: 0x60f809  jalr        $v1
label_23e684:
    if (ctx->pc == 0x23E684u) {
        ctx->pc = 0x23E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E680u;
        // 0x23e684: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E688u;
        goto label_23e688;
    }
    ctx->pc = 0x23E680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23E688u);
        ctx->pc = 0x23E684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E680u;
        // 0x23e684: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E680u, 0x23E688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E688u;
label_23e688:
    // 0x23e688: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23e688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23e68c:
    // 0x23e68c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x23e68cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_23e690:
    // 0x23e690: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x23e690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_23e694:
    // 0x23e694: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x23e694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_23e698:
    // 0x23e698: 0x60f809  jalr        $v1
label_23e69c:
    if (ctx->pc == 0x23E69Cu) {
        ctx->pc = 0x23E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E698u;
        // 0x23e69c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E6A0u;
        goto label_23e6a0;
    }
    ctx->pc = 0x23E698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23E6A0u);
        ctx->pc = 0x23E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E698u;
        // 0x23e69c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E698u, 0x23E6A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23E6A0u;
label_23e6a0:
    // 0x23e6a0: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x23e6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23e6a4:
    // 0x23e6a4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x23e6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23e6a8:
    // 0x23e6a8: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x23e6a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_23e6ac:
    // 0x23e6ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x23e6acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23e6b0:
    // 0x23e6b0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x23e6b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_23e6b4:
    // 0x23e6b4: 0xe6020080  swc1        $f2, 0x80($s0)
    ctx->pc = 0x23e6b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_23e6b8:
    // 0x23e6b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_23e6bc:
    if (ctx->pc == 0x23E6BCu) {
        ctx->pc = 0x23E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6B8u;
        // 0x23e6bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E6C0u;
        goto label_23e6c0;
    }
    ctx->pc = 0x23E6B8u;
    {
        const bool branch_taken_0x23e6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6B8u;
        // 0x23e6bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e6b8) {
            ctx->pc = 0x23E6C4u;
            goto label_23e6c4;
        }
    }
    ctx->pc = 0x23E6C0u;
label_23e6c0:
    // 0x23e6c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23e6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e6c4:
    // 0x23e6c4: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x23e6c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_23e6c8:
    // 0x23e6c8: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x23e6c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_23e6cc:
    // 0x23e6cc: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x23e6ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_23e6d0:
    // 0x23e6d0: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x23e6d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_23e6d4:
    // 0x23e6d4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23e6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_23e6d8:
    // 0x23e6d8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x23e6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23e6dc:
    // 0x23e6dc: 0x3e00008  jr          $ra
label_23e6e0:
    if (ctx->pc == 0x23E6E0u) {
        ctx->pc = 0x23E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6DCu;
        // 0x23e6e0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23E6E4u;
        goto label_23e6e4;
    }
    ctx->pc = 0x23E6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E6DCu;
        // 0x23e6e0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23E6E4u;
label_23e6e4:
    // 0x23e6e4: 0x0  nop
    ctx->pc = 0x23e6e4u;
    // NOP
    ctx->pc = 0x23e6e8u;
}
