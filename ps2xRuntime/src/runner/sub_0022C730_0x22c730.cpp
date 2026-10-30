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

// Function: sub_0022C730
// Address: 0x22c730 - 0x22cb00
void sub_0022C730_0x22c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C730_0x22c730");
#endif

    switch (ctx->pc) {
        case 0x22c730u: goto label_22c730;
        case 0x22c734u: goto label_22c734;
        case 0x22c738u: goto label_22c738;
        case 0x22c73cu: goto label_22c73c;
        case 0x22c740u: goto label_22c740;
        case 0x22c744u: goto label_22c744;
        case 0x22c748u: goto label_22c748;
        case 0x22c74cu: goto label_22c74c;
        case 0x22c750u: goto label_22c750;
        case 0x22c754u: goto label_22c754;
        case 0x22c758u: goto label_22c758;
        case 0x22c75cu: goto label_22c75c;
        case 0x22c760u: goto label_22c760;
        case 0x22c764u: goto label_22c764;
        case 0x22c768u: goto label_22c768;
        case 0x22c76cu: goto label_22c76c;
        case 0x22c770u: goto label_22c770;
        case 0x22c774u: goto label_22c774;
        case 0x22c778u: goto label_22c778;
        case 0x22c77cu: goto label_22c77c;
        case 0x22c780u: goto label_22c780;
        case 0x22c784u: goto label_22c784;
        case 0x22c788u: goto label_22c788;
        case 0x22c78cu: goto label_22c78c;
        case 0x22c790u: goto label_22c790;
        case 0x22c794u: goto label_22c794;
        case 0x22c798u: goto label_22c798;
        case 0x22c79cu: goto label_22c79c;
        case 0x22c7a0u: goto label_22c7a0;
        case 0x22c7a4u: goto label_22c7a4;
        case 0x22c7a8u: goto label_22c7a8;
        case 0x22c7acu: goto label_22c7ac;
        case 0x22c7b0u: goto label_22c7b0;
        case 0x22c7b4u: goto label_22c7b4;
        case 0x22c7b8u: goto label_22c7b8;
        case 0x22c7bcu: goto label_22c7bc;
        case 0x22c7c0u: goto label_22c7c0;
        case 0x22c7c4u: goto label_22c7c4;
        case 0x22c7c8u: goto label_22c7c8;
        case 0x22c7ccu: goto label_22c7cc;
        case 0x22c7d0u: goto label_22c7d0;
        case 0x22c7d4u: goto label_22c7d4;
        case 0x22c7d8u: goto label_22c7d8;
        case 0x22c7dcu: goto label_22c7dc;
        case 0x22c7e0u: goto label_22c7e0;
        case 0x22c7e4u: goto label_22c7e4;
        case 0x22c7e8u: goto label_22c7e8;
        case 0x22c7ecu: goto label_22c7ec;
        case 0x22c7f0u: goto label_22c7f0;
        case 0x22c7f4u: goto label_22c7f4;
        case 0x22c7f8u: goto label_22c7f8;
        case 0x22c7fcu: goto label_22c7fc;
        case 0x22c800u: goto label_22c800;
        case 0x22c804u: goto label_22c804;
        case 0x22c808u: goto label_22c808;
        case 0x22c80cu: goto label_22c80c;
        case 0x22c810u: goto label_22c810;
        case 0x22c814u: goto label_22c814;
        case 0x22c818u: goto label_22c818;
        case 0x22c81cu: goto label_22c81c;
        case 0x22c820u: goto label_22c820;
        case 0x22c824u: goto label_22c824;
        case 0x22c828u: goto label_22c828;
        case 0x22c82cu: goto label_22c82c;
        case 0x22c830u: goto label_22c830;
        case 0x22c834u: goto label_22c834;
        case 0x22c838u: goto label_22c838;
        case 0x22c83cu: goto label_22c83c;
        case 0x22c840u: goto label_22c840;
        case 0x22c844u: goto label_22c844;
        case 0x22c848u: goto label_22c848;
        case 0x22c84cu: goto label_22c84c;
        case 0x22c850u: goto label_22c850;
        case 0x22c854u: goto label_22c854;
        case 0x22c858u: goto label_22c858;
        case 0x22c85cu: goto label_22c85c;
        case 0x22c860u: goto label_22c860;
        case 0x22c864u: goto label_22c864;
        case 0x22c868u: goto label_22c868;
        case 0x22c86cu: goto label_22c86c;
        case 0x22c870u: goto label_22c870;
        case 0x22c874u: goto label_22c874;
        case 0x22c878u: goto label_22c878;
        case 0x22c87cu: goto label_22c87c;
        case 0x22c880u: goto label_22c880;
        case 0x22c884u: goto label_22c884;
        case 0x22c888u: goto label_22c888;
        case 0x22c88cu: goto label_22c88c;
        case 0x22c890u: goto label_22c890;
        case 0x22c894u: goto label_22c894;
        case 0x22c898u: goto label_22c898;
        case 0x22c89cu: goto label_22c89c;
        case 0x22c8a0u: goto label_22c8a0;
        case 0x22c8a4u: goto label_22c8a4;
        case 0x22c8a8u: goto label_22c8a8;
        case 0x22c8acu: goto label_22c8ac;
        case 0x22c8b0u: goto label_22c8b0;
        case 0x22c8b4u: goto label_22c8b4;
        case 0x22c8b8u: goto label_22c8b8;
        case 0x22c8bcu: goto label_22c8bc;
        case 0x22c8c0u: goto label_22c8c0;
        case 0x22c8c4u: goto label_22c8c4;
        case 0x22c8c8u: goto label_22c8c8;
        case 0x22c8ccu: goto label_22c8cc;
        case 0x22c8d0u: goto label_22c8d0;
        case 0x22c8d4u: goto label_22c8d4;
        case 0x22c8d8u: goto label_22c8d8;
        case 0x22c8dcu: goto label_22c8dc;
        case 0x22c8e0u: goto label_22c8e0;
        case 0x22c8e4u: goto label_22c8e4;
        case 0x22c8e8u: goto label_22c8e8;
        case 0x22c8ecu: goto label_22c8ec;
        case 0x22c8f0u: goto label_22c8f0;
        case 0x22c8f4u: goto label_22c8f4;
        case 0x22c8f8u: goto label_22c8f8;
        case 0x22c8fcu: goto label_22c8fc;
        case 0x22c900u: goto label_22c900;
        case 0x22c904u: goto label_22c904;
        case 0x22c908u: goto label_22c908;
        case 0x22c90cu: goto label_22c90c;
        case 0x22c910u: goto label_22c910;
        case 0x22c914u: goto label_22c914;
        case 0x22c918u: goto label_22c918;
        case 0x22c91cu: goto label_22c91c;
        case 0x22c920u: goto label_22c920;
        case 0x22c924u: goto label_22c924;
        case 0x22c928u: goto label_22c928;
        case 0x22c92cu: goto label_22c92c;
        case 0x22c930u: goto label_22c930;
        case 0x22c934u: goto label_22c934;
        case 0x22c938u: goto label_22c938;
        case 0x22c93cu: goto label_22c93c;
        case 0x22c940u: goto label_22c940;
        case 0x22c944u: goto label_22c944;
        case 0x22c948u: goto label_22c948;
        case 0x22c94cu: goto label_22c94c;
        case 0x22c950u: goto label_22c950;
        case 0x22c954u: goto label_22c954;
        case 0x22c958u: goto label_22c958;
        case 0x22c95cu: goto label_22c95c;
        case 0x22c960u: goto label_22c960;
        case 0x22c964u: goto label_22c964;
        case 0x22c968u: goto label_22c968;
        case 0x22c96cu: goto label_22c96c;
        case 0x22c970u: goto label_22c970;
        case 0x22c974u: goto label_22c974;
        case 0x22c978u: goto label_22c978;
        case 0x22c97cu: goto label_22c97c;
        case 0x22c980u: goto label_22c980;
        case 0x22c984u: goto label_22c984;
        case 0x22c988u: goto label_22c988;
        case 0x22c98cu: goto label_22c98c;
        case 0x22c990u: goto label_22c990;
        case 0x22c994u: goto label_22c994;
        case 0x22c998u: goto label_22c998;
        case 0x22c99cu: goto label_22c99c;
        case 0x22c9a0u: goto label_22c9a0;
        case 0x22c9a4u: goto label_22c9a4;
        case 0x22c9a8u: goto label_22c9a8;
        case 0x22c9acu: goto label_22c9ac;
        case 0x22c9b0u: goto label_22c9b0;
        case 0x22c9b4u: goto label_22c9b4;
        case 0x22c9b8u: goto label_22c9b8;
        case 0x22c9bcu: goto label_22c9bc;
        case 0x22c9c0u: goto label_22c9c0;
        case 0x22c9c4u: goto label_22c9c4;
        case 0x22c9c8u: goto label_22c9c8;
        case 0x22c9ccu: goto label_22c9cc;
        case 0x22c9d0u: goto label_22c9d0;
        case 0x22c9d4u: goto label_22c9d4;
        case 0x22c9d8u: goto label_22c9d8;
        case 0x22c9dcu: goto label_22c9dc;
        case 0x22c9e0u: goto label_22c9e0;
        case 0x22c9e4u: goto label_22c9e4;
        case 0x22c9e8u: goto label_22c9e8;
        case 0x22c9ecu: goto label_22c9ec;
        case 0x22c9f0u: goto label_22c9f0;
        case 0x22c9f4u: goto label_22c9f4;
        case 0x22c9f8u: goto label_22c9f8;
        case 0x22c9fcu: goto label_22c9fc;
        case 0x22ca00u: goto label_22ca00;
        case 0x22ca04u: goto label_22ca04;
        case 0x22ca08u: goto label_22ca08;
        case 0x22ca0cu: goto label_22ca0c;
        case 0x22ca10u: goto label_22ca10;
        case 0x22ca14u: goto label_22ca14;
        case 0x22ca18u: goto label_22ca18;
        case 0x22ca1cu: goto label_22ca1c;
        case 0x22ca20u: goto label_22ca20;
        case 0x22ca24u: goto label_22ca24;
        case 0x22ca28u: goto label_22ca28;
        case 0x22ca2cu: goto label_22ca2c;
        case 0x22ca30u: goto label_22ca30;
        case 0x22ca34u: goto label_22ca34;
        case 0x22ca38u: goto label_22ca38;
        case 0x22ca3cu: goto label_22ca3c;
        case 0x22ca40u: goto label_22ca40;
        case 0x22ca44u: goto label_22ca44;
        case 0x22ca48u: goto label_22ca48;
        case 0x22ca4cu: goto label_22ca4c;
        case 0x22ca50u: goto label_22ca50;
        case 0x22ca54u: goto label_22ca54;
        case 0x22ca58u: goto label_22ca58;
        case 0x22ca5cu: goto label_22ca5c;
        case 0x22ca60u: goto label_22ca60;
        case 0x22ca64u: goto label_22ca64;
        case 0x22ca68u: goto label_22ca68;
        case 0x22ca6cu: goto label_22ca6c;
        case 0x22ca70u: goto label_22ca70;
        case 0x22ca74u: goto label_22ca74;
        case 0x22ca78u: goto label_22ca78;
        case 0x22ca7cu: goto label_22ca7c;
        case 0x22ca80u: goto label_22ca80;
        case 0x22ca84u: goto label_22ca84;
        case 0x22ca88u: goto label_22ca88;
        case 0x22ca8cu: goto label_22ca8c;
        case 0x22ca90u: goto label_22ca90;
        case 0x22ca94u: goto label_22ca94;
        case 0x22ca98u: goto label_22ca98;
        case 0x22ca9cu: goto label_22ca9c;
        case 0x22caa0u: goto label_22caa0;
        case 0x22caa4u: goto label_22caa4;
        case 0x22caa8u: goto label_22caa8;
        case 0x22caacu: goto label_22caac;
        case 0x22cab0u: goto label_22cab0;
        case 0x22cab4u: goto label_22cab4;
        case 0x22cab8u: goto label_22cab8;
        case 0x22cabcu: goto label_22cabc;
        case 0x22cac0u: goto label_22cac0;
        case 0x22cac4u: goto label_22cac4;
        case 0x22cac8u: goto label_22cac8;
        case 0x22caccu: goto label_22cacc;
        case 0x22cad0u: goto label_22cad0;
        case 0x22cad4u: goto label_22cad4;
        case 0x22cad8u: goto label_22cad8;
        case 0x22cadcu: goto label_22cadc;
        case 0x22cae0u: goto label_22cae0;
        case 0x22cae4u: goto label_22cae4;
        case 0x22cae8u: goto label_22cae8;
        case 0x22caecu: goto label_22caec;
        case 0x22caf0u: goto label_22caf0;
        case 0x22caf4u: goto label_22caf4;
        case 0x22caf8u: goto label_22caf8;
        case 0x22cafcu: goto label_22cafc;
        default: break;
    }

    ctx->pc = 0x22c730u;

