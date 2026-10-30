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

// Function: sub_0022D3F8
// Address: 0x22d3f8 - 0x22d628
void sub_0022D3F8_0x22d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D3F8_0x22d3f8");
#endif

    switch (ctx->pc) {
        case 0x22d3f8u: goto label_22d3f8;
        case 0x22d3fcu: goto label_22d3fc;
        case 0x22d400u: goto label_22d400;
        case 0x22d404u: goto label_22d404;
        case 0x22d408u: goto label_22d408;
        case 0x22d40cu: goto label_22d40c;
        case 0x22d410u: goto label_22d410;
        case 0x22d414u: goto label_22d414;
        case 0x22d418u: goto label_22d418;
        case 0x22d41cu: goto label_22d41c;
        case 0x22d420u: goto label_22d420;
        case 0x22d424u: goto label_22d424;
        case 0x22d428u: goto label_22d428;
        case 0x22d42cu: goto label_22d42c;
        case 0x22d430u: goto label_22d430;
        case 0x22d434u: goto label_22d434;
        case 0x22d438u: goto label_22d438;
        case 0x22d43cu: goto label_22d43c;
        case 0x22d440u: goto label_22d440;
        case 0x22d444u: goto label_22d444;
        case 0x22d448u: goto label_22d448;
        case 0x22d44cu: goto label_22d44c;
        case 0x22d450u: goto label_22d450;
        case 0x22d454u: goto label_22d454;
        case 0x22d458u: goto label_22d458;
        case 0x22d45cu: goto label_22d45c;
        case 0x22d460u: goto label_22d460;
        case 0x22d464u: goto label_22d464;
        case 0x22d468u: goto label_22d468;
        case 0x22d46cu: goto label_22d46c;
        case 0x22d470u: goto label_22d470;
        case 0x22d474u: goto label_22d474;
        case 0x22d478u: goto label_22d478;
        case 0x22d47cu: goto label_22d47c;
        case 0x22d480u: goto label_22d480;
        case 0x22d484u: goto label_22d484;
        case 0x22d488u: goto label_22d488;
        case 0x22d48cu: goto label_22d48c;
        case 0x22d490u: goto label_22d490;
        case 0x22d494u: goto label_22d494;
        case 0x22d498u: goto label_22d498;
        case 0x22d49cu: goto label_22d49c;
        case 0x22d4a0u: goto label_22d4a0;
        case 0x22d4a4u: goto label_22d4a4;
        case 0x22d4a8u: goto label_22d4a8;
        case 0x22d4acu: goto label_22d4ac;
        case 0x22d4b0u: goto label_22d4b0;
        case 0x22d4b4u: goto label_22d4b4;
        case 0x22d4b8u: goto label_22d4b8;
        case 0x22d4bcu: goto label_22d4bc;
        case 0x22d4c0u: goto label_22d4c0;
        case 0x22d4c4u: goto label_22d4c4;
        case 0x22d4c8u: goto label_22d4c8;
        case 0x22d4ccu: goto label_22d4cc;
        case 0x22d4d0u: goto label_22d4d0;
        case 0x22d4d4u: goto label_22d4d4;
        case 0x22d4d8u: goto label_22d4d8;
        case 0x22d4dcu: goto label_22d4dc;
        case 0x22d4e0u: goto label_22d4e0;
        case 0x22d4e4u: goto label_22d4e4;
        case 0x22d4e8u: goto label_22d4e8;
        case 0x22d4ecu: goto label_22d4ec;
        case 0x22d4f0u: goto label_22d4f0;
        case 0x22d4f4u: goto label_22d4f4;
        case 0x22d4f8u: goto label_22d4f8;
        case 0x22d4fcu: goto label_22d4fc;
        case 0x22d500u: goto label_22d500;
        case 0x22d504u: goto label_22d504;
        case 0x22d508u: goto label_22d508;
        case 0x22d50cu: goto label_22d50c;
        case 0x22d510u: goto label_22d510;
        case 0x22d514u: goto label_22d514;
        case 0x22d518u: goto label_22d518;
        case 0x22d51cu: goto label_22d51c;
        case 0x22d520u: goto label_22d520;
        case 0x22d524u: goto label_22d524;
        case 0x22d528u: goto label_22d528;
        case 0x22d52cu: goto label_22d52c;
        case 0x22d530u: goto label_22d530;
        case 0x22d534u: goto label_22d534;
        case 0x22d538u: goto label_22d538;
        case 0x22d53cu: goto label_22d53c;
        case 0x22d540u: goto label_22d540;
        case 0x22d544u: goto label_22d544;
        case 0x22d548u: goto label_22d548;
        case 0x22d54cu: goto label_22d54c;
        case 0x22d550u: goto label_22d550;
        case 0x22d554u: goto label_22d554;
        case 0x22d558u: goto label_22d558;
        case 0x22d55cu: goto label_22d55c;
        case 0x22d560u: goto label_22d560;
        case 0x22d564u: goto label_22d564;
        case 0x22d568u: goto label_22d568;
        case 0x22d56cu: goto label_22d56c;
        case 0x22d570u: goto label_22d570;
        case 0x22d574u: goto label_22d574;
        case 0x22d578u: goto label_22d578;
        case 0x22d57cu: goto label_22d57c;
        case 0x22d580u: goto label_22d580;
        case 0x22d584u: goto label_22d584;
        case 0x22d588u: goto label_22d588;
        case 0x22d58cu: goto label_22d58c;
        case 0x22d590u: goto label_22d590;
        case 0x22d594u: goto label_22d594;
        case 0x22d598u: goto label_22d598;
        case 0x22d59cu: goto label_22d59c;
        case 0x22d5a0u: goto label_22d5a0;
        case 0x22d5a4u: goto label_22d5a4;
        case 0x22d5a8u: goto label_22d5a8;
        case 0x22d5acu: goto label_22d5ac;
        case 0x22d5b0u: goto label_22d5b0;
        case 0x22d5b4u: goto label_22d5b4;
        case 0x22d5b8u: goto label_22d5b8;
        case 0x22d5bcu: goto label_22d5bc;
        case 0x22d5c0u: goto label_22d5c0;
        case 0x22d5c4u: goto label_22d5c4;
        case 0x22d5c8u: goto label_22d5c8;
        case 0x22d5ccu: goto label_22d5cc;
        case 0x22d5d0u: goto label_22d5d0;
        case 0x22d5d4u: goto label_22d5d4;
        case 0x22d5d8u: goto label_22d5d8;
        case 0x22d5dcu: goto label_22d5dc;
        case 0x22d5e0u: goto label_22d5e0;
        case 0x22d5e4u: goto label_22d5e4;
        case 0x22d5e8u: goto label_22d5e8;
        case 0x22d5ecu: goto label_22d5ec;
        case 0x22d5f0u: goto label_22d5f0;
        case 0x22d5f4u: goto label_22d5f4;
        case 0x22d5f8u: goto label_22d5f8;
        case 0x22d5fcu: goto label_22d5fc;
        case 0x22d600u: goto label_22d600;
        case 0x22d604u: goto label_22d604;
        case 0x22d608u: goto label_22d608;
        case 0x22d60cu: goto label_22d60c;
        case 0x22d610u: goto label_22d610;
        case 0x22d614u: goto label_22d614;
        case 0x22d618u: goto label_22d618;
        case 0x22d61cu: goto label_22d61c;
        case 0x22d620u: goto label_22d620;
        case 0x22d624u: goto label_22d624;
        default: break;
    }

    ctx->pc = 0x22d3f8u;

