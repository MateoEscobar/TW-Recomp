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

// Function: sub_00258A88
// Address: 0x258a88 - 0x258e10
void sub_00258A88_0x258a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258A88_0x258a88");
#endif

    switch (ctx->pc) {
        case 0x258a88u: goto label_258a88;
        case 0x258a8cu: goto label_258a8c;
        case 0x258a90u: goto label_258a90;
        case 0x258a94u: goto label_258a94;
        case 0x258a98u: goto label_258a98;
        case 0x258a9cu: goto label_258a9c;
        case 0x258aa0u: goto label_258aa0;
        case 0x258aa4u: goto label_258aa4;
        case 0x258aa8u: goto label_258aa8;
        case 0x258aacu: goto label_258aac;
        case 0x258ab0u: goto label_258ab0;
        case 0x258ab4u: goto label_258ab4;
        case 0x258ab8u: goto label_258ab8;
        case 0x258abcu: goto label_258abc;
        case 0x258ac0u: goto label_258ac0;
        case 0x258ac4u: goto label_258ac4;
        case 0x258ac8u: goto label_258ac8;
        case 0x258accu: goto label_258acc;
        case 0x258ad0u: goto label_258ad0;
        case 0x258ad4u: goto label_258ad4;
        case 0x258ad8u: goto label_258ad8;
        case 0x258adcu: goto label_258adc;
        case 0x258ae0u: goto label_258ae0;
        case 0x258ae4u: goto label_258ae4;
        case 0x258ae8u: goto label_258ae8;
        case 0x258aecu: goto label_258aec;
        case 0x258af0u: goto label_258af0;
        case 0x258af4u: goto label_258af4;
        case 0x258af8u: goto label_258af8;
        case 0x258afcu: goto label_258afc;
        case 0x258b00u: goto label_258b00;
        case 0x258b04u: goto label_258b04;
        case 0x258b08u: goto label_258b08;
        case 0x258b0cu: goto label_258b0c;
        case 0x258b10u: goto label_258b10;
        case 0x258b14u: goto label_258b14;
        case 0x258b18u: goto label_258b18;
        case 0x258b1cu: goto label_258b1c;
        case 0x258b20u: goto label_258b20;
        case 0x258b24u: goto label_258b24;
        case 0x258b28u: goto label_258b28;
        case 0x258b2cu: goto label_258b2c;
        case 0x258b30u: goto label_258b30;
        case 0x258b34u: goto label_258b34;
        case 0x258b38u: goto label_258b38;
        case 0x258b3cu: goto label_258b3c;
        case 0x258b40u: goto label_258b40;
        case 0x258b44u: goto label_258b44;
        case 0x258b48u: goto label_258b48;
        case 0x258b4cu: goto label_258b4c;
        case 0x258b50u: goto label_258b50;
        case 0x258b54u: goto label_258b54;
        case 0x258b58u: goto label_258b58;
        case 0x258b5cu: goto label_258b5c;
        case 0x258b60u: goto label_258b60;
        case 0x258b64u: goto label_258b64;
        case 0x258b68u: goto label_258b68;
        case 0x258b6cu: goto label_258b6c;
        case 0x258b70u: goto label_258b70;
        case 0x258b74u: goto label_258b74;
        case 0x258b78u: goto label_258b78;
        case 0x258b7cu: goto label_258b7c;
        case 0x258b80u: goto label_258b80;
        case 0x258b84u: goto label_258b84;
        case 0x258b88u: goto label_258b88;
        case 0x258b8cu: goto label_258b8c;
        case 0x258b90u: goto label_258b90;
        case 0x258b94u: goto label_258b94;
        case 0x258b98u: goto label_258b98;
        case 0x258b9cu: goto label_258b9c;
        case 0x258ba0u: goto label_258ba0;
        case 0x258ba4u: goto label_258ba4;
        case 0x258ba8u: goto label_258ba8;
        case 0x258bacu: goto label_258bac;
        case 0x258bb0u: goto label_258bb0;
        case 0x258bb4u: goto label_258bb4;
        case 0x258bb8u: goto label_258bb8;
        case 0x258bbcu: goto label_258bbc;
        case 0x258bc0u: goto label_258bc0;
        case 0x258bc4u: goto label_258bc4;
        case 0x258bc8u: goto label_258bc8;
        case 0x258bccu: goto label_258bcc;
        case 0x258bd0u: goto label_258bd0;
        case 0x258bd4u: goto label_258bd4;
        case 0x258bd8u: goto label_258bd8;
        case 0x258bdcu: goto label_258bdc;
        case 0x258be0u: goto label_258be0;
        case 0x258be4u: goto label_258be4;
        case 0x258be8u: goto label_258be8;
        case 0x258becu: goto label_258bec;
        case 0x258bf0u: goto label_258bf0;
        case 0x258bf4u: goto label_258bf4;
        case 0x258bf8u: goto label_258bf8;
        case 0x258bfcu: goto label_258bfc;
        case 0x258c00u: goto label_258c00;
        case 0x258c04u: goto label_258c04;
        case 0x258c08u: goto label_258c08;
        case 0x258c0cu: goto label_258c0c;
        case 0x258c10u: goto label_258c10;
        case 0x258c14u: goto label_258c14;
        case 0x258c18u: goto label_258c18;
        case 0x258c1cu: goto label_258c1c;
        case 0x258c20u: goto label_258c20;
        case 0x258c24u: goto label_258c24;
        case 0x258c28u: goto label_258c28;
        case 0x258c2cu: goto label_258c2c;
        case 0x258c30u: goto label_258c30;
        case 0x258c34u: goto label_258c34;
        case 0x258c38u: goto label_258c38;
        case 0x258c3cu: goto label_258c3c;
        case 0x258c40u: goto label_258c40;
        case 0x258c44u: goto label_258c44;
        case 0x258c48u: goto label_258c48;
        case 0x258c4cu: goto label_258c4c;
        case 0x258c50u: goto label_258c50;
        case 0x258c54u: goto label_258c54;
        case 0x258c58u: goto label_258c58;
        case 0x258c5cu: goto label_258c5c;
        case 0x258c60u: goto label_258c60;
        case 0x258c64u: goto label_258c64;
        case 0x258c68u: goto label_258c68;
        case 0x258c6cu: goto label_258c6c;
        case 0x258c70u: goto label_258c70;
        case 0x258c74u: goto label_258c74;
        case 0x258c78u: goto label_258c78;
        case 0x258c7cu: goto label_258c7c;
        case 0x258c80u: goto label_258c80;
        case 0x258c84u: goto label_258c84;
        case 0x258c88u: goto label_258c88;
        case 0x258c8cu: goto label_258c8c;
        case 0x258c90u: goto label_258c90;
        case 0x258c94u: goto label_258c94;
        case 0x258c98u: goto label_258c98;
        case 0x258c9cu: goto label_258c9c;
        case 0x258ca0u: goto label_258ca0;
        case 0x258ca4u: goto label_258ca4;
        case 0x258ca8u: goto label_258ca8;
        case 0x258cacu: goto label_258cac;
        case 0x258cb0u: goto label_258cb0;
        case 0x258cb4u: goto label_258cb4;
        case 0x258cb8u: goto label_258cb8;
        case 0x258cbcu: goto label_258cbc;
        case 0x258cc0u: goto label_258cc0;
        case 0x258cc4u: goto label_258cc4;
        case 0x258cc8u: goto label_258cc8;
        case 0x258cccu: goto label_258ccc;
        case 0x258cd0u: goto label_258cd0;
        case 0x258cd4u: goto label_258cd4;
        case 0x258cd8u: goto label_258cd8;
        case 0x258cdcu: goto label_258cdc;
        case 0x258ce0u: goto label_258ce0;
        case 0x258ce4u: goto label_258ce4;
        case 0x258ce8u: goto label_258ce8;
        case 0x258cecu: goto label_258cec;
        case 0x258cf0u: goto label_258cf0;
        case 0x258cf4u: goto label_258cf4;
        case 0x258cf8u: goto label_258cf8;
        case 0x258cfcu: goto label_258cfc;
        case 0x258d00u: goto label_258d00;
        case 0x258d04u: goto label_258d04;
        case 0x258d08u: goto label_258d08;
        case 0x258d0cu: goto label_258d0c;
        case 0x258d10u: goto label_258d10;
        case 0x258d14u: goto label_258d14;
        case 0x258d18u: goto label_258d18;
        case 0x258d1cu: goto label_258d1c;
        case 0x258d20u: goto label_258d20;
        case 0x258d24u: goto label_258d24;
        case 0x258d28u: goto label_258d28;
        case 0x258d2cu: goto label_258d2c;
        case 0x258d30u: goto label_258d30;
        case 0x258d34u: goto label_258d34;
        case 0x258d38u: goto label_258d38;
        case 0x258d3cu: goto label_258d3c;
        case 0x258d40u: goto label_258d40;
        case 0x258d44u: goto label_258d44;
        case 0x258d48u: goto label_258d48;
        case 0x258d4cu: goto label_258d4c;
        case 0x258d50u: goto label_258d50;
        case 0x258d54u: goto label_258d54;
        case 0x258d58u: goto label_258d58;
        case 0x258d5cu: goto label_258d5c;
        case 0x258d60u: goto label_258d60;
        case 0x258d64u: goto label_258d64;
        case 0x258d68u: goto label_258d68;
        case 0x258d6cu: goto label_258d6c;
        case 0x258d70u: goto label_258d70;
        case 0x258d74u: goto label_258d74;
        case 0x258d78u: goto label_258d78;
        case 0x258d7cu: goto label_258d7c;
        case 0x258d80u: goto label_258d80;
        case 0x258d84u: goto label_258d84;
        case 0x258d88u: goto label_258d88;
        case 0x258d8cu: goto label_258d8c;
        case 0x258d90u: goto label_258d90;
        case 0x258d94u: goto label_258d94;
        case 0x258d98u: goto label_258d98;
        case 0x258d9cu: goto label_258d9c;
        case 0x258da0u: goto label_258da0;
        case 0x258da4u: goto label_258da4;
        case 0x258da8u: goto label_258da8;
        case 0x258dacu: goto label_258dac;
        case 0x258db0u: goto label_258db0;
        case 0x258db4u: goto label_258db4;
        case 0x258db8u: goto label_258db8;
        case 0x258dbcu: goto label_258dbc;
        case 0x258dc0u: goto label_258dc0;
        case 0x258dc4u: goto label_258dc4;
        case 0x258dc8u: goto label_258dc8;
        case 0x258dccu: goto label_258dcc;
        case 0x258dd0u: goto label_258dd0;
        case 0x258dd4u: goto label_258dd4;
        case 0x258dd8u: goto label_258dd8;
        case 0x258ddcu: goto label_258ddc;
        case 0x258de0u: goto label_258de0;
        case 0x258de4u: goto label_258de4;
        case 0x258de8u: goto label_258de8;
        case 0x258decu: goto label_258dec;
        case 0x258df0u: goto label_258df0;
        case 0x258df4u: goto label_258df4;
        case 0x258df8u: goto label_258df8;
        case 0x258dfcu: goto label_258dfc;
        case 0x258e00u: goto label_258e00;
        case 0x258e04u: goto label_258e04;
        case 0x258e08u: goto label_258e08;
        case 0x258e0cu: goto label_258e0c;
        default: break;
    }

    ctx->pc = 0x258a88u;

