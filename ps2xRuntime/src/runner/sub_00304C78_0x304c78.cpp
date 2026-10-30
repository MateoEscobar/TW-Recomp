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

// Function: sub_00304C78
// Address: 0x304c78 - 0x304fa8
void sub_00304C78_0x304c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304C78_0x304c78");
#endif

    switch (ctx->pc) {
        case 0x304c78u: goto label_304c78;
        case 0x304c7cu: goto label_304c7c;
        case 0x304c80u: goto label_304c80;
        case 0x304c84u: goto label_304c84;
        case 0x304c88u: goto label_304c88;
        case 0x304c8cu: goto label_304c8c;
        case 0x304c90u: goto label_304c90;
        case 0x304c94u: goto label_304c94;
        case 0x304c98u: goto label_304c98;
        case 0x304c9cu: goto label_304c9c;
        case 0x304ca0u: goto label_304ca0;
        case 0x304ca4u: goto label_304ca4;
        case 0x304ca8u: goto label_304ca8;
        case 0x304cacu: goto label_304cac;
        case 0x304cb0u: goto label_304cb0;
        case 0x304cb4u: goto label_304cb4;
        case 0x304cb8u: goto label_304cb8;
        case 0x304cbcu: goto label_304cbc;
        case 0x304cc0u: goto label_304cc0;
        case 0x304cc4u: goto label_304cc4;
        case 0x304cc8u: goto label_304cc8;
        case 0x304cccu: goto label_304ccc;
        case 0x304cd0u: goto label_304cd0;
        case 0x304cd4u: goto label_304cd4;
        case 0x304cd8u: goto label_304cd8;
        case 0x304cdcu: goto label_304cdc;
        case 0x304ce0u: goto label_304ce0;
        case 0x304ce4u: goto label_304ce4;
        case 0x304ce8u: goto label_304ce8;
        case 0x304cecu: goto label_304cec;
        case 0x304cf0u: goto label_304cf0;
        case 0x304cf4u: goto label_304cf4;
        case 0x304cf8u: goto label_304cf8;
        case 0x304cfcu: goto label_304cfc;
        case 0x304d00u: goto label_304d00;
        case 0x304d04u: goto label_304d04;
        case 0x304d08u: goto label_304d08;
        case 0x304d0cu: goto label_304d0c;
        case 0x304d10u: goto label_304d10;
        case 0x304d14u: goto label_304d14;
        case 0x304d18u: goto label_304d18;
        case 0x304d1cu: goto label_304d1c;
        case 0x304d20u: goto label_304d20;
        case 0x304d24u: goto label_304d24;
        case 0x304d28u: goto label_304d28;
        case 0x304d2cu: goto label_304d2c;
        case 0x304d30u: goto label_304d30;
        case 0x304d34u: goto label_304d34;
        case 0x304d38u: goto label_304d38;
        case 0x304d3cu: goto label_304d3c;
        case 0x304d40u: goto label_304d40;
        case 0x304d44u: goto label_304d44;
        case 0x304d48u: goto label_304d48;
        case 0x304d4cu: goto label_304d4c;
        case 0x304d50u: goto label_304d50;
        case 0x304d54u: goto label_304d54;
        case 0x304d58u: goto label_304d58;
        case 0x304d5cu: goto label_304d5c;
        case 0x304d60u: goto label_304d60;
        case 0x304d64u: goto label_304d64;
        case 0x304d68u: goto label_304d68;
        case 0x304d6cu: goto label_304d6c;
        case 0x304d70u: goto label_304d70;
        case 0x304d74u: goto label_304d74;
        case 0x304d78u: goto label_304d78;
        case 0x304d7cu: goto label_304d7c;
        case 0x304d80u: goto label_304d80;
        case 0x304d84u: goto label_304d84;
        case 0x304d88u: goto label_304d88;
        case 0x304d8cu: goto label_304d8c;
        case 0x304d90u: goto label_304d90;
        case 0x304d94u: goto label_304d94;
        case 0x304d98u: goto label_304d98;
        case 0x304d9cu: goto label_304d9c;
        case 0x304da0u: goto label_304da0;
        case 0x304da4u: goto label_304da4;
        case 0x304da8u: goto label_304da8;
        case 0x304dacu: goto label_304dac;
        case 0x304db0u: goto label_304db0;
        case 0x304db4u: goto label_304db4;
        case 0x304db8u: goto label_304db8;
        case 0x304dbcu: goto label_304dbc;
        case 0x304dc0u: goto label_304dc0;
        case 0x304dc4u: goto label_304dc4;
        case 0x304dc8u: goto label_304dc8;
        case 0x304dccu: goto label_304dcc;
        case 0x304dd0u: goto label_304dd0;
        case 0x304dd4u: goto label_304dd4;
        case 0x304dd8u: goto label_304dd8;
        case 0x304ddcu: goto label_304ddc;
        case 0x304de0u: goto label_304de0;
        case 0x304de4u: goto label_304de4;
        case 0x304de8u: goto label_304de8;
        case 0x304decu: goto label_304dec;
        case 0x304df0u: goto label_304df0;
        case 0x304df4u: goto label_304df4;
        case 0x304df8u: goto label_304df8;
        case 0x304dfcu: goto label_304dfc;
        case 0x304e00u: goto label_304e00;
        case 0x304e04u: goto label_304e04;
        case 0x304e08u: goto label_304e08;
        case 0x304e0cu: goto label_304e0c;
        case 0x304e10u: goto label_304e10;
        case 0x304e14u: goto label_304e14;
        case 0x304e18u: goto label_304e18;
        case 0x304e1cu: goto label_304e1c;
        case 0x304e20u: goto label_304e20;
        case 0x304e24u: goto label_304e24;
        case 0x304e28u: goto label_304e28;
        case 0x304e2cu: goto label_304e2c;
        case 0x304e30u: goto label_304e30;
        case 0x304e34u: goto label_304e34;
        case 0x304e38u: goto label_304e38;
        case 0x304e3cu: goto label_304e3c;
        case 0x304e40u: goto label_304e40;
        case 0x304e44u: goto label_304e44;
        case 0x304e48u: goto label_304e48;
        case 0x304e4cu: goto label_304e4c;
        case 0x304e50u: goto label_304e50;
        case 0x304e54u: goto label_304e54;
        case 0x304e58u: goto label_304e58;
        case 0x304e5cu: goto label_304e5c;
        case 0x304e60u: goto label_304e60;
        case 0x304e64u: goto label_304e64;
        case 0x304e68u: goto label_304e68;
        case 0x304e6cu: goto label_304e6c;
        case 0x304e70u: goto label_304e70;
        case 0x304e74u: goto label_304e74;
        case 0x304e78u: goto label_304e78;
        case 0x304e7cu: goto label_304e7c;
        case 0x304e80u: goto label_304e80;
        case 0x304e84u: goto label_304e84;
        case 0x304e88u: goto label_304e88;
        case 0x304e8cu: goto label_304e8c;
        case 0x304e90u: goto label_304e90;
        case 0x304e94u: goto label_304e94;
        case 0x304e98u: goto label_304e98;
        case 0x304e9cu: goto label_304e9c;
        case 0x304ea0u: goto label_304ea0;
        case 0x304ea4u: goto label_304ea4;
        case 0x304ea8u: goto label_304ea8;
        case 0x304eacu: goto label_304eac;
        case 0x304eb0u: goto label_304eb0;
        case 0x304eb4u: goto label_304eb4;
        case 0x304eb8u: goto label_304eb8;
        case 0x304ebcu: goto label_304ebc;
        case 0x304ec0u: goto label_304ec0;
        case 0x304ec4u: goto label_304ec4;
        case 0x304ec8u: goto label_304ec8;
        case 0x304eccu: goto label_304ecc;
        case 0x304ed0u: goto label_304ed0;
        case 0x304ed4u: goto label_304ed4;
        case 0x304ed8u: goto label_304ed8;
        case 0x304edcu: goto label_304edc;
        case 0x304ee0u: goto label_304ee0;
        case 0x304ee4u: goto label_304ee4;
        case 0x304ee8u: goto label_304ee8;
        case 0x304eecu: goto label_304eec;
        case 0x304ef0u: goto label_304ef0;
        case 0x304ef4u: goto label_304ef4;
        case 0x304ef8u: goto label_304ef8;
        case 0x304efcu: goto label_304efc;
        case 0x304f00u: goto label_304f00;
        case 0x304f04u: goto label_304f04;
        case 0x304f08u: goto label_304f08;
        case 0x304f0cu: goto label_304f0c;
        case 0x304f10u: goto label_304f10;
        case 0x304f14u: goto label_304f14;
        case 0x304f18u: goto label_304f18;
        case 0x304f1cu: goto label_304f1c;
        case 0x304f20u: goto label_304f20;
        case 0x304f24u: goto label_304f24;
        case 0x304f28u: goto label_304f28;
        case 0x304f2cu: goto label_304f2c;
        case 0x304f30u: goto label_304f30;
        case 0x304f34u: goto label_304f34;
        case 0x304f38u: goto label_304f38;
        case 0x304f3cu: goto label_304f3c;
        case 0x304f40u: goto label_304f40;
        case 0x304f44u: goto label_304f44;
        case 0x304f48u: goto label_304f48;
        case 0x304f4cu: goto label_304f4c;
        case 0x304f50u: goto label_304f50;
        case 0x304f54u: goto label_304f54;
        case 0x304f58u: goto label_304f58;
        case 0x304f5cu: goto label_304f5c;
        case 0x304f60u: goto label_304f60;
        case 0x304f64u: goto label_304f64;
        case 0x304f68u: goto label_304f68;
        case 0x304f6cu: goto label_304f6c;
        case 0x304f70u: goto label_304f70;
        case 0x304f74u: goto label_304f74;
        case 0x304f78u: goto label_304f78;
        case 0x304f7cu: goto label_304f7c;
        case 0x304f80u: goto label_304f80;
        case 0x304f84u: goto label_304f84;
        case 0x304f88u: goto label_304f88;
        case 0x304f8cu: goto label_304f8c;
        case 0x304f90u: goto label_304f90;
        case 0x304f94u: goto label_304f94;
        case 0x304f98u: goto label_304f98;
        case 0x304f9cu: goto label_304f9c;
        case 0x304fa0u: goto label_304fa0;
        case 0x304fa4u: goto label_304fa4;
        default: break;
    }

    ctx->pc = 0x304c78u;

