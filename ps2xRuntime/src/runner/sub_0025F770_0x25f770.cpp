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

// Function: sub_0025F770
// Address: 0x25f770 - 0x25fa48
void sub_0025F770_0x25f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F770_0x25f770");
#endif

    switch (ctx->pc) {
        case 0x25f770u: goto label_25f770;
        case 0x25f774u: goto label_25f774;
        case 0x25f778u: goto label_25f778;
        case 0x25f77cu: goto label_25f77c;
        case 0x25f780u: goto label_25f780;
        case 0x25f784u: goto label_25f784;
        case 0x25f788u: goto label_25f788;
        case 0x25f78cu: goto label_25f78c;
        case 0x25f790u: goto label_25f790;
        case 0x25f794u: goto label_25f794;
        case 0x25f798u: goto label_25f798;
        case 0x25f79cu: goto label_25f79c;
        case 0x25f7a0u: goto label_25f7a0;
        case 0x25f7a4u: goto label_25f7a4;
        case 0x25f7a8u: goto label_25f7a8;
        case 0x25f7acu: goto label_25f7ac;
        case 0x25f7b0u: goto label_25f7b0;
        case 0x25f7b4u: goto label_25f7b4;
        case 0x25f7b8u: goto label_25f7b8;
        case 0x25f7bcu: goto label_25f7bc;
        case 0x25f7c0u: goto label_25f7c0;
        case 0x25f7c4u: goto label_25f7c4;
        case 0x25f7c8u: goto label_25f7c8;
        case 0x25f7ccu: goto label_25f7cc;
        case 0x25f7d0u: goto label_25f7d0;
        case 0x25f7d4u: goto label_25f7d4;
        case 0x25f7d8u: goto label_25f7d8;
        case 0x25f7dcu: goto label_25f7dc;
        case 0x25f7e0u: goto label_25f7e0;
        case 0x25f7e4u: goto label_25f7e4;
        case 0x25f7e8u: goto label_25f7e8;
        case 0x25f7ecu: goto label_25f7ec;
        case 0x25f7f0u: goto label_25f7f0;
        case 0x25f7f4u: goto label_25f7f4;
        case 0x25f7f8u: goto label_25f7f8;
        case 0x25f7fcu: goto label_25f7fc;
        case 0x25f800u: goto label_25f800;
        case 0x25f804u: goto label_25f804;
        case 0x25f808u: goto label_25f808;
        case 0x25f80cu: goto label_25f80c;
        case 0x25f810u: goto label_25f810;
        case 0x25f814u: goto label_25f814;
        case 0x25f818u: goto label_25f818;
        case 0x25f81cu: goto label_25f81c;
        case 0x25f820u: goto label_25f820;
        case 0x25f824u: goto label_25f824;
        case 0x25f828u: goto label_25f828;
        case 0x25f82cu: goto label_25f82c;
        case 0x25f830u: goto label_25f830;
        case 0x25f834u: goto label_25f834;
        case 0x25f838u: goto label_25f838;
        case 0x25f83cu: goto label_25f83c;
        case 0x25f840u: goto label_25f840;
        case 0x25f844u: goto label_25f844;
        case 0x25f848u: goto label_25f848;
        case 0x25f84cu: goto label_25f84c;
        case 0x25f850u: goto label_25f850;
        case 0x25f854u: goto label_25f854;
        case 0x25f858u: goto label_25f858;
        case 0x25f85cu: goto label_25f85c;
        case 0x25f860u: goto label_25f860;
        case 0x25f864u: goto label_25f864;
        case 0x25f868u: goto label_25f868;
        case 0x25f86cu: goto label_25f86c;
        case 0x25f870u: goto label_25f870;
        case 0x25f874u: goto label_25f874;
        case 0x25f878u: goto label_25f878;
        case 0x25f87cu: goto label_25f87c;
        case 0x25f880u: goto label_25f880;
        case 0x25f884u: goto label_25f884;
        case 0x25f888u: goto label_25f888;
        case 0x25f88cu: goto label_25f88c;
        case 0x25f890u: goto label_25f890;
        case 0x25f894u: goto label_25f894;
        case 0x25f898u: goto label_25f898;
        case 0x25f89cu: goto label_25f89c;
        case 0x25f8a0u: goto label_25f8a0;
        case 0x25f8a4u: goto label_25f8a4;
        case 0x25f8a8u: goto label_25f8a8;
        case 0x25f8acu: goto label_25f8ac;
        case 0x25f8b0u: goto label_25f8b0;
        case 0x25f8b4u: goto label_25f8b4;
        case 0x25f8b8u: goto label_25f8b8;
        case 0x25f8bcu: goto label_25f8bc;
        case 0x25f8c0u: goto label_25f8c0;
        case 0x25f8c4u: goto label_25f8c4;
        case 0x25f8c8u: goto label_25f8c8;
        case 0x25f8ccu: goto label_25f8cc;
        case 0x25f8d0u: goto label_25f8d0;
        case 0x25f8d4u: goto label_25f8d4;
        case 0x25f8d8u: goto label_25f8d8;
        case 0x25f8dcu: goto label_25f8dc;
        case 0x25f8e0u: goto label_25f8e0;
        case 0x25f8e4u: goto label_25f8e4;
        case 0x25f8e8u: goto label_25f8e8;
        case 0x25f8ecu: goto label_25f8ec;
        case 0x25f8f0u: goto label_25f8f0;
        case 0x25f8f4u: goto label_25f8f4;
        case 0x25f8f8u: goto label_25f8f8;
        case 0x25f8fcu: goto label_25f8fc;
        case 0x25f900u: goto label_25f900;
        case 0x25f904u: goto label_25f904;
        case 0x25f908u: goto label_25f908;
        case 0x25f90cu: goto label_25f90c;
        case 0x25f910u: goto label_25f910;
        case 0x25f914u: goto label_25f914;
        case 0x25f918u: goto label_25f918;
        case 0x25f91cu: goto label_25f91c;
        case 0x25f920u: goto label_25f920;
        case 0x25f924u: goto label_25f924;
        case 0x25f928u: goto label_25f928;
        case 0x25f92cu: goto label_25f92c;
        case 0x25f930u: goto label_25f930;
        case 0x25f934u: goto label_25f934;
        case 0x25f938u: goto label_25f938;
        case 0x25f93cu: goto label_25f93c;
        case 0x25f940u: goto label_25f940;
        case 0x25f944u: goto label_25f944;
        case 0x25f948u: goto label_25f948;
        case 0x25f94cu: goto label_25f94c;
        case 0x25f950u: goto label_25f950;
        case 0x25f954u: goto label_25f954;
        case 0x25f958u: goto label_25f958;
        case 0x25f95cu: goto label_25f95c;
        case 0x25f960u: goto label_25f960;
        case 0x25f964u: goto label_25f964;
        case 0x25f968u: goto label_25f968;
        case 0x25f96cu: goto label_25f96c;
        case 0x25f970u: goto label_25f970;
        case 0x25f974u: goto label_25f974;
        case 0x25f978u: goto label_25f978;
        case 0x25f97cu: goto label_25f97c;
        case 0x25f980u: goto label_25f980;
        case 0x25f984u: goto label_25f984;
        case 0x25f988u: goto label_25f988;
        case 0x25f98cu: goto label_25f98c;
        case 0x25f990u: goto label_25f990;
        case 0x25f994u: goto label_25f994;
        case 0x25f998u: goto label_25f998;
        case 0x25f99cu: goto label_25f99c;
        case 0x25f9a0u: goto label_25f9a0;
        case 0x25f9a4u: goto label_25f9a4;
        case 0x25f9a8u: goto label_25f9a8;
        case 0x25f9acu: goto label_25f9ac;
        case 0x25f9b0u: goto label_25f9b0;
        case 0x25f9b4u: goto label_25f9b4;
        case 0x25f9b8u: goto label_25f9b8;
        case 0x25f9bcu: goto label_25f9bc;
        case 0x25f9c0u: goto label_25f9c0;
        case 0x25f9c4u: goto label_25f9c4;
        case 0x25f9c8u: goto label_25f9c8;
        case 0x25f9ccu: goto label_25f9cc;
        case 0x25f9d0u: goto label_25f9d0;
        case 0x25f9d4u: goto label_25f9d4;
        case 0x25f9d8u: goto label_25f9d8;
        case 0x25f9dcu: goto label_25f9dc;
        case 0x25f9e0u: goto label_25f9e0;
        case 0x25f9e4u: goto label_25f9e4;
        case 0x25f9e8u: goto label_25f9e8;
        case 0x25f9ecu: goto label_25f9ec;
        case 0x25f9f0u: goto label_25f9f0;
        case 0x25f9f4u: goto label_25f9f4;
        case 0x25f9f8u: goto label_25f9f8;
        case 0x25f9fcu: goto label_25f9fc;
        case 0x25fa00u: goto label_25fa00;
        case 0x25fa04u: goto label_25fa04;
        case 0x25fa08u: goto label_25fa08;
        case 0x25fa0cu: goto label_25fa0c;
        case 0x25fa10u: goto label_25fa10;
        case 0x25fa14u: goto label_25fa14;
        case 0x25fa18u: goto label_25fa18;
        case 0x25fa1cu: goto label_25fa1c;
        case 0x25fa20u: goto label_25fa20;
        case 0x25fa24u: goto label_25fa24;
        case 0x25fa28u: goto label_25fa28;
        case 0x25fa2cu: goto label_25fa2c;
        case 0x25fa30u: goto label_25fa30;
        case 0x25fa34u: goto label_25fa34;
        case 0x25fa38u: goto label_25fa38;
        case 0x25fa3cu: goto label_25fa3c;
        case 0x25fa40u: goto label_25fa40;
        case 0x25fa44u: goto label_25fa44;
        default: break;
    }

    ctx->pc = 0x25f770u;

