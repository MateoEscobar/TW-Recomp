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

// Function: sub_003D48E8
// Address: 0x3d48e8 - 0x3d4c10
void sub_003D48E8_0x3d48e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D48E8_0x3d48e8");
#endif

    switch (ctx->pc) {
        case 0x3d48e8u: goto label_3d48e8;
        case 0x3d48ecu: goto label_3d48ec;
        case 0x3d48f0u: goto label_3d48f0;
        case 0x3d48f4u: goto label_3d48f4;
        case 0x3d48f8u: goto label_3d48f8;
        case 0x3d48fcu: goto label_3d48fc;
        case 0x3d4900u: goto label_3d4900;
        case 0x3d4904u: goto label_3d4904;
        case 0x3d4908u: goto label_3d4908;
        case 0x3d490cu: goto label_3d490c;
        case 0x3d4910u: goto label_3d4910;
        case 0x3d4914u: goto label_3d4914;
        case 0x3d4918u: goto label_3d4918;
        case 0x3d491cu: goto label_3d491c;
        case 0x3d4920u: goto label_3d4920;
        case 0x3d4924u: goto label_3d4924;
        case 0x3d4928u: goto label_3d4928;
        case 0x3d492cu: goto label_3d492c;
        case 0x3d4930u: goto label_3d4930;
        case 0x3d4934u: goto label_3d4934;
        case 0x3d4938u: goto label_3d4938;
        case 0x3d493cu: goto label_3d493c;
        case 0x3d4940u: goto label_3d4940;
        case 0x3d4944u: goto label_3d4944;
        case 0x3d4948u: goto label_3d4948;
        case 0x3d494cu: goto label_3d494c;
        case 0x3d4950u: goto label_3d4950;
        case 0x3d4954u: goto label_3d4954;
        case 0x3d4958u: goto label_3d4958;
        case 0x3d495cu: goto label_3d495c;
        case 0x3d4960u: goto label_3d4960;
        case 0x3d4964u: goto label_3d4964;
        case 0x3d4968u: goto label_3d4968;
        case 0x3d496cu: goto label_3d496c;
        case 0x3d4970u: goto label_3d4970;
        case 0x3d4974u: goto label_3d4974;
        case 0x3d4978u: goto label_3d4978;
        case 0x3d497cu: goto label_3d497c;
        case 0x3d4980u: goto label_3d4980;
        case 0x3d4984u: goto label_3d4984;
        case 0x3d4988u: goto label_3d4988;
        case 0x3d498cu: goto label_3d498c;
        case 0x3d4990u: goto label_3d4990;
        case 0x3d4994u: goto label_3d4994;
        case 0x3d4998u: goto label_3d4998;
        case 0x3d499cu: goto label_3d499c;
        case 0x3d49a0u: goto label_3d49a0;
        case 0x3d49a4u: goto label_3d49a4;
        case 0x3d49a8u: goto label_3d49a8;
        case 0x3d49acu: goto label_3d49ac;
        case 0x3d49b0u: goto label_3d49b0;
        case 0x3d49b4u: goto label_3d49b4;
        case 0x3d49b8u: goto label_3d49b8;
        case 0x3d49bcu: goto label_3d49bc;
        case 0x3d49c0u: goto label_3d49c0;
        case 0x3d49c4u: goto label_3d49c4;
        case 0x3d49c8u: goto label_3d49c8;
        case 0x3d49ccu: goto label_3d49cc;
        case 0x3d49d0u: goto label_3d49d0;
        case 0x3d49d4u: goto label_3d49d4;
        case 0x3d49d8u: goto label_3d49d8;
        case 0x3d49dcu: goto label_3d49dc;
        case 0x3d49e0u: goto label_3d49e0;
        case 0x3d49e4u: goto label_3d49e4;
        case 0x3d49e8u: goto label_3d49e8;
        case 0x3d49ecu: goto label_3d49ec;
        case 0x3d49f0u: goto label_3d49f0;
        case 0x3d49f4u: goto label_3d49f4;
        case 0x3d49f8u: goto label_3d49f8;
        case 0x3d49fcu: goto label_3d49fc;
        case 0x3d4a00u: goto label_3d4a00;
        case 0x3d4a04u: goto label_3d4a04;
        case 0x3d4a08u: goto label_3d4a08;
        case 0x3d4a0cu: goto label_3d4a0c;
        case 0x3d4a10u: goto label_3d4a10;
        case 0x3d4a14u: goto label_3d4a14;
        case 0x3d4a18u: goto label_3d4a18;
        case 0x3d4a1cu: goto label_3d4a1c;
        case 0x3d4a20u: goto label_3d4a20;
        case 0x3d4a24u: goto label_3d4a24;
        case 0x3d4a28u: goto label_3d4a28;
        case 0x3d4a2cu: goto label_3d4a2c;
        case 0x3d4a30u: goto label_3d4a30;
        case 0x3d4a34u: goto label_3d4a34;
        case 0x3d4a38u: goto label_3d4a38;
        case 0x3d4a3cu: goto label_3d4a3c;
        case 0x3d4a40u: goto label_3d4a40;
        case 0x3d4a44u: goto label_3d4a44;
        case 0x3d4a48u: goto label_3d4a48;
        case 0x3d4a4cu: goto label_3d4a4c;
        case 0x3d4a50u: goto label_3d4a50;
        case 0x3d4a54u: goto label_3d4a54;
        case 0x3d4a58u: goto label_3d4a58;
        case 0x3d4a5cu: goto label_3d4a5c;
        case 0x3d4a60u: goto label_3d4a60;
        case 0x3d4a64u: goto label_3d4a64;
        case 0x3d4a68u: goto label_3d4a68;
        case 0x3d4a6cu: goto label_3d4a6c;
        case 0x3d4a70u: goto label_3d4a70;
        case 0x3d4a74u: goto label_3d4a74;
        case 0x3d4a78u: goto label_3d4a78;
        case 0x3d4a7cu: goto label_3d4a7c;
        case 0x3d4a80u: goto label_3d4a80;
        case 0x3d4a84u: goto label_3d4a84;
        case 0x3d4a88u: goto label_3d4a88;
        case 0x3d4a8cu: goto label_3d4a8c;
        case 0x3d4a90u: goto label_3d4a90;
        case 0x3d4a94u: goto label_3d4a94;
        case 0x3d4a98u: goto label_3d4a98;
        case 0x3d4a9cu: goto label_3d4a9c;
        case 0x3d4aa0u: goto label_3d4aa0;
        case 0x3d4aa4u: goto label_3d4aa4;
        case 0x3d4aa8u: goto label_3d4aa8;
        case 0x3d4aacu: goto label_3d4aac;
        case 0x3d4ab0u: goto label_3d4ab0;
        case 0x3d4ab4u: goto label_3d4ab4;
        case 0x3d4ab8u: goto label_3d4ab8;
        case 0x3d4abcu: goto label_3d4abc;
        case 0x3d4ac0u: goto label_3d4ac0;
        case 0x3d4ac4u: goto label_3d4ac4;
        case 0x3d4ac8u: goto label_3d4ac8;
        case 0x3d4accu: goto label_3d4acc;
        case 0x3d4ad0u: goto label_3d4ad0;
        case 0x3d4ad4u: goto label_3d4ad4;
        case 0x3d4ad8u: goto label_3d4ad8;
        case 0x3d4adcu: goto label_3d4adc;
        case 0x3d4ae0u: goto label_3d4ae0;
        case 0x3d4ae4u: goto label_3d4ae4;
        case 0x3d4ae8u: goto label_3d4ae8;
        case 0x3d4aecu: goto label_3d4aec;
        case 0x3d4af0u: goto label_3d4af0;
        case 0x3d4af4u: goto label_3d4af4;
        case 0x3d4af8u: goto label_3d4af8;
        case 0x3d4afcu: goto label_3d4afc;
        case 0x3d4b00u: goto label_3d4b00;
        case 0x3d4b04u: goto label_3d4b04;
        case 0x3d4b08u: goto label_3d4b08;
        case 0x3d4b0cu: goto label_3d4b0c;
        case 0x3d4b10u: goto label_3d4b10;
        case 0x3d4b14u: goto label_3d4b14;
        case 0x3d4b18u: goto label_3d4b18;
        case 0x3d4b1cu: goto label_3d4b1c;
        case 0x3d4b20u: goto label_3d4b20;
        case 0x3d4b24u: goto label_3d4b24;
        case 0x3d4b28u: goto label_3d4b28;
        case 0x3d4b2cu: goto label_3d4b2c;
        case 0x3d4b30u: goto label_3d4b30;
        case 0x3d4b34u: goto label_3d4b34;
        case 0x3d4b38u: goto label_3d4b38;
        case 0x3d4b3cu: goto label_3d4b3c;
        case 0x3d4b40u: goto label_3d4b40;
        case 0x3d4b44u: goto label_3d4b44;
        case 0x3d4b48u: goto label_3d4b48;
        case 0x3d4b4cu: goto label_3d4b4c;
        case 0x3d4b50u: goto label_3d4b50;
        case 0x3d4b54u: goto label_3d4b54;
        case 0x3d4b58u: goto label_3d4b58;
        case 0x3d4b5cu: goto label_3d4b5c;
        case 0x3d4b60u: goto label_3d4b60;
        case 0x3d4b64u: goto label_3d4b64;
        case 0x3d4b68u: goto label_3d4b68;
        case 0x3d4b6cu: goto label_3d4b6c;
        case 0x3d4b70u: goto label_3d4b70;
        case 0x3d4b74u: goto label_3d4b74;
        case 0x3d4b78u: goto label_3d4b78;
        case 0x3d4b7cu: goto label_3d4b7c;
        case 0x3d4b80u: goto label_3d4b80;
        case 0x3d4b84u: goto label_3d4b84;
        case 0x3d4b88u: goto label_3d4b88;
        case 0x3d4b8cu: goto label_3d4b8c;
        case 0x3d4b90u: goto label_3d4b90;
        case 0x3d4b94u: goto label_3d4b94;
        case 0x3d4b98u: goto label_3d4b98;
        case 0x3d4b9cu: goto label_3d4b9c;
        case 0x3d4ba0u: goto label_3d4ba0;
        case 0x3d4ba4u: goto label_3d4ba4;
        case 0x3d4ba8u: goto label_3d4ba8;
        case 0x3d4bacu: goto label_3d4bac;
        case 0x3d4bb0u: goto label_3d4bb0;
        case 0x3d4bb4u: goto label_3d4bb4;
        case 0x3d4bb8u: goto label_3d4bb8;
        case 0x3d4bbcu: goto label_3d4bbc;
        case 0x3d4bc0u: goto label_3d4bc0;
        case 0x3d4bc4u: goto label_3d4bc4;
        case 0x3d4bc8u: goto label_3d4bc8;
        case 0x3d4bccu: goto label_3d4bcc;
        case 0x3d4bd0u: goto label_3d4bd0;
        case 0x3d4bd4u: goto label_3d4bd4;
        case 0x3d4bd8u: goto label_3d4bd8;
        case 0x3d4bdcu: goto label_3d4bdc;
        case 0x3d4be0u: goto label_3d4be0;
        case 0x3d4be4u: goto label_3d4be4;
        case 0x3d4be8u: goto label_3d4be8;
        case 0x3d4becu: goto label_3d4bec;
        case 0x3d4bf0u: goto label_3d4bf0;
        case 0x3d4bf4u: goto label_3d4bf4;
        case 0x3d4bf8u: goto label_3d4bf8;
        case 0x3d4bfcu: goto label_3d4bfc;
        case 0x3d4c00u: goto label_3d4c00;
        case 0x3d4c04u: goto label_3d4c04;
        case 0x3d4c08u: goto label_3d4c08;
        case 0x3d4c0cu: goto label_3d4c0c;
        default: break;
    }

    ctx->pc = 0x3d48e8u;

