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

// Function: sub_00499A88
// Address: 0x499a88 - 0x499e38
void sub_00499A88_0x499a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499A88_0x499a88");
#endif

    switch (ctx->pc) {
        case 0x499a88u: goto label_499a88;
        case 0x499a8cu: goto label_499a8c;
        case 0x499a90u: goto label_499a90;
        case 0x499a94u: goto label_499a94;
        case 0x499a98u: goto label_499a98;
        case 0x499a9cu: goto label_499a9c;
        case 0x499aa0u: goto label_499aa0;
        case 0x499aa4u: goto label_499aa4;
        case 0x499aa8u: goto label_499aa8;
        case 0x499aacu: goto label_499aac;
        case 0x499ab0u: goto label_499ab0;
        case 0x499ab4u: goto label_499ab4;
        case 0x499ab8u: goto label_499ab8;
        case 0x499abcu: goto label_499abc;
        case 0x499ac0u: goto label_499ac0;
        case 0x499ac4u: goto label_499ac4;
        case 0x499ac8u: goto label_499ac8;
        case 0x499accu: goto label_499acc;
        case 0x499ad0u: goto label_499ad0;
        case 0x499ad4u: goto label_499ad4;
        case 0x499ad8u: goto label_499ad8;
        case 0x499adcu: goto label_499adc;
        case 0x499ae0u: goto label_499ae0;
        case 0x499ae4u: goto label_499ae4;
        case 0x499ae8u: goto label_499ae8;
        case 0x499aecu: goto label_499aec;
        case 0x499af0u: goto label_499af0;
        case 0x499af4u: goto label_499af4;
        case 0x499af8u: goto label_499af8;
        case 0x499afcu: goto label_499afc;
        case 0x499b00u: goto label_499b00;
        case 0x499b04u: goto label_499b04;
        case 0x499b08u: goto label_499b08;
        case 0x499b0cu: goto label_499b0c;
        case 0x499b10u: goto label_499b10;
        case 0x499b14u: goto label_499b14;
        case 0x499b18u: goto label_499b18;
        case 0x499b1cu: goto label_499b1c;
        case 0x499b20u: goto label_499b20;
        case 0x499b24u: goto label_499b24;
        case 0x499b28u: goto label_499b28;
        case 0x499b2cu: goto label_499b2c;
        case 0x499b30u: goto label_499b30;
        case 0x499b34u: goto label_499b34;
        case 0x499b38u: goto label_499b38;
        case 0x499b3cu: goto label_499b3c;
        case 0x499b40u: goto label_499b40;
        case 0x499b44u: goto label_499b44;
        case 0x499b48u: goto label_499b48;
        case 0x499b4cu: goto label_499b4c;
        case 0x499b50u: goto label_499b50;
        case 0x499b54u: goto label_499b54;
        case 0x499b58u: goto label_499b58;
        case 0x499b5cu: goto label_499b5c;
        case 0x499b60u: goto label_499b60;
        case 0x499b64u: goto label_499b64;
        case 0x499b68u: goto label_499b68;
        case 0x499b6cu: goto label_499b6c;
        case 0x499b70u: goto label_499b70;
        case 0x499b74u: goto label_499b74;
        case 0x499b78u: goto label_499b78;
        case 0x499b7cu: goto label_499b7c;
        case 0x499b80u: goto label_499b80;
        case 0x499b84u: goto label_499b84;
        case 0x499b88u: goto label_499b88;
        case 0x499b8cu: goto label_499b8c;
        case 0x499b90u: goto label_499b90;
        case 0x499b94u: goto label_499b94;
        case 0x499b98u: goto label_499b98;
        case 0x499b9cu: goto label_499b9c;
        case 0x499ba0u: goto label_499ba0;
        case 0x499ba4u: goto label_499ba4;
        case 0x499ba8u: goto label_499ba8;
        case 0x499bacu: goto label_499bac;
        case 0x499bb0u: goto label_499bb0;
        case 0x499bb4u: goto label_499bb4;
        case 0x499bb8u: goto label_499bb8;
        case 0x499bbcu: goto label_499bbc;
        case 0x499bc0u: goto label_499bc0;
        case 0x499bc4u: goto label_499bc4;
        case 0x499bc8u: goto label_499bc8;
        case 0x499bccu: goto label_499bcc;
        case 0x499bd0u: goto label_499bd0;
        case 0x499bd4u: goto label_499bd4;
        case 0x499bd8u: goto label_499bd8;
        case 0x499bdcu: goto label_499bdc;
        case 0x499be0u: goto label_499be0;
        case 0x499be4u: goto label_499be4;
        case 0x499be8u: goto label_499be8;
        case 0x499becu: goto label_499bec;
        case 0x499bf0u: goto label_499bf0;
        case 0x499bf4u: goto label_499bf4;
        case 0x499bf8u: goto label_499bf8;
        case 0x499bfcu: goto label_499bfc;
        case 0x499c00u: goto label_499c00;
        case 0x499c04u: goto label_499c04;
        case 0x499c08u: goto label_499c08;
        case 0x499c0cu: goto label_499c0c;
        case 0x499c10u: goto label_499c10;
        case 0x499c14u: goto label_499c14;
        case 0x499c18u: goto label_499c18;
        case 0x499c1cu: goto label_499c1c;
        case 0x499c20u: goto label_499c20;
        case 0x499c24u: goto label_499c24;
        case 0x499c28u: goto label_499c28;
        case 0x499c2cu: goto label_499c2c;
        case 0x499c30u: goto label_499c30;
        case 0x499c34u: goto label_499c34;
        case 0x499c38u: goto label_499c38;
        case 0x499c3cu: goto label_499c3c;
        case 0x499c40u: goto label_499c40;
        case 0x499c44u: goto label_499c44;
        case 0x499c48u: goto label_499c48;
        case 0x499c4cu: goto label_499c4c;
        case 0x499c50u: goto label_499c50;
        case 0x499c54u: goto label_499c54;
        case 0x499c58u: goto label_499c58;
        case 0x499c5cu: goto label_499c5c;
        case 0x499c60u: goto label_499c60;
        case 0x499c64u: goto label_499c64;
        case 0x499c68u: goto label_499c68;
        case 0x499c6cu: goto label_499c6c;
        case 0x499c70u: goto label_499c70;
        case 0x499c74u: goto label_499c74;
        case 0x499c78u: goto label_499c78;
        case 0x499c7cu: goto label_499c7c;
        case 0x499c80u: goto label_499c80;
        case 0x499c84u: goto label_499c84;
        case 0x499c88u: goto label_499c88;
        case 0x499c8cu: goto label_499c8c;
        case 0x499c90u: goto label_499c90;
        case 0x499c94u: goto label_499c94;
        case 0x499c98u: goto label_499c98;
        case 0x499c9cu: goto label_499c9c;
        case 0x499ca0u: goto label_499ca0;
        case 0x499ca4u: goto label_499ca4;
        case 0x499ca8u: goto label_499ca8;
        case 0x499cacu: goto label_499cac;
        case 0x499cb0u: goto label_499cb0;
        case 0x499cb4u: goto label_499cb4;
        case 0x499cb8u: goto label_499cb8;
        case 0x499cbcu: goto label_499cbc;
        case 0x499cc0u: goto label_499cc0;
        case 0x499cc4u: goto label_499cc4;
        case 0x499cc8u: goto label_499cc8;
        case 0x499cccu: goto label_499ccc;
        case 0x499cd0u: goto label_499cd0;
        case 0x499cd4u: goto label_499cd4;
        case 0x499cd8u: goto label_499cd8;
        case 0x499cdcu: goto label_499cdc;
        case 0x499ce0u: goto label_499ce0;
        case 0x499ce4u: goto label_499ce4;
        case 0x499ce8u: goto label_499ce8;
        case 0x499cecu: goto label_499cec;
        case 0x499cf0u: goto label_499cf0;
        case 0x499cf4u: goto label_499cf4;
        case 0x499cf8u: goto label_499cf8;
        case 0x499cfcu: goto label_499cfc;
        case 0x499d00u: goto label_499d00;
        case 0x499d04u: goto label_499d04;
        case 0x499d08u: goto label_499d08;
        case 0x499d0cu: goto label_499d0c;
        case 0x499d10u: goto label_499d10;
        case 0x499d14u: goto label_499d14;
        case 0x499d18u: goto label_499d18;
        case 0x499d1cu: goto label_499d1c;
        case 0x499d20u: goto label_499d20;
        case 0x499d24u: goto label_499d24;
        case 0x499d28u: goto label_499d28;
        case 0x499d2cu: goto label_499d2c;
        case 0x499d30u: goto label_499d30;
        case 0x499d34u: goto label_499d34;
        case 0x499d38u: goto label_499d38;
        case 0x499d3cu: goto label_499d3c;
        case 0x499d40u: goto label_499d40;
        case 0x499d44u: goto label_499d44;
        case 0x499d48u: goto label_499d48;
        case 0x499d4cu: goto label_499d4c;
        case 0x499d50u: goto label_499d50;
        case 0x499d54u: goto label_499d54;
        case 0x499d58u: goto label_499d58;
        case 0x499d5cu: goto label_499d5c;
        case 0x499d60u: goto label_499d60;
        case 0x499d64u: goto label_499d64;
        case 0x499d68u: goto label_499d68;
        case 0x499d6cu: goto label_499d6c;
        case 0x499d70u: goto label_499d70;
        case 0x499d74u: goto label_499d74;
        case 0x499d78u: goto label_499d78;
        case 0x499d7cu: goto label_499d7c;
        case 0x499d80u: goto label_499d80;
        case 0x499d84u: goto label_499d84;
        case 0x499d88u: goto label_499d88;
        case 0x499d8cu: goto label_499d8c;
        case 0x499d90u: goto label_499d90;
        case 0x499d94u: goto label_499d94;
        case 0x499d98u: goto label_499d98;
        case 0x499d9cu: goto label_499d9c;
        case 0x499da0u: goto label_499da0;
        case 0x499da4u: goto label_499da4;
        case 0x499da8u: goto label_499da8;
        case 0x499dacu: goto label_499dac;
        case 0x499db0u: goto label_499db0;
        case 0x499db4u: goto label_499db4;
        case 0x499db8u: goto label_499db8;
        case 0x499dbcu: goto label_499dbc;
        case 0x499dc0u: goto label_499dc0;
        case 0x499dc4u: goto label_499dc4;
        case 0x499dc8u: goto label_499dc8;
        case 0x499dccu: goto label_499dcc;
        case 0x499dd0u: goto label_499dd0;
        case 0x499dd4u: goto label_499dd4;
        case 0x499dd8u: goto label_499dd8;
        case 0x499ddcu: goto label_499ddc;
        case 0x499de0u: goto label_499de0;
        case 0x499de4u: goto label_499de4;
        case 0x499de8u: goto label_499de8;
        case 0x499decu: goto label_499dec;
        case 0x499df0u: goto label_499df0;
        case 0x499df4u: goto label_499df4;
        case 0x499df8u: goto label_499df8;
        case 0x499dfcu: goto label_499dfc;
        case 0x499e00u: goto label_499e00;
        case 0x499e04u: goto label_499e04;
        case 0x499e08u: goto label_499e08;
        case 0x499e0cu: goto label_499e0c;
        case 0x499e10u: goto label_499e10;
        case 0x499e14u: goto label_499e14;
        case 0x499e18u: goto label_499e18;
        case 0x499e1cu: goto label_499e1c;
        case 0x499e20u: goto label_499e20;
        case 0x499e24u: goto label_499e24;
        case 0x499e28u: goto label_499e28;
        case 0x499e2cu: goto label_499e2c;
        case 0x499e30u: goto label_499e30;
        case 0x499e34u: goto label_499e34;
        default: break;
    }

    ctx->pc = 0x499a88u;

