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

// Function: sub_00201B50
// Address: 0x201b50 - 0x201fc0
void sub_00201B50_0x201b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201B50_0x201b50");
#endif

    switch (ctx->pc) {
        case 0x201b50u: goto label_201b50;
        case 0x201b54u: goto label_201b54;
        case 0x201b58u: goto label_201b58;
        case 0x201b5cu: goto label_201b5c;
        case 0x201b60u: goto label_201b60;
        case 0x201b64u: goto label_201b64;
        case 0x201b68u: goto label_201b68;
        case 0x201b6cu: goto label_201b6c;
        case 0x201b70u: goto label_201b70;
        case 0x201b74u: goto label_201b74;
        case 0x201b78u: goto label_201b78;
        case 0x201b7cu: goto label_201b7c;
        case 0x201b80u: goto label_201b80;
        case 0x201b84u: goto label_201b84;
        case 0x201b88u: goto label_201b88;
        case 0x201b8cu: goto label_201b8c;
        case 0x201b90u: goto label_201b90;
        case 0x201b94u: goto label_201b94;
        case 0x201b98u: goto label_201b98;
        case 0x201b9cu: goto label_201b9c;
        case 0x201ba0u: goto label_201ba0;
        case 0x201ba4u: goto label_201ba4;
        case 0x201ba8u: goto label_201ba8;
        case 0x201bacu: goto label_201bac;
        case 0x201bb0u: goto label_201bb0;
        case 0x201bb4u: goto label_201bb4;
        case 0x201bb8u: goto label_201bb8;
        case 0x201bbcu: goto label_201bbc;
        case 0x201bc0u: goto label_201bc0;
        case 0x201bc4u: goto label_201bc4;
        case 0x201bc8u: goto label_201bc8;
        case 0x201bccu: goto label_201bcc;
        case 0x201bd0u: goto label_201bd0;
        case 0x201bd4u: goto label_201bd4;
        case 0x201bd8u: goto label_201bd8;
        case 0x201bdcu: goto label_201bdc;
        case 0x201be0u: goto label_201be0;
        case 0x201be4u: goto label_201be4;
        case 0x201be8u: goto label_201be8;
        case 0x201becu: goto label_201bec;
        case 0x201bf0u: goto label_201bf0;
        case 0x201bf4u: goto label_201bf4;
        case 0x201bf8u: goto label_201bf8;
        case 0x201bfcu: goto label_201bfc;
        case 0x201c00u: goto label_201c00;
        case 0x201c04u: goto label_201c04;
        case 0x201c08u: goto label_201c08;
        case 0x201c0cu: goto label_201c0c;
        case 0x201c10u: goto label_201c10;
        case 0x201c14u: goto label_201c14;
        case 0x201c18u: goto label_201c18;
        case 0x201c1cu: goto label_201c1c;
        case 0x201c20u: goto label_201c20;
        case 0x201c24u: goto label_201c24;
        case 0x201c28u: goto label_201c28;
        case 0x201c2cu: goto label_201c2c;
        case 0x201c30u: goto label_201c30;
        case 0x201c34u: goto label_201c34;
        case 0x201c38u: goto label_201c38;
        case 0x201c3cu: goto label_201c3c;
        case 0x201c40u: goto label_201c40;
        case 0x201c44u: goto label_201c44;
        case 0x201c48u: goto label_201c48;
        case 0x201c4cu: goto label_201c4c;
        case 0x201c50u: goto label_201c50;
        case 0x201c54u: goto label_201c54;
        case 0x201c58u: goto label_201c58;
        case 0x201c5cu: goto label_201c5c;
        case 0x201c60u: goto label_201c60;
        case 0x201c64u: goto label_201c64;
        case 0x201c68u: goto label_201c68;
        case 0x201c6cu: goto label_201c6c;
        case 0x201c70u: goto label_201c70;
        case 0x201c74u: goto label_201c74;
        case 0x201c78u: goto label_201c78;
        case 0x201c7cu: goto label_201c7c;
        case 0x201c80u: goto label_201c80;
        case 0x201c84u: goto label_201c84;
        case 0x201c88u: goto label_201c88;
        case 0x201c8cu: goto label_201c8c;
        case 0x201c90u: goto label_201c90;
        case 0x201c94u: goto label_201c94;
        case 0x201c98u: goto label_201c98;
        case 0x201c9cu: goto label_201c9c;
        case 0x201ca0u: goto label_201ca0;
        case 0x201ca4u: goto label_201ca4;
        case 0x201ca8u: goto label_201ca8;
        case 0x201cacu: goto label_201cac;
        case 0x201cb0u: goto label_201cb0;
        case 0x201cb4u: goto label_201cb4;
        case 0x201cb8u: goto label_201cb8;
        case 0x201cbcu: goto label_201cbc;
        case 0x201cc0u: goto label_201cc0;
        case 0x201cc4u: goto label_201cc4;
        case 0x201cc8u: goto label_201cc8;
        case 0x201cccu: goto label_201ccc;
        case 0x201cd0u: goto label_201cd0;
        case 0x201cd4u: goto label_201cd4;
        case 0x201cd8u: goto label_201cd8;
        case 0x201cdcu: goto label_201cdc;
        case 0x201ce0u: goto label_201ce0;
        case 0x201ce4u: goto label_201ce4;
        case 0x201ce8u: goto label_201ce8;
        case 0x201cecu: goto label_201cec;
        case 0x201cf0u: goto label_201cf0;
        case 0x201cf4u: goto label_201cf4;
        case 0x201cf8u: goto label_201cf8;
        case 0x201cfcu: goto label_201cfc;
        case 0x201d00u: goto label_201d00;
        case 0x201d04u: goto label_201d04;
        case 0x201d08u: goto label_201d08;
        case 0x201d0cu: goto label_201d0c;
        case 0x201d10u: goto label_201d10;
        case 0x201d14u: goto label_201d14;
        case 0x201d18u: goto label_201d18;
        case 0x201d1cu: goto label_201d1c;
        case 0x201d20u: goto label_201d20;
        case 0x201d24u: goto label_201d24;
        case 0x201d28u: goto label_201d28;
        case 0x201d2cu: goto label_201d2c;
        case 0x201d30u: goto label_201d30;
        case 0x201d34u: goto label_201d34;
        case 0x201d38u: goto label_201d38;
        case 0x201d3cu: goto label_201d3c;
        case 0x201d40u: goto label_201d40;
        case 0x201d44u: goto label_201d44;
        case 0x201d48u: goto label_201d48;
        case 0x201d4cu: goto label_201d4c;
        case 0x201d50u: goto label_201d50;
        case 0x201d54u: goto label_201d54;
        case 0x201d58u: goto label_201d58;
        case 0x201d5cu: goto label_201d5c;
        case 0x201d60u: goto label_201d60;
        case 0x201d64u: goto label_201d64;
        case 0x201d68u: goto label_201d68;
        case 0x201d6cu: goto label_201d6c;
        case 0x201d70u: goto label_201d70;
        case 0x201d74u: goto label_201d74;
        case 0x201d78u: goto label_201d78;
        case 0x201d7cu: goto label_201d7c;
        case 0x201d80u: goto label_201d80;
        case 0x201d84u: goto label_201d84;
        case 0x201d88u: goto label_201d88;
        case 0x201d8cu: goto label_201d8c;
        case 0x201d90u: goto label_201d90;
        case 0x201d94u: goto label_201d94;
        case 0x201d98u: goto label_201d98;
        case 0x201d9cu: goto label_201d9c;
        case 0x201da0u: goto label_201da0;
        case 0x201da4u: goto label_201da4;
        case 0x201da8u: goto label_201da8;
        case 0x201dacu: goto label_201dac;
        case 0x201db0u: goto label_201db0;
        case 0x201db4u: goto label_201db4;
        case 0x201db8u: goto label_201db8;
        case 0x201dbcu: goto label_201dbc;
        case 0x201dc0u: goto label_201dc0;
        case 0x201dc4u: goto label_201dc4;
        case 0x201dc8u: goto label_201dc8;
        case 0x201dccu: goto label_201dcc;
        case 0x201dd0u: goto label_201dd0;
        case 0x201dd4u: goto label_201dd4;
        case 0x201dd8u: goto label_201dd8;
        case 0x201ddcu: goto label_201ddc;
        case 0x201de0u: goto label_201de0;
        case 0x201de4u: goto label_201de4;
        case 0x201de8u: goto label_201de8;
        case 0x201decu: goto label_201dec;
        case 0x201df0u: goto label_201df0;
        case 0x201df4u: goto label_201df4;
        case 0x201df8u: goto label_201df8;
        case 0x201dfcu: goto label_201dfc;
        case 0x201e00u: goto label_201e00;
        case 0x201e04u: goto label_201e04;
        case 0x201e08u: goto label_201e08;
        case 0x201e0cu: goto label_201e0c;
        case 0x201e10u: goto label_201e10;
        case 0x201e14u: goto label_201e14;
        case 0x201e18u: goto label_201e18;
        case 0x201e1cu: goto label_201e1c;
        case 0x201e20u: goto label_201e20;
        case 0x201e24u: goto label_201e24;
        case 0x201e28u: goto label_201e28;
        case 0x201e2cu: goto label_201e2c;
        case 0x201e30u: goto label_201e30;
        case 0x201e34u: goto label_201e34;
        case 0x201e38u: goto label_201e38;
        case 0x201e3cu: goto label_201e3c;
        case 0x201e40u: goto label_201e40;
        case 0x201e44u: goto label_201e44;
        case 0x201e48u: goto label_201e48;
        case 0x201e4cu: goto label_201e4c;
        case 0x201e50u: goto label_201e50;
        case 0x201e54u: goto label_201e54;
        case 0x201e58u: goto label_201e58;
        case 0x201e5cu: goto label_201e5c;
        case 0x201e60u: goto label_201e60;
        case 0x201e64u: goto label_201e64;
        case 0x201e68u: goto label_201e68;
        case 0x201e6cu: goto label_201e6c;
        case 0x201e70u: goto label_201e70;
        case 0x201e74u: goto label_201e74;
        case 0x201e78u: goto label_201e78;
        case 0x201e7cu: goto label_201e7c;
        case 0x201e80u: goto label_201e80;
        case 0x201e84u: goto label_201e84;
        case 0x201e88u: goto label_201e88;
        case 0x201e8cu: goto label_201e8c;
        case 0x201e90u: goto label_201e90;
        case 0x201e94u: goto label_201e94;
        case 0x201e98u: goto label_201e98;
        case 0x201e9cu: goto label_201e9c;
        case 0x201ea0u: goto label_201ea0;
        case 0x201ea4u: goto label_201ea4;
        case 0x201ea8u: goto label_201ea8;
        case 0x201eacu: goto label_201eac;
        case 0x201eb0u: goto label_201eb0;
        case 0x201eb4u: goto label_201eb4;
        case 0x201eb8u: goto label_201eb8;
        case 0x201ebcu: goto label_201ebc;
        case 0x201ec0u: goto label_201ec0;
        case 0x201ec4u: goto label_201ec4;
        case 0x201ec8u: goto label_201ec8;
        case 0x201eccu: goto label_201ecc;
        case 0x201ed0u: goto label_201ed0;
        case 0x201ed4u: goto label_201ed4;
        case 0x201ed8u: goto label_201ed8;
        case 0x201edcu: goto label_201edc;
        case 0x201ee0u: goto label_201ee0;
        case 0x201ee4u: goto label_201ee4;
        case 0x201ee8u: goto label_201ee8;
        case 0x201eecu: goto label_201eec;
        case 0x201ef0u: goto label_201ef0;
        case 0x201ef4u: goto label_201ef4;
        case 0x201ef8u: goto label_201ef8;
        case 0x201efcu: goto label_201efc;
        case 0x201f00u: goto label_201f00;
        case 0x201f04u: goto label_201f04;
        case 0x201f08u: goto label_201f08;
        case 0x201f0cu: goto label_201f0c;
        case 0x201f10u: goto label_201f10;
        case 0x201f14u: goto label_201f14;
        case 0x201f18u: goto label_201f18;
        case 0x201f1cu: goto label_201f1c;
        case 0x201f20u: goto label_201f20;
        case 0x201f24u: goto label_201f24;
        case 0x201f28u: goto label_201f28;
        case 0x201f2cu: goto label_201f2c;
        case 0x201f30u: goto label_201f30;
        case 0x201f34u: goto label_201f34;
        case 0x201f38u: goto label_201f38;
        case 0x201f3cu: goto label_201f3c;
        case 0x201f40u: goto label_201f40;
        case 0x201f44u: goto label_201f44;
        case 0x201f48u: goto label_201f48;
        case 0x201f4cu: goto label_201f4c;
        case 0x201f50u: goto label_201f50;
        case 0x201f54u: goto label_201f54;
        case 0x201f58u: goto label_201f58;
        case 0x201f5cu: goto label_201f5c;
        case 0x201f60u: goto label_201f60;
        case 0x201f64u: goto label_201f64;
        case 0x201f68u: goto label_201f68;
        case 0x201f6cu: goto label_201f6c;
        case 0x201f70u: goto label_201f70;
        case 0x201f74u: goto label_201f74;
        case 0x201f78u: goto label_201f78;
        case 0x201f7cu: goto label_201f7c;
        case 0x201f80u: goto label_201f80;
        case 0x201f84u: goto label_201f84;
        case 0x201f88u: goto label_201f88;
        case 0x201f8cu: goto label_201f8c;
        case 0x201f90u: goto label_201f90;
        case 0x201f94u: goto label_201f94;
        case 0x201f98u: goto label_201f98;
        case 0x201f9cu: goto label_201f9c;
        case 0x201fa0u: goto label_201fa0;
        case 0x201fa4u: goto label_201fa4;
        case 0x201fa8u: goto label_201fa8;
        case 0x201facu: goto label_201fac;
        case 0x201fb0u: goto label_201fb0;
        case 0x201fb4u: goto label_201fb4;
        case 0x201fb8u: goto label_201fb8;
        case 0x201fbcu: goto label_201fbc;
        default: break;
    }

    ctx->pc = 0x201b50u;

