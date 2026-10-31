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

// Function: sub_00387780
// Address: 0x387780 - 0x387a90
void sub_00387780_0x387780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387780_0x387780");
#endif

    switch (ctx->pc) {
        case 0x387780u: goto label_387780;
        case 0x387784u: goto label_387784;
        case 0x387788u: goto label_387788;
        case 0x38778cu: goto label_38778c;
        case 0x387790u: goto label_387790;
        case 0x387794u: goto label_387794;
        case 0x387798u: goto label_387798;
        case 0x38779cu: goto label_38779c;
        case 0x3877a0u: goto label_3877a0;
        case 0x3877a4u: goto label_3877a4;
        case 0x3877a8u: goto label_3877a8;
        case 0x3877acu: goto label_3877ac;
        case 0x3877b0u: goto label_3877b0;
        case 0x3877b4u: goto label_3877b4;
        case 0x3877b8u: goto label_3877b8;
        case 0x3877bcu: goto label_3877bc;
        case 0x3877c0u: goto label_3877c0;
        case 0x3877c4u: goto label_3877c4;
        case 0x3877c8u: goto label_3877c8;
        case 0x3877ccu: goto label_3877cc;
        case 0x3877d0u: goto label_3877d0;
        case 0x3877d4u: goto label_3877d4;
        case 0x3877d8u: goto label_3877d8;
        case 0x3877dcu: goto label_3877dc;
        case 0x3877e0u: goto label_3877e0;
        case 0x3877e4u: goto label_3877e4;
        case 0x3877e8u: goto label_3877e8;
        case 0x3877ecu: goto label_3877ec;
        case 0x3877f0u: goto label_3877f0;
        case 0x3877f4u: goto label_3877f4;
        case 0x3877f8u: goto label_3877f8;
        case 0x3877fcu: goto label_3877fc;
        case 0x387800u: goto label_387800;
        case 0x387804u: goto label_387804;
        case 0x387808u: goto label_387808;
        case 0x38780cu: goto label_38780c;
        case 0x387810u: goto label_387810;
        case 0x387814u: goto label_387814;
        case 0x387818u: goto label_387818;
        case 0x38781cu: goto label_38781c;
        case 0x387820u: goto label_387820;
        case 0x387824u: goto label_387824;
        case 0x387828u: goto label_387828;
        case 0x38782cu: goto label_38782c;
        case 0x387830u: goto label_387830;
        case 0x387834u: goto label_387834;
        case 0x387838u: goto label_387838;
        case 0x38783cu: goto label_38783c;
        case 0x387840u: goto label_387840;
        case 0x387844u: goto label_387844;
        case 0x387848u: goto label_387848;
        case 0x38784cu: goto label_38784c;
        case 0x387850u: goto label_387850;
        case 0x387854u: goto label_387854;
        case 0x387858u: goto label_387858;
        case 0x38785cu: goto label_38785c;
        case 0x387860u: goto label_387860;
        case 0x387864u: goto label_387864;
        case 0x387868u: goto label_387868;
        case 0x38786cu: goto label_38786c;
        case 0x387870u: goto label_387870;
        case 0x387874u: goto label_387874;
        case 0x387878u: goto label_387878;
        case 0x38787cu: goto label_38787c;
        case 0x387880u: goto label_387880;
        case 0x387884u: goto label_387884;
        case 0x387888u: goto label_387888;
        case 0x38788cu: goto label_38788c;
        case 0x387890u: goto label_387890;
        case 0x387894u: goto label_387894;
        case 0x387898u: goto label_387898;
        case 0x38789cu: goto label_38789c;
        case 0x3878a0u: goto label_3878a0;
        case 0x3878a4u: goto label_3878a4;
        case 0x3878a8u: goto label_3878a8;
        case 0x3878acu: goto label_3878ac;
        case 0x3878b0u: goto label_3878b0;
        case 0x3878b4u: goto label_3878b4;
        case 0x3878b8u: goto label_3878b8;
        case 0x3878bcu: goto label_3878bc;
        case 0x3878c0u: goto label_3878c0;
        case 0x3878c4u: goto label_3878c4;
        case 0x3878c8u: goto label_3878c8;
        case 0x3878ccu: goto label_3878cc;
        case 0x3878d0u: goto label_3878d0;
        case 0x3878d4u: goto label_3878d4;
        case 0x3878d8u: goto label_3878d8;
        case 0x3878dcu: goto label_3878dc;
        case 0x3878e0u: goto label_3878e0;
        case 0x3878e4u: goto label_3878e4;
        case 0x3878e8u: goto label_3878e8;
        case 0x3878ecu: goto label_3878ec;
        case 0x3878f0u: goto label_3878f0;
        case 0x3878f4u: goto label_3878f4;
        case 0x3878f8u: goto label_3878f8;
        case 0x3878fcu: goto label_3878fc;
        case 0x387900u: goto label_387900;
        case 0x387904u: goto label_387904;
        case 0x387908u: goto label_387908;
        case 0x38790cu: goto label_38790c;
        case 0x387910u: goto label_387910;
        case 0x387914u: goto label_387914;
        case 0x387918u: goto label_387918;
        case 0x38791cu: goto label_38791c;
        case 0x387920u: goto label_387920;
        case 0x387924u: goto label_387924;
        case 0x387928u: goto label_387928;
        case 0x38792cu: goto label_38792c;
        case 0x387930u: goto label_387930;
        case 0x387934u: goto label_387934;
        case 0x387938u: goto label_387938;
        case 0x38793cu: goto label_38793c;
        case 0x387940u: goto label_387940;
        case 0x387944u: goto label_387944;
        case 0x387948u: goto label_387948;
        case 0x38794cu: goto label_38794c;
        case 0x387950u: goto label_387950;
        case 0x387954u: goto label_387954;
        case 0x387958u: goto label_387958;
        case 0x38795cu: goto label_38795c;
        case 0x387960u: goto label_387960;
        case 0x387964u: goto label_387964;
        case 0x387968u: goto label_387968;
        case 0x38796cu: goto label_38796c;
        case 0x387970u: goto label_387970;
        case 0x387974u: goto label_387974;
        case 0x387978u: goto label_387978;
        case 0x38797cu: goto label_38797c;
        case 0x387980u: goto label_387980;
        case 0x387984u: goto label_387984;
        case 0x387988u: goto label_387988;
        case 0x38798cu: goto label_38798c;
        case 0x387990u: goto label_387990;
        case 0x387994u: goto label_387994;
        case 0x387998u: goto label_387998;
        case 0x38799cu: goto label_38799c;
        case 0x3879a0u: goto label_3879a0;
        case 0x3879a4u: goto label_3879a4;
        case 0x3879a8u: goto label_3879a8;
        case 0x3879acu: goto label_3879ac;
        case 0x3879b0u: goto label_3879b0;
        case 0x3879b4u: goto label_3879b4;
        case 0x3879b8u: goto label_3879b8;
        case 0x3879bcu: goto label_3879bc;
        case 0x3879c0u: goto label_3879c0;
        case 0x3879c4u: goto label_3879c4;
        case 0x3879c8u: goto label_3879c8;
        case 0x3879ccu: goto label_3879cc;
        case 0x3879d0u: goto label_3879d0;
        case 0x3879d4u: goto label_3879d4;
        case 0x3879d8u: goto label_3879d8;
        case 0x3879dcu: goto label_3879dc;
        case 0x3879e0u: goto label_3879e0;
        case 0x3879e4u: goto label_3879e4;
        case 0x3879e8u: goto label_3879e8;
        case 0x3879ecu: goto label_3879ec;
        case 0x3879f0u: goto label_3879f0;
        case 0x3879f4u: goto label_3879f4;
        case 0x3879f8u: goto label_3879f8;
        case 0x3879fcu: goto label_3879fc;
        case 0x387a00u: goto label_387a00;
        case 0x387a04u: goto label_387a04;
        case 0x387a08u: goto label_387a08;
        case 0x387a0cu: goto label_387a0c;
        case 0x387a10u: goto label_387a10;
        case 0x387a14u: goto label_387a14;
        case 0x387a18u: goto label_387a18;
        case 0x387a1cu: goto label_387a1c;
        case 0x387a20u: goto label_387a20;
        case 0x387a24u: goto label_387a24;
        case 0x387a28u: goto label_387a28;
        case 0x387a2cu: goto label_387a2c;
        case 0x387a30u: goto label_387a30;
        case 0x387a34u: goto label_387a34;
        case 0x387a38u: goto label_387a38;
        case 0x387a3cu: goto label_387a3c;
        case 0x387a40u: goto label_387a40;
        case 0x387a44u: goto label_387a44;
        case 0x387a48u: goto label_387a48;
        case 0x387a4cu: goto label_387a4c;
        case 0x387a50u: goto label_387a50;
        case 0x387a54u: goto label_387a54;
        case 0x387a58u: goto label_387a58;
        case 0x387a5cu: goto label_387a5c;
        case 0x387a60u: goto label_387a60;
        case 0x387a64u: goto label_387a64;
        case 0x387a68u: goto label_387a68;
        case 0x387a6cu: goto label_387a6c;
        case 0x387a70u: goto label_387a70;
        case 0x387a74u: goto label_387a74;
        case 0x387a78u: goto label_387a78;
        case 0x387a7cu: goto label_387a7c;
        case 0x387a80u: goto label_387a80;
        case 0x387a84u: goto label_387a84;
        case 0x387a88u: goto label_387a88;
        case 0x387a8cu: goto label_387a8c;
        default: break;
    }

    ctx->pc = 0x387780u;

