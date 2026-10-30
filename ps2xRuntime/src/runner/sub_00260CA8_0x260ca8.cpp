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

// Function: sub_00260CA8
// Address: 0x260ca8 - 0x260fd0
void sub_00260CA8_0x260ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260CA8_0x260ca8");
#endif

    switch (ctx->pc) {
        case 0x260ca8u: goto label_260ca8;
        case 0x260cacu: goto label_260cac;
        case 0x260cb0u: goto label_260cb0;
        case 0x260cb4u: goto label_260cb4;
        case 0x260cb8u: goto label_260cb8;
        case 0x260cbcu: goto label_260cbc;
        case 0x260cc0u: goto label_260cc0;
        case 0x260cc4u: goto label_260cc4;
        case 0x260cc8u: goto label_260cc8;
        case 0x260cccu: goto label_260ccc;
        case 0x260cd0u: goto label_260cd0;
        case 0x260cd4u: goto label_260cd4;
        case 0x260cd8u: goto label_260cd8;
        case 0x260cdcu: goto label_260cdc;
        case 0x260ce0u: goto label_260ce0;
        case 0x260ce4u: goto label_260ce4;
        case 0x260ce8u: goto label_260ce8;
        case 0x260cecu: goto label_260cec;
        case 0x260cf0u: goto label_260cf0;
        case 0x260cf4u: goto label_260cf4;
        case 0x260cf8u: goto label_260cf8;
        case 0x260cfcu: goto label_260cfc;
        case 0x260d00u: goto label_260d00;
        case 0x260d04u: goto label_260d04;
        case 0x260d08u: goto label_260d08;
        case 0x260d0cu: goto label_260d0c;
        case 0x260d10u: goto label_260d10;
        case 0x260d14u: goto label_260d14;
        case 0x260d18u: goto label_260d18;
        case 0x260d1cu: goto label_260d1c;
        case 0x260d20u: goto label_260d20;
        case 0x260d24u: goto label_260d24;
        case 0x260d28u: goto label_260d28;
        case 0x260d2cu: goto label_260d2c;
        case 0x260d30u: goto label_260d30;
        case 0x260d34u: goto label_260d34;
        case 0x260d38u: goto label_260d38;
        case 0x260d3cu: goto label_260d3c;
        case 0x260d40u: goto label_260d40;
        case 0x260d44u: goto label_260d44;
        case 0x260d48u: goto label_260d48;
        case 0x260d4cu: goto label_260d4c;
        case 0x260d50u: goto label_260d50;
        case 0x260d54u: goto label_260d54;
        case 0x260d58u: goto label_260d58;
        case 0x260d5cu: goto label_260d5c;
        case 0x260d60u: goto label_260d60;
        case 0x260d64u: goto label_260d64;
        case 0x260d68u: goto label_260d68;
        case 0x260d6cu: goto label_260d6c;
        case 0x260d70u: goto label_260d70;
        case 0x260d74u: goto label_260d74;
        case 0x260d78u: goto label_260d78;
        case 0x260d7cu: goto label_260d7c;
        case 0x260d80u: goto label_260d80;
        case 0x260d84u: goto label_260d84;
        case 0x260d88u: goto label_260d88;
        case 0x260d8cu: goto label_260d8c;
        case 0x260d90u: goto label_260d90;
        case 0x260d94u: goto label_260d94;
        case 0x260d98u: goto label_260d98;
        case 0x260d9cu: goto label_260d9c;
        case 0x260da0u: goto label_260da0;
        case 0x260da4u: goto label_260da4;
        case 0x260da8u: goto label_260da8;
        case 0x260dacu: goto label_260dac;
        case 0x260db0u: goto label_260db0;
        case 0x260db4u: goto label_260db4;
        case 0x260db8u: goto label_260db8;
        case 0x260dbcu: goto label_260dbc;
        case 0x260dc0u: goto label_260dc0;
        case 0x260dc4u: goto label_260dc4;
        case 0x260dc8u: goto label_260dc8;
        case 0x260dccu: goto label_260dcc;
        case 0x260dd0u: goto label_260dd0;
        case 0x260dd4u: goto label_260dd4;
        case 0x260dd8u: goto label_260dd8;
        case 0x260ddcu: goto label_260ddc;
        case 0x260de0u: goto label_260de0;
        case 0x260de4u: goto label_260de4;
        case 0x260de8u: goto label_260de8;
        case 0x260decu: goto label_260dec;
        case 0x260df0u: goto label_260df0;
        case 0x260df4u: goto label_260df4;
        case 0x260df8u: goto label_260df8;
        case 0x260dfcu: goto label_260dfc;
        case 0x260e00u: goto label_260e00;
        case 0x260e04u: goto label_260e04;
        case 0x260e08u: goto label_260e08;
        case 0x260e0cu: goto label_260e0c;
        case 0x260e10u: goto label_260e10;
        case 0x260e14u: goto label_260e14;
        case 0x260e18u: goto label_260e18;
        case 0x260e1cu: goto label_260e1c;
        case 0x260e20u: goto label_260e20;
        case 0x260e24u: goto label_260e24;
        case 0x260e28u: goto label_260e28;
        case 0x260e2cu: goto label_260e2c;
        case 0x260e30u: goto label_260e30;
        case 0x260e34u: goto label_260e34;
        case 0x260e38u: goto label_260e38;
        case 0x260e3cu: goto label_260e3c;
        case 0x260e40u: goto label_260e40;
        case 0x260e44u: goto label_260e44;
        case 0x260e48u: goto label_260e48;
        case 0x260e4cu: goto label_260e4c;
        case 0x260e50u: goto label_260e50;
        case 0x260e54u: goto label_260e54;
        case 0x260e58u: goto label_260e58;
        case 0x260e5cu: goto label_260e5c;
        case 0x260e60u: goto label_260e60;
        case 0x260e64u: goto label_260e64;
        case 0x260e68u: goto label_260e68;
        case 0x260e6cu: goto label_260e6c;
        case 0x260e70u: goto label_260e70;
        case 0x260e74u: goto label_260e74;
        case 0x260e78u: goto label_260e78;
        case 0x260e7cu: goto label_260e7c;
        case 0x260e80u: goto label_260e80;
        case 0x260e84u: goto label_260e84;
        case 0x260e88u: goto label_260e88;
        case 0x260e8cu: goto label_260e8c;
        case 0x260e90u: goto label_260e90;
        case 0x260e94u: goto label_260e94;
        case 0x260e98u: goto label_260e98;
        case 0x260e9cu: goto label_260e9c;
        case 0x260ea0u: goto label_260ea0;
        case 0x260ea4u: goto label_260ea4;
        case 0x260ea8u: goto label_260ea8;
        case 0x260eacu: goto label_260eac;
        case 0x260eb0u: goto label_260eb0;
        case 0x260eb4u: goto label_260eb4;
        case 0x260eb8u: goto label_260eb8;
        case 0x260ebcu: goto label_260ebc;
        case 0x260ec0u: goto label_260ec0;
        case 0x260ec4u: goto label_260ec4;
        case 0x260ec8u: goto label_260ec8;
        case 0x260eccu: goto label_260ecc;
        case 0x260ed0u: goto label_260ed0;
        case 0x260ed4u: goto label_260ed4;
        case 0x260ed8u: goto label_260ed8;
        case 0x260edcu: goto label_260edc;
        case 0x260ee0u: goto label_260ee0;
        case 0x260ee4u: goto label_260ee4;
        case 0x260ee8u: goto label_260ee8;
        case 0x260eecu: goto label_260eec;
        case 0x260ef0u: goto label_260ef0;
        case 0x260ef4u: goto label_260ef4;
        case 0x260ef8u: goto label_260ef8;
        case 0x260efcu: goto label_260efc;
        case 0x260f00u: goto label_260f00;
        case 0x260f04u: goto label_260f04;
        case 0x260f08u: goto label_260f08;
        case 0x260f0cu: goto label_260f0c;
        case 0x260f10u: goto label_260f10;
        case 0x260f14u: goto label_260f14;
        case 0x260f18u: goto label_260f18;
        case 0x260f1cu: goto label_260f1c;
        case 0x260f20u: goto label_260f20;
        case 0x260f24u: goto label_260f24;
        case 0x260f28u: goto label_260f28;
        case 0x260f2cu: goto label_260f2c;
        case 0x260f30u: goto label_260f30;
        case 0x260f34u: goto label_260f34;
        case 0x260f38u: goto label_260f38;
        case 0x260f3cu: goto label_260f3c;
        case 0x260f40u: goto label_260f40;
        case 0x260f44u: goto label_260f44;
        case 0x260f48u: goto label_260f48;
        case 0x260f4cu: goto label_260f4c;
        case 0x260f50u: goto label_260f50;
        case 0x260f54u: goto label_260f54;
        case 0x260f58u: goto label_260f58;
        case 0x260f5cu: goto label_260f5c;
        case 0x260f60u: goto label_260f60;
        case 0x260f64u: goto label_260f64;
        case 0x260f68u: goto label_260f68;
        case 0x260f6cu: goto label_260f6c;
        case 0x260f70u: goto label_260f70;
        case 0x260f74u: goto label_260f74;
        case 0x260f78u: goto label_260f78;
        case 0x260f7cu: goto label_260f7c;
        case 0x260f80u: goto label_260f80;
        case 0x260f84u: goto label_260f84;
        case 0x260f88u: goto label_260f88;
        case 0x260f8cu: goto label_260f8c;
        case 0x260f90u: goto label_260f90;
        case 0x260f94u: goto label_260f94;
        case 0x260f98u: goto label_260f98;
        case 0x260f9cu: goto label_260f9c;
        case 0x260fa0u: goto label_260fa0;
        case 0x260fa4u: goto label_260fa4;
        case 0x260fa8u: goto label_260fa8;
        case 0x260facu: goto label_260fac;
        case 0x260fb0u: goto label_260fb0;
        case 0x260fb4u: goto label_260fb4;
        case 0x260fb8u: goto label_260fb8;
        case 0x260fbcu: goto label_260fbc;
        case 0x260fc0u: goto label_260fc0;
        case 0x260fc4u: goto label_260fc4;
        case 0x260fc8u: goto label_260fc8;
        case 0x260fccu: goto label_260fcc;
        default: break;
    }

    ctx->pc = 0x260ca8u;