label_25f770:
    // 0x25f770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25f770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_25f774:
    // 0x25f774: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x25f774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_25f778:
    // 0x25f778: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x25f778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_25f77c:
    // 0x25f77c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25f77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25f780:
    // 0x25f780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25f784:
    // 0x25f784: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x25f784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_25f788:
    // 0x25f788: 0x3c110008  lui         $s1, 0x8
    ctx->pc = 0x25f788u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8 << 16));
label_25f78c:
    // 0x25f78c: 0xc0874fa  jal         func_21D3E8
label_25f790:
    if (ctx->pc == 0x25F790u) {
        ctx->pc = 0x25F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F78Cu;
        // 0x25f790: 0x8e1200d4  lw          $s2, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F794u;
        goto label_25f794;
    }
    ctx->pc = 0x25F78Cu;
    SET_GPR_U32(ctx, 31, 0x25F794u);
    ctx->pc = 0x25F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F78Cu;
    // 0x25f790: 0x8e1200d4  lw          $s2, 0xD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25F78Cu, 0x25F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F794u;
label_25f794:
    // 0x25f794: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25f794u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25f798:
    // 0x25f798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f79c:
    // 0x25f79c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x25f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_25f7a0:
    // 0x25f7a0: 0xc088e60  jal         func_223980