label_258a88:
    // 0x258a88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_258a8c:
    // 0x258a8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x258a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_258a90:
    // 0x258a90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x258a90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_258a94:
    // 0x258a94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x258a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_258a98:
    // 0x258a98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x258a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_258a9c:
    // 0x258a9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_258aa0:
    // 0x258aa0: 0xc0e409a  jal         func_390268
label_258aa4:
    if (ctx->pc == 0x258AA4u) {
        ctx->pc = 0x258AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AA0u;
        // 0x258aa4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258AA8u;
        goto label_258aa8;
    }
    ctx->pc = 0x258AA0u;
    SET_GPR_U32(ctx, 31, 0x258AA8u);
    ctx->pc = 0x258AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AA0u;
    // 0x258aa4: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x258AA0u, 0x258AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AA8u;
label_258aa8:
    // 0x258aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258aac:
    // 0x258aac: 0xc089a76  jal         func_2269D8
label_258ab0:
    if (ctx->pc == 0x258AB0u) {
        ctx->pc = 0x258AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AACu;
        // 0x258ab0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258AB4u;
        goto label_258ab4;
    }
    ctx->pc = 0x258AACu;
    SET_GPR_U32(ctx, 31, 0x258AB4u);
    ctx->pc = 0x258AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AACu;
    // 0x258ab0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x258AACu, 0x258AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AB4u;
label_258ab4:
    // 0x258ab4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258ab8:
    // 0x258ab8: 0xc08a05a  jal         func_228168
label_258abc:
    if (ctx->pc == 0x258ABCu) {
        ctx->pc = 0x258ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AB8u;
        // 0x258abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258AC0u;
        goto label_258ac0;
    }
    ctx->pc = 0x258AB8u;
    SET_GPR_U32(ctx, 31, 0x258AC0u);
    ctx->pc = 0x258ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AB8u;
    // 0x258abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x258AB8u, 0x258AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AC0u;
label_258ac0:
    // 0x258ac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_258ac4:
    if (ctx->pc == 0x258AC4u) {
        ctx->pc = 0x258AC8u;
        goto label_258ac8;
    }
    ctx->pc = 0x258AC0u;
    {
        const bool branch_taken_0x258ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258ac0) {
            ctx->pc = 0x258AD0u;
            goto label_258ad0;
        }
    }
    ctx->pc = 0x258AC8u;
label_258ac8:
    // 0x258ac8: 0xc08c050  jal         func_230140
label_258acc:
    if (ctx->pc == 0x258ACCu) {
        ctx->pc = 0x258ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AC8u;
        // 0x258acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258AD0u;
        goto label_258ad0;
    }
    ctx->pc = 0x258AC8u;
    SET_GPR_U32(ctx, 31, 0x258AD0u);
    ctx->pc = 0x258ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AC8u;
    // 0x258acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x258AC8u, 0x258AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AD0u;
label_258ad0:
    // 0x258ad0: 0xc088e30  jal         func_2238C0
label_258ad4:
    if (ctx->pc == 0x258AD4u) {
        ctx->pc = 0x258AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AD0u;
        // 0x258ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258AD8u;
        goto label_258ad8;
    }
    ctx->pc = 0x258AD0u;
    SET_GPR_U32(ctx, 31, 0x258AD8u);
    ctx->pc = 0x258AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AD0u;
    // 0x258ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x258AD0u, 0x258AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AD8u;