label_499a88:
    // 0x499a88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x499a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_499a8c:
    // 0x499a8c: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x499a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
label_499a90:
    // 0x499a90: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x499a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_499a94:
    // 0x499a94: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x499a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_499a98:
    // 0x499a98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x499a98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_499a9c:
    // 0x499a9c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x499a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_499aa0:
    // 0x499aa0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x499aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_499aa4:
    // 0x499aa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x499aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_499aa8:
    // 0x499aa8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x499aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_499aac:
    // 0x499aac: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x499aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_499ab0:
    // 0x499ab0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x499ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_499ab4:
    // 0x499ab4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x499ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_499ab8:
    // 0x499ab8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x499ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_499abc:
    // 0x499abc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x499abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_499ac0:
    // 0x499ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_499ac4:
    // 0x499ac4: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x499ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_499ac8:
    // 0x499ac8: 0xc12612c  jal         func_4984B0
label_499acc:
    if (ctx->pc == 0x499ACCu) {
        ctx->pc = 0x499ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499AC8u;
        // 0x499acc: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499AD0u;
        goto label_499ad0;
    }
    ctx->pc = 0x499AC8u;
    SET_GPR_U32(ctx, 31, 0x499AD0u);
    ctx->pc = 0x499ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499AC8u;
    // 0x499acc: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4984B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4984B0u, 0x499AC8u, 0x499AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499AD0u;
