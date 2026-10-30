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

// Function: sub_004A3B48
// Address: 0x4a3b48 - 0x4a3f58
void sub_004A3B48_0x4a3b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3B48_0x4a3b48");
#endif

    switch (ctx->pc) {
        case 0x4a3b48u: goto label_4a3b48;
        case 0x4a3b4cu: goto label_4a3b4c;
        case 0x4a3b50u: goto label_4a3b50;
        case 0x4a3b54u: goto label_4a3b54;
        case 0x4a3b58u: goto label_4a3b58;
        case 0x4a3b5cu: goto label_4a3b5c;
        case 0x4a3b60u: goto label_4a3b60;
        case 0x4a3b64u: goto label_4a3b64;
        case 0x4a3b68u: goto label_4a3b68;
        case 0x4a3b6cu: goto label_4a3b6c;
        case 0x4a3b70u: goto label_4a3b70;
        case 0x4a3b74u: goto label_4a3b74;
        case 0x4a3b78u: goto label_4a3b78;
        case 0x4a3b7cu: goto label_4a3b7c;
        case 0x4a3b80u: goto label_4a3b80;
        case 0x4a3b84u: goto label_4a3b84;
        case 0x4a3b88u: goto label_4a3b88;
        case 0x4a3b8cu: goto label_4a3b8c;
        case 0x4a3b90u: goto label_4a3b90;
        case 0x4a3b94u: goto label_4a3b94;
        case 0x4a3b98u: goto label_4a3b98;
        case 0x4a3b9cu: goto label_4a3b9c;
        case 0x4a3ba0u: goto label_4a3ba0;
        case 0x4a3ba4u: goto label_4a3ba4;
        case 0x4a3ba8u: goto label_4a3ba8;
        case 0x4a3bacu: goto label_4a3bac;
        case 0x4a3bb0u: goto label_4a3bb0;
        case 0x4a3bb4u: goto label_4a3bb4;
        case 0x4a3bb8u: goto label_4a3bb8;
        case 0x4a3bbcu: goto label_4a3bbc;
        case 0x4a3bc0u: goto label_4a3bc0;
        case 0x4a3bc4u: goto label_4a3bc4;
        case 0x4a3bc8u: goto label_4a3bc8;
        case 0x4a3bccu: goto label_4a3bcc;
        case 0x4a3bd0u: goto label_4a3bd0;
        case 0x4a3bd4u: goto label_4a3bd4;
        case 0x4a3bd8u: goto label_4a3bd8;
        case 0x4a3bdcu: goto label_4a3bdc;
        case 0x4a3be0u: goto label_4a3be0;
        case 0x4a3be4u: goto label_4a3be4;
        case 0x4a3be8u: goto label_4a3be8;
        case 0x4a3becu: goto label_4a3bec;
        case 0x4a3bf0u: goto label_4a3bf0;
        case 0x4a3bf4u: goto label_4a3bf4;
        case 0x4a3bf8u: goto label_4a3bf8;
        case 0x4a3bfcu: goto label_4a3bfc;
        case 0x4a3c00u: goto label_4a3c00;
        case 0x4a3c04u: goto label_4a3c04;
        case 0x4a3c08u: goto label_4a3c08;
        case 0x4a3c0cu: goto label_4a3c0c;
        case 0x4a3c10u: goto label_4a3c10;
        case 0x4a3c14u: goto label_4a3c14;
        case 0x4a3c18u: goto label_4a3c18;
        case 0x4a3c1cu: goto label_4a3c1c;
        case 0x4a3c20u: goto label_4a3c20;
        case 0x4a3c24u: goto label_4a3c24;
        case 0x4a3c28u: goto label_4a3c28;
        case 0x4a3c2cu: goto label_4a3c2c;
        case 0x4a3c30u: goto label_4a3c30;
        case 0x4a3c34u: goto label_4a3c34;
        case 0x4a3c38u: goto label_4a3c38;
        case 0x4a3c3cu: goto label_4a3c3c;
        case 0x4a3c40u: goto label_4a3c40;
        case 0x4a3c44u: goto label_4a3c44;
        case 0x4a3c48u: goto label_4a3c48;
        case 0x4a3c4cu: goto label_4a3c4c;
        case 0x4a3c50u: goto label_4a3c50;
        case 0x4a3c54u: goto label_4a3c54;
        case 0x4a3c58u: goto label_4a3c58;
        case 0x4a3c5cu: goto label_4a3c5c;
        case 0x4a3c60u: goto label_4a3c60;
        case 0x4a3c64u: goto label_4a3c64;
        case 0x4a3c68u: goto label_4a3c68;
        case 0x4a3c6cu: goto label_4a3c6c;
        case 0x4a3c70u: goto label_4a3c70;
        case 0x4a3c74u: goto label_4a3c74;
        case 0x4a3c78u: goto label_4a3c78;
        case 0x4a3c7cu: goto label_4a3c7c;
        case 0x4a3c80u: goto label_4a3c80;
        case 0x4a3c84u: goto label_4a3c84;
        case 0x4a3c88u: goto label_4a3c88;
        case 0x4a3c8cu: goto label_4a3c8c;
        case 0x4a3c90u: goto label_4a3c90;
        case 0x4a3c94u: goto label_4a3c94;
        case 0x4a3c98u: goto label_4a3c98;
        case 0x4a3c9cu: goto label_4a3c9c;
        case 0x4a3ca0u: goto label_4a3ca0;
        case 0x4a3ca4u: goto label_4a3ca4;
        case 0x4a3ca8u: goto label_4a3ca8;
        case 0x4a3cacu: goto label_4a3cac;
        case 0x4a3cb0u: goto label_4a3cb0;
        case 0x4a3cb4u: goto label_4a3cb4;
        case 0x4a3cb8u: goto label_4a3cb8;
        case 0x4a3cbcu: goto label_4a3cbc;
        case 0x4a3cc0u: goto label_4a3cc0;
        case 0x4a3cc4u: goto label_4a3cc4;
        case 0x4a3cc8u: goto label_4a3cc8;
        case 0x4a3cccu: goto label_4a3ccc;
        case 0x4a3cd0u: goto label_4a3cd0;
        case 0x4a3cd4u: goto label_4a3cd4;
        case 0x4a3cd8u: goto label_4a3cd8;
        case 0x4a3cdcu: goto label_4a3cdc;
        case 0x4a3ce0u: goto label_4a3ce0;
        case 0x4a3ce4u: goto label_4a3ce4;
        case 0x4a3ce8u: goto label_4a3ce8;
        case 0x4a3cecu: goto label_4a3cec;
        case 0x4a3cf0u: goto label_4a3cf0;
        case 0x4a3cf4u: goto label_4a3cf4;
        case 0x4a3cf8u: goto label_4a3cf8;
        case 0x4a3cfcu: goto label_4a3cfc;
        case 0x4a3d00u: goto label_4a3d00;
        case 0x4a3d04u: goto label_4a3d04;
        case 0x4a3d08u: goto label_4a3d08;
        case 0x4a3d0cu: goto label_4a3d0c;
        case 0x4a3d10u: goto label_4a3d10;
        case 0x4a3d14u: goto label_4a3d14;
        case 0x4a3d18u: goto label_4a3d18;
        case 0x4a3d1cu: goto label_4a3d1c;
        case 0x4a3d20u: goto label_4a3d20;
        case 0x4a3d24u: goto label_4a3d24;
        case 0x4a3d28u: goto label_4a3d28;
        case 0x4a3d2cu: goto label_4a3d2c;
        case 0x4a3d30u: goto label_4a3d30;
        case 0x4a3d34u: goto label_4a3d34;
        case 0x4a3d38u: goto label_4a3d38;
        case 0x4a3d3cu: goto label_4a3d3c;
        case 0x4a3d40u: goto label_4a3d40;
        case 0x4a3d44u: goto label_4a3d44;
        case 0x4a3d48u: goto label_4a3d48;
        case 0x4a3d4cu: goto label_4a3d4c;
        case 0x4a3d50u: goto label_4a3d50;
        case 0x4a3d54u: goto label_4a3d54;
        case 0x4a3d58u: goto label_4a3d58;
        case 0x4a3d5cu: goto label_4a3d5c;
        case 0x4a3d60u: goto label_4a3d60;
        case 0x4a3d64u: goto label_4a3d64;
        case 0x4a3d68u: goto label_4a3d68;
        case 0x4a3d6cu: goto label_4a3d6c;
        case 0x4a3d70u: goto label_4a3d70;
        case 0x4a3d74u: goto label_4a3d74;
        case 0x4a3d78u: goto label_4a3d78;
        case 0x4a3d7cu: goto label_4a3d7c;
        case 0x4a3d80u: goto label_4a3d80;
        case 0x4a3d84u: goto label_4a3d84;
        case 0x4a3d88u: goto label_4a3d88;
        case 0x4a3d8cu: goto label_4a3d8c;
        case 0x4a3d90u: goto label_4a3d90;
        case 0x4a3d94u: goto label_4a3d94;
        case 0x4a3d98u: goto label_4a3d98;
        case 0x4a3d9cu: goto label_4a3d9c;
        case 0x4a3da0u: goto label_4a3da0;
        case 0x4a3da4u: goto label_4a3da4;
        case 0x4a3da8u: goto label_4a3da8;
        case 0x4a3dacu: goto label_4a3dac;
        case 0x4a3db0u: goto label_4a3db0;
        case 0x4a3db4u: goto label_4a3db4;
        case 0x4a3db8u: goto label_4a3db8;
        case 0x4a3dbcu: goto label_4a3dbc;
        case 0x4a3dc0u: goto label_4a3dc0;
        case 0x4a3dc4u: goto label_4a3dc4;
        case 0x4a3dc8u: goto label_4a3dc8;
        case 0x4a3dccu: goto label_4a3dcc;
        case 0x4a3dd0u: goto label_4a3dd0;
        case 0x4a3dd4u: goto label_4a3dd4;
        case 0x4a3dd8u: goto label_4a3dd8;
        case 0x4a3ddcu: goto label_4a3ddc;
        case 0x4a3de0u: goto label_4a3de0;
        case 0x4a3de4u: goto label_4a3de4;
        case 0x4a3de8u: goto label_4a3de8;
        case 0x4a3decu: goto label_4a3dec;
        case 0x4a3df0u: goto label_4a3df0;
        case 0x4a3df4u: goto label_4a3df4;
        case 0x4a3df8u: goto label_4a3df8;
        case 0x4a3dfcu: goto label_4a3dfc;
        case 0x4a3e00u: goto label_4a3e00;
        case 0x4a3e04u: goto label_4a3e04;
        case 0x4a3e08u: goto label_4a3e08;
        case 0x4a3e0cu: goto label_4a3e0c;
        case 0x4a3e10u: goto label_4a3e10;
        case 0x4a3e14u: goto label_4a3e14;
        case 0x4a3e18u: goto label_4a3e18;
        case 0x4a3e1cu: goto label_4a3e1c;
        case 0x4a3e20u: goto label_4a3e20;
        case 0x4a3e24u: goto label_4a3e24;
        case 0x4a3e28u: goto label_4a3e28;
        case 0x4a3e2cu: goto label_4a3e2c;
        case 0x4a3e30u: goto label_4a3e30;
        case 0x4a3e34u: goto label_4a3e34;
        case 0x4a3e38u: goto label_4a3e38;
        case 0x4a3e3cu: goto label_4a3e3c;
        case 0x4a3e40u: goto label_4a3e40;
        case 0x4a3e44u: goto label_4a3e44;
        case 0x4a3e48u: goto label_4a3e48;
        case 0x4a3e4cu: goto label_4a3e4c;
        case 0x4a3e50u: goto label_4a3e50;
        case 0x4a3e54u: goto label_4a3e54;
        case 0x4a3e58u: goto label_4a3e58;
        case 0x4a3e5cu: goto label_4a3e5c;
        case 0x4a3e60u: goto label_4a3e60;
        case 0x4a3e64u: goto label_4a3e64;
        case 0x4a3e68u: goto label_4a3e68;
        case 0x4a3e6cu: goto label_4a3e6c;
        case 0x4a3e70u: goto label_4a3e70;
        case 0x4a3e74u: goto label_4a3e74;
        case 0x4a3e78u: goto label_4a3e78;
        case 0x4a3e7cu: goto label_4a3e7c;
        case 0x4a3e80u: goto label_4a3e80;
        case 0x4a3e84u: goto label_4a3e84;
        case 0x4a3e88u: goto label_4a3e88;
        case 0x4a3e8cu: goto label_4a3e8c;
        case 0x4a3e90u: goto label_4a3e90;
        case 0x4a3e94u: goto label_4a3e94;
        case 0x4a3e98u: goto label_4a3e98;
        case 0x4a3e9cu: goto label_4a3e9c;
        case 0x4a3ea0u: goto label_4a3ea0;
        case 0x4a3ea4u: goto label_4a3ea4;
        case 0x4a3ea8u: goto label_4a3ea8;
        case 0x4a3eacu: goto label_4a3eac;
        case 0x4a3eb0u: goto label_4a3eb0;
        case 0x4a3eb4u: goto label_4a3eb4;
        case 0x4a3eb8u: goto label_4a3eb8;
        case 0x4a3ebcu: goto label_4a3ebc;
        case 0x4a3ec0u: goto label_4a3ec0;
        case 0x4a3ec4u: goto label_4a3ec4;
        case 0x4a3ec8u: goto label_4a3ec8;
        case 0x4a3eccu: goto label_4a3ecc;
        case 0x4a3ed0u: goto label_4a3ed0;
        case 0x4a3ed4u: goto label_4a3ed4;
        case 0x4a3ed8u: goto label_4a3ed8;
        case 0x4a3edcu: goto label_4a3edc;
        case 0x4a3ee0u: goto label_4a3ee0;
        case 0x4a3ee4u: goto label_4a3ee4;
        case 0x4a3ee8u: goto label_4a3ee8;
        case 0x4a3eecu: goto label_4a3eec;
        case 0x4a3ef0u: goto label_4a3ef0;
        case 0x4a3ef4u: goto label_4a3ef4;
        case 0x4a3ef8u: goto label_4a3ef8;
        case 0x4a3efcu: goto label_4a3efc;
        case 0x4a3f00u: goto label_4a3f00;
        case 0x4a3f04u: goto label_4a3f04;
        case 0x4a3f08u: goto label_4a3f08;
        case 0x4a3f0cu: goto label_4a3f0c;
        case 0x4a3f10u: goto label_4a3f10;
        case 0x4a3f14u: goto label_4a3f14;
        case 0x4a3f18u: goto label_4a3f18;
        case 0x4a3f1cu: goto label_4a3f1c;
        case 0x4a3f20u: goto label_4a3f20;
        case 0x4a3f24u: goto label_4a3f24;
        case 0x4a3f28u: goto label_4a3f28;
        case 0x4a3f2cu: goto label_4a3f2c;
        case 0x4a3f30u: goto label_4a3f30;
        case 0x4a3f34u: goto label_4a3f34;
        case 0x4a3f38u: goto label_4a3f38;
        case 0x4a3f3cu: goto label_4a3f3c;
        case 0x4a3f40u: goto label_4a3f40;
        case 0x4a3f44u: goto label_4a3f44;
        case 0x4a3f48u: goto label_4a3f48;
        case 0x4a3f4cu: goto label_4a3f4c;
        case 0x4a3f50u: goto label_4a3f50;
        case 0x4a3f54u: goto label_4a3f54;
        default: break;
    }

    ctx->pc = 0x4a3b48u;