label_258ad8:
    // 0x258ad8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_258adc:
    if (ctx->pc == 0x258ADCu) {
        ctx->pc = 0x258AE0u;
        goto label_258ae0;
    }
    ctx->pc = 0x258AD8u;
    {
        const bool branch_taken_0x258ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258ad8) {
            ctx->pc = 0x258AF8u;
            goto label_258af8;
        }
    }
    ctx->pc = 0x258AE0u;
label_258ae0:
    // 0x258ae0: 0xc0e4060  jal         func_390180
label_258ae4:
    if (ctx->pc == 0x258AE4u) {
        ctx->pc = 0x258AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AE0u;
        // 0x258ae4: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258AE8u;
        goto label_258ae8;
    }
    ctx->pc = 0x258AE0u;
    SET_GPR_U32(ctx, 31, 0x258AE8u);
    ctx->pc = 0x258AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AE0u;
    // 0x258ae4: 0x2624036c  addiu       $a0, $s1, 0x36C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 876));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x258AE0u, 0x258AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AE8u;
label_258ae8:
    // 0x258ae8: 0xc0e6ee8  jal         func_39BBA0
label_258aec:
    if (ctx->pc == 0x258AECu) {
        ctx->pc = 0x258AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AE8u;
        // 0x258aec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258AF0u;
        goto label_258af0;
    }
    ctx->pc = 0x258AE8u;
    SET_GPR_U32(ctx, 31, 0x258AF0u);
    ctx->pc = 0x258AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AE8u;
    // 0x258aec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BBA0u, 0x258AE8u, 0x258AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AF0u;
label_258af0:
    // 0x258af0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_258af4:
    if (ctx->pc == 0x258AF4u) {
        ctx->pc = 0x258AF8u;
        goto label_258af8;
    }
    ctx->pc = 0x258AF0u;
    {
        const bool branch_taken_0x258af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258af0) {
            ctx->pc = 0x258B00u;
            goto label_258b00;
        }
    }
    ctx->pc = 0x258AF8u;
label_258af8:
    // 0x258af8: 0xc08ba12  jal         func_22E848
label_258afc:
    if (ctx->pc == 0x258AFCu) {
        ctx->pc = 0x258AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258AF8u;
        // 0x258afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B00u;
        goto label_258b00;
    }
    ctx->pc = 0x258AF8u;
    SET_GPR_U32(ctx, 31, 0x258B00u);
    ctx->pc = 0x258AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258AF8u;
    // 0x258afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E848u, 0x258AF8u, 0x258B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B00u;
label_258b00:
    // 0x258b00: 0xc08a014  jal         func_228050
label_258b04:
    if (ctx->pc == 0x258B04u) {
        ctx->pc = 0x258B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B00u;
        // 0x258b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B08u;
        goto label_258b08;
    }
    ctx->pc = 0x258B00u;
    SET_GPR_U32(ctx, 31, 0x258B08u);
    ctx->pc = 0x258B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B00u;
    // 0x258b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228050u, 0x258B00u, 0x258B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B08u;
label_258b08:
    // 0x258b08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_258b0c:
    if (ctx->pc == 0x258B0Cu) {
        ctx->pc = 0x258B10u;
        goto label_258b10;
    }
    ctx->pc = 0x258B08u;
    {
        const bool branch_taken_0x258b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258b08) {
            ctx->pc = 0x258B18u;
            goto label_258b18;
        }
    }
    ctx->pc = 0x258B10u;
label_258b10:
    // 0x258b10: 0xc08b58a  jal         func_22D628
label_258b14:
    if (ctx->pc == 0x258B14u) {
        ctx->pc = 0x258B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B10u;
        // 0x258b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B18u;
        goto label_258b18;
    }
    ctx->pc = 0x258B10u;
    SET_GPR_U32(ctx, 31, 0x258B18u);
    ctx->pc = 0x258B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B10u;
    // 0x258b14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D628u, 0x258B10u, 0x258B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B18u;
label_258b18:
    // 0x258b18: 0x124000ae  beqz        $s2, . + 4 + (0xAE << 2)
label_258b1c:
    if (ctx->pc == 0x258B1Cu) {
        ctx->pc = 0x258B20u;
        goto label_258b20;
    }
    ctx->pc = 0x258B18u;
    {
        const bool branch_taken_0x258b18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x258b18) {
            ctx->pc = 0x258DD4u;
            goto label_258dd4;
        }
    }
    ctx->pc = 0x258B20u;
label_258b20:
    // 0x258b20: 0xc08a024  jal         func_228090
label_258b24:
    if (ctx->pc == 0x258B24u) {
        ctx->pc = 0x258B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B20u;
        // 0x258b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B28u;
        goto label_258b28;
    }
    ctx->pc = 0x258B20u;
    SET_GPR_U32(ctx, 31, 0x258B28u);
    ctx->pc = 0x258B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B20u;
    // 0x258b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228090u, 0x258B20u, 0x258B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B28u;
label_258b28:
    // 0x258b28: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_258b2c:
    if (ctx->pc == 0x258B2Cu) {
        ctx->pc = 0x258B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B28u;
        // 0x258b2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B30u;
        goto label_258b30;
    }
    ctx->pc = 0x258B28u;
    {
        const bool branch_taken_0x258b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B28u;
        // 0x258b2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b28) {
            ctx->pc = 0x258B64u;
            goto label_258b64;
        }
    }
    ctx->pc = 0x258B30u;
label_258b30:
    // 0x258b30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258b34:
    // 0x258b34: 0xc08b3ae  jal         func_22CEB8
label_258b38:
    if (ctx->pc == 0x258B38u) {
        ctx->pc = 0x258B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B34u;
        // 0x258b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B3Cu;
        goto label_258b3c;
    }
    ctx->pc = 0x258B34u;
    SET_GPR_U32(ctx, 31, 0x258B3Cu);
    ctx->pc = 0x258B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B34u;
    // 0x258b38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB8u, 0x258B34u, 0x258B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B3Cu;
label_258b3c:
    // 0x258b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258b40:
    // 0x258b40: 0xc08b2c0  jal         func_22CB00
label_258b44:
    if (ctx->pc == 0x258B44u) {
        ctx->pc = 0x258B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B40u;
        // 0x258b44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B48u;
        goto label_258b48;
    }
    ctx->pc = 0x258B40u;
    SET_GPR_U32(ctx, 31, 0x258B48u);
    ctx->pc = 0x258B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B40u;
    // 0x258b44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x258B40u, 0x258B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B48u;
label_258b48:
    // 0x258b48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258b4c:
    // 0x258b4c: 0xc0a0152  jal         func_280548
label_258b50:
    if (ctx->pc == 0x258B50u) {
        ctx->pc = 0x258B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B4Cu;
        // 0x258b50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B54u;
        goto label_258b54;
    }
    ctx->pc = 0x258B4Cu;
    SET_GPR_U32(ctx, 31, 0x258B54u);
    ctx->pc = 0x258B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B4Cu;
    // 0x258b50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x258B4Cu, 0x258B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B54u;
label_258b54:
    // 0x258b54: 0xc09a43c  jal         func_2690F0
