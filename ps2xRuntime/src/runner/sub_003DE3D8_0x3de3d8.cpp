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

// Function: sub_003DE3D8
// Address: 0x3de3d8 - 0x3de638
void sub_003DE3D8_0x3de3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE3D8_0x3de3d8");
#endif

    switch (ctx->pc) {
        case 0x3de3d8u: goto label_3de3d8;
        case 0x3de3dcu: goto label_3de3dc;
        case 0x3de3e0u: goto label_3de3e0;
        case 0x3de3e4u: goto label_3de3e4;
        case 0x3de3e8u: goto label_3de3e8;
        case 0x3de3ecu: goto label_3de3ec;
        case 0x3de3f0u: goto label_3de3f0;
        case 0x3de3f4u: goto label_3de3f4;
        case 0x3de3f8u: goto label_3de3f8;
        case 0x3de3fcu: goto label_3de3fc;
        case 0x3de400u: goto label_3de400;
        case 0x3de404u: goto label_3de404;
        case 0x3de408u: goto label_3de408;
        case 0x3de40cu: goto label_3de40c;
        case 0x3de410u: goto label_3de410;
        case 0x3de414u: goto label_3de414;
        case 0x3de418u: goto label_3de418;
        case 0x3de41cu: goto label_3de41c;
        case 0x3de420u: goto label_3de420;
        case 0x3de424u: goto label_3de424;
        case 0x3de428u: goto label_3de428;
        case 0x3de42cu: goto label_3de42c;
        case 0x3de430u: goto label_3de430;
        case 0x3de434u: goto label_3de434;
        case 0x3de438u: goto label_3de438;
        case 0x3de43cu: goto label_3de43c;
        case 0x3de440u: goto label_3de440;
        case 0x3de444u: goto label_3de444;
        case 0x3de448u: goto label_3de448;
        case 0x3de44cu: goto label_3de44c;
        case 0x3de450u: goto label_3de450;
        case 0x3de454u: goto label_3de454;
        case 0x3de458u: goto label_3de458;
        case 0x3de45cu: goto label_3de45c;
        case 0x3de460u: goto label_3de460;
        case 0x3de464u: goto label_3de464;
        case 0x3de468u: goto label_3de468;
        case 0x3de46cu: goto label_3de46c;
        case 0x3de470u: goto label_3de470;
        case 0x3de474u: goto label_3de474;
        case 0x3de478u: goto label_3de478;
        case 0x3de47cu: goto label_3de47c;
        case 0x3de480u: goto label_3de480;
        case 0x3de484u: goto label_3de484;
        case 0x3de488u: goto label_3de488;
        case 0x3de48cu: goto label_3de48c;
        case 0x3de490u: goto label_3de490;
        case 0x3de494u: goto label_3de494;
        case 0x3de498u: goto label_3de498;
        case 0x3de49cu: goto label_3de49c;
        case 0x3de4a0u: goto label_3de4a0;
        case 0x3de4a4u: goto label_3de4a4;
        case 0x3de4a8u: goto label_3de4a8;
        case 0x3de4acu: goto label_3de4ac;
        case 0x3de4b0u: goto label_3de4b0;
        case 0x3de4b4u: goto label_3de4b4;
        case 0x3de4b8u: goto label_3de4b8;
        case 0x3de4bcu: goto label_3de4bc;
        case 0x3de4c0u: goto label_3de4c0;
        case 0x3de4c4u: goto label_3de4c4;
        case 0x3de4c8u: goto label_3de4c8;
        case 0x3de4ccu: goto label_3de4cc;
        case 0x3de4d0u: goto label_3de4d0;
        case 0x3de4d4u: goto label_3de4d4;
        case 0x3de4d8u: goto label_3de4d8;
        case 0x3de4dcu: goto label_3de4dc;
        case 0x3de4e0u: goto label_3de4e0;
        case 0x3de4e4u: goto label_3de4e4;
        case 0x3de4e8u: goto label_3de4e8;
        case 0x3de4ecu: goto label_3de4ec;
        case 0x3de4f0u: goto label_3de4f0;
        case 0x3de4f4u: goto label_3de4f4;
        case 0x3de4f8u: goto label_3de4f8;
        case 0x3de4fcu: goto label_3de4fc;
        case 0x3de500u: goto label_3de500;
        case 0x3de504u: goto label_3de504;
        case 0x3de508u: goto label_3de508;
        case 0x3de50cu: goto label_3de50c;
        case 0x3de510u: goto label_3de510;
        case 0x3de514u: goto label_3de514;
        case 0x3de518u: goto label_3de518;
        case 0x3de51cu: goto label_3de51c;
        case 0x3de520u: goto label_3de520;
        case 0x3de524u: goto label_3de524;
        case 0x3de528u: goto label_3de528;
        case 0x3de52cu: goto label_3de52c;
        case 0x3de530u: goto label_3de530;
        case 0x3de534u: goto label_3de534;
        case 0x3de538u: goto label_3de538;
        case 0x3de53cu: goto label_3de53c;
        case 0x3de540u: goto label_3de540;
        case 0x3de544u: goto label_3de544;
        case 0x3de548u: goto label_3de548;
        case 0x3de54cu: goto label_3de54c;
        case 0x3de550u: goto label_3de550;
        case 0x3de554u: goto label_3de554;
        case 0x3de558u: goto label_3de558;
        case 0x3de55cu: goto label_3de55c;
        case 0x3de560u: goto label_3de560;
        case 0x3de564u: goto label_3de564;
        case 0x3de568u: goto label_3de568;
        case 0x3de56cu: goto label_3de56c;
        case 0x3de570u: goto label_3de570;
        case 0x3de574u: goto label_3de574;
        case 0x3de578u: goto label_3de578;
        case 0x3de57cu: goto label_3de57c;
        case 0x3de580u: goto label_3de580;
        case 0x3de584u: goto label_3de584;
        case 0x3de588u: goto label_3de588;
        case 0x3de58cu: goto label_3de58c;
        case 0x3de590u: goto label_3de590;
        case 0x3de594u: goto label_3de594;
        case 0x3de598u: goto label_3de598;
        case 0x3de59cu: goto label_3de59c;
        case 0x3de5a0u: goto label_3de5a0;
        case 0x3de5a4u: goto label_3de5a4;
        case 0x3de5a8u: goto label_3de5a8;
        case 0x3de5acu: goto label_3de5ac;
        case 0x3de5b0u: goto label_3de5b0;
        case 0x3de5b4u: goto label_3de5b4;
        case 0x3de5b8u: goto label_3de5b8;
        case 0x3de5bcu: goto label_3de5bc;
        case 0x3de5c0u: goto label_3de5c0;
        case 0x3de5c4u: goto label_3de5c4;
        case 0x3de5c8u: goto label_3de5c8;
        case 0x3de5ccu: goto label_3de5cc;
        case 0x3de5d0u: goto label_3de5d0;
        case 0x3de5d4u: goto label_3de5d4;
        case 0x3de5d8u: goto label_3de5d8;
        case 0x3de5dcu: goto label_3de5dc;
        case 0x3de5e0u: goto label_3de5e0;
        case 0x3de5e4u: goto label_3de5e4;
        case 0x3de5e8u: goto label_3de5e8;
        case 0x3de5ecu: goto label_3de5ec;
        case 0x3de5f0u: goto label_3de5f0;
        case 0x3de5f4u: goto label_3de5f4;
        case 0x3de5f8u: goto label_3de5f8;
        case 0x3de5fcu: goto label_3de5fc;
        case 0x3de600u: goto label_3de600;
        case 0x3de604u: goto label_3de604;
        case 0x3de608u: goto label_3de608;
        case 0x3de60cu: goto label_3de60c;
        case 0x3de610u: goto label_3de610;
        case 0x3de614u: goto label_3de614;
        case 0x3de618u: goto label_3de618;
        case 0x3de61cu: goto label_3de61c;
        case 0x3de620u: goto label_3de620;
        case 0x3de624u: goto label_3de624;
        case 0x3de628u: goto label_3de628;
        case 0x3de62cu: goto label_3de62c;
        case 0x3de630u: goto label_3de630;
        case 0x3de634u: goto label_3de634;
        default: break;
    }

    ctx->pc = 0x3de3d8u;

