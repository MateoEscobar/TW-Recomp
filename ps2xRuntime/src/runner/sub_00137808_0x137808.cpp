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

// Function: sub_00137808
// Address: 0x137808 - 0x137c68
void sub_00137808_0x137808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137808_0x137808");
#endif

    switch (ctx->pc) {
        case 0x137808u: goto label_137808;
        case 0x13780cu: goto label_13780c;
        case 0x137810u: goto label_137810;
        case 0x137814u: goto label_137814;
        case 0x137818u: goto label_137818;
        case 0x13781cu: goto label_13781c;
        case 0x137820u: goto label_137820;
        case 0x137824u: goto label_137824;
        case 0x137828u: goto label_137828;
        case 0x13782cu: goto label_13782c;
        case 0x137830u: goto label_137830;
        case 0x137834u: goto label_137834;
        case 0x137838u: goto label_137838;
        case 0x13783cu: goto label_13783c;
        case 0x137840u: goto label_137840;
        case 0x137844u: goto label_137844;
        case 0x137848u: goto label_137848;
        case 0x13784cu: goto label_13784c;
        case 0x137850u: goto label_137850;
        case 0x137854u: goto label_137854;
        case 0x137858u: goto label_137858;
        case 0x13785cu: goto label_13785c;
        case 0x137860u: goto label_137860;
        case 0x137864u: goto label_137864;
        case 0x137868u: goto label_137868;
        case 0x13786cu: goto label_13786c;
        case 0x137870u: goto label_137870;
        case 0x137874u: goto label_137874;
        case 0x137878u: goto label_137878;
        case 0x13787cu: goto label_13787c;
        case 0x137880u: goto label_137880;
        case 0x137884u: goto label_137884;
        case 0x137888u: goto label_137888;
        case 0x13788cu: goto label_13788c;
        case 0x137890u: goto label_137890;
        case 0x137894u: goto label_137894;
        case 0x137898u: goto label_137898;
        case 0x13789cu: goto label_13789c;
        case 0x1378a0u: goto label_1378a0;
        case 0x1378a4u: goto label_1378a4;
        case 0x1378a8u: goto label_1378a8;
        case 0x1378acu: goto label_1378ac;
        case 0x1378b0u: goto label_1378b0;
        case 0x1378b4u: goto label_1378b4;
        case 0x1378b8u: goto label_1378b8;
        case 0x1378bcu: goto label_1378bc;
        case 0x1378c0u: goto label_1378c0;
        case 0x1378c4u: goto label_1378c4;
        case 0x1378c8u: goto label_1378c8;
        case 0x1378ccu: goto label_1378cc;
        case 0x1378d0u: goto label_1378d0;
        case 0x1378d4u: goto label_1378d4;
        case 0x1378d8u: goto label_1378d8;
        case 0x1378dcu: goto label_1378dc;
        case 0x1378e0u: goto label_1378e0;
        case 0x1378e4u: goto label_1378e4;
        case 0x1378e8u: goto label_1378e8;
        case 0x1378ecu: goto label_1378ec;
        case 0x1378f0u: goto label_1378f0;
        case 0x1378f4u: goto label_1378f4;
        case 0x1378f8u: goto label_1378f8;
        case 0x1378fcu: goto label_1378fc;
        case 0x137900u: goto label_137900;
        case 0x137904u: goto label_137904;
        case 0x137908u: goto label_137908;
        case 0x13790cu: goto label_13790c;
        case 0x137910u: goto label_137910;
        case 0x137914u: goto label_137914;
        case 0x137918u: goto label_137918;
        case 0x13791cu: goto label_13791c;
        case 0x137920u: goto label_137920;
        case 0x137924u: goto label_137924;
        case 0x137928u: goto label_137928;
        case 0x13792cu: goto label_13792c;
        case 0x137930u: goto label_137930;
        case 0x137934u: goto label_137934;
        case 0x137938u: goto label_137938;
        case 0x13793cu: goto label_13793c;
        case 0x137940u: goto label_137940;
        case 0x137944u: goto label_137944;
        case 0x137948u: goto label_137948;
        case 0x13794cu: goto label_13794c;
        case 0x137950u: goto label_137950;
        case 0x137954u: goto label_137954;
        case 0x137958u: goto label_137958;
        case 0x13795cu: goto label_13795c;
        case 0x137960u: goto label_137960;
        case 0x137964u: goto label_137964;
        case 0x137968u: goto label_137968;
        case 0x13796cu: goto label_13796c;
        case 0x137970u: goto label_137970;
        case 0x137974u: goto label_137974;
        case 0x137978u: goto label_137978;
        case 0x13797cu: goto label_13797c;
        case 0x137980u: goto label_137980;
        case 0x137984u: goto label_137984;
        case 0x137988u: goto label_137988;
        case 0x13798cu: goto label_13798c;
        case 0x137990u: goto label_137990;
        case 0x137994u: goto label_137994;
        case 0x137998u: goto label_137998;
        case 0x13799cu: goto label_13799c;
        case 0x1379a0u: goto label_1379a0;
        case 0x1379a4u: goto label_1379a4;
        case 0x1379a8u: goto label_1379a8;
        case 0x1379acu: goto label_1379ac;
        case 0x1379b0u: goto label_1379b0;
        case 0x1379b4u: goto label_1379b4;
        case 0x1379b8u: goto label_1379b8;
        case 0x1379bcu: goto label_1379bc;
        case 0x1379c0u: goto label_1379c0;
        case 0x1379c4u: goto label_1379c4;
        case 0x1379c8u: goto label_1379c8;
        case 0x1379ccu: goto label_1379cc;
        case 0x1379d0u: goto label_1379d0;
        case 0x1379d4u: goto label_1379d4;
        case 0x1379d8u: goto label_1379d8;
        case 0x1379dcu: goto label_1379dc;
        case 0x1379e0u: goto label_1379e0;
        case 0x1379e4u: goto label_1379e4;
        case 0x1379e8u: goto label_1379e8;
        case 0x1379ecu: goto label_1379ec;
        case 0x1379f0u: goto label_1379f0;
        case 0x1379f4u: goto label_1379f4;
        case 0x1379f8u: goto label_1379f8;
        case 0x1379fcu: goto label_1379fc;
        case 0x137a00u: goto label_137a00;
        case 0x137a04u: goto label_137a04;
        case 0x137a08u: goto label_137a08;
        case 0x137a0cu: goto label_137a0c;
        case 0x137a10u: goto label_137a10;
        case 0x137a14u: goto label_137a14;
        case 0x137a18u: goto label_137a18;
        case 0x137a1cu: goto label_137a1c;
        case 0x137a20u: goto label_137a20;
        case 0x137a24u: goto label_137a24;
        case 0x137a28u: goto label_137a28;
        case 0x137a2cu: goto label_137a2c;
        case 0x137a30u: goto label_137a30;
        case 0x137a34u: goto label_137a34;
        case 0x137a38u: goto label_137a38;
        case 0x137a3cu: goto label_137a3c;
        case 0x137a40u: goto label_137a40;
        case 0x137a44u: goto label_137a44;
        case 0x137a48u: goto label_137a48;
        case 0x137a4cu: goto label_137a4c;
        case 0x137a50u: goto label_137a50;
        case 0x137a54u: goto label_137a54;
        case 0x137a58u: goto label_137a58;
        case 0x137a5cu: goto label_137a5c;
        case 0x137a60u: goto label_137a60;
        case 0x137a64u: goto label_137a64;
        case 0x137a68u: goto label_137a68;
        case 0x137a6cu: goto label_137a6c;
        case 0x137a70u: goto label_137a70;
        case 0x137a74u: goto label_137a74;
        case 0x137a78u: goto label_137a78;
        case 0x137a7cu: goto label_137a7c;
        case 0x137a80u: goto label_137a80;
        case 0x137a84u: goto label_137a84;
        case 0x137a88u: goto label_137a88;
        case 0x137a8cu: goto label_137a8c;
        case 0x137a90u: goto label_137a90;
        case 0x137a94u: goto label_137a94;
        case 0x137a98u: goto label_137a98;
        case 0x137a9cu: goto label_137a9c;
        case 0x137aa0u: goto label_137aa0;
        case 0x137aa4u: goto label_137aa4;
        case 0x137aa8u: goto label_137aa8;
        case 0x137aacu: goto label_137aac;
        case 0x137ab0u: goto label_137ab0;
        case 0x137ab4u: goto label_137ab4;
        case 0x137ab8u: goto label_137ab8;
        case 0x137abcu: goto label_137abc;
        case 0x137ac0u: goto label_137ac0;
        case 0x137ac4u: goto label_137ac4;
        case 0x137ac8u: goto label_137ac8;
        case 0x137accu: goto label_137acc;
        case 0x137ad0u: goto label_137ad0;
        case 0x137ad4u: goto label_137ad4;
        case 0x137ad8u: goto label_137ad8;
        case 0x137adcu: goto label_137adc;
        case 0x137ae0u: goto label_137ae0;
        case 0x137ae4u: goto label_137ae4;
        case 0x137ae8u: goto label_137ae8;
        case 0x137aecu: goto label_137aec;
        case 0x137af0u: goto label_137af0;
        case 0x137af4u: goto label_137af4;
        case 0x137af8u: goto label_137af8;
        case 0x137afcu: goto label_137afc;
        case 0x137b00u: goto label_137b00;
        case 0x137b04u: goto label_137b04;
        case 0x137b08u: goto label_137b08;
        case 0x137b0cu: goto label_137b0c;
        case 0x137b10u: goto label_137b10;
        case 0x137b14u: goto label_137b14;
        case 0x137b18u: goto label_137b18;
        case 0x137b1cu: goto label_137b1c;
        case 0x137b20u: goto label_137b20;
        case 0x137b24u: goto label_137b24;
        case 0x137b28u: goto label_137b28;
        case 0x137b2cu: goto label_137b2c;
        case 0x137b30u: goto label_137b30;
        case 0x137b34u: goto label_137b34;
        case 0x137b38u: goto label_137b38;
        case 0x137b3cu: goto label_137b3c;
        case 0x137b40u: goto label_137b40;
        case 0x137b44u: goto label_137b44;
        case 0x137b48u: goto label_137b48;
        case 0x137b4cu: goto label_137b4c;
        case 0x137b50u: goto label_137b50;
        case 0x137b54u: goto label_137b54;
        case 0x137b58u: goto label_137b58;
        case 0x137b5cu: goto label_137b5c;
        case 0x137b60u: goto label_137b60;
        case 0x137b64u: goto label_137b64;
        case 0x137b68u: goto label_137b68;
        case 0x137b6cu: goto label_137b6c;
        case 0x137b70u: goto label_137b70;
        case 0x137b74u: goto label_137b74;
        case 0x137b78u: goto label_137b78;
        case 0x137b7cu: goto label_137b7c;
        case 0x137b80u: goto label_137b80;
        case 0x137b84u: goto label_137b84;
        case 0x137b88u: goto label_137b88;
        case 0x137b8cu: goto label_137b8c;
        case 0x137b90u: goto label_137b90;
        case 0x137b94u: goto label_137b94;
        case 0x137b98u: goto label_137b98;
        case 0x137b9cu: goto label_137b9c;
        case 0x137ba0u: goto label_137ba0;
        case 0x137ba4u: goto label_137ba4;
        case 0x137ba8u: goto label_137ba8;
        case 0x137bacu: goto label_137bac;
        case 0x137bb0u: goto label_137bb0;
        case 0x137bb4u: goto label_137bb4;
        case 0x137bb8u: goto label_137bb8;
        case 0x137bbcu: goto label_137bbc;
        case 0x137bc0u: goto label_137bc0;
        case 0x137bc4u: goto label_137bc4;
        case 0x137bc8u: goto label_137bc8;
        case 0x137bccu: goto label_137bcc;
        case 0x137bd0u: goto label_137bd0;
        case 0x137bd4u: goto label_137bd4;
        case 0x137bd8u: goto label_137bd8;
        case 0x137bdcu: goto label_137bdc;
        case 0x137be0u: goto label_137be0;
        case 0x137be4u: goto label_137be4;
        case 0x137be8u: goto label_137be8;
        case 0x137becu: goto label_137bec;
        case 0x137bf0u: goto label_137bf0;
        case 0x137bf4u: goto label_137bf4;
        case 0x137bf8u: goto label_137bf8;
        case 0x137bfcu: goto label_137bfc;
        case 0x137c00u: goto label_137c00;
        case 0x137c04u: goto label_137c04;
        case 0x137c08u: goto label_137c08;
        case 0x137c0cu: goto label_137c0c;
        case 0x137c10u: goto label_137c10;
        case 0x137c14u: goto label_137c14;
        case 0x137c18u: goto label_137c18;
        case 0x137c1cu: goto label_137c1c;
        case 0x137c20u: goto label_137c20;
        case 0x137c24u: goto label_137c24;
        case 0x137c28u: goto label_137c28;
        case 0x137c2cu: goto label_137c2c;
        case 0x137c30u: goto label_137c30;
        case 0x137c34u: goto label_137c34;
        case 0x137c38u: goto label_137c38;
        case 0x137c3cu: goto label_137c3c;
        case 0x137c40u: goto label_137c40;
        case 0x137c44u: goto label_137c44;
        case 0x137c48u: goto label_137c48;
        case 0x137c4cu: goto label_137c4c;
        case 0x137c50u: goto label_137c50;
        case 0x137c54u: goto label_137c54;
        case 0x137c58u: goto label_137c58;
        case 0x137c5cu: goto label_137c5c;
        case 0x137c60u: goto label_137c60;
        case 0x137c64u: goto label_137c64;
        default: break;
    }

    ctx->pc = 0x137808u;

