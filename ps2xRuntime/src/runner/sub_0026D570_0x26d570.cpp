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

// Function: sub_0026D570
// Address: 0x26d570 - 0x26d8c8
void sub_0026D570_0x26d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D570_0x26d570");
#endif

    switch (ctx->pc) {
        case 0x26d570u: goto label_26d570;
        case 0x26d574u: goto label_26d574;
        case 0x26d578u: goto label_26d578;
        case 0x26d57cu: goto label_26d57c;
        case 0x26d580u: goto label_26d580;
        case 0x26d584u: goto label_26d584;
        case 0x26d588u: goto label_26d588;
        case 0x26d58cu: goto label_26d58c;
        case 0x26d590u: goto label_26d590;
        case 0x26d594u: goto label_26d594;
        case 0x26d598u: goto label_26d598;
        case 0x26d59cu: goto label_26d59c;
        case 0x26d5a0u: goto label_26d5a0;
        case 0x26d5a4u: goto label_26d5a4;
        case 0x26d5a8u: goto label_26d5a8;
        case 0x26d5acu: goto label_26d5ac;
        case 0x26d5b0u: goto label_26d5b0;
        case 0x26d5b4u: goto label_26d5b4;
        case 0x26d5b8u: goto label_26d5b8;
        case 0x26d5bcu: goto label_26d5bc;
        case 0x26d5c0u: goto label_26d5c0;
        case 0x26d5c4u: goto label_26d5c4;
        case 0x26d5c8u: goto label_26d5c8;
        case 0x26d5ccu: goto label_26d5cc;
        case 0x26d5d0u: goto label_26d5d0;
        case 0x26d5d4u: goto label_26d5d4;
        case 0x26d5d8u: goto label_26d5d8;
        case 0x26d5dcu: goto label_26d5dc;
        case 0x26d5e0u: goto label_26d5e0;
        case 0x26d5e4u: goto label_26d5e4;
        case 0x26d5e8u: goto label_26d5e8;
        case 0x26d5ecu: goto label_26d5ec;
        case 0x26d5f0u: goto label_26d5f0;
        case 0x26d5f4u: goto label_26d5f4;
        case 0x26d5f8u: goto label_26d5f8;
        case 0x26d5fcu: goto label_26d5fc;
        case 0x26d600u: goto label_26d600;
        case 0x26d604u: goto label_26d604;
        case 0x26d608u: goto label_26d608;
        case 0x26d60cu: goto label_26d60c;
        case 0x26d610u: goto label_26d610;
        case 0x26d614u: goto label_26d614;
        case 0x26d618u: goto label_26d618;
        case 0x26d61cu: goto label_26d61c;
        case 0x26d620u: goto label_26d620;
        case 0x26d624u: goto label_26d624;
        case 0x26d628u: goto label_26d628;
        case 0x26d62cu: goto label_26d62c;
        case 0x26d630u: goto label_26d630;
        case 0x26d634u: goto label_26d634;
        case 0x26d638u: goto label_26d638;
        case 0x26d63cu: goto label_26d63c;
        case 0x26d640u: goto label_26d640;
        case 0x26d644u: goto label_26d644;
        case 0x26d648u: goto label_26d648;
        case 0x26d64cu: goto label_26d64c;
        case 0x26d650u: goto label_26d650;
        case 0x26d654u: goto label_26d654;
        case 0x26d658u: goto label_26d658;
        case 0x26d65cu: goto label_26d65c;
        case 0x26d660u: goto label_26d660;
        case 0x26d664u: goto label_26d664;
        case 0x26d668u: goto label_26d668;
        case 0x26d66cu: goto label_26d66c;
        case 0x26d670u: goto label_26d670;
        case 0x26d674u: goto label_26d674;
        case 0x26d678u: goto label_26d678;
        case 0x26d67cu: goto label_26d67c;
        case 0x26d680u: goto label_26d680;
        case 0x26d684u: goto label_26d684;
        case 0x26d688u: goto label_26d688;
        case 0x26d68cu: goto label_26d68c;
        case 0x26d690u: goto label_26d690;
        case 0x26d694u: goto label_26d694;
        case 0x26d698u: goto label_26d698;
        case 0x26d69cu: goto label_26d69c;
        case 0x26d6a0u: goto label_26d6a0;
        case 0x26d6a4u: goto label_26d6a4;
        case 0x26d6a8u: goto label_26d6a8;
        case 0x26d6acu: goto label_26d6ac;
        case 0x26d6b0u: goto label_26d6b0;
        case 0x26d6b4u: goto label_26d6b4;
        case 0x26d6b8u: goto label_26d6b8;
        case 0x26d6bcu: goto label_26d6bc;
        case 0x26d6c0u: goto label_26d6c0;
        case 0x26d6c4u: goto label_26d6c4;
        case 0x26d6c8u: goto label_26d6c8;
        case 0x26d6ccu: goto label_26d6cc;
        case 0x26d6d0u: goto label_26d6d0;
        case 0x26d6d4u: goto label_26d6d4;
        case 0x26d6d8u: goto label_26d6d8;
        case 0x26d6dcu: goto label_26d6dc;
        case 0x26d6e0u: goto label_26d6e0;
        case 0x26d6e4u: goto label_26d6e4;
        case 0x26d6e8u: goto label_26d6e8;
        case 0x26d6ecu: goto label_26d6ec;
        case 0x26d6f0u: goto label_26d6f0;
        case 0x26d6f4u: goto label_26d6f4;
        case 0x26d6f8u: goto label_26d6f8;
        case 0x26d6fcu: goto label_26d6fc;
        case 0x26d700u: goto label_26d700;
        case 0x26d704u: goto label_26d704;
        case 0x26d708u: goto label_26d708;
        case 0x26d70cu: goto label_26d70c;
        case 0x26d710u: goto label_26d710;
        case 0x26d714u: goto label_26d714;
        case 0x26d718u: goto label_26d718;
        case 0x26d71cu: goto label_26d71c;
        case 0x26d720u: goto label_26d720;
        case 0x26d724u: goto label_26d724;
        case 0x26d728u: goto label_26d728;
        case 0x26d72cu: goto label_26d72c;
        case 0x26d730u: goto label_26d730;
        case 0x26d734u: goto label_26d734;
        case 0x26d738u: goto label_26d738;
        case 0x26d73cu: goto label_26d73c;
        case 0x26d740u: goto label_26d740;
        case 0x26d744u: goto label_26d744;
        case 0x26d748u: goto label_26d748;
        case 0x26d74cu: goto label_26d74c;
        case 0x26d750u: goto label_26d750;
        case 0x26d754u: goto label_26d754;
        case 0x26d758u: goto label_26d758;
        case 0x26d75cu: goto label_26d75c;
        case 0x26d760u: goto label_26d760;
        case 0x26d764u: goto label_26d764;
        case 0x26d768u: goto label_26d768;
        case 0x26d76cu: goto label_26d76c;
        case 0x26d770u: goto label_26d770;
        case 0x26d774u: goto label_26d774;
        case 0x26d778u: goto label_26d778;
        case 0x26d77cu: goto label_26d77c;
        case 0x26d780u: goto label_26d780;
        case 0x26d784u: goto label_26d784;
        case 0x26d788u: goto label_26d788;
        case 0x26d78cu: goto label_26d78c;
        case 0x26d790u: goto label_26d790;
        case 0x26d794u: goto label_26d794;
        case 0x26d798u: goto label_26d798;
        case 0x26d79cu: goto label_26d79c;
        case 0x26d7a0u: goto label_26d7a0;
        case 0x26d7a4u: goto label_26d7a4;
        case 0x26d7a8u: goto label_26d7a8;
        case 0x26d7acu: goto label_26d7ac;
        case 0x26d7b0u: goto label_26d7b0;
        case 0x26d7b4u: goto label_26d7b4;
        case 0x26d7b8u: goto label_26d7b8;
        case 0x26d7bcu: goto label_26d7bc;
        case 0x26d7c0u: goto label_26d7c0;
        case 0x26d7c4u: goto label_26d7c4;
        case 0x26d7c8u: goto label_26d7c8;
        case 0x26d7ccu: goto label_26d7cc;
        case 0x26d7d0u: goto label_26d7d0;
        case 0x26d7d4u: goto label_26d7d4;
        case 0x26d7d8u: goto label_26d7d8;
        case 0x26d7dcu: goto label_26d7dc;
        case 0x26d7e0u: goto label_26d7e0;
        case 0x26d7e4u: goto label_26d7e4;
        case 0x26d7e8u: goto label_26d7e8;
        case 0x26d7ecu: goto label_26d7ec;
        case 0x26d7f0u: goto label_26d7f0;
        case 0x26d7f4u: goto label_26d7f4;
        case 0x26d7f8u: goto label_26d7f8;
        case 0x26d7fcu: goto label_26d7fc;
        case 0x26d800u: goto label_26d800;
        case 0x26d804u: goto label_26d804;
        case 0x26d808u: goto label_26d808;
        case 0x26d80cu: goto label_26d80c;
        case 0x26d810u: goto label_26d810;
        case 0x26d814u: goto label_26d814;
        case 0x26d818u: goto label_26d818;
        case 0x26d81cu: goto label_26d81c;
        case 0x26d820u: goto label_26d820;
        case 0x26d824u: goto label_26d824;
        case 0x26d828u: goto label_26d828;
        case 0x26d82cu: goto label_26d82c;
        case 0x26d830u: goto label_26d830;
        case 0x26d834u: goto label_26d834;
        case 0x26d838u: goto label_26d838;
        case 0x26d83cu: goto label_26d83c;
        case 0x26d840u: goto label_26d840;
        case 0x26d844u: goto label_26d844;
        case 0x26d848u: goto label_26d848;
        case 0x26d84cu: goto label_26d84c;
        case 0x26d850u: goto label_26d850;
        case 0x26d854u: goto label_26d854;
        case 0x26d858u: goto label_26d858;
        case 0x26d85cu: goto label_26d85c;
        case 0x26d860u: goto label_26d860;
        case 0x26d864u: goto label_26d864;
        case 0x26d868u: goto label_26d868;
        case 0x26d86cu: goto label_26d86c;
        case 0x26d870u: goto label_26d870;
        case 0x26d874u: goto label_26d874;
        case 0x26d878u: goto label_26d878;
        case 0x26d87cu: goto label_26d87c;
        case 0x26d880u: goto label_26d880;
        case 0x26d884u: goto label_26d884;
        case 0x26d888u: goto label_26d888;
        case 0x26d88cu: goto label_26d88c;
        case 0x26d890u: goto label_26d890;
        case 0x26d894u: goto label_26d894;
        case 0x26d898u: goto label_26d898;
        case 0x26d89cu: goto label_26d89c;
        case 0x26d8a0u: goto label_26d8a0;
        case 0x26d8a4u: goto label_26d8a4;
        case 0x26d8a8u: goto label_26d8a8;
        case 0x26d8acu: goto label_26d8ac;
        case 0x26d8b0u: goto label_26d8b0;
        case 0x26d8b4u: goto label_26d8b4;
        case 0x26d8b8u: goto label_26d8b8;
        case 0x26d8bcu: goto label_26d8bc;
        case 0x26d8c0u: goto label_26d8c0;
        case 0x26d8c4u: goto label_26d8c4;
        default: break;
    }

    ctx->pc = 0x26d570u;