label_3de3d8:
    // 0x3de3d8: 0x27bdfb80  addiu       $sp, $sp, -0x480
    ctx->pc = 0x3de3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966144));
label_3de3dc:
    // 0x3de3dc: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x3de3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
label_3de3e0:
    // 0x3de3e0: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x3de3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
label_3de3e4:
    // 0x3de3e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3de3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3de3e8:
    // 0x3de3e8: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x3de3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
label_3de3ec:
    // 0x3de3ec: 0xffbf0430  sd          $ra, 0x430($sp)
    ctx->pc = 0x3de3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 31));
label_3de3f0:
    // 0x3de3f0: 0xe7b40470  swc1        $f20, 0x470($sp)
    ctx->pc = 0x3de3f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3de3f4:
    // 0x3de3f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3de3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3de3f8:
    // 0x3de3f8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3de3f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3de3fc:
    // 0x3de3fc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3de3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3de400:
    // 0x3de400: 0x40f809  jalr        $v0
label_3de404:
    if (ctx->pc == 0x3DE404u) {
        ctx->pc = 0x3DE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE400u;
        // 0x3de404: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE408u;
        goto label_3de408;
    }
    ctx->pc = 0x3DE400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DE408u);
        ctx->pc = 0x3DE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE400u;
        // 0x3de404: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE400u, 0x3DE408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE408u;