label_260ca8:
    // 0x260ca8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x260ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_260cac:
    // 0x260cac: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x260cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_260cb0:
    // 0x260cb0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x260cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_260cb4:
    // 0x260cb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x260cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260cb8:
    // 0x260cb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x260cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_260cbc:
    // 0x260cbc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x260cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_260cc0:
    // 0x260cc0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x260cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_260cc4:
    // 0x260cc4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x260cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_260cc8:
    // 0x260cc8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x260cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_260ccc:
    // 0x260ccc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x260cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_260cd0:
    // 0x260cd0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x260cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_260cd4:
    // 0x260cd4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x260cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_260cd8:
    // 0x260cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x260cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_260cdc:
    // 0x260cdc: 0xc040680  jal         func_101A00
label_260ce0:
    if (ctx->pc == 0x260CE0u) {
        ctx->pc = 0x260CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CDCu;
        // 0x260ce0: 0x24050145  addiu       $a1, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260CE4u;
        goto label_260ce4;
    }
    ctx->pc = 0x260CDCu;
    SET_GPR_U32(ctx, 31, 0x260CE4u);
    ctx->pc = 0x260CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260CDCu;
    // 0x260ce0: 0x24050145  addiu       $a1, $zero, 0x145 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x260CDCu, 0x260CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CE4u;