label_26d570:
    // 0x26d570: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26d570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_26d574:
    // 0x26d574: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x26d574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_26d578:
    // 0x26d578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26d578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26d57c:
    // 0x26d57c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x26d57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_26d580:
    // 0x26d580: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x26d580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_26d584:
    // 0x26d584: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x26d584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_26d588:
    // 0x26d588: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26d588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26d58c:
    // 0x26d58c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x26d58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_26d590:
    // 0x26d590: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x26d590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_26d594:
    // 0x26d594: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x26d594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_26d598:
    // 0x26d598: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x26d598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_26d59c:
    // 0x26d59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26d5a0:
    // 0x26d5a0: 0xc0e409a  jal         func_390268
label_26d5a4:
    if (ctx->pc == 0x26D5A4u) {
        ctx->pc = 0x26D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5A0u;
        // 0x26d5a4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5A8u;
        goto label_26d5a8;
    }
    ctx->pc = 0x26D5A0u;
    SET_GPR_U32(ctx, 31, 0x26D5A8u);
    ctx->pc = 0x26D5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5A0u;
    // 0x26d5a4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26D5A0u, 0x26D5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5A8u;
label_26d5a8:
    // 0x26d5a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26d5a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d5ac:
    // 0x26d5ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d5acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d5b0:
    // 0x26d5b0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x26d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_26d5b4:
    // 0x26d5b4: 0x8e3500d8  lw          $s5, 0xD8($s1)
    ctx->pc = 0x26d5b4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26d5b8:
    // 0x26d5b8: 0xc094f9a  jal         func_253E68
