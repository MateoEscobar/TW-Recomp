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

// Function: sub_001D1D28
// Address: 0x1d1d28 - 0x1d1f88
void sub_001D1D28_0x1d1d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1D28_0x1d1d28");
#endif

    switch (ctx->pc) {
        case 0x1d1d28u: goto label_1d1d28;
        case 0x1d1d2cu: goto label_1d1d2c;
        case 0x1d1d30u: goto label_1d1d30;
        case 0x1d1d34u: goto label_1d1d34;
        case 0x1d1d38u: goto label_1d1d38;
        case 0x1d1d3cu: goto label_1d1d3c;
        case 0x1d1d40u: goto label_1d1d40;
        case 0x1d1d44u: goto label_1d1d44;
        case 0x1d1d48u: goto label_1d1d48;
        case 0x1d1d4cu: goto label_1d1d4c;
        case 0x1d1d50u: goto label_1d1d50;
        case 0x1d1d54u: goto label_1d1d54;
        case 0x1d1d58u: goto label_1d1d58;
        case 0x1d1d5cu: goto label_1d1d5c;
        case 0x1d1d60u: goto label_1d1d60;
        case 0x1d1d64u: goto label_1d1d64;
        case 0x1d1d68u: goto label_1d1d68;
        case 0x1d1d6cu: goto label_1d1d6c;
        case 0x1d1d70u: goto label_1d1d70;
        case 0x1d1d74u: goto label_1d1d74;
        case 0x1d1d78u: goto label_1d1d78;
        case 0x1d1d7cu: goto label_1d1d7c;
        case 0x1d1d80u: goto label_1d1d80;
        case 0x1d1d84u: goto label_1d1d84;
        case 0x1d1d88u: goto label_1d1d88;
        case 0x1d1d8cu: goto label_1d1d8c;
        case 0x1d1d90u: goto label_1d1d90;
        case 0x1d1d94u: goto label_1d1d94;
        case 0x1d1d98u: goto label_1d1d98;
        case 0x1d1d9cu: goto label_1d1d9c;
        case 0x1d1da0u: goto label_1d1da0;
        case 0x1d1da4u: goto label_1d1da4;
        case 0x1d1da8u: goto label_1d1da8;
        case 0x1d1dacu: goto label_1d1dac;
        case 0x1d1db0u: goto label_1d1db0;
        case 0x1d1db4u: goto label_1d1db4;
        case 0x1d1db8u: goto label_1d1db8;
        case 0x1d1dbcu: goto label_1d1dbc;
        case 0x1d1dc0u: goto label_1d1dc0;
        case 0x1d1dc4u: goto label_1d1dc4;
        case 0x1d1dc8u: goto label_1d1dc8;
        case 0x1d1dccu: goto label_1d1dcc;
        case 0x1d1dd0u: goto label_1d1dd0;
        case 0x1d1dd4u: goto label_1d1dd4;
        case 0x1d1dd8u: goto label_1d1dd8;
        case 0x1d1ddcu: goto label_1d1ddc;
        case 0x1d1de0u: goto label_1d1de0;
        case 0x1d1de4u: goto label_1d1de4;
        case 0x1d1de8u: goto label_1d1de8;
        case 0x1d1decu: goto label_1d1dec;
        case 0x1d1df0u: goto label_1d1df0;
        case 0x1d1df4u: goto label_1d1df4;
        case 0x1d1df8u: goto label_1d1df8;
        case 0x1d1dfcu: goto label_1d1dfc;
        case 0x1d1e00u: goto label_1d1e00;
        case 0x1d1e04u: goto label_1d1e04;
        case 0x1d1e08u: goto label_1d1e08;
        case 0x1d1e0cu: goto label_1d1e0c;
        case 0x1d1e10u: goto label_1d1e10;
        case 0x1d1e14u: goto label_1d1e14;
        case 0x1d1e18u: goto label_1d1e18;
        case 0x1d1e1cu: goto label_1d1e1c;
        case 0x1d1e20u: goto label_1d1e20;
        case 0x1d1e24u: goto label_1d1e24;
        case 0x1d1e28u: goto label_1d1e28;
        case 0x1d1e2cu: goto label_1d1e2c;
        case 0x1d1e30u: goto label_1d1e30;
        case 0x1d1e34u: goto label_1d1e34;
        case 0x1d1e38u: goto label_1d1e38;
        case 0x1d1e3cu: goto label_1d1e3c;
        case 0x1d1e40u: goto label_1d1e40;
        case 0x1d1e44u: goto label_1d1e44;
        case 0x1d1e48u: goto label_1d1e48;
        case 0x1d1e4cu: goto label_1d1e4c;
        case 0x1d1e50u: goto label_1d1e50;
        case 0x1d1e54u: goto label_1d1e54;
        case 0x1d1e58u: goto label_1d1e58;
        case 0x1d1e5cu: goto label_1d1e5c;
        case 0x1d1e60u: goto label_1d1e60;
        case 0x1d1e64u: goto label_1d1e64;
        case 0x1d1e68u: goto label_1d1e68;
        case 0x1d1e6cu: goto label_1d1e6c;
        case 0x1d1e70u: goto label_1d1e70;
        case 0x1d1e74u: goto label_1d1e74;
        case 0x1d1e78u: goto label_1d1e78;
        case 0x1d1e7cu: goto label_1d1e7c;
        case 0x1d1e80u: goto label_1d1e80;
        case 0x1d1e84u: goto label_1d1e84;
        case 0x1d1e88u: goto label_1d1e88;
        case 0x1d1e8cu: goto label_1d1e8c;
        case 0x1d1e90u: goto label_1d1e90;
        case 0x1d1e94u: goto label_1d1e94;
        case 0x1d1e98u: goto label_1d1e98;
        case 0x1d1e9cu: goto label_1d1e9c;
        case 0x1d1ea0u: goto label_1d1ea0;
        case 0x1d1ea4u: goto label_1d1ea4;
        case 0x1d1ea8u: goto label_1d1ea8;
        case 0x1d1eacu: goto label_1d1eac;
        case 0x1d1eb0u: goto label_1d1eb0;
        case 0x1d1eb4u: goto label_1d1eb4;
        case 0x1d1eb8u: goto label_1d1eb8;
        case 0x1d1ebcu: goto label_1d1ebc;
        case 0x1d1ec0u: goto label_1d1ec0;
        case 0x1d1ec4u: goto label_1d1ec4;
        case 0x1d1ec8u: goto label_1d1ec8;
        case 0x1d1eccu: goto label_1d1ecc;
        case 0x1d1ed0u: goto label_1d1ed0;
        case 0x1d1ed4u: goto label_1d1ed4;
        case 0x1d1ed8u: goto label_1d1ed8;
        case 0x1d1edcu: goto label_1d1edc;
        case 0x1d1ee0u: goto label_1d1ee0;
        case 0x1d1ee4u: goto label_1d1ee4;
        case 0x1d1ee8u: goto label_1d1ee8;
        case 0x1d1eecu: goto label_1d1eec;
        case 0x1d1ef0u: goto label_1d1ef0;
        case 0x1d1ef4u: goto label_1d1ef4;
        case 0x1d1ef8u: goto label_1d1ef8;
        case 0x1d1efcu: goto label_1d1efc;
        case 0x1d1f00u: goto label_1d1f00;
        case 0x1d1f04u: goto label_1d1f04;
        case 0x1d1f08u: goto label_1d1f08;
        case 0x1d1f0cu: goto label_1d1f0c;
        case 0x1d1f10u: goto label_1d1f10;
        case 0x1d1f14u: goto label_1d1f14;
        case 0x1d1f18u: goto label_1d1f18;
        case 0x1d1f1cu: goto label_1d1f1c;
        case 0x1d1f20u: goto label_1d1f20;
        case 0x1d1f24u: goto label_1d1f24;
        case 0x1d1f28u: goto label_1d1f28;
        case 0x1d1f2cu: goto label_1d1f2c;
        case 0x1d1f30u: goto label_1d1f30;
        case 0x1d1f34u: goto label_1d1f34;
        case 0x1d1f38u: goto label_1d1f38;
        case 0x1d1f3cu: goto label_1d1f3c;
        case 0x1d1f40u: goto label_1d1f40;
        case 0x1d1f44u: goto label_1d1f44;
        case 0x1d1f48u: goto label_1d1f48;
        case 0x1d1f4cu: goto label_1d1f4c;
        case 0x1d1f50u: goto label_1d1f50;
        case 0x1d1f54u: goto label_1d1f54;
        case 0x1d1f58u: goto label_1d1f58;
        case 0x1d1f5cu: goto label_1d1f5c;
        case 0x1d1f60u: goto label_1d1f60;
        case 0x1d1f64u: goto label_1d1f64;
        case 0x1d1f68u: goto label_1d1f68;
        case 0x1d1f6cu: goto label_1d1f6c;
        case 0x1d1f70u: goto label_1d1f70;
        case 0x1d1f74u: goto label_1d1f74;
        case 0x1d1f78u: goto label_1d1f78;
        case 0x1d1f7cu: goto label_1d1f7c;
        case 0x1d1f80u: goto label_1d1f80;
        case 0x1d1f84u: goto label_1d1f84;
        default: break;
    }

    ctx->pc = 0x1d1d28u;