label_258b58:
    if (ctx->pc == 0x258B58u) {
        ctx->pc = 0x258B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B54u;
        // 0x258b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B5Cu;
        goto label_258b5c;
    }
    ctx->pc = 0x258B54u;
    SET_GPR_U32(ctx, 31, 0x258B5Cu);
    ctx->pc = 0x258B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B54u;
    // 0x258b58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2690F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2690F0u, 0x258B54u, 0x258B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B5Cu;
label_258b5c:
    // 0x258b5c: 0x1000005d  b           . + 4 + (0x5D << 2)
label_258b60:
    if (ctx->pc == 0x258B60u) {
        ctx->pc = 0x258B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B5Cu;
        // 0x258b60: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B64u;
        goto label_258b64;
    }
    ctx->pc = 0x258B5Cu;
    {
        const bool branch_taken_0x258b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B5Cu;
        // 0x258b60: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b5c) {
            ctx->pc = 0x258CD4u;
            goto label_258cd4;
        }
    }
    ctx->pc = 0x258B64u;
label_258b64:
    // 0x258b64: 0xc08a01c  jal         func_228070
label_258b68:
    if (ctx->pc == 0x258B68u) {
        ctx->pc = 0x258B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B64u;
        // 0x258b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B6Cu;
        goto label_258b6c;
    }
    ctx->pc = 0x258B64u;
    SET_GPR_U32(ctx, 31, 0x258B6Cu);
    ctx->pc = 0x258B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B64u;
    // 0x258b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228070u, 0x258B64u, 0x258B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B6Cu;
label_258b6c:
    // 0x258b6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_258b70:
    if (ctx->pc == 0x258B70u) {
        ctx->pc = 0x258B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B6Cu;
        // 0x258b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B74u;
        goto label_258b74;
    }
    ctx->pc = 0x258B6Cu;
    {
        const bool branch_taken_0x258b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B6Cu;
        // 0x258b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258b6c) {
            ctx->pc = 0x258BA0u;
            goto label_258ba0;
        }
    }
    ctx->pc = 0x258B74u;
label_258b74:
    // 0x258b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258b78:
    // 0x258b78: 0xc08b3ae  jal         func_22CEB8
label_258b7c:
    if (ctx->pc == 0x258B7Cu) {
        ctx->pc = 0x258B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B78u;
        // 0x258b7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B80u;
        goto label_258b80;
    }
    ctx->pc = 0x258B78u;
    SET_GPR_U32(ctx, 31, 0x258B80u);
    ctx->pc = 0x258B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B78u;
    // 0x258b7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CEB8u, 0x258B78u, 0x258B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B80u;
label_258b80:
    // 0x258b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258b84:
    // 0x258b84: 0xc08b2c0  jal         func_22CB00
label_258b88:
    if (ctx->pc == 0x258B88u) {
        ctx->pc = 0x258B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B84u;
        // 0x258b88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B8Cu;
        goto label_258b8c;
    }
    ctx->pc = 0x258B84u;
    SET_GPR_U32(ctx, 31, 0x258B8Cu);
    ctx->pc = 0x258B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B84u;
    // 0x258b88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x258B84u, 0x258B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B8Cu;
label_258b8c:
    // 0x258b8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258b90:
    // 0x258b90: 0xc0a0152  jal         func_280548
label_258b94:
    if (ctx->pc == 0x258B94u) {
        ctx->pc = 0x258B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258B90u;
        // 0x258b94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258B98u;
        goto label_258b98;
    }
    ctx->pc = 0x258B90u;
    SET_GPR_U32(ctx, 31, 0x258B98u);
    ctx->pc = 0x258B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258B90u;
    // 0x258b94: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x258B90u, 0x258B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258B98u;
label_258b98:
    // 0x258b98: 0x10000047  b           . + 4 + (0x47 << 2)
label_258b9c:
    if (ctx->pc == 0x258B9Cu) {
        ctx->pc = 0x258BA0u;
        goto label_258ba0;
    }
    ctx->pc = 0x258B98u;
    {
        const bool branch_taken_0x258b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258b98) {
            ctx->pc = 0x258CB8u;
            goto label_258cb8;
        }
    }
    ctx->pc = 0x258BA0u;
label_258ba0:
    // 0x258ba0: 0xc088e38  jal         func_2238E0
label_258ba4:
    if (ctx->pc == 0x258BA4u) {
        ctx->pc = 0x258BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BA0u;
        // 0x258ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258BA8u;
        goto label_258ba8;
    }
    ctx->pc = 0x258BA0u;
    SET_GPR_U32(ctx, 31, 0x258BA8u);
    ctx->pc = 0x258BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BA0u;
    // 0x258ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x258BA0u, 0x258BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BA8u;
label_258ba8:
    // 0x258ba8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_258bac:
    if (ctx->pc == 0x258BACu) {
        ctx->pc = 0x258BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BA8u;
        // 0x258bac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258BB0u;
        goto label_258bb0;
    }
    ctx->pc = 0x258BA8u;
    {
        const bool branch_taken_0x258ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BA8u;
        // 0x258bac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ba8) {
            ctx->pc = 0x258BC8u;
            goto label_258bc8;
        }
    }
    ctx->pc = 0x258BB0u;
label_258bb0:
    // 0x258bb0: 0xc08b0e2  jal         func_22C388
label_258bb4:
    if (ctx->pc == 0x258BB4u) {
        ctx->pc = 0x258BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BB0u;
        // 0x258bb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258BB8u;
        goto label_258bb8;
    }
    ctx->pc = 0x258BB0u;
    SET_GPR_U32(ctx, 31, 0x258BB8u);
    ctx->pc = 0x258BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BB0u;
    // 0x258bb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x258BB0u, 0x258BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BB8u;
label_258bb8:
    // 0x258bb8: 0xc09a5ea  jal         func_2697A8
label_258bbc:
    if (ctx->pc == 0x258BBCu) {
        ctx->pc = 0x258BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BB8u;
        // 0x258bbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258BC0u;
        goto label_258bc0;
    }
    ctx->pc = 0x258BB8u;
    SET_GPR_U32(ctx, 31, 0x258BC0u);
    ctx->pc = 0x258BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BB8u;
    // 0x258bbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2697A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2697A8u, 0x258BB8u, 0x258BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BC0u;
label_258bc0:
    // 0x258bc0: 0x10000044  b           . + 4 + (0x44 << 2)
label_258bc4:
    if (ctx->pc == 0x258BC4u) {
        ctx->pc = 0x258BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BC0u;
        // 0x258bc4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258BC8u;
        goto label_258bc8;
    }
    ctx->pc = 0x258BC0u;
    {
        const bool branch_taken_0x258bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BC0u;
        // 0x258bc4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bc0) {
            ctx->pc = 0x258CD4u;
            goto label_258cd4;
        }
    }
    ctx->pc = 0x258BC8u;
label_258bc8:
    // 0x258bc8: 0xc088e40  jal         func_223900
label_258bcc:
    if (ctx->pc == 0x258BCCu) {
        ctx->pc = 0x258BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BC8u;
        // 0x258bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258BD0u;
        goto label_258bd0;
    }
    ctx->pc = 0x258BC8u;
    SET_GPR_U32(ctx, 31, 0x258BD0u);
    ctx->pc = 0x258BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BC8u;
    // 0x258bcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x258BC8u, 0x258BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BD0u;