label_25f7a4:
    if (ctx->pc == 0x25F7A4u) {
        ctx->pc = 0x25F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7A0u;
        // 0x25f7a4: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F7A8u;
        goto label_25f7a8;
    }
    ctx->pc = 0x25F7A0u;
    SET_GPR_U32(ctx, 31, 0x25F7A8u);
    ctx->pc = 0x25F7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7A0u;
    // 0x25f7a4: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x25F7A0u, 0x25F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7A8u;
label_25f7a8:
    // 0x25f7a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_25f7ac:
    if (ctx->pc == 0x25F7ACu) {
        ctx->pc = 0x25F7B0u;
        goto label_25f7b0;
    }
    ctx->pc = 0x25F7A8u;
    {
        const bool branch_taken_0x25f7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f7a8) {
            ctx->pc = 0x25F7C0u;
            goto label_25f7c0;
        }
    }
    ctx->pc = 0x25F7B0u;
label_25f7b0:
    // 0x25f7b0: 0xc088e48  jal         func_223920
label_25f7b4:
    if (ctx->pc == 0x25F7B4u) {
        ctx->pc = 0x25F7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7B0u;
        // 0x25f7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F7B8u;
        goto label_25f7b8;
    }
    ctx->pc = 0x25F7B0u;
    SET_GPR_U32(ctx, 31, 0x25F7B8u);
    ctx->pc = 0x25F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7B0u;
    // 0x25f7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x25F7B0u, 0x25F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7B8u;
label_25f7b8:
    // 0x25f7b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_25f7bc:
    if (ctx->pc == 0x25F7BCu) {
        ctx->pc = 0x25F7C0u;
        goto label_25f7c0;
    }
    ctx->pc = 0x25F7B8u;
    {
        const bool branch_taken_0x25f7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f7b8) {
            ctx->pc = 0x25F7D4u;
            goto label_25f7d4;
        }
    }
    ctx->pc = 0x25F7C0u;
label_25f7c0:
    // 0x25f7c0: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x25f7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
label_25f7c4:
    // 0x25f7c4: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25f7c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25f7c8:
    // 0x25f7c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25f7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25f7cc:
    // 0x25f7cc: 0xc096be4  jal         func_25AF90
label_25f7d0:
    if (ctx->pc == 0x25F7D0u) {
        ctx->pc = 0x25F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7CCu;
        // 0x25f7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F7D4u;
        goto label_25f7d4;
    }
    ctx->pc = 0x25F7CCu;
    SET_GPR_U32(ctx, 31, 0x25F7D4u);
    ctx->pc = 0x25F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7CCu;
    // 0x25f7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AF90u, 0x25F7CCu, 0x25F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7D4u;
label_25f7d4:
    // 0x25f7d4: 0xc089f66  jal         func_227D98
label_25f7d8:
    if (ctx->pc == 0x25F7D8u) {
        ctx->pc = 0x25F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7D4u;
        // 0x25f7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F7DCu;
        goto label_25f7dc;
    }
    ctx->pc = 0x25F7D4u;
    SET_GPR_U32(ctx, 31, 0x25F7DCu);
    ctx->pc = 0x25F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7D4u;
    // 0x25f7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D98u, 0x25F7D4u, 0x25F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7DCu;
label_25f7dc:
    // 0x25f7dc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_25f7e0:
    if (ctx->pc == 0x25F7E0u) {
        ctx->pc = 0x25F7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7DCu;
        // 0x25f7e0: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F7E4u;
        goto label_25f7e4;
    }
    ctx->pc = 0x25F7DCu;
    {
        const bool branch_taken_0x25f7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f7dc) {
            ctx->pc = 0x25F7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F7DCu;
            // 0x25f7e0: 0x8e430014  lw          $v1, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F800u;
            goto label_25f800;
        }
    }
    ctx->pc = 0x25F7E4u;
label_25f7e4:
    // 0x25f7e4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x25f7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_25f7e8:
    // 0x25f7e8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x25f7e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_25f7ec:
    // 0x25f7ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25f7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25f7f0:
    // 0x25f7f0: 0xc096c80  jal         func_25B200
label_25f7f4:
    if (ctx->pc == 0x25F7F4u) {
        ctx->pc = 0x25F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7F0u;
        // 0x25f7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F7F8u;
        goto label_25f7f8;
    }
    ctx->pc = 0x25F7F0u;
    SET_GPR_U32(ctx, 31, 0x25F7F8u);
    ctx->pc = 0x25F7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F7F0u;
    // 0x25f7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B200u, 0x25F7F0u, 0x25F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F7F8u;
label_25f7f8:
    // 0x25f7f8: 0x10000089  b           . + 4 + (0x89 << 2)
label_25f7fc:
    if (ctx->pc == 0x25F7FCu) {
        ctx->pc = 0x25F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7F8u;
        // 0x25f7fc: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F800u;
        goto label_25f800;
    }
    ctx->pc = 0x25F7F8u;
    {
        const bool branch_taken_0x25f7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F7F8u;
        // 0x25f7fc: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f7f8) {
            ctx->pc = 0x25FA20u;
            goto label_25fa20;
        }
    }
    ctx->pc = 0x25F800u;