label_499ad0:
    // 0x499ad0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x499ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_499ad4:
    // 0x499ad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x499ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_499ad8:
    // 0x499ad8: 0x50b804  sllv        $s7, $s0, $v0
    ctx->pc = 0x499ad8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
label_499adc:
    // 0x499adc: 0xc12612c  jal         func_4984B0
label_499ae0:
    if (ctx->pc == 0x499AE0u) {
        ctx->pc = 0x499AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499ADCu;
        // 0x499ae0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499AE4u;
        goto label_499ae4;
    }
    ctx->pc = 0x499ADCu;
    SET_GPR_U32(ctx, 31, 0x499AE4u);
    ctx->pc = 0x499AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499ADCu;
    // 0x499ae0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4984B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4984B0u, 0x499ADCu, 0x499AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499AE4u;
label_499ae4:
    // 0x499ae4: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x499ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_499ae8:
    // 0x499ae8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x499ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_499aec:
    // 0x499aec: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x499aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_499af0:
    // 0x499af0: 0x50b004  sllv        $s6, $s0, $v0
    ctx->pc = 0x499af0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
label_499af4:
    // 0x499af4: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x499af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_499af8:
    // 0x499af8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_499afc:
    if (ctx->pc == 0x499AFCu) {
        ctx->pc = 0x499AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499AF8u;
        // 0x499afc: 0x3f0c3  sra         $fp, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499B00u;
        goto label_499b00;
    }
    ctx->pc = 0x499AF8u;
    {
        const bool branch_taken_0x499af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x499AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499AF8u;
        // 0x499afc: 0x3f0c3  sra         $fp, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499af8) {
            ctx->pc = 0x499B14u;
            goto label_499b14;
        }
    }
    ctx->pc = 0x499B00u;
label_499b00:
    // 0x499b00: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x499b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_499b04:
    // 0x499b04: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x499b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_499b08:
    // 0x499b08: 0x40f809  jalr        $v0
label_499b0c:
    if (ctx->pc == 0x499B0Cu) {
        ctx->pc = 0x499B10u;
        goto label_499b10;
    }
    ctx->pc = 0x499B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x499B10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499B08u, 0x499B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x499B10u;