label_304c78:
    // 0x304c78: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x304c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_304c7c:
    // 0x304c7c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x304c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_304c80:
    // 0x304c80: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x304c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_304c84:
    // 0x304c84: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x304c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_304c88:
    // 0x304c88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x304c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304c8c:
    // 0x304c8c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x304c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_304c90:
    // 0x304c90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x304c90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_304c94:
    // 0x304c94: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x304c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_304c98:
    // 0x304c98: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x304c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_304c9c:
    // 0x304c9c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x304c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_304ca0:
    // 0x304ca0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x304ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_304ca4:
    // 0x304ca4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x304ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_304ca8:
    // 0x304ca8: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x304ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_304cac:
    // 0x304cac: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x304cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_304cb0:
    // 0x304cb0: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x304cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
label_304cb4:
    // 0x304cb4: 0xc0a44f0  jal         func_2913C0
label_304cb8:
    if (ctx->pc == 0x304CB8u) {
        ctx->pc = 0x304CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CB4u;
        // 0x304cb8: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304CBCu;
        goto label_304cbc;
    }
    ctx->pc = 0x304CB4u;
    SET_GPR_U32(ctx, 31, 0x304CBCu);
    ctx->pc = 0x304CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CB4u;
    // 0x304cb8: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2913C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2913C0u, 0x304CB4u, 0x304CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CBCu;