label_25f800:
    // 0x25f800: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x25f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_25f804:
    // 0x25f804: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_25f808:
    if (ctx->pc == 0x25F808u) {
        ctx->pc = 0x25F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F804u;
        // 0x25f808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F80Cu;
        goto label_25f80c;
    }
    ctx->pc = 0x25F804u;
    {
        const bool branch_taken_0x25f804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F804u;
        // 0x25f808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f804) {
            ctx->pc = 0x25F81Cu;
            goto label_25f81c;
        }
    }
    ctx->pc = 0x25F80Cu;
label_25f80c:
    // 0x25f80c: 0xc09703a  jal         func_25C0E8
label_25f810:
    if (ctx->pc == 0x25F810u) {
        ctx->pc = 0x25F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F80Cu;
        // 0x25f810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F814u;
        goto label_25f814;
    }
    ctx->pc = 0x25F80Cu;
    SET_GPR_U32(ctx, 31, 0x25F814u);
    ctx->pc = 0x25F810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F80Cu;
    // 0x25f810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C0E8u, 0x25F80Cu, 0x25F814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F814u;
label_25f814:
    // 0x25f814: 0x10000082  b           . + 4 + (0x82 << 2)
label_25f818:
    if (ctx->pc == 0x25F818u) {
        ctx->pc = 0x25F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F814u;
        // 0x25f818: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F81Cu;
        goto label_25f81c;
    }
    ctx->pc = 0x25F814u;
    {
        const bool branch_taken_0x25f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F814u;
        // 0x25f818: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f814) {
            ctx->pc = 0x25FA20u;
            goto label_25fa20;
        }
    }
    ctx->pc = 0x25F81Cu;
label_25f81c:
    // 0x25f81c: 0xc08997c  jal         func_2265F0
label_25f820:
    if (ctx->pc == 0x25F820u) {
        ctx->pc = 0x25F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F81Cu;
        // 0x25f820: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F824u;
        goto label_25f824;
    }
    ctx->pc = 0x25F81Cu;
    SET_GPR_U32(ctx, 31, 0x25F824u);
    ctx->pc = 0x25F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F81Cu;
    // 0x25f820: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25F81Cu, 0x25F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F824u;
label_25f824:
    // 0x25f824: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_25f828:
    if (ctx->pc == 0x25F828u) {
        ctx->pc = 0x25F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F824u;
        // 0x25f828: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F82Cu;
        goto label_25f82c;
    }
    ctx->pc = 0x25F824u;
    {
        const bool branch_taken_0x25f824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F824u;
        // 0x25f828: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f824) {
            ctx->pc = 0x25F848u;
            goto label_25f848;
        }
    }
    ctx->pc = 0x25F82Cu;
label_25f82c:
    // 0x25f82c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x25f82cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_25f830:
    // 0x25f830: 0x36262000  ori         $a2, $s1, 0x2000
    ctx->pc = 0x25f830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8192);
label_25f834:
    // 0x25f834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f838:
    // 0x25f838: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25f83c:
    // 0x25f83c: 0x24050163  addiu       $a1, $zero, 0x163
    ctx->pc = 0x25f83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 355));
label_25f840:
    // 0x25f840: 0x1000005e  b           . + 4 + (0x5E << 2)
label_25f844:
    if (ctx->pc == 0x25F844u) {
        ctx->pc = 0x25F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F840u;
        // 0x25f844: 0x222300a  movz        $a2, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F848u;
        goto label_25f848;
    }
    ctx->pc = 0x25F840u;
    {
        const bool branch_taken_0x25f840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F840u;
        // 0x25f844: 0x222300a  movz        $a2, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f840) {
            ctx->pc = 0x25F9BCu;
            goto label_25f9bc;
        }
    }
    ctx->pc = 0x25F848u;
label_25f848:
    // 0x25f848: 0xc0899ae  jal         func_2266B8
label_25f84c:
    if (ctx->pc == 0x25F84Cu) {
        ctx->pc = 0x25F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F848u;
        // 0x25f84c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F850u;
        goto label_25f850;
    }
    ctx->pc = 0x25F848u;
    SET_GPR_U32(ctx, 31, 0x25F850u);
    ctx->pc = 0x25F84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F848u;
    // 0x25f84c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25F848u, 0x25F850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F850u;
label_25f850:
    // 0x25f850: 0x24030164  addiu       $v1, $zero, 0x164
    ctx->pc = 0x25f850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
label_25f854:
    // 0x25f854: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_25f858:
    if (ctx->pc == 0x25F858u) {
        ctx->pc = 0x25F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F854u;
        // 0x25f858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F85Cu;
        goto label_25f85c;
    }
    ctx->pc = 0x25F854u;
    {
        const bool branch_taken_0x25f854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25F858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F854u;
        // 0x25f858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f854) {
            ctx->pc = 0x25F878u;
            goto label_25f878;
        }
    }
    ctx->pc = 0x25F85Cu;
label_25f85c:
    // 0x25f85c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x25f85cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_25f860:
    // 0x25f860: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x25f860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_25f864:
    // 0x25f864: 0x36262000  ori         $a2, $s1, 0x2000
    ctx->pc = 0x25f864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8192);
label_25f868:
    // 0x25f868: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25f868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25f86c:
    // 0x25f86c: 0x24050165  addiu       $a1, $zero, 0x165
    ctx->pc = 0x25f86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 357));
label_25f870:
    // 0x25f870: 0x10000052  b           . + 4 + (0x52 << 2)
