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

// Function: sub_00200C48
// Address: 0x200c48 - 0x200fa8
void sub_00200C48_0x200c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200C48_0x200c48");
#endif

    switch (ctx->pc) {
        case 0x200c48u: goto label_200c48;
        case 0x200c4cu: goto label_200c4c;
        case 0x200c50u: goto label_200c50;
        case 0x200c54u: goto label_200c54;
        case 0x200c58u: goto label_200c58;
        case 0x200c5cu: goto label_200c5c;
        case 0x200c60u: goto label_200c60;
        case 0x200c64u: goto label_200c64;
        case 0x200c68u: goto label_200c68;
        case 0x200c6cu: goto label_200c6c;
        case 0x200c70u: goto label_200c70;
        case 0x200c74u: goto label_200c74;
        case 0x200c78u: goto label_200c78;
        case 0x200c7cu: goto label_200c7c;
        case 0x200c80u: goto label_200c80;
        case 0x200c84u: goto label_200c84;
        case 0x200c88u: goto label_200c88;
        case 0x200c8cu: goto label_200c8c;
        case 0x200c90u: goto label_200c90;
        case 0x200c94u: goto label_200c94;
        case 0x200c98u: goto label_200c98;
        case 0x200c9cu: goto label_200c9c;
        case 0x200ca0u: goto label_200ca0;
        case 0x200ca4u: goto label_200ca4;
        case 0x200ca8u: goto label_200ca8;
        case 0x200cacu: goto label_200cac;
        case 0x200cb0u: goto label_200cb0;
        case 0x200cb4u: goto label_200cb4;
        case 0x200cb8u: goto label_200cb8;
        case 0x200cbcu: goto label_200cbc;
        case 0x200cc0u: goto label_200cc0;
        case 0x200cc4u: goto label_200cc4;
        case 0x200cc8u: goto label_200cc8;
        case 0x200cccu: goto label_200ccc;
        case 0x200cd0u: goto label_200cd0;
        case 0x200cd4u: goto label_200cd4;
        case 0x200cd8u: goto label_200cd8;
        case 0x200cdcu: goto label_200cdc;
        case 0x200ce0u: goto label_200ce0;
        case 0x200ce4u: goto label_200ce4;
        case 0x200ce8u: goto label_200ce8;
        case 0x200cecu: goto label_200cec;
        case 0x200cf0u: goto label_200cf0;
        case 0x200cf4u: goto label_200cf4;
        case 0x200cf8u: goto label_200cf8;
        case 0x200cfcu: goto label_200cfc;
        case 0x200d00u: goto label_200d00;
        case 0x200d04u: goto label_200d04;
        case 0x200d08u: goto label_200d08;
        case 0x200d0cu: goto label_200d0c;
        case 0x200d10u: goto label_200d10;
        case 0x200d14u: goto label_200d14;
        case 0x200d18u: goto label_200d18;
        case 0x200d1cu: goto label_200d1c;
        case 0x200d20u: goto label_200d20;
        case 0x200d24u: goto label_200d24;
        case 0x200d28u: goto label_200d28;
        case 0x200d2cu: goto label_200d2c;
        case 0x200d30u: goto label_200d30;
        case 0x200d34u: goto label_200d34;
        case 0x200d38u: goto label_200d38;
        case 0x200d3cu: goto label_200d3c;
        case 0x200d40u: goto label_200d40;
        case 0x200d44u: goto label_200d44;
        case 0x200d48u: goto label_200d48;
        case 0x200d4cu: goto label_200d4c;
        case 0x200d50u: goto label_200d50;
        case 0x200d54u: goto label_200d54;
        case 0x200d58u: goto label_200d58;
        case 0x200d5cu: goto label_200d5c;
        case 0x200d60u: goto label_200d60;
        case 0x200d64u: goto label_200d64;
        case 0x200d68u: goto label_200d68;
        case 0x200d6cu: goto label_200d6c;
        case 0x200d70u: goto label_200d70;
        case 0x200d74u: goto label_200d74;
        case 0x200d78u: goto label_200d78;
        case 0x200d7cu: goto label_200d7c;
        case 0x200d80u: goto label_200d80;
        case 0x200d84u: goto label_200d84;
        case 0x200d88u: goto label_200d88;
        case 0x200d8cu: goto label_200d8c;
        case 0x200d90u: goto label_200d90;
        case 0x200d94u: goto label_200d94;
        case 0x200d98u: goto label_200d98;
        case 0x200d9cu: goto label_200d9c;
        case 0x200da0u: goto label_200da0;
        case 0x200da4u: goto label_200da4;
        case 0x200da8u: goto label_200da8;
        case 0x200dacu: goto label_200dac;
        case 0x200db0u: goto label_200db0;
        case 0x200db4u: goto label_200db4;
        case 0x200db8u: goto label_200db8;
        case 0x200dbcu: goto label_200dbc;
        case 0x200dc0u: goto label_200dc0;
        case 0x200dc4u: goto label_200dc4;
        case 0x200dc8u: goto label_200dc8;
        case 0x200dccu: goto label_200dcc;
        case 0x200dd0u: goto label_200dd0;
        case 0x200dd4u: goto label_200dd4;
        case 0x200dd8u: goto label_200dd8;
        case 0x200ddcu: goto label_200ddc;
        case 0x200de0u: goto label_200de0;
        case 0x200de4u: goto label_200de4;
        case 0x200de8u: goto label_200de8;
        case 0x200decu: goto label_200dec;
        case 0x200df0u: goto label_200df0;
        case 0x200df4u: goto label_200df4;
        case 0x200df8u: goto label_200df8;
        case 0x200dfcu: goto label_200dfc;
        case 0x200e00u: goto label_200e00;
        case 0x200e04u: goto label_200e04;
        case 0x200e08u: goto label_200e08;
        case 0x200e0cu: goto label_200e0c;
        case 0x200e10u: goto label_200e10;
        case 0x200e14u: goto label_200e14;
        case 0x200e18u: goto label_200e18;
        case 0x200e1cu: goto label_200e1c;
        case 0x200e20u: goto label_200e20;
        case 0x200e24u: goto label_200e24;
        case 0x200e28u: goto label_200e28;
        case 0x200e2cu: goto label_200e2c;
        case 0x200e30u: goto label_200e30;
        case 0x200e34u: goto label_200e34;
        case 0x200e38u: goto label_200e38;
        case 0x200e3cu: goto label_200e3c;
        case 0x200e40u: goto label_200e40;
        case 0x200e44u: goto label_200e44;
        case 0x200e48u: goto label_200e48;
        case 0x200e4cu: goto label_200e4c;
        case 0x200e50u: goto label_200e50;
        case 0x200e54u: goto label_200e54;
        case 0x200e58u: goto label_200e58;
        case 0x200e5cu: goto label_200e5c;
        case 0x200e60u: goto label_200e60;
        case 0x200e64u: goto label_200e64;
        case 0x200e68u: goto label_200e68;
        case 0x200e6cu: goto label_200e6c;
        case 0x200e70u: goto label_200e70;
        case 0x200e74u: goto label_200e74;
        case 0x200e78u: goto label_200e78;
        case 0x200e7cu: goto label_200e7c;
        case 0x200e80u: goto label_200e80;
        case 0x200e84u: goto label_200e84;
        case 0x200e88u: goto label_200e88;
        case 0x200e8cu: goto label_200e8c;
        case 0x200e90u: goto label_200e90;
        case 0x200e94u: goto label_200e94;
        case 0x200e98u: goto label_200e98;
        case 0x200e9cu: goto label_200e9c;
        case 0x200ea0u: goto label_200ea0;
        case 0x200ea4u: goto label_200ea4;
        case 0x200ea8u: goto label_200ea8;
        case 0x200eacu: goto label_200eac;
        case 0x200eb0u: goto label_200eb0;
        case 0x200eb4u: goto label_200eb4;
        case 0x200eb8u: goto label_200eb8;
        case 0x200ebcu: goto label_200ebc;
        case 0x200ec0u: goto label_200ec0;
        case 0x200ec4u: goto label_200ec4;
        case 0x200ec8u: goto label_200ec8;
        case 0x200eccu: goto label_200ecc;
        case 0x200ed0u: goto label_200ed0;
        case 0x200ed4u: goto label_200ed4;
        case 0x200ed8u: goto label_200ed8;
        case 0x200edcu: goto label_200edc;
        case 0x200ee0u: goto label_200ee0;
        case 0x200ee4u: goto label_200ee4;
        case 0x200ee8u: goto label_200ee8;
        case 0x200eecu: goto label_200eec;
        case 0x200ef0u: goto label_200ef0;
        case 0x200ef4u: goto label_200ef4;
        case 0x200ef8u: goto label_200ef8;
        case 0x200efcu: goto label_200efc;
        case 0x200f00u: goto label_200f00;
        case 0x200f04u: goto label_200f04;
        case 0x200f08u: goto label_200f08;
        case 0x200f0cu: goto label_200f0c;
        case 0x200f10u: goto label_200f10;
        case 0x200f14u: goto label_200f14;
        case 0x200f18u: goto label_200f18;
        case 0x200f1cu: goto label_200f1c;
        case 0x200f20u: goto label_200f20;
        case 0x200f24u: goto label_200f24;
        case 0x200f28u: goto label_200f28;
        case 0x200f2cu: goto label_200f2c;
        case 0x200f30u: goto label_200f30;
        case 0x200f34u: goto label_200f34;
        case 0x200f38u: goto label_200f38;
        case 0x200f3cu: goto label_200f3c;
        case 0x200f40u: goto label_200f40;
        case 0x200f44u: goto label_200f44;
        case 0x200f48u: goto label_200f48;
        case 0x200f4cu: goto label_200f4c;
        case 0x200f50u: goto label_200f50;
        case 0x200f54u: goto label_200f54;
        case 0x200f58u: goto label_200f58;
        case 0x200f5cu: goto label_200f5c;
        case 0x200f60u: goto label_200f60;
        case 0x200f64u: goto label_200f64;
        case 0x200f68u: goto label_200f68;
        case 0x200f6cu: goto label_200f6c;
        case 0x200f70u: goto label_200f70;
        case 0x200f74u: goto label_200f74;
        case 0x200f78u: goto label_200f78;
        case 0x200f7cu: goto label_200f7c;
        case 0x200f80u: goto label_200f80;
        case 0x200f84u: goto label_200f84;
        case 0x200f88u: goto label_200f88;
        case 0x200f8cu: goto label_200f8c;
        case 0x200f90u: goto label_200f90;
        case 0x200f94u: goto label_200f94;
        case 0x200f98u: goto label_200f98;
        case 0x200f9cu: goto label_200f9c;
        case 0x200fa0u: goto label_200fa0;
        case 0x200fa4u: goto label_200fa4;
        default: break;
    }

    ctx->pc = 0x200c48u;

