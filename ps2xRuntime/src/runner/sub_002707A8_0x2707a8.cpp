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

// Function: sub_002707A8
// Address: 0x2707a8 - 0x270a70
void sub_002707A8_0x2707a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002707A8_0x2707a8");
#endif

    switch (ctx->pc) {
        case 0x2707a8u: goto label_2707a8;
        case 0x2707acu: goto label_2707ac;
        case 0x2707b0u: goto label_2707b0;
        case 0x2707b4u: goto label_2707b4;
        case 0x2707b8u: goto label_2707b8;
        case 0x2707bcu: goto label_2707bc;
        case 0x2707c0u: goto label_2707c0;
        case 0x2707c4u: goto label_2707c4;
        case 0x2707c8u: goto label_2707c8;
        case 0x2707ccu: goto label_2707cc;
        case 0x2707d0u: goto label_2707d0;
        case 0x2707d4u: goto label_2707d4;
        case 0x2707d8u: goto label_2707d8;
        case 0x2707dcu: goto label_2707dc;
        case 0x2707e0u: goto label_2707e0;
        case 0x2707e4u: goto label_2707e4;
        case 0x2707e8u: goto label_2707e8;
        case 0x2707ecu: goto label_2707ec;
        case 0x2707f0u: goto label_2707f0;
        case 0x2707f4u: goto label_2707f4;
        case 0x2707f8u: goto label_2707f8;
        case 0x2707fcu: goto label_2707fc;
        case 0x270800u: goto label_270800;
        case 0x270804u: goto label_270804;
        case 0x270808u: goto label_270808;
        case 0x27080cu: goto label_27080c;
        case 0x270810u: goto label_270810;
        case 0x270814u: goto label_270814;
        case 0x270818u: goto label_270818;
        case 0x27081cu: goto label_27081c;
        case 0x270820u: goto label_270820;
        case 0x270824u: goto label_270824;
        case 0x270828u: goto label_270828;
        case 0x27082cu: goto label_27082c;
        case 0x270830u: goto label_270830;
        case 0x270834u: goto label_270834;
        case 0x270838u: goto label_270838;
        case 0x27083cu: goto label_27083c;
        case 0x270840u: goto label_270840;
        case 0x270844u: goto label_270844;
        case 0x270848u: goto label_270848;
        case 0x27084cu: goto label_27084c;
        case 0x270850u: goto label_270850;
        case 0x270854u: goto label_270854;
        case 0x270858u: goto label_270858;
        case 0x27085cu: goto label_27085c;
        case 0x270860u: goto label_270860;
        case 0x270864u: goto label_270864;
        case 0x270868u: goto label_270868;
        case 0x27086cu: goto label_27086c;
        case 0x270870u: goto label_270870;
        case 0x270874u: goto label_270874;
        case 0x270878u: goto label_270878;
        case 0x27087cu: goto label_27087c;
        case 0x270880u: goto label_270880;
        case 0x270884u: goto label_270884;
        case 0x270888u: goto label_270888;
        case 0x27088cu: goto label_27088c;
        case 0x270890u: goto label_270890;
        case 0x270894u: goto label_270894;
        case 0x270898u: goto label_270898;
        case 0x27089cu: goto label_27089c;
        case 0x2708a0u: goto label_2708a0;
        case 0x2708a4u: goto label_2708a4;
        case 0x2708a8u: goto label_2708a8;
        case 0x2708acu: goto label_2708ac;
        case 0x2708b0u: goto label_2708b0;
        case 0x2708b4u: goto label_2708b4;
        case 0x2708b8u: goto label_2708b8;
        case 0x2708bcu: goto label_2708bc;
        case 0x2708c0u: goto label_2708c0;
        case 0x2708c4u: goto label_2708c4;
        case 0x2708c8u: goto label_2708c8;
        case 0x2708ccu: goto label_2708cc;
        case 0x2708d0u: goto label_2708d0;
        case 0x2708d4u: goto label_2708d4;
        case 0x2708d8u: goto label_2708d8;
        case 0x2708dcu: goto label_2708dc;
        case 0x2708e0u: goto label_2708e0;
        case 0x2708e4u: goto label_2708e4;
        case 0x2708e8u: goto label_2708e8;
        case 0x2708ecu: goto label_2708ec;
        case 0x2708f0u: goto label_2708f0;
        case 0x2708f4u: goto label_2708f4;
        case 0x2708f8u: goto label_2708f8;
        case 0x2708fcu: goto label_2708fc;
        case 0x270900u: goto label_270900;
        case 0x270904u: goto label_270904;
        case 0x270908u: goto label_270908;
        case 0x27090cu: goto label_27090c;
        case 0x270910u: goto label_270910;
        case 0x270914u: goto label_270914;
        case 0x270918u: goto label_270918;
        case 0x27091cu: goto label_27091c;
        case 0x270920u: goto label_270920;
        case 0x270924u: goto label_270924;
        case 0x270928u: goto label_270928;
        case 0x27092cu: goto label_27092c;
        case 0x270930u: goto label_270930;
        case 0x270934u: goto label_270934;
        case 0x270938u: goto label_270938;
        case 0x27093cu: goto label_27093c;
        case 0x270940u: goto label_270940;
        case 0x270944u: goto label_270944;
        case 0x270948u: goto label_270948;
        case 0x27094cu: goto label_27094c;
        case 0x270950u: goto label_270950;
        case 0x270954u: goto label_270954;
        case 0x270958u: goto label_270958;
        case 0x27095cu: goto label_27095c;
        case 0x270960u: goto label_270960;
        case 0x270964u: goto label_270964;
        case 0x270968u: goto label_270968;
        case 0x27096cu: goto label_27096c;
        case 0x270970u: goto label_270970;
        case 0x270974u: goto label_270974;
        case 0x270978u: goto label_270978;
        case 0x27097cu: goto label_27097c;
        case 0x270980u: goto label_270980;
        case 0x270984u: goto label_270984;
        case 0x270988u: goto label_270988;
        case 0x27098cu: goto label_27098c;
        case 0x270990u: goto label_270990;
        case 0x270994u: goto label_270994;
        case 0x270998u: goto label_270998;
        case 0x27099cu: goto label_27099c;
        case 0x2709a0u: goto label_2709a0;
        case 0x2709a4u: goto label_2709a4;
        case 0x2709a8u: goto label_2709a8;
        case 0x2709acu: goto label_2709ac;
        case 0x2709b0u: goto label_2709b0;
        case 0x2709b4u: goto label_2709b4;
        case 0x2709b8u: goto label_2709b8;
        case 0x2709bcu: goto label_2709bc;
        case 0x2709c0u: goto label_2709c0;
        case 0x2709c4u: goto label_2709c4;
        case 0x2709c8u: goto label_2709c8;
        case 0x2709ccu: goto label_2709cc;
        case 0x2709d0u: goto label_2709d0;
        case 0x2709d4u: goto label_2709d4;
        case 0x2709d8u: goto label_2709d8;
        case 0x2709dcu: goto label_2709dc;
        case 0x2709e0u: goto label_2709e0;
        case 0x2709e4u: goto label_2709e4;
        case 0x2709e8u: goto label_2709e8;
        case 0x2709ecu: goto label_2709ec;
        case 0x2709f0u: goto label_2709f0;
        case 0x2709f4u: goto label_2709f4;
        case 0x2709f8u: goto label_2709f8;
        case 0x2709fcu: goto label_2709fc;
        case 0x270a00u: goto label_270a00;
        case 0x270a04u: goto label_270a04;
        case 0x270a08u: goto label_270a08;
        case 0x270a0cu: goto label_270a0c;
        case 0x270a10u: goto label_270a10;
        case 0x270a14u: goto label_270a14;
        case 0x270a18u: goto label_270a18;
        case 0x270a1cu: goto label_270a1c;
        case 0x270a20u: goto label_270a20;
        case 0x270a24u: goto label_270a24;
        case 0x270a28u: goto label_270a28;
        case 0x270a2cu: goto label_270a2c;
        case 0x270a30u: goto label_270a30;
        case 0x270a34u: goto label_270a34;
        case 0x270a38u: goto label_270a38;
        case 0x270a3cu: goto label_270a3c;
        case 0x270a40u: goto label_270a40;
        case 0x270a44u: goto label_270a44;
        case 0x270a48u: goto label_270a48;
        case 0x270a4cu: goto label_270a4c;
        case 0x270a50u: goto label_270a50;
        case 0x270a54u: goto label_270a54;
        case 0x270a58u: goto label_270a58;
        case 0x270a5cu: goto label_270a5c;
        case 0x270a60u: goto label_270a60;
        case 0x270a64u: goto label_270a64;
        case 0x270a68u: goto label_270a68;
        case 0x270a6cu: goto label_270a6c;
        default: break;
    }

    ctx->pc = 0x2707a8u;