label_499b10:
    // 0x499b10: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x499b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_499b14:
    // 0x499b14: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x499b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_499b18:
    // 0x499b18: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x499b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499b1c:
    // 0x499b1c: 0x2455ad18  addiu       $s5, $v0, -0x52E8
    ctx->pc = 0x499b1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_499b20:
    // 0x499b20: 0x17a182  srl         $s4, $s7, 6
    ctx->pc = 0x499b20u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 23), 6));
label_499b24:
    // 0x499b24: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x499b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_499b28:
    // 0x499b28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x499b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_499b2c:
    // 0x499b2c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_499b30:
    if (ctx->pc == 0x499B30u) {
        ctx->pc = 0x499B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B2Cu;
        // 0x499b30: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499B34u;
        goto label_499b34;
    }
    ctx->pc = 0x499B2Cu;
    {
        const bool branch_taken_0x499b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x499B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B2Cu;
        // 0x499b30: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499b2c) {
            ctx->pc = 0x499B44u;
            goto label_499b44;
        }
    }
    ctx->pc = 0x499B34u;
label_499b34:
    // 0x499b34: 0x8ea2010c  lw          $v0, 0x10C($s5)
    ctx->pc = 0x499b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
label_499b38:
    // 0x499b38: 0x40f809  jalr        $v0
label_499b3c:
    if (ctx->pc == 0x499B3Cu) {
        ctx->pc = 0x499B40u;
        goto label_499b40;
    }
    ctx->pc = 0x499B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x499B40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499B38u, 0x499B40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x499B40u;
label_499b40:
    // 0x499b40: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x499b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_499b44:
    // 0x499b44: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x499b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_499b48:
    // 0x499b48: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_499b4c:
    if (ctx->pc == 0x499B4Cu) {
        ctx->pc = 0x499B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B48u;
        // 0x499b4c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499B50u;
        goto label_499b50;
    }
    ctx->pc = 0x499B48u;
    {
        const bool branch_taken_0x499b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B48u;
        // 0x499b4c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499b48) {
            ctx->pc = 0x499B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499b28;
        }
    }
    ctx->pc = 0x499B50u;
label_499b50:
    // 0x499b50: 0xc12612c  jal         func_4984B0
label_499b54:
    if (ctx->pc == 0x499B54u) {
        ctx->pc = 0x499B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B50u;
        // 0x499b54: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499B58u;
        goto label_499b58;
    }
    ctx->pc = 0x499B50u;
    SET_GPR_U32(ctx, 31, 0x499B58u);
    ctx->pc = 0x499B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499B50u;
    // 0x499b54: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4984B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4984B0u, 0x499B50u, 0x499B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499B58u;
label_499b58:
    // 0x499b58: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x499b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_499b5c:
    // 0x499b5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x499b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_499b60:
    // 0x499b60: 0xc12612c  jal         func_4984B0
label_499b64:
    if (ctx->pc == 0x499B64u) {
        ctx->pc = 0x499B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B60u;
        // 0x499b64: 0x29680  sll         $s2, $v0, 26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499B68u;
        goto label_499b68;
    }
    ctx->pc = 0x499B60u;
    SET_GPR_U32(ctx, 31, 0x499B68u);
    ctx->pc = 0x499B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499B60u;
    // 0x499b64: 0x29680  sll         $s2, $v0, 26 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4984B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4984B0u, 0x499B60u, 0x499B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499B68u;
label_499b68:
    // 0x499b68: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_499b6c:
    if (ctx->pc == 0x499B6Cu) {
        ctx->pc = 0x499B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B68u;
        // 0x499b6c: 0x21f80  sll         $v1, $v0, 30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499B70u;
        goto label_499b70;
    }
    ctx->pc = 0x499B68u;
    {
        const bool branch_taken_0x499b68 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x499B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B68u;
        // 0x499b6c: 0x21f80  sll         $v1, $v0, 30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499b68) {
            ctx->pc = 0x499B80u;
            goto label_499b80;
        }
    }
    ctx->pc = 0x499B70u;
label_499b70:
    // 0x499b70: 0x141380  sll         $v0, $s4, 14
    ctx->pc = 0x499b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 14));
label_499b74:
    // 0x499b74: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x499b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_499b78:
    // 0x499b78: 0x10000003  b           . + 4 + (0x3 << 2)
label_499b7c:
    if (ctx->pc == 0x499B7Cu) {
        ctx->pc = 0x499B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B78u;
        // 0x499b7c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499B80u;
        goto label_499b80;
    }
    ctx->pc = 0x499B78u;
    {
        const bool branch_taken_0x499b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B78u;
        // 0x499b7c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499b78) {
            ctx->pc = 0x499B88u;
            goto label_499b88;
        }
    }
    ctx->pc = 0x499B80u;
label_499b80:
    // 0x499b80: 0x34624000  ori         $v0, $v1, 0x4000
    ctx->pc = 0x499b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_499b84:
    // 0x499b84: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x499b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_499b88:
    // 0x499b88: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x499b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_499b8c:
    // 0x499b8c: 0xc12612c  jal         func_4984B0
label_499b90:
    if (ctx->pc == 0x499B90u) {
        ctx->pc = 0x499B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499B8Cu;
        // 0x499b90: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499B94u;
        goto label_499b94;
    }
    ctx->pc = 0x499B8Cu;
    SET_GPR_U32(ctx, 31, 0x499B94u);
    ctx->pc = 0x499B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499B8Cu;
    // 0x499b90: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4984B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4984B0u, 0x499B8Cu, 0x499B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499B94u;