label_4a3b48:
    // 0x4a3b48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a3b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a3b4c:
    // 0x4a3b4c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4a3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4a3b50:
    // 0x4a3b50: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a3b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4a3b54:
    // 0x4a3b54: 0x2446f940  addiu       $a2, $v0, -0x6C0
    ctx->pc = 0x4a3b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
label_4a3b58:
    // 0x4a3b58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a3b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4a3b5c:
    // 0x4a3b5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a3b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a3b60:
    // 0x4a3b60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a3b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a3b64:
    // 0x4a3b64: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a3b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4a3b68:
    // 0x4a3b68: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a3b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a3b6c:
    // 0x4a3b6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a3b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a3b70:
    // 0x4a3b70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a3b70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a3b74:
    // 0x4a3b74: 0x8f838a20  lw          $v1, -0x75E0($gp)
    ctx->pc = 0x4a3b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
label_4a3b78:
    // 0x4a3b78: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x4a3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_4a3b7c:
    // 0x4a3b7c: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
label_4a3b80:
    if (ctx->pc == 0x4A3B80u) {
        ctx->pc = 0x4A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3B7Cu;
        // 0x4a3b80: 0x2238021  addu        $s0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3B84u;
        goto label_4a3b84;
    }
    ctx->pc = 0x4A3B7Cu;
    {
        const bool branch_taken_0x4a3b7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3B7Cu;
        // 0x4a3b80: 0x2238021  addu        $s0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3b7c) {
            ctx->pc = 0x4A3BB4u;
            goto label_4a3bb4;
        }
    }
    ctx->pc = 0x4A3B84u;