label_2707a8:
    // 0x2707a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2707a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2707ac:
    // 0x2707ac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2707acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2707b0:
    // 0x2707b0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2707b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2707b4:
    // 0x2707b4: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2707b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2707b8:
    // 0x2707b8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2707b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2707bc:
    // 0x2707bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2707bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2707c0:
    // 0x2707c0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2707c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2707c4:
    // 0x2707c4: 0x2610e250  addiu       $s0, $s0, -0x1DB0
    ctx->pc = 0x2707c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959696));
label_2707c8:
    // 0x2707c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2707c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2707cc:
    // 0x2707cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2707ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2707d0:
    // 0x2707d0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2707d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_2707d4:
    // 0x2707d4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2707d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2707d8:
    // 0x2707d8: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2707d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_2707dc:
    // 0x2707dc: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x2707dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2707e0:
    // 0x2707e0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2707e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_2707e4:
    // 0x2707e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2707e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2707e8:
    // 0x2707e8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2707e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2707ec:
    // 0x2707ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2707ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2707f0:
    // 0x2707f0: 0x8e3500d8  lw          $s5, 0xD8($s1)
    ctx->pc = 0x2707f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2707f4:
    // 0x2707f4: 0xc041532  jal         func_1054C8
label_2707f8:
    if (ctx->pc == 0x2707F8u) {
        ctx->pc = 0x2707F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707F4u;
        // 0x2707f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707FCu;
        goto label_2707fc;
    }
    ctx->pc = 0x2707F4u;
    SET_GPR_U32(ctx, 31, 0x2707FCu);
    ctx->pc = 0x2707F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707F4u;
    // 0x2707f8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2707F4u, 0x2707FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707FCu;