label_137808:
    // 0x137808: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x137808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_13780c:
    // 0x13780c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x13780cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_137810:
    // 0x137810: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x137810u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_137814:
    // 0x137814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x137814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_137818:
    // 0x137818: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x137818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_13781c:
    // 0x13781c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x13781cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_137820:
    // 0x137820: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x137820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_137824:
    // 0x137824: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x137824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_137828:
    // 0x137828: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x137828u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_13782c:
    // 0x13782c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x13782cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_137830:
    // 0x137830: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x137830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_137834:
    // 0x137834: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x137834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_137838:
    // 0x137838: 0x40f809  jalr        $v0
label_13783c:
    if (ctx->pc == 0x13783Cu) {
        ctx->pc = 0x13783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137838u;
        // 0x13783c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137840u;
        goto label_137840;
    }
    ctx->pc = 0x137838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137840u);
        ctx->pc = 0x13783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137838u;
        // 0x13783c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137838u, 0x137840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137840u;
label_137840:
    // 0x137840: 0xc047e72  jal         func_11F9C8
label_137844:
    if (ctx->pc == 0x137844u) {
        ctx->pc = 0x137844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137840u;
        // 0x137844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137848u;
        goto label_137848;
    }
    ctx->pc = 0x137840u;
    SET_GPR_U32(ctx, 31, 0x137848u);
    ctx->pc = 0x137844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137840u;
    // 0x137844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x137840u, 0x137848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137848u;