label_22d3f8:
    // 0x22d3f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22d3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22d3fc:
    // 0x22d3fc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x22d3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_22d400:
    // 0x22d400: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x22d400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_22d404:
    // 0x22d404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d408:
    // 0x22d408: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x22d408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_22d40c:
    // 0x22d40c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22d40cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22d410:
    // 0x22d410: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22d410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22d414:
    // 0x22d414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22d418:
    // 0x22d418: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x22d418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_22d41c:
    // 0x22d41c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22d41cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_22d420:
    // 0x22d420: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22d420u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22d424:
    // 0x22d424: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
label_22d428:
    if (ctx->pc == 0x22D428u) {
        ctx->pc = 0x22D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D424u;
        // 0x22d428: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D42Cu;
        goto label_22d42c;
    }
    ctx->pc = 0x22D424u;
    {
        const bool branch_taken_0x22d424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D424u;
        // 0x22d428: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d424) {
            ctx->pc = 0x22D608u;
            goto label_22d608;
        }
    }
    ctx->pc = 0x22D42Cu;
label_22d42c:
    // 0x22d42c: 0xc08cade  jal         func_232B78
label_22d430:
    if (ctx->pc == 0x22D430u) {
        ctx->pc = 0x22D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D42Cu;
        // 0x22d430: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D434u;
        goto label_22d434;
    }
    ctx->pc = 0x22D42Cu;
    SET_GPR_U32(ctx, 31, 0x22D434u);
    ctx->pc = 0x22D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D42Cu;
    // 0x22d430: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B78u, 0x22D42Cu, 0x22D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D434u;