label_387780:
    // 0x387780: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x387780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_387784:
    // 0x387784: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x387784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
label_387788:
    // 0x387788: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x387788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
label_38778c:
    // 0x38778c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38778cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_387790:
    // 0x387790: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x387790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
label_387794:
    // 0x387794: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x387794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
label_387798:
    // 0x387798: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x387798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
label_38779c:
    // 0x38779c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x38779cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
label_3877a0:
    // 0x3877a0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x3877a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
label_3877a4:
    // 0x3877a4: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3877a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_3877a8:
    // 0x3877a8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3877a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3877ac:
    // 0x3877ac: 0x8e621300  lw          $v0, 0x1300($s3)
    ctx->pc = 0x3877acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4864)));
label_3877b0:
    // 0x3877b0: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
label_3877b4:
    if (ctx->pc == 0x3877B4u) {
        ctx->pc = 0x3877B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877B0u;
        // 0x3877b4: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3877B8u;
        goto label_3877b8;
    }
    ctx->pc = 0x3877B0u;
    {
        const bool branch_taken_0x3877b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3877B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877B0u;
        // 0x3877b4: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877b0) {
            ctx->pc = 0x387A68u;
            goto label_387a68;
        }
    }
    ctx->pc = 0x3877B8u;
label_3877b8:
    // 0x3877b8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x3877b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3877bc:
    // 0x3877bc: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
