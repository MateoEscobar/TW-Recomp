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

// Function: sub_00479BA0
// Address: 0x479ba0 - 0x47a008
void sub_00479BA0_0x479ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479BA0_0x479ba0");
#endif

    switch (ctx->pc) {
        case 0x479ba0u: goto label_479ba0;
        case 0x479ba4u: goto label_479ba4;
        case 0x479ba8u: goto label_479ba8;
        case 0x479bacu: goto label_479bac;
        case 0x479bb0u: goto label_479bb0;
        case 0x479bb4u: goto label_479bb4;
        case 0x479bb8u: goto label_479bb8;
        case 0x479bbcu: goto label_479bbc;
        case 0x479bc0u: goto label_479bc0;
        case 0x479bc4u: goto label_479bc4;
        case 0x479bc8u: goto label_479bc8;
        case 0x479bccu: goto label_479bcc;
        case 0x479bd0u: goto label_479bd0;
        case 0x479bd4u: goto label_479bd4;
        case 0x479bd8u: goto label_479bd8;
        case 0x479bdcu: goto label_479bdc;
        case 0x479be0u: goto label_479be0;
        case 0x479be4u: goto label_479be4;
        case 0x479be8u: goto label_479be8;
        case 0x479becu: goto label_479bec;
        case 0x479bf0u: goto label_479bf0;
        case 0x479bf4u: goto label_479bf4;
        case 0x479bf8u: goto label_479bf8;
        case 0x479bfcu: goto label_479bfc;
        case 0x479c00u: goto label_479c00;
        case 0x479c04u: goto label_479c04;
        case 0x479c08u: goto label_479c08;
        case 0x479c0cu: goto label_479c0c;
        case 0x479c10u: goto label_479c10;
        case 0x479c14u: goto label_479c14;
        case 0x479c18u: goto label_479c18;
        case 0x479c1cu: goto label_479c1c;
        case 0x479c20u: goto label_479c20;
        case 0x479c24u: goto label_479c24;
        case 0x479c28u: goto label_479c28;
        case 0x479c2cu: goto label_479c2c;
        case 0x479c30u: goto label_479c30;
        case 0x479c34u: goto label_479c34;
        case 0x479c38u: goto label_479c38;
        case 0x479c3cu: goto label_479c3c;
        case 0x479c40u: goto label_479c40;
        case 0x479c44u: goto label_479c44;
        case 0x479c48u: goto label_479c48;
        case 0x479c4cu: goto label_479c4c;
        case 0x479c50u: goto label_479c50;
        case 0x479c54u: goto label_479c54;
        case 0x479c58u: goto label_479c58;
        case 0x479c5cu: goto label_479c5c;
        case 0x479c60u: goto label_479c60;
        case 0x479c64u: goto label_479c64;
        case 0x479c68u: goto label_479c68;
        case 0x479c6cu: goto label_479c6c;
        case 0x479c70u: goto label_479c70;
        case 0x479c74u: goto label_479c74;
        case 0x479c78u: goto label_479c78;
        case 0x479c7cu: goto label_479c7c;
        case 0x479c80u: goto label_479c80;
        case 0x479c84u: goto label_479c84;
        case 0x479c88u: goto label_479c88;
        case 0x479c8cu: goto label_479c8c;
        case 0x479c90u: goto label_479c90;
        case 0x479c94u: goto label_479c94;
        case 0x479c98u: goto label_479c98;
        case 0x479c9cu: goto label_479c9c;
        case 0x479ca0u: goto label_479ca0;
        case 0x479ca4u: goto label_479ca4;
        case 0x479ca8u: goto label_479ca8;
        case 0x479cacu: goto label_479cac;
        case 0x479cb0u: goto label_479cb0;
        case 0x479cb4u: goto label_479cb4;
        case 0x479cb8u: goto label_479cb8;
        case 0x479cbcu: goto label_479cbc;
        case 0x479cc0u: goto label_479cc0;
        case 0x479cc4u: goto label_479cc4;
        case 0x479cc8u: goto label_479cc8;
        case 0x479cccu: goto label_479ccc;
        case 0x479cd0u: goto label_479cd0;
        case 0x479cd4u: goto label_479cd4;
        case 0x479cd8u: goto label_479cd8;
        case 0x479cdcu: goto label_479cdc;
        case 0x479ce0u: goto label_479ce0;
        case 0x479ce4u: goto label_479ce4;
        case 0x479ce8u: goto label_479ce8;
        case 0x479cecu: goto label_479cec;
        case 0x479cf0u: goto label_479cf0;
        case 0x479cf4u: goto label_479cf4;
        case 0x479cf8u: goto label_479cf8;
        case 0x479cfcu: goto label_479cfc;
        case 0x479d00u: goto label_479d00;
        case 0x479d04u: goto label_479d04;
        case 0x479d08u: goto label_479d08;
        case 0x479d0cu: goto label_479d0c;
        case 0x479d10u: goto label_479d10;
        case 0x479d14u: goto label_479d14;
        case 0x479d18u: goto label_479d18;
        case 0x479d1cu: goto label_479d1c;
        case 0x479d20u: goto label_479d20;
        case 0x479d24u: goto label_479d24;
        case 0x479d28u: goto label_479d28;
        case 0x479d2cu: goto label_479d2c;
        case 0x479d30u: goto label_479d30;
        case 0x479d34u: goto label_479d34;
        case 0x479d38u: goto label_479d38;
        case 0x479d3cu: goto label_479d3c;
        case 0x479d40u: goto label_479d40;
        case 0x479d44u: goto label_479d44;
        case 0x479d48u: goto label_479d48;
        case 0x479d4cu: goto label_479d4c;
        case 0x479d50u: goto label_479d50;
        case 0x479d54u: goto label_479d54;
        case 0x479d58u: goto label_479d58;
        case 0x479d5cu: goto label_479d5c;
        case 0x479d60u: goto label_479d60;
        case 0x479d64u: goto label_479d64;
        case 0x479d68u: goto label_479d68;
        case 0x479d6cu: goto label_479d6c;
        case 0x479d70u: goto label_479d70;
        case 0x479d74u: goto label_479d74;
        case 0x479d78u: goto label_479d78;
        case 0x479d7cu: goto label_479d7c;
        case 0x479d80u: goto label_479d80;
        case 0x479d84u: goto label_479d84;
        case 0x479d88u: goto label_479d88;
        case 0x479d8cu: goto label_479d8c;
        case 0x479d90u: goto label_479d90;
        case 0x479d94u: goto label_479d94;
        case 0x479d98u: goto label_479d98;
        case 0x479d9cu: goto label_479d9c;
        case 0x479da0u: goto label_479da0;
        case 0x479da4u: goto label_479da4;
        case 0x479da8u: goto label_479da8;
        case 0x479dacu: goto label_479dac;
        case 0x479db0u: goto label_479db0;
        case 0x479db4u: goto label_479db4;
        case 0x479db8u: goto label_479db8;
        case 0x479dbcu: goto label_479dbc;
        case 0x479dc0u: goto label_479dc0;
        case 0x479dc4u: goto label_479dc4;
        case 0x479dc8u: goto label_479dc8;
        case 0x479dccu: goto label_479dcc;
        case 0x479dd0u: goto label_479dd0;
        case 0x479dd4u: goto label_479dd4;
        case 0x479dd8u: goto label_479dd8;
        case 0x479ddcu: goto label_479ddc;
        case 0x479de0u: goto label_479de0;
        case 0x479de4u: goto label_479de4;
        case 0x479de8u: goto label_479de8;
        case 0x479decu: goto label_479dec;
        case 0x479df0u: goto label_479df0;
        case 0x479df4u: goto label_479df4;
        case 0x479df8u: goto label_479df8;
        case 0x479dfcu: goto label_479dfc;
        case 0x479e00u: goto label_479e00;
        case 0x479e04u: goto label_479e04;
        case 0x479e08u: goto label_479e08;
        case 0x479e0cu: goto label_479e0c;
        case 0x479e10u: goto label_479e10;
        case 0x479e14u: goto label_479e14;
        case 0x479e18u: goto label_479e18;
        case 0x479e1cu: goto label_479e1c;
        case 0x479e20u: goto label_479e20;
        case 0x479e24u: goto label_479e24;
        case 0x479e28u: goto label_479e28;
        case 0x479e2cu: goto label_479e2c;
        case 0x479e30u: goto label_479e30;
        case 0x479e34u: goto label_479e34;
        case 0x479e38u: goto label_479e38;
        case 0x479e3cu: goto label_479e3c;
        case 0x479e40u: goto label_479e40;
        case 0x479e44u: goto label_479e44;
        case 0x479e48u: goto label_479e48;
        case 0x479e4cu: goto label_479e4c;
        case 0x479e50u: goto label_479e50;
        case 0x479e54u: goto label_479e54;
        case 0x479e58u: goto label_479e58;
        case 0x479e5cu: goto label_479e5c;
        case 0x479e60u: goto label_479e60;
        case 0x479e64u: goto label_479e64;
        case 0x479e68u: goto label_479e68;
        case 0x479e6cu: goto label_479e6c;
        case 0x479e70u: goto label_479e70;
        case 0x479e74u: goto label_479e74;
        case 0x479e78u: goto label_479e78;
        case 0x479e7cu: goto label_479e7c;
        case 0x479e80u: goto label_479e80;
        case 0x479e84u: goto label_479e84;
        case 0x479e88u: goto label_479e88;
        case 0x479e8cu: goto label_479e8c;
        case 0x479e90u: goto label_479e90;
        case 0x479e94u: goto label_479e94;
        case 0x479e98u: goto label_479e98;
        case 0x479e9cu: goto label_479e9c;
        case 0x479ea0u: goto label_479ea0;
        case 0x479ea4u: goto label_479ea4;
        case 0x479ea8u: goto label_479ea8;
        case 0x479eacu: goto label_479eac;
        case 0x479eb0u: goto label_479eb0;
        case 0x479eb4u: goto label_479eb4;
        case 0x479eb8u: goto label_479eb8;
        case 0x479ebcu: goto label_479ebc;
        case 0x479ec0u: goto label_479ec0;
        case 0x479ec4u: goto label_479ec4;
        case 0x479ec8u: goto label_479ec8;
        case 0x479eccu: goto label_479ecc;
        case 0x479ed0u: goto label_479ed0;
        case 0x479ed4u: goto label_479ed4;
        case 0x479ed8u: goto label_479ed8;
        case 0x479edcu: goto label_479edc;
        case 0x479ee0u: goto label_479ee0;
        case 0x479ee4u: goto label_479ee4;
        case 0x479ee8u: goto label_479ee8;
        case 0x479eecu: goto label_479eec;
        case 0x479ef0u: goto label_479ef0;
        case 0x479ef4u: goto label_479ef4;
        case 0x479ef8u: goto label_479ef8;
        case 0x479efcu: goto label_479efc;
        case 0x479f00u: goto label_479f00;
        case 0x479f04u: goto label_479f04;
        case 0x479f08u: goto label_479f08;
        case 0x479f0cu: goto label_479f0c;
        case 0x479f10u: goto label_479f10;
        case 0x479f14u: goto label_479f14;
        case 0x479f18u: goto label_479f18;
        case 0x479f1cu: goto label_479f1c;
        case 0x479f20u: goto label_479f20;
        case 0x479f24u: goto label_479f24;
        case 0x479f28u: goto label_479f28;
        case 0x479f2cu: goto label_479f2c;
        case 0x479f30u: goto label_479f30;
        case 0x479f34u: goto label_479f34;
        case 0x479f38u: goto label_479f38;
        case 0x479f3cu: goto label_479f3c;
        case 0x479f40u: goto label_479f40;
        case 0x479f44u: goto label_479f44;
        case 0x479f48u: goto label_479f48;
        case 0x479f4cu: goto label_479f4c;
        case 0x479f50u: goto label_479f50;
        case 0x479f54u: goto label_479f54;
        case 0x479f58u: goto label_479f58;
        case 0x479f5cu: goto label_479f5c;
        case 0x479f60u: goto label_479f60;
        case 0x479f64u: goto label_479f64;
        case 0x479f68u: goto label_479f68;
        case 0x479f6cu: goto label_479f6c;
        case 0x479f70u: goto label_479f70;
        case 0x479f74u: goto label_479f74;
        case 0x479f78u: goto label_479f78;
        case 0x479f7cu: goto label_479f7c;
        case 0x479f80u: goto label_479f80;
        case 0x479f84u: goto label_479f84;
        case 0x479f88u: goto label_479f88;
        case 0x479f8cu: goto label_479f8c;
        case 0x479f90u: goto label_479f90;
        case 0x479f94u: goto label_479f94;
        case 0x479f98u: goto label_479f98;
        case 0x479f9cu: goto label_479f9c;
        case 0x479fa0u: goto label_479fa0;
        case 0x479fa4u: goto label_479fa4;
        case 0x479fa8u: goto label_479fa8;
        case 0x479facu: goto label_479fac;
        case 0x479fb0u: goto label_479fb0;
        case 0x479fb4u: goto label_479fb4;
        case 0x479fb8u: goto label_479fb8;
        case 0x479fbcu: goto label_479fbc;
        case 0x479fc0u: goto label_479fc0;
        case 0x479fc4u: goto label_479fc4;
        case 0x479fc8u: goto label_479fc8;
        case 0x479fccu: goto label_479fcc;
        case 0x479fd0u: goto label_479fd0;
        case 0x479fd4u: goto label_479fd4;
        case 0x479fd8u: goto label_479fd8;
        case 0x479fdcu: goto label_479fdc;
        case 0x479fe0u: goto label_479fe0;
        case 0x479fe4u: goto label_479fe4;
        case 0x479fe8u: goto label_479fe8;
        case 0x479fecu: goto label_479fec;
        case 0x479ff0u: goto label_479ff0;
        case 0x479ff4u: goto label_479ff4;
        case 0x479ff8u: goto label_479ff8;
        case 0x479ffcu: goto label_479ffc;
        case 0x47a000u: goto label_47a000;
        case 0x47a004u: goto label_47a004;
        default: break;
    }

    ctx->pc = 0x479ba0u;