label_2707fc:
    // 0x2707fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2707fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270800:
    // 0x270800: 0xc041532  jal         func_1054C8
label_270804:
    if (ctx->pc == 0x270804u) {
        ctx->pc = 0x270804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270800u;
        // 0x270804: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270808u;
        goto label_270808;
    }
    ctx->pc = 0x270800u;
    SET_GPR_U32(ctx, 31, 0x270808u);
    ctx->pc = 0x270804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270800u;
    // 0x270804: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270800u, 0x270808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270808u;
label_270808:
    // 0x270808: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27080c:
    // 0x27080c: 0xc041532  jal         func_1054C8
label_270810:
    if (ctx->pc == 0x270810u) {
        ctx->pc = 0x270810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27080Cu;
        // 0x270810: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270814u;
        goto label_270814;
    }
    ctx->pc = 0x27080Cu;
    SET_GPR_U32(ctx, 31, 0x270814u);
    ctx->pc = 0x270810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27080Cu;
    // 0x270810: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x27080Cu, 0x270814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270814u;
label_270814:
    // 0x270814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270818:
    // 0x270818: 0xc041532  jal         func_1054C8
label_27081c:
    if (ctx->pc == 0x27081Cu) {
        ctx->pc = 0x27081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270818u;
        // 0x27081c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270820u;
        goto label_270820;
    }
    ctx->pc = 0x270818u;
    SET_GPR_U32(ctx, 31, 0x270820u);
    ctx->pc = 0x27081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270818u;
    // 0x27081c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x270818u, 0x270820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270820u;
label_270820:
    // 0x270820: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x270820u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270824:
    // 0x270824: 0xc095f3a  jal         func_257CE8
