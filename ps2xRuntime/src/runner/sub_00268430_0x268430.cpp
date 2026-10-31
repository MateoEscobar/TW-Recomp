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

// Function: sub_00268430
// Address: 0x268430 - 0x2686e8
void sub_00268430_0x268430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268430_0x268430");
#endif

    switch (ctx->pc) {
        case 0x268430u: goto label_268430;
        case 0x268434u: goto label_268434;
        case 0x268438u: goto label_268438;
        case 0x26843cu: goto label_26843c;
        case 0x268440u: goto label_268440;
        case 0x268444u: goto label_268444;
        case 0x268448u: goto label_268448;
        case 0x26844cu: goto label_26844c;
        case 0x268450u: goto label_268450;
        case 0x268454u: goto label_268454;
        case 0x268458u: goto label_268458;
        case 0x26845cu: goto label_26845c;
        case 0x268460u: goto label_268460;
        case 0x268464u: goto label_268464;
        case 0x268468u: goto label_268468;
        case 0x26846cu: goto label_26846c;
        case 0x268470u: goto label_268470;
        case 0x268474u: goto label_268474;
        case 0x268478u: goto label_268478;
        case 0x26847cu: goto label_26847c;
        case 0x268480u: goto label_268480;
        case 0x268484u: goto label_268484;
        case 0x268488u: goto label_268488;
        case 0x26848cu: goto label_26848c;
        case 0x268490u: goto label_268490;
        case 0x268494u: goto label_268494;
        case 0x268498u: goto label_268498;
        case 0x26849cu: goto label_26849c;
        case 0x2684a0u: goto label_2684a0;
        case 0x2684a4u: goto label_2684a4;
        case 0x2684a8u: goto label_2684a8;
        case 0x2684acu: goto label_2684ac;
        case 0x2684b0u: goto label_2684b0;
        case 0x2684b4u: goto label_2684b4;
        case 0x2684b8u: goto label_2684b8;
        case 0x2684bcu: goto label_2684bc;
        case 0x2684c0u: goto label_2684c0;
        case 0x2684c4u: goto label_2684c4;
        case 0x2684c8u: goto label_2684c8;
        case 0x2684ccu: goto label_2684cc;
        case 0x2684d0u: goto label_2684d0;
        case 0x2684d4u: goto label_2684d4;
        case 0x2684d8u: goto label_2684d8;
        case 0x2684dcu: goto label_2684dc;
        case 0x2684e0u: goto label_2684e0;
        case 0x2684e4u: goto label_2684e4;
        case 0x2684e8u: goto label_2684e8;
        case 0x2684ecu: goto label_2684ec;
        case 0x2684f0u: goto label_2684f0;
        case 0x2684f4u: goto label_2684f4;
        case 0x2684f8u: goto label_2684f8;
        case 0x2684fcu: goto label_2684fc;
        case 0x268500u: goto label_268500;
        case 0x268504u: goto label_268504;
        case 0x268508u: goto label_268508;
        case 0x26850cu: goto label_26850c;
        case 0x268510u: goto label_268510;
        case 0x268514u: goto label_268514;
        case 0x268518u: goto label_268518;
        case 0x26851cu: goto label_26851c;
        case 0x268520u: goto label_268520;
        case 0x268524u: goto label_268524;
        case 0x268528u: goto label_268528;
        case 0x26852cu: goto label_26852c;
        case 0x268530u: goto label_268530;
        case 0x268534u: goto label_268534;
        case 0x268538u: goto label_268538;
        case 0x26853cu: goto label_26853c;
        case 0x268540u: goto label_268540;
        case 0x268544u: goto label_268544;
        case 0x268548u: goto label_268548;
        case 0x26854cu: goto label_26854c;
        case 0x268550u: goto label_268550;
        case 0x268554u: goto label_268554;
        case 0x268558u: goto label_268558;
        case 0x26855cu: goto label_26855c;
        case 0x268560u: goto label_268560;
        case 0x268564u: goto label_268564;
        case 0x268568u: goto label_268568;
        case 0x26856cu: goto label_26856c;
        case 0x268570u: goto label_268570;
        case 0x268574u: goto label_268574;
        case 0x268578u: goto label_268578;
        case 0x26857cu: goto label_26857c;
        case 0x268580u: goto label_268580;
        case 0x268584u: goto label_268584;
        case 0x268588u: goto label_268588;
        case 0x26858cu: goto label_26858c;
        case 0x268590u: goto label_268590;
        case 0x268594u: goto label_268594;
        case 0x268598u: goto label_268598;
        case 0x26859cu: goto label_26859c;
        case 0x2685a0u: goto label_2685a0;
        case 0x2685a4u: goto label_2685a4;
        case 0x2685a8u: goto label_2685a8;
        case 0x2685acu: goto label_2685ac;
        case 0x2685b0u: goto label_2685b0;
        case 0x2685b4u: goto label_2685b4;
        case 0x2685b8u: goto label_2685b8;
        case 0x2685bcu: goto label_2685bc;
        case 0x2685c0u: goto label_2685c0;
        case 0x2685c4u: goto label_2685c4;
        case 0x2685c8u: goto label_2685c8;
        case 0x2685ccu: goto label_2685cc;
        case 0x2685d0u: goto label_2685d0;
        case 0x2685d4u: goto label_2685d4;
        case 0x2685d8u: goto label_2685d8;
        case 0x2685dcu: goto label_2685dc;
        case 0x2685e0u: goto label_2685e0;
        case 0x2685e4u: goto label_2685e4;
        case 0x2685e8u: goto label_2685e8;
        case 0x2685ecu: goto label_2685ec;
        case 0x2685f0u: goto label_2685f0;
        case 0x2685f4u: goto label_2685f4;
        case 0x2685f8u: goto label_2685f8;
        case 0x2685fcu: goto label_2685fc;
        case 0x268600u: goto label_268600;
        case 0x268604u: goto label_268604;
        case 0x268608u: goto label_268608;
        case 0x26860cu: goto label_26860c;
        case 0x268610u: goto label_268610;
        case 0x268614u: goto label_268614;
        case 0x268618u: goto label_268618;
        case 0x26861cu: goto label_26861c;
        case 0x268620u: goto label_268620;
        case 0x268624u: goto label_268624;
        case 0x268628u: goto label_268628;
        case 0x26862cu: goto label_26862c;
        case 0x268630u: goto label_268630;
        case 0x268634u: goto label_268634;
        case 0x268638u: goto label_268638;
        case 0x26863cu: goto label_26863c;
        case 0x268640u: goto label_268640;
        case 0x268644u: goto label_268644;
        case 0x268648u: goto label_268648;
        case 0x26864cu: goto label_26864c;
        case 0x268650u: goto label_268650;
        case 0x268654u: goto label_268654;
        case 0x268658u: goto label_268658;
        case 0x26865cu: goto label_26865c;
        case 0x268660u: goto label_268660;
        case 0x268664u: goto label_268664;
        case 0x268668u: goto label_268668;
        case 0x26866cu: goto label_26866c;
        case 0x268670u: goto label_268670;
        case 0x268674u: goto label_268674;
        case 0x268678u: goto label_268678;
        case 0x26867cu: goto label_26867c;
        case 0x268680u: goto label_268680;
        case 0x268684u: goto label_268684;
        case 0x268688u: goto label_268688;
        case 0x26868cu: goto label_26868c;
        case 0x268690u: goto label_268690;
        case 0x268694u: goto label_268694;
        case 0x268698u: goto label_268698;
        case 0x26869cu: goto label_26869c;
        case 0x2686a0u: goto label_2686a0;
        case 0x2686a4u: goto label_2686a4;
        case 0x2686a8u: goto label_2686a8;
        case 0x2686acu: goto label_2686ac;
        case 0x2686b0u: goto label_2686b0;
        case 0x2686b4u: goto label_2686b4;
        case 0x2686b8u: goto label_2686b8;
        case 0x2686bcu: goto label_2686bc;
        case 0x2686c0u: goto label_2686c0;
        case 0x2686c4u: goto label_2686c4;
        case 0x2686c8u: goto label_2686c8;
        case 0x2686ccu: goto label_2686cc;
        case 0x2686d0u: goto label_2686d0;
        case 0x2686d4u: goto label_2686d4;
        case 0x2686d8u: goto label_2686d8;
        case 0x2686dcu: goto label_2686dc;
        case 0x2686e0u: goto label_2686e0;
        case 0x2686e4u: goto label_2686e4;
        default: break;
    }

    ctx->pc = 0x268430u;