label_22c730:
    // 0x22c730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_22c734:
    // 0x22c734: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x22c734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_22c738:
    // 0x22c738: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22c738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_22c73c:
    // 0x22c73c: 0x3407fffd  ori         $a3, $zero, 0xFFFD
    ctx->pc = 0x22c73cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
label_22c740:
    // 0x22c740: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22c740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_22c744:
    // 0x22c744: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22c744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22c748:
    // 0x22c748: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22c748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22c74c:
    // 0x22c74c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22c74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_22c750:
    // 0x22c750: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22c750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22c754:
    // 0x22c754: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22c754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_22c758:
    // 0x22c758: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x22c758u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22c75c:
    // 0x22c75c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22c760:
    // 0x22c760: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x22c760u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_22c764:
    // 0x22c764: 0x8c507198  lw          $s0, 0x7198($v0)
    ctx->pc = 0x22c764u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_22c768:
    // 0x22c768: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x22c768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_22c76c:
    // 0x22c76c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22c76cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c770:
    // 0x22c770: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22c770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22c774:
    // 0x22c774: 0xe3382b  sltu        $a3, $a3, $v1
    ctx->pc = 0x22c774u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22c778:
    // 0x22c778: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_22c77c:
    if (ctx->pc == 0x22C77Cu) {
        ctx->pc = 0x22C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C778u;
        // 0x22c77c: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C780u;
        goto label_22c780;
    }
    ctx->pc = 0x22C778u;
    {
        const bool branch_taken_0x22c778 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C778u;
        // 0x22c77c: 0xa6020010  sh          $v0, 0x10($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c778) {
            ctx->pc = 0x22C788u;
            goto label_22c788;
        }
    }
    ctx->pc = 0x22C780u;
