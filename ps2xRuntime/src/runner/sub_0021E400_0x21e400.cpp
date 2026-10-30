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

// Function: sub_0021E400
// Address: 0x21e400 - 0x21e698
void sub_0021E400_0x21e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E400_0x21e400");
#endif

    switch (ctx->pc) {
        case 0x21e400u: goto label_21e400;
        case 0x21e404u: goto label_21e404;
        case 0x21e408u: goto label_21e408;
        case 0x21e40cu: goto label_21e40c;
        case 0x21e410u: goto label_21e410;
        case 0x21e414u: goto label_21e414;
        case 0x21e418u: goto label_21e418;
        case 0x21e41cu: goto label_21e41c;
        case 0x21e420u: goto label_21e420;
        case 0x21e424u: goto label_21e424;
        case 0x21e428u: goto label_21e428;
        case 0x21e42cu: goto label_21e42c;
        case 0x21e430u: goto label_21e430;
        case 0x21e434u: goto label_21e434;
        case 0x21e438u: goto label_21e438;
        case 0x21e43cu: goto label_21e43c;
        case 0x21e440u: goto label_21e440;
        case 0x21e444u: goto label_21e444;
        case 0x21e448u: goto label_21e448;
        case 0x21e44cu: goto label_21e44c;
        case 0x21e450u: goto label_21e450;
        case 0x21e454u: goto label_21e454;
        case 0x21e458u: goto label_21e458;
        case 0x21e45cu: goto label_21e45c;
        case 0x21e460u: goto label_21e460;
        case 0x21e464u: goto label_21e464;
        case 0x21e468u: goto label_21e468;
        case 0x21e46cu: goto label_21e46c;
        case 0x21e470u: goto label_21e470;
        case 0x21e474u: goto label_21e474;
        case 0x21e478u: goto label_21e478;
        case 0x21e47cu: goto label_21e47c;
        case 0x21e480u: goto label_21e480;
        case 0x21e484u: goto label_21e484;
        case 0x21e488u: goto label_21e488;
        case 0x21e48cu: goto label_21e48c;
        case 0x21e490u: goto label_21e490;
        case 0x21e494u: goto label_21e494;
        case 0x21e498u: goto label_21e498;
        case 0x21e49cu: goto label_21e49c;
        case 0x21e4a0u: goto label_21e4a0;
        case 0x21e4a4u: goto label_21e4a4;
        case 0x21e4a8u: goto label_21e4a8;
        case 0x21e4acu: goto label_21e4ac;
        case 0x21e4b0u: goto label_21e4b0;
        case 0x21e4b4u: goto label_21e4b4;
        case 0x21e4b8u: goto label_21e4b8;
        case 0x21e4bcu: goto label_21e4bc;
        case 0x21e4c0u: goto label_21e4c0;
        case 0x21e4c4u: goto label_21e4c4;
        case 0x21e4c8u: goto label_21e4c8;
        case 0x21e4ccu: goto label_21e4cc;
        case 0x21e4d0u: goto label_21e4d0;
        case 0x21e4d4u: goto label_21e4d4;
        case 0x21e4d8u: goto label_21e4d8;
        case 0x21e4dcu: goto label_21e4dc;
        case 0x21e4e0u: goto label_21e4e0;
        case 0x21e4e4u: goto label_21e4e4;
        case 0x21e4e8u: goto label_21e4e8;
        case 0x21e4ecu: goto label_21e4ec;
        case 0x21e4f0u: goto label_21e4f0;
        case 0x21e4f4u: goto label_21e4f4;
        case 0x21e4f8u: goto label_21e4f8;
        case 0x21e4fcu: goto label_21e4fc;
        case 0x21e500u: goto label_21e500;
        case 0x21e504u: goto label_21e504;
        case 0x21e508u: goto label_21e508;
        case 0x21e50cu: goto label_21e50c;
        case 0x21e510u: goto label_21e510;
        case 0x21e514u: goto label_21e514;
        case 0x21e518u: goto label_21e518;
        case 0x21e51cu: goto label_21e51c;
        case 0x21e520u: goto label_21e520;
        case 0x21e524u: goto label_21e524;
        case 0x21e528u: goto label_21e528;
        case 0x21e52cu: goto label_21e52c;
        case 0x21e530u: goto label_21e530;
        case 0x21e534u: goto label_21e534;
        case 0x21e538u: goto label_21e538;
        case 0x21e53cu: goto label_21e53c;
        case 0x21e540u: goto label_21e540;
        case 0x21e544u: goto label_21e544;
        case 0x21e548u: goto label_21e548;
        case 0x21e54cu: goto label_21e54c;
        case 0x21e550u: goto label_21e550;
        case 0x21e554u: goto label_21e554;
        case 0x21e558u: goto label_21e558;
        case 0x21e55cu: goto label_21e55c;
        case 0x21e560u: goto label_21e560;
        case 0x21e564u: goto label_21e564;
        case 0x21e568u: goto label_21e568;
        case 0x21e56cu: goto label_21e56c;
        case 0x21e570u: goto label_21e570;
        case 0x21e574u: goto label_21e574;
        case 0x21e578u: goto label_21e578;
        case 0x21e57cu: goto label_21e57c;
        case 0x21e580u: goto label_21e580;
        case 0x21e584u: goto label_21e584;
        case 0x21e588u: goto label_21e588;
        case 0x21e58cu: goto label_21e58c;
        case 0x21e590u: goto label_21e590;
        case 0x21e594u: goto label_21e594;
        case 0x21e598u: goto label_21e598;
        case 0x21e59cu: goto label_21e59c;
        case 0x21e5a0u: goto label_21e5a0;
        case 0x21e5a4u: goto label_21e5a4;
        case 0x21e5a8u: goto label_21e5a8;
        case 0x21e5acu: goto label_21e5ac;
        case 0x21e5b0u: goto label_21e5b0;
        case 0x21e5b4u: goto label_21e5b4;
        case 0x21e5b8u: goto label_21e5b8;
        case 0x21e5bcu: goto label_21e5bc;
        case 0x21e5c0u: goto label_21e5c0;
        case 0x21e5c4u: goto label_21e5c4;
        case 0x21e5c8u: goto label_21e5c8;
        case 0x21e5ccu: goto label_21e5cc;
        case 0x21e5d0u: goto label_21e5d0;
        case 0x21e5d4u: goto label_21e5d4;
        case 0x21e5d8u: goto label_21e5d8;
        case 0x21e5dcu: goto label_21e5dc;
        case 0x21e5e0u: goto label_21e5e0;
        case 0x21e5e4u: goto label_21e5e4;
        case 0x21e5e8u: goto label_21e5e8;
        case 0x21e5ecu: goto label_21e5ec;
        case 0x21e5f0u: goto label_21e5f0;
        case 0x21e5f4u: goto label_21e5f4;
        case 0x21e5f8u: goto label_21e5f8;
        case 0x21e5fcu: goto label_21e5fc;
        case 0x21e600u: goto label_21e600;
        case 0x21e604u: goto label_21e604;
        case 0x21e608u: goto label_21e608;
        case 0x21e60cu: goto label_21e60c;
        case 0x21e610u: goto label_21e610;
        case 0x21e614u: goto label_21e614;
        case 0x21e618u: goto label_21e618;
        case 0x21e61cu: goto label_21e61c;
        case 0x21e620u: goto label_21e620;
        case 0x21e624u: goto label_21e624;
        case 0x21e628u: goto label_21e628;
        case 0x21e62cu: goto label_21e62c;
        case 0x21e630u: goto label_21e630;
        case 0x21e634u: goto label_21e634;
        case 0x21e638u: goto label_21e638;
        case 0x21e63cu: goto label_21e63c;
        case 0x21e640u: goto label_21e640;
        case 0x21e644u: goto label_21e644;
        case 0x21e648u: goto label_21e648;
        case 0x21e64cu: goto label_21e64c;
        case 0x21e650u: goto label_21e650;
        case 0x21e654u: goto label_21e654;
        case 0x21e658u: goto label_21e658;
        case 0x21e65cu: goto label_21e65c;
        case 0x21e660u: goto label_21e660;
        case 0x21e664u: goto label_21e664;
        case 0x21e668u: goto label_21e668;
        case 0x21e66cu: goto label_21e66c;
        case 0x21e670u: goto label_21e670;
        case 0x21e674u: goto label_21e674;
        case 0x21e678u: goto label_21e678;
        case 0x21e67cu: goto label_21e67c;
        case 0x21e680u: goto label_21e680;
        case 0x21e684u: goto label_21e684;
        case 0x21e688u: goto label_21e688;
        case 0x21e68cu: goto label_21e68c;
        case 0x21e690u: goto label_21e690;
        case 0x21e694u: goto label_21e694;
        default: break;
    }

    ctx->pc = 0x21e400u;