label_200c48:
    // 0x200c48: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x200c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_200c4c:
    // 0x200c4c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x200c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_200c50:
    // 0x200c50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x200c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200c54:
    // 0x200c54: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x200c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_200c58:
    // 0x200c58: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x200c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_200c5c:
    // 0x200c5c: 0xa7a50030  sh          $a1, 0x30($sp)
    ctx->pc = 0x200c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 5));
label_200c60:
    // 0x200c60: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x200c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_200c64:
    // 0x200c64: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x200c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_200c68:
    // 0x200c68: 0xc07f8b4  jal         func_1FE2D0
label_200c6c:
    if (ctx->pc == 0x200C6Cu) {
        ctx->pc = 0x200C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C68u;
        // 0x200c6c: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C70u;
        goto label_200c70;
    }
    ctx->pc = 0x200C68u;
    SET_GPR_U32(ctx, 31, 0x200C70u);
    ctx->pc = 0x200C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C68u;
    // 0x200c6c: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2D0u, 0x200C68u, 0x200C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C70u;
label_200c70:
    // 0x200c70: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x200c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_200c74:
    // 0x200c74: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x200c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_200c78:
    // 0x200c78: 0xc0e4060  jal         func_390180
label_200c7c:
    if (ctx->pc == 0x200C7Cu) {
        ctx->pc = 0x200C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C78u;
        // 0x200c7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C80u;
        goto label_200c80;
    }
    ctx->pc = 0x200C78u;
    SET_GPR_U32(ctx, 31, 0x200C80u);
    ctx->pc = 0x200C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C78u;
    // 0x200c7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x200C78u, 0x200C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C80u;