label_268430:
    // 0x268430: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x268430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_268434:
    // 0x268434: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x268434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_268438:
    // 0x268438: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x268438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_26843c:
    // 0x26843c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26843cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_268440:
    // 0x268440: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x268440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_268444:
    // 0x268444: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x268444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_268448:
    // 0x268448: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x268448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26844c:
    // 0x26844c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x26844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_268450:
    // 0x268450: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x268450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_268454:
    // 0x268454: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x268454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_268458:
    // 0x268458: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x268458u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26845c:
    // 0x26845c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26845cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_268460:
    // 0x268460: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x268460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_268464:
    // 0x268464: 0x8e1500d8  lw          $s5, 0xD8($s0)
    ctx->pc = 0x268464u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_268468:
    // 0x268468: 0xc08b4c4  jal         func_22D310
label_26846c:
    if (ctx->pc == 0x26846Cu) {
        ctx->pc = 0x26846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268468u;
        // 0x26846c: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268470u;
        goto label_268470;
    }
    ctx->pc = 0x268468u;
    SET_GPR_U32(ctx, 31, 0x268470u);
    ctx->pc = 0x26846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268468u;
    // 0x26846c: 0xa4400118  sh          $zero, 0x118($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D310u, 0x268468u, 0x268470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268470u;
label_268470:
    // 0x268470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x268470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268474:
    // 0x268474: 0xc0899aa  jal         func_2266A8