label_260ce4:
    // 0x260ce4: 0x124000ae  beqz        $s2, . + 4 + (0xAE << 2)
label_260ce8:
    if (ctx->pc == 0x260CE8u) {
        ctx->pc = 0x260CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CE4u;
        // 0x260ce8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260CECu;
        goto label_260cec;
    }
    ctx->pc = 0x260CE4u;
    {
        const bool branch_taken_0x260ce4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CE4u;
        // 0x260ce8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ce4) {
            ctx->pc = 0x260FA0u;
            goto label_260fa0;
        }
    }
    ctx->pc = 0x260CECu;
label_260cec:
    // 0x260cec: 0xc088edc  jal         func_223B70
label_260cf0:
    if (ctx->pc == 0x260CF0u) {
        ctx->pc = 0x260CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CECu;
        // 0x260cf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260CF4u;
        goto label_260cf4;
    }
    ctx->pc = 0x260CECu;
    SET_GPR_U32(ctx, 31, 0x260CF4u);
    ctx->pc = 0x260CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260CECu;
    // 0x260cf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x260CECu, 0x260CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CF4u;
label_260cf4:
    // 0x260cf4: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
label_260cf8:
    if (ctx->pc == 0x260CF8u) {
        ctx->pc = 0x260CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CF4u;
        // 0x260cf8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260CFCu;
        goto label_260cfc;
    }
    ctx->pc = 0x260CF4u;
    {
        const bool branch_taken_0x260cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CF4u;
        // 0x260cf8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260cf4) {
            ctx->pc = 0x260FA0u;
            goto label_260fa0;
        }
    }
    ctx->pc = 0x260CFCu;
label_260cfc:
    // 0x260cfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260d00:
    // 0x260d00: 0xc089998  jal         func_226660
label_260d04:
    if (ctx->pc == 0x260D04u) {
        ctx->pc = 0x260D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D00u;
        // 0x260d04: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D08u;
        goto label_260d08;
    }
    ctx->pc = 0x260D00u;
    SET_GPR_U32(ctx, 31, 0x260D08u);
    ctx->pc = 0x260D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D00u;
    // 0x260d04: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x260D00u, 0x260D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D08u;
label_260d08:
    // 0x260d08: 0x144000a5  bnez        $v0, . + 4 + (0xA5 << 2)
label_260d0c:
    if (ctx->pc == 0x260D0Cu) {
        ctx->pc = 0x260D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D08u;
        // 0x260d0c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D10u;
        goto label_260d10;
    }
    ctx->pc = 0x260D08u;
    {
        const bool branch_taken_0x260d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D08u;
        // 0x260d0c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d08) {
            ctx->pc = 0x260FA0u;
            goto label_260fa0;
        }
    }
    ctx->pc = 0x260D10u;
label_260d10:
    // 0x260d10: 0x3c1e006f  lui         $fp, 0x6F
    ctx->pc = 0x260d10u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
label_260d14:
    // 0x260d14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x260d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_260d18:
    // 0x260d18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260d1c:
    // 0x260d1c: 0x8fc9bd30  lw          $t1, -0x42D0($fp)
    ctx->pc = 0x260d1cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