label_200c80:
    // 0x200c80: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_200c84:
    if (ctx->pc == 0x200C84u) {
        ctx->pc = 0x200C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C80u;
        // 0x200c84: 0x862400a8  lh          $a0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C88u;
        goto label_200c88;
    }
    ctx->pc = 0x200C80u;
    {
        const bool branch_taken_0x200c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200c80) {
            ctx->pc = 0x200C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C80u;
            // 0x200c84: 0x862400a8  lh          $a0, 0xA8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200CD8u;
            goto label_200cd8;
        }
    }
    ctx->pc = 0x200C88u;
label_200c88:
    // 0x200c88: 0xc0e409a  jal         func_390268
label_200c8c:
    if (ctx->pc == 0x200C8Cu) {
        ctx->pc = 0x200C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C88u;
        // 0x200c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200C90u;
        goto label_200c90;
    }
    ctx->pc = 0x200C88u;
    SET_GPR_U32(ctx, 31, 0x200C90u);
    ctx->pc = 0x200C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C88u;
    // 0x200c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x200C88u, 0x200C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C90u;
label_200c90:
    // 0x200c90: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x200c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_200c94:
    // 0x200c94: 0x24020160  addiu       $v0, $zero, 0x160
    ctx->pc = 0x200c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_200c98:
    // 0x200c98: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_200c9c:
    if (ctx->pc == 0x200C9Cu) {
        ctx->pc = 0x200C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C98u;
        // 0x200c9c: 0x97a20030  lhu         $v0, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CA0u;
        goto label_200ca0;
    }
    ctx->pc = 0x200C98u;
    {
        const bool branch_taken_0x200c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x200C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C98u;
        // 0x200c9c: 0x97a20030  lhu         $v0, 0x30($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c98) {
            ctx->pc = 0x200CB0u;
            goto label_200cb0;
        }
    }
    ctx->pc = 0x200CA0u;
label_200ca0:
    // 0x200ca0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_200ca4:
    if (ctx->pc == 0x200CA4u) {
        ctx->pc = 0x200CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CA0u;
        // 0x200ca4: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CA8u;
        goto label_200ca8;
    }
    ctx->pc = 0x200CA0u;
    {
        const bool branch_taken_0x200ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x200CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CA0u;
        // 0x200ca4: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ca0) {
            ctx->pc = 0x200CB0u;
            goto label_200cb0;
        }
    }
    ctx->pc = 0x200CA8u;
label_200ca8:
    // 0x200ca8: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_200cac:
    if (ctx->pc == 0x200CACu) {
        ctx->pc = 0x200CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CA8u;
        // 0x200cac: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CB0u;
        goto label_200cb0;
    }
    ctx->pc = 0x200CA8u;
    {
        const bool branch_taken_0x200ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CA8u;
        // 0x200cac: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ca8) {
            ctx->pc = 0x200F88u;
            goto label_200f88;
        }
    }
    ctx->pc = 0x200CB0u;