label_304cbc:
    // 0x304cbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x304cbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304cc0:
    // 0x304cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304cc4:
    // 0x304cc4: 0x546200ad  bnel        $v1, $v0, . + 4 + (0xAD << 2)
label_304cc8:
    if (ctx->pc == 0x304CC8u) {
        ctx->pc = 0x304CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CC4u;
        // 0x304cc8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304CCCu;
        goto label_304ccc;
    }
    ctx->pc = 0x304CC4u;
    {
        const bool branch_taken_0x304cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x304cc4) {
            ctx->pc = 0x304CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304CC4u;
            // 0x304cc8: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304F7Cu;
            goto label_304f7c;
        }
    }
    ctx->pc = 0x304CCCu;
label_304ccc:
    // 0x304ccc: 0x5603000b  bnel        $s0, $v1, . + 4 + (0xB << 2)
label_304cd0:
    if (ctx->pc == 0x304CD0u) {
        ctx->pc = 0x304CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CCCu;
        // 0x304cd0: 0x8e860004  lw          $a2, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304CD4u;
        goto label_304cd4;
    }
    ctx->pc = 0x304CCCu;
    {
        const bool branch_taken_0x304ccc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x304ccc) {
            ctx->pc = 0x304CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304CCCu;
            // 0x304cd0: 0x8e860004  lw          $a2, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304CFCu;
            goto label_304cfc;
        }
    }
    ctx->pc = 0x304CD4u;
label_304cd4:
    // 0x304cd4: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_304cd8:
    if (ctx->pc == 0x304CD8u) {
        ctx->pc = 0x304CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CD4u;
        // 0x304cd8: 0x8e860004  lw          $a2, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304CDCu;
        goto label_304cdc;
    }
    ctx->pc = 0x304CD4u;
    {
        const bool branch_taken_0x304cd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x304cd4) {
            ctx->pc = 0x304CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304CD4u;
            // 0x304cd8: 0x8e860004  lw          $a2, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304CFCu;
            goto label_304cfc;
        }
    }
    ctx->pc = 0x304CDCu;
label_304cdc:
    // 0x304cdc: 0xc087502  jal         func_21D408
label_304ce0:
    if (ctx->pc == 0x304CE0u) {
        ctx->pc = 0x304CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CDCu;
        // 0x304ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304CE4u;
        goto label_304ce4;
    }
    ctx->pc = 0x304CDCu;
    SET_GPR_U32(ctx, 31, 0x304CE4u);
    ctx->pc = 0x304CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CDCu;
    // 0x304ce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x304CDCu, 0x304CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CE4u;
label_304ce4:
    // 0x304ce4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x304ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304ce8:
    // 0x304ce8: 0xc0a404e  jal         func_290138
label_304cec:
    if (ctx->pc == 0x304CECu) {
        ctx->pc = 0x304CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CE8u;
        // 0x304cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304CF0u;
        goto label_304cf0;
    }
    ctx->pc = 0x304CE8u;
    SET_GPR_U32(ctx, 31, 0x304CF0u);
    ctx->pc = 0x304CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304CE8u;
    // 0x304cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x304CE8u, 0x304CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304CF0u;