label_260d20:
    // 0x260d20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x260d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260d24:
    // 0x260d24: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x260d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260d28:
    // 0x260d28: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x260d28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260d2c:
    // 0x260d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260d30:
    // 0x260d30: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x260d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_260d34:
    // 0x260d34: 0xc088178  jal         func_2205E0
label_260d38:
    if (ctx->pc == 0x260D38u) {
        ctx->pc = 0x260D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D34u;
        // 0x260d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D3Cu;
        goto label_260d3c;
    }
    ctx->pc = 0x260D34u;
    SET_GPR_U32(ctx, 31, 0x260D3Cu);
    ctx->pc = 0x260D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D34u;
    // 0x260d38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x260D34u, 0x260D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D3Cu;
label_260d3c:
    // 0x260d3c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x260d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_260d40:
    // 0x260d40: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x260d40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_260d44:
    // 0x260d44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260d48:
    // 0x260d48: 0x24060145  addiu       $a2, $zero, 0x145
    ctx->pc = 0x260d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
label_260d4c:
    // 0x260d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260d50:
    // 0x260d50: 0xc09d872  jal         func_2761C8
label_260d54:
    if (ctx->pc == 0x260D54u) {
        ctx->pc = 0x260D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D50u;
        // 0x260d54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D58u;
        goto label_260d58;
    }
    ctx->pc = 0x260D50u;
    SET_GPR_U32(ctx, 31, 0x260D58u);
    ctx->pc = 0x260D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D50u;
    // 0x260d54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761C8u, 0x260D50u, 0x260D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D58u;
label_260d58:
    // 0x260d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260d5c:
    // 0x260d5c: 0xc0899aa  jal         func_2266A8
label_260d60:
    if (ctx->pc == 0x260D60u) {
        ctx->pc = 0x260D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D5Cu;
        // 0x260d60: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D64u;
        goto label_260d64;
    }
    ctx->pc = 0x260D5Cu;
    SET_GPR_U32(ctx, 31, 0x260D64u);
    ctx->pc = 0x260D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D5Cu;
    // 0x260d60: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A8u, 0x260D5Cu, 0x260D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D64u;
label_260d64:
    // 0x260d64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x260d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260d68:
    // 0x260d68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x260d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260d6c:
    // 0x260d6c: 0xc08b4fe  jal         func_22D3F8
label_260d70:
    if (ctx->pc == 0x260D70u) {
        ctx->pc = 0x260D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D6Cu;
        // 0x260d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D74u;
        goto label_260d74;
    }
    ctx->pc = 0x260D6Cu;
    SET_GPR_U32(ctx, 31, 0x260D74u);
    ctx->pc = 0x260D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D6Cu;
    // 0x260d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3F8u, 0x260D6Cu, 0x260D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D74u;
label_260d74:
    // 0x260d74: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x260d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_260d78:
    // 0x260d78: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x260d78u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_260d7c:
    // 0x260d7c: 0x2457dc40  addiu       $s7, $v0, -0x23C0
    ctx->pc = 0x260d7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958144));
label_260d80:
    // 0x260d80: 0xc041532  jal         func_1054C8
label_260d84:
    if (ctx->pc == 0x260D84u) {
        ctx->pc = 0x260D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D80u;
        // 0x260d84: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D88u;
        goto label_260d88;
    }
    ctx->pc = 0x260D80u;
    SET_GPR_U32(ctx, 31, 0x260D88u);
    ctx->pc = 0x260D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D80u;
    // 0x260d84: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260D80u, 0x260D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D88u;
label_260d88:
    // 0x260d88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x260d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_260d8c:
    // 0x260d8c: 0xc041532  jal         func_1054C8
label_260d90:
    if (ctx->pc == 0x260D90u) {
        ctx->pc = 0x260D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D8Cu;
        // 0x260d90: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260D94u;
        goto label_260d94;
    }
    ctx->pc = 0x260D8Cu;
    SET_GPR_U32(ctx, 31, 0x260D94u);
    ctx->pc = 0x260D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D8Cu;
    // 0x260d90: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260D8Cu, 0x260D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D94u;
label_260d94:
    // 0x260d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x260d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260d98:
    // 0x260d98: 0xc041532  jal         func_1054C8
label_260d9c:
    if (ctx->pc == 0x260D9Cu) {
        ctx->pc = 0x260D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D98u;
        // 0x260d9c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DA0u;
        goto label_260da0;
    }
    ctx->pc = 0x260D98u;
    SET_GPR_U32(ctx, 31, 0x260DA0u);
    ctx->pc = 0x260D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D98u;
    // 0x260d9c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260D98u, 0x260DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DA0u;
label_260da0:
    // 0x260da0: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_260da4:
    if (ctx->pc == 0x260DA4u) {
        ctx->pc = 0x260DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DA0u;
        // 0x260da4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DA8u;
        goto label_260da8;
    }
    ctx->pc = 0x260DA0u;
    {
        const bool branch_taken_0x260da0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DA0u;
        // 0x260da4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260da0) {
            ctx->pc = 0x260DC8u;
            goto label_260dc8;
        }
    }
    ctx->pc = 0x260DA8u;