label_200cb0:
    // 0x200cb0: 0xc0e409a  jal         func_390268
label_200cb4:
    if (ctx->pc == 0x200CB4u) {
        ctx->pc = 0x200CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CB0u;
        // 0x200cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CB8u;
        goto label_200cb8;
    }
    ctx->pc = 0x200CB0u;
    SET_GPR_U32(ctx, 31, 0x200CB8u);
    ctx->pc = 0x200CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CB0u;
    // 0x200cb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x200CB0u, 0x200CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CB8u;
label_200cb8:
    // 0x200cb8: 0xc089c70  jal         func_2271C0
label_200cbc:
    if (ctx->pc == 0x200CBCu) {
        ctx->pc = 0x200CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CB8u;
        // 0x200cbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CC0u;
        goto label_200cc0;
    }
    ctx->pc = 0x200CB8u;
    SET_GPR_U32(ctx, 31, 0x200CC0u);
    ctx->pc = 0x200CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CB8u;
    // 0x200cbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2271C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2271C0u, 0x200CB8u, 0x200CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CC0u;
label_200cc0:
    // 0x200cc0: 0xc0e409a  jal         func_390268
label_200cc4:
    if (ctx->pc == 0x200CC4u) {
        ctx->pc = 0x200CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CC0u;
        // 0x200cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CC8u;
        goto label_200cc8;
    }
    ctx->pc = 0x200CC0u;
    SET_GPR_U32(ctx, 31, 0x200CC8u);
    ctx->pc = 0x200CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CC0u;
    // 0x200cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x200CC0u, 0x200CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CC8u;
label_200cc8:
    // 0x200cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200ccc:
    // 0x200ccc: 0xc0871f2  jal         func_21C7C8
label_200cd0:
    if (ctx->pc == 0x200CD0u) {
        ctx->pc = 0x200CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CCCu;
        // 0x200cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CD4u;
        goto label_200cd4;
    }
    ctx->pc = 0x200CCCu;
    SET_GPR_U32(ctx, 31, 0x200CD4u);
    ctx->pc = 0x200CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CCCu;
    // 0x200cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C7C8u, 0x200CCCu, 0x200CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CD4u;
label_200cd4:
    // 0x200cd4: 0x862400a8  lh          $a0, 0xA8($s1)
    ctx->pc = 0x200cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 168)));
label_200cd8:
    // 0x200cd8: 0xc05a916  jal         func_16A458
label_200cdc:
    if (ctx->pc == 0x200CDCu) {
        ctx->pc = 0x200CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CD8u;
        // 0x200cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CE0u;
        goto label_200ce0;
    }
    ctx->pc = 0x200CD8u;
    SET_GPR_U32(ctx, 31, 0x200CE0u);
    ctx->pc = 0x200CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200CD8u;
    // 0x200cdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A458u, 0x200CD8u, 0x200CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200CE0u;
label_200ce0:
    // 0x200ce0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x200ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_200ce4:
    // 0x200ce4: 0x144300a9  bne         $v0, $v1, . + 4 + (0xA9 << 2)
label_200ce8:
    if (ctx->pc == 0x200CE8u) {
        ctx->pc = 0x200CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CE4u;
        // 0x200ce8: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200CECu;
        goto label_200cec;
    }
    ctx->pc = 0x200CE4u;
    {
        const bool branch_taken_0x200ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x200CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CE4u;
        // 0x200ce8: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ce4) {
            ctx->pc = 0x200F8Cu;
            goto label_200f8c;
        }
    }
    ctx->pc = 0x200CECu;
label_200cec:
    // 0x200cec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x200cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_200cf0:
    // 0x200cf0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x200cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_200cf4:
    // 0x200cf4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x200cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_200cf8:
    // 0x200cf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x200cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_200cfc:
    // 0x200cfc: 0xc442f564  lwc1        $f2, -0xA9C($v0)
    ctx->pc = 0x200cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_200d00:
    // 0x200d00: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x200d00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_200d04:
    // 0x200d04: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x200d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_200d08:
    // 0x200d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x200d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_200d0c:
    // 0x200d0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200d10:
    // 0x200d10: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x200d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_200d14:
    // 0x200d14: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x200d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_200d18:
    // 0x200d18: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x200d18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_200d1c:
    // 0x200d1c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x200d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_200d20:
    // 0x200d20: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x200d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_200d24:
    // 0x200d24: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x200d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_200d28:
    // 0x200d28: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x200d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_200d2c:
    // 0x200d2c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x200d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_200d30:
    // 0x200d30: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x200d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_200d34:
    // 0x200d34: 0xc046e0e  jal         func_11B838
