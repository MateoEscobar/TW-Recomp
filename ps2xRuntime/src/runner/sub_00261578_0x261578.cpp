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

// Function: sub_00261578
// Address: 0x261578 - 0x2617f8
void sub_00261578_0x261578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261578_0x261578");
#endif

    switch (ctx->pc) {
        case 0x261578u: goto label_261578;
        case 0x26157cu: goto label_26157c;
        case 0x261580u: goto label_261580;
        case 0x261584u: goto label_261584;
        case 0x261588u: goto label_261588;
        case 0x26158cu: goto label_26158c;
        case 0x261590u: goto label_261590;
        case 0x261594u: goto label_261594;
        case 0x261598u: goto label_261598;
        case 0x26159cu: goto label_26159c;
        case 0x2615a0u: goto label_2615a0;
        case 0x2615a4u: goto label_2615a4;
        case 0x2615a8u: goto label_2615a8;
        case 0x2615acu: goto label_2615ac;
        case 0x2615b0u: goto label_2615b0;
        case 0x2615b4u: goto label_2615b4;
        case 0x2615b8u: goto label_2615b8;
        case 0x2615bcu: goto label_2615bc;
        case 0x2615c0u: goto label_2615c0;
        case 0x2615c4u: goto label_2615c4;
        case 0x2615c8u: goto label_2615c8;
        case 0x2615ccu: goto label_2615cc;
        case 0x2615d0u: goto label_2615d0;
        case 0x2615d4u: goto label_2615d4;
        case 0x2615d8u: goto label_2615d8;
        case 0x2615dcu: goto label_2615dc;
        case 0x2615e0u: goto label_2615e0;
        case 0x2615e4u: goto label_2615e4;
        case 0x2615e8u: goto label_2615e8;
        case 0x2615ecu: goto label_2615ec;
        case 0x2615f0u: goto label_2615f0;
        case 0x2615f4u: goto label_2615f4;
        case 0x2615f8u: goto label_2615f8;
        case 0x2615fcu: goto label_2615fc;
        case 0x261600u: goto label_261600;
        case 0x261604u: goto label_261604;
        case 0x261608u: goto label_261608;
        case 0x26160cu: goto label_26160c;
        case 0x261610u: goto label_261610;
        case 0x261614u: goto label_261614;
        case 0x261618u: goto label_261618;
        case 0x26161cu: goto label_26161c;
        case 0x261620u: goto label_261620;
        case 0x261624u: goto label_261624;
        case 0x261628u: goto label_261628;
        case 0x26162cu: goto label_26162c;
        case 0x261630u: goto label_261630;
        case 0x261634u: goto label_261634;
        case 0x261638u: goto label_261638;
        case 0x26163cu: goto label_26163c;
        case 0x261640u: goto label_261640;
        case 0x261644u: goto label_261644;
        case 0x261648u: goto label_261648;
        case 0x26164cu: goto label_26164c;
        case 0x261650u: goto label_261650;
        case 0x261654u: goto label_261654;
        case 0x261658u: goto label_261658;
        case 0x26165cu: goto label_26165c;
        case 0x261660u: goto label_261660;
        case 0x261664u: goto label_261664;
        case 0x261668u: goto label_261668;
        case 0x26166cu: goto label_26166c;
        case 0x261670u: goto label_261670;
        case 0x261674u: goto label_261674;
        case 0x261678u: goto label_261678;
        case 0x26167cu: goto label_26167c;
        case 0x261680u: goto label_261680;
        case 0x261684u: goto label_261684;
        case 0x261688u: goto label_261688;
        case 0x26168cu: goto label_26168c;
        case 0x261690u: goto label_261690;
        case 0x261694u: goto label_261694;
        case 0x261698u: goto label_261698;
        case 0x26169cu: goto label_26169c;
        case 0x2616a0u: goto label_2616a0;
        case 0x2616a4u: goto label_2616a4;
        case 0x2616a8u: goto label_2616a8;
        case 0x2616acu: goto label_2616ac;
        case 0x2616b0u: goto label_2616b0;
        case 0x2616b4u: goto label_2616b4;
        case 0x2616b8u: goto label_2616b8;
        case 0x2616bcu: goto label_2616bc;
        case 0x2616c0u: goto label_2616c0;
        case 0x2616c4u: goto label_2616c4;
        case 0x2616c8u: goto label_2616c8;
        case 0x2616ccu: goto label_2616cc;
        case 0x2616d0u: goto label_2616d0;
        case 0x2616d4u: goto label_2616d4;
        case 0x2616d8u: goto label_2616d8;
        case 0x2616dcu: goto label_2616dc;
        case 0x2616e0u: goto label_2616e0;
        case 0x2616e4u: goto label_2616e4;
        case 0x2616e8u: goto label_2616e8;
        case 0x2616ecu: goto label_2616ec;
        case 0x2616f0u: goto label_2616f0;
        case 0x2616f4u: goto label_2616f4;
        case 0x2616f8u: goto label_2616f8;
        case 0x2616fcu: goto label_2616fc;
        case 0x261700u: goto label_261700;
        case 0x261704u: goto label_261704;
        case 0x261708u: goto label_261708;
        case 0x26170cu: goto label_26170c;
        case 0x261710u: goto label_261710;
        case 0x261714u: goto label_261714;
        case 0x261718u: goto label_261718;
        case 0x26171cu: goto label_26171c;
        case 0x261720u: goto label_261720;
        case 0x261724u: goto label_261724;
        case 0x261728u: goto label_261728;
        case 0x26172cu: goto label_26172c;
        case 0x261730u: goto label_261730;
        case 0x261734u: goto label_261734;
        case 0x261738u: goto label_261738;
        case 0x26173cu: goto label_26173c;
        case 0x261740u: goto label_261740;
        case 0x261744u: goto label_261744;
        case 0x261748u: goto label_261748;
        case 0x26174cu: goto label_26174c;
        case 0x261750u: goto label_261750;
        case 0x261754u: goto label_261754;
        case 0x261758u: goto label_261758;
        case 0x26175cu: goto label_26175c;
        case 0x261760u: goto label_261760;
        case 0x261764u: goto label_261764;
        case 0x261768u: goto label_261768;
        case 0x26176cu: goto label_26176c;
        case 0x261770u: goto label_261770;
        case 0x261774u: goto label_261774;
        case 0x261778u: goto label_261778;
        case 0x26177cu: goto label_26177c;
        case 0x261780u: goto label_261780;
        case 0x261784u: goto label_261784;
        case 0x261788u: goto label_261788;
        case 0x26178cu: goto label_26178c;
        case 0x261790u: goto label_261790;
        case 0x261794u: goto label_261794;
        case 0x261798u: goto label_261798;
        case 0x26179cu: goto label_26179c;
        case 0x2617a0u: goto label_2617a0;
        case 0x2617a4u: goto label_2617a4;
        case 0x2617a8u: goto label_2617a8;
        case 0x2617acu: goto label_2617ac;
        case 0x2617b0u: goto label_2617b0;
        case 0x2617b4u: goto label_2617b4;
        case 0x2617b8u: goto label_2617b8;
        case 0x2617bcu: goto label_2617bc;
        case 0x2617c0u: goto label_2617c0;
        case 0x2617c4u: goto label_2617c4;
        case 0x2617c8u: goto label_2617c8;
        case 0x2617ccu: goto label_2617cc;
        case 0x2617d0u: goto label_2617d0;
        case 0x2617d4u: goto label_2617d4;
        case 0x2617d8u: goto label_2617d8;
        case 0x2617dcu: goto label_2617dc;
        case 0x2617e0u: goto label_2617e0;
        case 0x2617e4u: goto label_2617e4;
        case 0x2617e8u: goto label_2617e8;
        case 0x2617ecu: goto label_2617ec;
        case 0x2617f0u: goto label_2617f0;
        case 0x2617f4u: goto label_2617f4;
        default: break;
    }

    ctx->pc = 0x261578u;