label_137848:
    // 0x137848: 0x145100ff  bne         $v0, $s1, . + 4 + (0xFF << 2)
label_13784c:
    if (ctx->pc == 0x13784Cu) {
        ctx->pc = 0x13784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137848u;
        // 0x13784c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137850u;
        goto label_137850;
    }
    ctx->pc = 0x137848u;
    {
        const bool branch_taken_0x137848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x13784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137848u;
        // 0x13784c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137848) {
            ctx->pc = 0x137C48u;
            goto label_137c48;
        }
    }
    ctx->pc = 0x137850u;
label_137850:
    // 0x137850: 0xc0e409a  jal         func_390268
label_137854:
    if (ctx->pc == 0x137854u) {
        ctx->pc = 0x137854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137850u;
        // 0x137854: 0x262401e0  addiu       $a0, $s1, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137858u;
        goto label_137858;
    }
    ctx->pc = 0x137850u;
    SET_GPR_U32(ctx, 31, 0x137858u);
    ctx->pc = 0x137854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137850u;
    // 0x137854: 0x262401e0  addiu       $a0, $s1, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x137850u, 0x137858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137858u;
label_137858:
    // 0x137858: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x137858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13785c:
    // 0x13785c: 0xc0e409a  jal         func_390268
label_137860:
    if (ctx->pc == 0x137860u) {
        ctx->pc = 0x137860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13785Cu;
        // 0x137860: 0x262401e4  addiu       $a0, $s1, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 484));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137864u;
        goto label_137864;
    }
    ctx->pc = 0x13785Cu;
    SET_GPR_U32(ctx, 31, 0x137864u);
    ctx->pc = 0x137860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13785Cu;
    // 0x137860: 0x262401e4  addiu       $a0, $s1, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x13785Cu, 0x137864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137864u;
label_137864:
    // 0x137864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x137864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137868:
    // 0x137868: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x137868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_13786c:
    // 0x13786c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137870:
    // 0x137870: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
label_137874:
    if (ctx->pc == 0x137874u) {
        ctx->pc = 0x137874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137870u;
        // 0x137874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137878u;
        goto label_137878;
    }
    ctx->pc = 0x137870u;
    {
        const bool branch_taken_0x137870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x137874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137870u;
        // 0x137874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137870) {
            ctx->pc = 0x1378DCu;
            goto label_1378dc;
        }
    }
    ctx->pc = 0x137878u;
label_137878:
    // 0x137878: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x137878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_13787c:
    // 0x13787c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_137880:
    if (ctx->pc == 0x137880u) {
        ctx->pc = 0x137880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13787Cu;
        // 0x137880: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137884u;
        goto label_137884;
    }
    ctx->pc = 0x13787Cu;
    {
        const bool branch_taken_0x13787c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13787Cu;
        // 0x137880: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13787c) {
            ctx->pc = 0x1378DCu;
            goto label_1378dc;
        }
    }
    ctx->pc = 0x137884u;
label_137884:
    // 0x137884: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_137888:
    if (ctx->pc == 0x137888u) {
        ctx->pc = 0x137888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137884u;
        // 0x137888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13788Cu;
        goto label_13788c;
    }
    ctx->pc = 0x137884u;
    {
        const bool branch_taken_0x137884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x137888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137884u;
        // 0x137888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137884) {
            ctx->pc = 0x1378D0u;
            goto label_1378d0;
        }
    }
    ctx->pc = 0x13788Cu;
label_13788c:
    // 0x13788c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x13788cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_137890:
    // 0x137890: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x137890u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_137894:
    // 0x137894: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_137898:
    if (ctx->pc == 0x137898u) {
        ctx->pc = 0x137898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137894u;
        // 0x137898: 0x24030430  addiu       $v1, $zero, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13789Cu;
        goto label_13789c;
    }
    ctx->pc = 0x137894u;
    {
        const bool branch_taken_0x137894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137894u;
        // 0x137898: 0x24030430  addiu       $v1, $zero, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137894) {
            ctx->pc = 0x1378CCu;
            goto label_1378cc;
        }
    }
    ctx->pc = 0x13789Cu;