label_25f874:
    if (ctx->pc == 0x25F874u) {
        ctx->pc = 0x25F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F870u;
        // 0x25f874: 0x222300a  movz        $a2, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F878u;
        goto label_25f878;
    }
    ctx->pc = 0x25F870u;
    {
        const bool branch_taken_0x25f870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F870u;
        // 0x25f874: 0x222300a  movz        $a2, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f870) {
            ctx->pc = 0x25F9BCu;
            goto label_25f9bc;
        }
    }
    ctx->pc = 0x25F878u;
label_25f878:
    // 0x25f878: 0xc089998  jal         func_226660
label_25f87c:
    if (ctx->pc == 0x25F87Cu) {
        ctx->pc = 0x25F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F878u;
        // 0x25f87c: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F880u;
        goto label_25f880;
    }
    ctx->pc = 0x25F878u;
    SET_GPR_U32(ctx, 31, 0x25F880u);
    ctx->pc = 0x25F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F878u;
    // 0x25f87c: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25F878u, 0x25F880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F880u;
label_25f880:
    // 0x25f880: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_25f884:
    if (ctx->pc == 0x25F884u) {
        ctx->pc = 0x25F884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F880u;
        // 0x25f884: 0x8e430018  lw          $v1, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F888u;
        goto label_25f888;
    }
    ctx->pc = 0x25F880u;
    {
        const bool branch_taken_0x25f880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f880) {
            ctx->pc = 0x25F884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F880u;
            // 0x25f884: 0x8e430018  lw          $v1, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F8F4u;
            goto label_25f8f4;
        }
    }
    ctx->pc = 0x25F888u;
label_25f888:
    // 0x25f888: 0xc05d484  jal         func_175210
label_25f88c:
    if (ctx->pc == 0x25F88Cu) {
        ctx->pc = 0x25F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F888u;
        // 0x25f88c: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F890u;
        goto label_25f890;
    }
    ctx->pc = 0x25F888u;
    SET_GPR_U32(ctx, 31, 0x25F890u);
    ctx->pc = 0x25F88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F888u;
    // 0x25f88c: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25F888u, 0x25F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F890u;
label_25f890:
    // 0x25f890: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25f890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25f894:
    // 0x25f894: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x25f894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_25f898:
    // 0x25f898: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x25f898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_25f89c:
    // 0x25f89c: 0xa0f809  jalr        $a1
label_25f8a0:
    if (ctx->pc == 0x25F8A0u) {
        ctx->pc = 0x25F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F89Cu;
        // 0x25f8a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F8A4u;
        goto label_25f8a4;
    }
    ctx->pc = 0x25F89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25F8A4u);
        ctx->pc = 0x25F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F89Cu;
        // 0x25f8a0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F89Cu, 0x25F8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F8A4u;
label_25f8a4:
    // 0x25f8a4: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x25f8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_25f8a8:
    // 0x25f8a8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25f8a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25f8ac:
    // 0x25f8ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25f8acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_25f8b0:
    // 0x25f8b0: 0x0  nop
    ctx->pc = 0x25f8b0u;
    // NOP
label_25f8b4:
    // 0x25f8b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x25f8b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_25f8b8:
    // 0x25f8b8: 0x0  nop
    ctx->pc = 0x25f8b8u;
    // NOP
label_25f8bc:
    // 0x25f8bc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_25f8c0:
    if (ctx->pc == 0x25F8C0u) {
        ctx->pc = 0x25F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8BCu;
        // 0x25f8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F8C4u;
        goto label_25f8c4;
    }
    ctx->pc = 0x25F8BCu;
    {
        const bool branch_taken_0x25f8bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8BCu;
        // 0x25f8c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8bc) {
            ctx->pc = 0x25F8DCu;
            goto label_25f8dc;
        }
    }
    ctx->pc = 0x25F8C4u;
label_25f8c4:
    // 0x25f8c4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25f8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_25f8c8:
    // 0x25f8c8: 0x3c013d88  lui         $at, 0x3D88
    ctx->pc = 0x25f8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15752 << 16));
label_25f8cc:
    // 0x25f8cc: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x25f8ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_25f8d0:
    // 0x25f8d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25f8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25f8d4:
    // 0x25f8d4: 0x10000047  b           . + 4 + (0x47 << 2)
label_25f8d8:
    if (ctx->pc == 0x25F8D8u) {
        ctx->pc = 0x25F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8D4u;
        // 0x25f8d8: 0x3c061000  lui         $a2, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F8DCu;
        goto label_25f8dc;
    }
    ctx->pc = 0x25F8D4u;
    {
        const bool branch_taken_0x25f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8D4u;
        // 0x25f8d8: 0x3c061000  lui         $a2, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8d4) {
            ctx->pc = 0x25F9F4u;
            goto label_25f9f4;
        }
    }
    ctx->pc = 0x25F8DCu;
label_25f8dc:
    // 0x25f8dc: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_25f8e0:
    // 0x25f8e0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x25f8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_25f8e4:
    // 0x25f8e4: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x25f8e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_25f8e8:
    // 0x25f8e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25f8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25f8ec:
    // 0x25f8ec: 0x10000041  b           . + 4 + (0x41 << 2)