label_261578:
    // 0x261578: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x261578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_26157c:
    // 0x26157c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x26157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_261580:
    // 0x261580: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x261580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_261584:
    // 0x261584: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x261584u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_261588:
    // 0x261588: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x261588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_26158c:
    // 0x26158c: 0x2610dd30  addiu       $s0, $s0, -0x22D0
    ctx->pc = 0x26158cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958384));
label_261590:
    // 0x261590: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x261590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_261594:
    // 0x261594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x261594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261598:
    // 0x261598: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x261598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26159c:
    // 0x26159c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x26159cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2615a0:
    // 0x2615a0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2615a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_2615a4:
    // 0x2615a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2615a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2615a8:
    // 0x2615a8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2615a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_2615ac:
    // 0x2615ac: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2615acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_2615b0:
    // 0x2615b0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2615b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2615b4:
    // 0x2615b4: 0x241e0268  addiu       $fp, $zero, 0x268
    ctx->pc = 0x2615b4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
label_2615b8:
    // 0x2615b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2615b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2615bc:
    // 0x2615bc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2615bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_2615c0:
    // 0x2615c0: 0xc041532  jal         func_1054C8
label_2615c4:
    if (ctx->pc == 0x2615C4u) {
        ctx->pc = 0x2615C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615C0u;
        // 0x2615c4: 0x8e3600d8  lw          $s6, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2615C8u;
        goto label_2615c8;
    }
    ctx->pc = 0x2615C0u;
    SET_GPR_U32(ctx, 31, 0x2615C8u);
    ctx->pc = 0x2615C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2615C0u;
    // 0x2615c4: 0x8e3600d8  lw          $s6, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2615C0u, 0x2615C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2615C8u;