label_260da8:
    // 0x260da8: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x260da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_260dac:
    // 0x260dac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x260dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_260db0:
    // 0x260db0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x260db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_260db4:
    // 0x260db4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x260db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_260db8:
    // 0x260db8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260dbc:
    // 0x260dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x260dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260dc0:
    // 0x260dc0: 0xc041b20  jal         func_106C80
label_260dc4:
    if (ctx->pc == 0x260DC4u) {
        ctx->pc = 0x260DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DC0u;
        // 0x260dc4: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DC8u;
        goto label_260dc8;
    }
    ctx->pc = 0x260DC0u;
    SET_GPR_U32(ctx, 31, 0x260DC8u);
    ctx->pc = 0x260DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260DC0u;
    // 0x260dc4: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x260DC0u, 0x260DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DC8u;
label_260dc8:
    // 0x260dc8: 0xc05d484  jal         func_175210
label_260dcc:
    if (ctx->pc == 0x260DCCu) {
        ctx->pc = 0x260DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DC8u;
        // 0x260dcc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DD0u;
        goto label_260dd0;
    }
    ctx->pc = 0x260DC8u;
    SET_GPR_U32(ctx, 31, 0x260DD0u);
    ctx->pc = 0x260DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260DC8u;
    // 0x260dcc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x260DC8u, 0x260DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DD0u;
label_260dd0:
    // 0x260dd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x260dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260dd4:
    // 0x260dd4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x260dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_260dd8:
    // 0x260dd8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x260dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_260ddc:
    // 0x260ddc: 0xa0f809  jalr        $a1
label_260de0:
    if (ctx->pc == 0x260DE0u) {
        ctx->pc = 0x260DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DDCu;
        // 0x260de0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DE4u;
        goto label_260de4;
    }
    ctx->pc = 0x260DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x260DE4u);
        ctx->pc = 0x260DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DDCu;
        // 0x260de0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260DDCu, 0x260DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260DE4u;
label_260de4:
    // 0x260de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260de8:
    // 0x260de8: 0xc087016  jal         func_21C058
label_260dec:
    if (ctx->pc == 0x260DECu) {
        ctx->pc = 0x260DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DE8u;
        // 0x260dec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DF0u;
        goto label_260df0;
    }
    ctx->pc = 0x260DE8u;
    SET_GPR_U32(ctx, 31, 0x260DF0u);
    ctx->pc = 0x260DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260DE8u;
    // 0x260dec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x260DE8u, 0x260DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DF0u;
label_260df0:
    // 0x260df0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_260df4:
    if (ctx->pc == 0x260DF4u) {
        ctx->pc = 0x260DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DF0u;
        // 0x260df4: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260DF8u;
        goto label_260df8;
    }
    ctx->pc = 0x260DF0u;
    {
        const bool branch_taken_0x260df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x260DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260DF0u;
        // 0x260df4: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260df0) {
            ctx->pc = 0x260E0Cu;
            goto label_260e0c;
        }
    }
    ctx->pc = 0x260DF8u;
label_260df8:
    // 0x260df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x260df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260dfc:
    // 0x260dfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x260dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260e00:
    // 0x260e00: 0x24060149  addiu       $a2, $zero, 0x149
    ctx->pc = 0x260e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 329));
label_260e04:
    // 0x260e04: 0xc04159e  jal         func_105678
label_260e08:
    if (ctx->pc == 0x260E08u) {
        ctx->pc = 0x260E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E04u;
        // 0x260e08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E0Cu;
        goto label_260e0c;
    }
    ctx->pc = 0x260E04u;
    SET_GPR_U32(ctx, 31, 0x260E0Cu);
    ctx->pc = 0x260E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E04u;
    // 0x260e08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x260E04u, 0x260E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E0Cu;
label_260e0c:
    // 0x260e0c: 0x52600010  beql        $s3, $zero, . + 4 + (0x10 << 2)
label_260e10:
    if (ctx->pc == 0x260E10u) {
        ctx->pc = 0x260E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E0Cu;
        // 0x260e10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E14u;
        goto label_260e14;
    }
    ctx->pc = 0x260E0Cu;
    {
        const bool branch_taken_0x260e0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x260e0c) {
            ctx->pc = 0x260E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260E0Cu;
            // 0x260e10: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260E50u;
            goto label_260e50;
        }
    }
    ctx->pc = 0x260E14u;
label_260e14:
    // 0x260e14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x260e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_260e18:
    // 0x260e18: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x260e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_260e1c:
    // 0x260e1c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x260e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_260e20:
    // 0x260e20: 0x40f809  jalr        $v0
label_260e24:
    if (ctx->pc == 0x260E24u) {
        ctx->pc = 0x260E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E20u;
        // 0x260e24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E28u;
        goto label_260e28;
    }
    ctx->pc = 0x260E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260E28u);
        ctx->pc = 0x260E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E20u;
        // 0x260e24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260E20u, 0x260E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260E28u;