label_304cf0:
    // 0x304cf0: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_304cf4:
    if (ctx->pc == 0x304CF4u) {
        ctx->pc = 0x304CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CF0u;
        // 0x304cf4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304CF8u;
        goto label_304cf8;
    }
    ctx->pc = 0x304CF0u;
    {
        const bool branch_taken_0x304cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304CF0u;
        // 0x304cf4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304cf0) {
            ctx->pc = 0x304F7Cu;
            goto label_304f7c;
        }
    }
    ctx->pc = 0x304CF8u;
label_304cf8:
    // 0x304cf8: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x304cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_304cfc:
    // 0x304cfc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x304cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_304d00:
    // 0x304d00: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x304d00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304d04:
    // 0x304d04: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x304d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_304d08:
    // 0x304d08: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x304d08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_304d0c:
    // 0x304d0c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x304d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_304d10:
    // 0x304d10: 0x60f809  jalr        $v1
label_304d14:
    if (ctx->pc == 0x304D14u) {
        ctx->pc = 0x304D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D10u;
        // 0x304d14: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304D18u;
        goto label_304d18;
    }
    ctx->pc = 0x304D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x304D18u);
        ctx->pc = 0x304D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D10u;
        // 0x304d14: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304D10u, 0x304D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304D18u;
label_304d18:
    // 0x304d18: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x304d18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_304d1c:
    // 0x304d1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x304d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304d20:
    // 0x304d20: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x304d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_304d24:
    // 0x304d24: 0xc0a3658  jal         func_28D960
label_304d28:
    if (ctx->pc == 0x304D28u) {
        ctx->pc = 0x304D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D24u;
        // 0x304d28: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304D2Cu;
        goto label_304d2c;
    }
    ctx->pc = 0x304D24u;
    SET_GPR_U32(ctx, 31, 0x304D2Cu);
    ctx->pc = 0x304D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D24u;
    // 0x304d28: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x304D24u, 0x304D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D2Cu;
label_304d2c:
    // 0x304d2c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x304d2cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_304d30:
    // 0x304d30: 0x2b7c2  srl         $s6, $v0, 31
    ctx->pc = 0x304d30u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_304d34:
    // 0x304d34: 0x56c0000a  bnel        $s6, $zero, . + 4 + (0xA << 2)
label_304d38:
    if (ctx->pc == 0x304D38u) {
        ctx->pc = 0x304D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D34u;
        // 0x304d38: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304D3Cu;
        goto label_304d3c;
    }
    ctx->pc = 0x304D34u;
    {
        const bool branch_taken_0x304d34 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x304d34) {
            ctx->pc = 0x304D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304D34u;
            // 0x304d38: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304D60u;
            goto label_304d60;
        }
    }
    ctx->pc = 0x304D3Cu;
label_304d3c:
    // 0x304d3c: 0xc0a51a0  jal         func_294680
label_304d40:
    if (ctx->pc == 0x304D40u) {
        ctx->pc = 0x304D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D3Cu;
        // 0x304d40: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304D44u;
        goto label_304d44;
    }
    ctx->pc = 0x304D3Cu;
    SET_GPR_U32(ctx, 31, 0x304D44u);
    ctx->pc = 0x304D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D3Cu;
    // 0x304d40: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294680u, 0x304D3Cu, 0x304D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D44u;
label_304d44:
    // 0x304d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_304d48:
    // 0x304d48: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x304d48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_304d4c:
    // 0x304d4c: 0xc0a785a  jal         func_29E168
label_304d50:
    if (ctx->pc == 0x304D50u) {
        ctx->pc = 0x304D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D4Cu;
        // 0x304d50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304D54u;
        goto label_304d54;
    }
    ctx->pc = 0x304D4Cu;
    SET_GPR_U32(ctx, 31, 0x304D54u);
    ctx->pc = 0x304D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304D4Cu;
    // 0x304d50: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E168u, 0x304D4Cu, 0x304D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304D54u;
label_304d54:
    // 0x304d54: 0x10570089  beq         $v0, $s7, . + 4 + (0x89 << 2)
label_304d58:
    if (ctx->pc == 0x304D58u) {
        ctx->pc = 0x304D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D54u;
        // 0x304d58: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304D5Cu;
        goto label_304d5c;
    }
    ctx->pc = 0x304D54u;
    {
        const bool branch_taken_0x304d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x304D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D54u;
        // 0x304d58: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d54) {
            ctx->pc = 0x304F7Cu;
            goto label_304f7c;
        }
    }
    ctx->pc = 0x304D5Cu;