label_479ba0:
    // 0x479ba0: 0x27bdfbd0  addiu       $sp, $sp, -0x430
    ctx->pc = 0x479ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966224));
label_479ba4:
    // 0x479ba4: 0x7fb10410  sq          $s1, 0x410($sp)
    ctx->pc = 0x479ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 17));
label_479ba8:
    // 0x479ba8: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x479ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
label_479bac:
    // 0x479bac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x479bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_479bb0:
    // 0x479bb0: 0x7fb00420  sq          $s0, 0x420($sp)
    ctx->pc = 0x479bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 16));
label_479bb4:
    // 0x479bb4: 0xc129c4c  jal         func_4A7130
label_479bb8:
    if (ctx->pc == 0x479BB8u) {
        ctx->pc = 0x479BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479BB4u;
        // 0x479bb8: 0x8c900014  lw          $s0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479BBCu;
        goto label_479bbc;
    }
    ctx->pc = 0x479BB4u;
    SET_GPR_U32(ctx, 31, 0x479BBCu);
    ctx->pc = 0x479BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x479BB4u;
    // 0x479bb8: 0x8c900014  lw          $s0, 0x14($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A7130u, 0x479BB4u, 0x479BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479BBCu;
label_479bbc:
    // 0x479bbc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x479bbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_479bc0:
    // 0x479bc0: 0x512000e7  beql        $t1, $zero, . + 4 + (0xE7 << 2)
label_479bc4:
    if (ctx->pc == 0x479BC4u) {
        ctx->pc = 0x479BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479BC0u;
        // 0x479bc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479BC8u;
        goto label_479bc8;
    }
    ctx->pc = 0x479BC0u;
    {
        const bool branch_taken_0x479bc0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x479bc0) {
            ctx->pc = 0x479BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479BC0u;
            // 0x479bc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x479F60u;
            goto label_479f60;
        }
    }
    ctx->pc = 0x479BC8u;
label_479bc8:
    // 0x479bc8: 0x9122003c  lbu         $v0, 0x3C($t1)
    ctx->pc = 0x479bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 60)));