label_2615c8:
    // 0x2615c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2615c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2615cc:
    // 0x2615cc: 0xc041532  jal         func_1054C8
label_2615d0:
    if (ctx->pc == 0x2615D0u) {
        ctx->pc = 0x2615D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615CCu;
        // 0x2615d0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2615D4u;
        goto label_2615d4;
    }
    ctx->pc = 0x2615CCu;
    SET_GPR_U32(ctx, 31, 0x2615D4u);
    ctx->pc = 0x2615D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2615CCu;
    // 0x2615d0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2615CCu, 0x2615D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2615D4u;
label_2615d4:
    // 0x2615d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2615d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2615d8:
    // 0x2615d8: 0xc041532  jal         func_1054C8
label_2615dc:
    if (ctx->pc == 0x2615DCu) {
        ctx->pc = 0x2615DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615D8u;
        // 0x2615dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2615E0u;
        goto label_2615e0;
    }
    ctx->pc = 0x2615D8u;
    SET_GPR_U32(ctx, 31, 0x2615E0u);
    ctx->pc = 0x2615DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2615D8u;
    // 0x2615dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2615D8u, 0x2615E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2615E0u;
label_2615e0:
    // 0x2615e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2615e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2615e4:
    // 0x2615e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2615e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2615e8:
    // 0x2615e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2615e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2615ec:
    // 0x2615ec: 0xc099cb4  jal         func_2672D0
label_2615f0:
    if (ctx->pc == 0x2615F0u) {
        ctx->pc = 0x2615F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615ECu;
        // 0x2615f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2615F4u;
        goto label_2615f4;
    }
    ctx->pc = 0x2615ECu;
    SET_GPR_U32(ctx, 31, 0x2615F4u);
    ctx->pc = 0x2615F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2615ECu;
    // 0x2615f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x2615ECu, 0x2615F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2615F4u;
label_2615f4:
    // 0x2615f4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x2615f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_2615f8:
    // 0x2615f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2615f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2615fc:
    // 0x2615fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2615fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_261600:
    // 0x261600: 0xc095358  jal         func_254D60
label_261604:
    if (ctx->pc == 0x261604u) {
        ctx->pc = 0x261604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261600u;
        // 0x261604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261608u;
        goto label_261608;
    }
    ctx->pc = 0x261600u;
    SET_GPR_U32(ctx, 31, 0x261608u);
    ctx->pc = 0x261604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261600u;
    // 0x261604: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x261600u, 0x261608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261608u;
label_261608:
    // 0x261608: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x261608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_26160c:
    // 0x26160c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26160cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_261610:
    // 0x261610: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x261610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_261614:
    // 0x261614: 0xc0899ae  jal         func_2266B8