label_3de408:
    // 0x3de408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3de408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de40c:
    // 0x3de40c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3de40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3de410:
    // 0x3de410: 0x27b20410  addiu       $s2, $sp, 0x410
    ctx->pc = 0x3de410u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3de414:
    // 0x3de414: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3de414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3de418:
    // 0x3de418: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3de418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3de41c:
    // 0x3de41c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3de41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3de420:
    // 0x3de420: 0x0  nop
    ctx->pc = 0x3de420u;
    // NOP
label_3de424:
    // 0x3de424: 0x0  nop
    ctx->pc = 0x3de424u;
    // NOP
label_3de428:
    // 0x3de428: 0x0  nop
    ctx->pc = 0x3de428u;
    // NOP
label_3de42c:
    // 0x3de42c: 0x0  nop
    ctx->pc = 0x3de42cu;
    // NOP
label_3de430:
    // 0x3de430: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3de434:
    if (ctx->pc == 0x3DE434u) {
        ctx->pc = 0x3DE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE430u;
        // 0x3de434: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE438u;
        goto label_3de438;
    }
    ctx->pc = 0x3DE430u;
    {
        const bool branch_taken_0x3de430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DE434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE430u;
        // 0x3de434: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de430) {
            ctx->pc = 0x3DE420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3de420;
        }
    }
    ctx->pc = 0x3DE438u;
label_3de438:
    // 0x3de438: 0xc138ddc  jal         func_4E3770
label_3de43c:
    if (ctx->pc == 0x3DE43Cu) {
        ctx->pc = 0x3DE440u;
        goto label_3de440;
    }
    ctx->pc = 0x3DE438u;
    SET_GPR_U32(ctx, 31, 0x3DE440u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3DE438u, 0x3DE440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE440u;
label_3de440:
    // 0x3de440: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3de440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3de444:
    // 0x3de444: 0x2c62003c  sltiu       $v0, $v1, 0x3C
    ctx->pc = 0x3de444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_3de448:
    // 0x3de448: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_3de44c:
    if (ctx->pc == 0x3DE44Cu) {
        ctx->pc = 0x3DE44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE448u;
        // 0x3de44c: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE450u;
        goto label_3de450;
    }
    ctx->pc = 0x3DE448u;
    {
        const bool branch_taken_0x3de448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE448u;
        // 0x3de44c: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de448) {
            ctx->pc = 0x3DE4A0u;
            goto label_3de4a0;
        }
    }
    ctx->pc = 0x3DE450u;
label_3de450:
    // 0x3de450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3de450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3de454:
    // 0x3de454: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3de454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3de458:
    // 0x3de458: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_3de45c:
    if (ctx->pc == 0x3DE45Cu) {
        ctx->pc = 0x3DE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE458u;
        // 0x3de45c: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE460u;
        goto label_3de460;
    }
    ctx->pc = 0x3DE458u;
    {
        const bool branch_taken_0x3de458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE458u;
        // 0x3de45c: 0xae240004  sw          $a0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de458) {
            ctx->pc = 0x3DE480u;
            goto label_3de480;
        }
    }
    ctx->pc = 0x3DE460u;
label_3de460:
    // 0x3de460: 0x2c82003c  sltiu       $v0, $a0, 0x3C
    ctx->pc = 0x3de460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_3de464:
    // 0x3de464: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3de468:
    if (ctx->pc == 0x3DE468u) {
        ctx->pc = 0x3DE468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE464u;
        // 0x3de468: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE46Cu;
        goto label_3de46c;
    }
    ctx->pc = 0x3DE464u;
    {
        const bool branch_taken_0x3de464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3de464) {
            ctx->pc = 0x3DE468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE464u;
            // 0x3de468: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE478u;
            goto label_3de478;
        }
    }
    ctx->pc = 0x3DE46Cu;