label_499b94:
    // 0x499b94: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x499b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_499b98:
    // 0x499b98: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x499b98u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
label_499b9c:
    // 0x499b9c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x499b9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_499ba0:
    // 0x499ba0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x499ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_499ba4:
    // 0x499ba4: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x499ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_499ba8:
    // 0x499ba8: 0x3042006f  andi        $v0, $v0, 0x6F
    ctx->pc = 0x499ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
label_499bac:
    // 0x499bac: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x499bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_499bb0:
    // 0x499bb0: 0x2c830045  sltiu       $v1, $a0, 0x45
    ctx->pc = 0x499bb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
label_499bb4:
    // 0x499bb4: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_499bb8:
    if (ctx->pc == 0x499BB8u) {
        ctx->pc = 0x499BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499BB4u;
        // 0x499bb8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499BBCu;
        goto label_499bbc;
    }
    ctx->pc = 0x499BB4u;
    {
        const bool branch_taken_0x499bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x499BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499BB4u;
        // 0x499bb8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499bb4) {
            ctx->pc = 0x499C90u;
            goto label_499c90;
        }
    }
    ctx->pc = 0x499BBCu;
label_499bbc:
    // 0x499bbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x499bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_499bc0:
    // 0x499bc0: 0x2442fba0  addiu       $v0, $v0, -0x460
    ctx->pc = 0x499bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966176));
label_499bc4:
    // 0x499bc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x499bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_499bc8:
    // 0x499bc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x499bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_499bcc:
    // 0x499bcc: 0x800008  jr          $a0
label_499bd0:
    if (ctx->pc == 0x499BD0u) {
        ctx->pc = 0x499BD4u;
        goto label_499bd4;
    }
    ctx->pc = 0x499BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x499BD4u: goto label_499bd4;
            case 0x499BF4u: goto label_499bf4;
            case 0x499C14u: goto label_499c14;
            case 0x499C28u: goto label_499c28;
            case 0x499C48u: goto label_499c48;
            case 0x499C70u: goto label_499c70;
            case 0x499C84u: goto label_499c84;
            case 0x499C90u: goto label_499c90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499BCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x499BD4u;
label_499bd4:
    // 0x499bd4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x499bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_499bd8:
    // 0x499bd8: 0x3c0400a0  lui         $a0, 0xA0
    ctx->pc = 0x499bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)160 << 16));
label_499bdc:
    // 0x499bdc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x499bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_499be0:
    // 0x499be0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x499be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_499be4:
    // 0x499be4: 0x3463002c  ori         $v1, $v1, 0x2C
    ctx->pc = 0x499be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44);
label_499be8:
    // 0x499be8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x499be8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_499bec:
    // 0x499bec: 0x10000028  b           . + 4 + (0x28 << 2)
label_499bf0:
    if (ctx->pc == 0x499BF0u) {
        ctx->pc = 0x499BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499BECu;
        // 0x499bf0: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499BF4u;
        goto label_499bf4;
    }
    ctx->pc = 0x499BECu;
    {
        const bool branch_taken_0x499bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499BECu;
        // 0x499bf0: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499bec) {
            ctx->pc = 0x499C90u;
            goto label_499c90;
        }
    }
    ctx->pc = 0x499BF4u;
label_499bf4:
    // 0x499bf4: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x499bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_499bf8:
    // 0x499bf8: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x499bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
label_499bfc:
    // 0x499bfc: 0x3442002c  ori         $v0, $v0, 0x2C
    ctx->pc = 0x499bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44);
label_499c00:
    // 0x499c00: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x499c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_499c04:
    // 0x499c04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x499c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_499c08:
    // 0x499c08: 0x3c050130  lui         $a1, 0x130
    ctx->pc = 0x499c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)304 << 16));
label_499c0c:
    // 0x499c0c: 0x10000013  b           . + 4 + (0x13 << 2)
label_499c10:
    if (ctx->pc == 0x499C10u) {
        ctx->pc = 0x499C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C0Cu;
        // 0x499c10: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499C14u;
        goto label_499c14;
    }
    ctx->pc = 0x499C0Cu;
    {
        const bool branch_taken_0x499c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C0Cu;
        // 0x499c10: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499c0c) {
            ctx->pc = 0x499C5Cu;
            goto label_499c5c;
        }
    }
    ctx->pc = 0x499C14u;
label_499c14:
    // 0x499c14: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x499c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_499c18:
    // 0x499c18: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x499c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_499c1c:
    // 0x499c1c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x499c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_499c20:
    // 0x499c20: 0x1000000d  b           . + 4 + (0xD << 2)
label_499c24:
    if (ctx->pc == 0x499C24u) {
        ctx->pc = 0x499C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C20u;
        // 0x499c24: 0x3c050130  lui         $a1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)304 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499C28u;
        goto label_499c28;
    }
    ctx->pc = 0x499C20u;
    {
        const bool branch_taken_0x499c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C20u;
        // 0x499c24: 0x3c050130  lui         $a1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)304 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499c20) {
            ctx->pc = 0x499C58u;
            goto label_499c58;
        }
    }
    ctx->pc = 0x499C28u;