label_200d38:
    if (ctx->pc == 0x200D38u) {
        ctx->pc = 0x200D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D34u;
        // 0x200d38: 0x26320094  addiu       $s2, $s1, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D3Cu;
        goto label_200d3c;
    }
    ctx->pc = 0x200D34u;
    SET_GPR_U32(ctx, 31, 0x200D3Cu);
    ctx->pc = 0x200D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D34u;
    // 0x200d38: 0x26320094  addiu       $s2, $s1, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B838u, 0x200D34u, 0x200D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D3Cu;
label_200d3c:
    // 0x200d3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_200d40:
    // 0x200d40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x200d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_200d44:
    // 0x200d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200d48:
    // 0x200d48: 0xc046e5c  jal         func_11B970
label_200d4c:
    if (ctx->pc == 0x200D4Cu) {
        ctx->pc = 0x200D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D48u;
        // 0x200d4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D50u;
        goto label_200d50;
    }
    ctx->pc = 0x200D48u;
    SET_GPR_U32(ctx, 31, 0x200D50u);
    ctx->pc = 0x200D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D48u;
    // 0x200d4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x200D48u, 0x200D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D50u;
label_200d50:
    // 0x200d50: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x200d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_200d54:
    // 0x200d54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200d58:
    // 0x200d58: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x200d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_200d5c:
    // 0x200d5c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x200d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_200d60:
    // 0x200d60: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x200d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_200d64:
    // 0x200d64: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x200d64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_200d68:
    // 0x200d68: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x200d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_200d6c:
    // 0x200d6c: 0xc047e6c  jal         func_11F9B0
label_200d70:
    if (ctx->pc == 0x200D70u) {
        ctx->pc = 0x200D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D6Cu;
        // 0x200d70: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D74u;
        goto label_200d74;
    }
    ctx->pc = 0x200D6Cu;
    SET_GPR_U32(ctx, 31, 0x200D74u);
    ctx->pc = 0x200D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D6Cu;
    // 0x200d70: 0xe7b4000c  swc1        $f20, 0xC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x200D6Cu, 0x200D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D74u;
label_200d74:
    // 0x200d74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x200d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200d78:
    // 0x200d78: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x200d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_200d7c:
    // 0x200d7c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x200d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_200d80:
    // 0x200d80: 0xa0f809  jalr        $a1
label_200d84:
    if (ctx->pc == 0x200D84u) {
        ctx->pc = 0x200D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D80u;
        // 0x200d84: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D88u;
        goto label_200d88;
    }
    ctx->pc = 0x200D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x200D88u);
        ctx->pc = 0x200D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D80u;
        // 0x200d84: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200D80u, 0x200D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200D88u;
label_200d88:
    // 0x200d88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x200d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200d8c:
    // 0x200d8c: 0xc0cd780  jal         func_335E00
label_200d90:
    if (ctx->pc == 0x200D90u) {
        ctx->pc = 0x200D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D8Cu;
        // 0x200d90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200D94u;
        goto label_200d94;
    }
    ctx->pc = 0x200D8Cu;
    SET_GPR_U32(ctx, 31, 0x200D94u);
    ctx->pc = 0x200D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D8Cu;
    // 0x200d90: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x200D8Cu, 0x200D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200D94u;
label_200d94:
    // 0x200d94: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x200d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_200d98:
    // 0x200d98: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x200d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_200d9c:
    // 0x200d9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x200d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_200da0:
    // 0x200da0: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x200da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_200da4:
    // 0x200da4: 0x97a50030  lhu         $a1, 0x30($sp)
    ctx->pc = 0x200da4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_200da8:
    // 0x200da8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x200da8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200dac:
    // 0x200dac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x200dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_200db0:
    // 0x200db0: 0x862900a8  lh          $t1, 0xA8($s1)
    ctx->pc = 0x200db0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 168)));
label_200db4:
    // 0x200db4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x200db4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200db8:
    // 0x200db8: 0x248483c0  addiu       $a0, $a0, -0x7C40
    ctx->pc = 0x200db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935488));
label_200dbc:
    // 0x200dbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x200dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200dc0:
    // 0x200dc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x200dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200dc4:
    // 0x200dc4: 0xc08cf58  jal         func_233D60
label_200dc8:
    if (ctx->pc == 0x200DC8u) {
        ctx->pc = 0x200DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DC4u;
        // 0x200dc8: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x200DCCu;
        goto label_200dcc;
    }
    ctx->pc = 0x200DC4u;
    SET_GPR_U32(ctx, 31, 0x200DCCu);
    ctx->pc = 0x200DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200DC4u;
    // 0x200dc8: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D60u, 0x200DC4u, 0x200DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DCCu;
label_200dcc:
    // 0x200dcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200dd0:
    // 0x200dd0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x200dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_200dd4:
    // 0x200dd4: 0xc07f8ba  jal         func_1FE2E8
label_200dd8:
    if (ctx->pc == 0x200DD8u) {
        ctx->pc = 0x200DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DD4u;
        // 0x200dd8: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200DDCu;
        goto label_200ddc;
    }
    ctx->pc = 0x200DD4u;
    SET_GPR_U32(ctx, 31, 0x200DDCu);
    ctx->pc = 0x200DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200DD4u;
    // 0x200dd8: 0xae220094  sw          $v0, 0x94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2E8u, 0x200DD4u, 0x200DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DDCu;