label_3de46c:
    // 0x3de46c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3de46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3de470:
    // 0x3de470: 0x1000000a  b           . + 4 + (0xA << 2)
label_3de474:
    if (ctx->pc == 0x3DE474u) {
        ctx->pc = 0x3DE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE470u;
        // 0x3de474: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE478u;
        goto label_3de478;
    }
    ctx->pc = 0x3DE470u;
    {
        const bool branch_taken_0x3de470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE470u;
        // 0x3de474: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de470) {
            ctx->pc = 0x3DE49Cu;
            goto label_3de49c;
        }
    }
    ctx->pc = 0x3DE478u;
label_3de478:
    // 0x3de478: 0x10000008  b           . + 4 + (0x8 << 2)
label_3de47c:
    if (ctx->pc == 0x3DE47Cu) {
        ctx->pc = 0x3DE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE478u;
        // 0x3de47c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE480u;
        goto label_3de480;
    }
    ctx->pc = 0x3DE478u;
    {
        const bool branch_taken_0x3de478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE478u;
        // 0x3de47c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de478) {
            ctx->pc = 0x3DE49Cu;
            goto label_3de49c;
        }
    }
    ctx->pc = 0x3DE480u;
label_3de480:
    // 0x3de480: 0x2c82003c  sltiu       $v0, $a0, 0x3C
    ctx->pc = 0x3de480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
label_3de484:
    // 0x3de484: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3de488:
    if (ctx->pc == 0x3DE488u) {
        ctx->pc = 0x3DE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE484u;
        // 0x3de488: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE48Cu;
        goto label_3de48c;
    }
    ctx->pc = 0x3DE484u;
    {
        const bool branch_taken_0x3de484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3de484) {
            ctx->pc = 0x3DE488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE484u;
            // 0x3de488: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE498u;
            goto label_3de498;
        }
    }
    ctx->pc = 0x3DE48Cu;
label_3de48c:
    // 0x3de48c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3de48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3de490:
    // 0x3de490: 0x10000002  b           . + 4 + (0x2 << 2)
label_3de494:
    if (ctx->pc == 0x3DE494u) {
        ctx->pc = 0x3DE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE490u;
        // 0x3de494: 0x3442ff00  ori         $v0, $v0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE498u;
        goto label_3de498;
    }
    ctx->pc = 0x3DE490u;
    {
        const bool branch_taken_0x3de490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE490u;
        // 0x3de494: 0x3442ff00  ori         $v0, $v0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de490) {
            ctx->pc = 0x3DE49Cu;
            goto label_3de49c;
        }
    }
    ctx->pc = 0x3DE498u;
label_3de498:
    // 0x3de498: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3de498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3de49c:
    // 0x3de49c: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x3de49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_3de4a0:
    // 0x3de4a0: 0x3c02a2ff  lui         $v0, 0xA2FF
    ctx->pc = 0x3de4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41727 << 16));
label_3de4a4:
    // 0x3de4a4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x3de4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3de4a8:
    // 0x3de4a8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x3de4a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_3de4ac:
    // 0x3de4ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3de4acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3de4b0:
    // 0x3de4b0: 0x344227d3  ori         $v0, $v0, 0x27D3
    ctx->pc = 0x3de4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10195);
label_3de4b4:
    // 0x3de4b4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3de4b8:
    if (ctx->pc == 0x3DE4B8u) {
        ctx->pc = 0x3DE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4B4u;
        // 0x3de4b8: 0x3c023bf6  lui         $v0, 0x3BF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15350 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE4BCu;
        goto label_3de4bc;
    }
    ctx->pc = 0x3DE4B4u;
    {
        const bool branch_taken_0x3de4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4B4u;
        // 0x3de4b8: 0x3c023bf6  lui         $v0, 0x3BF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15350 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de4b4) {
            ctx->pc = 0x3DE4D8u;
            goto label_3de4d8;
        }
    }
    ctx->pc = 0x3DE4BCu;
label_3de4bc:
    // 0x3de4bc: 0x34427669  ori         $v0, $v0, 0x7669
    ctx->pc = 0x3de4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30313);