label_499c28:
    // 0x499c28: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x499c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_499c2c:
    // 0x499c2c: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x499c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
label_499c30:
    // 0x499c30: 0x3442002c  ori         $v0, $v0, 0x2C
    ctx->pc = 0x499c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44);
label_499c34:
    // 0x499c34: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x499c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_499c38:
    // 0x499c38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x499c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_499c3c:
    // 0x499c3c: 0x3c050140  lui         $a1, 0x140
    ctx->pc = 0x499c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
label_499c40:
    // 0x499c40: 0x10000006  b           . + 4 + (0x6 << 2)
label_499c44:
    if (ctx->pc == 0x499C44u) {
        ctx->pc = 0x499C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C40u;
        // 0x499c44: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499C48u;
        goto label_499c48;
    }
    ctx->pc = 0x499C40u;
    {
        const bool branch_taken_0x499c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C40u;
        // 0x499c44: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499c40) {
            ctx->pc = 0x499C5Cu;
            goto label_499c5c;
        }
    }
    ctx->pc = 0x499C48u;
label_499c48:
    // 0x499c48: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x499c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_499c4c:
    // 0x499c4c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x499c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_499c50:
    // 0x499c50: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x499c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_499c54:
    // 0x499c54: 0x3c050140  lui         $a1, 0x140
    ctx->pc = 0x499c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)320 << 16));
label_499c58:
    // 0x499c58: 0x3442002c  ori         $v0, $v0, 0x2C
    ctx->pc = 0x499c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44);
label_499c5c:
    // 0x499c5c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x499c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_499c60:
    // 0x499c60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x499c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_499c64:
    // 0x499c64: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x499c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_499c68:
    // 0x499c68: 0x10000009  b           . + 4 + (0x9 << 2)
label_499c6c:
    if (ctx->pc == 0x499C6Cu) {
        ctx->pc = 0x499C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C68u;
        // 0x499c6c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499C70u;
        goto label_499c70;
    }
    ctx->pc = 0x499C68u;
    {
        const bool branch_taken_0x499c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C68u;
        // 0x499c6c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499c68) {
            ctx->pc = 0x499C90u;
            goto label_499c90;
        }
    }
    ctx->pc = 0x499C70u;
label_499c70:
    // 0x499c70: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x499c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_499c74:
    // 0x499c74: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x499c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_499c78:
    // 0x499c78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x499c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_499c7c:
    // 0x499c7c: 0x10000004  b           . + 4 + (0x4 << 2)
label_499c80:
    if (ctx->pc == 0x499C80u) {
        ctx->pc = 0x499C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C7Cu;
        // 0x499c80: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499C84u;
        goto label_499c84;
    }
    ctx->pc = 0x499C7Cu;
    {
        const bool branch_taken_0x499c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499C7Cu;
        // 0x499c80: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499c7c) {
            ctx->pc = 0x499C90u;
            goto label_499c90;
        }
    }
    ctx->pc = 0x499C84u;
label_499c84:
    // 0x499c84: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x499c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_499c88:
    // 0x499c88: 0x3442002c  ori         $v0, $v0, 0x2C
    ctx->pc = 0x499c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44);
label_499c8c:
    // 0x499c8c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x499c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_499c90:
    // 0x499c90: 0x2d71018  mult        $v0, $s6, $s7
    ctx->pc = 0x499c90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_499c94:
    // 0x499c94: 0x5e1018  mult        $v0, $v0, $fp
    ctx->pc = 0x499c94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_499c98:
    // 0x499c98: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x499c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_499c9c:
    // 0x499c9c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x499c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_499ca0:
    // 0x499ca0: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x499ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_499ca4:
    // 0x499ca4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_499ca8:
    if (ctx->pc == 0x499CA8u) {
        ctx->pc = 0x499CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499CA4u;
        // 0x499ca8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499CACu;
        goto label_499cac;
    }
    ctx->pc = 0x499CA4u;
    {
        const bool branch_taken_0x499ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499CA4u;
        // 0x499ca8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499ca4) {
            ctx->pc = 0x499CF4u;
            goto label_499cf4;
        }
    }
    ctx->pc = 0x499CACu;
label_499cac:
    // 0x499cac: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x499cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_499cb0:
    // 0x499cb0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x499cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_499cb4:
    // 0x499cb4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x499cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_499cb8:
    // 0x499cb8: 0x2467003f  addiu       $a3, $v1, 0x3F
    ctx->pc = 0x499cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_499cbc:
    // 0x499cbc: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x499cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_499cc0:
    // 0x499cc0: 0x2445001f  addiu       $a1, $v0, 0x1F
    ctx->pc = 0x499cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_499cc4:
    // 0x499cc4: 0x87302a  slt         $a2, $a0, $a3
    ctx->pc = 0x499cc4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_499cc8:
    // 0x499cc8: 0x2463007e  addiu       $v1, $v1, 0x7E
    ctx->pc = 0x499cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 126));
label_499ccc:
    // 0x499ccc: 0x2442003e  addiu       $v0, $v0, 0x3E
    ctx->pc = 0x499cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 62));