label_21e400:
    // 0x21e400: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x21e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_21e404:
    // 0x21e404: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x21e404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_21e408:
    // 0x21e408: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x21e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_21e40c:
    // 0x21e40c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21e40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e410:
    // 0x21e410: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x21e410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_21e414:
    // 0x21e414: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x21e414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21e418:
    // 0x21e418: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x21e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_21e41c:
    // 0x21e41c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21e41cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21e420:
    // 0x21e420: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x21e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_21e424:
    // 0x21e424: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x21e424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_21e428:
    // 0x21e428: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x21e428u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_21e42c:
    // 0x21e42c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21e42cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21e430:
    // 0x21e430: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x21e430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_21e434:
    // 0x21e434: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x21e434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_21e438:
    // 0x21e438: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21e438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_21e43c:
    // 0x21e43c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x21e43cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_21e440:
    // 0x21e440: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x21e440u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_21e444:
    // 0x21e444: 0x92220198  lbu         $v0, 0x198($s1)
    ctx->pc = 0x21e444u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 408)));
label_21e448:
    // 0x21e448: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_21e44c:
    if (ctx->pc == 0x21E44Cu) {
        ctx->pc = 0x21E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E448u;
        // 0x21e44c: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E450u;
        goto label_21e450;
    }
    ctx->pc = 0x21E448u;
    {
        const bool branch_taken_0x21e448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E448u;
        // 0x21e44c: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e448) {
            ctx->pc = 0x21E5C4u;
            goto label_21e5c4;
        }
    }
    ctx->pc = 0x21E450u;