label_26d5bc:
    if (ctx->pc == 0x26D5BCu) {
        ctx->pc = 0x26D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5B8u;
        // 0x26d5bc: 0x8e7700d8  lw          $s7, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5C0u;
        goto label_26d5c0;
    }
    ctx->pc = 0x26D5B8u;
    SET_GPR_U32(ctx, 31, 0x26D5C0u);
    ctx->pc = 0x26D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5B8u;
    // 0x26d5bc: 0x8e7700d8  lw          $s7, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x26D5B8u, 0x26D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5C0u;
label_26d5c0:
    // 0x26d5c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d5c4:
    // 0x26d5c4: 0xc089988  jal         func_226620
label_26d5c8:
    if (ctx->pc == 0x26D5C8u) {
        ctx->pc = 0x26D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5C4u;
        // 0x26d5c8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5CCu;
        goto label_26d5cc;
    }
    ctx->pc = 0x26D5C4u;
    SET_GPR_U32(ctx, 31, 0x26D5CCu);
    ctx->pc = 0x26D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5C4u;
    // 0x26d5c8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x26D5C4u, 0x26D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5CCu;
label_26d5cc:
    // 0x26d5cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d5d0:
    // 0x26d5d0: 0xc089974  jal         func_2265D0
label_26d5d4:
    if (ctx->pc == 0x26D5D4u) {
        ctx->pc = 0x26D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5D0u;
        // 0x26d5d4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5D8u;
        goto label_26d5d8;
    }
    ctx->pc = 0x26D5D0u;
    SET_GPR_U32(ctx, 31, 0x26D5D8u);
    ctx->pc = 0x26D5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5D0u;
    // 0x26d5d4: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x26D5D0u, 0x26D5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5D8u;
label_26d5d8:
    // 0x26d5d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d5dc:
    // 0x26d5dc: 0xc094f9a  jal         func_253E68
label_26d5e0:
    if (ctx->pc == 0x26D5E0u) {
        ctx->pc = 0x26D5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5DCu;
        // 0x26d5e0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5E4u;
        goto label_26d5e4;
    }
    ctx->pc = 0x26D5DCu;
    SET_GPR_U32(ctx, 31, 0x26D5E4u);
    ctx->pc = 0x26D5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5DCu;
    // 0x26d5e0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x26D5DCu, 0x26D5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5E4u;