label_499cd0:
    // 0x499cd0: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x499cd0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_499cd4:
    // 0x499cd4: 0xe6180b  movn        $v1, $a3, $a2
    ctx->pc = 0x499cd4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_499cd8:
    // 0x499cd8: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x499cd8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_499cdc:
    // 0x499cdc: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x499cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_499ce0:
    // 0x499ce0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x499ce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_499ce4:
    // 0x499ce4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x499ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_499ce8:
    // 0x499ce8: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x499ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_499cec:
    // 0x499cec: 0x1000003e  b           . + 4 + (0x3E << 2)
label_499cf0:
    if (ctx->pc == 0x499CF0u) {
        ctx->pc = 0x499CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499CECu;
        // 0x499cf0: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499CF4u;
        goto label_499cf4;
    }
    ctx->pc = 0x499CECu;
    {
        const bool branch_taken_0x499cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499CECu;
        // 0x499cf0: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499cec) {
            ctx->pc = 0x499DE8u;
            goto label_499de8;
        }
    }
    ctx->pc = 0x499CF4u;
label_499cf4:
    // 0x499cf4: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_499cf8:
    if (ctx->pc == 0x499CF8u) {
        ctx->pc = 0x499CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499CF4u;
        // 0x499cf8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499CFCu;
        goto label_499cfc;
    }
    ctx->pc = 0x499CF4u;
    {
        const bool branch_taken_0x499cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x499CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499CF4u;
        // 0x499cf8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499cf4) {
            ctx->pc = 0x499D54u;
            goto label_499d54;
        }
    }
    ctx->pc = 0x499CFCu;
label_499cfc:
    // 0x499cfc: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x499cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_499d00:
    // 0x499d00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x499d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_499d04:
    // 0x499d04: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x499d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_499d08:
    // 0x499d08: 0x24a6003f  addiu       $a2, $a1, 0x3F
    ctx->pc = 0x499d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
label_499d0c:
    // 0x499d0c: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x499d0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_499d10:
    // 0x499d10: 0x24a5007e  addiu       $a1, $a1, 0x7E
    ctx->pc = 0x499d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
label_499d14:
    // 0x499d14: 0x2487003f  addiu       $a3, $a0, 0x3F
    ctx->pc = 0x499d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
label_499d18:
    // 0x499d18: 0xc3280b  movn        $a1, $a2, $v1
    ctx->pc = 0x499d18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
label_499d1c:
    // 0x499d1c: 0x2484007e  addiu       $a0, $a0, 0x7E
    ctx->pc = 0x499d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 126));
label_499d20:
    // 0x499d20: 0x52983  sra         $a1, $a1, 6
    ctx->pc = 0x499d20u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 6));
label_499d24:
    // 0x499d24: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x499d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_499d28:
    // 0x499d28: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x499d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_499d2c:
    // 0x499d2c: 0xe2200b  movn        $a0, $a3, $v0
    ctx->pc = 0x499d2cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
label_499d30:
    // 0x499d30: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x499d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_499d34:
    // 0x499d34: 0xc10b602  jal         func_42D808
label_499d38:
    if (ctx->pc == 0x499D38u) {
        ctx->pc = 0x499D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D34u;
        // 0x499d38: 0x42183  sra         $a0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499D3Cu;
        goto label_499d3c;
    }
    ctx->pc = 0x499D34u;
    SET_GPR_U32(ctx, 31, 0x499D3Cu);
    ctx->pc = 0x499D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499D34u;
    // 0x499d38: 0x42183  sra         $a0, $a0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x499D34u, 0x499D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499D3Cu;
label_499d3c:
    // 0x499d3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x499d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_499d40:
    // 0x499d40: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x499d40u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_499d44:
    // 0x499d44: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x499d44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_499d48:
    // 0x499d48: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x499d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_499d4c:
    // 0x499d4c: 0x10000026  b           . + 4 + (0x26 << 2)
label_499d50:
    if (ctx->pc == 0x499D50u) {
        ctx->pc = 0x499D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D4Cu;
        // 0x499d50: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499D54u;
        goto label_499d54;
    }
    ctx->pc = 0x499D4Cu;
    {
        const bool branch_taken_0x499d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D4Cu;
        // 0x499d50: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499d4c) {
            ctx->pc = 0x499DE8u;
            goto label_499de8;
        }
    }
    ctx->pc = 0x499D54u;
label_499d54:
    // 0x499d54: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_499d58:
    if (ctx->pc == 0x499D58u) {
        ctx->pc = 0x499D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D54u;
        // 0x499d58: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499D5Cu;
        goto label_499d5c;
    }
    ctx->pc = 0x499D54u;
    {
        const bool branch_taken_0x499d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x499D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D54u;
        // 0x499d58: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499d54) {
            ctx->pc = 0x499D84u;
            goto label_499d84;
        }
    }
    ctx->pc = 0x499D5Cu;
label_499d5c:
    // 0x499d5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x499d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_499d60:
    // 0x499d60: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x499d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_499d64:
    // 0x499d64: 0x24a6003f  addiu       $a2, $a1, 0x3F
    ctx->pc = 0x499d64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
label_499d68:
    // 0x499d68: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x499d68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_499d6c:
    // 0x499d6c: 0x24a5007e  addiu       $a1, $a1, 0x7E
    ctx->pc = 0x499d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
label_499d70:
    // 0x499d70: 0x2487007f  addiu       $a3, $a0, 0x7F
    ctx->pc = 0x499d70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