label_261618:
    if (ctx->pc == 0x261618u) {
        ctx->pc = 0x261618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261614u;
        // 0x261618: 0x30570003  andi        $s7, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26161Cu;
        goto label_26161c;
    }
    ctx->pc = 0x261614u;
    SET_GPR_U32(ctx, 31, 0x26161Cu);
    ctx->pc = 0x261618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261614u;
    // 0x261618: 0x30570003  andi        $s7, $v0, 0x3 (Delay Slot)
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x261614u, 0x26161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26161Cu;
label_26161c:
    // 0x26161c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26161cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261620:
    // 0x261620: 0xc040654  jal         func_101950
label_261624:
    if (ctx->pc == 0x261624u) {
        ctx->pc = 0x261624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261620u;
        // 0x261624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261628u;
        goto label_261628;
    }
    ctx->pc = 0x261620u;
    SET_GPR_U32(ctx, 31, 0x261628u);
    ctx->pc = 0x261624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261620u;
    // 0x261624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101950u, 0x261620u, 0x261628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261628u;
label_261628:
    // 0x261628: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_26162c:
    if (ctx->pc == 0x26162Cu) {
        ctx->pc = 0x26162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261628u;
        // 0x26162c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x261630u;
        goto label_261630;
    }
    ctx->pc = 0x261628u;
    {
        const bool branch_taken_0x261628 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26162Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261628u;
        // 0x26162c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261628) {
            ctx->pc = 0x261658u;
            goto label_261658;
        }
    }
    ctx->pc = 0x261630u;
label_261630:
    // 0x261630: 0xc08c6a0  jal         func_231A80
label_261634:
    if (ctx->pc == 0x261634u) {
        ctx->pc = 0x261634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261630u;
        // 0x261634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261638u;
        goto label_261638;
    }
    ctx->pc = 0x261630u;
    SET_GPR_U32(ctx, 31, 0x261638u);
    ctx->pc = 0x261634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261630u;
    // 0x261634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x261630u, 0x261638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261638u;
label_261638:
    // 0x261638: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x261638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26163c:
    // 0x26163c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_261640:
    if (ctx->pc == 0x261640u) {
        ctx->pc = 0x261644u;
        goto label_261644;
    }
    ctx->pc = 0x26163Cu;
    {
        const bool branch_taken_0x26163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26163c) {
            ctx->pc = 0x261658u;
            goto label_261658;
        }
    }
    ctx->pc = 0x261644u;
label_261644:
    // 0x261644: 0xc08c6a0  jal         func_231A80
label_261648:
    if (ctx->pc == 0x261648u) {
        ctx->pc = 0x261648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261644u;
        // 0x261648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26164Cu;
        goto label_26164c;
    }
    ctx->pc = 0x261644u;
    SET_GPR_U32(ctx, 31, 0x26164Cu);
    ctx->pc = 0x261648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261644u;
    // 0x261648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x261644u, 0x26164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26164Cu;
label_26164c:
    // 0x26164c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x26164cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_261650:
    // 0x261650: 0x24030274  addiu       $v1, $zero, 0x274
    ctx->pc = 0x261650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 628));
label_261654:
    // 0x261654: 0x62f00a  movz        $fp, $v1, $v0
    ctx->pc = 0x261654u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
label_261658:
    // 0x261658: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x261658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_26165c:
    // 0x26165c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26165cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_261660:
    // 0x261660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x261660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_261664:
    // 0x261664: 0x0  nop
    ctx->pc = 0x261664u;
    // NOP
label_261668:
    // 0x261668: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x261668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26166c:
    // 0x26166c: 0x0  nop
    ctx->pc = 0x26166cu;
    // NOP
label_261670:
    // 0x261670: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_261674:
    if (ctx->pc == 0x261674u) {
        ctx->pc = 0x261674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261670u;
        // 0x261674: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261678u;
        goto label_261678;
    }
    ctx->pc = 0x261670u;
    {
        const bool branch_taken_0x261670 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x261674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261670u;
        // 0x261674: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261670) {
            ctx->pc = 0x2616D8u;
            goto label_2616d8;
        }
    }
    ctx->pc = 0x261678u;
label_261678:
    // 0x261678: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x261678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_26167c:
    // 0x26167c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26167cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_261680:
    // 0x261680: 0x0  nop
    ctx->pc = 0x261680u;
    // NOP