label_268478:
    if (ctx->pc == 0x268478u) {
        ctx->pc = 0x268478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268474u;
        // 0x268478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26847Cu;
        goto label_26847c;
    }
    ctx->pc = 0x268474u;
    SET_GPR_U32(ctx, 31, 0x26847Cu);
    ctx->pc = 0x268478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268474u;
    // 0x268478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x268474u, 0x26847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26847Cu;
label_26847c:
    // 0x26847c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_268480:
    // 0x268480: 0x2451df28  addiu       $s1, $v0, -0x20D8
    ctx->pc = 0x268480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958888));
label_268484:
    // 0x268484: 0xc041532  jal         func_1054C8
label_268488:
    if (ctx->pc == 0x268488u) {
        ctx->pc = 0x268488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268484u;
        // 0x268488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26848Cu;
        goto label_26848c;
    }
    ctx->pc = 0x268484u;
    SET_GPR_U32(ctx, 31, 0x26848Cu);
    ctx->pc = 0x268488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268484u;
    // 0x268488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x268484u, 0x26848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26848Cu;
label_26848c:
    // 0x26848c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26848cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268490:
    // 0x268490: 0xc041532  jal         func_1054C8
label_268494:
    if (ctx->pc == 0x268494u) {
        ctx->pc = 0x268494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268490u;
        // 0x268494: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268498u;
        goto label_268498;
    }
    ctx->pc = 0x268490u;
    SET_GPR_U32(ctx, 31, 0x268498u);
    ctx->pc = 0x268494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268490u;
    // 0x268494: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x268490u, 0x268498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268498u;
label_268498:
    // 0x268498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26849c:
    // 0x26849c: 0xc041532  jal         func_1054C8
label_2684a0:
    if (ctx->pc == 0x2684A0u) {
        ctx->pc = 0x2684A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26849Cu;
        // 0x2684a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2684A4u;
        goto label_2684a4;
    }
    ctx->pc = 0x26849Cu;
    SET_GPR_U32(ctx, 31, 0x2684A4u);
    ctx->pc = 0x2684A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26849Cu;
    // 0x2684a0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26849Cu, 0x2684A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2684A4u;
label_2684a4:
    // 0x2684a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2684a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2684a8:
    // 0x2684a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2684a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2684ac:
    // 0x2684ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2684acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2684b0:
    // 0x2684b0: 0xc040698  jal         func_101A60