label_260e28:
    // 0x260e28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260e2c:
    // 0x260e2c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x260e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260e30:
    // 0x260e30: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x260e30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260e34:
    // 0x260e34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260e38:
    // 0x260e38: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x260e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260e3c:
    // 0x260e3c: 0x24060145  addiu       $a2, $zero, 0x145
    ctx->pc = 0x260e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
label_260e40:
    // 0x260e40: 0x3c080200  lui         $t0, 0x200
    ctx->pc = 0x260e40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)512 << 16));
label_260e44:
    // 0x260e44: 0xc041664  jal         func_105990
label_260e48:
    if (ctx->pc == 0x260E48u) {
        ctx->pc = 0x260E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E44u;
        // 0x260e48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E4Cu;
        goto label_260e4c;
    }
    ctx->pc = 0x260E44u;
    SET_GPR_U32(ctx, 31, 0x260E4Cu);
    ctx->pc = 0x260E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E44u;
    // 0x260e48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x260E44u, 0x260E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E4Cu;
label_260e4c:
    // 0x260e4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x260e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260e50:
    // 0x260e50: 0xc05d53a  jal         func_1754E8
label_260e54:
    if (ctx->pc == 0x260E54u) {
        ctx->pc = 0x260E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E50u;
        // 0x260e54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E58u;
        goto label_260e58;
    }
    ctx->pc = 0x260E50u;
    SET_GPR_U32(ctx, 31, 0x260E58u);
    ctx->pc = 0x260E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E50u;
    // 0x260e54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x260E50u, 0x260E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E58u;
label_260e58:
    // 0x260e58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260e5c:
    // 0x260e5c: 0xc05d4f6  jal         func_1753D8
label_260e60:
    if (ctx->pc == 0x260E60u) {
        ctx->pc = 0x260E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E5Cu;
        // 0x260e60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E64u;
        goto label_260e64;
    }
    ctx->pc = 0x260E5Cu;
    SET_GPR_U32(ctx, 31, 0x260E64u);
    ctx->pc = 0x260E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E5Cu;
    // 0x260e60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x260E5Cu, 0x260E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E64u;
label_260e64:
    // 0x260e64: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x260e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
label_260e68:
    // 0x260e68: 0xc089990  jal         func_226640
label_260e6c:
    if (ctx->pc == 0x260E6Cu) {
        ctx->pc = 0x260E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E68u;
        // 0x260e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E70u;
        goto label_260e70;
    }
    ctx->pc = 0x260E68u;
    SET_GPR_U32(ctx, 31, 0x260E70u);
    ctx->pc = 0x260E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E68u;
    // 0x260e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x260E68u, 0x260E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E70u;
label_260e70:
    // 0x260e70: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x260e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_260e74:
    // 0x260e74: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x260e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_260e78:
    // 0x260e78: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x260e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_260e7c:
    // 0x260e7c: 0xc041532  jal         func_1054C8
label_260e80:
    if (ctx->pc == 0x260E80u) {
        ctx->pc = 0x260E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E7Cu;
        // 0x260e80: 0x8e5400d8  lw          $s4, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E84u;
        goto label_260e84;
    }
    ctx->pc = 0x260E7Cu;
    SET_GPR_U32(ctx, 31, 0x260E84u);
    ctx->pc = 0x260E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E7Cu;
    // 0x260e80: 0x8e5400d8  lw          $s4, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260E7Cu, 0x260E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E84u;
label_260e84:
    // 0x260e84: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x260e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_260e88:
    // 0x260e88: 0xc041532  jal         func_1054C8
label_260e8c:
    if (ctx->pc == 0x260E8Cu) {
        ctx->pc = 0x260E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E88u;
        // 0x260e8c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E90u;
        goto label_260e90;
    }
    ctx->pc = 0x260E88u;
    SET_GPR_U32(ctx, 31, 0x260E90u);
    ctx->pc = 0x260E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E88u;
    // 0x260e8c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260E88u, 0x260E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E90u;
label_260e90:
    // 0x260e90: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x260e90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260e94:
    // 0x260e94: 0xc041532  jal         func_1054C8
label_260e98:
    if (ctx->pc == 0x260E98u) {
        ctx->pc = 0x260E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E94u;
        // 0x260e98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E9Cu;
        goto label_260e9c;
    }
    ctx->pc = 0x260E94u;
    SET_GPR_U32(ctx, 31, 0x260E9Cu);
    ctx->pc = 0x260E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E94u;
    // 0x260e98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x260E94u, 0x260E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E9Cu;
label_260e9c:
    // 0x260e9c: 0x12c00009  beqz        $s6, . + 4 + (0x9 << 2)
label_260ea0:
    if (ctx->pc == 0x260EA0u) {
        ctx->pc = 0x260EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E9Cu;
        // 0x260ea0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EA4u;
        goto label_260ea4;
    }
    ctx->pc = 0x260E9Cu;
    {
        const bool branch_taken_0x260e9c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x260EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E9Cu;
        // 0x260ea0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e9c) {
            ctx->pc = 0x260EC4u;
            goto label_260ec4;
        }
    }
    ctx->pc = 0x260EA4u;