label_479bcc:
    // 0x479bcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x479bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_479bd0:
    // 0x479bd0: 0xa20200c2  sb          $v0, 0xC2($s0)
    ctx->pc = 0x479bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 194), (uint8_t)GPR_U32(ctx, 2));
label_479bd4:
    // 0x479bd4: 0x10600107  beqz        $v1, . + 4 + (0x107 << 2)
label_479bd8:
    if (ctx->pc == 0x479BD8u) {
        ctx->pc = 0x479BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479BD4u;
        // 0x479bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479BDCu;
        goto label_479bdc;
    }
    ctx->pc = 0x479BD4u;
    {
        const bool branch_taken_0x479bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x479BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479BD4u;
        // 0x479bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479bd4) {
            ctx->pc = 0x479FF4u;
            goto label_479ff4;
        }
    }
    ctx->pc = 0x479BDCu;
label_479bdc:
    // 0x479bdc: 0x8d220034  lw          $v0, 0x34($t1)
    ctx->pc = 0x479bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 52)));
label_479be0:
    // 0x479be0: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x479be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
label_479be4:
    // 0x479be4: 0x8d230038  lw          $v1, 0x38($t1)
    ctx->pc = 0x479be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 56)));
label_479be8:
    // 0x479be8: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x479be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
label_479bec:
    // 0x479bec: 0x8d220040  lw          $v0, 0x40($t1)
    ctx->pc = 0x479becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
label_479bf0:
    // 0x479bf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_479bf4:
    if (ctx->pc == 0x479BF4u) {
        ctx->pc = 0x479BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479BF0u;
        // 0x479bf4: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479BF8u;
        goto label_479bf8;
    }
    ctx->pc = 0x479BF0u;
    {
        const bool branch_taken_0x479bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x479BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479BF0u;
        // 0x479bf4: 0xae0200bc  sw          $v0, 0xBC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479bf0) {
            ctx->pc = 0x479C00u;
            goto label_479c00;
        }
    }
    ctx->pc = 0x479BF8u;
label_479bf8:
    // 0x479bf8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x479bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_479bfc:
    // 0x479bfc: 0xae0200bc  sw          $v0, 0xBC($s0)
    ctx->pc = 0x479bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 2));
label_479c00:
    // 0x479c00: 0xa20000c1  sb          $zero, 0xC1($s0)
    ctx->pc = 0x479c00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 193), (uint8_t)GPR_U32(ctx, 0));
label_479c04:
    // 0x479c04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x479c04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_479c08:
    // 0x479c08: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x479c08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_479c0c:
    // 0x479c0c: 0x0  nop
    ctx->pc = 0x479c0cu;
    // NOP
label_479c10:
    // 0x479c10: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x479c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_479c14:
    // 0x479c14: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x479c14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_479c18:
    // 0x479c18: 0x10c000c9  beqz        $a2, . + 4 + (0xC9 << 2)
label_479c1c:
    if (ctx->pc == 0x479C1Cu) {
        ctx->pc = 0x479C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C18u;
        // 0x479c1c: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479C20u;
        goto label_479c20;
    }
    ctx->pc = 0x479C18u;
    {
        const bool branch_taken_0x479c18 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x479C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C18u;
        // 0x479c1c: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479c18) {
            ctx->pc = 0x479F40u;
            goto label_479f40;
        }
    }
    ctx->pc = 0x479C20u;
label_479c20:
    // 0x479c20: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x479c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_479c24:
    // 0x479c24: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x479c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_479c28:
    // 0x479c28: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_479c2c:
    if (ctx->pc == 0x479C2Cu) {
        ctx->pc = 0x479C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C28u;
        // 0x479c2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479C30u;
        goto label_479c30;
    }
    ctx->pc = 0x479C28u;
    {
        const bool branch_taken_0x479c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C28u;
        // 0x479c2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479c28) {
            ctx->pc = 0x479D50u;
            goto label_479d50;
        }
    }
    ctx->pc = 0x479C30u;
label_479c30:
    // 0x479c30: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x479c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_479c34:
    // 0x479c34: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x479c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_479c38:
    // 0x479c38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x479c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_479c3c:
    // 0x479c3c: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x479c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_479c40:
    // 0x479c40: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x479c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_479c44:
    // 0x479c44: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x479c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_479c48:
    // 0x479c48: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
label_479c4c:
    if (ctx->pc == 0x479C4Cu) {
        ctx->pc = 0x479C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C48u;
        // 0x479c4c: 0x3c046800  lui         $a0, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26624 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479C50u;
        goto label_479c50;
    }
    ctx->pc = 0x479C48u;
    {
        const bool branch_taken_0x479c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x479C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C48u;
        // 0x479c4c: 0x3c046800  lui         $a0, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26624 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479c48) {
            ctx->pc = 0x479F94u;
            goto label_479f94;
        }
    }
    ctx->pc = 0x479C50u;
label_479c50:
    // 0x479c50: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x479c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_479c54:
    // 0x479c54: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x479c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_479c58:
    // 0x479c58: 0x1064001d  beq         $v1, $a0, . + 4 + (0x1D << 2)
label_479c5c:
    if (ctx->pc == 0x479C5Cu) {
        ctx->pc = 0x479C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C58u;
        // 0x479c5c: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x479C60u;
        goto label_479c60;
    }
    ctx->pc = 0x479C58u;
    {
        const bool branch_taken_0x479c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x479C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C58u;
        // 0x479c5c: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x479c58) {
            ctx->pc = 0x479CD0u;
            goto label_479cd0;
        }
    }
    ctx->pc = 0x479C60u;
label_479c60:
    // 0x479c60: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_479c64:
    if (ctx->pc == 0x479C64u) {
        ctx->pc = 0x479C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C60u;
        // 0x479c64: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479C68u;
        goto label_479c68;
    }
    ctx->pc = 0x479C60u;
    {
        const bool branch_taken_0x479c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x479C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C60u;
        // 0x479c64: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479c60) {
            ctx->pc = 0x479CA0u;
            goto label_479ca0;
        }
    }
    ctx->pc = 0x479C68u;
label_479c68:
    // 0x479c68: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x479c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_479c6c:
    // 0x479c6c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_479c70:
    if (ctx->pc == 0x479C70u) {
        ctx->pc = 0x479C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C6Cu;
        // 0x479c70: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x479C74u;
        goto label_479c74;
    }
    ctx->pc = 0x479C6Cu;
    {
        const bool branch_taken_0x479c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x479C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C6Cu;
        // 0x479c70: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x479c6c) {
            ctx->pc = 0x479CC4u;
            goto label_479cc4;
        }
    }
    ctx->pc = 0x479C74u;
label_479c74:
    // 0x479c74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_479c78:
    if (ctx->pc == 0x479C78u) {
        ctx->pc = 0x479C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C74u;
        // 0x479c78: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479C7Cu;
        goto label_479c7c;
    }
    ctx->pc = 0x479C74u;
    {
        const bool branch_taken_0x479c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x479C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C74u;
        // 0x479c78: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479c74) {
            ctx->pc = 0x479C90u;
            goto label_479c90;
        }
    }
    ctx->pc = 0x479C7Cu;
label_479c7c:
    // 0x479c7c: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x479c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_479c80:
    // 0x479c80: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_479c84:
    if (ctx->pc == 0x479C84u) {
        ctx->pc = 0x479C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C80u;
        // 0x479c84: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479C88u;
        goto label_479c88;
    }
    ctx->pc = 0x479C80u;
    {
        const bool branch_taken_0x479c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x479C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C80u;
        // 0x479c84: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479c80) {
            ctx->pc = 0x479CB8u;
            goto label_479cb8;
        }
    }
    ctx->pc = 0x479C88u;
label_479c88:
    // 0x479c88: 0x10000016  b           . + 4 + (0x16 << 2)
label_479c8c:
    if (ctx->pc == 0x479C8Cu) {
        ctx->pc = 0x479C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C88u;
        // 0x479c8c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479C90u;
        goto label_479c90;
    }
    ctx->pc = 0x479C88u;
    {
        const bool branch_taken_0x479c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C88u;
        // 0x479c8c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479c88) {
            ctx->pc = 0x479CE4u;
            goto label_479ce4;
        }
    }
    ctx->pc = 0x479C90u;