label_1d1d28:
    // 0x1d1d28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d1d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1d1d2c:
    // 0x1d1d2c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d1d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1d1d30:
    // 0x1d1d30: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1d1d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1d1d34:
    // 0x1d1d34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d1d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d38:
    // 0x1d1d38: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1d1d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1d1d3c:
    // 0x1d1d3c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1d1d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1d1d40:
    // 0x1d1d40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d1d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d1d44:
    // 0x1d1d44: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1d1d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_1d1d48:
    // 0x1d1d48: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1d1d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_1d1d4c:
    // 0x1d1d4c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1d1d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_1d1d50:
    // 0x1d1d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d1d54:
    // 0x1d1d54: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x1d1d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_1d1d58:
    // 0x1d1d58: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
label_1d1d5c:
    if (ctx->pc == 0x1D1D5Cu) {
        ctx->pc = 0x1D1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D58u;
        // 0x1d1d5c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1D60u;
        goto label_1d1d60;
    }
    ctx->pc = 0x1D1D58u;
    {
        const bool branch_taken_0x1d1d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D58u;
        // 0x1d1d5c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d58) {
            ctx->pc = 0x1D1F5Cu;
            goto label_1d1f5c;
        }
    }
    ctx->pc = 0x1D1D60u;
label_1d1d60:
    // 0x1d1d60: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1d1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1d1d64:
    // 0x1d1d64: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_1d1d68:
    if (ctx->pc == 0x1D1D68u) {
        ctx->pc = 0x1D1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D64u;
        // 0x1d1d68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1D6Cu;
        goto label_1d1d6c;
    }
    ctx->pc = 0x1D1D64u;
    {
        const bool branch_taken_0x1d1d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D64u;
        // 0x1d1d68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d64) {
            ctx->pc = 0x1D1F5Cu;
            goto label_1d1f5c;
        }
    }
    ctx->pc = 0x1D1D6Cu;