label_4a3b84:
    // 0x4a3b84: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x4a3b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_4a3b88:
    // 0x4a3b88: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x4a3b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_4a3b8c:
    // 0x4a3b8c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_4a3b90:
    if (ctx->pc == 0x4A3B90u) {
        ctx->pc = 0x4A3B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3B8Cu;
        // 0x4a3b90: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3B94u;
        goto label_4a3b94;
    }
    ctx->pc = 0x4A3B8Cu;
    {
        const bool branch_taken_0x4a3b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3B8Cu;
        // 0x4a3b90: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3b8c) {
            ctx->pc = 0x4A3BB8u;
            goto label_4a3bb8;
        }
    }
    ctx->pc = 0x4A3B94u;
label_4a3b94:
    // 0x4a3b94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4a3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4a3b98:
    // 0x4a3b98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4a3b9c:
    if (ctx->pc == 0x4A3B9Cu) {
        ctx->pc = 0x4A3BA0u;
        goto label_4a3ba0;
    }
    ctx->pc = 0x4A3B98u;
    {
        const bool branch_taken_0x4a3b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3b98) {
            ctx->pc = 0x4A3BB8u;
            goto label_4a3bb8;
        }
    }
    ctx->pc = 0x4A3BA0u;
label_4a3ba0:
    // 0x4a3ba0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_4a3ba4:
    if (ctx->pc == 0x4A3BA4u) {
        ctx->pc = 0x4A3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3BA0u;
        // 0x4a3ba4: 0x8e62f940  lw          $v0, -0x6C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3BA8u;
        goto label_4a3ba8;
    }
    ctx->pc = 0x4A3BA0u;
    {
        const bool branch_taken_0x4a3ba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3BA0u;
        // 0x4a3ba4: 0x8e62f940  lw          $v0, -0x6C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3ba0) {
            ctx->pc = 0x4A3BC0u;
            goto label_4a3bc0;
        }
    }
    ctx->pc = 0x4A3BA8u;