label_3877c0:
    if (ctx->pc == 0x3877C0u) {
        ctx->pc = 0x3877C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877BCu;
        // 0x3877c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3877C4u;
        goto label_3877c4;
    }
    ctx->pc = 0x3877BCu;
    {
        const bool branch_taken_0x3877bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3877C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877BCu;
        // 0x3877c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3877bc) {
            ctx->pc = 0x387A68u;
            goto label_387a68;
        }
    }
    ctx->pc = 0x3877C4u;
label_3877c4:
    // 0x3877c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3877c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3877c8:
    // 0x3877c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3877c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3877cc:
    // 0x3877cc: 0x26741204  addiu       $s4, $s3, 0x1204
    ctx->pc = 0x3877ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4612));
label_3877d0:
    // 0x3877d0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x3877d0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_3877d4:
    // 0x3877d4: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x3877d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_3877d8:
    // 0x3877d8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x3877d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_3877dc:
    // 0x3877dc: 0x26751210  addiu       $s5, $s3, 0x1210
    ctx->pc = 0x3877dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4624));
label_3877e0:
    // 0x3877e0: 0x2652821  addu        $a1, $s3, $a1
    ctx->pc = 0x3877e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_3877e4:
    // 0x3877e4: 0x60f809  jalr        $v1
label_3877e8:
    if (ctx->pc == 0x3877E8u) {
        ctx->pc = 0x3877E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877E4u;
        // 0x3877e8: 0x267001a0  addiu       $s0, $s3, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3877ECu;
        goto label_3877ec;
    }
    ctx->pc = 0x3877E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3877ECu);
        ctx->pc = 0x3877E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3877E4u;
        // 0x3877e8: 0x267001a0  addiu       $s0, $s3, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3877E4u, 0x3877ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3877ECu;
label_3877ec:
    // 0x3877ec: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3877ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3877f0:
    // 0x3877f0: 0x7e620190  sq          $v0, 0x190($s3)
    ctx->pc = 0x3877f0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 400), GPR_VEC(ctx, 2));
label_3877f4:
    // 0x3877f4: 0x2e22001a  sltiu       $v0, $s1, 0x1A
    ctx->pc = 0x3877f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_3877f8:
    // 0x3877f8: 0x2626ffe7  addiu       $a2, $s1, -0x19
    ctx->pc = 0x3877f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967271));
label_3877fc:
    // 0x3877fc: 0x8e641300  lw          $a0, 0x1300($s3)
    ctx->pc = 0x3877fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4864)));
label_387800:
    // 0x387800: 0x222300b  movn        $a2, $s1, $v0
    ctx->pc = 0x387800u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
label_387804:
    // 0x387804: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x387804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_387808:
    // 0x387808: 0xc05c976  jal         func_1725D8
label_38780c:
    if (ctx->pc == 0x38780Cu) {
        ctx->pc = 0x38780Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387808u;
        // 0x38780c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387810u;
        goto label_387810;
    }
    ctx->pc = 0x387808u;
    SET_GPR_U32(ctx, 31, 0x387810u);
    ctx->pc = 0x38780Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387808u;
    // 0x38780c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1725D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725D8u, 0x387808u, 0x387810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387810u;
label_387810:
    // 0x387810: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x387810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_387814:
    // 0x387814: 0x2e22001a  sltiu       $v0, $s1, 0x1A
    ctx->pc = 0x387814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_387818:
    // 0x387818: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_38781c:
    if (ctx->pc == 0x38781Cu) {
        ctx->pc = 0x38781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387818u;
        // 0x38781c: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387820u;
        goto label_387820;
    }
    ctx->pc = 0x387818u;
    {
        const bool branch_taken_0x387818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38781Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387818u;
        // 0x38781c: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387818) {
            ctx->pc = 0x3877F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3877f8;
        }
    }
    ctx->pc = 0x387820u;