label_3d48e8:
    // 0x3d48e8: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x3d48e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
label_3d48ec:
    // 0x3d48ec: 0x7fb204c0  sq          $s2, 0x4C0($sp)
    ctx->pc = 0x3d48ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 18));
label_3d48f0:
    // 0x3d48f0: 0x7fb304b0  sq          $s3, 0x4B0($sp)
    ctx->pc = 0x3d48f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 19));
label_3d48f4:
    // 0x3d48f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d48f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d48f8:
    // 0x3d48f8: 0x7fb004e0  sq          $s0, 0x4E0($sp)
    ctx->pc = 0x3d48f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 16));
label_3d48fc:
    // 0x3d48fc: 0x7fb104d0  sq          $s1, 0x4D0($sp)
    ctx->pc = 0x3d48fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 17));
label_3d4900:
    // 0x3d4900: 0xffbf04a0  sd          $ra, 0x4A0($sp)
    ctx->pc = 0x3d4900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 31));
label_3d4904:
    // 0x3d4904: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3d4904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3d4908:
    // 0x3d4908: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d4908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d490c:
    // 0x3d490c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d4910:
    // 0x3d4910: 0x40f809  jalr        $v0
label_3d4914:
    if (ctx->pc == 0x3D4914u) {
        ctx->pc = 0x3D4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4910u;
        // 0x3d4914: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4918u;
        goto label_3d4918;
    }
    ctx->pc = 0x3D4910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4918u);
        ctx->pc = 0x3D4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4910u;
        // 0x3d4914: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4910u, 0x3D4918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4918u;