label_3de4c0:
    // 0x3de4c0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_3de4c4:
    if (ctx->pc == 0x3DE4C4u) {
        ctx->pc = 0x3DE4C8u;
        goto label_3de4c8;
    }
    ctx->pc = 0x3DE4C0u;
    {
        const bool branch_taken_0x3de4c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3de4c0) {
            ctx->pc = 0x3DE4D8u;
            goto label_3de4d8;
        }
    }
    ctx->pc = 0x3DE4C8u;
label_3de4c8:
    // 0x3de4c8: 0x3c028869  lui         $v0, 0x8869
    ctx->pc = 0x3de4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34921 << 16));
label_3de4cc:
    // 0x3de4cc: 0x34425784  ori         $v0, $v0, 0x5784
    ctx->pc = 0x3de4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22404);
label_3de4d0:
    // 0x3de4d0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3de4d4:
    if (ctx->pc == 0x3DE4D4u) {
        ctx->pc = 0x3DE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4D0u;
        // 0x3de4d4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE4D8u;
        goto label_3de4d8;
    }
    ctx->pc = 0x3DE4D0u;
    {
        const bool branch_taken_0x3de4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de4d0) {
            ctx->pc = 0x3DE4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE4D0u;
            // 0x3de4d4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE4E4u;
            goto label_3de4e4;
        }
    }
    ctx->pc = 0x3DE4D8u;
label_3de4d8:
    // 0x3de4d8: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3de4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3de4dc:
    // 0x3de4dc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3de4dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3de4e0:
    // 0x3de4e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3de4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3de4e4:
    // 0x3de4e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3de4e8:
    if (ctx->pc == 0x3DE4E8u) {
        ctx->pc = 0x3DE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4E4u;
        // 0x3de4e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE4ECu;
        goto label_3de4ec;
    }
    ctx->pc = 0x3DE4E4u;
    {
        const bool branch_taken_0x3de4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4E4u;
        // 0x3de4e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de4e4) {
            ctx->pc = 0x3DE528u;
            goto label_3de528;
        }
    }
    ctx->pc = 0x3DE4ECu;
label_3de4ec:
    // 0x3de4ec: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3de4ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3de4f0:
    // 0x3de4f0: 0x7fa20410  sq          $v0, 0x410($sp)
    ctx->pc = 0x3de4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
label_3de4f4:
    // 0x3de4f4: 0xc045c82  jal         func_117208
label_3de4f8:
    if (ctx->pc == 0x3DE4F8u) {
        ctx->pc = 0x3DE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE4F4u;
        // 0x3de4f8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE4FCu;
        goto label_3de4fc;
    }
    ctx->pc = 0x3DE4F4u;
    SET_GPR_U32(ctx, 31, 0x3DE4FCu);
    ctx->pc = 0x3DE4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE4F4u;
    // 0x3de4f8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117208u, 0x3DE4F4u, 0x3DE4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE4FCu;
label_3de4fc:
    // 0x3de4fc: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x3de4fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3de500:
    // 0x3de500: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de504:
    // 0x3de504: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3de504u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3de508:
    // 0x3de508: 0xc0e94a0  jal         func_3A5280
label_3de50c:
    if (ctx->pc == 0x3DE50Cu) {
        ctx->pc = 0x3DE50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE508u;
        // 0x3de50c: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE510u;
        goto label_3de510;
    }
    ctx->pc = 0x3DE508u;
    SET_GPR_U32(ctx, 31, 0x3DE510u);
    ctx->pc = 0x3DE50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE508u;
    // 0x3de50c: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3DE508u, 0x3DE510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE510u;
label_3de510:
    // 0x3de510: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_3de514:
    if (ctx->pc == 0x3DE514u) {
        ctx->pc = 0x3DE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE510u;
        // 0x3de514: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE518u;
        goto label_3de518;
    }
    ctx->pc = 0x3DE510u;
    {
        const bool branch_taken_0x3de510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE510u;
        // 0x3de514: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de510) {
            ctx->pc = 0x3DE61Cu;
            goto label_3de61c;
        }
    }
    ctx->pc = 0x3DE518u;
label_3de518:
    // 0x3de518: 0xc045c76  jal         func_1171D8
label_3de51c:
    if (ctx->pc == 0x3DE51Cu) {
        ctx->pc = 0x3DE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE518u;
        // 0x3de51c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE520u;
        goto label_3de520;
    }
    ctx->pc = 0x3DE518u;
    SET_GPR_U32(ctx, 31, 0x3DE520u);
    ctx->pc = 0x3DE51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE518u;
    // 0x3de51c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171D8u, 0x3DE518u, 0x3DE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE520u;