label_25f8f0:
    if (ctx->pc == 0x25F8F0u) {
        ctx->pc = 0x25F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8ECu;
        // 0x25f8f0: 0x3c061000  lui         $a2, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F8F4u;
        goto label_25f8f4;
    }
    ctx->pc = 0x25F8ECu;
    {
        const bool branch_taken_0x25f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F8ECu;
        // 0x25f8f0: 0x3c061000  lui         $a2, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f8ec) {
            ctx->pc = 0x25F9F4u;
            goto label_25f9f4;
        }
    }
    ctx->pc = 0x25F8F4u;
label_25f8f4:
    // 0x25f8f4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x25f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_25f8f8:
    // 0x25f8f8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_25f8fc:
    if (ctx->pc == 0x25F8FCu) {
        ctx->pc = 0x25F900u;
        goto label_25f900;
    }
    ctx->pc = 0x25F8F8u;
    {
        const bool branch_taken_0x25f8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25f8f8) {
            ctx->pc = 0x25F938u;
            goto label_25f938;
        }
    }
    ctx->pc = 0x25F900u;
label_25f900:
    // 0x25f900: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x25f900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
label_25f904:
    // 0x25f904: 0x34a50cf0  ori         $a1, $a1, 0xCF0
    ctx->pc = 0x25f904u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3312);
label_25f908:
    // 0x25f908: 0xc08997c  jal         func_2265F0
label_25f90c:
    if (ctx->pc == 0x25F90Cu) {
        ctx->pc = 0x25F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F908u;
        // 0x25f90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F910u;
        goto label_25f910;
    }
    ctx->pc = 0x25F908u;
    SET_GPR_U32(ctx, 31, 0x25F910u);
    ctx->pc = 0x25F90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F908u;
    // 0x25f90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25F908u, 0x25F910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F910u;
label_25f910:
    // 0x25f910: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_25f914:
    if (ctx->pc == 0x25F914u) {
        ctx->pc = 0x25F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F910u;
        // 0x25f914: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F918u;
        goto label_25f918;
    }
    ctx->pc = 0x25F910u;
    {
        const bool branch_taken_0x25f910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F910u;
        // 0x25f914: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f910) {
            ctx->pc = 0x25F938u;
            goto label_25f938;
        }
    }
    ctx->pc = 0x25F918u;
label_25f918:
    // 0x25f918: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25f918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_25f91c:
    // 0x25f91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f920:
    // 0x25f920: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x25f920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f924:
    // 0x25f924: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x25f924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_25f928:
    // 0x25f928: 0xc096a30  jal         func_25A8C0
label_25f92c:
    if (ctx->pc == 0x25F92Cu) {
        ctx->pc = 0x25F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F928u;
        // 0x25f92c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F930u;
        goto label_25f930;
    }
    ctx->pc = 0x25F928u;
    SET_GPR_U32(ctx, 31, 0x25F930u);
    ctx->pc = 0x25F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F928u;
    // 0x25f92c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x25F928u, 0x25F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F930u;
label_25f930:
    // 0x25f930: 0x1000003b  b           . + 4 + (0x3B << 2)
label_25f934:
    if (ctx->pc == 0x25F934u) {
        ctx->pc = 0x25F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F930u;
        // 0x25f934: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F938u;
        goto label_25f938;
    }
    ctx->pc = 0x25F930u;
    {
        const bool branch_taken_0x25f930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F930u;
        // 0x25f934: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f930) {
            ctx->pc = 0x25FA20u;
            goto label_25fa20;
        }
    }
    ctx->pc = 0x25F938u;
label_25f938:
    // 0x25f938: 0xc0874fa  jal         func_21D3E8
label_25f93c:
    if (ctx->pc == 0x25F93Cu) {
        ctx->pc = 0x25F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F938u;
        // 0x25f93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F940u;
        goto label_25f940;
    }
    ctx->pc = 0x25F938u;
    SET_GPR_U32(ctx, 31, 0x25F940u);
    ctx->pc = 0x25F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F938u;
    // 0x25f93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x25F938u, 0x25F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F940u;
label_25f940:
    // 0x25f940: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x25f940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_25f944:
    // 0x25f944: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_25f948:
    if (ctx->pc == 0x25F948u) {
        ctx->pc = 0x25F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F944u;
        // 0x25f948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F94Cu;
        goto label_25f94c;
    }
    ctx->pc = 0x25F944u;
    {
        const bool branch_taken_0x25f944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F944u;
        // 0x25f948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f944) {
            ctx->pc = 0x25F97Cu;
            goto label_25f97c;
        }
    }
    ctx->pc = 0x25F94Cu;
label_25f94c:
    // 0x25f94c: 0xc08997c  jal         func_2265F0
label_25f950:
    if (ctx->pc == 0x25F950u) {
        ctx->pc = 0x25F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F94Cu;
        // 0x25f950: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F954u;
        goto label_25f954;
    }
    ctx->pc = 0x25F94Cu;
    SET_GPR_U32(ctx, 31, 0x25F954u);
    ctx->pc = 0x25F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F94Cu;
    // 0x25f950: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25F94Cu, 0x25F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F954u;