label_499d74:
    // 0x499d74: 0xc3280b  movn        $a1, $a2, $v1
    ctx->pc = 0x499d74u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
label_499d78:
    // 0x499d78: 0x248400fe  addiu       $a0, $a0, 0xFE
    ctx->pc = 0x499d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 254));
label_499d7c:
    // 0x499d7c: 0x1000000a  b           . + 4 + (0xA << 2)
label_499d80:
    if (ctx->pc == 0x499D80u) {
        ctx->pc = 0x499D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D7Cu;
        // 0x499d80: 0x52983  sra         $a1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499D84u;
        goto label_499d84;
    }
    ctx->pc = 0x499D7Cu;
    {
        const bool branch_taken_0x499d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499D7Cu;
        // 0x499d80: 0x52983  sra         $a1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499d7c) {
            ctx->pc = 0x499DA8u;
            goto label_499da8;
        }
    }
    ctx->pc = 0x499D84u;
label_499d84:
    // 0x499d84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x499d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_499d88:
    // 0x499d88: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x499d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_499d8c:
    // 0x499d8c: 0x24a6007f  addiu       $a2, $a1, 0x7F
    ctx->pc = 0x499d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
label_499d90:
    // 0x499d90: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x499d90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_499d94:
    // 0x499d94: 0x24a500fe  addiu       $a1, $a1, 0xFE
    ctx->pc = 0x499d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 254));
label_499d98:
    // 0x499d98: 0x2487007f  addiu       $a3, $a0, 0x7F
    ctx->pc = 0x499d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
label_499d9c:
    // 0x499d9c: 0xc3280b  movn        $a1, $a2, $v1
    ctx->pc = 0x499d9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
label_499da0:
    // 0x499da0: 0x248400fe  addiu       $a0, $a0, 0xFE
    ctx->pc = 0x499da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 254));
label_499da4:
    // 0x499da4: 0x529c3  sra         $a1, $a1, 7
    ctx->pc = 0x499da4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 7));
label_499da8:
    // 0x499da8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x499da8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_499dac:
    // 0x499dac: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x499dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_499db0:
    // 0x499db0: 0xe2200b  movn        $a0, $a3, $v0
    ctx->pc = 0x499db0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
label_499db4:
    // 0x499db4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x499db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_499db8:
    // 0x499db8: 0xc10b602  jal         func_42D808
label_499dbc:
    if (ctx->pc == 0x499DBCu) {
        ctx->pc = 0x499DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499DB8u;
        // 0x499dbc: 0x421c3  sra         $a0, $a0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499DC0u;
        goto label_499dc0;
    }
    ctx->pc = 0x499DB8u;
    SET_GPR_U32(ctx, 31, 0x499DC0u);
    ctx->pc = 0x499DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499DB8u;
    // 0x499dbc: 0x421c3  sra         $a0, $a0, 7 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x499DB8u, 0x499DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x499DC0u;
label_499dc0:
    // 0x499dc0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x499dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_499dc4:
    // 0x499dc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x499dc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_499dc8:
    // 0x499dc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x499dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_499dcc:
    // 0x499dcc: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x499dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_499dd0:
    // 0x499dd0: 0xae24002c  sw          $a0, 0x2C($s1)
    ctx->pc = 0x499dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 4));
label_499dd4:
    // 0x499dd4: 0x24430800  addiu       $v1, $v0, 0x800
    ctx->pc = 0x499dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
label_499dd8:
    // 0x499dd8: 0x24421000  addiu       $v0, $v0, 0x1000
    ctx->pc = 0x499dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4096));
label_499ddc:
    // 0x499ddc: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x499ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
label_499de0:
    // 0x499de0: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x499de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_499de4:
    // 0x499de4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x499de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_499de8:
    // 0x499de8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x499de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_499dec:
    // 0x499dec: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x499decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_499df0:
    // 0x499df0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x499df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_499df4:
    // 0x499df4: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x499df4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_499df8:
    // 0x499df8: 0xa2200016  sb          $zero, 0x16($s1)
    ctx->pc = 0x499df8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 22), (uint8_t)GPR_U32(ctx, 0));
label_499dfc:
    // 0x499dfc: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x499dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_499e00:
    // 0x499e00: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x499e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_499e04:
    // 0x499e04: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x499e04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_499e08:
    // 0x499e08: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x499e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_499e0c:
    // 0x499e0c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x499e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_499e10:
    // 0x499e10: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x499e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_499e14:
    // 0x499e14: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x499e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_499e18:
    // 0x499e18: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x499e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_499e1c:
    // 0x499e1c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x499e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_499e20:
    // 0x499e20: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x499e20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_499e24:
    // 0x499e24: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x499e24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_499e28:
    // 0x499e28: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x499e28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_499e2c:
    // 0x499e2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_499e30:
    // 0x499e30: 0x3e00008  jr          $ra
label_499e34:
    if (ctx->pc == 0x499E34u) {
        ctx->pc = 0x499E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499E30u;
        // 0x499e34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499E38u;
        goto label_fallthrough_0x499e30;
    }
    ctx->pc = 0x499E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499E30u;
        // 0x499e34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x499e30:
    ctx->pc = 0x499E38u;
}