label_3de520:
    // 0x3de520: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3de524:
    if (ctx->pc == 0x3DE524u) {
        ctx->pc = 0x3DE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE520u;
        // 0x3de524: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE528u;
        goto label_3de528;
    }
    ctx->pc = 0x3DE520u;
    {
        const bool branch_taken_0x3de520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE520u;
        // 0x3de524: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de520) {
            ctx->pc = 0x3DE618u;
            goto label_3de618;
        }
    }
    ctx->pc = 0x3DE528u;
label_3de528:
    // 0x3de528: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3de528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3de52c:
    // 0x3de52c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de530:
    // 0x3de530: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3de530u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3de534:
    // 0x3de534: 0xc0e94a0  jal         func_3A5280
label_3de538:
    if (ctx->pc == 0x3DE538u) {
        ctx->pc = 0x3DE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE534u;
        // 0x3de538: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE53Cu;
        goto label_3de53c;
    }
    ctx->pc = 0x3DE534u;
    SET_GPR_U32(ctx, 31, 0x3DE53Cu);
    ctx->pc = 0x3DE538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE534u;
    // 0x3de538: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3DE534u, 0x3DE53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE53Cu;
label_3de53c:
    // 0x3de53c: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
label_3de540:
    if (ctx->pc == 0x3DE540u) {
        ctx->pc = 0x3DE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE53Cu;
        // 0x3de540: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE544u;
        goto label_3de544;
    }
    ctx->pc = 0x3DE53Cu;
    {
        const bool branch_taken_0x3de53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3de53c) {
            ctx->pc = 0x3DE540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE53Cu;
            // 0x3de540: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE61Cu;
            goto label_3de61c;
        }
    }
    ctx->pc = 0x3DE544u;
label_3de544:
    // 0x3de544: 0x3c02a2ff  lui         $v0, 0xA2FF
    ctx->pc = 0x3de544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41727 << 16));
label_3de548:
    // 0x3de548: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x3de548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3de54c:
    // 0x3de54c: 0x344227d3  ori         $v0, $v0, 0x27D3
    ctx->pc = 0x3de54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10195);
label_3de550:
    // 0x3de550: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3de554:
    if (ctx->pc == 0x3DE554u) {
        ctx->pc = 0x3DE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE550u;
        // 0x3de554: 0x3c023bf6  lui         $v0, 0x3BF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15350 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE558u;
        goto label_3de558;
    }
    ctx->pc = 0x3DE550u;
    {
        const bool branch_taken_0x3de550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE550u;
        // 0x3de554: 0x3c023bf6  lui         $v0, 0x3BF6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15350 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de550) {
            ctx->pc = 0x3DE574u;
            goto label_3de574;
        }
    }
    ctx->pc = 0x3DE558u;
label_3de558:
    // 0x3de558: 0x34427669  ori         $v0, $v0, 0x7669
    ctx->pc = 0x3de558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30313);
label_3de55c:
    // 0x3de55c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_3de560:
    if (ctx->pc == 0x3DE560u) {
        ctx->pc = 0x3DE560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE55Cu;
        // 0x3de560: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE564u;
        goto label_3de564;
    }
    ctx->pc = 0x3DE55Cu;
    {
        const bool branch_taken_0x3de55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3de55c) {
            ctx->pc = 0x3DE560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE55Cu;
            // 0x3de560: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE578u;
            goto label_3de578;
        }
    }
    ctx->pc = 0x3DE564u;
label_3de564:
    // 0x3de564: 0x3c028869  lui         $v0, 0x8869
    ctx->pc = 0x3de564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34921 << 16));
label_3de568:
    // 0x3de568: 0x34425784  ori         $v0, $v0, 0x5784
    ctx->pc = 0x3de568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22404);
label_3de56c:
    // 0x3de56c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_3de570:
    if (ctx->pc == 0x3DE570u) {
        ctx->pc = 0x3DE574u;
        goto label_3de574;
    }
    ctx->pc = 0x3DE56Cu;
    {
        const bool branch_taken_0x3de56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de56c) {
            ctx->pc = 0x3DE590u;
            goto label_3de590;
        }
    }
    ctx->pc = 0x3DE574u;