label_22c780:
    // 0x22c780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22c784:
    // 0x22c784: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x22c784u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_22c788:
    // 0x22c788: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c78c:
    // 0x22c78c: 0x96100010  lhu         $s0, 0x10($s0)
    ctx->pc = 0x22c78cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_22c790:
    // 0x22c790: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c794:
    // 0x22c794: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c798:
    // 0x22c798: 0x40f809  jalr        $v0
label_22c79c:
    if (ctx->pc == 0x22C79Cu) {
        ctx->pc = 0x22C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C798u;
        // 0x22c79c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7A0u;
        goto label_22c7a0;
    }
    ctx->pc = 0x22C798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C7A0u);
        ctx->pc = 0x22C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C798u;
        // 0x22c79c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C798u, 0x22C7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C7A0u;
label_22c7a0:
    // 0x22c7a0: 0x504000cf  beql        $v0, $zero, . + 4 + (0xCF << 2)
label_22c7a4:
    if (ctx->pc == 0x22C7A4u) {
        ctx->pc = 0x22C7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7A0u;
        // 0x22c7a4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7A8u;
        goto label_22c7a8;
    }
    ctx->pc = 0x22C7A0u;
    {
        const bool branch_taken_0x22c7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c7a0) {
            ctx->pc = 0x22C7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22C7A0u;
            // 0x22c7a4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22CAE0u;
            goto label_22cae0;
        }
    }
    ctx->pc = 0x22C7A8u;
label_22c7a8:
    // 0x22c7a8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22c7ac:
    // 0x22c7ac: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c7acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c7b0:
    // 0x22c7b0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c7b4:
    // 0x22c7b4: 0x40f809  jalr        $v0
label_22c7b8:
    if (ctx->pc == 0x22C7B8u) {
        ctx->pc = 0x22C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7B4u;
        // 0x22c7b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7BCu;
        goto label_22c7bc;
    }
    ctx->pc = 0x22C7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C7BCu);
        ctx->pc = 0x22C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7B4u;
        // 0x22c7b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C7B4u, 0x22C7BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C7BCu;
label_22c7bc:
    // 0x22c7bc: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
label_22c7c0:
    if (ctx->pc == 0x22C7C0u) {
        ctx->pc = 0x22C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7BCu;
        // 0x22c7c0: 0x3210ffff  andi        $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7C4u;
        goto label_22c7c4;
    }
    ctx->pc = 0x22C7BCu;
    {
        const bool branch_taken_0x22c7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7BCu;
        // 0x22c7c0: 0x3210ffff  andi        $s0, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c7bc) {
            ctx->pc = 0x22CADCu;
            goto label_22cadc;
        }
    }
    ctx->pc = 0x22C7C4u;
label_22c7c4:
    // 0x22c7c4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c7c8:
    // 0x22c7c8: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22c7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22c7cc:
    // 0x22c7cc: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22c7ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22c7d0:
    // 0x22c7d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x22c7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_22c7d4:
    // 0x22c7d4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c7d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c7d8:
    // 0x22c7d8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c7dc:
    // 0x22c7dc: 0x40f809  jalr        $v0
label_22c7e0:
    if (ctx->pc == 0x22C7E0u) {
        ctx->pc = 0x22C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7DCu;
        // 0x22c7e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7E4u;
        goto label_22c7e4;
    }
    ctx->pc = 0x22C7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C7E4u);
        ctx->pc = 0x22C7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7DCu;
        // 0x22c7e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C7DCu, 0x22C7E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C7E4u;
label_22c7e4:
    // 0x22c7e4: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x22c7e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_22c7e8:
    // 0x22c7e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22c7ec:
    // 0x22c7ec: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x22c7ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_22c7f0:
    // 0x22c7f0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x22c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_22c7f4:
    // 0x22c7f4: 0x40f809  jalr        $v0
label_22c7f8:
    if (ctx->pc == 0x22C7F8u) {
        ctx->pc = 0x22C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7F4u;
        // 0x22c7f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C7FCu;
        goto label_22c7fc;
    }
    ctx->pc = 0x22C7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C7FCu);
        ctx->pc = 0x22C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C7F4u;
        // 0x22c7f8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C7F4u, 0x22C7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C7FCu;
label_22c7fc:
    // 0x22c7fc: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x22c7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_22c800:
    // 0x22c800: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22c804:
    // 0x22c804: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c804u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22c808:
    // 0x22c808: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22c80c:
    // 0x22c80c: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22c80cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22c810:
    // 0x22c810: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22c814:
    // 0x22c814: 0x60f809  jalr        $v1
label_22c818:
    if (ctx->pc == 0x22C818u) {
        ctx->pc = 0x22C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C814u;
        // 0x22c818: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C81Cu;
        goto label_22c81c;
    }
    ctx->pc = 0x22C814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22C81Cu);
        ctx->pc = 0x22C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C814u;
        // 0x22c818: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C814u, 0x22C81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C81Cu;
label_22c81c:
    // 0x22c81c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x22c81cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c820:
    // 0x22c820: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22c820u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22c824:
    // 0x22c824: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22c824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22c828:
    // 0x22c828: 0x84c400e0  lh          $a0, 0xE0($a2)
    ctx->pc = 0x22c828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 224)));
label_22c82c:
    // 0x22c82c: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x22c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_22c830:
    // 0x22c830: 0x40f809  jalr        $v0
label_22c834:
    if (ctx->pc == 0x22C834u) {
        ctx->pc = 0x22C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C830u;
        // 0x22c834: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C838u;
        goto label_22c838;
    }
    ctx->pc = 0x22C830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C838u);
        ctx->pc = 0x22C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C830u;
        // 0x22c834: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C830u, 0x22C838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C838u;