label_22d434:
    // 0x22d434: 0xc0a007a  jal         func_2801E8
label_22d438:
    if (ctx->pc == 0x22D438u) {
        ctx->pc = 0x22D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D434u;
        // 0x22d438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D43Cu;
        goto label_22d43c;
    }
    ctx->pc = 0x22D434u;
    SET_GPR_U32(ctx, 31, 0x22D43Cu);
    ctx->pc = 0x22D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D434u;
    // 0x22d438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2801E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2801E8u, 0x22D434u, 0x22D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D43Cu;
label_22d43c:
    // 0x22d43c: 0xc088ac6  jal         func_222B18
label_22d440:
    if (ctx->pc == 0x22D440u) {
        ctx->pc = 0x22D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D43Cu;
        // 0x22d440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D444u;
        goto label_22d444;
    }
    ctx->pc = 0x22D43Cu;
    SET_GPR_U32(ctx, 31, 0x22D444u);
    ctx->pc = 0x22D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D43Cu;
    // 0x22d440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22D43Cu, 0x22D444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D444u;
label_22d444:
    // 0x22d444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d448:
    // 0x22d448: 0xc088ac6  jal         func_222B18
label_22d44c:
    if (ctx->pc == 0x22D44Cu) {
        ctx->pc = 0x22D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D448u;
        // 0x22d44c: 0xa4520046  sh          $s2, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D450u;
        goto label_22d450;
    }
    ctx->pc = 0x22D448u;
    SET_GPR_U32(ctx, 31, 0x22D450u);
    ctx->pc = 0x22D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D448u;
    // 0x22d44c: 0xa4520046  sh          $s2, 0x46($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22D448u, 0x22D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D450u;
label_22d450:
    // 0x22d450: 0xa4400040  sh          $zero, 0x40($v0)
    ctx->pc = 0x22d450u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 0));
label_22d454:
    // 0x22d454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d458:
    // 0x22d458: 0xc089a44  jal         func_226910
label_22d45c:
    if (ctx->pc == 0x22D45Cu) {
        ctx->pc = 0x22D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D458u;
        // 0x22d45c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D460u;
        goto label_22d460;
    }
    ctx->pc = 0x22D458u;
    SET_GPR_U32(ctx, 31, 0x22D460u);
    ctx->pc = 0x22D45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D458u;
    // 0x22d45c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226910u, 0x22D458u, 0x22D460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D460u;
label_22d460:
    // 0x22d460: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x22d460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_22d464:
    // 0x22d464: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x22d464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
label_22d468:
    // 0x22d468: 0x8c857198  lw          $a1, 0x7198($a0)
    ctx->pc = 0x22d468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29080)));
label_22d46c:
    // 0x22d46c: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x22d46cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_22d470:
    // 0x22d470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22d470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22d474:
    // 0x22d474: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22d474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22d478:
    // 0x22d478: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x22d478u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_22d47c:
    // 0x22d47c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_22d480:
    if (ctx->pc == 0x22D480u) {
        ctx->pc = 0x22D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D47Cu;
        // 0x22d480: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D484u;
        goto label_22d484;
    }
    ctx->pc = 0x22D47Cu;
    {
        const bool branch_taken_0x22d47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D47Cu;
        // 0x22d480: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d47c) {
            ctx->pc = 0x22D488u;
            goto label_22d488;
        }
    }
    ctx->pc = 0x22D484u;