label_1d1d6c:
    // 0x1d1d6c: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1d1d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1d1d70:
    // 0x1d1d70: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d1d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d1d74:
    // 0x1d1d74: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1d1d74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1d1d78:
    // 0x1d1d78: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1d1d7c:
    // 0x1d1d7c: 0x40f809  jalr        $v0
label_1d1d80:
    if (ctx->pc == 0x1D1D80u) {
        ctx->pc = 0x1D1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D7Cu;
        // 0x1d1d80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1D84u;
        goto label_1d1d84;
    }
    ctx->pc = 0x1D1D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1D84u);
        ctx->pc = 0x1D1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D7Cu;
        // 0x1d1d80: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1D7Cu, 0x1D1D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1D84u;
label_1d1d84:
    // 0x1d1d84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1d88:
    // 0x1d1d88: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d1d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1d1d8c:
    // 0x1d1d8c: 0x8c64ec7c  lw          $a0, -0x1384($v1)
    ctx->pc = 0x1d1d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962300)));
label_1d1d90:
    // 0x1d1d90: 0x8e620704  lw          $v0, 0x704($s3)
    ctx->pc = 0x1d1d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1796)));
label_1d1d94:
    // 0x1d1d94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d1d98:
    // 0x1d1d98: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1d1d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1d1d9c:
    // 0x1d1d9c: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
label_1d1da0:
    if (ctx->pc == 0x1D1DA0u) {
        ctx->pc = 0x1D1DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D9Cu;
        // 0x1d1da0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1DA4u;
        goto label_1d1da4;
    }
    ctx->pc = 0x1D1D9Cu;
    {
        const bool branch_taken_0x1d1d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D9Cu;
        // 0x1d1da0: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d9c) {
            ctx->pc = 0x1D1F5Cu;
            goto label_1d1f5c;
        }
    }
    ctx->pc = 0x1D1DA4u;