label_201b50:
    // 0x201b50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x201b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_201b54:
    // 0x201b54: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x201b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_201b58:
    // 0x201b58: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x201b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_201b5c:
    // 0x201b5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x201b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_201b60:
    // 0x201b60: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x201b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_201b64:
    // 0x201b64: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x201b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_201b68:
    // 0x201b68: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x201b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_201b6c:
    // 0x201b6c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x201b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_201b70:
    // 0x201b70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x201b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_201b74:
    // 0x201b74: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x201b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_201b78:
    // 0x201b78: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x201b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_201b7c:
    // 0x201b7c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x201b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_201b80:
    // 0x201b80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x201b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_201b84:
    // 0x201b84: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x201b84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_201b88:
    // 0x201b88: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x201b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_201b8c:
    // 0x201b8c: 0x40f809  jalr        $v0
label_201b90:
    if (ctx->pc == 0x201B90u) {
        ctx->pc = 0x201B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B8Cu;
        // 0x201b90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201B94u;
        goto label_201b94;
    }
    ctx->pc = 0x201B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201B94u);
        ctx->pc = 0x201B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B8Cu;
        // 0x201b90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201B8Cu, 0x201B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201B94u;
label_201b94:
    // 0x201b94: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
label_201b98:
    if (ctx->pc == 0x201B98u) {
        ctx->pc = 0x201B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B94u;
        // 0x201b98: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201B9Cu;
        goto label_201b9c;
    }
    ctx->pc = 0x201B94u;
    {
        const bool branch_taken_0x201b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201B94u;
        // 0x201b98: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201b94) {
            ctx->pc = 0x201F90u;
            goto label_201f90;
        }
    }
    ctx->pc = 0x201B9Cu;