label_21e450:
    // 0x21e450: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21e450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21e454:
    // 0x21e454: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x21e454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_21e458:
    // 0x21e458: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x21e458u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_21e45c:
    // 0x21e45c: 0x14800059  bnez        $a0, . + 4 + (0x59 << 2)
label_21e460:
    if (ctx->pc == 0x21E460u) {
        ctx->pc = 0x21E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E45Cu;
        // 0x21e460: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E464u;
        goto label_21e464;
    }
    ctx->pc = 0x21E45Cu;
    {
        const bool branch_taken_0x21e45c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E45Cu;
        // 0x21e460: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e45c) {
            ctx->pc = 0x21E5C4u;
            goto label_21e5c4;
        }
    }
    ctx->pc = 0x21E464u;
label_21e464:
    // 0x21e464: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x21e464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
label_21e468:
    // 0x21e468: 0xc043d5e  jal         func_10F578
label_21e46c:
    if (ctx->pc == 0x21E46Cu) {
        ctx->pc = 0x21E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E468u;
        // 0x21e46c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E470u;
        goto label_21e470;
    }
    ctx->pc = 0x21E468u;
    SET_GPR_U32(ctx, 31, 0x21E470u);
    ctx->pc = 0x21E46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E468u;
    // 0x21e46c: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21E468u, 0x21E470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E470u;
label_21e470:
    // 0x21e470: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_21e474:
    if (ctx->pc == 0x21E474u) {
        ctx->pc = 0x21E478u;
        goto label_21e478;
    }
    ctx->pc = 0x21E470u;
    {
        const bool branch_taken_0x21e470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e470) {
            ctx->pc = 0x21E5C4u;
            goto label_21e5c4;
        }
    }
    ctx->pc = 0x21E478u;
label_21e478:
    // 0x21e478: 0x92220194  lbu         $v0, 0x194($s1)
    ctx->pc = 0x21e478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 404)));
label_21e47c:
    // 0x21e47c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_21e480:
    if (ctx->pc == 0x21E480u) {
        ctx->pc = 0x21E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E47Cu;
        // 0x21e480: 0x2b02b  sltu        $s6, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E484u;
        goto label_21e484;
    }
    ctx->pc = 0x21E47Cu;
    {
        const bool branch_taken_0x21e47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E47Cu;
        // 0x21e480: 0x2b02b  sltu        $s6, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e47c) {
            ctx->pc = 0x21E5C4u;
            goto label_21e5c4;
        }
    }
    ctx->pc = 0x21E484u;