label_26d5e4:
    // 0x26d5e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d5e8:
    // 0x26d5e8: 0xc089988  jal         func_226620
label_26d5ec:
    if (ctx->pc == 0x26D5ECu) {
        ctx->pc = 0x26D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5E8u;
        // 0x26d5ec: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5F0u;
        goto label_26d5f0;
    }
    ctx->pc = 0x26D5E8u;
    SET_GPR_U32(ctx, 31, 0x26D5F0u);
    ctx->pc = 0x26D5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5E8u;
    // 0x26d5ec: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x26D5E8u, 0x26D5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5F0u;
label_26d5f0:
    // 0x26d5f0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x26d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_26d5f4:
    // 0x26d5f4: 0xc089974  jal         func_2265D0
label_26d5f8:
    if (ctx->pc == 0x26D5F8u) {
        ctx->pc = 0x26D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5F4u;
        // 0x26d5f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5FCu;
        goto label_26d5fc;
    }
    ctx->pc = 0x26D5F4u;
    SET_GPR_U32(ctx, 31, 0x26D5FCu);
    ctx->pc = 0x26D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5F4u;
    // 0x26d5f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x26D5F4u, 0x26D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5FCu;
label_26d5fc:
    // 0x26d5fc: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26d600:
    // 0x26d600: 0x2456e160  addiu       $s6, $v0, -0x1EA0
    ctx->pc = 0x26d600u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
label_26d604:
    // 0x26d604: 0xc041532  jal         func_1054C8
label_26d608:
    if (ctx->pc == 0x26D608u) {
        ctx->pc = 0x26D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D604u;
        // 0x26d608: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D60Cu;
        goto label_26d60c;
    }
    ctx->pc = 0x26D604u;
    SET_GPR_U32(ctx, 31, 0x26D60Cu);
    ctx->pc = 0x26D608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D604u;
    // 0x26d608: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D604u, 0x26D60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D60Cu;
label_26d60c:
    // 0x26d60c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26d60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26d610:
    // 0x26d610: 0xc041532  jal         func_1054C8
label_26d614:
    if (ctx->pc == 0x26D614u) {
        ctx->pc = 0x26D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D610u;
        // 0x26d614: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D618u;
        goto label_26d618;
    }
    ctx->pc = 0x26D610u;
    SET_GPR_U32(ctx, 31, 0x26D618u);
    ctx->pc = 0x26D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D610u;
    // 0x26d614: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D610u, 0x26D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D618u;
label_26d618:
    // 0x26d618: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26d618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d61c:
    // 0x26d61c: 0xc041532  jal         func_1054C8
label_26d620:
    if (ctx->pc == 0x26D620u) {
        ctx->pc = 0x26D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D61Cu;
        // 0x26d620: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D624u;
        goto label_26d624;
    }
    ctx->pc = 0x26D61Cu;
    SET_GPR_U32(ctx, 31, 0x26D624u);
    ctx->pc = 0x26D620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D61Cu;
    // 0x26d620: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D61Cu, 0x26D624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D624u;
label_26d624:
    // 0x26d624: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_26d628:
    if (ctx->pc == 0x26D628u) {
        ctx->pc = 0x26D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D624u;
        // 0x26d628: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D62Cu;
        goto label_26d62c;
    }
    ctx->pc = 0x26D624u;
    {
        const bool branch_taken_0x26d624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D624u;
        // 0x26d628: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d624) {
            ctx->pc = 0x26D664u;
            goto label_26d664;
        }
    }
    ctx->pc = 0x26D62Cu;
label_26d62c:
    // 0x26d62c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26d630:
    // 0x26d630: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26d630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26d634:
    // 0x26d634: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26d634u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26d638:
    // 0x26d638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26d63c:
    // 0x26d63c: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26d63cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26d640:
    // 0x26d640: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26d640u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d644:
    // 0x26d644: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26d644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26d648:
    // 0x26d648: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26d648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26d64c:
    // 0x26d64c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26d64cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26d650:
    // 0x26d650: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d654:
    // 0x26d654: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26d654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26d658:
    // 0x26d658: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26d658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26d65c:
    // 0x26d65c: 0xc041bd4  jal         func_106F50
label_26d660:
    if (ctx->pc == 0x26D660u) {
        ctx->pc = 0x26D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D65Cu;
        // 0x26d660: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D664u;
        goto label_26d664;
    }
    ctx->pc = 0x26D65Cu;
    SET_GPR_U32(ctx, 31, 0x26D664u);
    ctx->pc = 0x26D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D65Cu;
    // 0x26d660: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26D65Cu, 0x26D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D664u;
label_26d664:
    // 0x26d664: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26d664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26d668:
    // 0x26d668: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26d668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26d66c:
    // 0x26d66c: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x26d66cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d670:
    // 0x26d670: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26d670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26d674:
    // 0x26d674: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26d678:
    // 0x26d678: 0x60f809  jalr        $v1