label_201b9c:
    // 0x201b9c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x201b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_201ba0:
    // 0x201ba0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x201ba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_201ba4:
    // 0x201ba4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x201ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_201ba8:
    // 0x201ba8: 0x40f809  jalr        $v0
label_201bac:
    if (ctx->pc == 0x201BACu) {
        ctx->pc = 0x201BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BA8u;
        // 0x201bac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201BB0u;
        goto label_201bb0;
    }
    ctx->pc = 0x201BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201BB0u);
        ctx->pc = 0x201BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BA8u;
        // 0x201bac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201BA8u, 0x201BB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201BB0u;
label_201bb0:
    // 0x201bb0: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
label_201bb4:
    if (ctx->pc == 0x201BB4u) {
        ctx->pc = 0x201BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BB0u;
        // 0x201bb4: 0x26420094  addiu       $v0, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201BB8u;
        goto label_201bb8;
    }
    ctx->pc = 0x201BB0u;
    {
        const bool branch_taken_0x201bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BB0u;
        // 0x201bb4: 0x26420094  addiu       $v0, $s2, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201bb0) {
            ctx->pc = 0x201F8Cu;
            goto label_201f8c;
        }
    }
    ctx->pc = 0x201BB8u;
label_201bb8:
    // 0x201bb8: 0x8e4500c0  lw          $a1, 0xC0($s2)
    ctx->pc = 0x201bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_201bbc:
    // 0x201bbc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x201bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_201bc0:
    // 0x201bc0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x201bc0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201bc4:
    // 0x201bc4: 0x2e0b02d  daddu       $s6, $s7, $zero
    ctx->pc = 0x201bc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_201bc8:
    // 0x201bc8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x201bc8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201bcc:
    // 0x201bcc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201bd0:
    // 0x201bd0: 0x265500a0  addiu       $s5, $s2, 0xA0
    ctx->pc = 0x201bd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_201bd4:
    // 0x201bd4: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x201bd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_201bd8:
    // 0x201bd8: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x201bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_201bdc:
    // 0x201bdc: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x201bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_201be0:
    // 0x201be0: 0x40f809  jalr        $v0
label_201be4:
    if (ctx->pc == 0x201BE4u) {
        ctx->pc = 0x201BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BE0u;
        // 0x201be4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201BE8u;
        goto label_201be8;
    }
    ctx->pc = 0x201BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201BE8u);
        ctx->pc = 0x201BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BE0u;
        // 0x201be4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201BE0u, 0x201BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201BE8u;
label_201be8:
    // 0x201be8: 0x8e4500bc  lw          $a1, 0xBC($s2)
    ctx->pc = 0x201be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_201bec:
    // 0x201bec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201bf0:
    // 0x201bf0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x201bf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_201bf4:
    // 0x201bf4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x201bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_201bf8:
    // 0x201bf8: 0x60f809  jalr        $v1
label_201bfc:
    if (ctx->pc == 0x201BFCu) {
        ctx->pc = 0x201BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BF8u;
        // 0x201bfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C00u;
        goto label_201c00;
    }
    ctx->pc = 0x201BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201C00u);
        ctx->pc = 0x201BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201BF8u;
        // 0x201bfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201BF8u, 0x201C00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201C00u;
label_201c00:
    // 0x201c00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x201c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_201c04:
    // 0x201c04: 0xc061748  jal         func_185D20