label_13789c:
    // 0x13789c: 0x8e040380  lw          $a0, 0x380($s0)
    ctx->pc = 0x13789cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_1378a0:
    // 0x1378a0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1378a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1378a4:
    // 0x1378a4: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1378a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1378a8:
    // 0x1378a8: 0x2442f400  addiu       $v0, $v0, -0xC00
    ctx->pc = 0x1378a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964224));
label_1378ac:
    // 0x1378ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1378acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1378b0:
    // 0x1378b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1378b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1378b4:
    // 0x1378b4: 0x84650058  lh          $a1, 0x58($v1)
    ctx->pc = 0x1378b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1378b8:
    // 0x1378b8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1378b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1378bc:
    // 0x1378bc: 0x40f809  jalr        $v0
label_1378c0:
    if (ctx->pc == 0x1378C0u) {
        ctx->pc = 0x1378C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378BCu;
        // 0x1378c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1378C4u;
        goto label_1378c4;
    }
    ctx->pc = 0x1378BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1378C4u);
        ctx->pc = 0x1378C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378BCu;
        // 0x1378c0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1378BCu, 0x1378C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1378C4u;
label_1378c4:
    // 0x1378c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1378c8:
    if (ctx->pc == 0x1378C8u) {
        ctx->pc = 0x1378C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378C4u;
        // 0x1378c8: 0x8e23025c  lw          $v1, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1378CCu;
        goto label_1378cc;
    }
    ctx->pc = 0x1378C4u;
    {
        const bool branch_taken_0x1378c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1378c4) {
            ctx->pc = 0x1378C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1378C4u;
            // 0x1378c8: 0x8e23025c  lw          $v1, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1378D8u;
            goto label_1378d8;
        }
    }
    ctx->pc = 0x1378CCu;
label_1378cc:
    // 0x1378cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1378ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1378d0:
    // 0x1378d0: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x1378d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
label_1378d4:
    // 0x1378d4: 0x8e23025c  lw          $v1, 0x25C($s1)
    ctx->pc = 0x1378d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_1378d8:
    // 0x1378d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1378d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1378dc:
    // 0x1378dc: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_1378e0:
    if (ctx->pc == 0x1378E0u) {
        ctx->pc = 0x1378E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378DCu;
        // 0x1378e0: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1378E4u;
        goto label_1378e4;
    }
    ctx->pc = 0x1378DCu;
    {
        const bool branch_taken_0x1378dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1378dc) {
            ctx->pc = 0x1378E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1378DCu;
            // 0x1378e0: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137924u;
            goto label_137924;
        }
    }
    ctx->pc = 0x1378E4u;
label_1378e4:
    // 0x1378e4: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1378e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1378e8:
    // 0x1378e8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1378ec:
    if (ctx->pc == 0x1378ECu) {
        ctx->pc = 0x1378ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378E8u;
        // 0x1378ec: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1378F0u;
        goto label_1378f0;
    }
    ctx->pc = 0x1378E8u;
    {
        const bool branch_taken_0x1378e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1378e8) {
            ctx->pc = 0x1378ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1378E8u;
            // 0x1378ec: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137924u;
            goto label_137924;
        }
    }
    ctx->pc = 0x1378F0u;
label_1378f0:
    // 0x1378f0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1378f4:
    if (ctx->pc == 0x1378F4u) {
        ctx->pc = 0x1378F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378F0u;
        // 0x1378f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1378F8u;
        goto label_1378f8;
    }
    ctx->pc = 0x1378F0u;
    {
        const bool branch_taken_0x1378f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1378F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1378F0u;
        // 0x1378f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1378f0) {
            ctx->pc = 0x13791Cu;
            goto label_13791c;
        }
    }
    ctx->pc = 0x1378F8u;
label_1378f8:
    // 0x1378f8: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x1378f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_1378fc:
    // 0x1378fc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1378fcu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_137900:
    // 0x137900: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_137904:
    if (ctx->pc == 0x137904u) {
        ctx->pc = 0x137904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137900u;
        // 0x137904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137908u;
        goto label_137908;
    }
    ctx->pc = 0x137900u;
    {
        const bool branch_taken_0x137900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137900u;
        // 0x137904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137900) {
            ctx->pc = 0x13791Cu;
            goto label_13791c;
        }
    }
    ctx->pc = 0x137908u;
label_137908:
    // 0x137908: 0xc08a014  jal         func_228050
label_13790c:
    if (ctx->pc == 0x13790Cu) {
        ctx->pc = 0x13790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137908u;
        // 0x13790c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137910u;
        goto label_137910;
    }
    ctx->pc = 0x137908u;
    SET_GPR_U32(ctx, 31, 0x137910u);
    ctx->pc = 0x13790Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137908u;
    // 0x13790c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x137908u, 0x137910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137910u;
label_137910:
    // 0x137910: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_137914:
    if (ctx->pc == 0x137914u) {
        ctx->pc = 0x137914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137910u;
        // 0x137914: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137918u;
        goto label_137918;
    }
    ctx->pc = 0x137910u;
    {
        const bool branch_taken_0x137910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137910) {
            ctx->pc = 0x137914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137910u;
            // 0x137914: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137924u;
            goto label_137924;
        }
    }
    ctx->pc = 0x137918u;
label_137918:
    // 0x137918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x137918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13791c:
    // 0x13791c: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x13791cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
label_137920:
    // 0x137920: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x137920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_137924:
    // 0x137924: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_137928:
    if (ctx->pc == 0x137928u) {
        ctx->pc = 0x137928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137924u;
        // 0x137928: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13792Cu;
        goto label_13792c;
    }
    ctx->pc = 0x137924u;
    {
        const bool branch_taken_0x137924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137924u;
        // 0x137928: 0x8e220258  lw          $v0, 0x258($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137924) {
            ctx->pc = 0x1379D8u;
            goto label_1379d8;
        }
    }
    ctx->pc = 0x13792Cu;
label_13792c:
    // 0x13792c: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
label_137930:
    if (ctx->pc == 0x137930u) {
        ctx->pc = 0x137930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13792Cu;
        // 0x137930: 0x8e230240  lw          $v1, 0x240($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137934u;
        goto label_137934;
    }
    ctx->pc = 0x13792Cu;
    {
        const bool branch_taken_0x13792c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13792c) {
            ctx->pc = 0x137930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13792Cu;
            // 0x137930: 0x8e230240  lw          $v1, 0x240($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1379E4u;
            goto label_1379e4;
        }
    }
    ctx->pc = 0x137934u;