label_21e484:
    // 0x21e484: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21e484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e488:
    // 0x21e488: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21e48c:
    // 0x21e48c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21e48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_21e490:
    // 0x21e490: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x21e490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_21e494:
    // 0x21e494: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x21e494u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_21e498:
    // 0x21e498: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x21e498u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_21e49c:
    // 0x21e49c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x21e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_21e4a0:
    // 0x21e4a0: 0x40f809  jalr        $v0
label_21e4a4:
    if (ctx->pc == 0x21E4A4u) {
        ctx->pc = 0x21E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4A0u;
        // 0x21e4a4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E4A8u;
        goto label_21e4a8;
    }
    ctx->pc = 0x21E4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E4A8u);
        ctx->pc = 0x21E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E4A0u;
        // 0x21e4a4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E4A0u, 0x21E4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E4A8u;
label_21e4a8:
    // 0x21e4a8: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x21e4a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_21e4ac:
    // 0x21e4ac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x21e4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21e4b0:
    // 0x21e4b0: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x21e4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_21e4b4:
    // 0x21e4b4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x21e4b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_21e4b8:
    // 0x21e4b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21e4b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21e4bc:
    // 0x21e4bc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x21e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_21e4c0:
    // 0x21e4c0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x21e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_21e4c4:
    // 0x21e4c4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_21e4c8:
    // 0x21e4c8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x21e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_21e4cc:
    // 0x21e4cc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x21e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_21e4d0:
    // 0x21e4d0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x21e4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_21e4d4:
    // 0x21e4d4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x21e4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21e4d8:
    // 0x21e4d8: 0xe475000c  swc1        $f21, 0xC($v1)
    ctx->pc = 0x21e4d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_21e4dc:
    // 0x21e4dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21e4e0:
    // 0x21e4e0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x21e4e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_21e4e4:
    // 0x21e4e4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x21e4e4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21e4e8:
    // 0x21e4e8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21e4e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21e4ec:
    // 0x21e4ec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21e4ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_21e4f0:
    // 0x21e4f0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x21e4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_21e4f4:
    // 0x21e4f4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x21e4f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_21e4f8:
    // 0x21e4f8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x21e4f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_21e4fc:
    // 0x21e4fc: 0xae320174  sw          $s2, 0x174($s1)
    ctx->pc = 0x21e4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 18));
label_21e500:
    // 0x21e500: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x21e500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_21e504:
    // 0x21e504: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x21e504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_21e508:
    // 0x21e508: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x21e508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_21e50c:
    // 0x21e50c: 0xc0878ea  jal         func_21E3A8
label_21e510:
    if (ctx->pc == 0x21E510u) {
        ctx->pc = 0x21E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E50Cu;
        // 0x21e510: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E514u;
        goto label_21e514;
    }
    ctx->pc = 0x21E50Cu;
    SET_GPR_U32(ctx, 31, 0x21E514u);
    ctx->pc = 0x21E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E50Cu;
    // 0x21e510: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E3A8u, 0x21E50Cu, 0x21E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E514u;
label_21e514:
    // 0x21e514: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x21e514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_21e518:
    // 0x21e518: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x21e518u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_21e51c:
    // 0x21e51c: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x21e51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_21e520:
    // 0x21e520: 0xc044594  jal         func_111650
label_21e524:
    if (ctx->pc == 0x21E524u) {
        ctx->pc = 0x21E524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E520u;
        // 0x21e524: 0xe7b50064  swc1        $f21, 0x64($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E528u;
        goto label_21e528;
    }
    ctx->pc = 0x21E520u;
    SET_GPR_U32(ctx, 31, 0x21E528u);
    ctx->pc = 0x21E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E520u;
    // 0x21e524: 0xe7b50064  swc1        $f21, 0x64($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111650u, 0x21E520u, 0x21E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E528u;
label_21e528:
    // 0x21e528: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x21e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e52c:
    // 0x21e52c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x21e52cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_21e530:
    // 0x21e530: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x21e530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_21e534:
    // 0x21e534: 0x40f809  jalr        $v0