label_26d67c:
    if (ctx->pc == 0x26D67Cu) {
        ctx->pc = 0x26D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D678u;
        // 0x26d67c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D680u;
        goto label_26d680;
    }
    ctx->pc = 0x26D678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26D680u);
        ctx->pc = 0x26D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D678u;
        // 0x26d67c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D678u, 0x26D680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D680u;
label_26d680:
    // 0x26d680: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26d680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26d684:
    // 0x26d684: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_26d688:
    if (ctx->pc == 0x26D688u) {
        ctx->pc = 0x26D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D684u;
        // 0x26d688: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D68Cu;
        goto label_26d68c;
    }
    ctx->pc = 0x26D684u;
    {
        const bool branch_taken_0x26d684 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D684u;
        // 0x26d688: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d684) {
            ctx->pc = 0x26D6C8u;
            goto label_26d6c8;
        }
    }
    ctx->pc = 0x26D68Cu;
label_26d68c:
    // 0x26d68c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26d690:
    // 0x26d690: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26d690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26d694:
    // 0x26d694: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26d694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26d698:
    // 0x26d698: 0x40f809  jalr        $v0
label_26d69c:
    if (ctx->pc == 0x26D69Cu) {
        ctx->pc = 0x26D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D698u;
        // 0x26d69c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6A0u;
        goto label_26d6a0;
    }
    ctx->pc = 0x26D698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26D6A0u);
        ctx->pc = 0x26D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D698u;
        // 0x26d69c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D698u, 0x26D6A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D6A0u;
label_26d6a0:
    // 0x26d6a0: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26d6a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26d6a4:
    // 0x26d6a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d6a8:
    // 0x26d6a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26d6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26d6ac:
    // 0x26d6ac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26d6acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d6b0:
    // 0x26d6b0: 0x254ad510  addiu       $t2, $t2, -0x2AF0
    ctx->pc = 0x26d6b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956304));
label_26d6b4:
    // 0x26d6b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26d6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26d6b8:
    // 0x26d6b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26d6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26d6bc:
    // 0x26d6bc: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x26d6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_26d6c0:
    // 0x26d6c0: 0xc041664  jal         func_105990
label_26d6c4:
    if (ctx->pc == 0x26D6C4u) {
        ctx->pc = 0x26D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6C0u;
        // 0x26d6c4: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6C8u;
        goto label_26d6c8;
    }
    ctx->pc = 0x26D6C0u;
    SET_GPR_U32(ctx, 31, 0x26D6C8u);
    ctx->pc = 0x26D6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6C0u;
    // 0x26d6c4: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26D6C0u, 0x26D6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6C8u;
label_26d6c8:
    // 0x26d6c8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_26d6cc:
    if (ctx->pc == 0x26D6CCu) {
        ctx->pc = 0x26D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6C8u;
        // 0x26d6cc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6D0u;
        goto label_26d6d0;
    }
    ctx->pc = 0x26D6C8u;
    {
        const bool branch_taken_0x26d6c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6C8u;
        // 0x26d6cc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6c8) {
            ctx->pc = 0x26D6F0u;
            goto label_26d6f0;
        }
    }
    ctx->pc = 0x26D6D0u;
label_26d6d0:
    // 0x26d6d0: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26d6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26d6d4:
    // 0x26d6d4: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26d6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26d6d8:
    // 0x26d6d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d6dc:
    // 0x26d6dc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26d6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26d6e0:
    // 0x26d6e0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26d6e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26d6e4:
    // 0x26d6e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26d6e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d6e8:
    // 0x26d6e8: 0xc041b20  jal         func_106C80
label_26d6ec:
    if (ctx->pc == 0x26D6ECu) {
        ctx->pc = 0x26D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6E8u;
        // 0x26d6ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6F0u;
        goto label_26d6f0;
    }
    ctx->pc = 0x26D6E8u;
    SET_GPR_U32(ctx, 31, 0x26D6F0u);
    ctx->pc = 0x26D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6E8u;
    // 0x26d6ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26D6E8u, 0x26D6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6F0u;
label_26d6f0:
    // 0x26d6f0: 0xc05d484  jal         func_175210
label_26d6f4:
    if (ctx->pc == 0x26D6F4u) {
        ctx->pc = 0x26D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6F0u;
        // 0x26d6f4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6F8u;
        goto label_26d6f8;
    }
    ctx->pc = 0x26D6F0u;
    SET_GPR_U32(ctx, 31, 0x26D6F8u);
    ctx->pc = 0x26D6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6F0u;
    // 0x26d6f4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26D6F0u, 0x26D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6F8u;
label_26d6f8:
    // 0x26d6f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26d6fc:
    // 0x26d6fc: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26d6fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26d700:
    // 0x26d700: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26d700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26d704:
    // 0x26d704: 0xa0f809  jalr        $a1
label_26d708:
    if (ctx->pc == 0x26D708u) {
        ctx->pc = 0x26D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D704u;
        // 0x26d708: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D70Cu;
        goto label_26d70c;
    }
    ctx->pc = 0x26D704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26D70Cu);
        ctx->pc = 0x26D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D704u;
        // 0x26d708: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D704u, 0x26D70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D70Cu;
label_26d70c:
    // 0x26d70c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d710:
    // 0x26d710: 0xc087016  jal         func_21C058