label_2684b4:
    if (ctx->pc == 0x2684B4u) {
        ctx->pc = 0x2684B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684B0u;
        // 0x2684b4: 0x240602a2  addiu       $a2, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2684B8u;
        goto label_2684b8;
    }
    ctx->pc = 0x2684B0u;
    SET_GPR_U32(ctx, 31, 0x2684B8u);
    ctx->pc = 0x2684B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2684B0u;
    // 0x2684b4: 0x240602a2  addiu       $a2, $zero, 0x2A2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A60u, 0x2684B0u, 0x2684B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2684B8u;
label_2684b8:
    // 0x2684b8: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
label_2684bc:
    if (ctx->pc == 0x2684BCu) {
        ctx->pc = 0x2684BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684B8u;
        // 0x2684bc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2684C0u;
        goto label_2684c0;
    }
    ctx->pc = 0x2684B8u;
    {
        const bool branch_taken_0x2684b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2684BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684B8u;
        // 0x2684bc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2684b8) {
            ctx->pc = 0x2684DCu;
            goto label_2684dc;
        }
    }
    ctx->pc = 0x2684C0u;
label_2684c0:
    // 0x2684c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2684c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2684c4:
    // 0x2684c4: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x2684c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_2684c8:
    // 0x2684c8: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2684c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2684cc:
    // 0x2684cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2684ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2684d0:
    // 0x2684d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2684d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2684d4:
    // 0x2684d4: 0xc041b20  jal         func_106C80
label_2684d8:
    if (ctx->pc == 0x2684D8u) {
        ctx->pc = 0x2684D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684D4u;
        // 0x2684d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2684DCu;
        goto label_2684dc;
    }
    ctx->pc = 0x2684D4u;
    SET_GPR_U32(ctx, 31, 0x2684DCu);
    ctx->pc = 0x2684D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2684D4u;
    // 0x2684d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2684D4u, 0x2684DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2684DCu;
label_2684dc:
    // 0x2684dc: 0xc05d484  jal         func_175210
label_2684e0:
    if (ctx->pc == 0x2684E0u) {
        ctx->pc = 0x2684E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684DCu;
        // 0x2684e0: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2684E4u;
        goto label_2684e4;
    }
    ctx->pc = 0x2684DCu;
    SET_GPR_U32(ctx, 31, 0x2684E4u);
    ctx->pc = 0x2684E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2684DCu;
    // 0x2684e0: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2684DCu, 0x2684E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2684E4u;
label_2684e4:
    // 0x2684e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2684e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2684e8:
    // 0x2684e8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2684e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2684ec:
    // 0x2684ec: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2684ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2684f0:
    // 0x2684f0: 0xa0f809  jalr        $a1
label_2684f4:
    if (ctx->pc == 0x2684F4u) {
        ctx->pc = 0x2684F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684F0u;
        // 0x2684f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2684F8u;
        goto label_2684f8;
    }
    ctx->pc = 0x2684F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2684F8u);
        ctx->pc = 0x2684F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684F0u;
        // 0x2684f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2684F0u, 0x2684F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2684F8u;
label_2684f8:
    // 0x2684f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2684f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2684fc:
    // 0x2684fc: 0xc087016  jal         func_21C058
label_268500:
    if (ctx->pc == 0x268500u) {
        ctx->pc = 0x268500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2684FCu;
        // 0x268500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268504u;
        goto label_268504;
    }
    ctx->pc = 0x2684FCu;
    SET_GPR_U32(ctx, 31, 0x268504u);
    ctx->pc = 0x268500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2684FCu;
    // 0x268500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2684FCu, 0x268504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268504u;
label_268504:
    // 0x268504: 0x12800049  beqz        $s4, . + 4 + (0x49 << 2)
label_268508:
    if (ctx->pc == 0x268508u) {
        ctx->pc = 0x268508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268504u;
        // 0x268508: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26850Cu;
        goto label_26850c;
    }
    ctx->pc = 0x268504u;
    {
        const bool branch_taken_0x268504 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x268508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268504u;
        // 0x268508: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268504) {
            ctx->pc = 0x26862Cu;
            goto label_26862c;
        }
    }
    ctx->pc = 0x26850Cu;