label_22c838:
    // 0x22c838: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22c838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_22c83c:
    // 0x22c83c: 0xc089988  jal         func_226620
label_22c840:
    if (ctx->pc == 0x22C840u) {
        ctx->pc = 0x22C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C83Cu;
        // 0x22c840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C844u;
        goto label_22c844;
    }
    ctx->pc = 0x22C83Cu;
    SET_GPR_U32(ctx, 31, 0x22C844u);
    ctx->pc = 0x22C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C83Cu;
    // 0x22c840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22C83Cu, 0x22C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C844u;
label_22c844:
    // 0x22c844: 0xc095f3a  jal         func_257CE8
label_22c848:
    if (ctx->pc == 0x22C848u) {
        ctx->pc = 0x22C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C844u;
        // 0x22c848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C84Cu;
        goto label_22c84c;
    }
    ctx->pc = 0x22C844u;
    SET_GPR_U32(ctx, 31, 0x22C84Cu);
    ctx->pc = 0x22C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C844u;
    // 0x22c848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257CE8u, 0x22C844u, 0x22C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C84Cu;
label_22c84c:
    // 0x22c84c: 0xc095f5c  jal         func_257D70
label_22c850:
    if (ctx->pc == 0x22C850u) {
        ctx->pc = 0x22C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C84Cu;
        // 0x22c850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C854u;
        goto label_22c854;
    }
    ctx->pc = 0x22C84Cu;
    SET_GPR_U32(ctx, 31, 0x22C854u);
    ctx->pc = 0x22C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C84Cu;
    // 0x22c850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257D70u, 0x22C84Cu, 0x22C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C854u;
label_22c854:
    // 0x22c854: 0xc088ee6  jal         func_223B98
label_22c858:
    if (ctx->pc == 0x22C858u) {
        ctx->pc = 0x22C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C854u;
        // 0x22c858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C85Cu;
        goto label_22c85c;
    }
    ctx->pc = 0x22C854u;
    SET_GPR_U32(ctx, 31, 0x22C85Cu);
    ctx->pc = 0x22C858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C854u;
    // 0x22c858: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x22C854u, 0x22C85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C85Cu;
label_22c85c:
    // 0x22c85c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c860:
    if (ctx->pc == 0x22C860u) {
        ctx->pc = 0x22C864u;
        goto label_22c864;
    }
    ctx->pc = 0x22C85Cu;
    {
        const bool branch_taken_0x22c85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c85c) {
            ctx->pc = 0x22C86Cu;
            goto label_22c86c;
        }
    }
    ctx->pc = 0x22C864u;
label_22c864:
    // 0x22c864: 0xc08bcf2  jal         func_22F3C8
label_22c868:
    if (ctx->pc == 0x22C868u) {
        ctx->pc = 0x22C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C864u;
        // 0x22c868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C86Cu;
        goto label_22c86c;
    }
    ctx->pc = 0x22C864u;
    SET_GPR_U32(ctx, 31, 0x22C86Cu);
    ctx->pc = 0x22C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C864u;
    // 0x22c868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F3C8u, 0x22C864u, 0x22C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C86Cu;
label_22c86c:
    // 0x22c86c: 0xc088ef0  jal         func_223BC0
label_22c870:
    if (ctx->pc == 0x22C870u) {
        ctx->pc = 0x22C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C86Cu;
        // 0x22c870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C874u;
        goto label_22c874;
    }
    ctx->pc = 0x22C86Cu;
    SET_GPR_U32(ctx, 31, 0x22C874u);
    ctx->pc = 0x22C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C86Cu;
    // 0x22c870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x22C86Cu, 0x22C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C874u;
label_22c874:
    // 0x22c874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c878:
    if (ctx->pc == 0x22C878u) {
        ctx->pc = 0x22C87Cu;
        goto label_22c87c;
    }
    ctx->pc = 0x22C874u;
    {
        const bool branch_taken_0x22c874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c874) {
            ctx->pc = 0x22C884u;
            goto label_22c884;
        }
    }
    ctx->pc = 0x22C87Cu;
label_22c87c:
    // 0x22c87c: 0xc08be36  jal         func_22F8D8
label_22c880:
    if (ctx->pc == 0x22C880u) {
        ctx->pc = 0x22C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C87Cu;
        // 0x22c880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C884u;
        goto label_22c884;
    }
    ctx->pc = 0x22C87Cu;
    SET_GPR_U32(ctx, 31, 0x22C884u);
    ctx->pc = 0x22C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C87Cu;
    // 0x22c880: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x22C87Cu, 0x22C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C884u;
label_22c884:
    // 0x22c884: 0xc088ee6  jal         func_223B98
label_22c888:
    if (ctx->pc == 0x22C888u) {
        ctx->pc = 0x22C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C884u;
        // 0x22c888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C88Cu;
        goto label_22c88c;
    }
    ctx->pc = 0x22C884u;
    SET_GPR_U32(ctx, 31, 0x22C88Cu);
    ctx->pc = 0x22C888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C884u;
    // 0x22c888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B98u, 0x22C884u, 0x22C88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C88Cu;
label_22c88c:
    // 0x22c88c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c890:
    if (ctx->pc == 0x22C890u) {
        ctx->pc = 0x22C894u;
        goto label_22c894;
    }
    ctx->pc = 0x22C88Cu;
    {
        const bool branch_taken_0x22c88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c88c) {
            ctx->pc = 0x22C89Cu;
            goto label_22c89c;
        }
    }
    ctx->pc = 0x22C894u;
label_22c894:
    // 0x22c894: 0xc08bcf2  jal         func_22F3C8
label_22c898:
    if (ctx->pc == 0x22C898u) {
        ctx->pc = 0x22C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C894u;
        // 0x22c898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C89Cu;
        goto label_22c89c;
    }
    ctx->pc = 0x22C894u;
    SET_GPR_U32(ctx, 31, 0x22C89Cu);
    ctx->pc = 0x22C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C894u;
    // 0x22c898: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F3C8u, 0x22C894u, 0x22C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C89Cu;
label_22c89c:
    // 0x22c89c: 0xc088ef0  jal         func_223BC0
label_22c8a0:
    if (ctx->pc == 0x22C8A0u) {
        ctx->pc = 0x22C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C89Cu;
        // 0x22c8a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8A4u;
        goto label_22c8a4;
    }
    ctx->pc = 0x22C89Cu;
    SET_GPR_U32(ctx, 31, 0x22C8A4u);
    ctx->pc = 0x22C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C89Cu;
    // 0x22c8a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x22C89Cu, 0x22C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8A4u;
label_22c8a4:
    // 0x22c8a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c8a8:
    if (ctx->pc == 0x22C8A8u) {
        ctx->pc = 0x22C8ACu;
        goto label_22c8ac;
    }
    ctx->pc = 0x22C8A4u;
    {
        const bool branch_taken_0x22c8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c8a4) {
            ctx->pc = 0x22C8B4u;
            goto label_22c8b4;
        }
    }
    ctx->pc = 0x22C8ACu;