label_387820:
    // 0x387820: 0x7a630f90  lq          $v1, 0xF90($s3)
    ctx->pc = 0x387820u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 3984)));
label_387824:
    // 0x387824: 0x3c168000  lui         $s6, 0x8000
    ctx->pc = 0x387824u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32768 << 16));
label_387828:
    // 0x387828: 0x7a620f80  lq          $v0, 0xF80($s3)
    ctx->pc = 0x387828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 3968)));
label_38782c:
    // 0x38782c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x38782cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_387830:
    // 0x387830: 0x7a641000  lq          $a0, 0x1000($s3)
    ctx->pc = 0x387830u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 19), 4096)));
label_387834:
    // 0x387834: 0x7a661010  lq          $a2, 0x1010($s3)
    ctx->pc = 0x387834u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 19), 4112)));
label_387838:
    // 0x387838: 0x7a671020  lq          $a3, 0x1020($s3)
    ctx->pc = 0x387838u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 19), 4128)));
label_38783c:
    // 0x38783c: 0x7a681030  lq          $t0, 0x1030($s3)
    ctx->pc = 0x38783cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 19), 4144)));
label_387840:
    // 0x387840: 0x7a6910a0  lq          $t1, 0x10A0($s3)
    ctx->pc = 0x387840u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 19), 4256)));
label_387844:
    // 0x387844: 0x7a6a10b0  lq          $t2, 0x10B0($s3)
    ctx->pc = 0x387844u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 19), 4272)));
label_387848:
    // 0x387848: 0x7a6b10c0  lq          $t3, 0x10C0($s3)
    ctx->pc = 0x387848u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 19), 4288)));
label_38784c:
    // 0x38784c: 0x7a6c10d0  lq          $t4, 0x10D0($s3)
    ctx->pc = 0x38784cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 19), 4304)));
label_387850:
    // 0x387850: 0x7a6d1140  lq          $t5, 0x1140($s3)
    ctx->pc = 0x387850u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 19), 4416)));
label_387854:
    // 0x387854: 0x7a6e1150  lq          $t6, 0x1150($s3)
    ctx->pc = 0x387854u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 19), 4432)));
label_387858:
    // 0x387858: 0x7a6f1160  lq          $t7, 0x1160($s3)
    ctx->pc = 0x387858u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 19), 4448)));
label_38785c:
    // 0x38785c: 0x7a720f60  lq          $s2, 0xF60($s3)
    ctx->pc = 0x38785cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 19), 3936)));
label_387860:
    // 0x387860: 0x7a710f70  lq          $s1, 0xF70($s3)
    ctx->pc = 0x387860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 19), 3952)));
label_387864:
    // 0x387864: 0x7a701170  lq          $s0, 0x1170($s3)
    ctx->pc = 0x387864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 19), 4464)));
label_387868:
    // 0x387868: 0x7e6300a0  sq          $v1, 0xA0($s3)
    ctx->pc = 0x387868u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 160), GPR_VEC(ctx, 3));
label_38786c:
    // 0x38786c: 0x7e6400b0  sq          $a0, 0xB0($s3)
    ctx->pc = 0x38786cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 176), GPR_VEC(ctx, 4));
label_387870:
    // 0x387870: 0x7e6600c0  sq          $a2, 0xC0($s3)
    ctx->pc = 0x387870u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 192), GPR_VEC(ctx, 6));
label_387874:
    // 0x387874: 0x7e720070  sq          $s2, 0x70($s3)
    ctx->pc = 0x387874u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 112), GPR_VEC(ctx, 18));
label_387878:
    // 0x387878: 0x7e710080  sq          $s1, 0x80($s3)
    ctx->pc = 0x387878u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 128), GPR_VEC(ctx, 17));
label_38787c:
    // 0x38787c: 0x7e620090  sq          $v0, 0x90($s3)
    ctx->pc = 0x38787cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 144), GPR_VEC(ctx, 2));
label_387880:
    // 0x387880: 0x7e6700d0  sq          $a3, 0xD0($s3)
    ctx->pc = 0x387880u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 208), GPR_VEC(ctx, 7));
label_387884:
    // 0x387884: 0x7e6800e0  sq          $t0, 0xE0($s3)
    ctx->pc = 0x387884u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 224), GPR_VEC(ctx, 8));
label_387888:
    // 0x387888: 0x7e6900f0  sq          $t1, 0xF0($s3)
    ctx->pc = 0x387888u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 240), GPR_VEC(ctx, 9));