label_26850c:
    // 0x26850c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26850cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268510:
    // 0x268510: 0xc08bc40  jal         func_22F100
label_268514:
    if (ctx->pc == 0x268514u) {
        ctx->pc = 0x268514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268510u;
        // 0x268514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268518u;
        goto label_268518;
    }
    ctx->pc = 0x268510u;
    SET_GPR_U32(ctx, 31, 0x268518u);
    ctx->pc = 0x268514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268510u;
    // 0x268514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F100u, 0x268510u, 0x268518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268518u;
label_268518:
    // 0x268518: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_26851c:
    if (ctx->pc == 0x26851Cu) {
        ctx->pc = 0x26851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268518u;
        // 0x26851c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268520u;
        goto label_268520;
    }
    ctx->pc = 0x268518u;
    {
        const bool branch_taken_0x268518 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268518u;
        // 0x26851c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268518) {
            ctx->pc = 0x26853Cu;
            goto label_26853c;
        }
    }
    ctx->pc = 0x268520u;
label_268520:
    // 0x268520: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x268520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_268524:
    // 0x268524: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x268524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_268528:
    // 0x268528: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x268528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26852c:
    // 0x26852c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26852cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_268530:
    // 0x268530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x268530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268534:
    // 0x268534: 0xc04159e  jal         func_105678
label_268538:
    if (ctx->pc == 0x268538u) {
        ctx->pc = 0x268538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268534u;
        // 0x268538: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26853Cu;
        goto label_26853c;
    }
    ctx->pc = 0x268534u;
    SET_GPR_U32(ctx, 31, 0x26853Cu);
    ctx->pc = 0x268538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268534u;
    // 0x268538: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x268534u, 0x26853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26853Cu;
label_26853c:
    // 0x26853c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x26853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_268540:
    // 0x268540: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x268540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_268544:
    // 0x268544: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x268544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_268548:
    // 0x268548: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_26854c:
    if (ctx->pc == 0x26854Cu) {
        ctx->pc = 0x26854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268548u;
        // 0x26854c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268550u;
        goto label_268550;
    }
    ctx->pc = 0x268548u;
    {
        const bool branch_taken_0x268548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268548u;
        // 0x26854c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268548) {
            ctx->pc = 0x268584u;
            goto label_268584;
        }
    }
    ctx->pc = 0x268550u;
label_268550:
    // 0x268550: 0xc089990  jal         func_226640
label_268554:
    if (ctx->pc == 0x268554u) {
        ctx->pc = 0x268554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268550u;
        // 0x268554: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268558u;
        goto label_268558;
    }
    ctx->pc = 0x268550u;
    SET_GPR_U32(ctx, 31, 0x268558u);
    ctx->pc = 0x268554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268550u;
    // 0x268554: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x268550u, 0x268558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268558u;
label_268558:
    // 0x268558: 0x52600052  beql        $s3, $zero, . + 4 + (0x52 << 2)
label_26855c:
    if (ctx->pc == 0x26855Cu) {
        ctx->pc = 0x26855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268558u;
        // 0x26855c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268560u;
        goto label_268560;
    }
    ctx->pc = 0x268558u;
    {
        const bool branch_taken_0x268558 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x268558) {
            ctx->pc = 0x26855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268558u;
            // 0x26855c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2686A4u;
            goto label_2686a4;
        }
    }
    ctx->pc = 0x268560u;
label_268560:
    // 0x268560: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x268560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_268564:
    // 0x268564: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x268564u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_268568:
    // 0x268568: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x268568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26856c:
    // 0x26856c: 0x40f809  jalr        $v0
label_268570:
    if (ctx->pc == 0x268570u) {
        ctx->pc = 0x268570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26856Cu;
        // 0x268570: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268574u;
        goto label_268574;
    }
    ctx->pc = 0x26856Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x268574u);
        ctx->pc = 0x268570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26856Cu;
        // 0x268570: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26856Cu, 0x268574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x268574u;
label_268574:
    // 0x268574: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x268574u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_268578:
    // 0x268578: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x268578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26857c:
    // 0x26857c: 0x10000022  b           . + 4 + (0x22 << 2)