label_137934:
    // 0x137934: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
label_137938:
    if (ctx->pc == 0x137938u) {
        ctx->pc = 0x137938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137934u;
        // 0x137938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13793Cu;
        goto label_13793c;
    }
    ctx->pc = 0x137934u;
    {
        const bool branch_taken_0x137934 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x137938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137934u;
        // 0x137938: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137934) {
            ctx->pc = 0x1379D0u;
            goto label_1379d0;
        }
    }
    ctx->pc = 0x13793Cu;
label_13793c:
    // 0x13793c: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
label_137940:
    if (ctx->pc == 0x137940u) {
        ctx->pc = 0x137940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13793Cu;
        // 0x137940: 0xae220258  sw          $v0, 0x258($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137944u;
        goto label_137944;
    }
    ctx->pc = 0x13793Cu;
    {
        const bool branch_taken_0x13793c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13793c) {
            ctx->pc = 0x137940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13793Cu;
            // 0x137940: 0xae220258  sw          $v0, 0x258($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1379D4u;
            goto label_1379d4;
        }
    }
    ctx->pc = 0x137944u;
label_137944:
    // 0x137944: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x137944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_137948:
    // 0x137948: 0x52e78  dsll        $a1, $a1, 25
    ctx->pc = 0x137948u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 25);
label_13794c:
    // 0x13794c: 0xc08997c  jal         func_2265F0
label_137950:
    if (ctx->pc == 0x137950u) {
        ctx->pc = 0x137950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13794Cu;
        // 0x137950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137954u;
        goto label_137954;
    }
    ctx->pc = 0x13794Cu;
    SET_GPR_U32(ctx, 31, 0x137954u);
    ctx->pc = 0x137950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13794Cu;
    // 0x137950: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x13794Cu, 0x137954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137954u;
label_137954:
    // 0x137954: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_137958:
    if (ctx->pc == 0x137958u) {
        ctx->pc = 0x137958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137954u;
        // 0x137958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13795Cu;
        goto label_13795c;
    }
    ctx->pc = 0x137954u;
    {
        const bool branch_taken_0x137954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137954u;
        // 0x137958: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137954) {
            ctx->pc = 0x1379D0u;
            goto label_1379d0;
        }
    }
    ctx->pc = 0x13795Cu;
label_13795c:
    // 0x13795c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x13795cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_137960:
    // 0x137960: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x137960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
label_137964:
    // 0x137964: 0xc08997c  jal         func_2265F0
label_137968:
    if (ctx->pc == 0x137968u) {
        ctx->pc = 0x137968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137964u;
        // 0x137968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13796Cu;
        goto label_13796c;
    }
    ctx->pc = 0x137964u;
    SET_GPR_U32(ctx, 31, 0x13796Cu);
    ctx->pc = 0x137968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137964u;
    // 0x137968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x137964u, 0x13796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13796Cu;
label_13796c:
    // 0x13796c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_137970:
    if (ctx->pc == 0x137970u) {
        ctx->pc = 0x137970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13796Cu;
        // 0x137970: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137974u;
        goto label_137974;
    }
    ctx->pc = 0x13796Cu;
    {
        const bool branch_taken_0x13796c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13796Cu;
        // 0x137970: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13796c) {
            ctx->pc = 0x1379CCu;
            goto label_1379cc;
        }
    }
    ctx->pc = 0x137974u;
label_137974:
    // 0x137974: 0x86450092  lh          $a1, 0x92($s2)
    ctx->pc = 0x137974u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_137978:
    // 0x137978: 0x86060092  lh          $a2, 0x92($s0)
    ctx->pc = 0x137978u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_13797c:
    // 0x13797c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x13797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_137980:
    // 0x137980: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x137980u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_137984:
    // 0x137984: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x137984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_137988:
    // 0x137988: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x137988u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_13798c:
    // 0x13798c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13798cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_137990:
    // 0x137990: 0xc136afa  jal         func_4DABE8
label_137994:
    if (ctx->pc == 0x137994u) {
        ctx->pc = 0x137994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137990u;
        // 0x137994: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137998u;
        goto label_137998;
    }
    ctx->pc = 0x137990u;
    SET_GPR_U32(ctx, 31, 0x137998u);
    ctx->pc = 0x137994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137990u;
    // 0x137994: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x137990u, 0x137998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137998u;
label_137998:
    // 0x137998: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x137998u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13799c:
    // 0x13799c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x13799cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1379a0:
    // 0x1379a0: 0x4b8108ea  vmul.xy     $vf3, $vf1, $vf1
    ctx->pc = 0x1379a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1379a4:
    // 0x1379a4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x1379a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_1379a8:
    // 0x1379a8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x1379a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_1379ac:
    // 0x1379ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1379acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1379b0:
    // 0x1379b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1379b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1379b4:
    // 0x1379b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1379b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1379b8:
    // 0x1379b8: 0x0  nop
    ctx->pc = 0x1379b8u;
    // NOP
label_1379bc:
    // 0x1379bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1379bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1379c0:
    // 0x1379c0: 0x0  nop
    ctx->pc = 0x1379c0u;
    // NOP
label_1379c4:
    // 0x1379c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1379c8:
    if (ctx->pc == 0x1379C8u) {
        ctx->pc = 0x1379C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379C4u;
        // 0x1379c8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1379CCu;
        goto label_1379cc;
    }
    ctx->pc = 0x1379C4u;
    {
        const bool branch_taken_0x1379c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1379C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379C4u;
        // 0x1379c8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379c4) {
            ctx->pc = 0x1379D4u;
            goto label_1379d4;
        }
    }
    ctx->pc = 0x1379CCu;
label_1379cc:
    // 0x1379cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1379ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1379d0:
    // 0x1379d0: 0xae220258  sw          $v0, 0x258($s1)
    ctx->pc = 0x1379d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 2));
label_1379d4:
    // 0x1379d4: 0x8e220258  lw          $v0, 0x258($s1)
    ctx->pc = 0x1379d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
label_1379d8:
    // 0x1379d8: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_1379dc:
    if (ctx->pc == 0x1379DCu) {
        ctx->pc = 0x1379DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379D8u;
        // 0x1379dc: 0x7a2201f0  lq          $v0, 0x1F0($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1379E0u;
        goto label_1379e0;
    }
    ctx->pc = 0x1379D8u;
    {
        const bool branch_taken_0x1379d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1379d8) {
            ctx->pc = 0x1379DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1379D8u;
            // 0x1379dc: 0x7a2201f0  lq          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137A40u;
            goto label_137a40;
        }
    }
    ctx->pc = 0x1379E0u;