label_22d484:
    // 0x22d484: 0xa4b20010  sh          $s2, 0x10($a1)
    ctx->pc = 0x22d484u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 18));
label_22d488:
    // 0x22d488: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22d488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d48c:
    // 0x22d48c: 0x94b20010  lhu         $s2, 0x10($a1)
    ctx->pc = 0x22d48cu;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_22d490:
    // 0x22d490: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22d490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22d494:
    // 0x22d494: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22d498:
    // 0x22d498: 0x40f809  jalr        $v0
label_22d49c:
    if (ctx->pc == 0x22D49Cu) {
        ctx->pc = 0x22D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D498u;
        // 0x22d49c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4A0u;
        goto label_22d4a0;
    }
    ctx->pc = 0x22D498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D4A0u);
        ctx->pc = 0x22D49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D498u;
        // 0x22d49c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D498u, 0x22D4A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D4A0u;
label_22d4a0:
    // 0x22d4a0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_22d4a4:
    if (ctx->pc == 0x22D4A4u) {
        ctx->pc = 0x22D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4A0u;
        // 0x22d4a4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4A8u;
        goto label_22d4a8;
    }
    ctx->pc = 0x22D4A0u;
    {
        const bool branch_taken_0x22d4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d4a0) {
            ctx->pc = 0x22D4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D4A0u;
            // 0x22d4a4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D4C4u;
            goto label_22d4c4;
        }
    }
    ctx->pc = 0x22D4A8u;
label_22d4a8:
    // 0x22d4a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d4ac:
    // 0x22d4ac: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22d4acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22d4b0:
    // 0x22d4b0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22d4b4:
    // 0x22d4b4: 0x40f809  jalr        $v0
label_22d4b8:
    if (ctx->pc == 0x22D4B8u) {
        ctx->pc = 0x22D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4B4u;
        // 0x22d4b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4BCu;
        goto label_22d4bc;
    }
    ctx->pc = 0x22D4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D4BCu);
        ctx->pc = 0x22D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4B4u;
        // 0x22d4b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D4B4u, 0x22D4BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D4BCu;
label_22d4bc:
    // 0x22d4bc: 0xa452003c  sh          $s2, 0x3C($v0)
    ctx->pc = 0x22d4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 18));
label_22d4c0:
    // 0x22d4c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22d4c4:
    // 0x22d4c4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22d4c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22d4c8:
    // 0x22d4c8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22d4cc:
    // 0x22d4cc: 0x40f809  jalr        $v0
label_22d4d0:
    if (ctx->pc == 0x22D4D0u) {
        ctx->pc = 0x22D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4CCu;
        // 0x22d4d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4D4u;
        goto label_22d4d4;
    }
    ctx->pc = 0x22D4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D4D4u);
        ctx->pc = 0x22D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4CCu;
        // 0x22d4d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D4CCu, 0x22D4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D4D4u;
label_22d4d4:
    // 0x22d4d4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_22d4d8:
    if (ctx->pc == 0x22D4D8u) {
        ctx->pc = 0x22D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4D4u;
        // 0x22d4d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4DCu;
        goto label_22d4dc;
    }
    ctx->pc = 0x22D4D4u;
    {
        const bool branch_taken_0x22d4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d4d4) {
            ctx->pc = 0x22D4D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D4D4u;
            // 0x22d4d8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D4F8u;
            goto label_22d4f8;
        }
    }
    ctx->pc = 0x22D4DCu;
label_22d4dc:
    // 0x22d4dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22d4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22d4e0:
    // 0x22d4e0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22d4e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22d4e4:
    // 0x22d4e4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22d4e8:
    // 0x22d4e8: 0x40f809  jalr        $v0
label_22d4ec:
    if (ctx->pc == 0x22D4ECu) {
        ctx->pc = 0x22D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4E8u;
        // 0x22d4ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D4F0u;
        goto label_22d4f0;
    }
    ctx->pc = 0x22D4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D4F0u);
        ctx->pc = 0x22D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D4E8u;
        // 0x22d4ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D4E8u, 0x22D4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D4F0u;