label_201c08:
    if (ctx->pc == 0x201C08u) {
        ctx->pc = 0x201C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C04u;
        // 0x201c08: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C0Cu;
        goto label_201c0c;
    }
    ctx->pc = 0x201C04u;
    SET_GPR_U32(ctx, 31, 0x201C0Cu);
    ctx->pc = 0x201C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C04u;
    // 0x201c08: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x201C04u, 0x201C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C0Cu;
label_201c0c:
    // 0x201c0c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x201c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_201c10:
    // 0x201c10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x201c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_201c14:
    // 0x201c14: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x201c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_201c18:
    // 0x201c18: 0xc07f8c0  jal         func_1FE300
label_201c1c:
    if (ctx->pc == 0x201C1Cu) {
        ctx->pc = 0x201C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C18u;
        // 0x201c1c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C20u;
        goto label_201c20;
    }
    ctx->pc = 0x201C18u;
    SET_GPR_U32(ctx, 31, 0x201C20u);
    ctx->pc = 0x201C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C18u;
    // 0x201c1c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE300u, 0x201C18u, 0x201C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C20u;
label_201c20:
    // 0x201c20: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_201c24:
    if (ctx->pc == 0x201C24u) {
        ctx->pc = 0x201C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C20u;
        // 0x201c24: 0x8ea60000  lw          $a2, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C28u;
        goto label_201c28;
    }
    ctx->pc = 0x201C20u;
    {
        const bool branch_taken_0x201c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C20u;
        // 0x201c24: 0x8ea60000  lw          $a2, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c20) {
            ctx->pc = 0x201D0Cu;
            goto label_201d0c;
        }
    }
    ctx->pc = 0x201C28u;
label_201c28:
    // 0x201c28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201c2c:
    // 0x201c2c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x201c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_201c30:
    // 0x201c30: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x201c30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_201c34:
    // 0x201c34: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x201c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_201c38:
    // 0x201c38: 0x60f809  jalr        $v1
label_201c3c:
    if (ctx->pc == 0x201C3Cu) {
        ctx->pc = 0x201C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C38u;
        // 0x201c3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C40u;
        goto label_201c40;
    }
    ctx->pc = 0x201C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201C40u);
        ctx->pc = 0x201C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C38u;
        // 0x201c3c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C38u, 0x201C40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201C40u;
label_201c40:
    // 0x201c40: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x201c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_201c44:
    // 0x201c44: 0xc08e86c  jal         func_23A1B0
label_201c48:
    if (ctx->pc == 0x201C48u) {
        ctx->pc = 0x201C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C44u;
        // 0x201c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C4Cu;
        goto label_201c4c;
    }
    ctx->pc = 0x201C44u;
    SET_GPR_U32(ctx, 31, 0x201C4Cu);
    ctx->pc = 0x201C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C44u;
    // 0x201c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A1B0u, 0x201C44u, 0x201C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C4Cu;
label_201c4c:
    // 0x201c4c: 0xc0e409a  jal         func_390268
label_201c50:
    if (ctx->pc == 0x201C50u) {
        ctx->pc = 0x201C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C4Cu;
        // 0x201c50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C54u;
        goto label_201c54;
    }
    ctx->pc = 0x201C4Cu;
    SET_GPR_U32(ctx, 31, 0x201C54u);
    ctx->pc = 0x201C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201C4Cu;
    // 0x201c50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x201C4Cu, 0x201C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201C54u;
label_201c54:
    // 0x201c54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x201c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201c58:
    // 0x201c58: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x201c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_201c5c:
    // 0x201c5c: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x201c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_201c60:
    // 0x201c60: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_201c64:
    if (ctx->pc == 0x201C64u) {
        ctx->pc = 0x201C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C60u;
        // 0x201c64: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C68u;
        goto label_201c68;
    }
    ctx->pc = 0x201C60u;
    {
        const bool branch_taken_0x201c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x201C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C60u;
        // 0x201c64: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c60) {
            ctx->pc = 0x201C70u;
            goto label_201c70;
        }
    }
    ctx->pc = 0x201C68u;
label_201c68:
    // 0x201c68: 0x1000000d  b           . + 4 + (0xD << 2)
label_201c6c:
    if (ctx->pc == 0x201C6Cu) {
        ctx->pc = 0x201C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C68u;
        // 0x201c6c: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C70u;
        goto label_201c70;
    }
    ctx->pc = 0x201C68u;
    {
        const bool branch_taken_0x201c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C68u;
        // 0x201c6c: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201c68) {
            ctx->pc = 0x201CA0u;
            goto label_201ca0;
        }
    }
    ctx->pc = 0x201C70u;
label_201c70:
    // 0x201c70: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x201c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_201c74:
    // 0x201c74: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x201c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_201c78:
    // 0x201c78: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_201c7c:
    if (ctx->pc == 0x201C7Cu) {
        ctx->pc = 0x201C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C78u;
        // 0x201c7c: 0x86230092  lh          $v1, 0x92($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C80u;
        goto label_201c80;
    }
    ctx->pc = 0x201C78u;
    {
        const bool branch_taken_0x201c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x201c78) {
            ctx->pc = 0x201C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201C78u;
            // 0x201c7c: 0x86230092  lh          $v1, 0x92($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201CA4u;
            goto label_201ca4;
        }
    }
    ctx->pc = 0x201C80u;
label_201c80:
    // 0x201c80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x201c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_201c84:
    // 0x201c84: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x201c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_201c88:
    // 0x201c88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201c8c:
    // 0x201c8c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x201c8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_201c90:
    // 0x201c90: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x201c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_201c94:
    // 0x201c94: 0x40f809  jalr        $v0
label_201c98:
    if (ctx->pc == 0x201C98u) {
        ctx->pc = 0x201C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C94u;
        // 0x201c98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201C9Cu;
        goto label_201c9c;
    }
    ctx->pc = 0x201C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201C9Cu);
        ctx->pc = 0x201C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201C94u;
        // 0x201c98: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201C94u, 0x201C9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201C9Cu;
label_201c9c:
    // 0x201c9c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x201c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_201ca0:
    // 0x201ca0: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x201ca0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_201ca4:
    // 0x201ca4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x201ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_201ca8:
    // 0x201ca8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x201ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_201cac:
    // 0x201cac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x201cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201cb0:
    // 0x201cb0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x201cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_201cb4:
    // 0x201cb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_201cb8:
    // 0x201cb8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x201cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_201cbc:
    // 0x201cbc: 0xc047e6c  jal         func_11F9B0