label_261684:
    // 0x261684: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x261684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_261688:
    // 0x261688: 0x0  nop
    ctx->pc = 0x261688u;
    // NOP
label_26168c:
    // 0x26168c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_261690:
    if (ctx->pc == 0x261690u) {
        ctx->pc = 0x261690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26168Cu;
        // 0x261690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261694u;
        goto label_261694;
    }
    ctx->pc = 0x26168Cu;
    {
        const bool branch_taken_0x26168c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x261690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26168Cu;
        // 0x261690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26168c) {
            ctx->pc = 0x2616A8u;
            goto label_2616a8;
        }
    }
    ctx->pc = 0x261694u;
label_261694:
    // 0x261694: 0x3c013e66  lui         $at, 0x3E66
    ctx->pc = 0x261694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15974 << 16));
label_261698:
    // 0x261698: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x261698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_26169c:
    // 0x26169c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26169cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2616a0:
    // 0x2616a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2616a4:
    if (ctx->pc == 0x2616A4u) {
        ctx->pc = 0x2616A8u;
        goto label_2616a8;
    }
    ctx->pc = 0x2616A0u;
    {
        const bool branch_taken_0x2616a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2616a0) {
            ctx->pc = 0x2616B8u;
            goto label_2616b8;
        }
    }
    ctx->pc = 0x2616A8u;
label_2616a8:
    // 0x2616a8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2616a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_2616ac:
    // 0x2616ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2616acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2616b0:
    // 0x2616b0: 0x0  nop
    ctx->pc = 0x2616b0u;
    // NOP
label_2616b4:
    // 0x2616b4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2616b4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2616b8:
    // 0x2616b8: 0xc040680  jal         func_101A00
label_2616bc:
    if (ctx->pc == 0x2616BCu) {
        ctx->pc = 0x2616BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616B8u;
        // 0x2616bc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616C0u;
        goto label_2616c0;
    }
    ctx->pc = 0x2616B8u;
    SET_GPR_U32(ctx, 31, 0x2616C0u);
    ctx->pc = 0x2616BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2616B8u;
    // 0x2616bc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2616B8u, 0x2616C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2616C0u;
label_2616c0:
    // 0x2616c0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2616c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2616c4:
    // 0x2616c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2616c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2616c8:
    // 0x2616c8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2616c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2616cc:
    // 0x2616cc: 0xc09a772  jal         func_269DC8
label_2616d0:
    if (ctx->pc == 0x2616D0u) {
        ctx->pc = 0x2616D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616CCu;
        // 0x2616d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616D4u;
        goto label_2616d4;
    }
    ctx->pc = 0x2616CCu;
    SET_GPR_U32(ctx, 31, 0x2616D4u);
    ctx->pc = 0x2616D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2616CCu;
    // 0x2616d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269DC8u, 0x2616CCu, 0x2616D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2616D4u;
label_2616d4:
    // 0x2616d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2616d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2616d8:
    // 0x2616d8: 0xc0899d8  jal         func_226760
label_2616dc:
    if (ctx->pc == 0x2616DCu) {
        ctx->pc = 0x2616DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616D8u;
        // 0x2616dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616E0u;
        goto label_2616e0;
    }
    ctx->pc = 0x2616D8u;
    SET_GPR_U32(ctx, 31, 0x2616E0u);
    ctx->pc = 0x2616DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2616D8u;
    // 0x2616dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226760u, 0x2616D8u, 0x2616E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2616E0u;
label_2616e0:
    // 0x2616e0: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_2616e4:
    if (ctx->pc == 0x2616E4u) {
        ctx->pc = 0x2616E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616E0u;
        // 0x2616e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2616E8u;
        goto label_2616e8;
    }
    ctx->pc = 0x2616E0u;
    {
        const bool branch_taken_0x2616e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2616E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616E0u;
        // 0x2616e4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616e0) {
            ctx->pc = 0x261700u;
            goto label_261700;
        }
    }
    ctx->pc = 0x2616E8u;
label_2616e8:
    // 0x2616e8: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2616e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2616ec:
    // 0x2616ec: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2616ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2616f0:
    // 0x2616f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2616f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2616f4:
    // 0x2616f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2616f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2616f8:
    // 0x2616f8: 0xc041b20  jal         func_106C80