label_3d4918:
    // 0x3d4918: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d4918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d491c:
    // 0x3d491c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d4920:
    // 0x3d4920: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d4920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d4924:
    // 0x3d4924: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3d4924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3d4928:
    // 0x3d4928: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d4928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d492c:
    // 0x3d492c: 0x0  nop
    ctx->pc = 0x3d492cu;
    // NOP
label_3d4930:
    // 0x3d4930: 0x0  nop
    ctx->pc = 0x3d4930u;
    // NOP
label_3d4934:
    // 0x3d4934: 0x0  nop
    ctx->pc = 0x3d4934u;
    // NOP
label_3d4938:
    // 0x3d4938: 0x0  nop
    ctx->pc = 0x3d4938u;
    // NOP
label_3d493c:
    // 0x3d493c: 0x0  nop
    ctx->pc = 0x3d493cu;
    // NOP
label_3d4940:
    // 0x3d4940: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3d4944:
    if (ctx->pc == 0x3D4944u) {
        ctx->pc = 0x3D4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4940u;
        // 0x3d4944: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4948u;
        goto label_3d4948;
    }
    ctx->pc = 0x3D4940u;
    {
        const bool branch_taken_0x3d4940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4940u;
        // 0x3d4944: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4940) {
            ctx->pc = 0x3D4930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4930;
        }
    }
    ctx->pc = 0x3D4948u;
label_3d4948:
    // 0x3d4948: 0xc138ddc  jal         func_4E3770