label_25f954:
    // 0x25f954: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_25f958:
    if (ctx->pc == 0x25F958u) {
        ctx->pc = 0x25F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F954u;
        // 0x25f958: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F95Cu;
        goto label_25f95c;
    }
    ctx->pc = 0x25F954u;
    {
        const bool branch_taken_0x25f954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f954) {
            ctx->pc = 0x25F958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F954u;
            // 0x25f958: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F95Cu;
label_25f95c:
    // 0x25f95c: 0xc095018  jal         func_254060
label_25f960:
    if (ctx->pc == 0x25F960u) {
        ctx->pc = 0x25F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F95Cu;
        // 0x25f960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F964u;
        goto label_25f964;
    }
    ctx->pc = 0x25F95Cu;
    SET_GPR_U32(ctx, 31, 0x25F964u);
    ctx->pc = 0x25F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F95Cu;
    // 0x25f960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x25F95Cu, 0x25F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F964u;
label_25f964:
    // 0x25f964: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_25f968:
    if (ctx->pc == 0x25F968u) {
        ctx->pc = 0x25F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F964u;
        // 0x25f968: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F96Cu;
        goto label_25f96c;
    }
    ctx->pc = 0x25F964u;
    {
        const bool branch_taken_0x25f964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25f964) {
            ctx->pc = 0x25F968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F964u;
            // 0x25f968: 0x8e420018  lw          $v0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F980u;
            goto label_25f980;
        }
    }
    ctx->pc = 0x25F96Cu;
label_25f96c:
    // 0x25f96c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25f96cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f970:
    // 0x25f970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f974:
    // 0x25f974: 0x10000011  b           . + 4 + (0x11 << 2)
label_25f978:
    if (ctx->pc == 0x25F978u) {
        ctx->pc = 0x25F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F974u;
        // 0x25f978: 0x2405027a  addiu       $a1, $zero, 0x27A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F97Cu;
        goto label_25f97c;
    }
    ctx->pc = 0x25F974u;
    {
        const bool branch_taken_0x25f974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F974u;
        // 0x25f978: 0x2405027a  addiu       $a1, $zero, 0x27A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f974) {
            ctx->pc = 0x25F9BCu;
            goto label_25f9bc;
        }
    }
    ctx->pc = 0x25F97Cu;
label_25f97c:
    // 0x25f97c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x25f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_25f980:
    // 0x25f980: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_25f984:
    if (ctx->pc == 0x25F984u) {
        ctx->pc = 0x25F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F980u;
        // 0x25f984: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F988u;
        goto label_25f988;
    }
    ctx->pc = 0x25F980u;
    {
        const bool branch_taken_0x25f980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F980u;
        // 0x25f984: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f980) {
            ctx->pc = 0x25F9CCu;
            goto label_25f9cc;
        }
    }
    ctx->pc = 0x25F988u;
label_25f988:
    // 0x25f988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f98c:
    // 0x25f98c: 0xc08997c  jal         func_2265F0
label_25f990:
    if (ctx->pc == 0x25F990u) {
        ctx->pc = 0x25F990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F98Cu;
        // 0x25f990: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F994u;
        goto label_25f994;
    }
    ctx->pc = 0x25F98Cu;
    SET_GPR_U32(ctx, 31, 0x25F994u);
    ctx->pc = 0x25F990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F98Cu;
    // 0x25f990: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x25F98Cu, 0x25F994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F994u;
label_25f994:
    // 0x25f994: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_25f998:
    if (ctx->pc == 0x25F998u) {
        ctx->pc = 0x25F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F994u;
        // 0x25f998: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F99Cu;
        goto label_25f99c;
    }
    ctx->pc = 0x25F994u;
    {
        const bool branch_taken_0x25f994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25F998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F994u;
        // 0x25f998: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f994) {
            ctx->pc = 0x25F9CCu;
            goto label_25f9cc;
        }
    }
    ctx->pc = 0x25F99Cu;
label_25f99c:
    // 0x25f99c: 0xc0899ae  jal         func_2266B8
label_25f9a0:
    if (ctx->pc == 0x25F9A0u) {
        ctx->pc = 0x25F9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F99Cu;
        // 0x25f9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F9A4u;
        goto label_25f9a4;
    }
    ctx->pc = 0x25F99Cu;
    SET_GPR_U32(ctx, 31, 0x25F9A4u);
    ctx->pc = 0x25F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F99Cu;
    // 0x25f9a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x25F99Cu, 0x25F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F9A4u;
label_25f9a4:
    // 0x25f9a4: 0x24030276  addiu       $v1, $zero, 0x276
    ctx->pc = 0x25f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
label_25f9a8:
    // 0x25f9a8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_25f9ac:
    if (ctx->pc == 0x25F9ACu) {
        ctx->pc = 0x25F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9A8u;
        // 0x25f9ac: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F9B0u;
        goto label_25f9b0;
    }
    ctx->pc = 0x25F9A8u;
    {
        const bool branch_taken_0x25f9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25F9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9A8u;
        // 0x25f9ac: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9a8) {
            ctx->pc = 0x25F9CCu;
            goto label_25f9cc;
        }
    }
    ctx->pc = 0x25F9B0u;
label_25f9b0:
    // 0x25f9b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25f9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f9b4:
    // 0x25f9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f9b8:
    // 0x25f9b8: 0x2405018a  addiu       $a1, $zero, 0x18A
    ctx->pc = 0x25f9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 394));
label_25f9bc:
    // 0x25f9bc: 0xc096a30  jal         func_25A8C0
label_25f9c0:
    if (ctx->pc == 0x25F9C0u) {
        ctx->pc = 0x25F9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9BCu;
        // 0x25f9c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F9C4u;
        goto label_25f9c4;
    }
    ctx->pc = 0x25F9BCu;
    SET_GPR_U32(ctx, 31, 0x25F9C4u);
    ctx->pc = 0x25F9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F9BCu;
    // 0x25f9c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A8C0u, 0x25F9BCu, 0x25F9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F9C4u;
label_25f9c4:
    // 0x25f9c4: 0x10000016  b           . + 4 + (0x16 << 2)