label_38788c:
    // 0x38788c: 0x7e6a0100  sq          $t2, 0x100($s3)
    ctx->pc = 0x38788cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 256), GPR_VEC(ctx, 10));
label_387890:
    // 0x387890: 0x7e6b0110  sq          $t3, 0x110($s3)
    ctx->pc = 0x387890u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 272), GPR_VEC(ctx, 11));
label_387894:
    // 0x387894: 0x7e6c0120  sq          $t4, 0x120($s3)
    ctx->pc = 0x387894u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 288), GPR_VEC(ctx, 12));
label_387898:
    // 0x387898: 0x7e6d0130  sq          $t5, 0x130($s3)
    ctx->pc = 0x387898u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 304), GPR_VEC(ctx, 13));
label_38789c:
    // 0x38789c: 0x7e6e0140  sq          $t6, 0x140($s3)
    ctx->pc = 0x38789cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 320), GPR_VEC(ctx, 14));
label_3878a0:
    // 0x3878a0: 0x7e6f0150  sq          $t7, 0x150($s3)
    ctx->pc = 0x3878a0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 336), GPR_VEC(ctx, 15));
label_3878a4:
    // 0x3878a4: 0x7e700160  sq          $s0, 0x160($s3)
    ctx->pc = 0x3878a4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 352), GPR_VEC(ctx, 16));
label_3878a8:
    // 0x3878a8: 0x8e63130c  lw          $v1, 0x130C($s3)
    ctx->pc = 0x3878a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4876)));
label_3878ac:
    // 0x3878ac: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3878acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_3878b0:
    // 0x3878b0: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x3878b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
label_3878b4:
    // 0x3878b4: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x3878b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_3878b8:
    // 0x3878b8: 0x8e66130c  lw          $a2, 0x130C($s3)
    ctx->pc = 0x3878b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4876)));
label_3878bc:
    // 0x3878bc: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x3878bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3878c0:
    // 0x3878c0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x3878c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_3878c4:
    // 0x3878c4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3878c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3878c8:
    // 0x3878c8: 0x60f809  jalr        $v1
label_3878cc:
    if (ctx->pc == 0x3878CCu) {
        ctx->pc = 0x3878CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878C8u;
        // 0x3878cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3878D0u;
        goto label_3878d0;
    }
    ctx->pc = 0x3878C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3878D0u);
        ctx->pc = 0x3878CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878C8u;
        // 0x3878cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3878C8u, 0x3878D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3878D0u;
label_3878d0:
    // 0x3878d0: 0x8e641204  lw          $a0, 0x1204($s3)
    ctx->pc = 0x3878d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4612)));
label_3878d4:
    // 0x3878d4: 0x8ee2bd30  lw          $v0, -0x42D0($s7)
    ctx->pc = 0x3878d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
label_3878d8:
    // 0x3878d8: 0x10820044  beq         $a0, $v0, . + 4 + (0x44 << 2)
label_3878dc:
    if (ctx->pc == 0x3878DCu) {
        ctx->pc = 0x3878DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878D8u;
        // 0x3878dc: 0x8ee3bd30  lw          $v1, -0x42D0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3878E0u;
        goto label_3878e0;
    }
    ctx->pc = 0x3878D8u;
    {
        const bool branch_taken_0x3878d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3878DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878D8u;
        // 0x3878dc: 0x8ee3bd30  lw          $v1, -0x42D0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878d8) {
            ctx->pc = 0x3879ECu;
            goto label_3879ec;
        }
    }
    ctx->pc = 0x3878E0u;
label_3878e0:
    // 0x3878e0: 0xc0e4060  jal         func_390180
label_3878e4:
    if (ctx->pc == 0x3878E4u) {
        ctx->pc = 0x3878E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878E0u;
        // 0x3878e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3878E8u;
        goto label_3878e8;
    }
    ctx->pc = 0x3878E0u;
    SET_GPR_U32(ctx, 31, 0x3878E8u);
    ctx->pc = 0x3878E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3878E0u;
    // 0x3878e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3878E0u, 0x3878E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3878E8u;
label_3878e8:
    // 0x3878e8: 0xc0e57ce  jal         func_395F38
label_3878ec:
    if (ctx->pc == 0x3878ECu) {
        ctx->pc = 0x3878ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878E8u;
        // 0x3878ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3878F0u;
        goto label_3878f0;
    }
    ctx->pc = 0x3878E8u;
    SET_GPR_U32(ctx, 31, 0x3878F0u);
    ctx->pc = 0x3878ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3878E8u;
    // 0x3878ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3878E8u, 0x3878F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3878F0u;
label_3878f0:
    // 0x3878f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3878f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3878f4:
    // 0x3878f4: 0x1220003c  beqz        $s1, . + 4 + (0x3C << 2)