label_258bd0:
    // 0x258bd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_258bd4:
    if (ctx->pc == 0x258BD4u) {
        ctx->pc = 0x258BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BD0u;
        // 0x258bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258BD8u;
        goto label_258bd8;
    }
    ctx->pc = 0x258BD0u;
    {
        const bool branch_taken_0x258bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BD0u;
        // 0x258bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bd0) {
            ctx->pc = 0x258BF4u;
            goto label_258bf4;
        }
    }
    ctx->pc = 0x258BD8u;
label_258bd8:
    // 0x258bd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x258bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258bdc:
    // 0x258bdc: 0xc08b0e2  jal         func_22C388
label_258be0:
    if (ctx->pc == 0x258BE0u) {
        ctx->pc = 0x258BE4u;
        goto label_258be4;
    }
    ctx->pc = 0x258BDCu;
    SET_GPR_U32(ctx, 31, 0x258BE4u);
    ctx->pc = 0x22C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C388u, 0x258BDCu, 0x258BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BE4u;
label_258be4:
    // 0x258be4: 0xc09a642  jal         func_269908
label_258be8:
    if (ctx->pc == 0x258BE8u) {
        ctx->pc = 0x258BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BE4u;
        // 0x258be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258BECu;
        goto label_258bec;
    }
    ctx->pc = 0x258BE4u;
    SET_GPR_U32(ctx, 31, 0x258BECu);
    ctx->pc = 0x258BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BE4u;
    // 0x258be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269908u, 0x258BE4u, 0x258BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BECu;
label_258bec:
    // 0x258bec: 0x10000039  b           . + 4 + (0x39 << 2)
label_258bf0:
    if (ctx->pc == 0x258BF0u) {
        ctx->pc = 0x258BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BECu;
        // 0x258bf0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258BF4u;
        goto label_258bf4;
    }
    ctx->pc = 0x258BECu;
    {
        const bool branch_taken_0x258bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BECu;
        // 0x258bf0: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bec) {
            ctx->pc = 0x258CD4u;
            goto label_258cd4;
        }
    }
    ctx->pc = 0x258BF4u;
label_258bf4:
    // 0x258bf4: 0xc08a046  jal         func_228118
label_258bf8:
    if (ctx->pc == 0x258BF8u) {
        ctx->pc = 0x258BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BF4u;
        // 0x258bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258BFCu;
        goto label_258bfc;
    }
    ctx->pc = 0x258BF4u;
    SET_GPR_U32(ctx, 31, 0x258BFCu);
    ctx->pc = 0x258BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258BF4u;
    // 0x258bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228118u, 0x258BF4u, 0x258BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258BFCu;
label_258bfc:
    // 0x258bfc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_258c00:
    if (ctx->pc == 0x258C00u) {
        ctx->pc = 0x258C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BFCu;
        // 0x258c00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C04u;
        goto label_258c04;
    }
    ctx->pc = 0x258BFCu;
    {
        const bool branch_taken_0x258bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258BFCu;
        // 0x258c00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258bfc) {
            ctx->pc = 0x258C18u;
            goto label_258c18;
        }
    }
    ctx->pc = 0x258C04u;
label_258c04:
    // 0x258c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258c08:
    // 0x258c08: 0xc08b47e  jal         func_22D1F8
label_258c0c:
    if (ctx->pc == 0x258C0Cu) {
        ctx->pc = 0x258C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C08u;
        // 0x258c0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C10u;
        goto label_258c10;
    }
    ctx->pc = 0x258C08u;
    SET_GPR_U32(ctx, 31, 0x258C10u);
    ctx->pc = 0x258C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C08u;
    // 0x258c0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D1F8u, 0x258C08u, 0x258C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C10u;
label_258c10:
    // 0x258c10: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_258c14:
    if (ctx->pc == 0x258C14u) {
        ctx->pc = 0x258C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C10u;
        // 0x258c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C18u;
        goto label_258c18;
    }
    ctx->pc = 0x258C10u;
    {
        const bool branch_taken_0x258c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C10u;
        // 0x258c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c10) {
            ctx->pc = 0x258BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258bd8;
        }
    }
    ctx->pc = 0x258C18u;
label_258c18:
    // 0x258c18: 0xc08a050  jal         func_228140
label_258c1c:
    if (ctx->pc == 0x258C1Cu) {
        ctx->pc = 0x258C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C18u;
        // 0x258c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C20u;
        goto label_258c20;
    }
    ctx->pc = 0x258C18u;
    SET_GPR_U32(ctx, 31, 0x258C20u);
    ctx->pc = 0x258C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C18u;
    // 0x258c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228140u, 0x258C18u, 0x258C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C20u;
label_258c20:
    // 0x258c20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_258c24:
    if (ctx->pc == 0x258C24u) {
        ctx->pc = 0x258C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C20u;
        // 0x258c24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C28u;
        goto label_258c28;
    }
    ctx->pc = 0x258C20u;
    {
        const bool branch_taken_0x258c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C20u;
        // 0x258c24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c20) {
            ctx->pc = 0x258C40u;
            goto label_258c40;
        }
    }
    ctx->pc = 0x258C28u;
label_258c28:
    // 0x258c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258c2c:
    // 0x258c2c: 0xc08b47e  jal         func_22D1F8
label_258c30:
    if (ctx->pc == 0x258C30u) {
        ctx->pc = 0x258C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C2Cu;
        // 0x258c30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C34u;
        goto label_258c34;
    }
    ctx->pc = 0x258C2Cu;
    SET_GPR_U32(ctx, 31, 0x258C34u);
    ctx->pc = 0x258C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C2Cu;
    // 0x258c30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D1F8u, 0x258C2Cu, 0x258C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C34u;
label_258c34:
    // 0x258c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258c38:
    // 0x258c38: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_258c3c:
    if (ctx->pc == 0x258C3Cu) {
        ctx->pc = 0x258C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C38u;
        // 0x258c3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C40u;
        goto label_258c40;
    }
    ctx->pc = 0x258C38u;
    {
        const bool branch_taken_0x258c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C38u;
        // 0x258c3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c38) {
            ctx->pc = 0x258BDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258bdc;
        }
    }
    ctx->pc = 0x258C40u;
label_258c40:
    // 0x258c40: 0xc088e48  jal         func_223920
label_258c44:
    if (ctx->pc == 0x258C44u) {
        ctx->pc = 0x258C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C40u;
        // 0x258c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C48u;
        goto label_258c48;
    }
    ctx->pc = 0x258C40u;
    SET_GPR_U32(ctx, 31, 0x258C48u);
    ctx->pc = 0x258C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C40u;
    // 0x258c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223920u, 0x258C40u, 0x258C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C48u;
label_258c48:
    // 0x258c48: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_258c4c:
    if (ctx->pc == 0x258C4Cu) {
        ctx->pc = 0x258C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C48u;
        // 0x258c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C50u;
        goto label_258c50;
    }
    ctx->pc = 0x258C48u;
    {
        const bool branch_taken_0x258c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C48u;
        // 0x258c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c48) {
            ctx->pc = 0x258C84u;
            goto label_258c84;
        }
    }
    ctx->pc = 0x258C50u;
label_258c50:
    // 0x258c50: 0xc0a0152  jal         func_280548
label_258c54:
    if (ctx->pc == 0x258C54u) {
        ctx->pc = 0x258C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C50u;
        // 0x258c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C58u;
        goto label_258c58;
    }
    ctx->pc = 0x258C50u;
    SET_GPR_U32(ctx, 31, 0x258C58u);
    ctx->pc = 0x258C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C50u;
    // 0x258c54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x258C50u, 0x258C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C58u;