label_1379e0:
    // 0x1379e0: 0x8e230240  lw          $v1, 0x240($s1)
    ctx->pc = 0x1379e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
label_1379e4:
    // 0x1379e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1379e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1379e8:
    // 0x1379e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1379e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1379ec:
    // 0x1379ec: 0x84440290  lh          $a0, 0x290($v0)
    ctx->pc = 0x1379ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 656)));
label_1379f0:
    // 0x1379f0: 0x8c460294  lw          $a2, 0x294($v0)
    ctx->pc = 0x1379f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 660)));
label_1379f4:
    // 0x1379f4: 0xc0f809  jalr        $a2
label_1379f8:
    if (ctx->pc == 0x1379F8u) {
        ctx->pc = 0x1379F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379F4u;
        // 0x1379f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1379FCu;
        goto label_1379fc;
    }
    ctx->pc = 0x1379F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1379FCu);
        ctx->pc = 0x1379F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379F4u;
        // 0x1379f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1379F4u, 0x1379FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1379FCu;
label_1379fc:
    // 0x1379fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1379fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_137a00:
    // 0x137a00: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x137a00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_137a04:
    // 0x137a04: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x137a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_137a08:
    // 0x137a08: 0x40f809  jalr        $v0
label_137a0c:
    if (ctx->pc == 0x137A0Cu) {
        ctx->pc = 0x137A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A08u;
        // 0x137a0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137A10u;
        goto label_137a10;
    }
    ctx->pc = 0x137A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137A10u);
        ctx->pc = 0x137A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A08u;
        // 0x137a0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137A08u, 0x137A10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137A10u;
label_137a10:
    // 0x137a10: 0x8e240240  lw          $a0, 0x240($s1)
    ctx->pc = 0x137a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 576)));
label_137a14:
    // 0x137a14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x137a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137a18:
    // 0x137a18: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x137a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_137a1c:
    // 0x137a1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x137a1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_137a20:
    // 0x137a20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x137a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_137a24:
    // 0x137a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x137a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137a28:
    // 0x137a28: 0xc047b82  jal         func_11EE08
label_137a2c:
    if (ctx->pc == 0x137A2Cu) {
        ctx->pc = 0x137A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A28u;
        // 0x137a2c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137A30u;
        goto label_137a30;
    }
    ctx->pc = 0x137A28u;
    SET_GPR_U32(ctx, 31, 0x137A30u);
    ctx->pc = 0x137A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A28u;
    // 0x137a2c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x137A28u, 0x137A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A30u;
label_137a30:
    // 0x137a30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x137a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_137a34:
    // 0x137a34: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x137a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_137a38:
    // 0x137a38: 0x10000082  b           . + 4 + (0x82 << 2)
label_137a3c:
    if (ctx->pc == 0x137A3Cu) {
        ctx->pc = 0x137A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A38u;
        // 0x137a3c: 0xae2301e0  sw          $v1, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137A40u;
        goto label_137a40;
    }
    ctx->pc = 0x137A38u;
    {
        const bool branch_taken_0x137a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A38u;
        // 0x137a3c: 0xae2301e0  sw          $v1, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137a38) {
            ctx->pc = 0x137C44u;
            goto label_137c44;
        }
    }
    ctx->pc = 0x137A40u;
label_137a40:
    // 0x137a40: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x137a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_137a44:
    // 0x137a44: 0x7a230210  lq          $v1, 0x210($s1)
    ctx->pc = 0x137a44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 528)));
label_137a48:
    // 0x137a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137a4c:
    // 0x137a4c: 0xe63401a0  swc1        $f20, 0x1A0($s1)
    ctx->pc = 0x137a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 416), bits); }
label_137a50:
    // 0x137a50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x137a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137a54:
    // 0x137a54: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x137a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_137a58:
    // 0x137a58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x137a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137a5c:
    // 0x137a5c: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x137a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
label_137a60:
    // 0x137a60: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x137a60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_137a64:
    // 0x137a64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x137a64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_137a68:
    // 0x137a68: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x137a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137a6c:
    // 0x137a6c: 0x7e230180  sq          $v1, 0x180($s1)
    ctx->pc = 0x137a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 384), GPR_VEC(ctx, 3));
label_137a70:
    // 0x137a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137a74:
    // 0x137a74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137a78:
    // 0x137a78: 0xc0489ca  jal         func_122728
label_137a7c:
    if (ctx->pc == 0x137A7Cu) {
        ctx->pc = 0x137A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A78u;
        // 0x137a7c: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137A80u;
        goto label_137a80;
    }
    ctx->pc = 0x137A78u;
    SET_GPR_U32(ctx, 31, 0x137A80u);
    ctx->pc = 0x137A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137A78u;
    // 0x137a7c: 0x26320020  addiu       $s2, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122728u, 0x137A78u, 0x137A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137A80u;
label_137a80:
    // 0x137a80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x137a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_137a84:
    // 0x137a84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137a88:
    // 0x137a88: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x137a88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_137a8c:
    // 0x137a8c: 0x8c4601bc  lw          $a2, 0x1BC($v0)
    ctx->pc = 0x137a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_137a90:
    // 0x137a90: 0xc0f809  jalr        $a2
label_137a94:
    if (ctx->pc == 0x137A94u) {
        ctx->pc = 0x137A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A90u;
        // 0x137a94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137A98u;
        goto label_137a98;
    }
    ctx->pc = 0x137A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x137A98u);
        ctx->pc = 0x137A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A90u;
        // 0x137a94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137A90u, 0x137A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137A98u;
label_137a98:
    // 0x137a98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x137a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_137a9c:
    // 0x137a9c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x137a9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_137aa0:
    // 0x137aa0: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x137aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_137aa4:
    // 0x137aa4: 0x40f809  jalr        $v0
label_137aa8:
    if (ctx->pc == 0x137AA8u) {
        ctx->pc = 0x137AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AA4u;
        // 0x137aa8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137AACu;
        goto label_137aac;
    }
    ctx->pc = 0x137AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137AACu);
        ctx->pc = 0x137AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AA4u;
        // 0x137aa8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137AA4u, 0x137AACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137AACu;