label_22d4f0:
    // 0x22d4f0: 0xa452003c  sh          $s2, 0x3C($v0)
    ctx->pc = 0x22d4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 18));
label_22d4f4:
    // 0x22d4f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22d4f8:
    // 0x22d4f8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22d4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22d4fc:
    // 0x22d4fc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22d4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22d500:
    // 0x22d500: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22d500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22d504:
    // 0x22d504: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22d504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_22d508:
    // 0x22d508: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22d508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22d50c:
    // 0x22d50c: 0x8c4600e4  lw          $a2, 0xE4($v0)
    ctx->pc = 0x22d50cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22d510:
    // 0x22d510: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22d510u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22d514:
    // 0x22d514: 0xc0f809  jalr        $a2
label_22d518:
    if (ctx->pc == 0x22D518u) {
        ctx->pc = 0x22D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D514u;
        // 0x22d518: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D51Cu;
        goto label_22d51c;
    }
    ctx->pc = 0x22D514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x22D51Cu);
        ctx->pc = 0x22D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D514u;
        // 0x22d518: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D514u, 0x22D51Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D51Cu;
label_22d51c:
    // 0x22d51c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22d51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22d520:
    // 0x22d520: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22d520u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22d524:
    // 0x22d524: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22d524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22d528:
    // 0x22d528: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22d528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22d52c:
    // 0x22d52c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22d530:
    // 0x22d530: 0x40f809  jalr        $v0
label_22d534:
    if (ctx->pc == 0x22D534u) {
        ctx->pc = 0x22D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D530u;
        // 0x22d534: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D538u;
        goto label_22d538;
    }
    ctx->pc = 0x22D530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22D538u);
        ctx->pc = 0x22D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D530u;
        // 0x22d534: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D530u, 0x22D538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22D538u;
label_22d538:
    // 0x22d538: 0xc08c6a0  jal         func_231A80
label_22d53c:
    if (ctx->pc == 0x22D53Cu) {
        ctx->pc = 0x22D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D538u;
        // 0x22d53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D540u;
        goto label_22d540;
    }
    ctx->pc = 0x22D538u;
    SET_GPR_U32(ctx, 31, 0x22D540u);
    ctx->pc = 0x22D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D538u;
    // 0x22d53c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x22D538u, 0x22D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D540u;
label_22d540:
    // 0x22d540: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22d540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22d544:
    // 0x22d544: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_22d548:
    if (ctx->pc == 0x22D548u) {
        ctx->pc = 0x22D54Cu;
        goto label_22d54c;
    }
    ctx->pc = 0x22D544u;
    {
        const bool branch_taken_0x22d544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x22d544) {
            ctx->pc = 0x22D560u;
            goto label_22d560;
        }
    }
    ctx->pc = 0x22D54Cu;
label_22d54c:
    // 0x22d54c: 0xc08c6a0  jal         func_231A80
label_22d550:
    if (ctx->pc == 0x22D550u) {
        ctx->pc = 0x22D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D54Cu;
        // 0x22d550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D554u;
        goto label_22d554;
    }
    ctx->pc = 0x22D54Cu;
    SET_GPR_U32(ctx, 31, 0x22D554u);
    ctx->pc = 0x22D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D54Cu;
    // 0x22d550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x22D54Cu, 0x22D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D554u;
label_22d554:
    // 0x22d554: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22d554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22d558:
    // 0x22d558: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_22d55c:
    if (ctx->pc == 0x22D55Cu) {
        ctx->pc = 0x22D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D558u;
        // 0x22d55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D560u;
        goto label_22d560;
    }
    ctx->pc = 0x22D558u;
    {
        const bool branch_taken_0x22d558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D558u;
        // 0x22d55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d558) {
            ctx->pc = 0x22D56Cu;
            goto label_22d56c;
        }
    }
    ctx->pc = 0x22D560u;
label_22d560:
    // 0x22d560: 0xc095fce  jal         func_257F38
label_22d564:
    if (ctx->pc == 0x22D564u) {
        ctx->pc = 0x22D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D560u;
        // 0x22d564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D568u;
        goto label_22d568;
    }
    ctx->pc = 0x22D560u;
    SET_GPR_U32(ctx, 31, 0x22D568u);
    ctx->pc = 0x22D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D560u;
    // 0x22d564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x22D560u, 0x22D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D568u;