label_200ddc:
    // 0x200ddc: 0xc0e4060  jal         func_390180
label_200de0:
    if (ctx->pc == 0x200DE0u) {
        ctx->pc = 0x200DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DDCu;
        // 0x200de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200DE4u;
        goto label_200de4;
    }
    ctx->pc = 0x200DDCu;
    SET_GPR_U32(ctx, 31, 0x200DE4u);
    ctx->pc = 0x200DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200DDCu;
    // 0x200de0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x200DDCu, 0x200DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DE4u;
label_200de4:
    // 0x200de4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_200de8:
    if (ctx->pc == 0x200DE8u) {
        ctx->pc = 0x200DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DE4u;
        // 0x200de8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200DECu;
        goto label_200dec;
    }
    ctx->pc = 0x200DE4u;
    {
        const bool branch_taken_0x200de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DE4u;
        // 0x200de8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200de4) {
            ctx->pc = 0x200E80u;
            goto label_200e80;
        }
    }
    ctx->pc = 0x200DECu;
label_200dec:
    // 0x200dec: 0xc0e409a  jal         func_390268
label_200df0:
    if (ctx->pc == 0x200DF0u) {
        ctx->pc = 0x200DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DECu;
        // 0x200df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200DF4u;
        goto label_200df4;
    }
    ctx->pc = 0x200DECu;
    SET_GPR_U32(ctx, 31, 0x200DF4u);
    ctx->pc = 0x200DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200DECu;
    // 0x200df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x200DECu, 0x200DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DF4u;
label_200df4:
    // 0x200df4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_200df8:
    if (ctx->pc == 0x200DF8u) {
        ctx->pc = 0x200DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DF4u;
        // 0x200df8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200DFCu;
        goto label_200dfc;
    }
    ctx->pc = 0x200DF4u;
    {
        const bool branch_taken_0x200df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DF4u;
        // 0x200df8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200df4) {
            ctx->pc = 0x200E80u;
            goto label_200e80;
        }
    }
    ctx->pc = 0x200DFCu;
label_200dfc:
    // 0x200dfc: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x200dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_200e00:
    // 0x200e00: 0xc0a48cc  jal         func_292330
label_200e04:
    if (ctx->pc == 0x200E04u) {
        ctx->pc = 0x200E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E00u;
        // 0x200e04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E08u;
        goto label_200e08;
    }
    ctx->pc = 0x200E00u;
    SET_GPR_U32(ctx, 31, 0x200E08u);
    ctx->pc = 0x200E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E00u;
    // 0x200e04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x200E00u, 0x200E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E08u;
label_200e08:
    // 0x200e08: 0xc0e409a  jal         func_390268
label_200e0c:
    if (ctx->pc == 0x200E0Cu) {
        ctx->pc = 0x200E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E08u;
        // 0x200e0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E10u;
        goto label_200e10;
    }
    ctx->pc = 0x200E08u;
    SET_GPR_U32(ctx, 31, 0x200E10u);
    ctx->pc = 0x200E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E08u;
    // 0x200e0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x200E08u, 0x200E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E10u;
label_200e10:
    // 0x200e10: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x200e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_200e14:
    // 0x200e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200e18:
    // 0x200e18: 0xc08d3be  jal         func_234EF8
label_200e1c:
    if (ctx->pc == 0x200E1Cu) {
        ctx->pc = 0x200E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E18u;
        // 0x200e1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E20u;
        goto label_200e20;
    }
    ctx->pc = 0x200E18u;
    SET_GPR_U32(ctx, 31, 0x200E20u);
    ctx->pc = 0x200E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E18u;
    // 0x200e1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234EF8u, 0x200E18u, 0x200E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E20u;
label_200e20:
    // 0x200e20: 0xa2000284  sb          $zero, 0x284($s0)
    ctx->pc = 0x200e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
label_200e24:
    // 0x200e24: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x200e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200e28:
    // 0x200e28: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x200e28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_200e2c:
    // 0x200e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200e30:
    // 0x200e30: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x200e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_200e34:
    // 0x200e34: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x200e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_200e38:
    // 0x200e38: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x200e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_200e3c:
    // 0x200e3c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x200e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_200e40:
    // 0x200e40: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x200e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_200e44:
    // 0x200e44: 0xc086c2e  jal         func_21B0B8
label_200e48:
    if (ctx->pc == 0x200E48u) {
        ctx->pc = 0x200E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E44u;
        // 0x200e48: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E4Cu;
        goto label_200e4c;
    }
    ctx->pc = 0x200E44u;
    SET_GPR_U32(ctx, 31, 0x200E4Cu);
    ctx->pc = 0x200E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E44u;
    // 0x200e48: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x200E44u, 0x200E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E4Cu;
label_200e4c:
    // 0x200e4c: 0xc047e6c  jal         func_11F9B0
label_200e50:
    if (ctx->pc == 0x200E50u) {
        ctx->pc = 0x200E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E4Cu;
        // 0x200e50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E54u;
        goto label_200e54;
    }
    ctx->pc = 0x200E4Cu;
    SET_GPR_U32(ctx, 31, 0x200E54u);
    ctx->pc = 0x200E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E4Cu;
    // 0x200e50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x200E4Cu, 0x200E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E54u;