label_21e538:
    if (ctx->pc == 0x21E538u) {
        ctx->pc = 0x21E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E534u;
        // 0x21e538: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E53Cu;
        goto label_21e53c;
    }
    ctx->pc = 0x21E534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E53Cu);
        ctx->pc = 0x21E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E534u;
        // 0x21e538: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E534u, 0x21E53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E53Cu;
label_21e53c:
    // 0x21e53c: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x21e53cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_21e540:
    // 0x21e540: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x21e540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21e544:
    // 0x21e544: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x21e544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_21e548:
    // 0x21e548: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21e548u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e54c:
    // 0x21e54c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x21e54cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_21e550:
    // 0x21e550: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x21e550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21e554:
    // 0x21e554: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x21e554u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_21e558:
    // 0x21e558: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21e558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e55c:
    // 0x21e55c: 0xc044062  jal         func_110188
label_21e560:
    if (ctx->pc == 0x21E560u) {
        ctx->pc = 0x21E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E55Cu;
        // 0x21e560: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E564u;
        goto label_21e564;
    }
    ctx->pc = 0x21E55Cu;
    SET_GPR_U32(ctx, 31, 0x21E564u);
    ctx->pc = 0x21E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E55Cu;
    // 0x21e560: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110188u, 0x21E55Cu, 0x21E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E564u;
label_21e564:
    // 0x21e564: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21e564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e568:
    // 0x21e568: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x21e568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_21e56c:
    // 0x21e56c: 0xae330188  sw          $s3, 0x188($s1)
    ctx->pc = 0x21e56cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 19));
label_21e570:
    // 0x21e570: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21e570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e574:
    // 0x21e574: 0xae340190  sw          $s4, 0x190($s1)
    ctx->pc = 0x21e574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 20));
label_21e578:
    // 0x21e578: 0xc044596  jal         func_111658
label_21e57c:
    if (ctx->pc == 0x21E57Cu) {
        ctx->pc = 0x21E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E578u;
        // 0x21e57c: 0xae320178  sw          $s2, 0x178($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E580u;
        goto label_21e580;
    }
    ctx->pc = 0x21E578u;
    SET_GPR_U32(ctx, 31, 0x21E580u);
    ctx->pc = 0x21E57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E578u;
    // 0x21e57c: 0xae320178  sw          $s2, 0x178($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 376), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111658u, 0x21E578u, 0x21E580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E580u;
label_21e580:
    // 0x21e580: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21e580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21e584:
    // 0x21e584: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_21e588:
    if (ctx->pc == 0x21E588u) {
        ctx->pc = 0x21E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E584u;
        // 0x21e588: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E58Cu;
        goto label_21e58c;
    }
    ctx->pc = 0x21E584u;
    {
        const bool branch_taken_0x21e584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e584) {
            ctx->pc = 0x21E588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E584u;
            // 0x21e588: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E5BCu;
            goto label_21e5bc;
        }
    }
    ctx->pc = 0x21E58Cu;
label_21e58c:
    // 0x21e58c: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x21e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_21e590:
    // 0x21e590: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_21e594:
    if (ctx->pc == 0x21E594u) {
        ctx->pc = 0x21E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E590u;
        // 0x21e594: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E598u;
        goto label_21e598;
    }
    ctx->pc = 0x21E590u;
    {
        const bool branch_taken_0x21e590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e590) {
            ctx->pc = 0x21E594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E590u;
            // 0x21e594: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E5BCu;
            goto label_21e5bc;
        }
    }
    ctx->pc = 0x21E598u;
label_21e598:
    // 0x21e598: 0xc043cbc  jal         func_10F2F0
label_21e59c:
    if (ctx->pc == 0x21E59Cu) {
        ctx->pc = 0x21E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E598u;
        // 0x21e59c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5A0u;
        goto label_21e5a0;
    }
    ctx->pc = 0x21E598u;
    SET_GPR_U32(ctx, 31, 0x21E5A0u);
    ctx->pc = 0x21E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E598u;
    // 0x21e59c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F2F0u, 0x21E598u, 0x21E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E5A0u;
label_21e5a0:
    // 0x21e5a0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_21e5a4:
    if (ctx->pc == 0x21E5A4u) {
        ctx->pc = 0x21E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5A0u;
        // 0x21e5a4: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5A8u;
        goto label_21e5a8;
    }
    ctx->pc = 0x21E5A0u;
    {
        const bool branch_taken_0x21e5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e5a0) {
            ctx->pc = 0x21E5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E5A0u;
            // 0x21e5a4: 0xae200170  sw          $zero, 0x170($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E5BCu;
            goto label_21e5bc;
        }
    }
    ctx->pc = 0x21E5A8u;