label_479c90:
    // 0x479c90: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_479c94:
    if (ctx->pc == 0x479C94u) {
        ctx->pc = 0x479C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C90u;
        // 0x479c94: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479C98u;
        goto label_479c98;
    }
    ctx->pc = 0x479C90u;
    {
        const bool branch_taken_0x479c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x479C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C90u;
        // 0x479c94: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479c90) {
            ctx->pc = 0x479CB8u;
            goto label_479cb8;
        }
    }
    ctx->pc = 0x479C98u;
label_479c98:
    // 0x479c98: 0x10000012  b           . + 4 + (0x12 << 2)
label_479c9c:
    if (ctx->pc == 0x479C9Cu) {
        ctx->pc = 0x479C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C98u;
        // 0x479c9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479CA0u;
        goto label_479ca0;
    }
    ctx->pc = 0x479C98u;
    {
        const bool branch_taken_0x479c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479C98u;
        // 0x479c9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479c98) {
            ctx->pc = 0x479CE4u;
            goto label_479ce4;
        }
    }
    ctx->pc = 0x479CA0u;
label_479ca0:
    // 0x479ca0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_479ca4:
    if (ctx->pc == 0x479CA4u) {
        ctx->pc = 0x479CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CA0u;
        // 0x479ca4: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x479CA8u;
        goto label_479ca8;
    }
    ctx->pc = 0x479CA0u;
    {
        const bool branch_taken_0x479ca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x479CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CA0u;
        // 0x479ca4: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x479ca0) {
            ctx->pc = 0x479CC4u;
            goto label_479cc4;
        }
    }
    ctx->pc = 0x479CA8u;
label_479ca8:
    // 0x479ca8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_479cac:
    if (ctx->pc == 0x479CACu) {
        ctx->pc = 0x479CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CA8u;
        // 0x479cac: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479CB0u;
        goto label_479cb0;
    }
    ctx->pc = 0x479CA8u;
    {
        const bool branch_taken_0x479ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CA8u;
        // 0x479cac: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479ca8) {
            ctx->pc = 0x479CDCu;
            goto label_479cdc;
        }
    }
    ctx->pc = 0x479CB0u;
label_479cb0:
    // 0x479cb0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_479cb4:
    if (ctx->pc == 0x479CB4u) {
        ctx->pc = 0x479CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CB0u;
        // 0x479cb4: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479CB8u;
        goto label_479cb8;
    }
    ctx->pc = 0x479CB0u;
    {
        const bool branch_taken_0x479cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x479CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CB0u;
        // 0x479cb4: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479cb0) {
            ctx->pc = 0x479CE0u;
            goto label_479ce0;
        }
    }
    ctx->pc = 0x479CB8u;
label_479cb8:
    // 0x479cb8: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x479cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_479cbc:
    // 0x479cbc: 0x10000009  b           . + 4 + (0x9 << 2)
label_479cc0:
    if (ctx->pc == 0x479CC0u) {
        ctx->pc = 0x479CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CBCu;
        // 0x479cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479CC4u;
        goto label_479cc4;
    }
    ctx->pc = 0x479CBCu;
    {
        const bool branch_taken_0x479cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CBCu;
        // 0x479cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479cbc) {
            ctx->pc = 0x479CE4u;
            goto label_479ce4;
        }
    }
    ctx->pc = 0x479CC4u;
label_479cc4:
    // 0x479cc4: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x479cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_479cc8:
    // 0x479cc8: 0x10000006  b           . + 4 + (0x6 << 2)
label_479ccc:
    if (ctx->pc == 0x479CCCu) {
        ctx->pc = 0x479CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CC8u;
        // 0x479ccc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479CD0u;
        goto label_479cd0;
    }
    ctx->pc = 0x479CC8u;
    {
        const bool branch_taken_0x479cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CC8u;
        // 0x479ccc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479cc8) {
            ctx->pc = 0x479CE4u;
            goto label_479ce4;
        }
    }
    ctx->pc = 0x479CD0u;
label_479cd0:
    // 0x479cd0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x479cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_479cd4:
    // 0x479cd4: 0x10000003  b           . + 4 + (0x3 << 2)
label_479cd8:
    if (ctx->pc == 0x479CD8u) {
        ctx->pc = 0x479CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CD4u;
        // 0x479cd8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479CDCu;
        goto label_479cdc;
    }
    ctx->pc = 0x479CD4u;
    {
        const bool branch_taken_0x479cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CD4u;
        // 0x479cd8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479cd4) {
            ctx->pc = 0x479CE4u;
            goto label_479ce4;
        }
    }
    ctx->pc = 0x479CDCu;
label_479cdc:
    // 0x479cdc: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x479cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_479ce0:
    // 0x479ce0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x479ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_479ce4:
    // 0x479ce4: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x479ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_479ce8:
    // 0x479ce8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x479ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_479cec:
    // 0x479cec: 0x30620006  andi        $v0, $v1, 0x6
    ctx->pc = 0x479cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
label_479cf0:
    // 0x479cf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_479cf4:
    if (ctx->pc == 0x479CF4u) {
        ctx->pc = 0x479CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CF0u;
        // 0x479cf4: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x479CF8u;
        goto label_479cf8;
    }
    ctx->pc = 0x479CF0u;
    {
        const bool branch_taken_0x479cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CF0u;
        // 0x479cf4: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x479cf0) {
            ctx->pc = 0x479D20u;
            goto label_479d20;
        }
    }
    ctx->pc = 0x479CF8u;
label_479cf8:
    // 0x479cf8: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
label_479cfc:
    if (ctx->pc == 0x479CFCu) {
        ctx->pc = 0x479CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CF8u;
        // 0x479cfc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479D00u;
        goto label_479d00;
    }
    ctx->pc = 0x479CF8u;
    {
        const bool branch_taken_0x479cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x479CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479CF8u;
        // 0x479cfc: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479cf8) {
            ctx->pc = 0x479FB0u;
            goto label_479fb0;
        }
    }
    ctx->pc = 0x479D00u;
label_479d00:
    // 0x479d00: 0x920200c1  lbu         $v0, 0xC1($s0)
    ctx->pc = 0x479d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 193)));
label_479d04:
    // 0x479d04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x479d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_479d08:
    // 0x479d08: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x479d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_479d0c:
    // 0x479d0c: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x479d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
label_479d10:
    // 0x479d10: 0x920300c1  lbu         $v1, 0xC1($s0)
    ctx->pc = 0x479d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 193)));
label_479d14:
    // 0x479d14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x479d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_479d18:
    // 0x479d18: 0x1000008b  b           . + 4 + (0x8B << 2)
label_479d1c:
    if (ctx->pc == 0x479D1Cu) {
        ctx->pc = 0x479D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D18u;
        // 0x479d1c: 0xa20300c1  sb          $v1, 0xC1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479D20u;
        goto label_479d20;
    }
    ctx->pc = 0x479D18u;
    {
        const bool branch_taken_0x479d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D18u;
        // 0x479d1c: 0xa20300c1  sb          $v1, 0xC1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 193), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479d18) {
            ctx->pc = 0x479F48u;
            goto label_479f48;
        }
    }
    ctx->pc = 0x479D20u;
label_479d20:
    // 0x479d20: 0x2d020006  sltiu       $v0, $t0, 0x6
    ctx->pc = 0x479d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_479d24:
    // 0x479d24: 0x504000a8  beql        $v0, $zero, . + 4 + (0xA8 << 2)
label_479d28:
    if (ctx->pc == 0x479D28u) {
        ctx->pc = 0x479D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D24u;
        // 0x479d28: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479D2Cu;
        goto label_479d2c;
    }
    ctx->pc = 0x479D24u;
    {
        const bool branch_taken_0x479d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x479d24) {
            ctx->pc = 0x479D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x479D24u;
            // 0x479d28: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x479FC8u;
            goto label_479fc8;
        }
    }
    ctx->pc = 0x479D2Cu;
label_479d2c:
    // 0x479d2c: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x479d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_479d30:
    // 0x479d30: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_479d34:
    if (ctx->pc == 0x479D34u) {
        ctx->pc = 0x479D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D30u;
        // 0x479d34: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479D38u;
        goto label_479d38;
    }
    ctx->pc = 0x479D30u;
    {
        const bool branch_taken_0x479d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D30u;
        // 0x479d34: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479d30) {
            ctx->pc = 0x479F48u;
            goto label_479f48;
        }
    }
    ctx->pc = 0x479D38u;