label_200e54:
    // 0x200e54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x200e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_200e58:
    // 0x200e58: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x200e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_200e5c:
    // 0x200e5c: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x200e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_200e60:
    // 0x200e60: 0xa0f809  jalr        $a1
label_200e64:
    if (ctx->pc == 0x200E64u) {
        ctx->pc = 0x200E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E60u;
        // 0x200e64: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E68u;
        goto label_200e68;
    }
    ctx->pc = 0x200E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x200E68u);
        ctx->pc = 0x200E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E60u;
        // 0x200e64: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200E60u, 0x200E68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200E68u;
label_200e68:
    // 0x200e68: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x200e68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_200e6c:
    // 0x200e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x200e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200e70:
    // 0x200e70: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x200e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_200e74:
    // 0x200e74: 0xc08e86c  jal         func_23A1B0
label_200e78:
    if (ctx->pc == 0x200E78u) {
        ctx->pc = 0x200E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E74u;
        // 0x200e78: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E7Cu;
        goto label_200e7c;
    }
    ctx->pc = 0x200E74u;
    SET_GPR_U32(ctx, 31, 0x200E7Cu);
    ctx->pc = 0x200E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E74u;
    // 0x200e78: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A1B0u, 0x200E74u, 0x200E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E7Cu;
label_200e7c:
    // 0x200e7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x200e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_200e80:
    // 0x200e80: 0xc06254a  jal         func_189528
label_200e84:
    if (ctx->pc == 0x200E84u) {
        ctx->pc = 0x200E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E80u;
        // 0x200e84: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200E88u;
        goto label_200e88;
    }
    ctx->pc = 0x200E80u;
    SET_GPR_U32(ctx, 31, 0x200E88u);
    ctx->pc = 0x200E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E80u;
    // 0x200e84: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189528u, 0x200E80u, 0x200E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E88u;
label_200e88:
    // 0x200e88: 0xc07f80e  jal         func_1FE038
label_200e8c:
    if (ctx->pc == 0x200E8Cu) {
        ctx->pc = 0x200E90u;
        goto label_200e90;
    }
    ctx->pc = 0x200E88u;
    SET_GPR_U32(ctx, 31, 0x200E90u);
    ctx->pc = 0x1FE038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE038u, 0x200E88u, 0x200E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200E90u;
label_200e90:
    // 0x200e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200e94:
    // 0x200e94: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x200e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_200e98:
    // 0x200e98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200e9c:
    // 0x200e9c: 0xc13a798  jal         func_4E9E60
label_200ea0:
    if (ctx->pc == 0x200EA0u) {
        ctx->pc = 0x200EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E9Cu;
        // 0x200ea0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200EA4u;
        goto label_200ea4;
    }
    ctx->pc = 0x200E9Cu;
    SET_GPR_U32(ctx, 31, 0x200EA4u);
    ctx->pc = 0x200EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200E9Cu;
    // 0x200ea0: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E9E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E9E60u, 0x200E9Cu, 0x200EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EA4u;
label_200ea4:
    // 0x200ea4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x200ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_200ea8:
    // 0x200ea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x200ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200eac:
    // 0x200eac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x200eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_200eb0:
    // 0x200eb0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_200eb4:
    if (ctx->pc == 0x200EB4u) {
        ctx->pc = 0x200EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EB0u;
        // 0x200eb4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200EB8u;
        goto label_200eb8;
    }
    ctx->pc = 0x200EB0u;
    {
        const bool branch_taken_0x200eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x200EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EB0u;
        // 0x200eb4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200eb0) {
            ctx->pc = 0x200ECCu;
            goto label_200ecc;
        }
    }
    ctx->pc = 0x200EB8u;
label_200eb8:
    // 0x200eb8: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x200eb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_200ebc:
    // 0x200ebc: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x200ebcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_200ec0:
    // 0x200ec0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x200ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_200ec4:
    // 0x200ec4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_200ec8:
    if (ctx->pc == 0x200EC8u) {
        ctx->pc = 0x200ECCu;
        goto label_200ecc;
    }
    ctx->pc = 0x200EC4u;
    {
        const bool branch_taken_0x200ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200ec4) {
            ctx->pc = 0x200ED0u;
            goto label_200ed0;
        }
    }
    ctx->pc = 0x200ECCu;
label_200ecc:
    // 0x200ecc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x200eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200ed0:
    // 0x200ed0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_200ed4:
    if (ctx->pc == 0x200ED4u) {
        ctx->pc = 0x200ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ED0u;
        // 0x200ed4: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200ED8u;
        goto label_200ed8;
    }
    ctx->pc = 0x200ED0u;
    {
        const bool branch_taken_0x200ed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ED0u;
        // 0x200ed4: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ed0) {
            ctx->pc = 0x200F08u;
            goto label_200f08;
        }
    }
    ctx->pc = 0x200ED8u;
label_200ed8:
    // 0x200ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200edc:
    // 0x200edc: 0x97a20030  lhu         $v0, 0x30($sp)
    ctx->pc = 0x200edcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