label_25f9c8:
    if (ctx->pc == 0x25F9C8u) {
        ctx->pc = 0x25F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9C4u;
        // 0x25f9c8: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F9CCu;
        goto label_25f9cc;
    }
    ctx->pc = 0x25F9C4u;
    {
        const bool branch_taken_0x25f9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9C4u;
        // 0x25f9c8: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9c4) {
            ctx->pc = 0x25FA20u;
            goto label_25fa20;
        }
    }
    ctx->pc = 0x25F9CCu;
label_25f9cc:
    // 0x25f9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25f9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f9d0:
    // 0x25f9d0: 0xc089998  jal         func_226660
label_25f9d4:
    if (ctx->pc == 0x25F9D4u) {
        ctx->pc = 0x25F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9D0u;
        // 0x25f9d4: 0x34a50100  ori         $a1, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F9D8u;
        goto label_25f9d8;
    }
    ctx->pc = 0x25F9D0u;
    SET_GPR_U32(ctx, 31, 0x25F9D8u);
    ctx->pc = 0x25F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F9D0u;
    // 0x25f9d4: 0x34a50100  ori         $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x25F9D0u, 0x25F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F9D8u;
label_25f9d8:
    // 0x25f9d8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_25f9dc:
    if (ctx->pc == 0x25F9DCu) {
        ctx->pc = 0x25F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9D8u;
        // 0x25f9dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F9E0u;
        goto label_25f9e0;
    }
    ctx->pc = 0x25F9D8u;
    {
        const bool branch_taken_0x25f9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9D8u;
        // 0x25f9dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9d8) {
            ctx->pc = 0x25FA04u;
            goto label_25fa04;
        }
    }
    ctx->pc = 0x25F9E0u;
label_25f9e0:
    // 0x25f9e0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_25f9e4:
    // 0x25f9e4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x25f9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_25f9e8:
    // 0x25f9e8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x25f9e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_25f9ec:
    // 0x25f9ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25f9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25f9f0:
    // 0x25f9f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x25f9f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25f9f4:
    // 0x25f9f4: 0xc097c6e  jal         func_25F1B8
label_25f9f8:
    if (ctx->pc == 0x25F9F8u) {
        ctx->pc = 0x25F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9F4u;
        // 0x25f9f8: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F9FCu;
        goto label_25f9fc;
    }
    ctx->pc = 0x25F9F4u;
    SET_GPR_U32(ctx, 31, 0x25F9FCu);
    ctx->pc = 0x25F9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F9F4u;
    // 0x25f9f8: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B8u, 0x25F9F4u, 0x25F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F9FCu;
label_25f9fc:
    // 0x25f9fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_25fa00:
    if (ctx->pc == 0x25FA00u) {
        ctx->pc = 0x25FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9FCu;
        // 0x25fa00: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA04u;
        goto label_25fa04;
    }
    ctx->pc = 0x25F9FCu;
    {
        const bool branch_taken_0x25f9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F9FCu;
        // 0x25fa00: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f9fc) {
            ctx->pc = 0x25FA20u;
            goto label_25fa20;
        }
    }
    ctx->pc = 0x25FA04u;
label_25fa04:
    // 0x25fa04: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x25fa04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_25fa08:
    // 0x25fa08: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x25fa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_25fa0c:
    // 0x25fa0c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x25fa0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_25fa10:
    // 0x25fa10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25fa10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25fa14:
    // 0x25fa14: 0xc097c6e  jal         func_25F1B8
label_25fa18:
    if (ctx->pc == 0x25FA18u) {
        ctx->pc = 0x25FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA14u;
        // 0x25fa18: 0x3c061000  lui         $a2, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA1Cu;
        goto label_25fa1c;
    }
    ctx->pc = 0x25FA14u;
    SET_GPR_U32(ctx, 31, 0x25FA1Cu);
    ctx->pc = 0x25FA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA14u;
    // 0x25fa18: 0x3c061000  lui         $a2, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F1B8u, 0x25FA14u, 0x25FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA1Cu;
label_25fa1c:
    // 0x25fa1c: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x25fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_25fa20:
    // 0x25fa20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25fa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fa24:
    // 0x25fa24: 0xc0899aa  jal         func_2266A8
label_25fa28:
    if (ctx->pc == 0x25FA28u) {
        ctx->pc = 0x25FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA24u;
        // 0x25fa28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA2Cu;
        goto label_25fa2c;
    }
    ctx->pc = 0x25FA24u;
    SET_GPR_U32(ctx, 31, 0x25FA2Cu);
    ctx->pc = 0x25FA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25FA24u;
    // 0x25fa28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x25FA24u, 0x25FA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FA2Cu;
label_25fa2c:
    // 0x25fa2c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x25fa2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25fa30:
    // 0x25fa30: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x25fa30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25fa34:
    // 0x25fa34: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x25fa34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25fa38:
    // 0x25fa38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fa38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fa3c:
    // 0x25fa3c: 0x3e00008  jr          $ra
label_25fa40:
    if (ctx->pc == 0x25FA40u) {
        ctx->pc = 0x25FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA3Cu;
        // 0x25fa40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FA44u;
        goto label_25fa44;
    }
    ctx->pc = 0x25FA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FA3Cu;
        // 0x25fa40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FA44u;
label_25fa44:
    // 0x25fa44: 0x0  nop
    ctx->pc = 0x25fa44u;
    // NOP
    ctx->pc = 0x25fa48u;
}