label_270828:
    if (ctx->pc == 0x270828u) {
        ctx->pc = 0x270828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270824u;
        // 0x270828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27082Cu;
        goto label_27082c;
    }
    ctx->pc = 0x270824u;
    SET_GPR_U32(ctx, 31, 0x27082Cu);
    ctx->pc = 0x270828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270824u;
    // 0x270828: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257CE8u, 0x270824u, 0x27082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27082Cu;
label_27082c:
    // 0x27082c: 0xc0874fa  jal         func_21D3E8
label_270830:
    if (ctx->pc == 0x270830u) {
        ctx->pc = 0x270830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27082Cu;
        // 0x270830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270834u;
        goto label_270834;
    }
    ctx->pc = 0x27082Cu;
    SET_GPR_U32(ctx, 31, 0x270834u);
    ctx->pc = 0x270830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27082Cu;
    // 0x270830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27082Cu, 0x270834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270834u;
label_270834:
    // 0x270834: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x270834u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_270838:
    // 0x270838: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
label_27083c:
    if (ctx->pc == 0x27083Cu) {
        ctx->pc = 0x27083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270838u;
        // 0x27083c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270840u;
        goto label_270840;
    }
    ctx->pc = 0x270838u;
    {
        const bool branch_taken_0x270838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x270838) {
            ctx->pc = 0x27083Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270838u;
            // 0x27083c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270884u;
            goto label_270884;
        }
    }
    ctx->pc = 0x270840u;
label_270840:
    // 0x270840: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x270840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_270844:
    // 0x270844: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x270844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_270848:
    // 0x270848: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x270848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
label_27084c:
    // 0x27084c: 0x5480000e  bnel        $a0, $zero, . + 4 + (0xE << 2)
label_270850:
    if (ctx->pc == 0x270850u) {
        ctx->pc = 0x270850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27084Cu;
        // 0x270850: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270854u;
        goto label_270854;
    }
    ctx->pc = 0x27084Cu;
    {
        const bool branch_taken_0x27084c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x27084c) {
            ctx->pc = 0x270850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27084Cu;
            // 0x270850: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270888u;
            goto label_270888;
        }
    }
    ctx->pc = 0x270854u;
label_270854:
    // 0x270854: 0xc087502  jal         func_21D408
label_270858:
    if (ctx->pc == 0x270858u) {
        ctx->pc = 0x270858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270854u;
        // 0x270858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27085Cu;
        goto label_27085c;
    }
    ctx->pc = 0x270854u;
    SET_GPR_U32(ctx, 31, 0x27085Cu);
    ctx->pc = 0x270858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270854u;
    // 0x270858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x270854u, 0x27085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27085Cu;
label_27085c:
    // 0x27085c: 0x8043000b  lb          $v1, 0xB($v0)
    ctx->pc = 0x27085cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
label_270860:
    // 0x270860: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
label_270864:
    if (ctx->pc == 0x270864u) {
        ctx->pc = 0x270864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270860u;
        // 0x270864: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270868u;
        goto label_270868;
    }
    ctx->pc = 0x270860u;
    {
        const bool branch_taken_0x270860 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x270860) {
            ctx->pc = 0x270864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270860u;
            // 0x270864: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270888u;
            goto label_270888;
        }
    }
    ctx->pc = 0x270868u;
label_270868:
    // 0x270868: 0xc087502  jal         func_21D408
label_27086c:
    if (ctx->pc == 0x27086Cu) {
        ctx->pc = 0x27086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270868u;
        // 0x27086c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270870u;
        goto label_270870;
    }
    ctx->pc = 0x270868u;
    SET_GPR_U32(ctx, 31, 0x270870u);
    ctx->pc = 0x27086Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270868u;
    // 0x27086c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x270868u, 0x270870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270870u;
label_270870:
    // 0x270870: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x270870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_270874:
    // 0x270874: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x270874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_270878:
    // 0x270878: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_27087c:
    if (ctx->pc == 0x27087Cu) {
        ctx->pc = 0x27087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270878u;
        // 0x27087c: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270880u;
        goto label_270880;
    }
    ctx->pc = 0x270878u;
    {
        const bool branch_taken_0x270878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x270878) {
            ctx->pc = 0x27087Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270878u;
            // 0x27087c: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270888u;
            goto label_270888;
        }
    }
    ctx->pc = 0x270880u;