label_3d494c:
    if (ctx->pc == 0x3D494Cu) {
        ctx->pc = 0x3D4950u;
        goto label_3d4950;
    }
    ctx->pc = 0x3D4948u;
    SET_GPR_U32(ctx, 31, 0x3D4950u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3D4948u, 0x3D4950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4950u;
label_3d4950:
    // 0x3d4950: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x3d4950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3d4954:
    // 0x3d4954: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3d4954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d4958:
    // 0x3d4958: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3d495c:
    if (ctx->pc == 0x3D495Cu) {
        ctx->pc = 0x3D495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4958u;
        // 0x3d495c: 0x8e650024  lw          $a1, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4960u;
        goto label_3d4960;
    }
    ctx->pc = 0x3D4958u;
    {
        const bool branch_taken_0x3d4958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d4958) {
            ctx->pc = 0x3D495Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4958u;
            // 0x3d495c: 0x8e650024  lw          $a1, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4970u;
            goto label_3d4970;
        }
    }
    ctx->pc = 0x3D4960u;
label_3d4960:
    // 0x3d4960: 0xc045c76  jal         func_1171D8
label_3d4964:
    if (ctx->pc == 0x3D4964u) {
        ctx->pc = 0x3D4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4960u;
        // 0x3d4964: 0x8e640034  lw          $a0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4968u;
        goto label_3d4968;
    }
    ctx->pc = 0x3D4960u;
    SET_GPR_U32(ctx, 31, 0x3D4968u);
    ctx->pc = 0x3D4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4960u;
    // 0x3d4964: 0x8e640034  lw          $a0, 0x34($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171D8u, 0x3D4960u, 0x3D4968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4968u;
label_3d4968:
    // 0x3d4968: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_3d496c:
    if (ctx->pc == 0x3D496Cu) {
        ctx->pc = 0x3D496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4968u;
        // 0x3d496c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4970u;
        goto label_3d4970;
    }
    ctx->pc = 0x3D4968u;
    {
        const bool branch_taken_0x3d4968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D496Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4968u;
        // 0x3d496c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4968) {
            ctx->pc = 0x3D4BF4u;
            goto label_3d4bf4;
        }
    }
    ctx->pc = 0x3D4970u;
label_3d4970:
    // 0x3d4970: 0xc0e858c  jal         func_3A1630
label_3d4974:
    if (ctx->pc == 0x3D4974u) {
        ctx->pc = 0x3D4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4970u;
        // 0x3d4974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4978u;
        goto label_3d4978;
    }
    ctx->pc = 0x3D4970u;
    SET_GPR_U32(ctx, 31, 0x3D4978u);
    ctx->pc = 0x3D4974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4970u;
    // 0x3d4974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D4970u, 0x3D4978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4978u;
label_3d4978:
    // 0x3d4978: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x3d4978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_3d497c:
    // 0x3d497c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x3d497cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_3d4980:
    // 0x3d4980: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x3d4980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_3d4984:
    // 0x3d4984: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3d4984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3d4988:
    // 0x3d4988: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x3d4988u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d498c:
    // 0x3d498c: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
label_3d4990:
    if (ctx->pc == 0x3D4990u) {
        ctx->pc = 0x3D4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D498Cu;
        // 0x3d4990: 0xae620028  sw          $v0, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4994u;
        goto label_3d4994;
    }
    ctx->pc = 0x3D498Cu;
    {
        const bool branch_taken_0x3d498c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D498Cu;
        // 0x3d4990: 0xae620028  sw          $v0, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d498c) {
            ctx->pc = 0x3D4A28u;
            goto label_3d4a28;
        }
    }
    ctx->pc = 0x3D4994u;
label_3d4994:
    // 0x3d4994: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3d4994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3d4998:
    // 0x3d4998: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3d4998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d499c:
    // 0x3d499c: 0xc0cd4ee  jal         func_3353B8
label_3d49a0:
    if (ctx->pc == 0x3D49A0u) {
        ctx->pc = 0x3D49A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D499Cu;
        // 0x3d49a0: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49A4u;
        goto label_3d49a4;
    }
    ctx->pc = 0x3D499Cu;
    SET_GPR_U32(ctx, 31, 0x3D49A4u);
    ctx->pc = 0x3D49A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D499Cu;
    // 0x3d49a0: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3D499Cu, 0x3D49A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49A4u;
label_3d49a4:
    // 0x3d49a4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3d49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3d49a8:
    // 0x3d49a8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x3d49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3d49ac:
    // 0x3d49ac: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3d49acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3d49b0:
    // 0x3d49b0: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x3d49b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_3d49b4:
    // 0x3d49b4: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x3d49b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
label_3d49b8:
    // 0x3d49b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d49b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d49bc:
    // 0x3d49bc: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x3d49bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d49c0:
    // 0x3d49c0: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x3d49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
label_3d49c4:
    // 0x3d49c4: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3d49c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3d49c8:
    // 0x3d49c8: 0xc0e94a0  jal         func_3A5280
label_3d49cc:
    if (ctx->pc == 0x3D49CCu) {
        ctx->pc = 0x3D49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49C8u;
        // 0x3d49cc: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49D0u;
        goto label_3d49d0;
    }
    ctx->pc = 0x3D49C8u;
    SET_GPR_U32(ctx, 31, 0x3D49D0u);
    ctx->pc = 0x3D49CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49C8u;
    // 0x3d49cc: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3D49C8u, 0x3D49D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49D0u;