label_268580:
    if (ctx->pc == 0x268580u) {
        ctx->pc = 0x268580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26857Cu;
        // 0x268580: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268584u;
        goto label_268584;
    }
    ctx->pc = 0x26857Cu;
    {
        const bool branch_taken_0x26857c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26857Cu;
        // 0x268580: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26857c) {
            ctx->pc = 0x268608u;
            goto label_268608;
        }
    }
    ctx->pc = 0x268584u;
label_268584:
    // 0x268584: 0xc041532  jal         func_1054C8
label_268588:
    if (ctx->pc == 0x268588u) {
        ctx->pc = 0x268588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268584u;
        // 0x268588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26858Cu;
        goto label_26858c;
    }
    ctx->pc = 0x268584u;
    SET_GPR_U32(ctx, 31, 0x26858Cu);
    ctx->pc = 0x268588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268584u;
    // 0x268588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x268584u, 0x26858Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26858Cu;
label_26858c:
    // 0x26858c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26858cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_268590:
    // 0x268590: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x268590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268594:
    // 0x268594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268598:
    // 0x268598: 0xc089990  jal         func_226640
label_26859c:
    if (ctx->pc == 0x26859Cu) {
        ctx->pc = 0x26859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268598u;
        // 0x26859c: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685A0u;
        goto label_2685a0;
    }
    ctx->pc = 0x268598u;
    SET_GPR_U32(ctx, 31, 0x2685A0u);
    ctx->pc = 0x26859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268598u;
    // 0x26859c: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x268598u, 0x2685A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2685A0u;
label_2685a0:
    // 0x2685a0: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_2685a4:
    if (ctx->pc == 0x2685A4u) {
        ctx->pc = 0x2685A8u;
        goto label_2685a8;
    }
    ctx->pc = 0x2685A0u;
    {
        const bool branch_taken_0x2685a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2685a0) {
            ctx->pc = 0x2685E0u;
            goto label_2685e0;
        }
    }
    ctx->pc = 0x2685A8u;
label_2685a8:
    // 0x2685a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2685a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2685ac:
    // 0x2685ac: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2685acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2685b0:
    // 0x2685b0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2685b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2685b4:
    // 0x2685b4: 0x40f809  jalr        $v0
label_2685b8:
    if (ctx->pc == 0x2685B8u) {
        ctx->pc = 0x2685B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685B4u;
        // 0x2685b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685BCu;
        goto label_2685bc;
    }
    ctx->pc = 0x2685B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2685BCu);
        ctx->pc = 0x2685B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685B4u;
        // 0x2685b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2685B4u, 0x2685BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2685BCu;
label_2685bc:
    // 0x2685bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2685bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2685c0:
    // 0x2685c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2685c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2685c4:
    // 0x2685c4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2685c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2685c8:
    // 0x2685c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2685c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2685cc:
    // 0x2685cc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2685ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2685d0:
    // 0x2685d0: 0x240600c6  addiu       $a2, $zero, 0xC6
    ctx->pc = 0x2685d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
label_2685d4:
    // 0x2685d4: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x2685d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2685d8:
    // 0x2685d8: 0xc041664  jal         func_105990
label_2685dc:
    if (ctx->pc == 0x2685DCu) {
        ctx->pc = 0x2685DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685D8u;
        // 0x2685dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685E0u;
        goto label_2685e0;
    }
    ctx->pc = 0x2685D8u;
    SET_GPR_U32(ctx, 31, 0x2685E0u);
    ctx->pc = 0x2685DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2685D8u;
    // 0x2685dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2685D8u, 0x2685E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2685E0u;
label_2685e0:
    // 0x2685e0: 0x52600030  beql        $s3, $zero, . + 4 + (0x30 << 2)
label_2685e4:
    if (ctx->pc == 0x2685E4u) {
        ctx->pc = 0x2685E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685E0u;
        // 0x2685e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685E8u;
        goto label_2685e8;
    }
    ctx->pc = 0x2685E0u;
    {
        const bool branch_taken_0x2685e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2685e0) {
            ctx->pc = 0x2685E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2685E0u;
            // 0x2685e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2686A4u;
            goto label_2686a4;
        }
    }
    ctx->pc = 0x2685E8u;