label_270880:
    // 0x270880: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x270880u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_270884:
    // 0x270884: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x270884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_270888:
    // 0x270888: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_27088c:
    if (ctx->pc == 0x27088Cu) {
        ctx->pc = 0x27088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270888u;
        // 0x27088c: 0xac5e00b4  sw          $fp, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270890u;
        goto label_270890;
    }
    ctx->pc = 0x270888u;
    {
        const bool branch_taken_0x270888 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270888u;
        // 0x27088c: 0xac5e00b4  sw          $fp, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270888) {
            ctx->pc = 0x2708B0u;
            goto label_2708b0;
        }
    }
    ctx->pc = 0x270890u;
label_270890:
    // 0x270890: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x270890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_270894:
    // 0x270894: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x270894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_270898:
    // 0x270898: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x270898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_27089c:
    // 0x27089c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27089cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2708a0:
    // 0x2708a0: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x2708a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2708a4:
    // 0x2708a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2708a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2708a8:
    // 0x2708a8: 0xc04159e  jal         func_105678
label_2708ac:
    if (ctx->pc == 0x2708ACu) {
        ctx->pc = 0x2708ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708A8u;
        // 0x2708ac: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708B0u;
        goto label_2708b0;
    }
    ctx->pc = 0x2708A8u;
    SET_GPR_U32(ctx, 31, 0x2708B0u);
    ctx->pc = 0x2708ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2708A8u;
    // 0x2708ac: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x2708A8u, 0x2708B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708B0u;
label_2708b0:
    // 0x2708b0: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2708b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2708b4:
    // 0x2708b4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2708b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2708b8:
    // 0x2708b8: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_2708bc:
    if (ctx->pc == 0x2708BCu) {
        ctx->pc = 0x2708BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708B8u;
        // 0x2708bc: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708C0u;
        goto label_2708c0;
    }
    ctx->pc = 0x2708B8u;
    {
        const bool branch_taken_0x2708b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708B8u;
        // 0x2708bc: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708b8) {
            ctx->pc = 0x270900u;
            goto label_270900;
        }
    }
    ctx->pc = 0x2708C0u;
label_2708c0:
    // 0x2708c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2708c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2708c4:
    // 0x2708c4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2708c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2708c8:
    // 0x2708c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2708c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2708cc:
    // 0x2708cc: 0x40f809  jalr        $v0
label_2708d0:
    if (ctx->pc == 0x2708D0u) {
        ctx->pc = 0x2708D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708CCu;
        // 0x2708d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708D4u;
        goto label_2708d4;
    }
    ctx->pc = 0x2708CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2708D4u);
        ctx->pc = 0x2708D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708CCu;
        // 0x2708d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2708CCu, 0x2708D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2708D4u;
label_2708d4:
    // 0x2708d4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2708d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2708d8:
    // 0x2708d8: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2708d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_2708dc:
    // 0x2708dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2708dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2708e0:
    // 0x2708e0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2708e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2708e4:
    // 0x2708e4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2708e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2708e8:
    // 0x2708e8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2708e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2708ec:
    // 0x2708ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2708ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2708f0:
    // 0x2708f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2708f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2708f4:
    // 0x2708f4: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x2708f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2708f8:
    // 0x2708f8: 0xc041664  jal         func_105990
label_2708fc:
    if (ctx->pc == 0x2708FCu) {
        ctx->pc = 0x2708FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708F8u;
        // 0x2708fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270900u;
        goto label_270900;
    }
    ctx->pc = 0x2708F8u;
    SET_GPR_U32(ctx, 31, 0x270900u);
    ctx->pc = 0x2708FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2708F8u;
    // 0x2708fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2708F8u, 0x270900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270900u;
label_270900:
    // 0x270900: 0x12c00010  beqz        $s6, . + 4 + (0x10 << 2)
label_270904:
    if (ctx->pc == 0x270904u) {
        ctx->pc = 0x270908u;
        goto label_270908;
    }
    ctx->pc = 0x270900u;
    {
        const bool branch_taken_0x270900 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x270900) {
            ctx->pc = 0x270944u;
            goto label_270944;
        }
    }
    ctx->pc = 0x270908u;