label_3878f8:
    if (ctx->pc == 0x3878F8u) {
        ctx->pc = 0x3878F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878F4u;
        // 0x3878f8: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3878FCu;
        goto label_3878fc;
    }
    ctx->pc = 0x3878F4u;
    {
        const bool branch_taken_0x3878f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3878F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3878F4u;
        // 0x3878f8: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3878f4) {
            ctx->pc = 0x3879E8u;
            goto label_3879e8;
        }
    }
    ctx->pc = 0x3878FCu;
label_3878fc:
    // 0x3878fc: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x3878fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_387900:
    // 0x387900: 0xc0cd940  jal         func_336500
label_387904:
    if (ctx->pc == 0x387904u) {
        ctx->pc = 0x387904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387900u;
        // 0x387904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387908u;
        goto label_387908;
    }
    ctx->pc = 0x387900u;
    SET_GPR_U32(ctx, 31, 0x387908u);
    ctx->pc = 0x387904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387900u;
    // 0x387904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x387900u, 0x387908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387908u;
label_387908:
    // 0x387908: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x387908u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_38790c:
    // 0x38790c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x38790cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_387910:
    // 0x387910: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x387910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_387914:
    // 0x387914: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x387914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_387918:
    // 0x387918: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x387918u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_38791c:
    // 0x38791c: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x38791cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_387920:
    // 0x387920: 0x40f809  jalr        $v0
label_387924:
    if (ctx->pc == 0x387924u) {
        ctx->pc = 0x387924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387920u;
        // 0x387924: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387928u;
        goto label_387928;
    }
    ctx->pc = 0x387920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x387928u);
        ctx->pc = 0x387924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387920u;
        // 0x387924: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387920u, 0x387928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387928u;
label_387928:
    // 0x387928: 0x8e6711e0  lw          $a3, 0x11E0($s3)
    ctx->pc = 0x387928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4576)));
label_38792c:
    // 0x38792c: 0x240405f0  addiu       $a0, $zero, 0x5F0
    ctx->pc = 0x38792cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1520));
label_387930:
    // 0x387930: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x387930u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_387934:
    // 0x387934: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x387934u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_387938:
    // 0x387938: 0xe43818  mult        $a3, $a3, $a0
    ctx->pc = 0x387938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_38793c:
    // 0x38793c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x38793cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_387940:
    // 0x387940: 0x24c6e4a0  addiu       $a2, $a2, -0x1B60
    ctx->pc = 0x387940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960288));
label_387944:
    // 0x387944: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x387944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_387948:
    // 0x387948: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x387948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_38794c:
    // 0x38794c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38794cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_387950:
    // 0x387950: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x387950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_387954:
    // 0x387954: 0xc0e1c74  jal         func_3871D0
label_387958:
    if (ctx->pc == 0x387958u) {
        ctx->pc = 0x387958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387954u;
        // 0x387958: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38795Cu;
        goto label_38795c;
    }
    ctx->pc = 0x387954u;
    SET_GPR_U32(ctx, 31, 0x38795Cu);
    ctx->pc = 0x387958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387954u;
    // 0x387958: 0xe63021  addu        $a2, $a3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3871D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3871D0u, 0x387954u, 0x38795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38795Cu;
label_38795c:
    // 0x38795c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38795cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_387960:
    // 0x387960: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x387960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_387964:
    // 0x387964: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x387964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_387968:
    // 0x387968: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x387968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_38796c:
    // 0x38796c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_387970:
    // 0x387970: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x387970u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_387974:
    // 0x387974: 0x8c46006c  lw          $a2, 0x6C($v0)
    ctx->pc = 0x387974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_387978:
    // 0x387978: 0xc0f809  jalr        $a2
label_38797c:
    if (ctx->pc == 0x38797Cu) {
        ctx->pc = 0x38797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387978u;
        // 0x38797c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387980u;
        goto label_387980;
    }
    ctx->pc = 0x387978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x387980u);
        ctx->pc = 0x38797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387978u;
        // 0x38797c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387978u, 0x387980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387980u;
label_387980:
    // 0x387980: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x387980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_387984:
    // 0x387984: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x387984u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_387988:
    // 0x387988: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x387988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_38798c:
    // 0x38798c: 0x40f809  jalr        $v0
label_387990:
    if (ctx->pc == 0x387990u) {
        ctx->pc = 0x387990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38798Cu;
        // 0x387990: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387994u;
        goto label_387994;
    }
    ctx->pc = 0x38798Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x387994u);
        ctx->pc = 0x387990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38798Cu;
        // 0x387990: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38798Cu, 0x387994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387994u;
label_387994:
    // 0x387994: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_387998:
    if (ctx->pc == 0x387998u) {
        ctx->pc = 0x387998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387994u;
        // 0x387998: 0x8ee3bd30  lw          $v1, -0x42D0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38799Cu;
        goto label_38799c;
    }
    ctx->pc = 0x387994u;
    {
        const bool branch_taken_0x387994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387994u;
        // 0x387998: 0x8ee3bd30  lw          $v1, -0x42D0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387994) {
            ctx->pc = 0x3879ECu;
            goto label_3879ec;
        }
    }
    ctx->pc = 0x38799Cu;