label_26d714:
    if (ctx->pc == 0x26D714u) {
        ctx->pc = 0x26D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D710u;
        // 0x26d714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D718u;
        goto label_26d718;
    }
    ctx->pc = 0x26D710u;
    SET_GPR_U32(ctx, 31, 0x26D718u);
    ctx->pc = 0x26D714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D710u;
    // 0x26d714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26D710u, 0x26D718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D718u;
label_26d718:
    // 0x26d718: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26d718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26d71c:
    // 0x26d71c: 0xc05d53a  jal         func_1754E8
label_26d720:
    if (ctx->pc == 0x26D720u) {
        ctx->pc = 0x26D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D71Cu;
        // 0x26d720: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D724u;
        goto label_26d724;
    }
    ctx->pc = 0x26D71Cu;
    SET_GPR_U32(ctx, 31, 0x26D724u);
    ctx->pc = 0x26D720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D71Cu;
    // 0x26d720: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26D71Cu, 0x26D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D724u;
label_26d724:
    // 0x26d724: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26d724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26d728:
    // 0x26d728: 0xc05d4f6  jal         func_1753D8
label_26d72c:
    if (ctx->pc == 0x26D72Cu) {
        ctx->pc = 0x26D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D728u;
        // 0x26d72c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D730u;
        goto label_26d730;
    }
    ctx->pc = 0x26D728u;
    SET_GPR_U32(ctx, 31, 0x26D730u);
    ctx->pc = 0x26D72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D728u;
    // 0x26d72c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26D728u, 0x26D730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D730u;
label_26d730:
    // 0x26d730: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x26d730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26d734:
    // 0x26d734: 0xc089990  jal         func_226640
label_26d738:
    if (ctx->pc == 0x26D738u) {
        ctx->pc = 0x26D738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D734u;
        // 0x26d738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D73Cu;
        goto label_26d73c;
    }
    ctx->pc = 0x26D734u;
    SET_GPR_U32(ctx, 31, 0x26D73Cu);
    ctx->pc = 0x26D738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D734u;
    // 0x26d738: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26D734u, 0x26D73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D73Cu;
label_26d73c:
    // 0x26d73c: 0xc041532  jal         func_1054C8
label_26d740:
    if (ctx->pc == 0x26D740u) {
        ctx->pc = 0x26D740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D73Cu;
        // 0x26d740: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D744u;
        goto label_26d744;
    }
    ctx->pc = 0x26D73Cu;
    SET_GPR_U32(ctx, 31, 0x26D744u);
    ctx->pc = 0x26D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D73Cu;
    // 0x26d740: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D73Cu, 0x26D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D744u;
label_26d744:
    // 0x26d744: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26d748:
    // 0x26d748: 0xc041532  jal         func_1054C8
label_26d74c:
    if (ctx->pc == 0x26D74Cu) {
        ctx->pc = 0x26D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D748u;
        // 0x26d74c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D750u;
        goto label_26d750;
    }
    ctx->pc = 0x26D748u;
    SET_GPR_U32(ctx, 31, 0x26D750u);
    ctx->pc = 0x26D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D748u;
    // 0x26d74c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D748u, 0x26D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D750u;
label_26d750:
    // 0x26d750: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26d750u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d754:
    // 0x26d754: 0xc041532  jal         func_1054C8
label_26d758:
    if (ctx->pc == 0x26D758u) {
        ctx->pc = 0x26D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D754u;
        // 0x26d758: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D75Cu;
        goto label_26d75c;
    }
    ctx->pc = 0x26D754u;
    SET_GPR_U32(ctx, 31, 0x26D75Cu);
    ctx->pc = 0x26D758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D754u;
    // 0x26d758: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26D754u, 0x26D75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D75Cu;
label_26d75c:
    // 0x26d75c: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_26d760:
    if (ctx->pc == 0x26D760u) {
        ctx->pc = 0x26D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D75Cu;
        // 0x26d760: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D764u;
        goto label_26d764;
    }
    ctx->pc = 0x26D75Cu;
    {
        const bool branch_taken_0x26d75c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D75Cu;
        // 0x26d760: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d75c) {
            ctx->pc = 0x26D79Cu;
            goto label_26d79c;
        }
    }
    ctx->pc = 0x26D764u;
label_26d764:
    // 0x26d764: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x26d764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26d768:
    // 0x26d768: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26d768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26d76c:
    // 0x26d76c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26d76cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26d770:
    // 0x26d770: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d774:
    // 0x26d774: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26d774u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26d778:
    // 0x26d778: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26d778u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d77c:
    // 0x26d77c: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26d77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26d780:
    // 0x26d780: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26d780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26d784:
    // 0x26d784: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26d784u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26d788:
    // 0x26d788: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d78c:
    // 0x26d78c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26d78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26d790:
    // 0x26d790: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26d790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26d794:
    // 0x26d794: 0xc041bd4  jal         func_106F50