label_270908:
    // 0x270908: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x270908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27090c:
    // 0x27090c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x27090cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_270910:
    // 0x270910: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x270910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_270914:
    // 0x270914: 0x40f809  jalr        $v0
label_270918:
    if (ctx->pc == 0x270918u) {
        ctx->pc = 0x270918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270914u;
        // 0x270918: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27091Cu;
        goto label_27091c;
    }
    ctx->pc = 0x270914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27091Cu);
        ctx->pc = 0x270918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270914u;
        // 0x270918: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270914u, 0x27091Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27091Cu;
label_27091c:
    // 0x27091c: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x27091cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_270920:
    // 0x270920: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x270920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_270924:
    // 0x270924: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x270924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270928:
    // 0x270928: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x270928u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27092c:
    // 0x27092c: 0x254a0560  addiu       $t2, $t2, 0x560
    ctx->pc = 0x27092cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1376));
label_270930:
    // 0x270930: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x270930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_270934:
    // 0x270934: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x270934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_270938:
    // 0x270938: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x270938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27093c:
    // 0x27093c: 0xc041664  jal         func_105990
label_270940:
    if (ctx->pc == 0x270940u) {
        ctx->pc = 0x270940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27093Cu;
        // 0x270940: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270944u;
        goto label_270944;
    }
    ctx->pc = 0x27093Cu;
    SET_GPR_U32(ctx, 31, 0x270944u);
    ctx->pc = 0x270940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27093Cu;
    // 0x270940: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x27093Cu, 0x270944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270944u;
label_270944:
    // 0x270944: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
label_270948:
    if (ctx->pc == 0x270948u) {
        ctx->pc = 0x270948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270944u;
        // 0x270948: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27094Cu;
        goto label_27094c;
    }
    ctx->pc = 0x270944u;
    {
        const bool branch_taken_0x270944 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x270948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270944u;
        // 0x270948: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270944) {
            ctx->pc = 0x27096Cu;
            goto label_27096c;
        }
    }
    ctx->pc = 0x27094Cu;
label_27094c:
    // 0x27094c: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x27094cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_270950:
    // 0x270950: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x270950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_270954:
    // 0x270954: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x270954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_270958:
    // 0x270958: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x270958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_27095c:
    // 0x27095c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x27095cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_270960:
    // 0x270960: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x270960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_270964:
    // 0x270964: 0xc041b20  jal         func_106C80
label_270968:
    if (ctx->pc == 0x270968u) {
        ctx->pc = 0x270968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270964u;
        // 0x270968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27096Cu;
        goto label_27096c;
    }
    ctx->pc = 0x270964u;
    SET_GPR_U32(ctx, 31, 0x27096Cu);
    ctx->pc = 0x270968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270964u;
    // 0x270968: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x270964u, 0x27096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27096Cu;
label_27096c:
    // 0x27096c: 0xc05d484  jal         func_175210
label_270970:
    if (ctx->pc == 0x270970u) {
        ctx->pc = 0x270970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27096Cu;
        // 0x270970: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270974u;
        goto label_270974;
    }
    ctx->pc = 0x27096Cu;
    SET_GPR_U32(ctx, 31, 0x270974u);
    ctx->pc = 0x270970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27096Cu;
    // 0x270970: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x27096Cu, 0x270974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270974u;
label_270974:
    // 0x270974: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x270974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_270978:
    // 0x270978: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x270978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_27097c:
    // 0x27097c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x27097cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_270980:
    // 0x270980: 0xa0f809  jalr        $a1
label_270984:
    if (ctx->pc == 0x270984u) {
        ctx->pc = 0x270984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270980u;
        // 0x270984: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270988u;
        goto label_270988;
    }
    ctx->pc = 0x270980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x270988u);
        ctx->pc = 0x270984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270980u;
        // 0x270984: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270980u, 0x270988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270988u;
label_270988:
    // 0x270988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27098c:
    // 0x27098c: 0xc087016  jal         func_21C058