label_4a3ba8:
    // 0x4a3ba8: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x4a3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_4a3bac:
    // 0x4a3bac: 0x40f809  jalr        $v0
label_4a3bb0:
    if (ctx->pc == 0x4A3BB0u) {
        ctx->pc = 0x4A3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3BACu;
        // 0x4a3bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3BB4u;
        goto label_4a3bb4;
    }
    ctx->pc = 0x4A3BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A3BB4u);
        ctx->pc = 0x4A3BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3BACu;
        // 0x4a3bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A3BACu, 0x4A3BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A3BB4u;
label_4a3bb4:
    // 0x4a3bb4: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x4a3bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4a3bb8:
    // 0x4a3bb8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_4a3bbc:
    if (ctx->pc == 0x4A3BBCu) {
        ctx->pc = 0x4A3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3BB8u;
        // 0x4a3bbc: 0x8e62f940  lw          $v0, -0x6C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3BC0u;
        goto label_4a3bc0;
    }
    ctx->pc = 0x4A3BB8u;
    {
        const bool branch_taken_0x4a3bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3BB8u;
        // 0x4a3bbc: 0x8e62f940  lw          $v0, -0x6C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3bb8) {
            ctx->pc = 0x4A3C14u;
            goto label_4a3c14;
        }
    }
    ctx->pc = 0x4A3BC0u;
label_4a3bc0:
    // 0x4a3bc0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_4a3bc4:
    if (ctx->pc == 0x4A3BC4u) {
        ctx->pc = 0x4A3BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3BC0u;
        // 0x4a3bc4: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3BC8u;
        goto label_4a3bc8;
    }
    ctx->pc = 0x4A3BC0u;
    {
        const bool branch_taken_0x4a3bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3bc0) {
            ctx->pc = 0x4A3BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3BC0u;
            // 0x4a3bc4: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3C18u;
            goto label_4a3c18;
        }
    }
    ctx->pc = 0x4A3BC8u;
label_4a3bc8:
    // 0x4a3bc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a3bcc:
    // 0x4a3bcc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a3bccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4a3bd0:
    // 0x4a3bd0: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x4a3bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4a3bd4:
    // 0x4a3bd4: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x4a3bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
label_4a3bd8:
    // 0x4a3bd8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x4a3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_4a3bdc:
    // 0x4a3bdc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a3bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a3be0:
    // 0x4a3be0: 0x30483fff  andi        $t0, $v0, 0x3FFF
    ctx->pc = 0x4a3be0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_4a3be4:
    // 0x4a3be4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x4a3be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a3be8:
    // 0x4a3be8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x4a3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4a3bec:
    // 0x4a3bec: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x4a3becu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
label_4a3bf0:
    // 0x4a3bf0: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a3bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_4a3bf4:
    // 0x4a3bf4: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x4a3bf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
label_4a3bf8:
    // 0x4a3bf8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4a3bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_4a3bfc:
    // 0x4a3bfc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a3bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4a3c00:
    // 0x4a3c00: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4a3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_4a3c04:
    // 0x4a3c04: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x4a3c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_4a3c08:
    // 0x4a3c08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a3c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a3c0c:
    // 0x4a3c0c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x4a3c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_4a3c10:
    // 0x4a3c10: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4a3c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_4a3c14:
    // 0x4a3c14: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x4a3c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_4a3c18:
    // 0x4a3c18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a3c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a3c1c:
    // 0x4a3c1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4a3c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a3c20:
    // 0x4a3c20: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4a3c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4a3c24:
    // 0x4a3c24: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_4a3c28:
    if (ctx->pc == 0x4A3C28u) {
        ctx->pc = 0x4A3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C24u;
        // 0x4a3c28: 0x2664f940  addiu       $a0, $s3, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3C2Cu;
        goto label_4a3c2c;
    }
    ctx->pc = 0x4A3C24u;
    {
        const bool branch_taken_0x4a3c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C24u;
        // 0x4a3c28: 0x2664f940  addiu       $a0, $s3, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3c24) {
            ctx->pc = 0x4A3C40u;
            goto label_4a3c40;
        }
    }
    ctx->pc = 0x4A3C2Cu;
label_4a3c2c:
    // 0x4a3c2c: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x4a3c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4a3c30:
    // 0x4a3c30: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4a3c34:
    if (ctx->pc == 0x4A3C34u) {
        ctx->pc = 0x4A3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C30u;
        // 0x4a3c34: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3C38u;
        goto label_4a3c38;
    }
    ctx->pc = 0x4A3C30u;
    {
        const bool branch_taken_0x4a3c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3c30) {
            ctx->pc = 0x4A3C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3C30u;
            // 0x4a3c34: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3C44u;
            goto label_4a3c44;
        }
    }
    ctx->pc = 0x4A3C38u;
label_4a3c38:
    // 0x4a3c38: 0x100000bf  b           . + 4 + (0xBF << 2)
label_4a3c3c:
    if (ctx->pc == 0x4A3C3Cu) {
        ctx->pc = 0x4A3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C38u;
        // 0x4a3c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3C40u;
        goto label_4a3c40;
    }
    ctx->pc = 0x4A3C38u;
    {
        const bool branch_taken_0x4a3c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C38u;
        // 0x4a3c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3c38) {
            ctx->pc = 0x4A3F38u;
            goto label_4a3f38;
        }
    }
    ctx->pc = 0x4A3C40u;
label_4a3c40:
    // 0x4a3c40: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x4a3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_4a3c44:
    // 0x4a3c44: 0x54510010  bnel        $v0, $s1, . + 4 + (0x10 << 2)
label_4a3c48:
    if (ctx->pc == 0x4A3C48u) {
        ctx->pc = 0x4A3C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C44u;
        // 0x4a3c48: 0x2665f940  addiu       $a1, $s3, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3C4Cu;
        goto label_4a3c4c;
    }
    ctx->pc = 0x4A3C44u;
    {
        const bool branch_taken_0x4a3c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x4a3c44) {
            ctx->pc = 0x4A3C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3C44u;
            // 0x4a3c48: 0x2665f940  addiu       $a1, $s3, -0x6C0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3C88u;
            goto label_4a3c88;
        }
    }
    ctx->pc = 0x4A3C4Cu;