label_3d49d0:
    // 0x3d49d0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_3d49d4:
    if (ctx->pc == 0x3D49D4u) {
        ctx->pc = 0x3D49D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49D0u;
        // 0x3d49d4: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49D8u;
        goto label_3d49d8;
    }
    ctx->pc = 0x3D49D0u;
    {
        const bool branch_taken_0x3d49d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d49d0) {
            ctx->pc = 0x3D49D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D49D0u;
            // 0x3d49d4: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4A2Cu;
            goto label_3d4a2c;
        }
    }
    ctx->pc = 0x3D49D8u;
label_3d49d8:
    // 0x3d49d8: 0xc045c76  jal         func_1171D8
label_3d49dc:
    if (ctx->pc == 0x3D49DCu) {
        ctx->pc = 0x3D49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49D8u;
        // 0x3d49dc: 0x8e640034  lw          $a0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D49E0u;
        goto label_3d49e0;
    }
    ctx->pc = 0x3D49D8u;
    SET_GPR_U32(ctx, 31, 0x3D49E0u);
    ctx->pc = 0x3D49DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49D8u;
    // 0x3d49dc: 0x8e640034  lw          $a0, 0x34($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1171D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1171D8u, 0x3D49D8u, 0x3D49E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D49E0u;
label_3d49e0:
    // 0x3d49e0: 0x8e700030  lw          $s0, 0x30($s3)
    ctx->pc = 0x3d49e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_3d49e4:
    // 0x3d49e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3d49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3d49e8:
    // 0x3d49e8: 0x27b10430  addiu       $s1, $sp, 0x430
    ctx->pc = 0x3d49e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d49ec:
    // 0x3d49ec: 0x244244e0  addiu       $v0, $v0, 0x44E0
    ctx->pc = 0x3d49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17632));
label_3d49f0:
    // 0x3d49f0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x3d49f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3d49f4:
    // 0x3d49f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d49f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d49f8:
    // 0x3d49f8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3d49f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3d49fc:
    // 0x3d49fc: 0xc0e90ca  jal         func_3A4328
label_3d4a00:
    if (ctx->pc == 0x3D4A00u) {
        ctx->pc = 0x3D4A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D49FCu;
        // 0x3d4a00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A04u;
        goto label_3d4a04;
    }
    ctx->pc = 0x3D49FCu;
    SET_GPR_U32(ctx, 31, 0x3D4A04u);
    ctx->pc = 0x3D4A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D49FCu;
    // 0x3d4a00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D49FCu, 0x3D4A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A04u;
label_3d4a04:
    // 0x3d4a04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3d4a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d4a08:
    // 0x3d4a08: 0xc045c8e  jal         func_117238
label_3d4a0c:
    if (ctx->pc == 0x3D4A0Cu) {
        ctx->pc = 0x3D4A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A08u;
        // 0x3d4a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A10u;
        goto label_3d4a10;
    }
    ctx->pc = 0x3D4A08u;
    SET_GPR_U32(ctx, 31, 0x3D4A10u);
    ctx->pc = 0x3D4A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4A08u;
    // 0x3d4a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3D4A08u, 0x3D4A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A10u;
label_3d4a10:
    // 0x3d4a10: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x3d4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_3d4a14:
    // 0x3d4a14: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x3d4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3d4a18:
    // 0x3d4a18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d4a1c:
    // 0x3d4a1c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_3d4a20:
    if (ctx->pc == 0x3D4A20u) {
        ctx->pc = 0x3D4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A1Cu;
        // 0x3d4a20: 0xae630030  sw          $v1, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A24u;
        goto label_3d4a24;
    }
    ctx->pc = 0x3D4A1Cu;
    {
        const bool branch_taken_0x3d4a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D4A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A1Cu;
        // 0x3d4a20: 0xae630030  sw          $v1, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4a1c) {
            ctx->pc = 0x3D4A28u;
            goto label_3d4a28;
        }
    }
    ctx->pc = 0x3D4A24u;
label_3d4a24:
    // 0x3d4a24: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x3d4a24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_3d4a28:
    // 0x3d4a28: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3d4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d4a2c:
    // 0x3d4a2c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3d4a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3d4a30:
    // 0x3d4a30: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d4a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3d4a34:
    // 0x3d4a34: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3d4a38:
    if (ctx->pc == 0x3D4A38u) {
        ctx->pc = 0x3D4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A34u;
        // 0x3d4a38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A3Cu;
        goto label_3d4a3c;
    }
    ctx->pc = 0x3D4A34u;
    {
        const bool branch_taken_0x3d4a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A34u;
        // 0x3d4a38: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4a34) {
            ctx->pc = 0x3D4A70u;
            goto label_3d4a70;
        }
    }
    ctx->pc = 0x3D4A3Cu;
label_3d4a3c:
    // 0x3d4a3c: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x3d4a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_3d4a40:
    // 0x3d4a40: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x3d4a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_3d4a44:
    // 0x3d4a44: 0x27a50410  addiu       $a1, $sp, 0x410
    ctx->pc = 0x3d4a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3d4a48:
    // 0x3d4a48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3d4a48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3d4a4c:
    // 0x3d4a4c: 0xc0f3222  jal         func_3CC888