label_201cc0:
    if (ctx->pc == 0x201CC0u) {
        ctx->pc = 0x201CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CBCu;
        // 0x201cc0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201CC4u;
        goto label_201cc4;
    }
    ctx->pc = 0x201CBCu;
    SET_GPR_U32(ctx, 31, 0x201CC4u);
    ctx->pc = 0x201CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CBCu;
    // 0x201cc0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x201CBCu, 0x201CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CC4u;
label_201cc4:
    // 0x201cc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x201cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201cc8:
    // 0x201cc8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x201cc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_201ccc:
    // 0x201ccc: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x201cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_201cd0:
    // 0x201cd0: 0xa0f809  jalr        $a1
label_201cd4:
    if (ctx->pc == 0x201CD4u) {
        ctx->pc = 0x201CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CD0u;
        // 0x201cd4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201CD8u;
        goto label_201cd8;
    }
    ctx->pc = 0x201CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x201CD8u);
        ctx->pc = 0x201CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CD0u;
        // 0x201cd4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201CD0u, 0x201CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201CD8u;
label_201cd8:
    // 0x201cd8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201cdc:
    // 0x201cdc: 0xc0cd780  jal         func_335E00
label_201ce0:
    if (ctx->pc == 0x201CE0u) {
        ctx->pc = 0x201CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CDCu;
        // 0x201ce0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201CE4u;
        goto label_201ce4;
    }
    ctx->pc = 0x201CDCu;
    SET_GPR_U32(ctx, 31, 0x201CE4u);
    ctx->pc = 0x201CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CDCu;
    // 0x201ce0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x201CDCu, 0x201CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CE4u;
label_201ce4:
    // 0x201ce4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x201ce4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_201ce8:
    // 0x201ce8: 0xc0cd7a8  jal         func_335EA0
label_201cec:
    if (ctx->pc == 0x201CECu) {
        ctx->pc = 0x201CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CE8u;
        // 0x201cec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201CF0u;
        goto label_201cf0;
    }
    ctx->pc = 0x201CE8u;
    SET_GPR_U32(ctx, 31, 0x201CF0u);
    ctx->pc = 0x201CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CE8u;
    // 0x201cec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x201CE8u, 0x201CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CF0u;
label_201cf0:
    // 0x201cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x201cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_201cf4:
    // 0x201cf4: 0xc086c40  jal         func_21B100
label_201cf8:
    if (ctx->pc == 0x201CF8u) {
        ctx->pc = 0x201CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CF4u;
        // 0x201cf8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201CFCu;
        goto label_201cfc;
    }
    ctx->pc = 0x201CF4u;
    SET_GPR_U32(ctx, 31, 0x201CFCu);
    ctx->pc = 0x201CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CF4u;
    // 0x201cf8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x201CF4u, 0x201CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201CFCu;
label_201cfc:
    // 0x201cfc: 0xc08dfa6  jal         func_237E98
label_201d00:
    if (ctx->pc == 0x201D00u) {
        ctx->pc = 0x201D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201CFCu;
        // 0x201d00: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D04u;
        goto label_201d04;
    }
    ctx->pc = 0x201CFCu;
    SET_GPR_U32(ctx, 31, 0x201D04u);
    ctx->pc = 0x201D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201CFCu;
    // 0x201d00: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E98u, 0x201CFCu, 0x201D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D04u;
label_201d04:
    // 0x201d04: 0x1000002d  b           . + 4 + (0x2D << 2)
label_201d08:
    if (ctx->pc == 0x201D08u) {
        ctx->pc = 0x201D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D04u;
        // 0x201d08: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D0Cu;
        goto label_201d0c;
    }
    ctx->pc = 0x201D04u;
    {
        const bool branch_taken_0x201d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D04u;
        // 0x201d08: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d04) {
            ctx->pc = 0x201DBCu;
            goto label_201dbc;
        }
    }
    ctx->pc = 0x201D0Cu;
label_201d0c:
    // 0x201d0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x201d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_201d10:
    // 0x201d10: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x201d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_201d14:
    // 0x201d14: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x201d14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_201d18:
    // 0x201d18: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x201d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_201d1c:
    // 0x201d1c: 0x60f809  jalr        $v1
label_201d20:
    if (ctx->pc == 0x201D20u) {
        ctx->pc = 0x201D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D1Cu;
        // 0x201d20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D24u;
        goto label_201d24;
    }
    ctx->pc = 0x201D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201D24u);
        ctx->pc = 0x201D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D1Cu;
        // 0x201d20: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201D1Cu, 0x201D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201D24u;
label_201d24:
    // 0x201d24: 0xc0e409a  jal         func_390268
label_201d28:
    if (ctx->pc == 0x201D28u) {
        ctx->pc = 0x201D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D24u;
        // 0x201d28: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D2Cu;
        goto label_201d2c;
    }
    ctx->pc = 0x201D24u;
    SET_GPR_U32(ctx, 31, 0x201D2Cu);
    ctx->pc = 0x201D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D24u;
    // 0x201d28: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x201D24u, 0x201D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D2Cu;
label_201d2c:
    // 0x201d2c: 0x84430092  lh          $v1, 0x92($v0)
    ctx->pc = 0x201d2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
label_201d30:
    // 0x201d30: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x201d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_201d34:
    // 0x201d34: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x201d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_201d38:
    // 0x201d38: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x201d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_201d3c:
    // 0x201d3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_201d40:
    // 0x201d40: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x201d40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_201d44:
    // 0x201d44: 0xc07f8a8  jal         func_1FE2A0
label_201d48:
    if (ctx->pc == 0x201D48u) {
        ctx->pc = 0x201D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D44u;
        // 0x201d48: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D4Cu;
        goto label_201d4c;
    }
    ctx->pc = 0x201D44u;
    SET_GPR_U32(ctx, 31, 0x201D4Cu);
    ctx->pc = 0x201D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D44u;
    // 0x201d48: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2A0u, 0x201D44u, 0x201D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D4Cu;
label_201d4c:
    // 0x201d4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201d50:
    // 0x201d50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x201d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_201d54:
    // 0x201d54: 0xc086c2e  jal         func_21B0B8
label_201d58:
    if (ctx->pc == 0x201D58u) {
        ctx->pc = 0x201D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D54u;
        // 0x201d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D5Cu;
        goto label_201d5c;
    }
    ctx->pc = 0x201D54u;
    SET_GPR_U32(ctx, 31, 0x201D5Cu);
    ctx->pc = 0x201D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D54u;
    // 0x201d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x201D54u, 0x201D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D5Cu;