label_4a3c4c:
    // 0x4a3c4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a3c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4a3c50:
    // 0x4a3c50: 0x8f838a28  lw          $v1, -0x75D8($gp)
    ctx->pc = 0x4a3c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937128)));
label_4a3c54:
    // 0x4a3c54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a3c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a3c58:
    // 0x4a3c58: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_4a3c5c:
    if (ctx->pc == 0x4A3C5Cu) {
        ctx->pc = 0x4A3C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C58u;
        // 0x4a3c5c: 0x2665f940  addiu       $a1, $s3, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3C60u;
        goto label_4a3c60;
    }
    ctx->pc = 0x4A3C58u;
    {
        const bool branch_taken_0x4a3c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a3c58) {
            ctx->pc = 0x4A3C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3C58u;
            // 0x4a3c5c: 0x2665f940  addiu       $a1, $s3, -0x6C0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3C88u;
            goto label_4a3c88;
        }
    }
    ctx->pc = 0x4A3C60u;
label_4a3c60:
    // 0x4a3c60: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x4a3c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4a3c64:
    // 0x4a3c64: 0x54520008  bnel        $v0, $s2, . + 4 + (0x8 << 2)
label_4a3c68:
    if (ctx->pc == 0x4A3C68u) {
        ctx->pc = 0x4A3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C64u;
        // 0x4a3c68: 0x2665f940  addiu       $a1, $s3, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3C6Cu;
        goto label_4a3c6c;
    }
    ctx->pc = 0x4A3C64u;
    {
        const bool branch_taken_0x4a3c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x4a3c64) {
            ctx->pc = 0x4A3C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3C64u;
            // 0x4a3c68: 0x2665f940  addiu       $a1, $s3, -0x6C0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3C88u;
            goto label_4a3c88;
        }
    }
    ctx->pc = 0x4A3C6Cu;
label_4a3c6c:
    // 0x4a3c6c: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x4a3c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_4a3c70:
    // 0x4a3c70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a3c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a3c74:
    // 0x4a3c74: 0x146200b0  bne         $v1, $v0, . + 4 + (0xB0 << 2)
label_4a3c78:
    if (ctx->pc == 0x4A3C78u) {
        ctx->pc = 0x4A3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C74u;
        // 0x4a3c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3C7Cu;
        goto label_4a3c7c;
    }
    ctx->pc = 0x4A3C74u;
    {
        const bool branch_taken_0x4a3c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C74u;
        // 0x4a3c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3c74) {
            ctx->pc = 0x4A3F38u;
            goto label_4a3f38;
        }
    }
    ctx->pc = 0x4A3C7Cu;
label_4a3c7c:
    // 0x4a3c7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4a3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a3c80:
    // 0x4a3c80: 0x105100ac  beq         $v0, $s1, . + 4 + (0xAC << 2)
label_4a3c84:
    if (ctx->pc == 0x4A3C84u) {
        ctx->pc = 0x4A3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C80u;
        // 0x4a3c84: 0x2665f940  addiu       $a1, $s3, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3C88u;
        goto label_4a3c88;
    }
    ctx->pc = 0x4A3C80u;
    {
        const bool branch_taken_0x4a3c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x4A3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C80u;
        // 0x4a3c84: 0x2665f940  addiu       $a1, $s3, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3c80) {
            ctx->pc = 0x4A3F34u;
            goto label_4a3f34;
        }
    }
    ctx->pc = 0x4A3C88u;
label_4a3c88:
    // 0x4a3c88: 0xacb10024  sw          $s1, 0x24($a1)
    ctx->pc = 0x4a3c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 17));
label_4a3c8c:
    // 0x4a3c8c: 0xacb20028  sw          $s2, 0x28($a1)
    ctx->pc = 0x4a3c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 18));
label_4a3c90:
    // 0x4a3c90: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x4a3c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_4a3c94:
    // 0x4a3c94: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_4a3c98:
    if (ctx->pc == 0x4A3C98u) {
        ctx->pc = 0x4A3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C94u;
        // 0x4a3c98: 0x8e62f940  lw          $v0, -0x6C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3C9Cu;
        goto label_4a3c9c;
    }
    ctx->pc = 0x4A3C94u;
    {
        const bool branch_taken_0x4a3c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C94u;
        // 0x4a3c98: 0x8e62f940  lw          $v0, -0x6C0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3c94) {
            ctx->pc = 0x4A3CE0u;
            goto label_4a3ce0;
        }
    }
    ctx->pc = 0x4A3C9Cu;
label_4a3c9c:
    // 0x4a3c9c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_4a3ca0:
    if (ctx->pc == 0x4A3CA0u) {
        ctx->pc = 0x4A3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3C9Cu;
        // 0x4a3ca0: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3CA4u;
        goto label_4a3ca4;
    }
    ctx->pc = 0x4A3C9Cu;
    {
        const bool branch_taken_0x4a3c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3c9c) {
            ctx->pc = 0x4A3CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3C9Cu;
            // 0x4a3ca0: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3CE4u;
            goto label_4a3ce4;
        }
    }
    ctx->pc = 0x4A3CA4u;
label_4a3ca4:
    // 0x4a3ca4: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_4a3ca8:
    if (ctx->pc == 0x4A3CA8u) {
        ctx->pc = 0x4A3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3CA4u;
        // 0x4a3ca8: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3CACu;
        goto label_4a3cac;
    }
    ctx->pc = 0x4A3CA4u;
    {
        const bool branch_taken_0x4a3ca4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3CA4u;
        // 0x4a3ca8: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3ca4) {
            ctx->pc = 0x4A3CC8u;
            goto label_4a3cc8;
        }
    }
    ctx->pc = 0x4A3CACu;
label_4a3cac:
    // 0x4a3cac: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x4a3cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
label_4a3cb0:
    // 0x4a3cb0: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x4a3cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_4a3cb4:
    // 0x4a3cb4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4a3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4a3cb8:
    // 0x4a3cb8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a3cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a3cbc:
    // 0x4a3cbc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4a3cbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4a3cc0:
    // 0x4a3cc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a3cc4:
    if (ctx->pc == 0x4A3CC4u) {
        ctx->pc = 0x4A3CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3CC0u;
        // 0x4a3cc4: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3CC8u;
        goto label_4a3cc8;
    }
    ctx->pc = 0x4A3CC0u;
    {
        const bool branch_taken_0x4a3cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3CC0u;
        // 0x4a3cc4: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3cc0) {
            ctx->pc = 0x4A3CE0u;
            goto label_4a3ce0;
        }
    }
    ctx->pc = 0x4A3CC8u;