label_3d4a50:
    if (ctx->pc == 0x3D4A50u) {
        ctx->pc = 0x3D4A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A4Cu;
        // 0x3d4a50: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A54u;
        goto label_3d4a54;
    }
    ctx->pc = 0x3D4A4Cu;
    SET_GPR_U32(ctx, 31, 0x3D4A54u);
    ctx->pc = 0x3D4A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4A4Cu;
    // 0x3d4a50: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3D4A4Cu, 0x3D4A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A54u;
label_3d4a54:
    // 0x3d4a54: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x3d4a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
label_3d4a58:
    // 0x3d4a58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d4a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d4a5c:
    // 0x3d4a5c: 0x0  nop
    ctx->pc = 0x3d4a5cu;
    // NOP
label_3d4a60:
    // 0x3d4a60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3d4a60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d4a64:
    // 0x3d4a64: 0x0  nop
    ctx->pc = 0x3d4a64u;
    // NOP
label_3d4a68:
    // 0x3d4a68: 0x45010062  bc1t        . + 4 + (0x62 << 2)
label_3d4a6c:
    if (ctx->pc == 0x3D4A6Cu) {
        ctx->pc = 0x3D4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A68u;
        // 0x3d4a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A70u;
        goto label_3d4a70;
    }
    ctx->pc = 0x3D4A68u;
    {
        const bool branch_taken_0x3d4a68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A68u;
        // 0x3d4a6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4a68) {
            ctx->pc = 0x3D4BF4u;
            goto label_3d4bf4;
        }
    }
    ctx->pc = 0x3D4A70u;
label_3d4a70:
    // 0x3d4a70: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x3d4a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d4a74:
    // 0x3d4a74: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x3d4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_3d4a78:
    // 0x3d4a78: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3d4a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3d4a7c:
    // 0x3d4a7c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3d4a80:
    if (ctx->pc == 0x3D4A80u) {
        ctx->pc = 0x3D4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A7Cu;
        // 0x3d4a80: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A84u;
        goto label_3d4a84;
    }
    ctx->pc = 0x3D4A7Cu;
    {
        const bool branch_taken_0x3d4a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A7Cu;
        // 0x3d4a80: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4a7c) {
            ctx->pc = 0x3D4AB0u;
            goto label_3d4ab0;
        }
    }
    ctx->pc = 0x3D4A84u;
label_3d4a84:
    // 0x3d4a84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d4a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d4a88:
    // 0x3d4a88: 0x27a40420  addiu       $a0, $sp, 0x420
    ctx->pc = 0x3d4a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d4a8c:
    // 0x3d4a8c: 0xc0e92f4  jal         func_3A4BD0
label_3d4a90:
    if (ctx->pc == 0x3D4A90u) {
        ctx->pc = 0x3D4A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4A8Cu;
        // 0x3d4a90: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4A94u;
        goto label_3d4a94;
    }
    ctx->pc = 0x3D4A8Cu;
    SET_GPR_U32(ctx, 31, 0x3D4A94u);
    ctx->pc = 0x3D4A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4A8Cu;
    // 0x3d4a90: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3D4A8Cu, 0x3D4A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4A94u;
label_3d4a94:
    // 0x3d4a94: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3d4a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3d4a98:
    // 0x3d4a98: 0x7ba40420  lq          $a0, 0x420($sp)
    ctx->pc = 0x3d4a98u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d4a9c:
    // 0x3d4a9c: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x3d4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_3d4aa0:
    // 0x3d4aa0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3d4aa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3d4aa4:
    // 0x3d4aa4: 0x7fa40410  sq          $a0, 0x410($sp)
    ctx->pc = 0x3d4aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 4));
label_3d4aa8:
    // 0x3d4aa8: 0x10000051  b           . + 4 + (0x51 << 2)
label_3d4aac:
    if (ctx->pc == 0x3D4AACu) {
        ctx->pc = 0x3D4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AA8u;
        // 0x3d4aac: 0x7e430030  sq          $v1, 0x30($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4AB0u;
        goto label_3d4ab0;
    }
    ctx->pc = 0x3D4AA8u;
    {
        const bool branch_taken_0x3d4aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AA8u;
        // 0x3d4aac: 0x7e430030  sq          $v1, 0x30($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4aa8) {
            ctx->pc = 0x3D4BF0u;
            goto label_3d4bf0;
        }
    }
    ctx->pc = 0x3D4AB0u;
label_3d4ab0:
    // 0x3d4ab0: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x3d4ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_3d4ab4:
    // 0x3d4ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4ab8:
    // 0x3d4ab8: 0x1462004e  bne         $v1, $v0, . + 4 + (0x4E << 2)
label_3d4abc:
    if (ctx->pc == 0x3D4ABCu) {
        ctx->pc = 0x3D4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AB8u;
        // 0x3d4abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4AC0u;
        goto label_3d4ac0;
    }
    ctx->pc = 0x3D4AB8u;
    {
        const bool branch_taken_0x3d4ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3D4ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AB8u;
        // 0x3d4abc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4ab8) {
            ctx->pc = 0x3D4BF4u;
            goto label_3d4bf4;
        }
    }
    ctx->pc = 0x3D4AC0u;