label_304d5c:
    // 0x304d5c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x304d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304d60:
    // 0x304d60: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x304d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_304d64:
    // 0x304d64: 0x24704b00  addiu       $s0, $v1, 0x4B00
    ctx->pc = 0x304d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_304d68:
    // 0x304d68: 0x84820092  lh          $v0, 0x92($a0)
    ctx->pc = 0x304d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_304d6c:
    // 0x304d6c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x304d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_304d70:
    // 0x304d70: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x304d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_304d74:
    // 0x304d74: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x304d74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_304d78:
    // 0x304d78: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x304d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_304d7c:
    // 0x304d7c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_304d80:
    if (ctx->pc == 0x304D80u) {
        ctx->pc = 0x304D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D7Cu;
        // 0x304d80: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304D84u;
        goto label_304d84;
    }
    ctx->pc = 0x304D7Cu;
    {
        const bool branch_taken_0x304d7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x304D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304D7Cu;
        // 0x304d80: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d7c) {
            ctx->pc = 0x304D98u;
            goto label_304d98;
        }
    }
    ctx->pc = 0x304D84u;
label_304d84:
    // 0x304d84: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x304d84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_304d88:
    // 0x304d88: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x304d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_304d8c:
    // 0x304d8c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x304d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_304d90:
    // 0x304d90: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x304d90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_304d94:
    // 0x304d94: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x304d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_304d98:
    // 0x304d98: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x304d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_304d9c:
    // 0x304d9c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x304d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_304da0:
    // 0x304da0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x304da0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_304da4:
    // 0x304da4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x304da4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_304da8:
    // 0x304da8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x304da8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_304dac:
    // 0x304dac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x304dacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_304db0:
    // 0x304db0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x304db0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_304db4:
    // 0x304db4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x304db4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_304db8:
    // 0x304db8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x304db8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_304dbc:
    // 0x304dbc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x304dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_304dc0:
    // 0x304dc0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x304dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_304dc4:
    // 0x304dc4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x304dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_304dc8:
    // 0x304dc8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x304dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_304dcc:
    // 0x304dcc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x304dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_304dd0:
    // 0x304dd0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x304dd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_304dd4:
    // 0x304dd4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x304dd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_304dd8:
    // 0x304dd8: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x304dd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_304ddc:
    // 0x304ddc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x304ddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_304de0:
    // 0x304de0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x304de0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_304de4:
    // 0x304de4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x304de4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_304de8:
    // 0x304de8: 0x4a0003bf  vwaitq
    ctx->pc = 0x304de8u;
    // VWAITQ (Q already resolved in this runtime)
label_304dec:
    // 0x304dec: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x304decu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_304df0:
    // 0x304df0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x304df0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_304df4:
    // 0x304df4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x304df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_304df8:
    // 0x304df8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x304df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_304dfc:
    // 0x304dfc: 0xc094ab8  jal         func_252AE0
label_304e00:
    if (ctx->pc == 0x304E00u) {
        ctx->pc = 0x304E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DFCu;
        // 0x304e00: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304E04u;
        goto label_304e04;
    }
    ctx->pc = 0x304DFCu;
    SET_GPR_U32(ctx, 31, 0x304E04u);
    ctx->pc = 0x304E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304DFCu;
    // 0x304e00: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252AE0u, 0x304DFCu, 0x304E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E04u;
label_304e04:
    // 0x304e04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_304e08:
    if (ctx->pc == 0x304E08u) {
        ctx->pc = 0x304E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E04u;
        // 0x304e08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304E0Cu;
        goto label_304e0c;
    }
    ctx->pc = 0x304E04u;
    {
        const bool branch_taken_0x304e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E04u;
        // 0x304e08: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e04) {
            ctx->pc = 0x304E3Cu;
            goto label_304e3c;
        }
    }
    ctx->pc = 0x304E0Cu;
label_304e0c:
    // 0x304e0c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x304e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_304e10:
    // 0x304e10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x304e10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304e14:
    // 0x304e14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x304e14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304e18:
    // 0x304e18: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x304e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_304e1c:
    // 0x304e1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x304e1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304e20:
    // 0x304e20: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x304e20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_304e24:
    // 0x304e24: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x304e24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_304e28:
    // 0x304e28: 0xc09381e  jal         func_24E078
label_304e2c:
    if (ctx->pc == 0x304E2Cu) {
        ctx->pc = 0x304E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E28u;
        // 0x304e2c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304E30u;
        goto label_304e30;
    }
    ctx->pc = 0x304E28u;
    SET_GPR_U32(ctx, 31, 0x304E30u);
    ctx->pc = 0x304E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E28u;
    // 0x304e2c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x304E28u, 0x304E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E30u;
label_304e30:
    // 0x304e30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x304e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_304e34:
    // 0x304e34: 0x10000003  b           . + 4 + (0x3 << 2)
label_304e38:
    if (ctx->pc == 0x304E38u) {
        ctx->pc = 0x304E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E34u;
        // 0x304e38: 0x2b80a  movz        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304E3Cu;
        goto label_304e3c;
    }
    ctx->pc = 0x304E34u;
    {
        const bool branch_taken_0x304e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E34u;
        // 0x304e38: 0x2b80a  movz        $s7, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e34) {
            ctx->pc = 0x304E44u;
            goto label_304e44;
        }
    }
    ctx->pc = 0x304E3Cu;