label_2685e8:
    // 0x2685e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2685e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2685ec:
    // 0x2685ec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2685ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2685f0:
    // 0x2685f0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2685f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2685f4:
    // 0x2685f4: 0x40f809  jalr        $v0
label_2685f8:
    if (ctx->pc == 0x2685F8u) {
        ctx->pc = 0x2685F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685F4u;
        // 0x2685f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2685FCu;
        goto label_2685fc;
    }
    ctx->pc = 0x2685F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2685FCu);
        ctx->pc = 0x2685F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2685F4u;
        // 0x2685f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2685F4u, 0x2685FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2685FCu;
label_2685fc:
    // 0x2685fc: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x2685fcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_268600:
    // 0x268600: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x268600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_268604:
    // 0x268604: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x268604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_268608:
    // 0x268608: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x268608u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26860c:
    // 0x26860c: 0x254aa1f8  addiu       $t2, $t2, -0x5E08
    ctx->pc = 0x26860cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294943224));
label_268610:
    // 0x268610: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x268610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_268614:
    // 0x268614: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x268614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_268618:
    // 0x268618: 0x240602a2  addiu       $a2, $zero, 0x2A2
    ctx->pc = 0x268618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
label_26861c:
    // 0x26861c: 0xc041664  jal         func_105990
label_268620:
    if (ctx->pc == 0x268620u) {
        ctx->pc = 0x268620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26861Cu;
        // 0x268620: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268624u;
        goto label_268624;
    }
    ctx->pc = 0x26861Cu;
    SET_GPR_U32(ctx, 31, 0x268624u);
    ctx->pc = 0x268620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26861Cu;
    // 0x268620: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26861Cu, 0x268624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268624u;
label_268624:
    // 0x268624: 0x1000001f  b           . + 4 + (0x1F << 2)
label_268628:
    if (ctx->pc == 0x268628u) {
        ctx->pc = 0x268628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268624u;
        // 0x268628: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26862Cu;
        goto label_26862c;
    }
    ctx->pc = 0x268624u;
    {
        const bool branch_taken_0x268624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268624u;
        // 0x268628: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268624) {
            ctx->pc = 0x2686A4u;
            goto label_2686a4;
        }
    }
    ctx->pc = 0x26862Cu;
label_26862c:
    // 0x26862c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268630:
    // 0x268630: 0xc089990  jal         func_226640
label_268634:
    if (ctx->pc == 0x268634u) {
        ctx->pc = 0x268634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268630u;
        // 0x268634: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268638u;
        goto label_268638;
    }
    ctx->pc = 0x268630u;
    SET_GPR_U32(ctx, 31, 0x268638u);
    ctx->pc = 0x268634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268630u;
    // 0x268634: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x268630u, 0x268638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268638u;
label_268638:
    // 0x268638: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_26863c:
    if (ctx->pc == 0x26863Cu) {
        ctx->pc = 0x26863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268638u;
        // 0x26863c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268640u;
        goto label_268640;
    }
    ctx->pc = 0x268638u;
    {
        const bool branch_taken_0x268638 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268638u;
        // 0x26863c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268638) {
            ctx->pc = 0x26865Cu;
            goto label_26865c;
        }
    }
    ctx->pc = 0x268640u;
label_268640:
    // 0x268640: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x268640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_268644:
    // 0x268644: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x268644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_268648:
    // 0x268648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x268648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26864c:
    // 0x26864c: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26864cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_268650:
    // 0x268650: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x268650u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_268654:
    // 0x268654: 0xc04159e  jal         func_105678
label_268658:
    if (ctx->pc == 0x268658u) {
        ctx->pc = 0x268658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268654u;
        // 0x268658: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26865Cu;
        goto label_26865c;
    }
    ctx->pc = 0x268654u;
    SET_GPR_U32(ctx, 31, 0x26865Cu);
    ctx->pc = 0x268658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268654u;
    // 0x268658: 0x8e0500d8  lw          $a1, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x268654u, 0x26865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26865Cu;