label_22c8ac:
    // 0x22c8ac: 0xc08be36  jal         func_22F8D8
label_22c8b0:
    if (ctx->pc == 0x22C8B0u) {
        ctx->pc = 0x22C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8ACu;
        // 0x22c8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8B4u;
        goto label_22c8b4;
    }
    ctx->pc = 0x22C8ACu;
    SET_GPR_U32(ctx, 31, 0x22C8B4u);
    ctx->pc = 0x22C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8ACu;
    // 0x22c8b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x22C8ACu, 0x22C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8B4u;
label_22c8b4:
    // 0x22c8b4: 0xc088e30  jal         func_2238C0
label_22c8b8:
    if (ctx->pc == 0x22C8B8u) {
        ctx->pc = 0x22C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8B4u;
        // 0x22c8b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8BCu;
        goto label_22c8bc;
    }
    ctx->pc = 0x22C8B4u;
    SET_GPR_U32(ctx, 31, 0x22C8BCu);
    ctx->pc = 0x22C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8B4u;
    // 0x22c8b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x22C8B4u, 0x22C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8BCu;
label_22c8bc:
    // 0x22c8bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22c8c0:
    if (ctx->pc == 0x22C8C0u) {
        ctx->pc = 0x22C8C4u;
        goto label_22c8c4;
    }
    ctx->pc = 0x22C8BCu;
    {
        const bool branch_taken_0x22c8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c8bc) {
            ctx->pc = 0x22C8DCu;
            goto label_22c8dc;
        }
    }
    ctx->pc = 0x22C8C4u;
label_22c8c4:
    // 0x22c8c4: 0xc0e4060  jal         func_390180
label_22c8c8:
    if (ctx->pc == 0x22C8C8u) {
        ctx->pc = 0x22C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8C4u;
        // 0x22c8c8: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8CCu;
        goto label_22c8cc;
    }
    ctx->pc = 0x22C8C4u;
    SET_GPR_U32(ctx, 31, 0x22C8CCu);
    ctx->pc = 0x22C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8C4u;
    // 0x22c8c8: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x22C8C4u, 0x22C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8CCu;
label_22c8cc:
    // 0x22c8cc: 0xc0e6ee8  jal         func_39BBA0
label_22c8d0:
    if (ctx->pc == 0x22C8D0u) {
        ctx->pc = 0x22C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8CCu;
        // 0x22c8d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8D4u;
        goto label_22c8d4;
    }
    ctx->pc = 0x22C8CCu;
    SET_GPR_U32(ctx, 31, 0x22C8D4u);
    ctx->pc = 0x22C8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8CCu;
    // 0x22c8d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x22C8CCu, 0x22C8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8D4u;
label_22c8d4:
    // 0x22c8d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c8d8:
    if (ctx->pc == 0x22C8D8u) {
        ctx->pc = 0x22C8DCu;
        goto label_22c8dc;
    }
    ctx->pc = 0x22C8D4u;
    {
        const bool branch_taken_0x22c8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c8d4) {
            ctx->pc = 0x22C8E4u;
            goto label_22c8e4;
        }
    }
    ctx->pc = 0x22C8DCu;
label_22c8dc:
    // 0x22c8dc: 0xc08ba12  jal         func_22E848
label_22c8e0:
    if (ctx->pc == 0x22C8E0u) {
        ctx->pc = 0x22C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8DCu;
        // 0x22c8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8E4u;
        goto label_22c8e4;
    }
    ctx->pc = 0x22C8DCu;
    SET_GPR_U32(ctx, 31, 0x22C8E4u);
    ctx->pc = 0x22C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8DCu;
    // 0x22c8e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E848u, 0x22C8DCu, 0x22C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8E4u;
label_22c8e4:
    // 0x22c8e4: 0xc08a014  jal         func_228050
label_22c8e8:
    if (ctx->pc == 0x22C8E8u) {
        ctx->pc = 0x22C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8E4u;
        // 0x22c8e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8ECu;
        goto label_22c8ec;
    }
    ctx->pc = 0x22C8E4u;
    SET_GPR_U32(ctx, 31, 0x22C8ECu);
    ctx->pc = 0x22C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8E4u;
    // 0x22c8e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x22C8E4u, 0x22C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8ECu;
label_22c8ec:
    // 0x22c8ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22c8f0:
    if (ctx->pc == 0x22C8F0u) {
        ctx->pc = 0x22C8F4u;
        goto label_22c8f4;
    }
    ctx->pc = 0x22C8ECu;
    {
        const bool branch_taken_0x22c8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22c8ec) {
            ctx->pc = 0x22C8FCu;
            goto label_22c8fc;
        }
    }
    ctx->pc = 0x22C8F4u;
label_22c8f4:
    // 0x22c8f4: 0xc08b58a  jal         func_22D628
label_22c8f8:
    if (ctx->pc == 0x22C8F8u) {
        ctx->pc = 0x22C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8F4u;
        // 0x22c8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C8FCu;
        goto label_22c8fc;
    }
    ctx->pc = 0x22C8F4u;
    SET_GPR_U32(ctx, 31, 0x22C8FCu);
    ctx->pc = 0x22C8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C8F4u;
    // 0x22c8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D628u, 0x22C8F4u, 0x22C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C8FCu;
label_22c8fc:
    // 0x22c8fc: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_22c900:
    if (ctx->pc == 0x22C900u) {
        ctx->pc = 0x22C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8FCu;
        // 0x22c900: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C904u;
        goto label_22c904;
    }
    ctx->pc = 0x22C8FCu;
    {
        const bool branch_taken_0x22c8fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C8FCu;
        // 0x22c900: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c8fc) {
            ctx->pc = 0x22C920u;
            goto label_22c920;
        }
    }
    ctx->pc = 0x22C904u;
label_22c904:
    // 0x22c904: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22c904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22c908:
    // 0x22c908: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22c908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22c90c:
    // 0x22c90c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22c90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22c910:
    // 0x22c910: 0x40f809  jalr        $v0
label_22c914:
    if (ctx->pc == 0x22C914u) {
        ctx->pc = 0x22C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C910u;
        // 0x22c914: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C918u;
        goto label_22c918;
    }
    ctx->pc = 0x22C910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C918u);
        ctx->pc = 0x22C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C910u;
        // 0x22c914: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C910u, 0x22C918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C918u;
label_22c918:
    // 0x22c918: 0x10000003  b           . + 4 + (0x3 << 2)
label_22c91c:
    if (ctx->pc == 0x22C91Cu) {
        ctx->pc = 0x22C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C918u;
        // 0x22c91c: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C920u;
        goto label_22c920;
    }
    ctx->pc = 0x22C918u;
    {
        const bool branch_taken_0x22c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C918u;
        // 0x22c91c: 0xae2200c4  sw          $v0, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c918) {
            ctx->pc = 0x22C928u;
            goto label_22c928;
        }
    }
    ctx->pc = 0x22C920u;