label_22d568:
    // 0x22d568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d56c:
    // 0x22d56c: 0xc089988  jal         func_226620
label_22d570:
    if (ctx->pc == 0x22D570u) {
        ctx->pc = 0x22D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D56Cu;
        // 0x22d570: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D574u;
        goto label_22d574;
    }
    ctx->pc = 0x22D56Cu;
    SET_GPR_U32(ctx, 31, 0x22D574u);
    ctx->pc = 0x22D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D56Cu;
    // 0x22d570: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D56Cu, 0x22D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D574u;
label_22d574:
    // 0x22d574: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22d574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22d578:
    // 0x22d578: 0xc089988  jal         func_226620
label_22d57c:
    if (ctx->pc == 0x22D57Cu) {
        ctx->pc = 0x22D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D578u;
        // 0x22d57c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D580u;
        goto label_22d580;
    }
    ctx->pc = 0x22D578u;
    SET_GPR_U32(ctx, 31, 0x22D580u);
    ctx->pc = 0x22D57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D578u;
    // 0x22d57c: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22D578u, 0x22D580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D580u;
label_22d580:
    // 0x22d580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22d580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22d584:
    // 0x22d584: 0xc089974  jal         func_2265D0
label_22d588:
    if (ctx->pc == 0x22D588u) {
        ctx->pc = 0x22D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D584u;
        // 0x22d588: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D58Cu;
        goto label_22d58c;
    }
    ctx->pc = 0x22D584u;
    SET_GPR_U32(ctx, 31, 0x22D58Cu);
    ctx->pc = 0x22D588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D584u;
    // 0x22d588: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22D584u, 0x22D58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D58Cu;
label_22d58c:
    // 0x22d58c: 0x5260001f  beql        $s3, $zero, . + 4 + (0x1F << 2)
label_22d590:
    if (ctx->pc == 0x22D590u) {
        ctx->pc = 0x22D590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D58Cu;
        // 0x22d590: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D594u;
        goto label_22d594;
    }
    ctx->pc = 0x22D58Cu;
    {
        const bool branch_taken_0x22d58c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d58c) {
            ctx->pc = 0x22D590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D58Cu;
            // 0x22d590: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D60Cu;
            goto label_22d60c;
        }
    }
    ctx->pc = 0x22D594u;
label_22d594:
    // 0x22d594: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x22d594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_22d598:
    // 0x22d598: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22d598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_22d59c:
    // 0x22d59c: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x22d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
label_22d5a0:
    // 0x22d5a0: 0xc06ceda  jal         func_1B3B68
label_22d5a4:
    if (ctx->pc == 0x22D5A4u) {
        ctx->pc = 0x22D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5A0u;
        // 0x22d5a4: 0x24060171  addiu       $a2, $zero, 0x171 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5A8u;
        goto label_22d5a8;
    }
    ctx->pc = 0x22D5A0u;
    SET_GPR_U32(ctx, 31, 0x22D5A8u);
    ctx->pc = 0x22D5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D5A0u;
    // 0x22d5a4: 0x24060171  addiu       $a2, $zero, 0x171 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 369));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3B68u, 0x22D5A0u, 0x22D5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D5A8u;
label_22d5a8:
    // 0x22d5a8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x22d5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_22d5ac:
    // 0x22d5ac: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x22d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_22d5b0:
    // 0x22d5b0: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x22d5b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_22d5b4:
    // 0x22d5b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22d5b8:
    if (ctx->pc == 0x22D5B8u) {
        ctx->pc = 0x22D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5B4u;
        // 0x22d5b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5BCu;
        goto label_22d5bc;
    }
    ctx->pc = 0x22D5B4u;
    {
        const bool branch_taken_0x22d5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5B4u;
        // 0x22d5b8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5b4) {
            ctx->pc = 0x22D5C8u;
            goto label_22d5c8;
        }
    }
    ctx->pc = 0x22D5BCu;
label_22d5bc:
    // 0x22d5bc: 0xc107444  jal         func_41D110