label_258c58:
    // 0x258c58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258c5c:
    // 0x258c5c: 0xc08b2c0  jal         func_22CB00
label_258c60:
    if (ctx->pc == 0x258C60u) {
        ctx->pc = 0x258C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C5Cu;
        // 0x258c60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C64u;
        goto label_258c64;
    }
    ctx->pc = 0x258C5Cu;
    SET_GPR_U32(ctx, 31, 0x258C64u);
    ctx->pc = 0x258C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C5Cu;
    // 0x258c60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x258C5Cu, 0x258C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C64u;
label_258c64:
    // 0x258c64: 0xc088e58  jal         func_223960
label_258c68:
    if (ctx->pc == 0x258C68u) {
        ctx->pc = 0x258C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C64u;
        // 0x258c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C6Cu;
        goto label_258c6c;
    }
    ctx->pc = 0x258C64u;
    SET_GPR_U32(ctx, 31, 0x258C6Cu);
    ctx->pc = 0x258C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C64u;
    // 0x258c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x258C64u, 0x258C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C6Cu;
label_258c6c:
    // 0x258c6c: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_258c70:
    if (ctx->pc == 0x258C70u) {
        ctx->pc = 0x258C74u;
        goto label_258c74;
    }
    ctx->pc = 0x258C6Cu;
    {
        const bool branch_taken_0x258c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258c6c) {
            ctx->pc = 0x258B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258b54;
        }
    }
    ctx->pc = 0x258C74u;
label_258c74:
    // 0x258c74: 0xc09a494  jal         func_269250
label_258c78:
    if (ctx->pc == 0x258C78u) {
        ctx->pc = 0x258C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C74u;
        // 0x258c78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C7Cu;
        goto label_258c7c;
    }
    ctx->pc = 0x258C74u;
    SET_GPR_U32(ctx, 31, 0x258C7Cu);
    ctx->pc = 0x258C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C74u;
    // 0x258c78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269250u, 0x258C74u, 0x258C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C7Cu;
label_258c7c:
    // 0x258c7c: 0x10000015  b           . + 4 + (0x15 << 2)
label_258c80:
    if (ctx->pc == 0x258C80u) {
        ctx->pc = 0x258C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C7Cu;
        // 0x258c80: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C84u;
        goto label_258c84;
    }
    ctx->pc = 0x258C7Cu;
    {
        const bool branch_taken_0x258c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C7Cu;
        // 0x258c80: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c7c) {
            ctx->pc = 0x258CD4u;
            goto label_258cd4;
        }
    }
    ctx->pc = 0x258C84u;
label_258c84:
    // 0x258c84: 0xc088e60  jal         func_223980
label_258c88:
    if (ctx->pc == 0x258C88u) {
        ctx->pc = 0x258C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C84u;
        // 0x258c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C8Cu;
        goto label_258c8c;
    }
    ctx->pc = 0x258C84u;
    SET_GPR_U32(ctx, 31, 0x258C8Cu);
    ctx->pc = 0x258C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C84u;
    // 0x258c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x258C84u, 0x258C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C8Cu;
label_258c8c:
    // 0x258c8c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_258c90:
    if (ctx->pc == 0x258C90u) {
        ctx->pc = 0x258C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C8Cu;
        // 0x258c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C94u;
        goto label_258c94;
    }
    ctx->pc = 0x258C8Cu;
    {
        const bool branch_taken_0x258c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C8Cu;
        // 0x258c90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c8c) {
            ctx->pc = 0x258D6Cu;
            goto label_258d6c;
        }
    }
    ctx->pc = 0x258C94u;
label_258c94:
    // 0x258c94: 0xc08b2c0  jal         func_22CB00
label_258c98:
    if (ctx->pc == 0x258C98u) {
        ctx->pc = 0x258C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258C94u;
        // 0x258c98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258C9Cu;
        goto label_258c9c;
    }
    ctx->pc = 0x258C94u;
    SET_GPR_U32(ctx, 31, 0x258C9Cu);
    ctx->pc = 0x258C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258C94u;
    // 0x258c98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x258C94u, 0x258C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258C9Cu;
label_258c9c:
    // 0x258c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258ca0:
    // 0x258ca0: 0xc0a0152  jal         func_280548
label_258ca4:
    if (ctx->pc == 0x258CA4u) {
        ctx->pc = 0x258CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CA0u;
        // 0x258ca4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258CA8u;
        goto label_258ca8;
    }
    ctx->pc = 0x258CA0u;
    SET_GPR_U32(ctx, 31, 0x258CA8u);
    ctx->pc = 0x258CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258CA0u;
    // 0x258ca4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x258CA0u, 0x258CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258CA8u;
label_258ca8:
    // 0x258ca8: 0xc088e70  jal         func_2239C0
label_258cac:
    if (ctx->pc == 0x258CACu) {
        ctx->pc = 0x258CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CA8u;
        // 0x258cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258CB0u;
        goto label_258cb0;
    }
    ctx->pc = 0x258CA8u;
    SET_GPR_U32(ctx, 31, 0x258CB0u);
    ctx->pc = 0x258CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258CA8u;
    // 0x258cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x258CA8u, 0x258CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258CB0u;
label_258cb0:
    // 0x258cb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_258cb4:
    if (ctx->pc == 0x258CB4u) {
        ctx->pc = 0x258CB8u;
        goto label_258cb8;
    }
    ctx->pc = 0x258CB0u;
    {
        const bool branch_taken_0x258cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258cb0) {
            ctx->pc = 0x258CC8u;
            goto label_258cc8;
        }
    }
    ctx->pc = 0x258CB8u;
label_258cb8:
    // 0x258cb8: 0xc09a544  jal         func_269510
label_258cbc:
    if (ctx->pc == 0x258CBCu) {
        ctx->pc = 0x258CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CB8u;
        // 0x258cbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258CC0u;
        goto label_258cc0;
    }
    ctx->pc = 0x258CB8u;
    SET_GPR_U32(ctx, 31, 0x258CC0u);
    ctx->pc = 0x258CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258CB8u;
    // 0x258cbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269510u, 0x258CB8u, 0x258CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258CC0u;
label_258cc0:
    // 0x258cc0: 0x10000004  b           . + 4 + (0x4 << 2)
label_258cc4:
    if (ctx->pc == 0x258CC4u) {
        ctx->pc = 0x258CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CC0u;
        // 0x258cc4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258CC8u;
        goto label_258cc8;
    }
    ctx->pc = 0x258CC0u;
    {
        const bool branch_taken_0x258cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CC0u;
        // 0x258cc4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258cc0) {
            ctx->pc = 0x258CD4u;
            goto label_258cd4;
        }
    }
    ctx->pc = 0x258CC8u;
label_258cc8:
    // 0x258cc8: 0xc09a4ec  jal         func_2693B0
label_258ccc:
    if (ctx->pc == 0x258CCCu) {
        ctx->pc = 0x258CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CC8u;
        // 0x258ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258CD0u;
        goto label_258cd0;
    }
    ctx->pc = 0x258CC8u;
    SET_GPR_U32(ctx, 31, 0x258CD0u);
    ctx->pc = 0x258CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258CC8u;
    // 0x258ccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2693B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2693B0u, 0x258CC8u, 0x258CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258CD0u;