label_479d38:
    // 0x479d38: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x479d38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_479d3c:
    // 0x479d3c: 0x8c62addc  lw          $v0, -0x5224($v1)
    ctx->pc = 0x479d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946268)));
label_479d40:
    // 0x479d40: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x479d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_479d44:
    // 0x479d44: 0x24a5ed30  addiu       $a1, $a1, -0x12D0
    ctx->pc = 0x479d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962480));
label_479d48:
    // 0x479d48: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_479d4c:
    if (ctx->pc == 0x479D4Cu) {
        ctx->pc = 0x479D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D48u;
        // 0x479d4c: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479D50u;
        goto label_479d50;
    }
    ctx->pc = 0x479D48u;
    {
        const bool branch_taken_0x479d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D48u;
        // 0x479d4c: 0x27a40300  addiu       $a0, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479d48) {
            ctx->pc = 0x479FDCu;
            goto label_479fdc;
        }
    }
    ctx->pc = 0x479D50u;
label_479d50:
    // 0x479d50: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x479d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_479d54:
    // 0x479d54: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_479d58:
    if (ctx->pc == 0x479D58u) {
        ctx->pc = 0x479D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D54u;
        // 0x479d58: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479D5Cu;
        goto label_479d5c;
    }
    ctx->pc = 0x479D54u;
    {
        const bool branch_taken_0x479d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D54u;
        // 0x479d58: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479d54) {
            ctx->pc = 0x479E14u;
            goto label_479e14;
        }
    }
    ctx->pc = 0x479D5Cu;
label_479d5c:
    // 0x479d5c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x479d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
label_479d60:
    // 0x479d60: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x479d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_479d64:
    // 0x479d64: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x479d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_479d68:
    // 0x479d68: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x479d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_479d6c:
    // 0x479d6c: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x479d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
label_479d70:
    // 0x479d70: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_479d74:
    if (ctx->pc == 0x479D74u) {
        ctx->pc = 0x479D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D70u;
        // 0x479d74: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479D78u;
        goto label_479d78;
    }
    ctx->pc = 0x479D70u;
    {
        const bool branch_taken_0x479d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x479D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D70u;
        // 0x479d74: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479d70) {
            ctx->pc = 0x479DF4u;
            goto label_479df4;
        }
    }
    ctx->pc = 0x479D78u;
label_479d78:
    // 0x479d78: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x479d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_479d7c:
    // 0x479d7c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_479d80:
    if (ctx->pc == 0x479D80u) {
        ctx->pc = 0x479D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D7Cu;
        // 0x479d80: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479D84u;
        goto label_479d84;
    }
    ctx->pc = 0x479D7Cu;
    {
        const bool branch_taken_0x479d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x479D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D7Cu;
        // 0x479d80: 0x3c026d00  lui         $v0, 0x6D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479d7c) {
            ctx->pc = 0x479DBCu;
            goto label_479dbc;
        }
    }
    ctx->pc = 0x479D84u;
label_479d84:
    // 0x479d84: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x479d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
label_479d88:
    // 0x479d88: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_479d8c:
    if (ctx->pc == 0x479D8Cu) {
        ctx->pc = 0x479D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D88u;
        // 0x479d8c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x479D90u;
        goto label_479d90;
    }
    ctx->pc = 0x479D88u;
    {
        const bool branch_taken_0x479d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x479D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D88u;
        // 0x479d8c: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x479d88) {
            ctx->pc = 0x479DE4u;
            goto label_479de4;
        }
    }
    ctx->pc = 0x479D90u;
label_479d90:
    // 0x479d90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_479d94:
    if (ctx->pc == 0x479D94u) {
        ctx->pc = 0x479D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D90u;
        // 0x479d94: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479D98u;
        goto label_479d98;
    }
    ctx->pc = 0x479D90u;
    {
        const bool branch_taken_0x479d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x479D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D90u;
        // 0x479d94: 0x3c026500  lui         $v0, 0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25856 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479d90) {
            ctx->pc = 0x479DACu;
            goto label_479dac;
        }
    }
    ctx->pc = 0x479D98u;
label_479d98:
    // 0x479d98: 0x3c026000  lui         $v0, 0x6000
    ctx->pc = 0x479d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24576 << 16));
label_479d9c:
    // 0x479d9c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_479da0:
    if (ctx->pc == 0x479DA0u) {
        ctx->pc = 0x479DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D9Cu;
        // 0x479da0: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479DA4u;
        goto label_479da4;
    }
    ctx->pc = 0x479D9Cu;
    {
        const bool branch_taken_0x479d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x479DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479D9Cu;
        // 0x479da0: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479d9c) {
            ctx->pc = 0x479DD4u;
            goto label_479dd4;
        }
    }
    ctx->pc = 0x479DA4u;
label_479da4:
    // 0x479da4: 0x10000019  b           . + 4 + (0x19 << 2)
label_479da8:
    if (ctx->pc == 0x479DA8u) {
        ctx->pc = 0x479DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DA4u;
        // 0x479da8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479DACu;
        goto label_479dac;
    }
    ctx->pc = 0x479DA4u;
    {
        const bool branch_taken_0x479da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DA4u;
        // 0x479da8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479da4) {
            ctx->pc = 0x479E0Cu;
            goto label_479e0c;
        }
    }
    ctx->pc = 0x479DACu;
label_479dac:
    // 0x479dac: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_479db0:
    if (ctx->pc == 0x479DB0u) {
        ctx->pc = 0x479DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DACu;
        // 0x479db0: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479DB4u;
        goto label_479db4;
    }
    ctx->pc = 0x479DACu;
    {
        const bool branch_taken_0x479dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x479DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DACu;
        // 0x479db0: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479dac) {
            ctx->pc = 0x479DD4u;
            goto label_479dd4;
        }
    }
    ctx->pc = 0x479DB4u;
label_479db4:
    // 0x479db4: 0x10000015  b           . + 4 + (0x15 << 2)
label_479db8:
    if (ctx->pc == 0x479DB8u) {
        ctx->pc = 0x479DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DB4u;
        // 0x479db8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479DBCu;
        goto label_479dbc;
    }
    ctx->pc = 0x479DB4u;
    {
        const bool branch_taken_0x479db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DB4u;
        // 0x479db8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479db4) {
            ctx->pc = 0x479E0Cu;
            goto label_479e0c;
        }
    }
    ctx->pc = 0x479DBCu;
label_479dbc:
    // 0x479dbc: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_479dc0:
    if (ctx->pc == 0x479DC0u) {
        ctx->pc = 0x479DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DBCu;
        // 0x479dc0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x479DC4u;
        goto label_479dc4;
    }
    ctx->pc = 0x479DBCu;
    {
        const bool branch_taken_0x479dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x479DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DBCu;
        // 0x479dc0: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x479dbc) {
            ctx->pc = 0x479DE4u;
            goto label_479de4;
        }
    }
    ctx->pc = 0x479DC4u;
label_479dc4:
    // 0x479dc4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_479dc8:
    if (ctx->pc == 0x479DC8u) {
        ctx->pc = 0x479DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DC4u;
        // 0x479dc8: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479DCCu;
        goto label_479dcc;
    }
    ctx->pc = 0x479DC4u;
    {
        const bool branch_taken_0x479dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DC4u;
        // 0x479dc8: 0x3c026e00  lui         $v0, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479dc4) {
            ctx->pc = 0x479E04u;
            goto label_479e04;
        }
    }
    ctx->pc = 0x479DCCu;
label_479dcc:
    // 0x479dcc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_479dd0:
    if (ctx->pc == 0x479DD0u) {
        ctx->pc = 0x479DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DCCu;
        // 0x479dd0: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479DD4u;
        goto label_479dd4;
    }
    ctx->pc = 0x479DCCu;
    {
        const bool branch_taken_0x479dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x479DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DCCu;
        // 0x479dd0: 0x2071821  addu        $v1, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479dcc) {
            ctx->pc = 0x479E08u;
            goto label_479e08;
        }
    }
    ctx->pc = 0x479DD4u;