label_4a3cc8:
    // 0x4a3cc8: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x4a3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
label_4a3ccc:
    // 0x4a3ccc: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x4a3cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_4a3cd0:
    // 0x4a3cd0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4a3cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4a3cd4:
    // 0x4a3cd4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a3cd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a3cd8:
    // 0x4a3cd8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4a3cd8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4a3cdc:
    // 0x4a3cdc: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x4a3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_4a3ce0:
    // 0x4a3ce0: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x4a3ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
label_4a3ce4:
    // 0x4a3ce4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4a3ce8:
    if (ctx->pc == 0x4A3CE8u) {
        ctx->pc = 0x4A3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3CE4u;
        // 0x4a3ce8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3CECu;
        goto label_4a3cec;
    }
    ctx->pc = 0x4A3CE4u;
    {
        const bool branch_taken_0x4a3ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3CE4u;
        // 0x4a3ce8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3ce4) {
            ctx->pc = 0x4A3D08u;
            goto label_4a3d08;
        }
    }
    ctx->pc = 0x4A3CECu;
label_4a3cec:
    // 0x4a3cec: 0x8f8287b4  lw          $v0, -0x784C($gp)
    ctx->pc = 0x4a3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936500)));
label_4a3cf0:
    // 0x4a3cf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_4a3cf4:
    if (ctx->pc == 0x4A3CF4u) {
        ctx->pc = 0x4A3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3CF0u;
        // 0x4a3cf4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3CF8u;
        goto label_4a3cf8;
    }
    ctx->pc = 0x4A3CF0u;
    {
        const bool branch_taken_0x4a3cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3CF0u;
        // 0x4a3cf4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3cf0) {
            ctx->pc = 0x4A3D08u;
            goto label_4a3d08;
        }
    }
    ctx->pc = 0x4A3CF8u;
label_4a3cf8:
    // 0x4a3cf8: 0x8e62f940  lw          $v0, -0x6C0($s3)
    ctx->pc = 0x4a3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965568)));
label_4a3cfc:
    // 0x4a3cfc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_4a3d00:
    if (ctx->pc == 0x4A3D00u) {
        ctx->pc = 0x4A3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3CFCu;
        // 0x4a3d00: 0xaf808994  sw          $zero, -0x766C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3D04u;
        goto label_4a3d04;
    }
    ctx->pc = 0x4A3CFCu;
    {
        const bool branch_taken_0x4a3cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3cfc) {
            ctx->pc = 0x4A3D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3CFCu;
            // 0x4a3d00: 0xaf808994  sw          $zero, -0x766C($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3D04u;
            goto label_4a3d04;
        }
    }
    ctx->pc = 0x4A3D04u;
label_4a3d04:
    // 0x4a3d04: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4a3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4a3d08:
    // 0x4a3d08: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x4a3d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_4a3d0c:
    // 0x4a3d0c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4a3d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4a3d10:
    // 0x4a3d10: 0xc1233da  jal         func_48CF68
label_4a3d14:
    if (ctx->pc == 0x4A3D14u) {
        ctx->pc = 0x4A3D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3D10u;
        // 0x4a3d14: 0x52280a  movz        $a1, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3D18u;
        goto label_4a3d18;
    }
    ctx->pc = 0x4A3D10u;
    SET_GPR_U32(ctx, 31, 0x4A3D18u);
    ctx->pc = 0x4A3D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3D10u;
    // 0x4a3d14: 0x52280a  movz        $a1, $v0, $s2 (Delay Slot)
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x4A3D10u, 0x4A3D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3D18u;
label_4a3d18:
    // 0x4a3d18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4a3d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_4a3d1c:
    // 0x4a3d1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a3d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a3d20:
    // 0x4a3d20: 0x34638004  ori         $v1, $v1, 0x8004
    ctx->pc = 0x4a3d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32772);
label_4a3d24:
    // 0x4a3d24: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x4a3d24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_4a3d28:
    // 0x4a3d28: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x4a3d28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_4a3d2c:
    // 0x4a3d2c: 0x34c68005  ori         $a2, $a2, 0x8005
    ctx->pc = 0x4a3d2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32773);
label_4a3d30:
    // 0x4a3d30: 0x72300b  movn        $a2, $v1, $s2
    ctx->pc = 0x4a3d30u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_4a3d34:
    // 0x4a3d34: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x4a3d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4a3d38:
    // 0x4a3d38: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x4a3d38u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_4a3d3c:
    // 0x4a3d3c: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a3d40:
    // 0x4a3d40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a3d40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a3d44:
    // 0x4a3d44: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a3d48:
    // 0x4a3d48: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a3d48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a3d4c:
    // 0x4a3d4c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x4a3d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_4a3d50:
    // 0x4a3d50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a3d50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3d54:
    // 0x4a3d54: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x4a3d54u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_4a3d58:
    // 0x4a3d58: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a3d58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a3d5c:
    // 0x4a3d5c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a3d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a3d60:
    // 0x4a3d60: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a3d60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a3d64:
    // 0x4a3d64: 0x9e040008  lwu         $a0, 0x8($s0)
    ctx->pc = 0x4a3d64u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a3d68:
    // 0x4a3d68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4a3d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a3d6c:
    // 0x4a3d6c: 0x9e02000c  lwu         $v0, 0xC($s0)
    ctx->pc = 0x4a3d6cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4a3d70:
    // 0x4a3d70: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x4a3d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_4a3d74:
    // 0x4a3d74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a3d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4a3d78:
    // 0x4a3d78: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x4a3d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_4a3d7c:
    // 0x4a3d7c: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
label_4a3d80:
    if (ctx->pc == 0x4A3D80u) {
        ctx->pc = 0x4A3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3D7Cu;
        // 0x4a3d80: 0x823025  or          $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3D84u;
        goto label_4a3d84;
    }
    ctx->pc = 0x4A3D7Cu;
    {
        const bool branch_taken_0x4a3d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x4A3D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3D7Cu;
        // 0x4a3d80: 0x823025  or          $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3d7c) {
            ctx->pc = 0x4A3DC8u;
            goto label_4a3dc8;
        }
    }
    ctx->pc = 0x4A3D84u;
label_4a3d84:
    // 0x4a3d84: 0x8f828744  lw          $v0, -0x78BC($gp)
    ctx->pc = 0x4a3d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936388)));