label_22c920:
    // 0x22c920: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22c924:
    // 0x22c924: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x22c924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
label_22c928:
    // 0x22c928: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_22c92c:
    if (ctx->pc == 0x22C92Cu) {
        ctx->pc = 0x22C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C928u;
        // 0x22c92c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C930u;
        goto label_22c930;
    }
    ctx->pc = 0x22C928u;
    {
        const bool branch_taken_0x22c928 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C928u;
        // 0x22c92c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c928) {
            ctx->pc = 0x22C94Cu;
            goto label_22c94c;
        }
    }
    ctx->pc = 0x22C930u;
label_22c930:
    // 0x22c930: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22c930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22c934:
    // 0x22c934: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x22c934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_22c938:
    // 0x22c938: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x22c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_22c93c:
    // 0x22c93c: 0x40f809  jalr        $v0
label_22c940:
    if (ctx->pc == 0x22C940u) {
        ctx->pc = 0x22C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C93Cu;
        // 0x22c940: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C944u;
        goto label_22c944;
    }
    ctx->pc = 0x22C93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22C944u);
        ctx->pc = 0x22C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C93Cu;
        // 0x22c940: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C93Cu, 0x22C944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22C944u;
label_22c944:
    // 0x22c944: 0x10000003  b           . + 4 + (0x3 << 2)
label_22c948:
    if (ctx->pc == 0x22C948u) {
        ctx->pc = 0x22C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C944u;
        // 0x22c948: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C94Cu;
        goto label_22c94c;
    }
    ctx->pc = 0x22C944u;
    {
        const bool branch_taken_0x22c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C944u;
        // 0x22c948: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c944) {
            ctx->pc = 0x22C954u;
            goto label_22c954;
        }
    }
    ctx->pc = 0x22C94Cu;
label_22c94c:
    // 0x22c94c: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x22c94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22c950:
    // 0x22c950: 0xae4300c4  sw          $v1, 0xC4($s2)
    ctx->pc = 0x22c950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 3));
label_22c954:
    // 0x22c954: 0xc087502  jal         func_21D408
label_22c958:
    if (ctx->pc == 0x22C958u) {
        ctx->pc = 0x22C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C954u;
        // 0x22c958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C95Cu;
        goto label_22c95c;
    }
    ctx->pc = 0x22C954u;
    SET_GPR_U32(ctx, 31, 0x22C95Cu);
    ctx->pc = 0x22C958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C954u;
    // 0x22c958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22C954u, 0x22C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C95Cu;
label_22c95c:
    // 0x22c95c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x22c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_22c960:
    // 0x22c960: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_22c964:
    if (ctx->pc == 0x22C964u) {
        ctx->pc = 0x22C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C960u;
        // 0x22c964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C968u;
        goto label_22c968;
    }
    ctx->pc = 0x22C960u;
    {
        const bool branch_taken_0x22c960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C960u;
        // 0x22c964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c960) {
            ctx->pc = 0x22CA04u;
            goto label_22ca04;
        }
    }
    ctx->pc = 0x22C968u;
label_22c968:
    // 0x22c968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22c968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c96c:
    // 0x22c96c: 0xc087502  jal         func_21D408
label_22c970:
    if (ctx->pc == 0x22C970u) {
        ctx->pc = 0x22C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C96Cu;
        // 0x22c970: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C974u;
        goto label_22c974;
    }
    ctx->pc = 0x22C96Cu;
    SET_GPR_U32(ctx, 31, 0x22C974u);
    ctx->pc = 0x22C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C96Cu;
    // 0x22c970: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x22C96Cu, 0x22C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C974u;
label_22c974:
    // 0x22c974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22c974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c978:
    // 0x22c978: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22c978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22c97c:
    // 0x22c97c: 0xc0a33f8  jal         func_28CFE0
label_22c980:
    if (ctx->pc == 0x22C980u) {
        ctx->pc = 0x22C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C97Cu;
        // 0x22c980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C984u;
        goto label_22c984;
    }
    ctx->pc = 0x22C97Cu;
    SET_GPR_U32(ctx, 31, 0x22C984u);
    ctx->pc = 0x22C980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C97Cu;
    // 0x22c980: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x22C97Cu, 0x22C984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C984u;
label_22c984:
    // 0x22c984: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x22c984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_22c988:
    // 0x22c988: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x22c988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_22c98c:
    // 0x22c98c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22c990:
    if (ctx->pc == 0x22C990u) {
        ctx->pc = 0x22C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C98Cu;
        // 0x22c990: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C994u;
        goto label_22c994;
    }
    ctx->pc = 0x22C98Cu;
    {
        const bool branch_taken_0x22c98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C98Cu;
        // 0x22c990: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c98c) {
            ctx->pc = 0x22C9A0u;
            goto label_22c9a0;
        }
    }
    ctx->pc = 0x22C994u;
label_22c994:
    // 0x22c994: 0xc107444  jal         func_41D110
label_22c998:
    if (ctx->pc == 0x22C998u) {
        ctx->pc = 0x22C99Cu;
        goto label_22c99c;
    }
    ctx->pc = 0x22C994u;
    SET_GPR_U32(ctx, 31, 0x22C99Cu);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x22C994u, 0x22C99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C99Cu;
label_22c99c:
    // 0x22c99c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22c99cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22c9a0:
    // 0x22c9a0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_22c9a4:
    if (ctx->pc == 0x22C9A4u) {
        ctx->pc = 0x22C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9A0u;
        // 0x22c9a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9A8u;
        goto label_22c9a8;
    }
    ctx->pc = 0x22C9A0u;
    {
        const bool branch_taken_0x22c9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9A0u;
        // 0x22c9a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9a0) {
            ctx->pc = 0x22CA04u;
            goto label_22ca04;
        }
    }
    ctx->pc = 0x22C9A8u;
label_22c9a8:
    // 0x22c9a8: 0xc073a8e  jal         func_1CEA38
label_22c9ac:
    if (ctx->pc == 0x22C9ACu) {
        ctx->pc = 0x22C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9A8u;
        // 0x22c9ac: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9B0u;
        goto label_22c9b0;
    }
    ctx->pc = 0x22C9A8u;
    SET_GPR_U32(ctx, 31, 0x22C9B0u);
    ctx->pc = 0x22C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9A8u;
    // 0x22c9ac: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22C9A8u, 0x22C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9B0u;
label_22c9b0:
    // 0x22c9b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_22c9b4:
    if (ctx->pc == 0x22C9B4u) {
        ctx->pc = 0x22C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9B0u;
        // 0x22c9b4: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9B8u;
        goto label_22c9b8;
    }
    ctx->pc = 0x22C9B0u;
    {
        const bool branch_taken_0x22c9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9B0u;
        // 0x22c9b4: 0x3c020061  lui         $v0, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9b0) {
            ctx->pc = 0x22CA00u;
            goto label_22ca00;
        }
    }
    ctx->pc = 0x22C9B8u;