label_258cd0:
    // 0x258cd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x258cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258cd4:
    // 0x258cd4: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x258cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_258cd8:
    // 0x258cd8: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x258cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_258cdc:
    // 0x258cdc: 0x40f809  jalr        $v0
label_258ce0:
    if (ctx->pc == 0x258CE0u) {
        ctx->pc = 0x258CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CDCu;
        // 0x258ce0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258CE4u;
        goto label_258ce4;
    }
    ctx->pc = 0x258CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258CE4u);
        ctx->pc = 0x258CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CDCu;
        // 0x258ce0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258CDCu, 0x258CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258CE4u;
label_258ce4:
    // 0x258ce4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_258ce8:
    if (ctx->pc == 0x258CE8u) {
        ctx->pc = 0x258CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CE4u;
        // 0x258ce8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258CECu;
        goto label_258cec;
    }
    ctx->pc = 0x258CE4u;
    {
        const bool branch_taken_0x258ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CE4u;
        // 0x258ce8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ce4) {
            ctx->pc = 0x258DFCu;
            goto label_258dfc;
        }
    }
    ctx->pc = 0x258CECu;
label_258cec:
    // 0x258cec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x258cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_258cf0:
    // 0x258cf0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x258cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_258cf4:
    // 0x258cf4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x258cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_258cf8:
    // 0x258cf8: 0x40f809  jalr        $v0
label_258cfc:
    if (ctx->pc == 0x258CFCu) {
        ctx->pc = 0x258CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CF8u;
        // 0x258cfc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258D00u;
        goto label_258d00;
    }
    ctx->pc = 0x258CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258D00u);
        ctx->pc = 0x258CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258CF8u;
        // 0x258cfc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258CF8u, 0x258D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258D00u;
label_258d00:
    // 0x258d00: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_258d04:
    if (ctx->pc == 0x258D04u) {
        ctx->pc = 0x258D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D00u;
        // 0x258d04: 0x3403fffd  ori         $v1, $zero, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        ctx->pc = 0x258D08u;
        goto label_258d08;
    }
    ctx->pc = 0x258D00u;
    {
        const bool branch_taken_0x258d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D00u;
        // 0x258d04: 0x3403fffd  ori         $v1, $zero, 0xFFFD (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d00) {
            ctx->pc = 0x258DF8u;
            goto label_258df8;
        }
    }
    ctx->pc = 0x258D08u;
label_258d08:
    // 0x258d08: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x258d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_258d0c:
    // 0x258d0c: 0x8c857198  lw          $a1, 0x7198($a0)
    ctx->pc = 0x258d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 29080)));
label_258d10:
    // 0x258d10: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x258d10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_258d14:
    // 0x258d14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x258d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258d18:
    // 0x258d18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x258d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_258d1c:
    // 0x258d1c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x258d1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_258d20:
    // 0x258d20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_258d24:
    if (ctx->pc == 0x258D24u) {
        ctx->pc = 0x258D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D20u;
        // 0x258d24: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258D28u;
        goto label_258d28;
    }
    ctx->pc = 0x258D20u;
    {
        const bool branch_taken_0x258d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D20u;
        // 0x258d24: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d20) {
            ctx->pc = 0x258D30u;
            goto label_258d30;
        }
    }
    ctx->pc = 0x258D28u;
label_258d28:
    // 0x258d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258d2c:
    // 0x258d2c: 0xa4a20010  sh          $v0, 0x10($a1)
    ctx->pc = 0x258d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
label_258d30:
    // 0x258d30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x258d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_258d34:
    // 0x258d34: 0x94b00010  lhu         $s0, 0x10($a1)
    ctx->pc = 0x258d34u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_258d38:
    // 0x258d38: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x258d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_258d3c:
    // 0x258d3c: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x258d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_258d40:
    // 0x258d40: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x258d40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_258d44:
    // 0x258d44: 0x40f809  jalr        $v0
label_258d48:
    if (ctx->pc == 0x258D48u) {
        ctx->pc = 0x258D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D44u;
        // 0x258d48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258D4Cu;
        goto label_258d4c;
    }
    ctx->pc = 0x258D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258D4Cu);
        ctx->pc = 0x258D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D44u;
        // 0x258d48: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258D44u, 0x258D4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258D4Cu;
label_258d4c:
    // 0x258d4c: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x258d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_258d50:
    // 0x258d50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x258d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_258d54:
    // 0x258d54: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x258d54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_258d58:
    // 0x258d58: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x258d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_258d5c:
    // 0x258d5c: 0x40f809  jalr        $v0
label_258d60:
    if (ctx->pc == 0x258D60u) {
        ctx->pc = 0x258D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D5Cu;
        // 0x258d60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258D64u;
        goto label_258d64;
    }
    ctx->pc = 0x258D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258D64u);
        ctx->pc = 0x258D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D5Cu;
        // 0x258d60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258D5Cu, 0x258D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258D64u;
label_258d64:
    // 0x258d64: 0x10000024  b           . + 4 + (0x24 << 2)
label_258d68:
    if (ctx->pc == 0x258D68u) {
        ctx->pc = 0x258D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D64u;
        // 0x258d68: 0xa450003c  sh          $s0, 0x3C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258D6Cu;
        goto label_258d6c;
    }
    ctx->pc = 0x258D64u;
    {
        const bool branch_taken_0x258d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D64u;
        // 0x258d68: 0xa450003c  sh          $s0, 0x3C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d64) {
            ctx->pc = 0x258DF8u;
            goto label_258df8;
        }
    }
    ctx->pc = 0x258D6Cu;
label_258d6c:
    // 0x258d6c: 0xc088e78  jal         func_2239E0
label_258d70:
    if (ctx->pc == 0x258D70u) {
        ctx->pc = 0x258D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D6Cu;
        // 0x258d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258D74u;
        goto label_258d74;
    }
    ctx->pc = 0x258D6Cu;
    SET_GPR_U32(ctx, 31, 0x258D74u);
    ctx->pc = 0x258D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D6Cu;
    // 0x258d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x258D6Cu, 0x258D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D74u;
label_258d74:
    // 0x258d74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_258d78:
    if (ctx->pc == 0x258D78u) {
        ctx->pc = 0x258D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D74u;
        // 0x258d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258D7Cu;
        goto label_258d7c;
    }
    ctx->pc = 0x258D74u;
    {
        const bool branch_taken_0x258d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D74u;
        // 0x258d78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d74) {
            ctx->pc = 0x258D8Cu;
            goto label_258d8c;
        }
    }
    ctx->pc = 0x258D7Cu;
label_258d7c:
    // 0x258d7c: 0xc08af38  jal         func_22BCE0
label_258d80:
    if (ctx->pc == 0x258D80u) {
        ctx->pc = 0x258D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D7Cu;
        // 0x258d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258D84u;
        goto label_258d84;
    }
    ctx->pc = 0x258D7Cu;
    SET_GPR_U32(ctx, 31, 0x258D84u);
    ctx->pc = 0x258D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D7Cu;
    // 0x258d80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCE0u, 0x258D7Cu, 0x258D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D84u;
label_258d84:
    // 0x258d84: 0x1000000c  b           . + 4 + (0xC << 2)