label_3de574:
    // 0x3de574: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3de574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3de578:
    // 0x3de578: 0x3c045adc  lui         $a0, 0x5ADC
    ctx->pc = 0x3de578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23260 << 16));
label_3de57c:
    // 0x3de57c: 0x34848f1e  ori         $a0, $a0, 0x8F1E
    ctx->pc = 0x3de57cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36638);
label_3de580:
    // 0x3de580: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3de580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3de584:
    // 0x3de584: 0xc045c64  jal         func_117190
label_3de588:
    if (ctx->pc == 0x3DE588u) {
        ctx->pc = 0x3DE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE584u;
        // 0x3de588: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE58Cu;
        goto label_3de58c;
    }
    ctx->pc = 0x3DE584u;
    SET_GPR_U32(ctx, 31, 0x3DE58Cu);
    ctx->pc = 0x3DE588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE584u;
    // 0x3de588: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117190u, 0x3DE584u, 0x3DE58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE58Cu;
label_3de58c:
    // 0x3de58c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3de58cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3de590:
    // 0x3de590: 0x3c02baf0  lui         $v0, 0xBAF0
    ctx->pc = 0x3de590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47856 << 16));
label_3de594:
    // 0x3de594: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x3de594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3de598:
    // 0x3de598: 0x34429a22  ori         $v0, $v0, 0x9A22
    ctx->pc = 0x3de598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39458);
label_3de59c:
    // 0x3de59c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_3de5a0:
    if (ctx->pc == 0x3DE5A0u) {
        ctx->pc = 0x3DE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE59Cu;
        // 0x3de5a0: 0x3c024647  lui         $v0, 0x4647 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17991 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE5A4u;
        goto label_3de5a4;
    }
    ctx->pc = 0x3DE59Cu;
    {
        const bool branch_taken_0x3de59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE59Cu;
        // 0x3de5a0: 0x3c024647  lui         $v0, 0x4647 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17991 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de59c) {
            ctx->pc = 0x3DE5CCu;
            goto label_3de5cc;
        }
    }
    ctx->pc = 0x3DE5A4u;
label_3de5a4:
    // 0x3de5a4: 0x3442ddec  ori         $v0, $v0, 0xDDEC
    ctx->pc = 0x3de5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56812);
label_3de5a8:
    // 0x3de5a8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_3de5ac:
    if (ctx->pc == 0x3DE5ACu) {
        ctx->pc = 0x3DE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5A8u;
        // 0x3de5ac: 0x3c026193  lui         $v0, 0x6193 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24979 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE5B0u;
        goto label_3de5b0;
    }
    ctx->pc = 0x3DE5A8u;
    {
        const bool branch_taken_0x3de5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DE5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5A8u;
        // 0x3de5ac: 0x3c026193  lui         $v0, 0x6193 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24979 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de5a8) {
            ctx->pc = 0x3DE5CCu;
            goto label_3de5cc;
        }
    }
    ctx->pc = 0x3DE5B0u;
label_3de5b0:
    // 0x3de5b0: 0x34427485  ori         $v0, $v0, 0x7485
    ctx->pc = 0x3de5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29829);
label_3de5b4:
    // 0x3de5b4: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_3de5b8:
    if (ctx->pc == 0x3DE5B8u) {
        ctx->pc = 0x3DE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5B4u;
        // 0x3de5b8: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE5BCu;
        goto label_3de5bc;
    }
    ctx->pc = 0x3DE5B4u;
    {
        const bool branch_taken_0x3de5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3de5b4) {
            ctx->pc = 0x3DE5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE5B4u;
            // 0x3de5b8: 0x7a020010  lq          $v0, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE5D0u;
            goto label_3de5d0;
        }
    }
    ctx->pc = 0x3DE5BCu;
label_3de5bc:
    // 0x3de5bc: 0x3c02f89a  lui         $v0, 0xF89A
    ctx->pc = 0x3de5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63642 << 16));
label_3de5c0:
    // 0x3de5c0: 0x3442253f  ori         $v0, $v0, 0x253F
    ctx->pc = 0x3de5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9535);
label_3de5c4:
    // 0x3de5c4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_3de5c8:
    if (ctx->pc == 0x3DE5C8u) {
        ctx->pc = 0x3DE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5C4u;
        // 0x3de5c8: 0x3c02599e  lui         $v0, 0x599E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22942 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE5CCu;
        goto label_3de5cc;
    }
    ctx->pc = 0x3DE5C4u;
    {
        const bool branch_taken_0x3de5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5C4u;
        // 0x3de5c8: 0x3c02599e  lui         $v0, 0x599E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22942 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3de5c4) {
            ctx->pc = 0x3DE5F0u;
            goto label_3de5f0;
        }
    }
    ctx->pc = 0x3DE5CCu;