label_22c9b8:
    // 0x22c9b8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x22c9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_22c9bc:
    // 0x22c9bc: 0xc073632  jal         func_1CD8C8
label_22c9c0:
    if (ctx->pc == 0x22C9C0u) {
        ctx->pc = 0x22C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9BCu;
        // 0x22c9c0: 0x24509250  addiu       $s0, $v0, -0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9C4u;
        goto label_22c9c4;
    }
    ctx->pc = 0x22C9BCu;
    SET_GPR_U32(ctx, 31, 0x22C9C4u);
    ctx->pc = 0x22C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9BCu;
    // 0x22c9c0: 0x24509250  addiu       $s0, $v0, -0x6DB0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD8C8u, 0x22C9BCu, 0x22C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9C4u;
label_22c9c4:
    // 0x22c9c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22c9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22c9c8:
    // 0x22c9c8: 0xc073954  jal         func_1CE550
label_22c9cc:
    if (ctx->pc == 0x22C9CCu) {
        ctx->pc = 0x22C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9C8u;
        // 0x22c9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9D0u;
        goto label_22c9d0;
    }
    ctx->pc = 0x22C9C8u;
    SET_GPR_U32(ctx, 31, 0x22C9D0u);
    ctx->pc = 0x22C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9C8u;
    // 0x22c9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE550u, 0x22C9C8u, 0x22C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C9D0u;
label_22c9d0:
    // 0x22c9d0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_22c9d4:
    if (ctx->pc == 0x22C9D4u) {
        ctx->pc = 0x22C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9D0u;
        // 0x22c9d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9D8u;
        goto label_22c9d8;
    }
    ctx->pc = 0x22C9D0u;
    {
        const bool branch_taken_0x22c9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9D0u;
        // 0x22c9d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9d0) {
            ctx->pc = 0x22CA04u;
            goto label_22ca04;
        }
    }
    ctx->pc = 0x22C9D8u;
label_22c9d8:
    // 0x22c9d8: 0x8e65489c  lw          $a1, 0x489C($s3)
    ctx->pc = 0x22c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_22c9dc:
    // 0x22c9dc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x22c9dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_22c9e0:
    // 0x22c9e0: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x22c9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_22c9e4:
    // 0x22c9e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22c9e8:
    if (ctx->pc == 0x22C9E8u) {
        ctx->pc = 0x22C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9E4u;
        // 0x22c9e8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22C9ECu;
        goto label_22c9ec;
    }
    ctx->pc = 0x22C9E4u;
    {
        const bool branch_taken_0x22c9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9E4u;
        // 0x22c9e8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c9e4) {
            ctx->pc = 0x22CA04u;
            goto label_22ca04;
        }
    }
    ctx->pc = 0x22C9ECu;
label_22c9ec:
    // 0x22c9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22c9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c9f0:
    // 0x22c9f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x22c9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22c9f4:
    // 0x22c9f4: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x22c9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_22c9f8:
    // 0x22c9f8: 0xc07387a  jal         func_1CE1E8
label_22c9fc:
    if (ctx->pc == 0x22C9FCu) {
        ctx->pc = 0x22C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C9F8u;
        // 0x22c9fc: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA00u;
        goto label_22ca00;
    }
    ctx->pc = 0x22C9F8u;
    SET_GPR_U32(ctx, 31, 0x22CA00u);
    ctx->pc = 0x22C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22C9F8u;
    // 0x22c9fc: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x22C9F8u, 0x22CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA00u;
label_22ca00:
    // 0x22ca00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ca00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22ca04:
    // 0x22ca04: 0xc089988  jal         func_226620
label_22ca08:
    if (ctx->pc == 0x22CA08u) {
        ctx->pc = 0x22CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA04u;
        // 0x22ca08: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA0Cu;
        goto label_22ca0c;
    }
    ctx->pc = 0x22CA04u;
    SET_GPR_U32(ctx, 31, 0x22CA0Cu);
    ctx->pc = 0x22CA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA04u;
    // 0x22ca08: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22CA04u, 0x22CA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA0Cu;
label_22ca0c:
    // 0x22ca0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ca0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ca10:
    // 0x22ca10: 0xc089988  jal         func_226620
label_22ca14:
    if (ctx->pc == 0x22CA14u) {
        ctx->pc = 0x22CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA10u;
        // 0x22ca14: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA18u;
        goto label_22ca18;
    }
    ctx->pc = 0x22CA10u;
    SET_GPR_U32(ctx, 31, 0x22CA18u);
    ctx->pc = 0x22CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA10u;
    // 0x22ca14: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22CA10u, 0x22CA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA18u;
label_22ca18:
    // 0x22ca18: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_22ca1c:
    if (ctx->pc == 0x22CA1Cu) {
        ctx->pc = 0x22CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA18u;
        // 0x22ca1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA20u;
        goto label_22ca20;
    }
    ctx->pc = 0x22CA18u;
    {
        const bool branch_taken_0x22ca18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA18u;
        // 0x22ca1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca18) {
            ctx->pc = 0x22CA54u;
            goto label_22ca54;
        }
    }
    ctx->pc = 0x22CA20u;
label_22ca20:
    // 0x22ca20: 0xc089974  jal         func_2265D0
label_22ca24:
    if (ctx->pc == 0x22CA24u) {
        ctx->pc = 0x22CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA20u;
        // 0x22ca24: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA28u;
        goto label_22ca28;
    }
    ctx->pc = 0x22CA20u;
    SET_GPR_U32(ctx, 31, 0x22CA28u);
    ctx->pc = 0x22CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA20u;
    // 0x22ca24: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22CA20u, 0x22CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA28u;
label_22ca28:
    // 0x22ca28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ca28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ca2c:
    // 0x22ca2c: 0xc089974  jal         func_2265D0
label_22ca30:
    if (ctx->pc == 0x22CA30u) {
        ctx->pc = 0x22CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA2Cu;
        // 0x22ca30: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA34u;
        goto label_22ca34;
    }
    ctx->pc = 0x22CA2Cu;
    SET_GPR_U32(ctx, 31, 0x22CA34u);
    ctx->pc = 0x22CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA2Cu;
    // 0x22ca30: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22CA2Cu, 0x22CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA34u;
label_22ca34:
    // 0x22ca34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ca34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22ca38:
    // 0x22ca38: 0xc094fb4  jal         func_253ED0
label_22ca3c:
    if (ctx->pc == 0x22CA3Cu) {
        ctx->pc = 0x22CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA38u;
        // 0x22ca3c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA40u;
        goto label_22ca40;
    }
    ctx->pc = 0x22CA38u;
    SET_GPR_U32(ctx, 31, 0x22CA40u);
    ctx->pc = 0x22CA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA38u;
    // 0x22ca3c: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22CA38u, 0x22CA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA40u;