label_21e5a8:
    // 0x21e5a8: 0xae360170  sw          $s6, 0x170($s1)
    ctx->pc = 0x21e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 22));
label_21e5ac:
    // 0x21e5ac: 0xc088d3e  jal         func_2234F8
label_21e5b0:
    if (ctx->pc == 0x21E5B0u) {
        ctx->pc = 0x21E5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5ACu;
        // 0x21e5b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5B4u;
        goto label_21e5b4;
    }
    ctx->pc = 0x21E5ACu;
    SET_GPR_U32(ctx, 31, 0x21E5B4u);
    ctx->pc = 0x21E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E5ACu;
    // 0x21e5b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2234F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2234F8u, 0x21E5ACu, 0x21E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E5B4u;
label_21e5b4:
    // 0x21e5b4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_21e5b8:
    if (ctx->pc == 0x21E5B8u) {
        ctx->pc = 0x21E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5B4u;
        // 0x21e5b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5BCu;
        goto label_21e5bc;
    }
    ctx->pc = 0x21E5B4u;
    {
        const bool branch_taken_0x21e5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5B4u;
        // 0x21e5b8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5b4) {
            ctx->pc = 0x21E660u;
            goto label_21e660;
        }
    }
    ctx->pc = 0x21E5BCu;
label_21e5bc:
    // 0x21e5bc: 0x10000028  b           . + 4 + (0x28 << 2)
label_21e5c0:
    if (ctx->pc == 0x21E5C0u) {
        ctx->pc = 0x21E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5BCu;
        // 0x21e5c0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5C4u;
        goto label_21e5c4;
    }
    ctx->pc = 0x21E5BCu;
    {
        const bool branch_taken_0x21e5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5BCu;
        // 0x21e5c0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5bc) {
            ctx->pc = 0x21E660u;
            goto label_21e660;
        }
    }
    ctx->pc = 0x21E5C4u;
label_21e5c4:
    // 0x21e5c4: 0x12600024  beqz        $s3, . + 4 + (0x24 << 2)
label_21e5c8:
    if (ctx->pc == 0x21E5C8u) {
        ctx->pc = 0x21E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5C4u;
        // 0x21e5c8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5CCu;
        goto label_21e5cc;
    }
    ctx->pc = 0x21E5C4u;
    {
        const bool branch_taken_0x21e5c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5C4u;
        // 0x21e5c8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5c4) {
            ctx->pc = 0x21E658u;
            goto label_21e658;
        }
    }
    ctx->pc = 0x21E5CCu;
label_21e5cc:
    // 0x21e5cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21e5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21e5d0:
    // 0x21e5d0: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x21e5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_21e5d4:
    // 0x21e5d4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x21e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21e5d8:
    // 0x21e5d8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x21e5d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_21e5dc:
    // 0x21e5dc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x21e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_21e5e0:
    // 0x21e5e0: 0x40f809  jalr        $v0
label_21e5e4:
    if (ctx->pc == 0x21E5E4u) {
        ctx->pc = 0x21E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5E0u;
        // 0x21e5e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5E8u;
        goto label_21e5e8;
    }
    ctx->pc = 0x21E5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E5E8u);
        ctx->pc = 0x21E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5E0u;
        // 0x21e5e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E5E0u, 0x21E5E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E5E8u;
label_21e5e8:
    // 0x21e5e8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_21e5ec:
    if (ctx->pc == 0x21E5ECu) {
        ctx->pc = 0x21E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5E8u;
        // 0x21e5ec: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5F0u;
        goto label_21e5f0;
    }
    ctx->pc = 0x21E5E8u;
    {
        const bool branch_taken_0x21e5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5E8u;
        // 0x21e5ec: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5e8) {
            ctx->pc = 0x21E65Cu;
            goto label_21e65c;
        }
    }
    ctx->pc = 0x21E5F0u;
label_21e5f0:
    // 0x21e5f0: 0x12800011  beqz        $s4, . + 4 + (0x11 << 2)