label_38799c:
    // 0x38799c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38799cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3879a0:
    // 0x3879a0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x3879a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_3879a4:
    // 0x3879a4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x3879a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_3879a8:
    // 0x3879a8: 0x40f809  jalr        $v0
label_3879ac:
    if (ctx->pc == 0x3879ACu) {
        ctx->pc = 0x3879ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879A8u;
        // 0x3879ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879B0u;
        goto label_3879b0;
    }
    ctx->pc = 0x3879A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3879B0u);
        ctx->pc = 0x3879ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879A8u;
        // 0x3879ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3879A8u, 0x3879B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3879B0u;
label_3879b0:
    // 0x3879b0: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x3879b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3879b4:
    // 0x3879b4: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x3879b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
label_3879b8:
    // 0x3879b8: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x3879b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_3879bc:
    // 0x3879bc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3879bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3879c0:
    // 0x3879c0: 0x84a400f0  lh          $a0, 0xF0($a1)
    ctx->pc = 0x3879c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 240)));
label_3879c4:
    // 0x3879c4: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x3879c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
label_3879c8:
    // 0x3879c8: 0x40f809  jalr        $v0
label_3879cc:
    if (ctx->pc == 0x3879CCu) {
        ctx->pc = 0x3879CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879C8u;
        // 0x3879cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879D0u;
        goto label_3879d0;
    }
    ctx->pc = 0x3879C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3879D0u);
        ctx->pc = 0x3879CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879C8u;
        // 0x3879cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3879C8u, 0x3879D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3879D0u;
label_3879d0:
    // 0x3879d0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3879d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3879d4:
    // 0x3879d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3879d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3879d8:
    // 0x3879d8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x3879d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_3879dc:
    // 0x3879dc: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x3879dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3879e0:
    // 0x3879e0: 0xc0f809  jalr        $a2
label_3879e4:
    if (ctx->pc == 0x3879E4u) {
        ctx->pc = 0x3879E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879E0u;
        // 0x3879e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879E8u;
        goto label_3879e8;
    }
    ctx->pc = 0x3879E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x3879E8u);
        ctx->pc = 0x3879E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879E0u;
        // 0x3879e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3879E0u, 0x3879E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3879E8u;
label_3879e8:
    // 0x3879e8: 0x8ee3bd30  lw          $v1, -0x42D0($s7)
    ctx->pc = 0x3879e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294950192)));
label_3879ec:
    // 0x3879ec: 0x8e621210  lw          $v0, 0x1210($s3)
    ctx->pc = 0x3879ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4624)));
label_3879f0:
    // 0x3879f0: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
label_3879f4:
    if (ctx->pc == 0x3879F4u) {
        ctx->pc = 0x3879F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879F0u;
        // 0x3879f4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3879F8u;
        goto label_3879f8;
    }
    ctx->pc = 0x3879F0u;
    {
        const bool branch_taken_0x3879f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3879F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879F0u;
        // 0x3879f4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3879f0) {
            ctx->pc = 0x387A64u;
            goto label_387a64;
        }
    }
    ctx->pc = 0x3879F8u;
label_3879f8:
    // 0x3879f8: 0x26710010  addiu       $s1, $s3, 0x10
    ctx->pc = 0x3879f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3879fc:
    // 0x3879fc: 0xc0e8b48  jal         func_3A2D20
label_387a00:
    if (ctx->pc == 0x387A00u) {
        ctx->pc = 0x387A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879FCu;
        // 0x387a00: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A04u;
        goto label_387a04;
    }
    ctx->pc = 0x3879FCu;
    SET_GPR_U32(ctx, 31, 0x387A04u);
    ctx->pc = 0x387A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3879FCu;
    // 0x387a00: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3879FCu, 0x387A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A04u;
label_387a04:
    // 0x387a04: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x387a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_387a08:
    // 0x387a08: 0xc0e8b58  jal         func_3A2D60
label_387a0c:
    if (ctx->pc == 0x387A0Cu) {
        ctx->pc = 0x387A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A08u;
        // 0x387a0c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A10u;
        goto label_387a10;
    }
    ctx->pc = 0x387A08u;
    SET_GPR_U32(ctx, 31, 0x387A10u);
    ctx->pc = 0x387A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A08u;
    // 0x387a0c: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x387A08u, 0x387A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A10u;
label_387a10:
    // 0x387a10: 0xc0e4060  jal         func_390180
label_387a14:
    if (ctx->pc == 0x387A14u) {
        ctx->pc = 0x387A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A10u;
        // 0x387a14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A18u;
        goto label_387a18;
    }
    ctx->pc = 0x387A10u;
    SET_GPR_U32(ctx, 31, 0x387A18u);
    ctx->pc = 0x387A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A10u;
    // 0x387a14: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x387A10u, 0x387A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A18u;