label_258d88:
    if (ctx->pc == 0x258D88u) {
        ctx->pc = 0x258D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D84u;
        // 0x258d88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258D8Cu;
        goto label_258d8c;
    }
    ctx->pc = 0x258D84u;
    {
        const bool branch_taken_0x258d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D84u;
        // 0x258d88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258d84) {
            ctx->pc = 0x258DB8u;
            goto label_258db8;
        }
    }
    ctx->pc = 0x258D8Cu;
label_258d8c:
    // 0x258d8c: 0xc088e80  jal         func_223A00
label_258d90:
    if (ctx->pc == 0x258D90u) {
        ctx->pc = 0x258D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D8Cu;
        // 0x258d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258D94u;
        goto label_258d94;
    }
    ctx->pc = 0x258D8Cu;
    SET_GPR_U32(ctx, 31, 0x258D94u);
    ctx->pc = 0x258D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D8Cu;
    // 0x258d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A00u, 0x258D8Cu, 0x258D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D94u;
label_258d94:
    // 0x258d94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_258d98:
    if (ctx->pc == 0x258D98u) {
        ctx->pc = 0x258D9Cu;
        goto label_258d9c;
    }
    ctx->pc = 0x258D94u;
    {
        const bool branch_taken_0x258d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258d94) {
            ctx->pc = 0x258DD4u;
            goto label_258dd4;
        }
    }
    ctx->pc = 0x258D9Cu;
label_258d9c:
    // 0x258d9c: 0xc088e78  jal         func_2239E0
label_258da0:
    if (ctx->pc == 0x258DA0u) {
        ctx->pc = 0x258DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258D9Cu;
        // 0x258da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258DA4u;
        goto label_258da4;
    }
    ctx->pc = 0x258D9Cu;
    SET_GPR_U32(ctx, 31, 0x258DA4u);
    ctx->pc = 0x258DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258D9Cu;
    // 0x258da0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x258D9Cu, 0x258DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DA4u;
label_258da4:
    // 0x258da4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_258da8:
    if (ctx->pc == 0x258DA8u) {
        ctx->pc = 0x258DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DA4u;
        // 0x258da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258DACu;
        goto label_258dac;
    }
    ctx->pc = 0x258DA4u;
    {
        const bool branch_taken_0x258da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DA4u;
        // 0x258da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258da4) {
            ctx->pc = 0x258DB4u;
            goto label_258db4;
        }
    }
    ctx->pc = 0x258DACu;
label_258dac:
    // 0x258dac: 0xc08af38  jal         func_22BCE0
label_258db0:
    if (ctx->pc == 0x258DB0u) {
        ctx->pc = 0x258DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DACu;
        // 0x258db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258DB4u;
        goto label_258db4;
    }
    ctx->pc = 0x258DACu;
    SET_GPR_U32(ctx, 31, 0x258DB4u);
    ctx->pc = 0x258DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DACu;
    // 0x258db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BCE0u, 0x258DACu, 0x258DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DB4u;
label_258db4:
    // 0x258db4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x258db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258db8:
    // 0x258db8: 0xc08af70  jal         func_22BDC0
label_258dbc:
    if (ctx->pc == 0x258DBCu) {
        ctx->pc = 0x258DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DB8u;
        // 0x258dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258DC0u;
        goto label_258dc0;
    }
    ctx->pc = 0x258DB8u;
    SET_GPR_U32(ctx, 31, 0x258DC0u);
    ctx->pc = 0x258DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DB8u;
    // 0x258dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BDC0u, 0x258DB8u, 0x258DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DC0u;
label_258dc0:
    // 0x258dc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x258dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258dc4:
    // 0x258dc4: 0xc089974  jal         func_2265D0
label_258dc8:
    if (ctx->pc == 0x258DC8u) {
        ctx->pc = 0x258DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DC4u;
        // 0x258dc8: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258DCCu;
        goto label_258dcc;
    }
    ctx->pc = 0x258DC4u;
    SET_GPR_U32(ctx, 31, 0x258DCCu);
    ctx->pc = 0x258DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DC4u;
    // 0x258dc8: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x258DC4u, 0x258DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DCCu;
label_258dcc:
    // 0x258dcc: 0x1000000b  b           . + 4 + (0xB << 2)
label_258dd0:
    if (ctx->pc == 0x258DD0u) {
        ctx->pc = 0x258DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DCCu;
        // 0x258dd0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258DD4u;
        goto label_258dd4;
    }
    ctx->pc = 0x258DCCu;
    {
        const bool branch_taken_0x258dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DCCu;
        // 0x258dd0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258dcc) {
            ctx->pc = 0x258DFCu;
            goto label_258dfc;
        }
    }
    ctx->pc = 0x258DD4u;
label_258dd4:
    // 0x258dd4: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_258dd8:
    if (ctx->pc == 0x258DD8u) {
        ctx->pc = 0x258DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DD4u;
        // 0x258dd8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258DDCu;
        goto label_258ddc;
    }
    ctx->pc = 0x258DD4u;
    {
        const bool branch_taken_0x258dd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x258dd4) {
            ctx->pc = 0x258DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x258DD4u;
            // 0x258dd8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x258DFCu;
            goto label_258dfc;
        }
    }
    ctx->pc = 0x258DDCu;
label_258ddc:
    // 0x258ddc: 0xc088e78  jal         func_2239E0
label_258de0:
    if (ctx->pc == 0x258DE0u) {
        ctx->pc = 0x258DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DDCu;
        // 0x258de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258DE4u;
        goto label_258de4;
    }
    ctx->pc = 0x258DDCu;
    SET_GPR_U32(ctx, 31, 0x258DE4u);
    ctx->pc = 0x258DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DDCu;
    // 0x258de0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x258DDCu, 0x258DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DE4u;
label_258de4:
    // 0x258de4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_258de8:
    if (ctx->pc == 0x258DE8u) {
        ctx->pc = 0x258DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DE4u;
        // 0x258de8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258DECu;
        goto label_258dec;
    }
    ctx->pc = 0x258DE4u;
    {
        const bool branch_taken_0x258de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DE4u;
        // 0x258de8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258de4) {
            ctx->pc = 0x258DF8u;
            goto label_258df8;
        }
    }
    ctx->pc = 0x258DECu;
label_258dec:
    // 0x258dec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x258decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_258df0:
    // 0x258df0: 0xc08acca  jal         func_22B328
label_258df4:
    if (ctx->pc == 0x258DF4u) {
        ctx->pc = 0x258DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258DF0u;
        // 0x258df4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258DF8u;
        goto label_258df8;
    }
    ctx->pc = 0x258DF0u;
    SET_GPR_U32(ctx, 31, 0x258DF8u);
    ctx->pc = 0x258DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258DF0u;
    // 0x258df4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B328u, 0x258DF0u, 0x258DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258DF8u;
label_258df8:
    // 0x258df8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x258df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_258dfc:
    // 0x258dfc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x258dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_258e00:
    // 0x258e00: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x258e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_258e04:
    // 0x258e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_258e08:
    // 0x258e08: 0x3e00008  jr          $ra
label_258e0c:
    if (ctx->pc == 0x258E0Cu) {
        ctx->pc = 0x258E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E08u;
        // 0x258e0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258E10u;
        goto label_fallthrough_0x258e08;
    }
    ctx->pc = 0x258E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E08u;
        // 0x258e0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x258e08:
    ctx->pc = 0x258E10u;
}