label_201d5c:
    // 0x201d5c: 0xc047e6c  jal         func_11F9B0
label_201d60:
    if (ctx->pc == 0x201D60u) {
        ctx->pc = 0x201D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D5Cu;
        // 0x201d60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D64u;
        goto label_201d64;
    }
    ctx->pc = 0x201D5Cu;
    SET_GPR_U32(ctx, 31, 0x201D64u);
    ctx->pc = 0x201D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D5Cu;
    // 0x201d60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x201D5Cu, 0x201D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D64u;
label_201d64:
    // 0x201d64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x201d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201d68:
    // 0x201d68: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x201d68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_201d6c:
    // 0x201d6c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x201d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_201d70:
    // 0x201d70: 0xa0f809  jalr        $a1
label_201d74:
    if (ctx->pc == 0x201D74u) {
        ctx->pc = 0x201D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D70u;
        // 0x201d74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D78u;
        goto label_201d78;
    }
    ctx->pc = 0x201D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x201D78u);
        ctx->pc = 0x201D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D70u;
        // 0x201d74: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201D70u, 0x201D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201D78u;
label_201d78:
    // 0x201d78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201d7c:
    // 0x201d7c: 0xc0cd780  jal         func_335E00
label_201d80:
    if (ctx->pc == 0x201D80u) {
        ctx->pc = 0x201D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D7Cu;
        // 0x201d80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D84u;
        goto label_201d84;
    }
    ctx->pc = 0x201D7Cu;
    SET_GPR_U32(ctx, 31, 0x201D84u);
    ctx->pc = 0x201D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D7Cu;
    // 0x201d80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x201D7Cu, 0x201D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D84u;
label_201d84:
    // 0x201d84: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x201d84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_201d88:
    // 0x201d88: 0xc0cd7a8  jal         func_335EA0
label_201d8c:
    if (ctx->pc == 0x201D8Cu) {
        ctx->pc = 0x201D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D88u;
        // 0x201d8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D90u;
        goto label_201d90;
    }
    ctx->pc = 0x201D88u;
    SET_GPR_U32(ctx, 31, 0x201D90u);
    ctx->pc = 0x201D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D88u;
    // 0x201d8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x201D88u, 0x201D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D90u;
label_201d90:
    // 0x201d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x201d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201d94:
    // 0x201d94: 0xc086c40  jal         func_21B100
label_201d98:
    if (ctx->pc == 0x201D98u) {
        ctx->pc = 0x201D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D94u;
        // 0x201d98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201D9Cu;
        goto label_201d9c;
    }
    ctx->pc = 0x201D94u;
    SET_GPR_U32(ctx, 31, 0x201D9Cu);
    ctx->pc = 0x201D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201D94u;
    // 0x201d98: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x201D94u, 0x201D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201D9Cu;
label_201d9c:
    // 0x201d9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x201d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_201da0:
    // 0x201da0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x201da0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_201da4:
    // 0x201da4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x201da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_201da8:
    // 0x201da8: 0x40f809  jalr        $v0
label_201dac:
    if (ctx->pc == 0x201DACu) {
        ctx->pc = 0x201DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DA8u;
        // 0x201dac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201DB0u;
        goto label_201db0;
    }
    ctx->pc = 0x201DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201DB0u);
        ctx->pc = 0x201DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DA8u;
        // 0x201dac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201DA8u, 0x201DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201DB0u;
label_201db0:
    // 0x201db0: 0xc08dfa6  jal         func_237E98
label_201db4:
    if (ctx->pc == 0x201DB4u) {
        ctx->pc = 0x201DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DB0u;
        // 0x201db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201DB8u;
        goto label_201db8;
    }
    ctx->pc = 0x201DB0u;
    SET_GPR_U32(ctx, 31, 0x201DB8u);
    ctx->pc = 0x201DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DB0u;
    // 0x201db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E98u, 0x201DB0u, 0x201DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DB8u;
label_201db8:
    // 0x201db8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x201db8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_201dbc:
    // 0x201dbc: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x201dbcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_201dc0:
    // 0x201dc0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x201dc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_201dc4:
    // 0x201dc4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x201dc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_201dc8:
    // 0x201dc8: 0x2fc20002  sltiu       $v0, $fp, 0x2
    ctx->pc = 0x201dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_201dcc:
    // 0x201dcc: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
label_201dd0:
    if (ctx->pc == 0x201DD0u) {
        ctx->pc = 0x201DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DCCu;
        // 0x201dd0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201DD4u;
        goto label_201dd4;
    }
    ctx->pc = 0x201DCCu;
    {
        const bool branch_taken_0x201dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DCCu;
        // 0x201dd0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201dcc) {
            ctx->pc = 0x201C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201c10;
        }
    }
    ctx->pc = 0x201DD4u;
label_201dd4:
    // 0x201dd4: 0x8e4500b4  lw          $a1, 0xB4($s2)
    ctx->pc = 0x201dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_201dd8:
    // 0x201dd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201ddc:
    // 0x201ddc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x201ddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_201de0:
    // 0x201de0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x201de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_201de4:
    // 0x201de4: 0x60f809  jalr        $v1
label_201de8:
    if (ctx->pc == 0x201DE8u) {
        ctx->pc = 0x201DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DE4u;
        // 0x201de8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201DECu;
        goto label_201dec;
    }
    ctx->pc = 0x201DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201DECu);
        ctx->pc = 0x201DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DE4u;
        // 0x201de8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201DE4u, 0x201DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201DECu;
label_201dec:
    // 0x201dec: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x201decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_201df0:
    // 0x201df0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201df4:
    // 0x201df4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x201df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_201df8:
    // 0x201df8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x201df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_201dfc:
    // 0x201dfc: 0x60f809  jalr        $v1
label_201e00:
    if (ctx->pc == 0x201E00u) {
        ctx->pc = 0x201E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DFCu;
        // 0x201e00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201E04u;
        goto label_201e04;
    }
    ctx->pc = 0x201DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201E04u);
        ctx->pc = 0x201E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DFCu;
        // 0x201e00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201DFCu, 0x201E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201E04u;
label_201e04:
    // 0x201e04: 0x8e4500d0  lw          $a1, 0xD0($s2)
    ctx->pc = 0x201e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_201e08:
    // 0x201e08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201e0c:
    // 0x201e0c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x201e0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_201e10:
    // 0x201e10: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x201e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_201e14:
    // 0x201e14: 0x60f809  jalr        $v1