label_270990:
    if (ctx->pc == 0x270990u) {
        ctx->pc = 0x270990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27098Cu;
        // 0x270990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270994u;
        goto label_270994;
    }
    ctx->pc = 0x27098Cu;
    SET_GPR_U32(ctx, 31, 0x270994u);
    ctx->pc = 0x270990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27098Cu;
    // 0x270990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x27098Cu, 0x270994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270994u;
label_270994:
    // 0x270994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_270998:
    // 0x270998: 0xc089990  jal         func_226640
label_27099c:
    if (ctx->pc == 0x27099Cu) {
        ctx->pc = 0x27099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270998u;
        // 0x27099c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2709A0u;
        goto label_2709a0;
    }
    ctx->pc = 0x270998u;
    SET_GPR_U32(ctx, 31, 0x2709A0u);
    ctx->pc = 0x27099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270998u;
    // 0x27099c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x270998u, 0x2709A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709A0u;
label_2709a0:
    // 0x2709a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2709a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2709a4:
    // 0x2709a4: 0xc05d53a  jal         func_1754E8
label_2709a8:
    if (ctx->pc == 0x2709A8u) {
        ctx->pc = 0x2709A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709A4u;
        // 0x2709a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2709ACu;
        goto label_2709ac;
    }
    ctx->pc = 0x2709A4u;
    SET_GPR_U32(ctx, 31, 0x2709ACu);
    ctx->pc = 0x2709A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709A4u;
    // 0x2709a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2709A4u, 0x2709ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709ACu;
label_2709ac:
    // 0x2709ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2709acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2709b0:
    // 0x2709b0: 0xc05d4f6  jal         func_1753D8
label_2709b4:
    if (ctx->pc == 0x2709B4u) {
        ctx->pc = 0x2709B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709B0u;
        // 0x2709b4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2709B8u;
        goto label_2709b8;
    }
    ctx->pc = 0x2709B0u;
    SET_GPR_U32(ctx, 31, 0x2709B8u);
    ctx->pc = 0x2709B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709B0u;
    // 0x2709b4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2709B0u, 0x2709B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709B8u;
label_2709b8:
    // 0x2709b8: 0xc089b98  jal         func_226E60
label_2709bc:
    if (ctx->pc == 0x2709BCu) {
        ctx->pc = 0x2709BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709B8u;
        // 0x2709bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2709C0u;
        goto label_2709c0;
    }
    ctx->pc = 0x2709B8u;
    SET_GPR_U32(ctx, 31, 0x2709C0u);
    ctx->pc = 0x2709BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709B8u;
    // 0x2709bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x2709B8u, 0x2709C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709C0u;
label_2709c0:
    // 0x2709c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2709c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2709c4:
    // 0x2709c4: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
label_2709c8:
    if (ctx->pc == 0x2709C8u) {
        ctx->pc = 0x2709C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709C4u;
        // 0x2709c8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2709CCu;
        goto label_2709cc;
    }
    ctx->pc = 0x2709C4u;
    {
        const bool branch_taken_0x2709c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709c4) {
            ctx->pc = 0x2709C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2709C4u;
            // 0x2709c8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270A40u;
            goto label_270a40;
        }
    }
    ctx->pc = 0x2709CCu;
label_2709cc:
    // 0x2709cc: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x2709ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_2709d0:
    // 0x2709d0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2709d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2709d4:
    // 0x2709d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2709d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2709d8:
    // 0x2709d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2709dc:
    if (ctx->pc == 0x2709DCu) {
        ctx->pc = 0x2709DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709D8u;
        // 0x2709dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2709E0u;
        goto label_2709e0;
    }
    ctx->pc = 0x2709D8u;
    {
        const bool branch_taken_0x2709d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709D8u;
        // 0x2709dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709d8) {
            ctx->pc = 0x270A14u;
            goto label_270a14;
        }
    }
    ctx->pc = 0x2709E0u;
label_2709e0:
    // 0x2709e0: 0xc087502  jal         func_21D408
label_2709e4:
    if (ctx->pc == 0x2709E4u) {
        ctx->pc = 0x2709E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709E0u;
        // 0x2709e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2709E8u;
        goto label_2709e8;
    }
    ctx->pc = 0x2709E0u;
    SET_GPR_U32(ctx, 31, 0x2709E8u);
    ctx->pc = 0x2709E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709E0u;
    // 0x2709e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2709E0u, 0x2709E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709E8u;