label_479dd4:
    // 0x479dd4: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x479dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_479dd8:
    // 0x479dd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x479dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_479ddc:
    // 0x479ddc: 0x1000005a  b           . + 4 + (0x5A << 2)
label_479de0:
    if (ctx->pc == 0x479DE0u) {
        ctx->pc = 0x479DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DDCu;
        // 0x479de0: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479DE4u;
        goto label_479de4;
    }
    ctx->pc = 0x479DDCu;
    {
        const bool branch_taken_0x479ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DDCu;
        // 0x479de0: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479ddc) {
            ctx->pc = 0x479F48u;
            goto label_479f48;
        }
    }
    ctx->pc = 0x479DE4u;
label_479de4:
    // 0x479de4: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x479de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_479de8:
    // 0x479de8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x479de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_479dec:
    // 0x479dec: 0x10000056  b           . + 4 + (0x56 << 2)
label_479df0:
    if (ctx->pc == 0x479DF0u) {
        ctx->pc = 0x479DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DECu;
        // 0x479df0: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479DF4u;
        goto label_479df4;
    }
    ctx->pc = 0x479DECu;
    {
        const bool branch_taken_0x479dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DECu;
        // 0x479df0: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479dec) {
            ctx->pc = 0x479F48u;
            goto label_479f48;
        }
    }
    ctx->pc = 0x479DF4u;
label_479df4:
    // 0x479df4: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x479df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_479df8:
    // 0x479df8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x479df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_479dfc:
    // 0x479dfc: 0x10000052  b           . + 4 + (0x52 << 2)
label_479e00:
    if (ctx->pc == 0x479E00u) {
        ctx->pc = 0x479E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DFCu;
        // 0x479e00: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479E04u;
        goto label_479e04;
    }
    ctx->pc = 0x479DFCu;
    {
        const bool branch_taken_0x479dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479DFCu;
        // 0x479e00: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479dfc) {
            ctx->pc = 0x479F48u;
            goto label_479f48;
        }
    }
    ctx->pc = 0x479E04u;
label_479e04:
    // 0x479e04: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x479e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_479e08:
    // 0x479e08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x479e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_479e0c:
    // 0x479e0c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_479e10:
    if (ctx->pc == 0x479E10u) {
        ctx->pc = 0x479E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E0Cu;
        // 0x479e10: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479E14u;
        goto label_479e14;
    }
    ctx->pc = 0x479E0Cu;
    {
        const bool branch_taken_0x479e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E0Cu;
        // 0x479e10: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479e0c) {
            ctx->pc = 0x479F48u;
            goto label_479f48;
        }
    }
    ctx->pc = 0x479E14u;
label_479e14:
    // 0x479e14: 0x2d02000a  sltiu       $v0, $t0, 0xA
    ctx->pc = 0x479e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_479e18:
    // 0x479e18: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_479e1c:
    if (ctx->pc == 0x479E1Cu) {
        ctx->pc = 0x479E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E18u;
        // 0x479e1c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479E20u;
        goto label_479e20;
    }
    ctx->pc = 0x479E18u;
    {
        const bool branch_taken_0x479e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x479E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E18u;
        // 0x479e1c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479e18) {
            ctx->pc = 0x479F10u;
            goto label_479f10;
        }
    }
    ctx->pc = 0x479E20u;
label_479e20:
    // 0x479e20: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_479e24:
    // 0x479e24: 0x2442ee50  addiu       $v0, $v0, -0x11B0
    ctx->pc = 0x479e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962768));
label_479e28:
    // 0x479e28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x479e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_479e2c:
    // 0x479e2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x479e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_479e30:
    // 0x479e30: 0x600008  jr          $v1
label_479e34:
    if (ctx->pc == 0x479E34u) {
        ctx->pc = 0x479E38u;
        goto label_479e38;
    }
    ctx->pc = 0x479E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x479E38u: goto label_479e38;
            case 0x479E48u: goto label_479e48;
            case 0x479E58u: goto label_479e58;
            case 0x479E74u: goto label_479e74;
            case 0x479E84u: goto label_479e84;
            case 0x479EA0u: goto label_479ea0;
            case 0x479EC4u: goto label_479ec4;
            case 0x479ED4u: goto label_479ed4;
            case 0x479EE4u: goto label_479ee4;
            case 0x479EF4u: goto label_479ef4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479E30u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x479E38u;
label_479e38:
    // 0x479e38: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_479e3c:
    // 0x479e3c: 0x8c436c60  lw          $v1, 0x6C60($v0)
    ctx->pc = 0x479e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27744)));
label_479e40:
    // 0x479e40: 0x10000038  b           . + 4 + (0x38 << 2)
label_479e44:
    if (ctx->pc == 0x479E44u) {
        ctx->pc = 0x479E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E40u;
        // 0x479e44: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479E48u;
        goto label_479e48;
    }
    ctx->pc = 0x479E40u;
    {
        const bool branch_taken_0x479e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E40u;
        // 0x479e44: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479e40) {
            ctx->pc = 0x479F24u;
            goto label_479f24;
        }
    }
    ctx->pc = 0x479E48u;
label_479e48:
    // 0x479e48: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_479e4c:
    // 0x479e4c: 0x24436c68  addiu       $v1, $v0, 0x6C68
    ctx->pc = 0x479e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27752));
label_479e50:
    // 0x479e50: 0x1000000f  b           . + 4 + (0xF << 2)
label_479e54:
    if (ctx->pc == 0x479E54u) {
        ctx->pc = 0x479E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E50u;
        // 0x479e54: 0x8c446c68  lw          $a0, 0x6C68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479E58u;
        goto label_479e58;
    }
    ctx->pc = 0x479E50u;
    {
        const bool branch_taken_0x479e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E50u;
        // 0x479e54: 0x8c446c68  lw          $a0, 0x6C68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479e50) {
            ctx->pc = 0x479E90u;
            goto label_479e90;
        }
    }
    ctx->pc = 0x479E58u;
label_479e58:
    // 0x479e58: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_479e5c:
    // 0x479e5c: 0x24436c70  addiu       $v1, $v0, 0x6C70
    ctx->pc = 0x479e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27760));
label_479e60:
    // 0x479e60: 0x94446c70  lhu         $a0, 0x6C70($v0)
    ctx->pc = 0x479e60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 27760)));
label_479e64:
    // 0x479e64: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x479e64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_479e68:
    // 0x479e68: 0xa7a40100  sh          $a0, 0x100($sp)
    ctx->pc = 0x479e68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 4));
label_479e6c:
    // 0x479e6c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_479e70:
    if (ctx->pc == 0x479E70u) {
        ctx->pc = 0x479E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E6Cu;
        // 0x479e70: 0xa3a50102  sb          $a1, 0x102($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 258), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479E74u;
        goto label_479e74;
    }
    ctx->pc = 0x479E6Cu;
    {
        const bool branch_taken_0x479e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E6Cu;
        // 0x479e70: 0xa3a50102  sb          $a1, 0x102($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 258), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479e6c) {
            ctx->pc = 0x479F24u;
            goto label_479f24;
        }
    }
    ctx->pc = 0x479E74u;
label_479e74:
    // 0x479e74: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_479e78:
    // 0x479e78: 0x8c436c78  lw          $v1, 0x6C78($v0)
    ctx->pc = 0x479e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27768)));
label_479e7c:
    // 0x479e7c: 0x10000029  b           . + 4 + (0x29 << 2)
label_479e80:
    if (ctx->pc == 0x479E80u) {
        ctx->pc = 0x479E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E7Cu;
        // 0x479e80: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479E84u;
        goto label_479e84;
    }
    ctx->pc = 0x479E7Cu;
    {
        const bool branch_taken_0x479e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E7Cu;
        // 0x479e80: 0xafa30100  sw          $v1, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479e7c) {
            ctx->pc = 0x479F24u;
            goto label_479f24;
        }
    }
    ctx->pc = 0x479E84u;
label_479e84:
    // 0x479e84: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_479e88:
    // 0x479e88: 0x24436c80  addiu       $v1, $v0, 0x6C80
    ctx->pc = 0x479e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27776));
label_479e8c:
    // 0x479e8c: 0x8c446c80  lw          $a0, 0x6C80($v0)
    ctx->pc = 0x479e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27776)));