label_260ea4:
    // 0x260ea4: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x260ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_260ea8:
    // 0x260ea8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x260ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_260eac:
    // 0x260eac: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x260eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_260eb0:
    // 0x260eb0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x260eb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_260eb4:
    // 0x260eb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x260eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260eb8:
    // 0x260eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x260eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260ebc:
    // 0x260ebc: 0xc041b20  jal         func_106C80
label_260ec0:
    if (ctx->pc == 0x260EC0u) {
        ctx->pc = 0x260EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EBCu;
        // 0x260ec0: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EC4u;
        goto label_260ec4;
    }
    ctx->pc = 0x260EBCu;
    SET_GPR_U32(ctx, 31, 0x260EC4u);
    ctx->pc = 0x260EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EBCu;
    // 0x260ec0: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x260EBCu, 0x260EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EC4u;
label_260ec4:
    // 0x260ec4: 0xc05d484  jal         func_175210
label_260ec8:
    if (ctx->pc == 0x260EC8u) {
        ctx->pc = 0x260EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EC4u;
        // 0x260ec8: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260ECCu;
        goto label_260ecc;
    }
    ctx->pc = 0x260EC4u;
    SET_GPR_U32(ctx, 31, 0x260ECCu);
    ctx->pc = 0x260EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EC4u;
    // 0x260ec8: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x260EC4u, 0x260ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260ECCu;
label_260ecc:
    // 0x260ecc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x260eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260ed0:
    // 0x260ed0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x260ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_260ed4:
    // 0x260ed4: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x260ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_260ed8:
    // 0x260ed8: 0xa0f809  jalr        $a1
label_260edc:
    if (ctx->pc == 0x260EDCu) {
        ctx->pc = 0x260EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ED8u;
        // 0x260edc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EE0u;
        goto label_260ee0;
    }
    ctx->pc = 0x260ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x260EE0u);
        ctx->pc = 0x260EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ED8u;
        // 0x260edc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260ED8u, 0x260EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260EE0u;
label_260ee0:
    // 0x260ee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260ee4:
    // 0x260ee4: 0xc087016  jal         func_21C058
label_260ee8:
    if (ctx->pc == 0x260EE8u) {
        ctx->pc = 0x260EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EE4u;
        // 0x260ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EECu;
        goto label_260eec;
    }
    ctx->pc = 0x260EE4u;
    SET_GPR_U32(ctx, 31, 0x260EECu);
    ctx->pc = 0x260EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EE4u;
    // 0x260ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x260EE4u, 0x260EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EECu;
label_260eec:
    // 0x260eec: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_260ef0:
    if (ctx->pc == 0x260EF0u) {
        ctx->pc = 0x260EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EECu;
        // 0x260ef0: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EF4u;
        goto label_260ef4;
    }
    ctx->pc = 0x260EECu;
    {
        const bool branch_taken_0x260eec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x260EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EECu;
        // 0x260ef0: 0x8fc7bd30  lw          $a3, -0x42D0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260eec) {
            ctx->pc = 0x260F08u;
            goto label_260f08;
        }
    }
    ctx->pc = 0x260EF4u;
label_260ef4:
    // 0x260ef4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260ef8:
    // 0x260ef8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x260ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260efc:
    // 0x260efc: 0x2406014a  addiu       $a2, $zero, 0x14A
    ctx->pc = 0x260efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
label_260f00:
    // 0x260f00: 0xc04159e  jal         func_105678
label_260f04:
    if (ctx->pc == 0x260F04u) {
        ctx->pc = 0x260F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F00u;
        // 0x260f04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F08u;
        goto label_260f08;
    }
    ctx->pc = 0x260F00u;
    SET_GPR_U32(ctx, 31, 0x260F08u);
    ctx->pc = 0x260F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F00u;
    // 0x260f04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x260F00u, 0x260F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F08u;
label_260f08:
    // 0x260f08: 0x52a00017  beql        $s5, $zero, . + 4 + (0x17 << 2)
label_260f0c:
    if (ctx->pc == 0x260F0Cu) {
        ctx->pc = 0x260F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F08u;
        // 0x260f0c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F10u;
        goto label_260f10;
    }
    ctx->pc = 0x260F08u;
    {
        const bool branch_taken_0x260f08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x260f08) {
            ctx->pc = 0x260F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260F08u;
            // 0x260f0c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260F68u;
            goto label_260f68;
        }
    }
    ctx->pc = 0x260F10u;
label_260f10:
    // 0x260f10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x260f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_260f14:
    // 0x260f14: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x260f14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_260f18:
    // 0x260f18: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x260f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_260f1c:
    // 0x260f1c: 0x40f809  jalr        $v0
label_260f20:
    if (ctx->pc == 0x260F20u) {
        ctx->pc = 0x260F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F1Cu;
        // 0x260f20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F24u;
        goto label_260f24;
    }
    ctx->pc = 0x260F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260F24u);
        ctx->pc = 0x260F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F1Cu;
        // 0x260f20: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260F1Cu, 0x260F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260F24u;