label_304e3c:
    // 0x304e3c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x304e3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_304e40:
    // 0x304e40: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x304e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_304e44:
    // 0x304e44: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_304e48:
    if (ctx->pc == 0x304E48u) {
        ctx->pc = 0x304E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E44u;
        // 0x304e48: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304E4Cu;
        goto label_304e4c;
    }
    ctx->pc = 0x304E44u;
    {
        const bool branch_taken_0x304e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E44u;
        // 0x304e48: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e44) {
            ctx->pc = 0x304E68u;
            goto label_304e68;
        }
    }
    ctx->pc = 0x304E4Cu;
label_304e4c:
    // 0x304e4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x304e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_304e50:
    // 0x304e50: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x304e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_304e54:
    // 0x304e54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x304e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_304e58:
    // 0x304e58: 0x40f809  jalr        $v0
label_304e5c:
    if (ctx->pc == 0x304E5Cu) {
        ctx->pc = 0x304E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E58u;
        // 0x304e5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304E60u;
        goto label_304e60;
    }
    ctx->pc = 0x304E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304E60u);
        ctx->pc = 0x304E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E58u;
        // 0x304e5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304E58u, 0x304E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304E60u;
label_304e60:
    // 0x304e60: 0x10000002  b           . + 4 + (0x2 << 2)
label_304e64:
    if (ctx->pc == 0x304E64u) {
        ctx->pc = 0x304E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E60u;
        // 0x304e64: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304E68u;
        goto label_304e68;
    }
    ctx->pc = 0x304E60u;
    {
        const bool branch_taken_0x304e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E60u;
        // 0x304e64: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e60) {
            ctx->pc = 0x304E6Cu;
            goto label_304e6c;
        }
    }
    ctx->pc = 0x304E68u;
label_304e68:
    // 0x304e68: 0x8c53bd30  lw          $s3, -0x42D0($v0)
    ctx->pc = 0x304e68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_304e6c:
    // 0x304e6c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x304e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304e70:
    // 0x304e70: 0x56d10011  bnel        $s6, $s1, . + 4 + (0x11 << 2)
label_304e74:
    if (ctx->pc == 0x304E74u) {
        ctx->pc = 0x304E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E70u;
        // 0x304e74: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304E78u;
        goto label_304e78;
    }
    ctx->pc = 0x304E70u;
    {
        const bool branch_taken_0x304e70 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 17));
        if (branch_taken_0x304e70) {
            ctx->pc = 0x304E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304E70u;
            // 0x304e74: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304EB8u;
            goto label_304eb8;
        }
    }
    ctx->pc = 0x304E78u;
label_304e78:
    // 0x304e78: 0xc0a4e54  jal         func_293950
label_304e7c:
    if (ctx->pc == 0x304E7Cu) {
        ctx->pc = 0x304E80u;
        goto label_304e80;
    }
    ctx->pc = 0x304E78u;
    SET_GPR_U32(ctx, 31, 0x304E80u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x304E78u, 0x304E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304E80u;
label_304e80:
    // 0x304e80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x304e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304e84:
    // 0x304e84: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_304e88:
    if (ctx->pc == 0x304E88u) {
        ctx->pc = 0x304E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E84u;
        // 0x304e88: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304E8Cu;
        goto label_304e8c;
    }
    ctx->pc = 0x304E84u;
    {
        const bool branch_taken_0x304e84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E84u;
        // 0x304e88: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e84) {
            ctx->pc = 0x304EA4u;
            goto label_304ea4;
        }
    }
    ctx->pc = 0x304E8Cu;
label_304e8c:
    // 0x304e8c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x304e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_304e90:
    // 0x304e90: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x304e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_304e94:
    // 0x304e94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_304e98:
    // 0x304e98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x304e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304e9c:
    // 0x304e9c: 0xc0b6138  jal         func_2D84E0
label_304ea0:
    if (ctx->pc == 0x304EA0u) {
        ctx->pc = 0x304EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E9Cu;
        // 0x304ea0: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304EA4u;
        goto label_304ea4;
    }
    ctx->pc = 0x304E9Cu;
    SET_GPR_U32(ctx, 31, 0x304EA4u);
    ctx->pc = 0x304EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E9Cu;
    // 0x304ea0: 0x3508ffff  ori         $t0, $t0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D84E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D84E0u, 0x304E9Cu, 0x304EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304EA4u;
label_304ea4:
    // 0x304ea4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x304ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304ea8:
    // 0x304ea8: 0xc0a35d6  jal         func_28D758
label_304eac:
    if (ctx->pc == 0x304EACu) {
        ctx->pc = 0x304EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EA8u;
        // 0x304eac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304EB0u;
        goto label_304eb0;
    }
    ctx->pc = 0x304EA8u;
    SET_GPR_U32(ctx, 31, 0x304EB0u);
    ctx->pc = 0x304EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304EA8u;
    // 0x304eac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x304EA8u, 0x304EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304EB0u;
label_304eb0:
    // 0x304eb0: 0x10000032  b           . + 4 + (0x32 << 2)