label_21e5f4:
    if (ctx->pc == 0x21E5F4u) {
        ctx->pc = 0x21E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5F0u;
        // 0x21e5f4: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E5F8u;
        goto label_21e5f8;
    }
    ctx->pc = 0x21E5F0u;
    {
        const bool branch_taken_0x21e5f0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E5F0u;
        // 0x21e5f4: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e5f0) {
            ctx->pc = 0x21E638u;
            goto label_21e638;
        }
    }
    ctx->pc = 0x21E5F8u;
label_21e5f8:
    // 0x21e5f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21e5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21e5fc:
    // 0x21e5fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21e600:
    // 0x21e600: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x21e600u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_21e604:
    // 0x21e604: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x21e604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_21e608:
    // 0x21e608: 0x60f809  jalr        $v1
label_21e60c:
    if (ctx->pc == 0x21E60Cu) {
        ctx->pc = 0x21E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E608u;
        // 0x21e60c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E610u;
        goto label_21e610;
    }
    ctx->pc = 0x21E608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21E610u);
        ctx->pc = 0x21E60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E608u;
        // 0x21e60c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E608u, 0x21E610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E610u;
label_21e610:
    // 0x21e610: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x21e610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_21e614:
    // 0x21e614: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21e614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e618:
    // 0x21e618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21e618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e61c:
    // 0x21e61c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21e620:
    // 0x21e620: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x21e620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_21e624:
    // 0x21e624: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x21e624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_21e628:
    // 0x21e628: 0x60f809  jalr        $v1
label_21e62c:
    if (ctx->pc == 0x21E62Cu) {
        ctx->pc = 0x21E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E628u;
        // 0x21e62c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E630u;
        goto label_21e630;
    }
    ctx->pc = 0x21E628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21E630u);
        ctx->pc = 0x21E62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E628u;
        // 0x21e62c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E628u, 0x21E630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E630u;
label_21e630:
    // 0x21e630: 0x1000000a  b           . + 4 + (0xA << 2)
label_21e634:
    if (ctx->pc == 0x21E634u) {
        ctx->pc = 0x21E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E630u;
        // 0x21e634: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E638u;
        goto label_21e638;
    }
    ctx->pc = 0x21E630u;
    {
        const bool branch_taken_0x21e630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E630u;
        // 0x21e634: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e630) {
            ctx->pc = 0x21E65Cu;
            goto label_21e65c;
        }
    }
    ctx->pc = 0x21E638u;
label_21e638:
    // 0x21e638: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x21e638u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_21e63c:
    // 0x21e63c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21e63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e640:
    // 0x21e640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21e640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e644:
    // 0x21e644: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x21e644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21e648:
    // 0x21e648: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x21e648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_21e64c:
    // 0x21e64c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x21e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_21e650:
    // 0x21e650: 0x60f809  jalr        $v1
label_21e654:
    if (ctx->pc == 0x21E654u) {
        ctx->pc = 0x21E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E650u;
        // 0x21e654: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E658u;
        goto label_21e658;
    }
    ctx->pc = 0x21E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21E658u);
        ctx->pc = 0x21E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E650u;
        // 0x21e654: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E650u, 0x21E658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E658u;
label_21e658:
    // 0x21e658: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x21e658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_21e65c:
    // 0x21e65c: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x21e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_21e660:
    // 0x21e660: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x21e660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_21e664:
    // 0x21e664: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x21e664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_21e668:
    // 0x21e668: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x21e668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21e66c:
    // 0x21e66c: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x21e66cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21e670:
    // 0x21e670: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x21e670u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21e674:
    // 0x21e674: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x21e674u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21e678:
    // 0x21e678: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x21e678u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21e67c:
    // 0x21e67c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21e67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_21e680:
    // 0x21e680: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x21e680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_21e684:
    // 0x21e684: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x21e684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_21e688:
    // 0x21e688: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x21e688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_21e68c:
    // 0x21e68c: 0x3e00008  jr          $ra
label_21e690:
    if (ctx->pc == 0x21E690u) {
        ctx->pc = 0x21E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E68Cu;
        // 0x21e690: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E694u;
        goto label_21e694;
    }
    ctx->pc = 0x21E68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E68Cu;
        // 0x21e690: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E694u;
label_21e694:
    // 0x21e694: 0x0  nop
    ctx->pc = 0x21e694u;
    // NOP
    ctx->pc = 0x21e698u;
}