label_1d1da4:
    // 0x1d1da4: 0x8e620708  lw          $v0, 0x708($s3)
    ctx->pc = 0x1d1da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1800)));
label_1d1da8:
    // 0x1d1da8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1d1dac:
    if (ctx->pc == 0x1D1DACu) {
        ctx->pc = 0x1D1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DA8u;
        // 0x1d1dac: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1DB0u;
        goto label_1d1db0;
    }
    ctx->pc = 0x1D1DA8u;
    {
        const bool branch_taken_0x1d1da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DA8u;
        // 0x1d1dac: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1da8) {
            ctx->pc = 0x1D1DBCu;
            goto label_1d1dbc;
        }
    }
    ctx->pc = 0x1D1DB0u;
label_1d1db0:
    // 0x1d1db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1db4:
    // 0x1d1db4: 0xae650700  sw          $a1, 0x700($s3)
    ctx->pc = 0x1d1db4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1792), GPR_U32(ctx, 5));
label_1d1db8:
    // 0x1d1db8: 0xae620708  sw          $v0, 0x708($s3)
    ctx->pc = 0x1d1db8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1800), GPR_U32(ctx, 2));
label_1d1dbc:
    // 0x1d1dbc: 0x8e640700  lw          $a0, 0x700($s3)
    ctx->pc = 0x1d1dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1792)));
label_1d1dc0:
    // 0x1d1dc0: 0x8c62ec78  lw          $v0, -0x1388($v1)
    ctx->pc = 0x1d1dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962296)));
label_1d1dc4:
    // 0x1d1dc4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1d1dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d1dc8:
    // 0x1d1dc8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d1dcc:
    // 0x1d1dcc: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x1d1dccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1d1dd0:
    // 0x1d1dd0: 0x54600040  bnel        $v1, $zero, . + 4 + (0x40 << 2)
label_1d1dd4:
    if (ctx->pc == 0x1D1DD4u) {
        ctx->pc = 0x1D1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DD0u;
        // 0x1d1dd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1DD8u;
        goto label_1d1dd8;
    }
    ctx->pc = 0x1D1DD0u;
    {
        const bool branch_taken_0x1d1dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1dd0) {
            ctx->pc = 0x1D1DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1DD0u;
            // 0x1d1dd4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1ED4u;
            goto label_1d1ed4;
        }
    }
    ctx->pc = 0x1D1DD8u;
label_1d1dd8:
    // 0x1d1dd8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d1dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d1ddc:
    // 0x1d1ddc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d1de0:
    if (ctx->pc == 0x1D1DE0u) {
        ctx->pc = 0x1D1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DDCu;
        // 0x1d1de0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1DE4u;
        goto label_1d1de4;
    }
    ctx->pc = 0x1D1DDCu;
    {
        const bool branch_taken_0x1d1ddc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DDCu;
        // 0x1d1de0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ddc) {
            ctx->pc = 0x1D1DF8u;
            goto label_1d1df8;
        }
    }
    ctx->pc = 0x1D1DE4u;
label_1d1de4:
    // 0x1d1de4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1de8:
    // 0x1d1de8: 0x0  nop
    ctx->pc = 0x1d1de8u;
    // NOP
label_1d1dec:
    // 0x1d1dec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d1decu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d1df0:
    // 0x1d1df0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d1df4:
    if (ctx->pc == 0x1D1DF4u) {
        ctx->pc = 0x1D1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DF0u;
        // 0x1d1df4: 0x8cc2ec78  lw          $v0, -0x1388($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1DF8u;
        goto label_1d1df8;
    }
    ctx->pc = 0x1D1DF0u;
    {
        const bool branch_taken_0x1d1df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DF0u;
        // 0x1d1df4: 0x8cc2ec78  lw          $v0, -0x1388($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1df0) {
            ctx->pc = 0x1D1E14u;
            goto label_1d1e14;
        }
    }
    ctx->pc = 0x1D1DF8u;
label_1d1df8:
    // 0x1d1df8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d1df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d1dfc:
    // 0x1d1dfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d1dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d1e00:
    // 0x1d1e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d1e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1e04:
    // 0x1d1e04: 0x0  nop
    ctx->pc = 0x1d1e04u;
    // NOP
label_1d1e08:
    // 0x1d1e08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d1e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d1e0c:
    // 0x1d1e0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1d1e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1d1e10:
    // 0x1d1e10: 0x8cc2ec78  lw          $v0, -0x1388($a2)
    ctx->pc = 0x1d1e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962296)));