label_3de5cc:
    // 0x3de5cc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3de5ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3de5d0:
    // 0x3de5d0: 0x3c04cd67  lui         $a0, 0xCD67
    ctx->pc = 0x3de5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52583 << 16));
label_3de5d4:
    // 0x3de5d4: 0x348454af  ori         $a0, $a0, 0x54AF
    ctx->pc = 0x3de5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21679);
label_3de5d8:
    // 0x3de5d8: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3de5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3de5dc:
    // 0x3de5dc: 0xc045c64  jal         func_117190
label_3de5e0:
    if (ctx->pc == 0x3DE5E0u) {
        ctx->pc = 0x3DE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5DCu;
        // 0x3de5e0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE5E4u;
        goto label_3de5e4;
    }
    ctx->pc = 0x3DE5DCu;
    SET_GPR_U32(ctx, 31, 0x3DE5E4u);
    ctx->pc = 0x3DE5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE5DCu;
    // 0x3de5e0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117190u, 0x3DE5DCu, 0x3DE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE5E4u;
label_3de5e4:
    // 0x3de5e4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3de5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3de5e8:
    // 0x3de5e8: 0x3c02599e  lui         $v0, 0x599E
    ctx->pc = 0x3de5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22942 << 16));
label_3de5ec:
    // 0x3de5ec: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x3de5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_3de5f0:
    // 0x3de5f0: 0x3442528d  ori         $v0, $v0, 0x528D
    ctx->pc = 0x3de5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21133);
label_3de5f4:
    // 0x3de5f4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_3de5f8:
    if (ctx->pc == 0x3DE5F8u) {
        ctx->pc = 0x3DE5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE5F4u;
        // 0x3de5f8: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE5FCu;
        goto label_3de5fc;
    }
    ctx->pc = 0x3DE5F4u;
    {
        const bool branch_taken_0x3de5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3de5f4) {
            ctx->pc = 0x3DE5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DE5F4u;
            // 0x3de5f8: 0x7bb00460  lq          $s0, 0x460($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DE61Cu;
            goto label_3de61c;
        }
    }
    ctx->pc = 0x3DE5FCu;
label_3de5fc:
    // 0x3de5fc: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3de5fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3de600:
    // 0x3de600: 0x3c04546e  lui         $a0, 0x546E
    ctx->pc = 0x3de600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21614 << 16));
label_3de604:
    // 0x3de604: 0x34840515  ori         $a0, $a0, 0x515
    ctx->pc = 0x3de604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1301);
label_3de608:
    // 0x3de608: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3de608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3de60c:
    // 0x3de60c: 0xc045c64  jal         func_117190
label_3de610:
    if (ctx->pc == 0x3DE610u) {
        ctx->pc = 0x3DE610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE60Cu;
        // 0x3de610: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE614u;
        goto label_3de614;
    }
    ctx->pc = 0x3DE60Cu;
    SET_GPR_U32(ctx, 31, 0x3DE614u);
    ctx->pc = 0x3DE610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE60Cu;
    // 0x3de610: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117190u, 0x3DE60Cu, 0x3DE614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE614u;
label_3de614:
    // 0x3de614: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3de614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3de618:
    // 0x3de618: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x3de618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3de61c:
    // 0x3de61c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3de61cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3de620:
    // 0x3de620: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x3de620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3de624:
    // 0x3de624: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x3de624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_3de628:
    // 0x3de628: 0xdfbf0430  ld          $ra, 0x430($sp)
    ctx->pc = 0x3de628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_3de62c:
    // 0x3de62c: 0xc7b40470  lwc1        $f20, 0x470($sp)
    ctx->pc = 0x3de62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3de630:
    // 0x3de630: 0x3e00008  jr          $ra
label_3de634:
    if (ctx->pc == 0x3DE634u) {
        ctx->pc = 0x3DE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE630u;
        // 0x3de634: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE638u;
        goto label_fallthrough_0x3de630;
    }
    ctx->pc = 0x3DE630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE630u;
        // 0x3de634: 0x27bd0480  addiu       $sp, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3de630:
    ctx->pc = 0x3DE638u;
}