label_387a18:
    // 0x387a18: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x387a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_387a1c:
    // 0x387a1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x387a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387a20:
    // 0x387a20: 0xc0e8b80  jal         func_3A2E00
label_387a24:
    if (ctx->pc == 0x387A24u) {
        ctx->pc = 0x387A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A20u;
        // 0x387a24: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A28u;
        goto label_387a28;
    }
    ctx->pc = 0x387A20u;
    SET_GPR_U32(ctx, 31, 0x387A28u);
    ctx->pc = 0x387A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A20u;
    // 0x387a24: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x387A20u, 0x387A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A28u;
label_387a28:
    // 0x387a28: 0xc0e8b50  jal         func_3A2D40
label_387a2c:
    if (ctx->pc == 0x387A2Cu) {
        ctx->pc = 0x387A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A28u;
        // 0x387a2c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A30u;
        goto label_387a30;
    }
    ctx->pc = 0x387A28u;
    SET_GPR_U32(ctx, 31, 0x387A30u);
    ctx->pc = 0x387A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A28u;
    // 0x387a2c: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x387A28u, 0x387A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A30u;
label_387a30:
    // 0x387a30: 0xc0e8b48  jal         func_3A2D20
label_387a34:
    if (ctx->pc == 0x387A34u) {
        ctx->pc = 0x387A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A30u;
        // 0x387a34: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A38u;
        goto label_387a38;
    }
    ctx->pc = 0x387A30u;
    SET_GPR_U32(ctx, 31, 0x387A38u);
    ctx->pc = 0x387A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A30u;
    // 0x387a34: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x387A30u, 0x387A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A38u;
label_387a38:
    // 0x387a38: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x387a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_387a3c:
    // 0x387a3c: 0xc0e8b58  jal         func_3A2D60
label_387a40:
    if (ctx->pc == 0x387A40u) {
        ctx->pc = 0x387A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A3Cu;
        // 0x387a40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A44u;
        goto label_387a44;
    }
    ctx->pc = 0x387A3Cu;
    SET_GPR_U32(ctx, 31, 0x387A44u);
    ctx->pc = 0x387A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A3Cu;
    // 0x387a40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x387A3Cu, 0x387A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A44u;
label_387a44:
    // 0x387a44: 0xc0e4060  jal         func_390180
label_387a48:
    if (ctx->pc == 0x387A48u) {
        ctx->pc = 0x387A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A44u;
        // 0x387a48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A4Cu;
        goto label_387a4c;
    }
    ctx->pc = 0x387A44u;
    SET_GPR_U32(ctx, 31, 0x387A4Cu);
    ctx->pc = 0x387A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A44u;
    // 0x387a48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x387A44u, 0x387A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A4Cu;
label_387a4c:
    // 0x387a4c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x387a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_387a50:
    // 0x387a50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x387a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387a54:
    // 0x387a54: 0xc0e8b80  jal         func_3A2E00
label_387a58:
    if (ctx->pc == 0x387A58u) {
        ctx->pc = 0x387A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A54u;
        // 0x387a58: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A5Cu;
        goto label_387a5c;
    }
    ctx->pc = 0x387A54u;
    SET_GPR_U32(ctx, 31, 0x387A5Cu);
    ctx->pc = 0x387A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A54u;
    // 0x387a58: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x387A54u, 0x387A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A5Cu;
label_387a5c:
    // 0x387a5c: 0xc0e8b50  jal         func_3A2D40
label_387a60:
    if (ctx->pc == 0x387A60u) {
        ctx->pc = 0x387A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A5Cu;
        // 0x387a60: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A64u;
        goto label_387a64;
    }
    ctx->pc = 0x387A5Cu;
    SET_GPR_U32(ctx, 31, 0x387A64u);
    ctx->pc = 0x387A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A5Cu;
    // 0x387a60: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x387A5Cu, 0x387A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A64u;
label_387a64:
    // 0x387a64: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x387a64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_387a68:
    // 0x387a68: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x387a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_387a6c:
    // 0x387a6c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x387a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_387a70:
    // 0x387a70: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x387a70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_387a74:
    // 0x387a74: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x387a74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_387a78:
    // 0x387a78: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x387a78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_387a7c:
    // 0x387a7c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x387a7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_387a80:
    // 0x387a80: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x387a80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_387a84:
    // 0x387a84: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x387a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_387a88:
    // 0x387a88: 0x3e00008  jr          $ra
label_387a8c:
    if (ctx->pc == 0x387A8Cu) {
        ctx->pc = 0x387A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A88u;
        // 0x387a8c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387A90u;
        goto label_fallthrough_0x387a88;
    }
    ctx->pc = 0x387A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A88u;
        // 0x387a8c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x387a88:
    ctx->pc = 0x387A90u;
}