label_22ca40:
    // 0x22ca40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ca40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ca44:
    // 0x22ca44: 0xc094fb4  jal         func_253ED0
label_22ca48:
    if (ctx->pc == 0x22CA48u) {
        ctx->pc = 0x22CA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA44u;
        // 0x22ca48: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA4Cu;
        goto label_22ca4c;
    }
    ctx->pc = 0x22CA44u;
    SET_GPR_U32(ctx, 31, 0x22CA4Cu);
    ctx->pc = 0x22CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA44u;
    // 0x22ca48: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22CA44u, 0x22CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA4Cu;
label_22ca4c:
    // 0x22ca4c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_22ca50:
    if (ctx->pc == 0x22CA50u) {
        ctx->pc = 0x22CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA4Cu;
        // 0x22ca50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA54u;
        goto label_22ca54;
    }
    ctx->pc = 0x22CA4Cu;
    {
        const bool branch_taken_0x22ca4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA4Cu;
        // 0x22ca50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca4c) {
            ctx->pc = 0x22CAC4u;
            goto label_22cac4;
        }
    }
    ctx->pc = 0x22CA54u;
label_22ca54:
    // 0x22ca54: 0xc089974  jal         func_2265D0
label_22ca58:
    if (ctx->pc == 0x22CA58u) {
        ctx->pc = 0x22CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA54u;
        // 0x22ca58: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA5Cu;
        goto label_22ca5c;
    }
    ctx->pc = 0x22CA54u;
    SET_GPR_U32(ctx, 31, 0x22CA5Cu);
    ctx->pc = 0x22CA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA54u;
    // 0x22ca58: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22CA54u, 0x22CA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA5Cu;
label_22ca5c:
    // 0x22ca5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ca5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ca60:
    // 0x22ca60: 0xc089974  jal         func_2265D0
label_22ca64:
    if (ctx->pc == 0x22CA64u) {
        ctx->pc = 0x22CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA60u;
        // 0x22ca64: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA68u;
        goto label_22ca68;
    }
    ctx->pc = 0x22CA60u;
    SET_GPR_U32(ctx, 31, 0x22CA68u);
    ctx->pc = 0x22CA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA60u;
    // 0x22ca64: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x22CA60u, 0x22CA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA68u;
label_22ca68:
    // 0x22ca68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22ca68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22ca6c:
    // 0x22ca6c: 0xc094fb4  jal         func_253ED0
label_22ca70:
    if (ctx->pc == 0x22CA70u) {
        ctx->pc = 0x22CA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA6Cu;
        // 0x22ca70: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA74u;
        goto label_22ca74;
    }
    ctx->pc = 0x22CA6Cu;
    SET_GPR_U32(ctx, 31, 0x22CA74u);
    ctx->pc = 0x22CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA6Cu;
    // 0x22ca70: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22CA6Cu, 0x22CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA74u;
label_22ca74:
    // 0x22ca74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ca78:
    // 0x22ca78: 0xc094fb4  jal         func_253ED0
label_22ca7c:
    if (ctx->pc == 0x22CA7Cu) {
        ctx->pc = 0x22CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA78u;
        // 0x22ca7c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA80u;
        goto label_22ca80;
    }
    ctx->pc = 0x22CA78u;
    SET_GPR_U32(ctx, 31, 0x22CA80u);
    ctx->pc = 0x22CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CA78u;
    // 0x22ca7c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22CA78u, 0x22CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CA80u;
label_22ca80:
    // 0x22ca80: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x22ca80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_22ca84:
    // 0x22ca84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22ca84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22ca88:
    // 0x22ca88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ca88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22ca8c:
    // 0x22ca8c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22ca8cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22ca90:
    // 0x22ca90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_22ca94:
    if (ctx->pc == 0x22CA94u) {
        ctx->pc = 0x22CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA90u;
        // 0x22ca94: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CA98u;
        goto label_22ca98;
    }
    ctx->pc = 0x22CA90u;
    {
        const bool branch_taken_0x22ca90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CA90u;
        // 0x22ca94: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ca90) {
            ctx->pc = 0x22CAA0u;
            goto label_22caa0;
        }
    }
    ctx->pc = 0x22CA98u;
label_22ca98:
    // 0x22ca98: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x22ca98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_22ca9c:
    // 0x22ca9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22ca9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22caa0:
    // 0x22caa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22caa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22caa4:
    // 0x22caa4: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x22caa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_22caa8:
    // 0x22caa8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x22caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22caac:
    // 0x22caac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22caacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cab0:
    // 0x22cab0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22cab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cab4:
    // 0x22cab4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22cab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cab8:
    // 0x22cab8: 0xc088178  jal         func_2205E0
label_22cabc:
    if (ctx->pc == 0x22CABCu) {
        ctx->pc = 0x22CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAB8u;
        // 0x22cabc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CAC0u;
        goto label_22cac0;
    }
    ctx->pc = 0x22CAB8u;
    SET_GPR_U32(ctx, 31, 0x22CAC0u);
    ctx->pc = 0x22CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CAB8u;
    // 0x22cabc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x22CAB8u, 0x22CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CAC0u;
label_22cac0:
    // 0x22cac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22cac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22cac4:
    // 0x22cac4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22cac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22cac8:
    // 0x22cac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22cac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22cacc:
    // 0x22cacc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x22caccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cad0:
    // 0x22cad0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x22cad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22cad4:
    // 0x22cad4: 0xc0875a0  jal         func_21D680
label_22cad8:
    if (ctx->pc == 0x22CAD8u) {
        ctx->pc = 0x22CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAD4u;
        // 0x22cad8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CADCu;
        goto label_22cadc;
    }
    ctx->pc = 0x22CAD4u;
    SET_GPR_U32(ctx, 31, 0x22CADCu);
    ctx->pc = 0x22CAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22CAD4u;
    // 0x22cad8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x22CAD4u, 0x22CADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22CADCu;
label_22cadc:
    // 0x22cadc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22cadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22cae0:
    // 0x22cae0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22cae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22cae4:
    // 0x22cae4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22cae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22cae8:
    // 0x22cae8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22cae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22caec:
    // 0x22caec: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22caecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22caf0:
    // 0x22caf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22caf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22caf4:
    // 0x22caf4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x22caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22caf8:
    // 0x22caf8: 0x3e00008  jr          $ra
label_22cafc:
    if (ctx->pc == 0x22CAFCu) {
        ctx->pc = 0x22CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAF8u;
        // 0x22cafc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22CB00u;
        goto label_fallthrough_0x22caf8;
    }
    ctx->pc = 0x22CAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22CAF8u;
        // 0x22cafc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22CAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22caf8:
    ctx->pc = 0x22CB00u;
}