label_1d1e14:
    // 0x1d1e14: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1d1e18:
    if (ctx->pc == 0x1D1E18u) {
        ctx->pc = 0x1D1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E14u;
        // 0x1d1e18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1E1Cu;
        goto label_1d1e1c;
    }
    ctx->pc = 0x1D1E14u;
    {
        const bool branch_taken_0x1d1e14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E14u;
        // 0x1d1e18: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e14) {
            ctx->pc = 0x1D1E30u;
            goto label_1d1e30;
        }
    }
    ctx->pc = 0x1D1E1Cu;
label_1d1e1c:
    // 0x1d1e1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d1e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d1e20:
    // 0x1d1e20: 0x0  nop
    ctx->pc = 0x1d1e20u;
    // NOP
label_1d1e24:
    // 0x1d1e24: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d1e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d1e28:
    // 0x1d1e28: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d1e2c:
    if (ctx->pc == 0x1D1E2Cu) {
        ctx->pc = 0x1D1E30u;
        goto label_1d1e30;
    }
    ctx->pc = 0x1D1E28u;
    {
        const bool branch_taken_0x1d1e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e28) {
            ctx->pc = 0x1D1E48u;
            goto label_1d1e48;
        }
    }
    ctx->pc = 0x1D1E30u;
label_1d1e30:
    // 0x1d1e30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d1e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d1e34:
    // 0x1d1e34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d1e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d1e38:
    // 0x1d1e38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d1e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d1e3c:
    // 0x1d1e3c: 0x0  nop
    ctx->pc = 0x1d1e3cu;
    // NOP
label_1d1e40:
    // 0x1d1e40: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d1e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d1e44:
    // 0x1d1e44: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1d1e44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1d1e48:
    // 0x1d1e48: 0x0  nop
    ctx->pc = 0x1d1e48u;
    // NOP
label_1d1e4c:
    // 0x1d1e4c: 0x0  nop
    ctx->pc = 0x1d1e4cu;
    // NOP
label_1d1e50:
    // 0x1d1e50: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1d1e50u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_1d1e54:
    // 0x1d1e54: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1d1e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1d1e58:
    // 0x1d1e58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d1e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d1e5c:
    // 0x1d1e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d1e60:
    // 0x1d1e60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d1e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d1e64:
    // 0x1d1e64: 0x26620070  addiu       $v0, $s3, 0x70
    ctx->pc = 0x1d1e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1d1e68:
    // 0x1d1e68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d1e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e6c:
    // 0x1d1e6c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d1e6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e70:
    // 0x1d1e70: 0x26710170  addiu       $s1, $s3, 0x170
    ctx->pc = 0x1d1e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
label_1d1e74:
    // 0x1d1e74: 0x26720360  addiu       $s2, $s3, 0x360
    ctx->pc = 0x1d1e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
label_1d1e78:
    // 0x1d1e78: 0x26730430  addiu       $s3, $s3, 0x430
    ctx->pc = 0x1d1e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1072));
label_1d1e7c:
    // 0x1d1e7c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x1d1e7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e80:
    // 0x1d1e80: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1d1e80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e84:
    // 0x1d1e84: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x1d1e84u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d1e88:
    // 0x1d1e88: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1d1e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1d1e8c:
    // 0x1d1e8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d1e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d1e90:
    // 0x1d1e90: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d1e90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d1e94:
    // 0x1d1e94: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1d1e94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1d1e98:
    // 0x1d1e98: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x1d1e98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1d1e9c:
    // 0x1d1e9c: 0xc06898e  jal         func_1A2638
label_1d1ea0:
    if (ctx->pc == 0x1D1EA0u) {
        ctx->pc = 0x1D1EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E9Cu;
        // 0x1d1ea0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1EA4u;
        goto label_1d1ea4;
    }
    ctx->pc = 0x1D1E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D1EA4u);
    ctx->pc = 0x1D1EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E9Cu;
    // 0x1d1ea0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2638u, 0x1D1E9Cu, 0x1D1EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EA4u;
label_1d1ea4:
    // 0x1d1ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1ea8:
    // 0x1d1ea8: 0xa23001b1  sb          $s0, 0x1B1($s1)
    ctx->pc = 0x1d1ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 433), (uint8_t)GPR_U32(ctx, 16));