label_4a3d88:
    // 0x4a3d88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a3d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a3d8c:
    // 0x4a3d8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4a3d90:
    if (ctx->pc == 0x4A3D90u) {
        ctx->pc = 0x4A3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3D8Cu;
        // 0x4a3d90: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3D94u;
        goto label_4a3d94;
    }
    ctx->pc = 0x4A3D8Cu;
    {
        const bool branch_taken_0x4a3d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3D8Cu;
        // 0x4a3d90: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3d8c) {
            ctx->pc = 0x4A3DA0u;
            goto label_4a3da0;
        }
    }
    ctx->pc = 0x4A3D94u;
label_4a3d94:
    // 0x4a3d94: 0x10000004  b           . + 4 + (0x4 << 2)
label_4a3d98:
    if (ctx->pc == 0x4A3D98u) {
        ctx->pc = 0x4A3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3D94u;
        // 0x4a3d98: 0xdc44f7e0  ld          $a0, -0x820($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294965216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3D9Cu;
        goto label_4a3d9c;
    }
    ctx->pc = 0x4A3D94u;
    {
        const bool branch_taken_0x4a3d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3D94u;
        // 0x4a3d98: 0xdc44f7e0  ld          $a0, -0x820($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294965216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3d94) {
            ctx->pc = 0x4A3DA8u;
            goto label_4a3da8;
        }
    }
    ctx->pc = 0x4A3D9Cu;
label_4a3d9c:
    // 0x4a3d9c: 0x0  nop
    ctx->pc = 0x4a3d9cu;
    // NOP
label_4a3da0:
    // 0x4a3da0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4a3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4a3da4:
    // 0x4a3da4: 0xdc44f670  ld          $a0, -0x990($v0)
    ctx->pc = 0x4a3da4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294964848)));
label_4a3da8:
    // 0x4a3da8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a3dac:
    // 0x4a3dac: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x4a3dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
label_4a3db0:
    // 0x4a3db0: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x4a3db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
label_4a3db4:
    // 0x4a3db4: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x4a3db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
label_4a3db8:
    // 0x4a3db8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a3db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_4a3dbc:
    // 0x4a3dbc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x4a3dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_4a3dc0:
    // 0x4a3dc0: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x4a3dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_4a3dc4:
    // 0x4a3dc4: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4a3dc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a3dc8:
    // 0x4a3dc8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4a3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4a3dcc:
    // 0x4a3dcc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4a3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4a3dd0:
    // 0x4a3dd0: 0x52180b  movn        $v1, $v0, $s2
    ctx->pc = 0x4a3dd0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_4a3dd4:
    // 0x4a3dd4: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x4a3dd4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_4a3dd8:
    // 0x4a3dd8: 0x8f87898c  lw          $a3, -0x7674($gp)
    ctx->pc = 0x4a3dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a3ddc:
    // 0x4a3ddc: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x4a3ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_4a3de0:
    // 0x4a3de0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x4a3de0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4a3de4:
    // 0x4a3de4: 0x1640001a  bnez        $s2, . + 4 + (0x1A << 2)
label_4a3de8:
    if (ctx->pc == 0x4A3DE8u) {
        ctx->pc = 0x4A3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3DE4u;
        // 0x4a3de8: 0xaf87898c  sw          $a3, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3DECu;
        goto label_4a3dec;
    }
    ctx->pc = 0x4A3DE4u;
    {
        const bool branch_taken_0x4a3de4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3DE4u;
        // 0x4a3de8: 0xaf87898c  sw          $a3, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3de4) {
            ctx->pc = 0x4A3E50u;
            goto label_4a3e50;
        }
    }
    ctx->pc = 0x4A3DECu;
label_4a3dec:
    // 0x4a3dec: 0xdf848718  ld          $a0, -0x78E8($gp)
    ctx->pc = 0x4a3decu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
label_4a3df0:
    // 0x4a3df0: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x4a3df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_4a3df4:
    // 0x4a3df4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4a3df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_4a3df8:
    // 0x4a3df8: 0x3442ffe7  ori         $v0, $v0, 0xFFE7
    ctx->pc = 0x4a3df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65511);
label_4a3dfc:
    // 0x4a3dfc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4a3dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_4a3e00:
    // 0x4a3e00: 0x3442fde3  ori         $v0, $v0, 0xFDE3
    ctx->pc = 0x4a3e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64995);
label_4a3e04:
    // 0x4a3e04: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x4a3e04u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_4a3e08:
    // 0x4a3e08: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x4a3e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4a3e0c:
    // 0x4a3e0c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a3e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4a3e10:
    // 0x4a3e10: 0xff848718  sd          $a0, -0x78E8($gp)
    ctx->pc = 0x4a3e10u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U64(ctx, 4));
label_4a3e14:
    // 0x4a3e14: 0x51b02  srl         $v1, $a1, 12
    ctx->pc = 0x4a3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
label_4a3e18:
    // 0x4a3e18: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x4a3e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
label_4a3e1c:
    // 0x4a3e1c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x4a3e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_4a3e20:
    // 0x4a3e20: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x4a3e20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_4a3e24:
    // 0x4a3e24: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4a3e24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_4a3e28:
    // 0x4a3e28: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x4a3e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
label_4a3e2c:
    // 0x4a3e2c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a3e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4a3e30:
    // 0x4a3e30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a3e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4a3e34:
    // 0x4a3e34: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4a3e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4a3e38:
    // 0x4a3e38: 0x70c41b89  pcpyld      $v1, $a2, $a0
    ctx->pc = 0x4a3e38u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
label_4a3e3c:
    // 0x4a3e3c: 0xff848718  sd          $a0, -0x78E8($gp)
    ctx->pc = 0x4a3e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U64(ctx, 4));
label_4a3e40:
    // 0x4a3e40: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x4a3e40u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_4a3e44:
    // 0x4a3e44: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x4a3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4a3e48:
    // 0x4a3e48: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a3e4c:
    // 0x4a3e4c: 0x0  nop
    ctx->pc = 0x4a3e4cu;
    // NOP
label_4a3e50:
    // 0x4a3e50: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a3e54:
    // 0x4a3e54: 0x8e65f940  lw          $a1, -0x6C0($s3)
    ctx->pc = 0x4a3e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294965568)));
label_4a3e58:
    // 0x4a3e58: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4a3e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_4a3e5c:
    // 0x4a3e5c: 0x2223c  dsll32      $a0, $v0, 8
    ctx->pc = 0x4a3e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 8));