label_137aac:
    // 0x137aac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x137aacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_137ab0:
    // 0x137ab0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x137ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_137ab4:
    // 0x137ab4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x137ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_137ab8:
    // 0x137ab8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x137ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_137abc:
    // 0x137abc: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x137abcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_137ac0:
    // 0x137ac0: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x137ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_137ac4:
    // 0x137ac4: 0x40f809  jalr        $v0
label_137ac8:
    if (ctx->pc == 0x137AC8u) {
        ctx->pc = 0x137AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AC4u;
        // 0x137ac8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137ACCu;
        goto label_137acc;
    }
    ctx->pc = 0x137AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137ACCu);
        ctx->pc = 0x137AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AC4u;
        // 0x137ac8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137AC4u, 0x137ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137ACCu;
label_137acc:
    // 0x137acc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x137accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137ad0:
    // 0x137ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x137ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137ad4:
    // 0x137ad4: 0xc0cdc0a  jal         func_337028
label_137ad8:
    if (ctx->pc == 0x137AD8u) {
        ctx->pc = 0x137AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AD4u;
        // 0x137ad8: 0x26260210  addiu       $a2, $s1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137ADCu;
        goto label_137adc;
    }
    ctx->pc = 0x137AD4u;
    SET_GPR_U32(ctx, 31, 0x137ADCu);
    ctx->pc = 0x137AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AD4u;
    // 0x137ad8: 0x26260210  addiu       $a2, $s1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x137AD4u, 0x137ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137ADCu;
label_137adc:
    // 0x137adc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_137ae0:
    if (ctx->pc == 0x137AE0u) {
        ctx->pc = 0x137AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137ADCu;
        // 0x137ae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137AE4u;
        goto label_137ae4;
    }
    ctx->pc = 0x137ADCu;
    {
        const bool branch_taken_0x137adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137ADCu;
        // 0x137ae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137adc) {
            ctx->pc = 0x137AF4u;
            goto label_137af4;
        }
    }
    ctx->pc = 0x137AE4u;
label_137ae4:
    // 0x137ae4: 0xc0cd972  jal         func_3365C8
label_137ae8:
    if (ctx->pc == 0x137AE8u) {
        ctx->pc = 0x137AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AE4u;
        // 0x137ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137AECu;
        goto label_137aec;
    }
    ctx->pc = 0x137AE4u;
    SET_GPR_U32(ctx, 31, 0x137AECu);
    ctx->pc = 0x137AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137AE4u;
    // 0x137ae8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x137AE4u, 0x137AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137AECu;
label_137aec:
    // 0x137aec: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x137aecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_137af0:
    // 0x137af0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x137af0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_137af4:
    // 0x137af4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x137af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_137af8:
    // 0x137af8: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x137af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_137afc:
    // 0x137afc: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x137afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_137b00:
    // 0x137b00: 0x40f809  jalr        $v0
label_137b04:
    if (ctx->pc == 0x137B04u) {
        ctx->pc = 0x137B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B00u;
        // 0x137b04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B08u;
        goto label_137b08;
    }
    ctx->pc = 0x137B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137B08u);
        ctx->pc = 0x137B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B00u;
        // 0x137b04: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137B00u, 0x137B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137B08u;
label_137b08:
    // 0x137b08: 0xc6220244  lwc1        $f2, 0x244($s1)
    ctx->pc = 0x137b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_137b0c:
    // 0x137b0c: 0xc6250248  lwc1        $f5, 0x248($s1)
    ctx->pc = 0x137b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_137b10:
    // 0x137b10: 0x3c013ae4  lui         $at, 0x3AE4
    ctx->pc = 0x137b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15076 << 16));
label_137b14:
    // 0x137b14: 0x3421c389  ori         $at, $at, 0xC389
    ctx->pc = 0x137b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50057);
label_137b18:
    // 0x137b18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x137b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_137b1c:
    // 0x137b1c: 0x46051101  sub.s       $f4, $f2, $f5
    ctx->pc = 0x137b1cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_137b20:
    // 0x137b20: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x137b20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_137b24:
    // 0x137b24: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x137b24u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
label_137b28:
    // 0x137b28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_137b2c:
    // 0x137b2c: 0x0  nop
    ctx->pc = 0x137b2cu;
    // NOP
label_137b30:
    // 0x137b30: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_137b34:
    if (ctx->pc == 0x137B34u) {
        ctx->pc = 0x137B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B30u;
        // 0x137b34: 0x7e230230  sq          $v1, 0x230($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 560), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B38u;
        goto label_137b38;
    }
    ctx->pc = 0x137B30u;
    {
        const bool branch_taken_0x137b30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B30u;
        // 0x137b34: 0x7e230230  sq          $v1, 0x230($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 560), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b30) {
            ctx->pc = 0x137BA8u;
            goto label_137ba8;
        }
    }
    ctx->pc = 0x137B38u;
label_137b38:
    // 0x137b38: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x137b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_137b3c:
    // 0x137b3c: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x137b3cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
label_137b40:
    // 0x137b40: 0x46002845  abs.s       $f1, $f5
    ctx->pc = 0x137b40u;
    ctx->f[1] = FPU_ABS_S(ctx->f[5]);
label_137b44:
    // 0x137b44: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x137b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_137b48:
    // 0x137b48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x137b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_137b4c:
    // 0x137b4c: 0x46041834  c.lt.s      $f3, $f4
    ctx->pc = 0x137b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_137b50:
    // 0x137b50: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x137b50u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_137b54:
    // 0x137b54: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_137b58:
    if (ctx->pc == 0x137B58u) {
        ctx->pc = 0x137B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B54u;
        // 0x137b58: 0x46020082  mul.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B5Cu;
        goto label_137b5c;
    }
    ctx->pc = 0x137B54u;
    {
        const bool branch_taken_0x137b54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B54u;
        // 0x137b58: 0x46020082  mul.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b54) {
            ctx->pc = 0x137B80u;
            goto label_137b80;
        }
    }
    ctx->pc = 0x137B5Cu;
label_137b5c:
    // 0x137b5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x137b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_137b60:
    // 0x137b60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137b64:
    // 0x137b64: 0xc62101a0  lwc1        $f1, 0x1A0($s1)
    ctx->pc = 0x137b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137b68:
    // 0x137b68: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x137b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_137b6c:
    // 0x137b6c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x137b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_137b70:
    // 0x137b70: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x137b70u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_137b74:
    // 0x137b74: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x137b74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_137b78:
    // 0x137b78: 0x1000000c  b           . + 4 + (0xC << 2)