label_260f24:
    // 0x260f24: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x260f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_260f28:
    // 0x260f28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x260f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260f2c:
    // 0x260f2c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x260f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_260f30:
    // 0x260f30: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x260f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_260f34:
    // 0x260f34: 0x40f809  jalr        $v0
label_260f38:
    if (ctx->pc == 0x260F38u) {
        ctx->pc = 0x260F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F34u;
        // 0x260f38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F3Cu;
        goto label_260f3c;
    }
    ctx->pc = 0x260F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260F3Cu);
        ctx->pc = 0x260F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F34u;
        // 0x260f38: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260F34u, 0x260F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x260F3Cu;
label_260f3c:
    // 0x260f3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x260f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_260f40:
    // 0x260f40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x260f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260f44:
    // 0x260f44: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x260f44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260f48:
    // 0x260f48: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x260f48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260f4c:
    // 0x260f4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x260f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_260f50:
    // 0x260f50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x260f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260f54:
    // 0x260f54: 0x24070146  addiu       $a3, $zero, 0x146
    ctx->pc = 0x260f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
label_260f58:
    // 0x260f58: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x260f58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
label_260f5c:
    // 0x260f5c: 0xc04229e  jal         func_108A78
label_260f60:
    if (ctx->pc == 0x260F60u) {
        ctx->pc = 0x260F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F5Cu;
        // 0x260f60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F64u;
        goto label_260f64;
    }
    ctx->pc = 0x260F5Cu;
    SET_GPR_U32(ctx, 31, 0x260F64u);
    ctx->pc = 0x260F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F5Cu;
    // 0x260f60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x260F5Cu, 0x260F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F64u;
label_260f64:
    // 0x260f64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x260f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_260f68:
    // 0x260f68: 0xc05d53a  jal         func_1754E8
label_260f6c:
    if (ctx->pc == 0x260F6Cu) {
        ctx->pc = 0x260F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F68u;
        // 0x260f6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F70u;
        goto label_260f70;
    }
    ctx->pc = 0x260F68u;
    SET_GPR_U32(ctx, 31, 0x260F70u);
    ctx->pc = 0x260F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F68u;
    // 0x260f6c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x260F68u, 0x260F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F70u;
label_260f70:
    // 0x260f70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260f74:
    // 0x260f74: 0xc05d4f6  jal         func_1753D8
label_260f78:
    if (ctx->pc == 0x260F78u) {
        ctx->pc = 0x260F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F74u;
        // 0x260f78: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F7Cu;
        goto label_260f7c;
    }
    ctx->pc = 0x260F74u;
    SET_GPR_U32(ctx, 31, 0x260F7Cu);
    ctx->pc = 0x260F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F74u;
    // 0x260f78: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x260F74u, 0x260F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F7Cu;
label_260f7c:
    // 0x260f7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260f80:
    // 0x260f80: 0xc089990  jal         func_226640
label_260f84:
    if (ctx->pc == 0x260F84u) {
        ctx->pc = 0x260F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F80u;
        // 0x260f84: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F88u;
        goto label_260f88;
    }
    ctx->pc = 0x260F80u;
    SET_GPR_U32(ctx, 31, 0x260F88u);
    ctx->pc = 0x260F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F80u;
    // 0x260f84: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x260F80u, 0x260F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F88u;
label_260f88:
    // 0x260f88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x260f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260f8c:
    // 0x260f8c: 0xc089a44  jal         func_226910
label_260f90:
    if (ctx->pc == 0x260F90u) {
        ctx->pc = 0x260F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F8Cu;
        // 0x260f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F94u;
        goto label_260f94;
    }
    ctx->pc = 0x260F8Cu;
    SET_GPR_U32(ctx, 31, 0x260F94u);
    ctx->pc = 0x260F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F8Cu;
    // 0x260f90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226910u, 0x260F8Cu, 0x260F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F94u;
label_260f94:
    // 0x260f94: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x260f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_260f98:
    // 0x260f98: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x260f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_260f9c:
    // 0x260f9c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x260f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_260fa0:
    // 0x260fa0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x260fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_260fa4:
    // 0x260fa4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x260fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_260fa8:
    // 0x260fa8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x260fa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_260fac:
    // 0x260fac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x260facu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_260fb0:
    // 0x260fb0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x260fb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_260fb4:
    // 0x260fb4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x260fb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_260fb8:
    // 0x260fb8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x260fb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_260fbc:
    // 0x260fbc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x260fbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_260fc0:
    // 0x260fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x260fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260fc4:
    // 0x260fc4: 0x3e00008  jr          $ra
label_260fc8:
    if (ctx->pc == 0x260FC8u) {
        ctx->pc = 0x260FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FC4u;
        // 0x260fc8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260FCCu;
        goto label_260fcc;
    }
    ctx->pc = 0x260FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FC4u;
        // 0x260fc8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260FCCu;
label_260fcc:
    // 0x260fcc: 0x0  nop
    ctx->pc = 0x260fccu;
    // NOP
    ctx->pc = 0x260fd0u;
}