label_2709e8:
    // 0x2709e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2709e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2709ec:
    // 0x2709ec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2709ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2709f0:
    // 0x2709f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2709f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2709f4:
    // 0x2709f4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2709f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2709f8:
    // 0x2709f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2709fc:
    if (ctx->pc == 0x2709FCu) {
        ctx->pc = 0x270A00u;
        goto label_270a00;
    }
    ctx->pc = 0x2709F8u;
    {
        const bool branch_taken_0x2709f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2709f8) {
            ctx->pc = 0x270A08u;
            goto label_270a08;
        }
    }
    ctx->pc = 0x270A00u;
label_270a00:
    // 0x270a00: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x270a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_270a04:
    // 0x270a04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x270a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_270a08:
    // 0x270a08: 0xc0420f4  jal         func_1083D0
label_270a0c:
    if (ctx->pc == 0x270A0Cu) {
        ctx->pc = 0x270A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A08u;
        // 0x270a0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A10u;
        goto label_270a10;
    }
    ctx->pc = 0x270A08u;
    SET_GPR_U32(ctx, 31, 0x270A10u);
    ctx->pc = 0x270A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A08u;
    // 0x270a0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083D0u, 0x270A08u, 0x270A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A10u;
label_270a10:
    // 0x270a10: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x270a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270a14:
    // 0x270a14: 0xc040680  jal         func_101A00
label_270a18:
    if (ctx->pc == 0x270A18u) {
        ctx->pc = 0x270A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A14u;
        // 0x270a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A1Cu;
        goto label_270a1c;
    }
    ctx->pc = 0x270A14u;
    SET_GPR_U32(ctx, 31, 0x270A1Cu);
    ctx->pc = 0x270A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A14u;
    // 0x270a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x270A14u, 0x270A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A1Cu;
label_270a1c:
    // 0x270a1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270a20:
    // 0x270a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_270a24:
    // 0x270a24: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x270a24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_270a28:
    // 0x270a28: 0xc088736  jal         func_221CD8
label_270a2c:
    if (ctx->pc == 0x270A2Cu) {
        ctx->pc = 0x270A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A28u;
        // 0x270a2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A30u;
        goto label_270a30;
    }
    ctx->pc = 0x270A28u;
    SET_GPR_U32(ctx, 31, 0x270A30u);
    ctx->pc = 0x270A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A28u;
    // 0x270a2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221CD8u, 0x270A28u, 0x270A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A30u;
label_270a30:
    // 0x270a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x270a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_270a34:
    // 0x270a34: 0xc087016  jal         func_21C058
label_270a38:
    if (ctx->pc == 0x270A38u) {
        ctx->pc = 0x270A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A34u;
        // 0x270a38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A3Cu;
        goto label_270a3c;
    }
    ctx->pc = 0x270A34u;
    SET_GPR_U32(ctx, 31, 0x270A3Cu);
    ctx->pc = 0x270A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A34u;
    // 0x270a38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x270A34u, 0x270A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A3Cu;
label_270a3c:
    // 0x270a3c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x270a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_270a40:
    // 0x270a40: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x270a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_270a44:
    // 0x270a44: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x270a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_270a48:
    // 0x270a48: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x270a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_270a4c:
    // 0x270a4c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x270a4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_270a50:
    // 0x270a50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x270a50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_270a54:
    // 0x270a54: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x270a54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_270a58:
    // 0x270a58: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x270a58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_270a5c:
    // 0x270a5c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x270a5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_270a60:
    // 0x270a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x270a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_270a64:
    // 0x270a64: 0x3e00008  jr          $ra
label_270a68:
    if (ctx->pc == 0x270A68u) {
        ctx->pc = 0x270A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A64u;
        // 0x270a68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A6Cu;
        goto label_270a6c;
    }
    ctx->pc = 0x270A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A64u;
        // 0x270a68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270A6Cu;
label_270a6c:
    // 0x270a6c: 0x0  nop
    ctx->pc = 0x270a6cu;
    // NOP
    ctx->pc = 0x270a70u;
}