label_137b7c:
    if (ctx->pc == 0x137B7Cu) {
        ctx->pc = 0x137B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B78u;
        // 0x137b7c: 0xe6200248  swc1        $f0, 0x248($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x137B80u;
        goto label_137b80;
    }
    ctx->pc = 0x137B78u;
    {
        const bool branch_taken_0x137b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137B78u;
        // 0x137b7c: 0xe6200248  swc1        $f0, 0x248($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137b78) {
            ctx->pc = 0x137BACu;
            goto label_137bac;
        }
    }
    ctx->pc = 0x137B80u;
label_137b80:
    // 0x137b80: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x137b80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
label_137b84:
    // 0x137b84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x137b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_137b88:
    // 0x137b88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x137b88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_137b8c:
    // 0x137b8c: 0xc62201a0  lwc1        $f2, 0x1A0($s1)
    ctx->pc = 0x137b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_137b90:
    // 0x137b90: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x137b90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_137b94:
    // 0x137b94: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x137b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_137b98:
    // 0x137b98: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x137b98u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
label_137b9c:
    // 0x137b9c: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x137b9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_137ba0:
    // 0x137ba0: 0x10000002  b           . + 4 + (0x2 << 2)
label_137ba4:
    if (ctx->pc == 0x137BA4u) {
        ctx->pc = 0x137BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BA0u;
        // 0x137ba4: 0xe6210248  swc1        $f1, 0x248($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x137BA8u;
        goto label_137ba8;
    }
    ctx->pc = 0x137BA0u;
    {
        const bool branch_taken_0x137ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BA0u;
        // 0x137ba4: 0xe6210248  swc1        $f1, 0x248($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ba0) {
            ctx->pc = 0x137BACu;
            goto label_137bac;
        }
    }
    ctx->pc = 0x137BA8u;
label_137ba8:
    // 0x137ba8: 0xe6220248  swc1        $f2, 0x248($s1)
    ctx->pc = 0x137ba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
label_137bac:
    // 0x137bac: 0xc6340248  lwc1        $f20, 0x248($s1)
    ctx->pc = 0x137bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_137bb0:
    // 0x137bb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x137bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_137bb4:
    // 0x137bb4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x137bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_137bb8:
    // 0x137bb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_137bbc:
    // 0x137bbc: 0x24421730  addiu       $v0, $v0, 0x1730
    ctx->pc = 0x137bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5936));
label_137bc0:
    // 0x137bc0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x137bc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_137bc4:
    // 0x137bc4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x137bc4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_137bc8:
    // 0x137bc8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x137bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_137bcc:
    // 0x137bcc: 0xc12e310  jal         func_4B8C40
label_137bd0:
    if (ctx->pc == 0x137BD0u) {
        ctx->pc = 0x137BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BCCu;
        // 0x137bd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x137BD4u;
        goto label_137bd4;
    }
    ctx->pc = 0x137BCCu;
    SET_GPR_U32(ctx, 31, 0x137BD4u);
    ctx->pc = 0x137BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137BCCu;
    // 0x137bd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x137BCCu, 0x137BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137BD4u;
label_137bd4:
    // 0x137bd4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x137bd4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_137bd8:
    // 0x137bd8: 0xc12e29c  jal         func_4B8A70
label_137bdc:
    if (ctx->pc == 0x137BDCu) {
        ctx->pc = 0x137BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137BD8u;
        // 0x137bdc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x137BE0u;
        goto label_137be0;
    }
    ctx->pc = 0x137BD8u;
    SET_GPR_U32(ctx, 31, 0x137BE0u);
    ctx->pc = 0x137BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137BD8u;
    // 0x137bdc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x137BD8u, 0x137BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137BE0u;
label_137be0:
    // 0x137be0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x137be0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_137be4:
    // 0x137be4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x137be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_137be8:
    // 0x137be8: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x137be8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_137bec:
    // 0x137bec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x137becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_137bf0:
    // 0x137bf0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x137bf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_137bf4:
    // 0x137bf4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x137bf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_137bf8:
    // 0x137bf8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x137bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_137bfc:
    // 0x137bfc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x137bfcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_137c00:
    // 0x137c00: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x137c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_137c04:
    // 0x137c04: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x137c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_137c08:
    // 0x137c08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x137c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137c0c:
    // 0x137c0c: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x137c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_137c10:
    // 0x137c10: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x137c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_137c14:
    // 0x137c14: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x137c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_137c18:
    // 0x137c18: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x137c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_137c1c:
    // 0x137c1c: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x137c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_137c20:
    // 0x137c20: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x137c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_137c24:
    // 0x137c24: 0xc136d44  jal         func_4DB510
label_137c28:
    if (ctx->pc == 0x137C28u) {
        ctx->pc = 0x137C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C24u;
        // 0x137c28: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x137C2Cu;
        goto label_137c2c;
    }
    ctx->pc = 0x137C24u;
    SET_GPR_U32(ctx, 31, 0x137C2Cu);
    ctx->pc = 0x137C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C24u;
    // 0x137c28: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x137C24u, 0x137C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C2Cu;
label_137c2c:
    // 0x137c2c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x137c2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_137c30:
    // 0x137c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137c34:
    // 0x137c34: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x137c34u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_137c38:
    // 0x137c38: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x137c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_137c3c:
    // 0x137c3c: 0xc04828c  jal         func_120A30
label_137c40:
    if (ctx->pc == 0x137C40u) {
        ctx->pc = 0x137C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C3Cu;
        // 0x137c40: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x137C44u;
        goto label_137c44;
    }
    ctx->pc = 0x137C3Cu;
    SET_GPR_U32(ctx, 31, 0x137C44u);
    ctx->pc = 0x137C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137C3Cu;
    // 0x137c40: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x137C3Cu, 0x137C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137C44u;
label_137c44:
    // 0x137c44: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x137c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_137c48:
    // 0x137c48: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x137c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_137c4c:
    // 0x137c4c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x137c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_137c50:
    // 0x137c50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x137c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_137c54:
    // 0x137c54: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x137c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_137c58:
    // 0x137c58: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x137c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_137c5c:
    // 0x137c5c: 0x3e00008  jr          $ra
label_137c60:
    if (ctx->pc == 0x137C60u) {
        ctx->pc = 0x137C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C5Cu;
        // 0x137c60: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137C64u;
        goto label_137c64;
    }
    ctx->pc = 0x137C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C5Cu;
        // 0x137c60: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137C64u;
label_137c64:
    // 0x137c64: 0x0  nop
    ctx->pc = 0x137c64u;
    // NOP
    ctx->pc = 0x137c68u;
}