label_4a3e60:
    // 0x4a3e60: 0x21d38  dsll        $v1, $v0, 20
    ctx->pc = 0x4a3e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 20);
label_4a3e64:
    // 0x4a3e64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a3e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4a3e68:
    // 0x4a3e68: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_4a3e6c:
    if (ctx->pc == 0x4A3E6Cu) {
        ctx->pc = 0x4A3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3E68u;
        // 0x4a3e6c: 0x443825  or          $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3E70u;
        goto label_4a3e70;
    }
    ctx->pc = 0x4A3E68u;
    {
        const bool branch_taken_0x4a3e68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3E68u;
        // 0x4a3e6c: 0x443825  or          $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3e68) {
            ctx->pc = 0x4A3ED0u;
            goto label_4a3ed0;
        }
    }
    ctx->pc = 0x4A3E70u;
label_4a3e70:
    // 0x4a3e70: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x4a3e70u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4a3e74:
    // 0x4a3e74: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x4a3e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_4a3e78:
    // 0x4a3e78: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x4a3e78u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4a3e7c:
    // 0x4a3e7c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x4a3e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_4a3e80:
    // 0x4a3e80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a3e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4a3e84:
    // 0x4a3e84: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x4a3e84u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_4a3e88:
    // 0x4a3e88: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x4a3e88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4a3e8c:
    // 0x4a3e8c: 0xc7302d  daddu       $a2, $a2, $a3
    ctx->pc = 0x4a3e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 7));
label_4a3e90:
    // 0x4a3e90: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x4a3e90u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_4a3e94:
    // 0x4a3e94: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a3e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a3e98:
    // 0x4a3e98: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a3e98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a3e9c:
    // 0x4a3e9c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a3ea0:
    // 0x4a3ea0: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a3ea4:
    // 0x4a3ea4: 0x9e060020  lwu         $a2, 0x20($s0)
    ctx->pc = 0x4a3ea4u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4a3ea8:
    // 0x4a3ea8: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x4a3ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_4a3eac:
    // 0x4a3eac: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x4a3eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_4a3eb0:
    // 0x4a3eb0: 0x9e030024  lwu         $v1, 0x24($s0)
    ctx->pc = 0x4a3eb0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4a3eb4:
    // 0x4a3eb4: 0xb2200b  movn        $a0, $a1, $s2
    ctx->pc = 0x4a3eb4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_4a3eb8:
    // 0x4a3eb8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a3eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a3ebc:
    // 0x4a3ebc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4a3ebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_4a3ec0:
    // 0x4a3ec0: 0xc7302d  daddu       $a2, $a2, $a3
    ctx->pc = 0x4a3ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 7));
label_4a3ec4:
    // 0x4a3ec4: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x4a3ec4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
label_4a3ec8:
    // 0x4a3ec8: 0x10000017  b           . + 4 + (0x17 << 2)
label_4a3ecc:
    if (ctx->pc == 0x4A3ECCu) {
        ctx->pc = 0x4A3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3EC8u;
        // 0x4a3ecc: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3ED0u;
        goto label_4a3ed0;
    }
    ctx->pc = 0x4A3EC8u;
    {
        const bool branch_taken_0x4a3ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3EC8u;
        // 0x4a3ecc: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3ec8) {
            ctx->pc = 0x4A3F28u;
            goto label_4a3f28;
        }
    }
    ctx->pc = 0x4A3ED0u;
label_4a3ed0:
    // 0x4a3ed0: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x4a3ed0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_4a3ed4:
    // 0x4a3ed4: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x4a3ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_4a3ed8:
    // 0x4a3ed8: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x4a3ed8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4a3edc:
    // 0x4a3edc: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x4a3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_4a3ee0:
    // 0x4a3ee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4a3ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_4a3ee4:
    // 0x4a3ee4: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x4a3ee4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_4a3ee8:
    // 0x4a3ee8: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x4a3ee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4a3eec:
    // 0x4a3eec: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x4a3eecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_4a3ef0:
    // 0x4a3ef0: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x4a3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
label_4a3ef4:
    // 0x4a3ef4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a3ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a3ef8:
    // 0x4a3ef8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a3efc:
    // 0x4a3efc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a3efcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a3f00:
    // 0x4a3f00: 0x9e060020  lwu         $a2, 0x20($s0)
    ctx->pc = 0x4a3f00u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4a3f04:
    // 0x4a3f04: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x4a3f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_4a3f08:
    // 0x4a3f08: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x4a3f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_4a3f0c:
    // 0x4a3f0c: 0x9e030024  lwu         $v1, 0x24($s0)
    ctx->pc = 0x4a3f0cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4a3f10:
    // 0x4a3f10: 0xb2200b  movn        $a0, $a1, $s2
    ctx->pc = 0x4a3f10u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_4a3f14:
    // 0x4a3f14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4a3f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4a3f18:
    // 0x4a3f18: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4a3f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_4a3f1c:
    // 0x4a3f1c: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x4a3f1cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
label_4a3f20:
    // 0x4a3f20: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4a3f20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4a3f24:
    // 0x4a3f24: 0x0  nop
    ctx->pc = 0x4a3f24u;
    // NOP
label_4a3f28:
    // 0x4a3f28: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4a3f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4a3f2c:
    // 0x4a3f2c: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x4a3f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_4a3f30:
    // 0x4a3f30: 0xaf8087b4  sw          $zero, -0x784C($gp)
    ctx->pc = 0x4a3f30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936500), GPR_U32(ctx, 0));
label_4a3f34:
    // 0x4a3f34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a3f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a3f38:
    // 0x4a3f38: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a3f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a3f3c:
    // 0x4a3f3c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a3f3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a3f40:
    // 0x4a3f40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a3f40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a3f44:
    // 0x4a3f44: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a3f44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a3f48:
    // 0x4a3f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a3f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a3f4c:
    // 0x4a3f4c: 0x3e00008  jr          $ra
label_4a3f50:
    if (ctx->pc == 0x4A3F50u) {
        ctx->pc = 0x4A3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3F4Cu;
        // 0x4a3f50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A3F54u;
        goto label_4a3f54;
    }
    ctx->pc = 0x4A3F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3F4Cu;
        // 0x4a3f50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A3F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A3F54u;
label_4a3f54:
    // 0x4a3f54: 0x0  nop
    ctx->pc = 0x4a3f54u;
    // NOP
    ctx->pc = 0x4a3f58u;
}