label_304eb4:
    if (ctx->pc == 0x304EB4u) {
        ctx->pc = 0x304EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EB0u;
        // 0x304eb4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304EB8u;
        goto label_304eb8;
    }
    ctx->pc = 0x304EB0u;
    {
        const bool branch_taken_0x304eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EB0u;
        // 0x304eb4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304eb0) {
            ctx->pc = 0x304F7Cu;
            goto label_304f7c;
        }
    }
    ctx->pc = 0x304EB8u;
label_304eb8:
    // 0x304eb8: 0xc0e2612  jal         func_389848
label_304ebc:
    if (ctx->pc == 0x304EBCu) {
        ctx->pc = 0x304EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EB8u;
        // 0x304ebc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304EC0u;
        goto label_304ec0;
    }
    ctx->pc = 0x304EB8u;
    SET_GPR_U32(ctx, 31, 0x304EC0u);
    ctx->pc = 0x304EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304EB8u;
    // 0x304ebc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x304EB8u, 0x304EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304EC0u;
label_304ec0:
    // 0x304ec0: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x304ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_304ec4:
    // 0x304ec4: 0xc0e2612  jal         func_389848
label_304ec8:
    if (ctx->pc == 0x304EC8u) {
        ctx->pc = 0x304EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EC4u;
        // 0x304ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304ECCu;
        goto label_304ecc;
    }
    ctx->pc = 0x304EC4u;
    SET_GPR_U32(ctx, 31, 0x304ECCu);
    ctx->pc = 0x304EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304EC4u;
    // 0x304ec8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x304EC4u, 0x304ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304ECCu;
label_304ecc:
    // 0x304ecc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_304ed0:
    if (ctx->pc == 0x304ED0u) {
        ctx->pc = 0x304ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304ECCu;
        // 0x304ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304ED4u;
        goto label_304ed4;
    }
    ctx->pc = 0x304ECCu;
    {
        const bool branch_taken_0x304ecc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x304ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304ECCu;
        // 0x304ed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304ecc) {
            ctx->pc = 0x304EF0u;
            goto label_304ef0;
        }
    }
    ctx->pc = 0x304ED4u;
label_304ed4:
    // 0x304ed4: 0x920212d5  lbu         $v0, 0x12D5($s0)
    ctx->pc = 0x304ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4821)));
label_304ed8:
    // 0x304ed8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x304ed8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_304edc:
    // 0x304edc: 0x54710005  bnel        $v1, $s1, . + 4 + (0x5 << 2)
label_304ee0:
    if (ctx->pc == 0x304EE0u) {
        ctx->pc = 0x304EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EDCu;
        // 0x304ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304EE4u;
        goto label_304ee4;
    }
    ctx->pc = 0x304EDCu;
    {
        const bool branch_taken_0x304edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x304edc) {
            ctx->pc = 0x304EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304EDCu;
            // 0x304ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x304EF4u;
            goto label_304ef4;
        }
    }
    ctx->pc = 0x304EE4u;
label_304ee4:
    // 0x304ee4: 0x2041026  xor         $v0, $s0, $a0
    ctx->pc = 0x304ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 4));
label_304ee8:
    // 0x304ee8: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x304ee8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_304eec:
    // 0x304eec: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x304eecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_304ef0:
    // 0x304ef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x304ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304ef4:
    // 0x304ef4: 0xc0a3658  jal         func_28D960
label_304ef8:
    if (ctx->pc == 0x304EF8u) {
        ctx->pc = 0x304EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EF4u;
        // 0x304ef8: 0x2405006f  addiu       $a1, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304EFCu;
        goto label_304efc;
    }
    ctx->pc = 0x304EF4u;
    SET_GPR_U32(ctx, 31, 0x304EFCu);
    ctx->pc = 0x304EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304EF4u;
    // 0x304ef8: 0x2405006f  addiu       $a1, $zero, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x304EF4u, 0x304EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304EFCu;
label_304efc:
    // 0x304efc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_304f00:
    if (ctx->pc == 0x304F00u) {
        ctx->pc = 0x304F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EFCu;
        // 0x304f00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304F04u;
        goto label_304f04;
    }
    ctx->pc = 0x304EFCu;
    {
        const bool branch_taken_0x304efc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x304F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304EFCu;
        // 0x304f00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304efc) {
            ctx->pc = 0x304F18u;
            goto label_304f18;
        }
    }
    ctx->pc = 0x304F04u;
label_304f04:
    // 0x304f04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x304f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304f08:
    // 0x304f08: 0xc0a3658  jal         func_28D960
label_304f0c:
    if (ctx->pc == 0x304F0Cu) {
        ctx->pc = 0x304F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F08u;
        // 0x304f0c: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304F10u;
        goto label_304f10;
    }
    ctx->pc = 0x304F08u;
    SET_GPR_U32(ctx, 31, 0x304F10u);
    ctx->pc = 0x304F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F08u;
    // 0x304f0c: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x304F08u, 0x304F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F10u;