label_3d4ac0:
    // 0x3d4ac0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3d4ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_3d4ac4:
    // 0x3d4ac4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3d4ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3d4ac8:
    // 0x3d4ac8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_3d4acc:
    if (ctx->pc == 0x3D4ACCu) {
        ctx->pc = 0x3D4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AC8u;
        // 0x3d4acc: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4AD0u;
        goto label_3d4ad0;
    }
    ctx->pc = 0x3D4AC8u;
    {
        const bool branch_taken_0x3d4ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AC8u;
        // 0x3d4acc: 0x831026  xor         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4ac8) {
            ctx->pc = 0x3D4AD4u;
            goto label_3d4ad4;
        }
    }
    ctx->pc = 0x3D4AD0u;
label_3d4ad0:
    // 0x3d4ad0: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3d4ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3d4ad4:
    // 0x3d4ad4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3d4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d4ad8:
    // 0x3d4ad8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3d4ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3d4adc:
    // 0x3d4adc: 0x27b00420  addiu       $s0, $sp, 0x420
    ctx->pc = 0x3d4adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3d4ae0:
    // 0x3d4ae0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d4ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d4ae4:
    // 0x3d4ae4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d4ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d4ae8:
    // 0x3d4ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4aec:
    // 0x3d4aec: 0xc0e90ca  jal         func_3A4328
label_3d4af0:
    if (ctx->pc == 0x3D4AF0u) {
        ctx->pc = 0x3D4AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4AECu;
        // 0x3d4af0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4AF4u;
        goto label_3d4af4;
    }
    ctx->pc = 0x3D4AECu;
    SET_GPR_U32(ctx, 31, 0x3D4AF4u);
    ctx->pc = 0x3D4AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4AECu;
    // 0x3d4af0: 0xae420054  sw          $v0, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3D4AECu, 0x3D4AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4AF4u;
label_3d4af4:
    // 0x3d4af4: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3d4af4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d4af8:
    // 0x3d4af8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4afc:
    // 0x3d4afc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d4afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d4b00:
    // 0x3d4b00: 0xc0e911e  jal         func_3A4478
label_3d4b04:
    if (ctx->pc == 0x3D4B04u) {
        ctx->pc = 0x3D4B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B00u;
        // 0x3d4b04: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4B08u;
        goto label_3d4b08;
    }
    ctx->pc = 0x3D4B00u;
    SET_GPR_U32(ctx, 31, 0x3D4B08u);
    ctx->pc = 0x3D4B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4B00u;
    // 0x3d4b04: 0x7e420010  sq          $v0, 0x10($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3D4B00u, 0x3D4B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4B08u;
label_3d4b08:
    // 0x3d4b08: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3d4b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d4b0c:
    // 0x3d4b0c: 0x27b00430  addiu       $s0, $sp, 0x430
    ctx->pc = 0x3d4b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3d4b10:
    // 0x3d4b10: 0x7ba20420  lq          $v0, 0x420($sp)
    ctx->pc = 0x3d4b10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_3d4b14:
    // 0x3d4b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4b18:
    // 0x3d4b18: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x3d4b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
label_3d4b1c:
    // 0x3d4b1c: 0x8e450058  lw          $a1, 0x58($s2)
    ctx->pc = 0x3d4b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_3d4b20:
    // 0x3d4b20: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3d4b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3d4b24:
    // 0x3d4b24: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x3d4b24u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_3d4b28:
    // 0x3d4b28: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x3d4b28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3d4b2c:
    // 0x3d4b2c: 0xc0e911e  jal         func_3A4478
label_3d4b30:
    if (ctx->pc == 0x3D4B30u) {
        ctx->pc = 0x3D4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B2Cu;
        // 0x3d4b30: 0x7e420030  sq          $v0, 0x30($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4B34u;
        goto label_3d4b34;
    }
    ctx->pc = 0x3D4B2Cu;
    SET_GPR_U32(ctx, 31, 0x3D4B34u);
    ctx->pc = 0x3D4B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4B2Cu;
    // 0x3d4b30: 0x7e420030  sq          $v0, 0x30($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3D4B2Cu, 0x3D4B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4B34u;
label_3d4b34:
    // 0x3d4b34: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x3d4b34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_3d4b38:
    // 0x3d4b38: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3d4b38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d4b3c:
    // 0x3d4b3c: 0x7fa30440  sq          $v1, 0x440($sp)
    ctx->pc = 0x3d4b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 3));
label_3d4b40:
    // 0x3d4b40: 0x7fa20470  sq          $v0, 0x470($sp)
    ctx->pc = 0x3d4b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 2));