label_2616fc:
    if (ctx->pc == 0x2616FCu) {
        ctx->pc = 0x2616FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616F8u;
        // 0x2616fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261700u;
        goto label_261700;
    }
    ctx->pc = 0x2616F8u;
    SET_GPR_U32(ctx, 31, 0x261700u);
    ctx->pc = 0x2616FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2616F8u;
    // 0x2616fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2616F8u, 0x261700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261700u;
label_261700:
    // 0x261700: 0xc05d484  jal         func_175210
label_261704:
    if (ctx->pc == 0x261704u) {
        ctx->pc = 0x261704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261700u;
        // 0x261704: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261708u;
        goto label_261708;
    }
    ctx->pc = 0x261700u;
    SET_GPR_U32(ctx, 31, 0x261708u);
    ctx->pc = 0x261704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261700u;
    // 0x261704: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x261700u, 0x261708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261708u;
label_261708:
    // 0x261708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26170c:
    // 0x26170c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26170cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_261710:
    // 0x261710: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x261710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_261714:
    // 0x261714: 0xa0f809  jalr        $a1
label_261718:
    if (ctx->pc == 0x261718u) {
        ctx->pc = 0x261718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261714u;
        // 0x261718: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26171Cu;
        goto label_26171c;
    }
    ctx->pc = 0x261714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26171Cu);
        ctx->pc = 0x261718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261714u;
        // 0x261718: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261714u, 0x26171Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26171Cu;
label_26171c:
    // 0x26171c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26171cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261720:
    // 0x261720: 0xc087016  jal         func_21C058
label_261724:
    if (ctx->pc == 0x261724u) {
        ctx->pc = 0x261724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261720u;
        // 0x261724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261728u;
        goto label_261728;
    }
    ctx->pc = 0x261720u;
    SET_GPR_U32(ctx, 31, 0x261728u);
    ctx->pc = 0x261724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261720u;
    // 0x261724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x261720u, 0x261728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261728u;
label_261728:
    // 0x261728: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_26172c:
    if (ctx->pc == 0x26172Cu) {
        ctx->pc = 0x26172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261728u;
        // 0x26172c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261730u;
        goto label_261730;
    }
    ctx->pc = 0x261728u;
    {
        const bool branch_taken_0x261728 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261728u;
        // 0x26172c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261728) {
            ctx->pc = 0x26174Cu;
            goto label_26174c;
        }
    }
    ctx->pc = 0x261730u;
label_261730:
    // 0x261730: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x261730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_261734:
    // 0x261734: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x261734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_261738:
    // 0x261738: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x261738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26173c:
    // 0x26173c: 0x8c660084  lw          $a2, 0x84($v1)
    ctx->pc = 0x26173cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_261740:
    // 0x261740: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x261740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261744:
    // 0x261744: 0xc04159e  jal         func_105678
label_261748:
    if (ctx->pc == 0x261748u) {
        ctx->pc = 0x261748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261744u;
        // 0x261748: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26174Cu;
        goto label_26174c;
    }
    ctx->pc = 0x261744u;
    SET_GPR_U32(ctx, 31, 0x26174Cu);
    ctx->pc = 0x261748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261744u;
    // 0x261748: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x261744u, 0x26174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26174Cu;
label_26174c:
    // 0x26174c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26174cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_261750:
    // 0x261750: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x261750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_261754:
    // 0x261754: 0x12a00012  beqz        $s5, . + 4 + (0x12 << 2)
label_261758:
    if (ctx->pc == 0x261758u) {
        ctx->pc = 0x261758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261754u;
        // 0x261758: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26175Cu;
        goto label_26175c;
    }
    ctx->pc = 0x261754u;
    {
        const bool branch_taken_0x261754 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x261758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261754u;
        // 0x261758: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261754) {
            ctx->pc = 0x2617A0u;
            goto label_2617a0;
        }
    }
    ctx->pc = 0x26175Cu;
label_26175c:
    // 0x26175c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26175cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_261760:
    // 0x261760: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x261760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_261764:
    // 0x261764: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x261764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_261768:
    // 0x261768: 0x40f809  jalr        $v0