label_200ee0:
    // 0x200ee0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x200ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_200ee4:
    // 0x200ee4: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x200ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_200ee8:
    // 0x200ee8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x200ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_200eec:
    // 0x200eec: 0xa7a20080  sh          $v0, 0x80($sp)
    ctx->pc = 0x200eecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 2));
label_200ef0:
    // 0x200ef0: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x200ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_200ef4:
    // 0x200ef4: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x200ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_200ef8:
    // 0x200ef8: 0xc13a8f2  jal         func_4EA3C8
label_200efc:
    if (ctx->pc == 0x200EFCu) {
        ctx->pc = 0x200EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EF8u;
        // 0x200efc: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200F00u;
        goto label_200f00;
    }
    ctx->pc = 0x200EF8u;
    SET_GPR_U32(ctx, 31, 0x200F00u);
    ctx->pc = 0x200EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EF8u;
    // 0x200efc: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA3C8u, 0x200EF8u, 0x200F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F00u;
label_200f00:
    // 0x200f00: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x200f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_200f04:
    // 0x200f04: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x200f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_200f08:
    // 0x200f08: 0x8e2500d0  lw          $a1, 0xD0($s1)
    ctx->pc = 0x200f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_200f0c:
    // 0x200f0c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x200f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_200f10:
    // 0x200f10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x200f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_200f14:
    // 0x200f14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x200f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200f18:
    // 0x200f18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x200f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_200f1c:
    // 0x200f1c: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x200f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_200f20:
    // 0x200f20: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x200f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_200f24:
    // 0x200f24: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x200f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_200f28:
    // 0x200f28: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x200f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_200f2c:
    // 0x200f2c: 0xc4ecf55c  lwc1        $f12, -0xAA4($a3)
    ctx->pc = 0x200f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294964572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_200f30:
    // 0x200f30: 0x60f809  jalr        $v1
label_200f34:
    if (ctx->pc == 0x200F34u) {
        ctx->pc = 0x200F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F30u;
        // 0x200f34: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200F38u;
        goto label_200f38;
    }
    ctx->pc = 0x200F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x200F38u);
        ctx->pc = 0x200F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F30u;
        // 0x200f34: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200F30u, 0x200F38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x200F38u;
label_200f38:
    // 0x200f38: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x200f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_200f3c:
    // 0x200f3c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x200f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_200f40:
    // 0x200f40: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x200f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_200f44:
    // 0x200f44: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x200f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_200f48:
    // 0x200f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x200f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_200f4c:
    // 0x200f4c: 0x0  nop
    ctx->pc = 0x200f4cu;
    // NOP
label_200f50:
    // 0x200f50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_200f54:
    // 0x200f54: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x200f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_200f58:
    // 0x200f58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x200f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_200f5c:
    // 0x200f5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x200f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_200f60:
    // 0x200f60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x200f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_200f64:
    // 0x200f64: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x200f64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_200f68:
    // 0x200f68: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x200f68u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
label_200f6c:
    // 0x200f6c: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x200f6cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
label_200f70:
    // 0x200f70: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x200f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
label_200f74:
    // 0x200f74: 0xc07f952  jal         func_1FE548
label_200f78:
    if (ctx->pc == 0x200F78u) {
        ctx->pc = 0x200F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F74u;
        // 0x200f78: 0x9204000d  lbu         $a0, 0xD($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200F7Cu;
        goto label_200f7c;
    }
    ctx->pc = 0x200F74u;
    SET_GPR_U32(ctx, 31, 0x200F7Cu);
    ctx->pc = 0x200F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F74u;
    // 0x200f78: 0x9204000d  lbu         $a0, 0xD($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE548u, 0x200F74u, 0x200F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F7Cu;
label_200f7c:
    // 0x200f7c: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x200f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_200f80:
    // 0x200f80: 0xc073478  jal         func_1CD1E0
label_200f84:
    if (ctx->pc == 0x200F84u) {
        ctx->pc = 0x200F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F80u;
        // 0x200f84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200F88u;
        goto label_200f88;
    }
    ctx->pc = 0x200F80u;
    SET_GPR_U32(ctx, 31, 0x200F88u);
    ctx->pc = 0x200F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F80u;
    // 0x200f84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1E0u, 0x200F80u, 0x200F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F88u;
label_200f88:
    // 0x200f88: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x200f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_200f8c:
    // 0x200f8c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x200f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_200f90:
    // 0x200f90: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x200f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_200f94:
    // 0x200f94: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x200f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_200f98:
    // 0x200f98: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x200f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_200f9c:
    // 0x200f9c: 0x3e00008  jr          $ra
label_200fa0:
    if (ctx->pc == 0x200FA0u) {
        ctx->pc = 0x200FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F9Cu;
        // 0x200fa0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200FA4u;
        goto label_200fa4;
    }
    ctx->pc = 0x200F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F9Cu;
        // 0x200fa0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200FA4u;
label_200fa4:
    // 0x200fa4: 0x0  nop
    ctx->pc = 0x200fa4u;
    // NOP
    ctx->pc = 0x200fa8u;
}