label_1d1eac:
    // 0x1d1eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d1eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d1eb0:
    // 0x1d1eb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1eb4:
    // 0x1d1eb4: 0xae2201b4  sw          $v0, 0x1B4($s1)
    ctx->pc = 0x1d1eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 436), GPR_U32(ctx, 2));
label_1d1eb8:
    // 0x1d1eb8: 0xc075392  jal         func_1D4E48
label_1d1ebc:
    if (ctx->pc == 0x1D1EBCu) {
        ctx->pc = 0x1D1EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EB8u;
        // 0x1d1ebc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1EC0u;
        goto label_1d1ec0;
    }
    ctx->pc = 0x1D1EB8u;
    SET_GPR_U32(ctx, 31, 0x1D1EC0u);
    ctx->pc = 0x1D1EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EB8u;
    // 0x1d1ebc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4E48u, 0x1D1EB8u, 0x1D1EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EC0u;
label_1d1ec0:
    // 0x1d1ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ec4:
    // 0x1d1ec4: 0xc073b26  jal         func_1CEC98
label_1d1ec8:
    if (ctx->pc == 0x1D1EC8u) {
        ctx->pc = 0x1D1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EC4u;
        // 0x1d1ec8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1ECCu;
        goto label_1d1ecc;
    }
    ctx->pc = 0x1D1EC4u;
    SET_GPR_U32(ctx, 31, 0x1D1ECCu);
    ctx->pc = 0x1D1EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EC4u;
    // 0x1d1ec8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEC98u, 0x1D1EC4u, 0x1D1ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1ECCu;
label_1d1ecc:
    // 0x1d1ecc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_1d1ed0:
    if (ctx->pc == 0x1D1ED0u) {
        ctx->pc = 0x1D1ED4u;
        goto label_1d1ed4;
    }
    ctx->pc = 0x1D1ECCu;
    {
        const bool branch_taken_0x1d1ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ecc) {
            ctx->pc = 0x1D1F38u;
            goto label_1d1f38;
        }
    }
    ctx->pc = 0x1D1ED4u;
label_1d1ed4:
    // 0x1d1ed4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d1ed8:
    // 0x1d1ed8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1d1ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1d1edc:
    // 0x1d1edc: 0x24a55c88  addiu       $a1, $a1, 0x5C88
    ctx->pc = 0x1d1edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23688));
label_1d1ee0:
    // 0x1d1ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d1ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ee4:
    // 0x1d1ee4: 0xc043e94  jal         func_10FA50
label_1d1ee8:
    if (ctx->pc == 0x1D1EE8u) {
        ctx->pc = 0x1D1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EE4u;
        // 0x1d1ee8: 0x26770430  addiu       $s7, $s3, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1EECu;
        goto label_1d1eec;
    }
    ctx->pc = 0x1D1EE4u;
    SET_GPR_U32(ctx, 31, 0x1D1EECu);
    ctx->pc = 0x1D1EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EE4u;
    // 0x1d1ee8: 0x26770430  addiu       $s7, $s3, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x1D1EE4u, 0x1D1EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EECu;
label_1d1eec:
    // 0x1d1eec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d1eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1ef0:
    // 0x1d1ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1ef4:
    // 0x1d1ef4: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1d1ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_1d1ef8:
    // 0x1d1ef8: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x1d1ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_1d1efc:
    // 0x1d1efc: 0x24704020  addiu       $s0, $v1, 0x4020
    ctx->pc = 0x1d1efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16416));
label_1d1f00:
    // 0x1d1f00: 0x26750070  addiu       $s5, $s3, 0x70
    ctx->pc = 0x1d1f00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1d1f04:
    // 0x1d1f04: 0x26760170  addiu       $s6, $s3, 0x170
    ctx->pc = 0x1d1f04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 368));
label_1d1f08:
    // 0x1d1f08: 0x26740360  addiu       $s4, $s3, 0x360
    ctx->pc = 0x1d1f08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
label_1d1f0c:
    // 0x1d1f0c: 0x0  nop
    ctx->pc = 0x1d1f0cu;
    // NOP
label_1d1f10:
    // 0x1d1f10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d1f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d1f14:
    // 0x1d1f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1f18:
    // 0x1d1f18: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d1f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d1f1c:
    // 0x1d1f1c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d1f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d1f20:
    // 0x1d1f20: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d1f24:
    // 0x1d1f24: 0x40f809  jalr        $v0