label_479e90:
    // 0x479e90: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x479e90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_479e94:
    // 0x479e94: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x479e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_479e98:
    // 0x479e98: 0x10000022  b           . + 4 + (0x22 << 2)
label_479e9c:
    if (ctx->pc == 0x479E9Cu) {
        ctx->pc = 0x479E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E98u;
        // 0x479e9c: 0xa3a50104  sb          $a1, 0x104($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 260), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479EA0u;
        goto label_479ea0;
    }
    ctx->pc = 0x479E98u;
    {
        const bool branch_taken_0x479e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479E98u;
        // 0x479e9c: 0xa3a50104  sb          $a1, 0x104($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 260), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479e98) {
            ctx->pc = 0x479F24u;
            goto label_479f24;
        }
    }
    ctx->pc = 0x479EA0u;
label_479ea0:
    // 0x479ea0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_479ea4:
    // 0x479ea4: 0x24436c88  addiu       $v1, $v0, 0x6C88
    ctx->pc = 0x479ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27784));
label_479ea8:
    // 0x479ea8: 0x8c446c88  lw          $a0, 0x6C88($v0)
    ctx->pc = 0x479ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27784)));
label_479eac:
    // 0x479eac: 0x90650006  lbu         $a1, 0x6($v1)
    ctx->pc = 0x479eacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 6)));
label_479eb0:
    // 0x479eb0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x479eb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_479eb4:
    // 0x479eb4: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x479eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_479eb8:
    // 0x479eb8: 0xa7a20104  sh          $v0, 0x104($sp)
    ctx->pc = 0x479eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 2));
label_479ebc:
    // 0x479ebc: 0x10000019  b           . + 4 + (0x19 << 2)
label_479ec0:
    if (ctx->pc == 0x479EC0u) {
        ctx->pc = 0x479EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479EBCu;
        // 0x479ec0: 0xa3a50106  sb          $a1, 0x106($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 262), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479EC4u;
        goto label_479ec4;
    }
    ctx->pc = 0x479EBCu;
    {
        const bool branch_taken_0x479ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479EBCu;
        // 0x479ec0: 0xa3a50106  sb          $a1, 0x106($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 262), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479ebc) {
            ctx->pc = 0x479F24u;
            goto label_479f24;
        }
    }
    ctx->pc = 0x479EC4u;
label_479ec4:
    // 0x479ec4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_479ec8:
    // 0x479ec8: 0x24436c90  addiu       $v1, $v0, 0x6C90
    ctx->pc = 0x479ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27792));
label_479ecc:
    // 0x479ecc: 0x1000000c  b           . + 4 + (0xC << 2)
label_479ed0:
    if (ctx->pc == 0x479ED0u) {
        ctx->pc = 0x479ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479ECCu;
        // 0x479ed0: 0x8c446c90  lw          $a0, 0x6C90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27792)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479ED4u;
        goto label_479ed4;
    }
    ctx->pc = 0x479ECCu;
    {
        const bool branch_taken_0x479ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479ECCu;
        // 0x479ed0: 0x8c446c90  lw          $a0, 0x6C90($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479ecc) {
            ctx->pc = 0x479F00u;
            goto label_479f00;
        }
    }
    ctx->pc = 0x479ED4u;
label_479ed4:
    // 0x479ed4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_479ed8:
    // 0x479ed8: 0x24436c98  addiu       $v1, $v0, 0x6C98
    ctx->pc = 0x479ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27800));
label_479edc:
    // 0x479edc: 0x10000008  b           . + 4 + (0x8 << 2)
label_479ee0:
    if (ctx->pc == 0x479EE0u) {
        ctx->pc = 0x479EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479EDCu;
        // 0x479ee0: 0x8c446c98  lw          $a0, 0x6C98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479EE4u;
        goto label_479ee4;
    }
    ctx->pc = 0x479EDCu;
    {
        const bool branch_taken_0x479edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479EDCu;
        // 0x479ee0: 0x8c446c98  lw          $a0, 0x6C98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479edc) {
            ctx->pc = 0x479F00u;
            goto label_479f00;
        }
    }
    ctx->pc = 0x479EE4u;
label_479ee4:
    // 0x479ee4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_479ee8:
    // 0x479ee8: 0x24436ca0  addiu       $v1, $v0, 0x6CA0
    ctx->pc = 0x479ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27808));
label_479eec:
    // 0x479eec: 0x10000004  b           . + 4 + (0x4 << 2)
label_479ef0:
    if (ctx->pc == 0x479EF0u) {
        ctx->pc = 0x479EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479EECu;
        // 0x479ef0: 0x8c446ca0  lw          $a0, 0x6CA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479EF4u;
        goto label_479ef4;
    }
    ctx->pc = 0x479EECu;
    {
        const bool branch_taken_0x479eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479EECu;
        // 0x479ef0: 0x8c446ca0  lw          $a0, 0x6CA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479eec) {
            ctx->pc = 0x479F00u;
            goto label_479f00;
        }
    }
    ctx->pc = 0x479EF4u;
label_479ef4:
    // 0x479ef4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x479ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_479ef8:
    // 0x479ef8: 0x24436ca8  addiu       $v1, $v0, 0x6CA8
    ctx->pc = 0x479ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27816));
label_479efc:
    // 0x479efc: 0x8c446ca8  lw          $a0, 0x6CA8($v0)
    ctx->pc = 0x479efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27816)));
label_479f00:
    // 0x479f00: 0x94650004  lhu         $a1, 0x4($v1)
    ctx->pc = 0x479f00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_479f04:
    // 0x479f04: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x479f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_479f08:
    // 0x479f08: 0x10000006  b           . + 4 + (0x6 << 2)
label_479f0c:
    if (ctx->pc == 0x479F0Cu) {
        ctx->pc = 0x479F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479F08u;
        // 0x479f0c: 0xa7a50104  sh          $a1, 0x104($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479F10u;
        goto label_479f10;
    }
    ctx->pc = 0x479F08u;
    {
        const bool branch_taken_0x479f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479F08u;
        // 0x479f0c: 0xa7a50104  sh          $a1, 0x104($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479f08) {
            ctx->pc = 0x479F24u;
            goto label_479f24;
        }
    }
    ctx->pc = 0x479F10u;
label_479f10:
    // 0x479f10: 0x2443edf8  addiu       $v1, $v0, -0x1208
    ctx->pc = 0x479f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962680));
label_479f14:
    // 0x479f14: 0xdc44edf8  ld          $a0, -0x1208($v0)
    ctx->pc = 0x479f14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294962680)));
label_479f18:
    // 0x479f18: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x479f18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_479f1c:
    // 0x479f1c: 0xffa40100  sd          $a0, 0x100($sp)
    ctx->pc = 0x479f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 4));
label_479f20:
    // 0x479f20: 0xa7a50108  sh          $a1, 0x108($sp)
    ctx->pc = 0x479f20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 264), (uint16_t)GPR_U32(ctx, 5));
label_479f24:
    // 0x479f24: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x479f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_479f28:
    // 0x479f28: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x479f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_479f2c:
    // 0x479f2c: 0x8c62addc  lw          $v0, -0x5224($v1)
    ctx->pc = 0x479f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946268)));
label_479f30:
    // 0x479f30: 0x24a5ee08  addiu       $a1, $a1, -0x11F8
    ctx->pc = 0x479f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962696));
label_479f34:
    // 0x479f34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x479f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_479f38:
    // 0x479f38: 0x10000028  b           . + 4 + (0x28 << 2)
label_479f3c:
    if (ctx->pc == 0x479F3Cu) {
        ctx->pc = 0x479F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479F38u;
        // 0x479f3c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479F40u;
        goto label_479f40;
    }
    ctx->pc = 0x479F38u;
    {
        const bool branch_taken_0x479f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479F38u;
        // 0x479f3c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479f38) {
            ctx->pc = 0x479FDCu;
            goto label_479fdc;
        }
    }
    ctx->pc = 0x479F40u;
label_479f40:
    // 0x479f40: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x479f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_479f44:
    // 0x479f44: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x479f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_479f48:
    // 0x479f48: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x479f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_479f4c:
    // 0x479f4c: 0x2d02000b  sltiu       $v0, $t0, 0xB
    ctx->pc = 0x479f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_479f50:
    // 0x479f50: 0x1440ff2f  bnez        $v0, . + 4 + (-0xD1 << 2)