label_201e18:
    if (ctx->pc == 0x201E18u) {
        ctx->pc = 0x201E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E14u;
        // 0x201e18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201E1Cu;
        goto label_201e1c;
    }
    ctx->pc = 0x201E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201E1Cu);
        ctx->pc = 0x201E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E14u;
        // 0x201e18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E14u, 0x201E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201E1Cu;
label_201e1c:
    // 0x201e1c: 0x8e4500d4  lw          $a1, 0xD4($s2)
    ctx->pc = 0x201e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_201e20:
    // 0x201e20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201e24:
    // 0x201e24: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x201e24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_201e28:
    // 0x201e28: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x201e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_201e2c:
    // 0x201e2c: 0x60f809  jalr        $v1
label_201e30:
    if (ctx->pc == 0x201E30u) {
        ctx->pc = 0x201E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E2Cu;
        // 0x201e30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201E34u;
        goto label_201e34;
    }
    ctx->pc = 0x201E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201E34u);
        ctx->pc = 0x201E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E2Cu;
        // 0x201e30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E2Cu, 0x201E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201E34u;
label_201e34:
    // 0x201e34: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x201e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_201e38:
    // 0x201e38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201e3c:
    // 0x201e3c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x201e3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_201e40:
    // 0x201e40: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x201e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_201e44:
    // 0x201e44: 0x60f809  jalr        $v1
label_201e48:
    if (ctx->pc == 0x201E48u) {
        ctx->pc = 0x201E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E44u;
        // 0x201e48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201E4Cu;
        goto label_201e4c;
    }
    ctx->pc = 0x201E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201E4Cu);
        ctx->pc = 0x201E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E44u;
        // 0x201e48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E44u, 0x201E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201E4Cu;
label_201e4c:
    // 0x201e4c: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x201e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_201e50:
    // 0x201e50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201e54:
    // 0x201e54: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x201e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_201e58:
    // 0x201e58: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x201e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_201e5c:
    // 0x201e5c: 0x60f809  jalr        $v1
label_201e60:
    if (ctx->pc == 0x201E60u) {
        ctx->pc = 0x201E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E5Cu;
        // 0x201e60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201E64u;
        goto label_201e64;
    }
    ctx->pc = 0x201E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201E64u);
        ctx->pc = 0x201E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E5Cu;
        // 0x201e60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E5Cu, 0x201E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201E64u;
label_201e64:
    // 0x201e64: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x201e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_201e68:
    // 0x201e68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201e6c:
    // 0x201e6c: 0x84640108  lh          $a0, 0x108($v1)
    ctx->pc = 0x201e6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 264)));
label_201e70:
    // 0x201e70: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x201e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_201e74:
    // 0x201e74: 0x40f809  jalr        $v0
label_201e78:
    if (ctx->pc == 0x201E78u) {
        ctx->pc = 0x201E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E74u;
        // 0x201e78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201E7Cu;
        goto label_201e7c;
    }
    ctx->pc = 0x201E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201E7Cu);
        ctx->pc = 0x201E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E74u;
        // 0x201e78: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E74u, 0x201E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201E7Cu;
label_201e7c:
    // 0x201e7c: 0x8e4800b8  lw          $t0, 0xB8($s2)
    ctx->pc = 0x201e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_201e80:
    // 0x201e80: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x201e80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_201e84:
    // 0x201e84: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x201e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_201e88:
    // 0x201e88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201e8c:
    // 0x201e8c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x201e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_201e90:
    // 0x201e90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x201e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_201e94:
    // 0x201e94: 0x84c40118  lh          $a0, 0x118($a2)
    ctx->pc = 0x201e94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 280)));
label_201e98:
    // 0x201e98: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x201e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_201e9c:
    // 0x201e9c: 0x8cc2011c  lw          $v0, 0x11C($a2)
    ctx->pc = 0x201e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
label_201ea0:
    // 0x201ea0: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x201ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_201ea4:
    // 0x201ea4: 0x40f809  jalr        $v0
label_201ea8:
    if (ctx->pc == 0x201EA8u) {
        ctx->pc = 0x201EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EA4u;
        // 0x201ea8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201EACu;
        goto label_201eac;
    }
    ctx->pc = 0x201EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201EACu);
        ctx->pc = 0x201EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EA4u;
        // 0x201ea8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201EA4u, 0x201EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201EACu;
label_201eac:
    // 0x201eac: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_201eb0:
    if (ctx->pc == 0x201EB0u) {
        ctx->pc = 0x201EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EACu;
        // 0x201eb0: 0x8e4500b8  lw          $a1, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201EB4u;
        goto label_201eb4;
    }
    ctx->pc = 0x201EACu;
    {
        const bool branch_taken_0x201eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201eac) {
            ctx->pc = 0x201EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201EACu;
            // 0x201eb0: 0x8e4500b8  lw          $a1, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201ED8u;
            goto label_201ed8;
        }
    }
    ctx->pc = 0x201EB4u;
label_201eb4:
    // 0x201eb4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x201eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_201eb8:
    // 0x201eb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201ebc:
    // 0x201ebc: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x201ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_201ec0:
    // 0x201ec0: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x201ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_201ec4:
    // 0x201ec4: 0x40f809  jalr        $v0
label_201ec8:
    if (ctx->pc == 0x201EC8u) {
        ctx->pc = 0x201EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EC4u;
        // 0x201ec8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201ECCu;
        goto label_201ecc;
    }
    ctx->pc = 0x201EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201ECCu);
        ctx->pc = 0x201EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EC4u;
        // 0x201ec8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201EC4u, 0x201ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201ECCu;
label_201ecc:
    // 0x201ecc: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_201ed0:
    if (ctx->pc == 0x201ED0u) {
        ctx->pc = 0x201ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201ECCu;
        // 0x201ed0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201ED4u;
        goto label_201ed4;
    }
    ctx->pc = 0x201ECCu;
    {
        const bool branch_taken_0x201ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201ECCu;
        // 0x201ed0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ecc) {
            ctx->pc = 0x201F90u;
            goto label_201f90;
        }
    }
    ctx->pc = 0x201ED4u;
label_201ed4:
    // 0x201ed4: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x201ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_201ed8:
    // 0x201ed8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201edc:
    // 0x201edc: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x201edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_201ee0:
    // 0x201ee0: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x201ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_201ee4:
    // 0x201ee4: 0x40f809  jalr        $v0
label_201ee8:
    if (ctx->pc == 0x201EE8u) {
        ctx->pc = 0x201EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EE4u;
        // 0x201ee8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201EECu;
        goto label_201eec;
    }
    ctx->pc = 0x201EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201EECu);
        ctx->pc = 0x201EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EE4u;
        // 0x201ee8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201EE4u, 0x201EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201EECu;