label_26176c:
    if (ctx->pc == 0x26176Cu) {
        ctx->pc = 0x26176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261768u;
        // 0x26176c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261770u;
        goto label_261770;
    }
    ctx->pc = 0x261768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261770u);
        ctx->pc = 0x26176Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261768u;
        // 0x26176c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261768u, 0x261770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261770u;
label_261770:
    // 0x261770: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x261770u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_261774:
    // 0x261774: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x261774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_261778:
    // 0x261778: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x261778u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_26177c:
    // 0x26177c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26177cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_261780:
    // 0x261780: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x261780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_261784:
    // 0x261784: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x261784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_261788:
    // 0x261788: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x261788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26178c:
    // 0x26178c: 0x254aadf0  addiu       $t2, $t2, -0x5210
    ctx->pc = 0x26178cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946288));
label_261790:
    // 0x261790: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x261790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_261794:
    // 0x261794: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x261794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_261798:
    // 0x261798: 0xc041664  jal         func_105990
label_26179c:
    if (ctx->pc == 0x26179Cu) {
        ctx->pc = 0x26179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261798u;
        // 0x26179c: 0x24081000  addiu       $t0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617A0u;
        goto label_2617a0;
    }
    ctx->pc = 0x261798u;
    SET_GPR_U32(ctx, 31, 0x2617A0u);
    ctx->pc = 0x26179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261798u;
    // 0x26179c: 0x24081000  addiu       $t0, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x261798u, 0x2617A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2617A0u;
label_2617a0:
    // 0x2617a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2617a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2617a4:
    // 0x2617a4: 0xc05d53a  jal         func_1754E8
label_2617a8:
    if (ctx->pc == 0x2617A8u) {
        ctx->pc = 0x2617A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617A4u;
        // 0x2617a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617ACu;
        goto label_2617ac;
    }
    ctx->pc = 0x2617A4u;
    SET_GPR_U32(ctx, 31, 0x2617ACu);
    ctx->pc = 0x2617A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2617A4u;
    // 0x2617a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2617A4u, 0x2617ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2617ACu;
label_2617ac:
    // 0x2617ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2617acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2617b0:
    // 0x2617b0: 0xc05d4f6  jal         func_1753D8
label_2617b4:
    if (ctx->pc == 0x2617B4u) {
        ctx->pc = 0x2617B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617B0u;
        // 0x2617b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617B8u;
        goto label_2617b8;
    }
    ctx->pc = 0x2617B0u;
    SET_GPR_U32(ctx, 31, 0x2617B8u);
    ctx->pc = 0x2617B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2617B0u;
    // 0x2617b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2617B0u, 0x2617B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2617B8u;
label_2617b8:
    // 0x2617b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2617b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2617bc:
    // 0x2617bc: 0xc089990  jal         func_226640
label_2617c0:
    if (ctx->pc == 0x2617C0u) {
        ctx->pc = 0x2617C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617BCu;
        // 0x2617c0: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617C4u;
        goto label_2617c4;
    }
    ctx->pc = 0x2617BCu;
    SET_GPR_U32(ctx, 31, 0x2617C4u);
    ctx->pc = 0x2617C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2617BCu;
    // 0x2617c0: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2617BCu, 0x2617C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2617C4u;
label_2617c4:
    // 0x2617c4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2617c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2617c8:
    // 0x2617c8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2617c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2617cc:
    // 0x2617cc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2617ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2617d0:
    // 0x2617d0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2617d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2617d4:
    // 0x2617d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2617d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2617d8:
    // 0x2617d8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2617d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2617dc:
    // 0x2617dc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2617dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2617e0:
    // 0x2617e0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2617e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2617e4:
    // 0x2617e4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2617e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2617e8:
    // 0x2617e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2617e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2617ec:
    // 0x2617ec: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2617ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2617f0:
    // 0x2617f0: 0x3e00008  jr          $ra
label_2617f4:
    if (ctx->pc == 0x2617F4u) {
        ctx->pc = 0x2617F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617F0u;
        // 0x2617f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2617F8u;
        goto label_fallthrough_0x2617f0;
    }
    ctx->pc = 0x2617F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2617F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617F0u;
        // 0x2617f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2617F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2617f0:
    ctx->pc = 0x2617F8u;
}