label_26d798:
    if (ctx->pc == 0x26D798u) {
        ctx->pc = 0x26D798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D794u;
        // 0x26d798: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D79Cu;
        goto label_26d79c;
    }
    ctx->pc = 0x26D794u;
    SET_GPR_U32(ctx, 31, 0x26D79Cu);
    ctx->pc = 0x26D798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D794u;
    // 0x26d798: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26D794u, 0x26D79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D79Cu;
label_26d79c:
    // 0x26d79c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x26d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26d7a0:
    // 0x26d7a0: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26d7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26d7a4:
    // 0x26d7a4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26d7a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26d7a8:
    // 0x26d7a8: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26d7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26d7ac:
    // 0x26d7ac: 0x60f809  jalr        $v1
label_26d7b0:
    if (ctx->pc == 0x26D7B0u) {
        ctx->pc = 0x26D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7ACu;
        // 0x26d7b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7B4u;
        goto label_26d7b4;
    }
    ctx->pc = 0x26D7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26D7B4u);
        ctx->pc = 0x26D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7ACu;
        // 0x26d7b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D7ACu, 0x26D7B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D7B4u;
label_26d7b4:
    // 0x26d7b4: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x26d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26d7b8:
    // 0x26d7b8: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
label_26d7bc:
    if (ctx->pc == 0x26D7BCu) {
        ctx->pc = 0x26D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7B8u;
        // 0x26d7bc: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7C0u;
        goto label_26d7c0;
    }
    ctx->pc = 0x26D7B8u;
    {
        const bool branch_taken_0x26d7b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7B8u;
        // 0x26d7bc: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7b8) {
            ctx->pc = 0x26D814u;
            goto label_26d814;
        }
    }
    ctx->pc = 0x26D7C0u;
label_26d7c0:
    // 0x26d7c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26d7c4:
    // 0x26d7c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26d7c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26d7c8:
    // 0x26d7c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26d7cc:
    // 0x26d7cc: 0x40f809  jalr        $v0
label_26d7d0:
    if (ctx->pc == 0x26D7D0u) {
        ctx->pc = 0x26D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7CCu;
        // 0x26d7d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7D4u;
        goto label_26d7d4;
    }
    ctx->pc = 0x26D7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26D7D4u);
        ctx->pc = 0x26D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7CCu;
        // 0x26d7d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D7CCu, 0x26D7D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D7D4u;
label_26d7d4:
    // 0x26d7d4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26d7d8:
    // 0x26d7d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26d7d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d7dc:
    // 0x26d7dc: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26d7dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26d7e0:
    // 0x26d7e0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26d7e4:
    // 0x26d7e4: 0x40f809  jalr        $v0
label_26d7e8:
    if (ctx->pc == 0x26D7E8u) {
        ctx->pc = 0x26D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7E4u;
        // 0x26d7e8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7ECu;
        goto label_26d7ec;
    }
    ctx->pc = 0x26D7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26D7ECu);
        ctx->pc = 0x26D7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7E4u;
        // 0x26d7e8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D7E4u, 0x26D7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D7ECu;
label_26d7ec:
    // 0x26d7ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26d7ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d7f0:
    // 0x26d7f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26d7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26d7f4:
    // 0x26d7f4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x26d7f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d7f8:
    // 0x26d7f8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26d7f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d7fc:
    // 0x26d7fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26d7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26d800:
    // 0x26d800: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26d800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26d804:
    // 0x26d804: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x26d804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_26d808:
    // 0x26d808: 0x24092000  addiu       $t1, $zero, 0x2000
    ctx->pc = 0x26d808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26d80c:
    // 0x26d80c: 0xc04229e  jal         func_108A78
label_26d810:
    if (ctx->pc == 0x26D810u) {
        ctx->pc = 0x26D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D80Cu;
        // 0x26d810: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D814u;
        goto label_26d814;
    }
    ctx->pc = 0x26D80Cu;
    SET_GPR_U32(ctx, 31, 0x26D814u);
    ctx->pc = 0x26D810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D80Cu;
    // 0x26d810: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26D80Cu, 0x26D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D814u;
label_26d814:
    // 0x26d814: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_26d818:
    if (ctx->pc == 0x26D818u) {
        ctx->pc = 0x26D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D814u;
        // 0x26d818: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D81Cu;
        goto label_26d81c;
    }
    ctx->pc = 0x26D814u;
    {
        const bool branch_taken_0x26d814 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D814u;
        // 0x26d818: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d814) {
            ctx->pc = 0x26D83Cu;
            goto label_26d83c;
        }
    }
    ctx->pc = 0x26D81Cu;
label_26d81c:
    // 0x26d81c: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26d81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26d820:
    // 0x26d820: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26d820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26d824:
    // 0x26d824: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26d824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26d828:
    // 0x26d828: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26d828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26d82c:
    // 0x26d82c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26d82cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26d830:
    // 0x26d830: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26d830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26d834:
    // 0x26d834: 0xc041b20  jal         func_106C80
label_26d838:
    if (ctx->pc == 0x26D838u) {
        ctx->pc = 0x26D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D834u;
        // 0x26d838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D83Cu;
        goto label_26d83c;
    }
    ctx->pc = 0x26D834u;
    SET_GPR_U32(ctx, 31, 0x26D83Cu);
    ctx->pc = 0x26D838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D834u;
    // 0x26d838: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26D834u, 0x26D83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D83Cu;