label_479f54:
    if (ctx->pc == 0x479F54u) {
        ctx->pc = 0x479F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479F50u;
        // 0x479f54: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479F58u;
        goto label_479f58;
    }
    ctx->pc = 0x479F50u;
    {
        const bool branch_taken_0x479f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x479F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479F50u;
        // 0x479f54: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479f50) {
            ctx->pc = 0x479C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_479c10;
        }
    }
    ctx->pc = 0x479F58u;
label_479f58:
    // 0x479f58: 0x10000008  b           . + 4 + (0x8 << 2)
label_479f5c:
    if (ctx->pc == 0x479F5Cu) {
        ctx->pc = 0x479F60u;
        goto label_479f60;
    }
    ctx->pc = 0x479F58u;
    {
        const bool branch_taken_0x479f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x479f58) {
            ctx->pc = 0x479F7Cu;
            goto label_479f7c;
        }
    }
    ctx->pc = 0x479F60u;
label_479f60:
    // 0x479f60: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x479f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_479f64:
    // 0x479f64: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x479f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_479f68:
    // 0x479f68: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x479f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_479f6c:
    // 0x479f6c: 0xa20200c2  sb          $v0, 0xC2($s0)
    ctx->pc = 0x479f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 194), (uint8_t)GPR_U32(ctx, 2));
label_479f70:
    // 0x479f70: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x479f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_479f74:
    // 0x479f74: 0xae040218  sw          $a0, 0x218($s0)
    ctx->pc = 0x479f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 4));
label_479f78:
    // 0x479f78: 0xae0500bc  sw          $a1, 0xBC($s0)
    ctx->pc = 0x479f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 5));
label_479f7c:
    // 0x479f7c: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
label_479f80:
    if (ctx->pc == 0x479F80u) {
        ctx->pc = 0x479F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479F7Cu;
        // 0x479f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479F84u;
        goto label_479f84;
    }
    ctx->pc = 0x479F7Cu;
    {
        const bool branch_taken_0x479f7c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x479F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479F7Cu;
        // 0x479f80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479f7c) {
            ctx->pc = 0x479FF4u;
            goto label_479ff4;
        }
    }
    ctx->pc = 0x479F84u;
label_479f84:
    // 0x479f84: 0x16200019  bnez        $s1, . + 4 + (0x19 << 2)
label_479f88:
    if (ctx->pc == 0x479F88u) {
        ctx->pc = 0x479F8Cu;
        goto label_479f8c;
    }
    ctx->pc = 0x479F84u;
    {
        const bool branch_taken_0x479f84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x479f84) {
            ctx->pc = 0x479FECu;
            goto label_479fec;
        }
    }
    ctx->pc = 0x479F8Cu;
label_479f8c:
    // 0x479f8c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_479f90:
    if (ctx->pc == 0x479F90u) {
        ctx->pc = 0x479F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479F8Cu;
        // 0x479f90: 0x7bb00420  lq          $s0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479F94u;
        goto label_479f94;
    }
    ctx->pc = 0x479F8Cu;
    {
        const bool branch_taken_0x479f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479F8Cu;
        // 0x479f90: 0x7bb00420  lq          $s0, 0x420($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479f8c) {
            ctx->pc = 0x479FF8u;
            goto label_479ff8;
        }
    }
    ctx->pc = 0x479F94u;
label_479f94:
    // 0x479f94: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x479f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_479f98:
    // 0x479f98: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x479f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_479f9c:
    // 0x479f9c: 0x8c62addc  lw          $v0, -0x5224($v1)
    ctx->pc = 0x479f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946268)));
label_479fa0:
    // 0x479fa0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x479fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_479fa4:
    // 0x479fa4: 0x24a5eb90  addiu       $a1, $a1, -0x1470
    ctx->pc = 0x479fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962064));
label_479fa8:
    // 0x479fa8: 0x1000000c  b           . + 4 + (0xC << 2)
label_479fac:
    if (ctx->pc == 0x479FACu) {
        ctx->pc = 0x479FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479FA8u;
        // 0x479fac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479FB0u;
        goto label_479fb0;
    }
    ctx->pc = 0x479FA8u;
    {
        const bool branch_taken_0x479fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479FA8u;
        // 0x479fac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479fa8) {
            ctx->pc = 0x479FDCu;
            goto label_479fdc;
        }
    }
    ctx->pc = 0x479FB0u;
label_479fb0:
    // 0x479fb0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x479fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_479fb4:
    // 0x479fb4: 0x8c62addc  lw          $v0, -0x5224($v1)
    ctx->pc = 0x479fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946268)));
label_479fb8:
    // 0x479fb8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x479fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_479fbc:
    // 0x479fbc: 0x24a5ec10  addiu       $a1, $a1, -0x13F0
    ctx->pc = 0x479fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962192));
label_479fc0:
    // 0x479fc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_479fc4:
    if (ctx->pc == 0x479FC4u) {
        ctx->pc = 0x479FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479FC0u;
        // 0x479fc4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479FC8u;
        goto label_479fc8;
    }
    ctx->pc = 0x479FC0u;
    {
        const bool branch_taken_0x479fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479FC0u;
        // 0x479fc4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479fc0) {
            ctx->pc = 0x479FDCu;
            goto label_479fdc;
        }
    }
    ctx->pc = 0x479FC8u;
label_479fc8:
    // 0x479fc8: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x479fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_479fcc:
    // 0x479fcc: 0x8c62addc  lw          $v0, -0x5224($v1)
    ctx->pc = 0x479fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946268)));
label_479fd0:
    // 0x479fd0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x479fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_479fd4:
    // 0x479fd4: 0x24a5eca0  addiu       $a1, $a1, -0x1360
    ctx->pc = 0x479fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962336));
label_479fd8:
    // 0x479fd8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x479fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_479fdc:
    // 0x479fdc: 0x40f809  jalr        $v0
label_479fe0:
    if (ctx->pc == 0x479FE0u) {
        ctx->pc = 0x479FE4u;
        goto label_479fe4;
    }
    ctx->pc = 0x479FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x479FE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x479FDCu, 0x479FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x479FE4u;
label_479fe4:
    // 0x479fe4: 0x10000003  b           . + 4 + (0x3 << 2)
label_479fe8:
    if (ctx->pc == 0x479FE8u) {
        ctx->pc = 0x479FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479FE4u;
        // 0x479fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479FECu;
        goto label_479fec;
    }
    ctx->pc = 0x479FE4u;
    {
        const bool branch_taken_0x479fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x479FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479FE4u;
        // 0x479fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x479fe4) {
            ctx->pc = 0x479FF4u;
            goto label_479ff4;
        }
    }
    ctx->pc = 0x479FECu;
label_479fec:
    // 0x479fec: 0xc11d05c  jal         func_474170
label_479ff0:
    if (ctx->pc == 0x479FF0u) {
        ctx->pc = 0x479FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x479FECu;
        // 0x479ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x479FF4u;
        goto label_479ff4;
    }
    ctx->pc = 0x479FECu;
    SET_GPR_U32(ctx, 31, 0x479FF4u);
    ctx->pc = 0x479FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x479FECu;
    // 0x479ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x474170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474170u, 0x479FECu, 0x479FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x479FF4u;
label_479ff4:
    // 0x479ff4: 0x7bb00420  lq          $s0, 0x420($sp)
    ctx->pc = 0x479ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1056)));
label_479ff8:
    // 0x479ff8: 0x7bb10410  lq          $s1, 0x410($sp)
    ctx->pc = 0x479ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_479ffc:
    // 0x479ffc: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x479ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
label_47a000:
    // 0x47a000: 0x3e00008  jr          $ra
label_47a004:
    if (ctx->pc == 0x47A004u) {
        ctx->pc = 0x47A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A000u;
        // 0x47a004: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47A008u;
        goto label_fallthrough_0x47a000;
    }
    ctx->pc = 0x47A000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47A000u;
        // 0x47a004: 0x27bd0430  addiu       $sp, $sp, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47A000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47a000:
    ctx->pc = 0x47A008u;
}