label_201eec:
    // 0x201eec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x201eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_201ef0:
    // 0x201ef0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_201ef4:
    if (ctx->pc == 0x201EF4u) {
        ctx->pc = 0x201EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EF0u;
        // 0x201ef4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201EF8u;
        goto label_201ef8;
    }
    ctx->pc = 0x201EF0u;
    {
        const bool branch_taken_0x201ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EF0u;
        // 0x201ef4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ef0) {
            ctx->pc = 0x201F90u;
            goto label_201f90;
        }
    }
    ctx->pc = 0x201EF8u;
label_201ef8:
    // 0x201ef8: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x201ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_201efc:
    // 0x201efc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201f00:
    // 0x201f00: 0x84640150  lh          $a0, 0x150($v1)
    ctx->pc = 0x201f00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
label_201f04:
    // 0x201f04: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x201f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_201f08:
    // 0x201f08: 0x40f809  jalr        $v0
label_201f0c:
    if (ctx->pc == 0x201F0Cu) {
        ctx->pc = 0x201F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F08u;
        // 0x201f0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F10u;
        goto label_201f10;
    }
    ctx->pc = 0x201F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201F10u);
        ctx->pc = 0x201F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F08u;
        // 0x201f0c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F08u, 0x201F10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201F10u;
label_201f10:
    // 0x201f10: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_201f14:
    if (ctx->pc == 0x201F14u) {
        ctx->pc = 0x201F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F10u;
        // 0x201f14: 0x8e4500b8  lw          $a1, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F18u;
        goto label_201f18;
    }
    ctx->pc = 0x201F10u;
    {
        const bool branch_taken_0x201f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201f10) {
            ctx->pc = 0x201F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201F10u;
            // 0x201f14: 0x8e4500b8  lw          $a1, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201F34u;
            goto label_201f34;
        }
    }
    ctx->pc = 0x201F18u;
label_201f18:
    // 0x201f18: 0x8e4500c8  lw          $a1, 0xC8($s2)
    ctx->pc = 0x201f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_201f1c:
    // 0x201f1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201f20:
    // 0x201f20: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x201f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_201f24:
    // 0x201f24: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x201f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_201f28:
    // 0x201f28: 0x60f809  jalr        $v1
label_201f2c:
    if (ctx->pc == 0x201F2Cu) {
        ctx->pc = 0x201F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F28u;
        // 0x201f2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F30u;
        goto label_201f30;
    }
    ctx->pc = 0x201F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201F30u);
        ctx->pc = 0x201F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F28u;
        // 0x201f2c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F28u, 0x201F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201F30u;
label_201f30:
    // 0x201f30: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x201f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_201f34:
    // 0x201f34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201f38:
    // 0x201f38: 0x84640158  lh          $a0, 0x158($v1)
    ctx->pc = 0x201f38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 344)));
label_201f3c:
    // 0x201f3c: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x201f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
label_201f40:
    // 0x201f40: 0x40f809  jalr        $v0
label_201f44:
    if (ctx->pc == 0x201F44u) {
        ctx->pc = 0x201F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F40u;
        // 0x201f44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F48u;
        goto label_201f48;
    }
    ctx->pc = 0x201F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201F48u);
        ctx->pc = 0x201F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F40u;
        // 0x201f44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F40u, 0x201F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201F48u;
label_201f48:
    // 0x201f48: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x201f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_201f4c:
    // 0x201f4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x201f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201f50:
    // 0x201f50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201f54:
    // 0x201f54: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x201f54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_201f58:
    // 0x201f58: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x201f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_201f5c:
    // 0x201f5c: 0x40f809  jalr        $v0
label_201f60:
    if (ctx->pc == 0x201F60u) {
        ctx->pc = 0x201F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F5Cu;
        // 0x201f60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F64u;
        goto label_201f64;
    }
    ctx->pc = 0x201F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201F64u);
        ctx->pc = 0x201F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F5Cu;
        // 0x201f60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F5Cu, 0x201F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201F64u;
label_201f64:
    // 0x201f64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_201f68:
    // 0x201f68: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x201f68u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_201f6c:
    // 0x201f6c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_201f70:
    if (ctx->pc == 0x201F70u) {
        ctx->pc = 0x201F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F6Cu;
        // 0x201f70: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F74u;
        goto label_201f74;
    }
    ctx->pc = 0x201F6Cu;
    {
        const bool branch_taken_0x201f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F6Cu;
        // 0x201f70: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201f6c) {
            ctx->pc = 0x201F90u;
            goto label_201f90;
        }
    }
    ctx->pc = 0x201F74u;
label_201f74:
    // 0x201f74: 0x8e4500cc  lw          $a1, 0xCC($s2)
    ctx->pc = 0x201f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_201f78:
    // 0x201f78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x201f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_201f7c:
    // 0x201f7c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x201f7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_201f80:
    // 0x201f80: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x201f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_201f84:
    // 0x201f84: 0x60f809  jalr        $v1
label_201f88:
    if (ctx->pc == 0x201F88u) {
        ctx->pc = 0x201F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F84u;
        // 0x201f88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201F8Cu;
        goto label_201f8c;
    }
    ctx->pc = 0x201F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x201F8Cu);
        ctx->pc = 0x201F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F84u;
        // 0x201f88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F84u, 0x201F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201F8Cu;
label_201f8c:
    // 0x201f8c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x201f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_201f90:
    // 0x201f90: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x201f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_201f94:
    // 0x201f94: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x201f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_201f98:
    // 0x201f98: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x201f98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_201f9c:
    // 0x201f9c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x201f9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_201fa0:
    // 0x201fa0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x201fa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_201fa4:
    // 0x201fa4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x201fa4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_201fa8:
    // 0x201fa8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x201fa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_201fac:
    // 0x201fac: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x201facu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_201fb0:
    // 0x201fb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x201fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_201fb4:
    // 0x201fb4: 0x3e00008  jr          $ra
label_201fb8:
    if (ctx->pc == 0x201FB8u) {
        ctx->pc = 0x201FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FB4u;
        // 0x201fb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201FBCu;
        goto label_201fbc;
    }
    ctx->pc = 0x201FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201FB4u;
        // 0x201fb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201FBCu;
label_201fbc:
    // 0x201fbc: 0x0  nop
    ctx->pc = 0x201fbcu;
    // NOP
    ctx->pc = 0x201fc0u;
}