label_22d5c0:
    if (ctx->pc == 0x22D5C0u) {
        ctx->pc = 0x22D5C4u;
        goto label_22d5c4;
    }
    ctx->pc = 0x22D5BCu;
    SET_GPR_U32(ctx, 31, 0x22D5C4u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x22D5BCu, 0x22D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D5C4u;
label_22d5c4:
    // 0x22d5c4: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22d5c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22d5c8:
    // 0x22d5c8: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_22d5cc:
    if (ctx->pc == 0x22D5CCu) {
        ctx->pc = 0x22D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5C8u;
        // 0x22d5cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5D0u;
        goto label_22d5d0;
    }
    ctx->pc = 0x22D5C8u;
    {
        const bool branch_taken_0x22d5c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d5c8) {
            ctx->pc = 0x22D5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22D5C8u;
            // 0x22d5cc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22D60Cu;
            goto label_22d60c;
        }
    }
    ctx->pc = 0x22D5D0u;
label_22d5d0:
    // 0x22d5d0: 0xc073a8e  jal         func_1CEA38
label_22d5d4:
    if (ctx->pc == 0x22D5D4u) {
        ctx->pc = 0x22D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5D0u;
        // 0x22d5d4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5D8u;
        goto label_22d5d8;
    }
    ctx->pc = 0x22D5D0u;
    SET_GPR_U32(ctx, 31, 0x22D5D8u);
    ctx->pc = 0x22D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D5D0u;
    // 0x22d5d4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22D5D0u, 0x22D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D5D8u;
label_22d5d8:
    // 0x22d5d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_22d5dc:
    if (ctx->pc == 0x22D5DCu) {
        ctx->pc = 0x22D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5D8u;
        // 0x22d5dc: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5E0u;
        goto label_22d5e0;
    }
    ctx->pc = 0x22D5D8u;
    {
        const bool branch_taken_0x22d5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5D8u;
        // 0x22d5dc: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5d8) {
            ctx->pc = 0x22D608u;
            goto label_22d608;
        }
    }
    ctx->pc = 0x22D5E0u;
label_22d5e0:
    // 0x22d5e0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x22d5e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_22d5e4:
    // 0x22d5e4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x22d5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_22d5e8:
    // 0x22d5e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22d5e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22d5ec:
    // 0x22d5ec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22d5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22d5f0:
    // 0x22d5f0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22d5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22d5f4:
    // 0x22d5f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22d5f8:
    if (ctx->pc == 0x22D5F8u) {
        ctx->pc = 0x22D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5F4u;
        // 0x22d5f8: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D5FCu;
        goto label_22d5fc;
    }
    ctx->pc = 0x22D5F4u;
    {
        const bool branch_taken_0x22d5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D5F4u;
        // 0x22d5f8: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d5f4) {
            ctx->pc = 0x22D608u;
            goto label_22d608;
        }
    }
    ctx->pc = 0x22D5FCu;
label_22d5fc:
    // 0x22d5fc: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x22d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_22d600:
    // 0x22d600: 0xc07387a  jal         func_1CE1E8
label_22d604:
    if (ctx->pc == 0x22D604u) {
        ctx->pc = 0x22D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D600u;
        // 0x22d604: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D608u;
        goto label_22d608;
    }
    ctx->pc = 0x22D600u;
    SET_GPR_U32(ctx, 31, 0x22D608u);
    ctx->pc = 0x22D604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D600u;
    // 0x22d604: 0x24849250  addiu       $a0, $a0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x22D600u, 0x22D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D608u;
label_22d608:
    // 0x22d608: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x22d608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22d60c:
    // 0x22d60c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22d60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22d610:
    // 0x22d610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22d610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22d614:
    // 0x22d614: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x22d614u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22d618:
    // 0x22d618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22d61c:
    // 0x22d61c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x22d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22d620:
    // 0x22d620: 0x3e00008  jr          $ra
label_22d624:
    if (ctx->pc == 0x22D624u) {
        ctx->pc = 0x22D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D620u;
        // 0x22d624: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22D628u;
        goto label_fallthrough_0x22d620;
    }
    ctx->pc = 0x22D620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D620u;
        // 0x22d624: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22d620:
    ctx->pc = 0x22D628u;
}