label_1d1f28:
    if (ctx->pc == 0x1D1F28u) {
        ctx->pc = 0x1D1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F24u;
        // 0x1d1f28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F2Cu;
        goto label_1d1f2c;
    }
    ctx->pc = 0x1D1F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D1F2Cu);
        ctx->pc = 0x1D1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F24u;
        // 0x1d1f28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1F24u, 0x1D1F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D1F2Cu;
label_1d1f2c:
    // 0x1d1f2c: 0x2e220013  sltiu       $v0, $s1, 0x13
    ctx->pc = 0x1d1f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1d1f30:
    // 0x1d1f30: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1d1f34:
    if (ctx->pc == 0x1D1F34u) {
        ctx->pc = 0x1D1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F30u;
        // 0x1d1f34: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F38u;
        goto label_1d1f38;
    }
    ctx->pc = 0x1D1F30u;
    {
        const bool branch_taken_0x1d1f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F30u;
        // 0x1d1f34: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f30) {
            ctx->pc = 0x1D1F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1f10;
        }
    }
    ctx->pc = 0x1D1F38u;
label_1d1f38:
    // 0x1d1f38: 0xc068998  jal         func_1A2660
label_1d1f3c:
    if (ctx->pc == 0x1D1F3Cu) {
        ctx->pc = 0x1D1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F38u;
        // 0x1d1f3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F40u;
        goto label_1d1f40;
    }
    ctx->pc = 0x1D1F38u;
    SET_GPR_U32(ctx, 31, 0x1D1F40u);
    ctx->pc = 0x1D1F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F38u;
    // 0x1d1f3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1D1F38u, 0x1D1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F40u;
label_1d1f40:
    // 0x1d1f40: 0xc06ec70  jal         func_1BB1C0
label_1d1f44:
    if (ctx->pc == 0x1D1F44u) {
        ctx->pc = 0x1D1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F40u;
        // 0x1d1f44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F48u;
        goto label_1d1f48;
    }
    ctx->pc = 0x1D1F40u;
    SET_GPR_U32(ctx, 31, 0x1D1F48u);
    ctx->pc = 0x1D1F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F40u;
    // 0x1d1f44: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1D1F40u, 0x1D1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F48u;
label_1d1f48:
    // 0x1d1f48: 0xc0754b2  jal         func_1D52C8
label_1d1f4c:
    if (ctx->pc == 0x1D1F4Cu) {
        ctx->pc = 0x1D1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F48u;
        // 0x1d1f4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F50u;
        goto label_1d1f50;
    }
    ctx->pc = 0x1D1F48u;
    SET_GPR_U32(ctx, 31, 0x1D1F50u);
    ctx->pc = 0x1D1F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F48u;
    // 0x1d1f4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D52C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D52C8u, 0x1D1F48u, 0x1D1F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F50u;
label_1d1f50:
    // 0x1d1f50: 0xc073b62  jal         func_1CED88
label_1d1f54:
    if (ctx->pc == 0x1D1F54u) {
        ctx->pc = 0x1D1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F50u;
        // 0x1d1f54: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F58u;
        goto label_1d1f58;
    }
    ctx->pc = 0x1D1F50u;
    SET_GPR_U32(ctx, 31, 0x1D1F58u);
    ctx->pc = 0x1D1F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F50u;
    // 0x1d1f54: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED88u, 0x1D1F50u, 0x1D1F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F58u;
label_1d1f58:
    // 0x1d1f58: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1d1f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d1f5c:
    // 0x1d1f5c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1d1f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d1f60:
    // 0x1d1f60: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1d1f60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d1f64:
    // 0x1d1f64: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d1f64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d1f68:
    // 0x1d1f68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d1f68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d1f6c:
    // 0x1d1f6c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1d1f6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d1f70:
    // 0x1d1f70: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1d1f70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1f74:
    // 0x1d1f74: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1d1f74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1f78:
    // 0x1d1f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1f7c:
    // 0x1d1f7c: 0x3e00008  jr          $ra
label_1d1f80:
    if (ctx->pc == 0x1D1F80u) {
        ctx->pc = 0x1D1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F7Cu;
        // 0x1d1f80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F84u;
        goto label_1d1f84;
    }
    ctx->pc = 0x1D1F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F7Cu;
        // 0x1d1f80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1F84u;
label_1d1f84:
    // 0x1d1f84: 0x0  nop
    ctx->pc = 0x1d1f84u;
    // NOP
    ctx->pc = 0x1d1f88u;
}