label_3d4b44:
    // 0x3d4b44: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3d4b44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3d4b48:
    // 0x3d4b48: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3d4b48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3d4b4c:
    // 0x3d4b4c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3d4b4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d4b50:
    // 0x3d4b50: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3d4b50u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d4b54:
    // 0x3d4b54: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3d4b54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d4b58:
    // 0x3d4b58: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3d4b58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d4b5c:
    // 0x3d4b5c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3d4b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d4b60:
    // 0x3d4b60: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3d4b60u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3d4b64:
    // 0x3d4b64: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3d4b64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d4b68:
    // 0x3d4b68: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3d4b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3d4b6c:
    // 0x3d4b6c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3d4b6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3d4b70:
    // 0x3d4b70: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3d4b70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d4b74:
    // 0x3d4b74: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3d4b74u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3d4b78:
    // 0x3d4b78: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3d4b78u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3d4b7c:
    // 0x3d4b7c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3d4b7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d4b80:
    // 0x3d4b80: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3d4b80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3d4b84:
    // 0x3d4b84: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3d4b84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3d4b88:
    // 0x3d4b88: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x3d4b88u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
label_3d4b8c:
    // 0x3d4b8c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3d4b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3d4b90:
    // 0x3d4b90: 0x3c01c11c  lui         $at, 0xC11C
    ctx->pc = 0x3d4b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49436 << 16));
label_3d4b94:
    // 0x3d4b94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3d4b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3d4b98:
    // 0x3d4b98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3d4b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d4b9c:
    // 0x3d4b9c: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x3d4b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
label_3d4ba0:
    // 0x3d4ba0: 0x7fa20480  sq          $v0, 0x480($sp)
    ctx->pc = 0x3d4ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 2));
label_3d4ba4:
    // 0x3d4ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d4ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d4ba8:
    // 0x3d4ba8: 0x7fa20490  sq          $v0, 0x490($sp)
    ctx->pc = 0x3d4ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 2));
label_3d4bac:
    // 0x3d4bac: 0xc136b24  jal         func_4DAC90
label_3d4bb0:
    if (ctx->pc == 0x3D4BB0u) {
        ctx->pc = 0x3D4BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4BACu;
        // 0x3d4bb0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4BB4u;
        goto label_3d4bb4;
    }
    ctx->pc = 0x3D4BACu;
    SET_GPR_U32(ctx, 31, 0x3D4BB4u);
    ctx->pc = 0x3D4BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4BACu;
    // 0x3d4bb0: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3D4BACu, 0x3D4BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4BB4u;
label_3d4bb4:
    // 0x3d4bb4: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3d4bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d4bb8:
    // 0x3d4bb8: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x3d4bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
label_3d4bbc:
    // 0x3d4bbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d4bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d4bc0:
    // 0x3d4bc0: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3d4bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3d4bc4:
    // 0x3d4bc4: 0x7e620010  sq          $v0, 0x10($s3)
    ctx->pc = 0x3d4bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), GPR_VEC(ctx, 2));
label_3d4bc8:
    // 0x3d4bc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d4bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d4bcc:
    // 0x3d4bcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d4bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d4bd0:
    // 0x3d4bd0: 0xafa00430  sw          $zero, 0x430($sp)
    ctx->pc = 0x3d4bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1072), GPR_U32(ctx, 0));
label_3d4bd4:
    // 0x3d4bd4: 0xafa00434  sw          $zero, 0x434($sp)
    ctx->pc = 0x3d4bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1076), GPR_U32(ctx, 0));
label_3d4bd8:
    // 0x3d4bd8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x3d4bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3d4bdc:
    // 0x3d4bdc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x3d4bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3d4be0:
    // 0x3d4be0: 0x7ba20430  lq          $v0, 0x430($sp)
    ctx->pc = 0x3d4be0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_3d4be4:
    // 0x3d4be4: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x3d4be4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_3d4be8:
    // 0x3d4be8: 0x7fa20420  sq          $v0, 0x420($sp)
    ctx->pc = 0x3d4be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
label_3d4bec:
    // 0x3d4bec: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x3d4becu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_3d4bf0:
    // 0x3d4bf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d4bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d4bf4:
    // 0x3d4bf4: 0x7bb004e0  lq          $s0, 0x4E0($sp)
    ctx->pc = 0x3d4bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3d4bf8:
    // 0x3d4bf8: 0x7bb104d0  lq          $s1, 0x4D0($sp)
    ctx->pc = 0x3d4bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3d4bfc:
    // 0x3d4bfc: 0x7bb204c0  lq          $s2, 0x4C0($sp)
    ctx->pc = 0x3d4bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3d4c00:
    // 0x3d4c00: 0x7bb304b0  lq          $s3, 0x4B0($sp)
    ctx->pc = 0x3d4c00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3d4c04:
    // 0x3d4c04: 0xdfbf04a0  ld          $ra, 0x4A0($sp)
    ctx->pc = 0x3d4c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
label_3d4c08:
    // 0x3d4c08: 0x3e00008  jr          $ra
label_3d4c0c:
    if (ctx->pc == 0x3D4C0Cu) {
        ctx->pc = 0x3D4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C08u;
        // 0x3d4c0c: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4C10u;
        goto label_fallthrough_0x3d4c08;
    }
    ctx->pc = 0x3D4C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C08u;
        // 0x3d4c0c: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d4c08:
    ctx->pc = 0x3D4C10u;
}