label_26d83c:
    // 0x26d83c: 0xc05d484  jal         func_175210
label_26d840:
    if (ctx->pc == 0x26D840u) {
        ctx->pc = 0x26D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D83Cu;
        // 0x26d840: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D844u;
        goto label_26d844;
    }
    ctx->pc = 0x26D83Cu;
    SET_GPR_U32(ctx, 31, 0x26D844u);
    ctx->pc = 0x26D840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D83Cu;
    // 0x26d840: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26D83Cu, 0x26D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D844u;
label_26d844:
    // 0x26d844: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26d844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26d848:
    // 0x26d848: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26d848u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26d84c:
    // 0x26d84c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26d84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26d850:
    // 0x26d850: 0xa0f809  jalr        $a1
label_26d854:
    if (ctx->pc == 0x26D854u) {
        ctx->pc = 0x26D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D850u;
        // 0x26d854: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D858u;
        goto label_26d858;
    }
    ctx->pc = 0x26D850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26D858u);
        ctx->pc = 0x26D854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D850u;
        // 0x26d854: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D850u, 0x26D858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D858u;
label_26d858:
    // 0x26d858: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d85c:
    // 0x26d85c: 0xc087016  jal         func_21C058
label_26d860:
    if (ctx->pc == 0x26D860u) {
        ctx->pc = 0x26D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D85Cu;
        // 0x26d860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D864u;
        goto label_26d864;
    }
    ctx->pc = 0x26D85Cu;
    SET_GPR_U32(ctx, 31, 0x26D864u);
    ctx->pc = 0x26D860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D85Cu;
    // 0x26d860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26D85Cu, 0x26D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D864u;
label_26d864:
    // 0x26d864: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26d864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26d868:
    // 0x26d868: 0xc05d53a  jal         func_1754E8
label_26d86c:
    if (ctx->pc == 0x26D86Cu) {
        ctx->pc = 0x26D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D868u;
        // 0x26d86c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D870u;
        goto label_26d870;
    }
    ctx->pc = 0x26D868u;
    SET_GPR_U32(ctx, 31, 0x26D870u);
    ctx->pc = 0x26D86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D868u;
    // 0x26d86c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26D868u, 0x26D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D870u;
label_26d870:
    // 0x26d870: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26d870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26d874:
    // 0x26d874: 0xc05d4f6  jal         func_1753D8
label_26d878:
    if (ctx->pc == 0x26D878u) {
        ctx->pc = 0x26D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D874u;
        // 0x26d878: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D87Cu;
        goto label_26d87c;
    }
    ctx->pc = 0x26D874u;
    SET_GPR_U32(ctx, 31, 0x26D87Cu);
    ctx->pc = 0x26D878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D874u;
    // 0x26d878: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26D874u, 0x26D87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D87Cu;
label_26d87c:
    // 0x26d87c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26d880:
    // 0x26d880: 0xc089990  jal         func_226640
label_26d884:
    if (ctx->pc == 0x26D884u) {
        ctx->pc = 0x26D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D880u;
        // 0x26d884: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D888u;
        goto label_26d888;
    }
    ctx->pc = 0x26D880u;
    SET_GPR_U32(ctx, 31, 0x26D888u);
    ctx->pc = 0x26D884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D880u;
    // 0x26d884: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26D880u, 0x26D888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D888u;
label_26d888:
    // 0x26d888: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d88c:
    // 0x26d88c: 0xc0a0152  jal         func_280548
label_26d890:
    if (ctx->pc == 0x26D890u) {
        ctx->pc = 0x26D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D88Cu;
        // 0x26d890: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D894u;
        goto label_26d894;
    }
    ctx->pc = 0x26D88Cu;
    SET_GPR_U32(ctx, 31, 0x26D894u);
    ctx->pc = 0x26D890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D88Cu;
    // 0x26d890: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x26D88Cu, 0x26D894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D894u;
label_26d894:
    // 0x26d894: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x26d894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26d898:
    // 0x26d898: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x26d898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26d89c:
    // 0x26d89c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x26d89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26d8a0:
    // 0x26d8a0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x26d8a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26d8a4:
    // 0x26d8a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26d8a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26d8a8:
    // 0x26d8a8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x26d8a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26d8ac:
    // 0x26d8ac: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x26d8acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26d8b0:
    // 0x26d8b0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x26d8b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26d8b4:
    // 0x26d8b4: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x26d8b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26d8b8:
    // 0x26d8b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26d8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26d8bc:
    // 0x26d8bc: 0x3e00008  jr          $ra
label_26d8c0:
    if (ctx->pc == 0x26D8C0u) {
        ctx->pc = 0x26D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8BCu;
        // 0x26d8c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D8C4u;
        goto label_26d8c4;
    }
    ctx->pc = 0x26D8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8BCu;
        // 0x26d8c0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D8C4u;
label_26d8c4:
    // 0x26d8c4: 0x0  nop
    ctx->pc = 0x26d8c4u;
    // NOP
    ctx->pc = 0x26d8c8u;
}