label_26865c:
    // 0x26865c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x26865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_268660:
    // 0x268660: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_268664:
    if (ctx->pc == 0x268664u) {
        ctx->pc = 0x268664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268660u;
        // 0x268664: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268668u;
        goto label_268668;
    }
    ctx->pc = 0x268660u;
    {
        const bool branch_taken_0x268660 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x268664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268660u;
        // 0x268664: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268660) {
            ctx->pc = 0x2686A0u;
            goto label_2686a0;
        }
    }
    ctx->pc = 0x268668u;
label_268668:
    // 0x268668: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x268668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26866c:
    // 0x26866c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26866cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_268670:
    // 0x268670: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x268670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_268674:
    // 0x268674: 0x40f809  jalr        $v0
label_268678:
    if (ctx->pc == 0x268678u) {
        ctx->pc = 0x268678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268674u;
        // 0x268678: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26867Cu;
        goto label_26867c;
    }
    ctx->pc = 0x268674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26867Cu);
        ctx->pc = 0x268678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268674u;
        // 0x268678: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268674u, 0x26867Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26867Cu;
label_26867c:
    // 0x26867c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26867cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_268680:
    // 0x268680: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x268680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_268684:
    // 0x268684: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x268684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_268688:
    // 0x268688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x268688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26868c:
    // 0x26868c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26868cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_268690:
    // 0x268690: 0x240602a2  addiu       $a2, $zero, 0x2A2
    ctx->pc = 0x268690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
label_268694:
    // 0x268694: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x268694u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_268698:
    // 0x268698: 0xc041664  jal         func_105990
label_26869c:
    if (ctx->pc == 0x26869Cu) {
        ctx->pc = 0x26869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268698u;
        // 0x26869c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2686A0u;
        goto label_2686a0;
    }
    ctx->pc = 0x268698u;
    SET_GPR_U32(ctx, 31, 0x2686A0u);
    ctx->pc = 0x26869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268698u;
    // 0x26869c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x268698u, 0x2686A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686A0u;
label_2686a0:
    // 0x2686a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2686a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2686a4:
    // 0x2686a4: 0xc05d53a  jal         func_1754E8
label_2686a8:
    if (ctx->pc == 0x2686A8u) {
        ctx->pc = 0x2686A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686A4u;
        // 0x2686a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2686ACu;
        goto label_2686ac;
    }
    ctx->pc = 0x2686A4u;
    SET_GPR_U32(ctx, 31, 0x2686ACu);
    ctx->pc = 0x2686A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2686A4u;
    // 0x2686a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2686A4u, 0x2686ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686ACu;
label_2686ac:
    // 0x2686ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2686acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2686b0:
    // 0x2686b0: 0xc05d4f6  jal         func_1753D8
label_2686b4:
    if (ctx->pc == 0x2686B4u) {
        ctx->pc = 0x2686B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686B0u;
        // 0x2686b4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2686B8u;
        goto label_2686b8;
    }
    ctx->pc = 0x2686B0u;
    SET_GPR_U32(ctx, 31, 0x2686B8u);
    ctx->pc = 0x2686B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2686B0u;
    // 0x2686b4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2686B0u, 0x2686B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686B8u;
label_2686b8:
    // 0x2686b8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2686b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2686bc:
    // 0x2686bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2686bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2686c0:
    // 0x2686c0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2686c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2686c4:
    // 0x2686c4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2686c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2686c8:
    // 0x2686c8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2686c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2686cc:
    // 0x2686cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2686ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2686d0:
    // 0x2686d0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2686d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2686d4:
    // 0x2686d4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2686d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2686d8:
    // 0x2686d8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2686d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2686dc:
    // 0x2686dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2686dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2686e0:
    // 0x2686e0: 0x3e00008  jr          $ra
label_2686e4:
    if (ctx->pc == 0x2686E4u) {
        ctx->pc = 0x2686E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686E0u;
        // 0x2686e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2686E8u;
        goto label_fallthrough_0x2686e0;
    }
    ctx->pc = 0x2686E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2686E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2686E0u;
        // 0x2686e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2686E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2686e0:
    ctx->pc = 0x2686E8u;
}