label_304f10:
    // 0x304f10: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_304f14:
    if (ctx->pc == 0x304F14u) {
        ctx->pc = 0x304F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F10u;
        // 0x304f14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304F18u;
        goto label_304f18;
    }
    ctx->pc = 0x304F10u;
    {
        const bool branch_taken_0x304f10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F10u;
        // 0x304f14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f10) {
            ctx->pc = 0x304F20u;
            goto label_304f20;
        }
    }
    ctx->pc = 0x304F18u;
label_304f18:
    // 0x304f18: 0x10000003  b           . + 4 + (0x3 << 2)
label_304f1c:
    if (ctx->pc == 0x304F1Cu) {
        ctx->pc = 0x304F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F18u;
        // 0x304f1c: 0x90510ade  lbu         $s1, 0xADE($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2782)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304F20u;
        goto label_304f20;
    }
    ctx->pc = 0x304F18u;
    {
        const bool branch_taken_0x304f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F18u;
        // 0x304f1c: 0x90510ade  lbu         $s1, 0xADE($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2782)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f18) {
            ctx->pc = 0x304F28u;
            goto label_304f28;
        }
    }
    ctx->pc = 0x304F20u;
label_304f20:
    // 0x304f20: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x304f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_304f24:
    // 0x304f24: 0x90510add  lbu         $s1, 0xADD($v0)
    ctx->pc = 0x304f24u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2781)));
label_304f28:
    // 0x304f28: 0xc0a4e54  jal         func_293950
label_304f2c:
    if (ctx->pc == 0x304F2Cu) {
        ctx->pc = 0x304F30u;
        goto label_304f30;
    }
    ctx->pc = 0x304F28u;
    SET_GPR_U32(ctx, 31, 0x304F30u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x304F28u, 0x304F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F30u;
label_304f30:
    // 0x304f30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x304f30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_304f34:
    // 0x304f34: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_304f38:
    if (ctx->pc == 0x304F38u) {
        ctx->pc = 0x304F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F34u;
        // 0x304f38: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304F3Cu;
        goto label_304f3c;
    }
    ctx->pc = 0x304F34u;
    {
        const bool branch_taken_0x304f34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x304F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F34u;
        // 0x304f38: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f34) {
            ctx->pc = 0x304F6Cu;
            goto label_304f6c;
        }
    }
    ctx->pc = 0x304F3Cu;
label_304f3c:
    // 0x304f3c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x304f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_304f40:
    // 0x304f40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x304f40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304f44:
    // 0x304f44: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x304f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
label_304f48:
    // 0x304f48: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x304f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_304f4c:
    // 0x304f4c: 0xafb60008  sw          $s6, 0x8($sp)
    ctx->pc = 0x304f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 22));
label_304f50:
    // 0x304f50: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x304f50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304f54:
    // 0x304f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x304f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_304f58:
    // 0x304f58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x304f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304f5c:
    // 0x304f5c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x304f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_304f60:
    // 0x304f60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x304f60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304f64:
    // 0x304f64: 0xc0b3e3e  jal         func_2CF8F8
label_304f68:
    if (ctx->pc == 0x304F68u) {
        ctx->pc = 0x304F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F64u;
        // 0x304f68: 0x240a000d  addiu       $t2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304F6Cu;
        goto label_304f6c;
    }
    ctx->pc = 0x304F64u;
    SET_GPR_U32(ctx, 31, 0x304F6Cu);
    ctx->pc = 0x304F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F64u;
    // 0x304f68: 0x240a000d  addiu       $t2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF8F8u, 0x304F64u, 0x304F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F6Cu;
label_304f6c:
    // 0x304f6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x304f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_304f70:
    // 0x304f70: 0xc0a35d6  jal         func_28D758
label_304f74:
    if (ctx->pc == 0x304F74u) {
        ctx->pc = 0x304F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F70u;
        // 0x304f74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304F78u;
        goto label_304f78;
    }
    ctx->pc = 0x304F70u;
    SET_GPR_U32(ctx, 31, 0x304F78u);
    ctx->pc = 0x304F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F70u;
    // 0x304f74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x304F70u, 0x304F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F78u;
label_304f78:
    // 0x304f78: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x304f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_304f7c:
    // 0x304f7c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x304f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_304f80:
    // 0x304f80: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x304f80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_304f84:
    // 0x304f84: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x304f84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_304f88:
    // 0x304f88: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x304f88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_304f8c:
    // 0x304f8c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x304f8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_304f90:
    // 0x304f90: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x304f90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_304f94:
    // 0x304f94: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x304f94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_304f98:
    // 0x304f98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x304f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_304f9c:
    // 0x304f9c: 0x3e00008  jr          $ra
label_304fa0:
    if (ctx->pc == 0x304FA0u) {
        ctx->pc = 0x304FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F9Cu;
        // 0x304fa0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304FA4u;
        goto label_304fa4;
    }
    ctx->pc = 0x304F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F9Cu;
        // 0x304fa0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304FA4u;
label_304fa4:
    // 0x304fa4: 0x0  nop
    ctx->pc = 0x304fa4u;
    // NOP
    ctx->pc = 0x304fa8u;
}
