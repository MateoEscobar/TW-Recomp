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

// Function: sub_00277B20
// Address: 0x277b20 - 0x277ed8
void sub_00277B20_0x277b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277B20_0x277b20");
#endif

    switch (ctx->pc) {
        case 0x277b20u: goto label_277b20;
        case 0x277b24u: goto label_277b24;
        case 0x277b28u: goto label_277b28;
        case 0x277b2cu: goto label_277b2c;
        case 0x277b30u: goto label_277b30;
        case 0x277b34u: goto label_277b34;
        case 0x277b38u: goto label_277b38;
        case 0x277b3cu: goto label_277b3c;
        case 0x277b40u: goto label_277b40;
        case 0x277b44u: goto label_277b44;
        case 0x277b48u: goto label_277b48;
        case 0x277b4cu: goto label_277b4c;
        case 0x277b50u: goto label_277b50;
        case 0x277b54u: goto label_277b54;
        case 0x277b58u: goto label_277b58;
        case 0x277b5cu: goto label_277b5c;
        case 0x277b60u: goto label_277b60;
        case 0x277b64u: goto label_277b64;
        case 0x277b68u: goto label_277b68;
        case 0x277b6cu: goto label_277b6c;
        case 0x277b70u: goto label_277b70;
        case 0x277b74u: goto label_277b74;
        case 0x277b78u: goto label_277b78;
        case 0x277b7cu: goto label_277b7c;
        case 0x277b80u: goto label_277b80;
        case 0x277b84u: goto label_277b84;
        case 0x277b88u: goto label_277b88;
        case 0x277b8cu: goto label_277b8c;
        case 0x277b90u: goto label_277b90;
        case 0x277b94u: goto label_277b94;
        case 0x277b98u: goto label_277b98;
        case 0x277b9cu: goto label_277b9c;
        case 0x277ba0u: goto label_277ba0;
        case 0x277ba4u: goto label_277ba4;
        case 0x277ba8u: goto label_277ba8;
        case 0x277bacu: goto label_277bac;
        case 0x277bb0u: goto label_277bb0;
        case 0x277bb4u: goto label_277bb4;
        case 0x277bb8u: goto label_277bb8;
        case 0x277bbcu: goto label_277bbc;
        case 0x277bc0u: goto label_277bc0;
        case 0x277bc4u: goto label_277bc4;
        case 0x277bc8u: goto label_277bc8;
        case 0x277bccu: goto label_277bcc;
        case 0x277bd0u: goto label_277bd0;
        case 0x277bd4u: goto label_277bd4;
        case 0x277bd8u: goto label_277bd8;
        case 0x277bdcu: goto label_277bdc;
        case 0x277be0u: goto label_277be0;
        case 0x277be4u: goto label_277be4;
        case 0x277be8u: goto label_277be8;
        case 0x277becu: goto label_277bec;
        case 0x277bf0u: goto label_277bf0;
        case 0x277bf4u: goto label_277bf4;
        case 0x277bf8u: goto label_277bf8;
        case 0x277bfcu: goto label_277bfc;
        case 0x277c00u: goto label_277c00;
        case 0x277c04u: goto label_277c04;
        case 0x277c08u: goto label_277c08;
        case 0x277c0cu: goto label_277c0c;
        case 0x277c10u: goto label_277c10;
        case 0x277c14u: goto label_277c14;
        case 0x277c18u: goto label_277c18;
        case 0x277c1cu: goto label_277c1c;
        case 0x277c20u: goto label_277c20;
        case 0x277c24u: goto label_277c24;
        case 0x277c28u: goto label_277c28;
        case 0x277c2cu: goto label_277c2c;
        case 0x277c30u: goto label_277c30;
        case 0x277c34u: goto label_277c34;
        case 0x277c38u: goto label_277c38;
        case 0x277c3cu: goto label_277c3c;
        case 0x277c40u: goto label_277c40;
        case 0x277c44u: goto label_277c44;
        case 0x277c48u: goto label_277c48;
        case 0x277c4cu: goto label_277c4c;
        case 0x277c50u: goto label_277c50;
        case 0x277c54u: goto label_277c54;
        case 0x277c58u: goto label_277c58;
        case 0x277c5cu: goto label_277c5c;
        case 0x277c60u: goto label_277c60;
        case 0x277c64u: goto label_277c64;
        case 0x277c68u: goto label_277c68;
        case 0x277c6cu: goto label_277c6c;
        case 0x277c70u: goto label_277c70;
        case 0x277c74u: goto label_277c74;
        case 0x277c78u: goto label_277c78;
        case 0x277c7cu: goto label_277c7c;
        case 0x277c80u: goto label_277c80;
        case 0x277c84u: goto label_277c84;
        case 0x277c88u: goto label_277c88;
        case 0x277c8cu: goto label_277c8c;
        case 0x277c90u: goto label_277c90;
        case 0x277c94u: goto label_277c94;
        case 0x277c98u: goto label_277c98;
        case 0x277c9cu: goto label_277c9c;
        case 0x277ca0u: goto label_277ca0;
        case 0x277ca4u: goto label_277ca4;
        case 0x277ca8u: goto label_277ca8;
        case 0x277cacu: goto label_277cac;
        case 0x277cb0u: goto label_277cb0;
        case 0x277cb4u: goto label_277cb4;
        case 0x277cb8u: goto label_277cb8;
        case 0x277cbcu: goto label_277cbc;
        case 0x277cc0u: goto label_277cc0;
        case 0x277cc4u: goto label_277cc4;
        case 0x277cc8u: goto label_277cc8;
        case 0x277cccu: goto label_277ccc;
        case 0x277cd0u: goto label_277cd0;
        case 0x277cd4u: goto label_277cd4;
        case 0x277cd8u: goto label_277cd8;
        case 0x277cdcu: goto label_277cdc;
        case 0x277ce0u: goto label_277ce0;
        case 0x277ce4u: goto label_277ce4;
        case 0x277ce8u: goto label_277ce8;
        case 0x277cecu: goto label_277cec;
        case 0x277cf0u: goto label_277cf0;
        case 0x277cf4u: goto label_277cf4;
        case 0x277cf8u: goto label_277cf8;
        case 0x277cfcu: goto label_277cfc;
        case 0x277d00u: goto label_277d00;
        case 0x277d04u: goto label_277d04;
        case 0x277d08u: goto label_277d08;
        case 0x277d0cu: goto label_277d0c;
        case 0x277d10u: goto label_277d10;
        case 0x277d14u: goto label_277d14;
        case 0x277d18u: goto label_277d18;
        case 0x277d1cu: goto label_277d1c;
        case 0x277d20u: goto label_277d20;
        case 0x277d24u: goto label_277d24;
        case 0x277d28u: goto label_277d28;
        case 0x277d2cu: goto label_277d2c;
        case 0x277d30u: goto label_277d30;
        case 0x277d34u: goto label_277d34;
        case 0x277d38u: goto label_277d38;
        case 0x277d3cu: goto label_277d3c;
        case 0x277d40u: goto label_277d40;
        case 0x277d44u: goto label_277d44;
        case 0x277d48u: goto label_277d48;
        case 0x277d4cu: goto label_277d4c;
        case 0x277d50u: goto label_277d50;
        case 0x277d54u: goto label_277d54;
        case 0x277d58u: goto label_277d58;
        case 0x277d5cu: goto label_277d5c;
        case 0x277d60u: goto label_277d60;
        case 0x277d64u: goto label_277d64;
        case 0x277d68u: goto label_277d68;
        case 0x277d6cu: goto label_277d6c;
        case 0x277d70u: goto label_277d70;
        case 0x277d74u: goto label_277d74;
        case 0x277d78u: goto label_277d78;
        case 0x277d7cu: goto label_277d7c;
        case 0x277d80u: goto label_277d80;
        case 0x277d84u: goto label_277d84;
        case 0x277d88u: goto label_277d88;
        case 0x277d8cu: goto label_277d8c;
        case 0x277d90u: goto label_277d90;
        case 0x277d94u: goto label_277d94;
        case 0x277d98u: goto label_277d98;
        case 0x277d9cu: goto label_277d9c;
        case 0x277da0u: goto label_277da0;
        case 0x277da4u: goto label_277da4;
        case 0x277da8u: goto label_277da8;
        case 0x277dacu: goto label_277dac;
        case 0x277db0u: goto label_277db0;
        case 0x277db4u: goto label_277db4;
        case 0x277db8u: goto label_277db8;
        case 0x277dbcu: goto label_277dbc;
        case 0x277dc0u: goto label_277dc0;
        case 0x277dc4u: goto label_277dc4;
        case 0x277dc8u: goto label_277dc8;
        case 0x277dccu: goto label_277dcc;
        case 0x277dd0u: goto label_277dd0;
        case 0x277dd4u: goto label_277dd4;
        case 0x277dd8u: goto label_277dd8;
        case 0x277ddcu: goto label_277ddc;
        case 0x277de0u: goto label_277de0;
        case 0x277de4u: goto label_277de4;
        case 0x277de8u: goto label_277de8;
        case 0x277decu: goto label_277dec;
        case 0x277df0u: goto label_277df0;
        case 0x277df4u: goto label_277df4;
        case 0x277df8u: goto label_277df8;
        case 0x277dfcu: goto label_277dfc;
        case 0x277e00u: goto label_277e00;
        case 0x277e04u: goto label_277e04;
        case 0x277e08u: goto label_277e08;
        case 0x277e0cu: goto label_277e0c;
        case 0x277e10u: goto label_277e10;
        case 0x277e14u: goto label_277e14;
        case 0x277e18u: goto label_277e18;
        case 0x277e1cu: goto label_277e1c;
        case 0x277e20u: goto label_277e20;
        case 0x277e24u: goto label_277e24;
        case 0x277e28u: goto label_277e28;
        case 0x277e2cu: goto label_277e2c;
        case 0x277e30u: goto label_277e30;
        case 0x277e34u: goto label_277e34;
        case 0x277e38u: goto label_277e38;
        case 0x277e3cu: goto label_277e3c;
        case 0x277e40u: goto label_277e40;
        case 0x277e44u: goto label_277e44;
        case 0x277e48u: goto label_277e48;
        case 0x277e4cu: goto label_277e4c;
        case 0x277e50u: goto label_277e50;
        case 0x277e54u: goto label_277e54;
        case 0x277e58u: goto label_277e58;
        case 0x277e5cu: goto label_277e5c;
        case 0x277e60u: goto label_277e60;
        case 0x277e64u: goto label_277e64;
        case 0x277e68u: goto label_277e68;
        case 0x277e6cu: goto label_277e6c;
        case 0x277e70u: goto label_277e70;
        case 0x277e74u: goto label_277e74;
        case 0x277e78u: goto label_277e78;
        case 0x277e7cu: goto label_277e7c;
        case 0x277e80u: goto label_277e80;
        case 0x277e84u: goto label_277e84;
        case 0x277e88u: goto label_277e88;
        case 0x277e8cu: goto label_277e8c;
        case 0x277e90u: goto label_277e90;
        case 0x277e94u: goto label_277e94;
        case 0x277e98u: goto label_277e98;
        case 0x277e9cu: goto label_277e9c;
        case 0x277ea0u: goto label_277ea0;
        case 0x277ea4u: goto label_277ea4;
        case 0x277ea8u: goto label_277ea8;
        case 0x277eacu: goto label_277eac;
        case 0x277eb0u: goto label_277eb0;
        case 0x277eb4u: goto label_277eb4;
        case 0x277eb8u: goto label_277eb8;
        case 0x277ebcu: goto label_277ebc;
        case 0x277ec0u: goto label_277ec0;
        case 0x277ec4u: goto label_277ec4;
        case 0x277ec8u: goto label_277ec8;
        case 0x277eccu: goto label_277ecc;
        case 0x277ed0u: goto label_277ed0;
        case 0x277ed4u: goto label_277ed4;
        default: break;
    }

    ctx->pc = 0x277b20u;

label_277b20:
    // 0x277b20: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x277b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_277b24:
    // 0x277b24: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x277b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_277b28:
    // 0x277b28: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x277b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_277b2c:
    // 0x277b2c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x277b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_277b30:
    // 0x277b30: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x277b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_277b34:
    // 0x277b34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x277b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_277b38:
    // 0x277b38: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x277b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_277b3c:
    // 0x277b3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x277b3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_277b40:
    // 0x277b40: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x277b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_277b44:
    // 0x277b44: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x277b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_277b48:
    // 0x277b48: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x277b48u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_277b4c:
    // 0x277b4c: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x277b4cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_277b50:
    // 0x277b50: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x277b50u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_277b54:
    // 0x277b54: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_277b58:
    if (ctx->pc == 0x277B58u) {
        ctx->pc = 0x277B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B54u;
        // 0x277b58: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B5Cu;
        goto label_277b5c;
    }
    ctx->pc = 0x277B54u;
    {
        const bool branch_taken_0x277b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B54u;
        // 0x277b58: 0xe7b40100  swc1        $f20, 0x100($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b54) {
            ctx->pc = 0x277BBCu;
            goto label_277bbc;
        }
    }
    ctx->pc = 0x277B5Cu;
label_277b5c:
    // 0x277b5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x277b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_277b60:
    // 0x277b60: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x277b60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_277b64:
    // 0x277b64: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x277b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_277b68:
    // 0x277b68: 0x40f809  jalr        $v0
label_277b6c:
    if (ctx->pc == 0x277B6Cu) {
        ctx->pc = 0x277B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B68u;
        // 0x277b6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B70u;
        goto label_277b70;
    }
    ctx->pc = 0x277B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277B70u);
        ctx->pc = 0x277B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B68u;
        // 0x277b6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277B68u, 0x277B70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277B70u;
label_277b70:
    // 0x277b70: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
label_277b74:
    if (ctx->pc == 0x277B74u) {
        ctx->pc = 0x277B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B70u;
        // 0x277b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B78u;
        goto label_277b78;
    }
    ctx->pc = 0x277B70u;
    {
        const bool branch_taken_0x277b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B70u;
        // 0x277b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b70) {
            ctx->pc = 0x277EA8u;
            goto label_277ea8;
        }
    }
    ctx->pc = 0x277B78u;
label_277b78:
    // 0x277b78: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x277b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_277b7c:
    // 0x277b7c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x277b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_277b80:
    // 0x277b80: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x277b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_277b84:
    // 0x277b84: 0x40f809  jalr        $v0
label_277b88:
    if (ctx->pc == 0x277B88u) {
        ctx->pc = 0x277B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B84u;
        // 0x277b88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B8Cu;
        goto label_277b8c;
    }
    ctx->pc = 0x277B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277B8Cu);
        ctx->pc = 0x277B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B84u;
        // 0x277b88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277B84u, 0x277B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277B8Cu;
label_277b8c:
    // 0x277b8c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_277b90:
    if (ctx->pc == 0x277B90u) {
        ctx->pc = 0x277B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B8Cu;
        // 0x277b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B94u;
        goto label_277b94;
    }
    ctx->pc = 0x277B8Cu;
    {
        const bool branch_taken_0x277b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B8Cu;
        // 0x277b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277b8c) {
            ctx->pc = 0x277BBCu;
            goto label_277bbc;
        }
    }
    ctx->pc = 0x277B94u;
label_277b94:
    // 0x277b94: 0xc08a658  jal         func_229960
label_277b98:
    if (ctx->pc == 0x277B98u) {
        ctx->pc = 0x277B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277B94u;
        // 0x277b98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277B9Cu;
        goto label_277b9c;
    }
    ctx->pc = 0x277B94u;
    SET_GPR_U32(ctx, 31, 0x277B9Cu);
    ctx->pc = 0x277B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277B94u;
    // 0x277b98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229960u, 0x277B94u, 0x277B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277B9Cu;
label_277b9c:
    // 0x277b9c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x277b9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_277ba0:
    // 0x277ba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_277ba4:
    // 0x277ba4: 0xc095142  jal         func_254508
label_277ba8:
    if (ctx->pc == 0x277BA8u) {
        ctx->pc = 0x277BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BA4u;
        // 0x277ba8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277BACu;
        goto label_277bac;
    }
    ctx->pc = 0x277BA4u;
    SET_GPR_U32(ctx, 31, 0x277BACu);
    ctx->pc = 0x277BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BA4u;
    // 0x277ba8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x277BA4u, 0x277BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BACu;
label_277bac:
    // 0x277bac: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x277bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277bb0:
    // 0x277bb0: 0x0  nop
    ctx->pc = 0x277bb0u;
    // NOP
label_277bb4:
    // 0x277bb4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_277bb8:
    if (ctx->pc == 0x277BB8u) {
        ctx->pc = 0x277BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BB4u;
        // 0x277bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277BBCu;
        goto label_277bbc;
    }
    ctx->pc = 0x277BB4u;
    {
        const bool branch_taken_0x277bb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BB4u;
        // 0x277bb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277bb4) {
            ctx->pc = 0x277BC4u;
            goto label_277bc4;
        }
    }
    ctx->pc = 0x277BBCu;
label_277bbc:
    // 0x277bbc: 0x100000ba  b           . + 4 + (0xBA << 2)
label_277bc0:
    if (ctx->pc == 0x277BC0u) {
        ctx->pc = 0x277BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BBCu;
        // 0x277bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277BC4u;
        goto label_277bc4;
    }
    ctx->pc = 0x277BBCu;
    {
        const bool branch_taken_0x277bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BBCu;
        // 0x277bc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277bbc) {
            ctx->pc = 0x277EA8u;
            goto label_277ea8;
        }
    }
    ctx->pc = 0x277BC4u;
label_277bc4:
    // 0x277bc4: 0xc095128  jal         func_2544A0
label_277bc8:
    if (ctx->pc == 0x277BC8u) {
        ctx->pc = 0x277BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277BC4u;
        // 0x277bc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277BCCu;
        goto label_277bcc;
    }
    ctx->pc = 0x277BC4u;
    SET_GPR_U32(ctx, 31, 0x277BCCu);
    ctx->pc = 0x277BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277BC4u;
    // 0x277bc8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x277BC4u, 0x277BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277BCCu;
label_277bcc:
    // 0x277bcc: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x277bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_277bd0:
    // 0x277bd0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x277bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_277bd4:
    // 0x277bd4: 0x86240092  lh          $a0, 0x92($s1)
    ctx->pc = 0x277bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_277bd8:
    // 0x277bd8: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x277bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_277bdc:
    // 0x277bdc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x277bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_277be0:
    // 0x277be0: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x277be0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_277be4:
    // 0x277be4: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x277be4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_277be8:
    // 0x277be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x277be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_277bec:
    // 0x277bec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x277becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_277bf0:
    // 0x277bf0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x277bf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_277bf4:
    // 0x277bf4: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x277bf4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_277bf8:
    // 0x277bf8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x277bf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_277bfc:
    // 0x277bfc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x277bfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_277c00:
    // 0x277c00: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x277c00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_277c04:
    // 0x277c04: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x277c04u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_277c08:
    // 0x277c08: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x277c08u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_277c0c:
    // 0x277c0c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x277c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_277c10:
    // 0x277c10: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x277c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_277c14:
    // 0x277c14: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x277c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_277c18:
    // 0x277c18: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x277c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_277c1c:
    // 0x277c1c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_277c20:
    if (ctx->pc == 0x277C20u) {
        ctx->pc = 0x277C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C1Cu;
        // 0x277c20: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C24u;
        goto label_277c24;
    }
    ctx->pc = 0x277C1Cu;
    {
        const bool branch_taken_0x277c1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C1Cu;
        // 0x277c20: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c1c) {
            ctx->pc = 0x277C48u;
            goto label_277c48;
        }
    }
    ctx->pc = 0x277C24u;
label_277c24:
    // 0x277c24: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x277c24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_277c28:
    // 0x277c28: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x277c28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_277c2c:
    // 0x277c2c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x277c2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_277c30:
    // 0x277c30: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x277c30u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_277c34:
    // 0x277c34: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x277c34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_277c38:
    // 0x277c38: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x277c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_277c3c:
    // 0x277c3c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x277c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_277c40:
    // 0x277c40: 0x10000002  b           . + 4 + (0x2 << 2)
label_277c44:
    if (ctx->pc == 0x277C44u) {
        ctx->pc = 0x277C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C40u;
        // 0x277c44: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C48u;
        goto label_277c48;
    }
    ctx->pc = 0x277C40u;
    {
        const bool branch_taken_0x277c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C40u;
        // 0x277c44: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c40) {
            ctx->pc = 0x277C4Cu;
            goto label_277c4c;
        }
    }
    ctx->pc = 0x277C48u;
label_277c48:
    // 0x277c48: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x277c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_277c4c:
    // 0x277c4c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x277c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_277c50:
    // 0x277c50: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x277c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_277c54:
    // 0x277c54: 0xc0cd5ea  jal         func_3357A8
label_277c58:
    if (ctx->pc == 0x277C58u) {
        ctx->pc = 0x277C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C54u;
        // 0x277c58: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C5Cu;
        goto label_277c5c;
    }
    ctx->pc = 0x277C54u;
    SET_GPR_U32(ctx, 31, 0x277C5Cu);
    ctx->pc = 0x277C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C54u;
    // 0x277c58: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x277C54u, 0x277C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C5Cu;
label_277c5c:
    // 0x277c5c: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x277c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_277c60:
    // 0x277c60: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x277c60u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_277c64:
    // 0x277c64: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x277c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_277c68:
    // 0x277c68: 0xc0cd5ea  jal         func_3357A8
label_277c6c:
    if (ctx->pc == 0x277C6Cu) {
        ctx->pc = 0x277C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C68u;
        // 0x277c6c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C70u;
        goto label_277c70;
    }
    ctx->pc = 0x277C68u;
    SET_GPR_U32(ctx, 31, 0x277C70u);
    ctx->pc = 0x277C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277C68u;
    // 0x277c6c: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x277C68u, 0x277C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277C70u;
label_277c70:
    // 0x277c70: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x277c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_277c74:
    // 0x277c74: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x277c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
label_277c78:
    // 0x277c78: 0x8c457198  lw          $a1, 0x7198($v0)
    ctx->pc = 0x277c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29080)));
label_277c7c:
    // 0x277c7c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x277c7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_277c80:
    // 0x277c80: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x277c80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_277c84:
    // 0x277c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x277c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_277c88:
    // 0x277c88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x277c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_277c8c:
    // 0x277c8c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x277c8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_277c90:
    // 0x277c90: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_277c94:
    if (ctx->pc == 0x277C94u) {
        ctx->pc = 0x277C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C90u;
        // 0x277c94: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277C98u;
        goto label_277c98;
    }
    ctx->pc = 0x277C90u;
    {
        const bool branch_taken_0x277c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x277C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277C90u;
        // 0x277c94: 0xa4a20010  sh          $v0, 0x10($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277c90) {
            ctx->pc = 0x277CA0u;
            goto label_277ca0;
        }
    }
    ctx->pc = 0x277C98u;
label_277c98:
    // 0x277c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277c9c:
    // 0x277c9c: 0xa4a20010  sh          $v0, 0x10($a1)
    ctx->pc = 0x277c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 2));
label_277ca0:
    // 0x277ca0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x277ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_277ca4:
    // 0x277ca4: 0x94b00010  lhu         $s0, 0x10($a1)
    ctx->pc = 0x277ca4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_277ca8:
    // 0x277ca8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x277ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_277cac:
    // 0x277cac: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x277cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_277cb0:
    // 0x277cb0: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x277cb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_277cb4:
    // 0x277cb4: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x277cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_277cb8:
    // 0x277cb8: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x277cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_277cbc:
    // 0x277cbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x277cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_277cc0:
    // 0x277cc0: 0x40f809  jalr        $v0
label_277cc4:
    if (ctx->pc == 0x277CC4u) {
        ctx->pc = 0x277CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CC0u;
        // 0x277cc4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277CC8u;
        goto label_277cc8;
    }
    ctx->pc = 0x277CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277CC8u);
        ctx->pc = 0x277CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CC0u;
        // 0x277cc4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277CC0u, 0x277CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277CC8u;
label_277cc8:
    // 0x277cc8: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x277cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_277ccc:
    // 0x277ccc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x277cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_277cd0:
    // 0x277cd0: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x277cd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_277cd4:
    // 0x277cd4: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x277cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_277cd8:
    // 0x277cd8: 0x40f809  jalr        $v0
label_277cdc:
    if (ctx->pc == 0x277CDCu) {
        ctx->pc = 0x277CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CD8u;
        // 0x277cdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277CE0u;
        goto label_277ce0;
    }
    ctx->pc = 0x277CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277CE0u);
        ctx->pc = 0x277CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CD8u;
        // 0x277cdc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277CD8u, 0x277CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277CE0u;
label_277ce0:
    // 0x277ce0: 0xa450003c  sh          $s0, 0x3C($v0)
    ctx->pc = 0x277ce0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 16));
label_277ce4:
    // 0x277ce4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x277ce4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_277ce8:
    // 0x277ce8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x277ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_277cec:
    // 0x277cec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x277cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_277cf0:
    // 0x277cf0: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x277cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_277cf4:
    // 0x277cf4: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x277cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_277cf8:
    // 0x277cf8: 0x60f809  jalr        $v1
label_277cfc:
    if (ctx->pc == 0x277CFCu) {
        ctx->pc = 0x277CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CF8u;
        // 0x277cfc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D00u;
        goto label_277d00;
    }
    ctx->pc = 0x277CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x277D00u);
        ctx->pc = 0x277CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277CF8u;
        // 0x277cfc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277CF8u, 0x277D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277D00u;
label_277d00:
    // 0x277d00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x277d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_277d04:
    // 0x277d04: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x277d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_277d08:
    // 0x277d08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x277d08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_277d0c:
    // 0x277d0c: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x277d0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_277d10:
    // 0x277d10: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x277d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_277d14:
    // 0x277d14: 0x60f809  jalr        $v1
label_277d18:
    if (ctx->pc == 0x277D18u) {
        ctx->pc = 0x277D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D14u;
        // 0x277d18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D1Cu;
        goto label_277d1c;
    }
    ctx->pc = 0x277D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x277D1Cu);
        ctx->pc = 0x277D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D14u;
        // 0x277d18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277D14u, 0x277D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277D1Cu;
label_277d1c:
    // 0x277d1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x277d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_277d20:
    // 0x277d20: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x277d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_277d24:
    // 0x277d24: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x277d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_277d28:
    // 0x277d28: 0x60f809  jalr        $v1
label_277d2c:
    if (ctx->pc == 0x277D2Cu) {
        ctx->pc = 0x277D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D28u;
        // 0x277d2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D30u;
        goto label_277d30;
    }
    ctx->pc = 0x277D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x277D30u);
        ctx->pc = 0x277D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D28u;
        // 0x277d2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277D28u, 0x277D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277D30u;
label_277d30:
    // 0x277d30: 0xc08f3dc  jal         func_23CF70
label_277d34:
    if (ctx->pc == 0x277D34u) {
        ctx->pc = 0x277D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D30u;
        // 0x277d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D38u;
        goto label_277d38;
    }
    ctx->pc = 0x277D30u;
    SET_GPR_U32(ctx, 31, 0x277D38u);
    ctx->pc = 0x277D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D30u;
    // 0x277d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x277D30u, 0x277D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D38u;
label_277d38:
    // 0x277d38: 0xc08f3dc  jal         func_23CF70
label_277d3c:
    if (ctx->pc == 0x277D3Cu) {
        ctx->pc = 0x277D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D38u;
        // 0x277d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D40u;
        goto label_277d40;
    }
    ctx->pc = 0x277D38u;
    SET_GPR_U32(ctx, 31, 0x277D40u);
    ctx->pc = 0x277D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D38u;
    // 0x277d3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x277D38u, 0x277D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D40u;
label_277d40:
    // 0x277d40: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x277d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_277d44:
    // 0x277d44: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x277d44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_277d48:
    // 0x277d48: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x277d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_277d4c:
    // 0x277d4c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x277d4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_277d50:
    // 0x277d50: 0xc08f3e2  jal         func_23CF88
label_277d54:
    if (ctx->pc == 0x277D54u) {
        ctx->pc = 0x277D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D50u;
        // 0x277d54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D58u;
        goto label_277d58;
    }
    ctx->pc = 0x277D50u;
    SET_GPR_U32(ctx, 31, 0x277D58u);
    ctx->pc = 0x277D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D50u;
    // 0x277d54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x277D50u, 0x277D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D58u;
label_277d58:
    // 0x277d58: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x277d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_277d5c:
    // 0x277d5c: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x277d5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_277d60:
    // 0x277d60: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x277d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_277d64:
    // 0x277d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x277d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_277d68:
    // 0x277d68: 0xc08f3e2  jal         func_23CF88
label_277d6c:
    if (ctx->pc == 0x277D6Cu) {
        ctx->pc = 0x277D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D68u;
        // 0x277d6c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D70u;
        goto label_277d70;
    }
    ctx->pc = 0x277D68u;
    SET_GPR_U32(ctx, 31, 0x277D70u);
    ctx->pc = 0x277D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D68u;
    // 0x277d6c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x277D68u, 0x277D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D70u;
label_277d70:
    // 0x277d70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x277d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_277d74:
    // 0x277d74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x277d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_277d78:
    // 0x277d78: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x277d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_277d7c:
    // 0x277d7c: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x277d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_277d80:
    // 0x277d80: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x277d80u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_277d84:
    // 0x277d84: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x277d84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_277d88:
    // 0x277d88: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x277d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_277d8c:
    // 0x277d8c: 0xc12e310  jal         func_4B8C40
label_277d90:
    if (ctx->pc == 0x277D90u) {
        ctx->pc = 0x277D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D8Cu;
        // 0x277d90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277D94u;
        goto label_277d94;
    }
    ctx->pc = 0x277D8Cu;
    SET_GPR_U32(ctx, 31, 0x277D94u);
    ctx->pc = 0x277D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D8Cu;
    // 0x277d90: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x277D8Cu, 0x277D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D94u;
label_277d94:
    // 0x277d94: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x277d94u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_277d98:
    // 0x277d98: 0xc12e29c  jal         func_4B8A70
label_277d9c:
    if (ctx->pc == 0x277D9Cu) {
        ctx->pc = 0x277D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D98u;
        // 0x277d9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277DA0u;
        goto label_277da0;
    }
    ctx->pc = 0x277D98u;
    SET_GPR_U32(ctx, 31, 0x277DA0u);
    ctx->pc = 0x277D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D98u;
    // 0x277d9c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x277D98u, 0x277DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DA0u;
label_277da0:
    // 0x277da0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x277da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_277da4:
    // 0x277da4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_277da8:
    // 0x277da8: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x277da8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_277dac:
    // 0x277dac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x277dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_277db0:
    // 0x277db0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x277db0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_277db4:
    // 0x277db4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x277db4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_277db8:
    // 0x277db8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x277db8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_277dbc:
    // 0x277dbc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x277dbcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_277dc0:
    // 0x277dc0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x277dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_277dc4:
    // 0x277dc4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x277dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_277dc8:
    // 0x277dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_277dcc:
    // 0x277dcc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x277dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_277dd0:
    // 0x277dd0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x277dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277dd4:
    // 0x277dd4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x277dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277dd8:
    // 0x277dd8: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x277dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277ddc:
    // 0x277ddc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x277ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_277de0:
    // 0x277de0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x277de0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_277de4:
    // 0x277de4: 0xc095106  jal         func_254418
label_277de8:
    if (ctx->pc == 0x277DE8u) {
        ctx->pc = 0x277DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DE4u;
        // 0x277de8: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277DECu;
        goto label_277dec;
    }
    ctx->pc = 0x277DE4u;
    SET_GPR_U32(ctx, 31, 0x277DECu);
    ctx->pc = 0x277DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277DE4u;
    // 0x277de8: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x277DE4u, 0x277DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277DECu;
label_277dec:
    // 0x277dec: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x277decu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_277df0:
    // 0x277df0: 0x4402b800  mfc1        $v0, $f23
    ctx->pc = 0x277df0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_277df4:
    // 0x277df4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x277df4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_277df8:
    // 0x277df8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x277df8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_277dfc:
    // 0x277dfc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x277dfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_277e00:
    // 0x277e00: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x277e00u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_277e04:
    // 0x277e04: 0x7ba60040  lq          $a2, 0x40($sp)
    ctx->pc = 0x277e04u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_277e08:
    // 0x277e08: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x277e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_277e0c:
    // 0x277e0c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x277e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_277e10:
    // 0x277e10: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x277e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_277e14:
    // 0x277e14: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x277e14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_277e18:
    // 0x277e18: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x277e18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_277e1c:
    // 0x277e1c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x277e1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277e20:
    // 0x277e20: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x277e20u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_277e24:
    // 0x277e24: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x277e24u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_277e28:
    // 0x277e28: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x277e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277e2c:
    // 0x277e2c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x277e2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277e30:
    // 0x277e30: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x277e30u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_277e34:
    // 0x277e34: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x277e34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277e38:
    // 0x277e38: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x277e38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_277e3c:
    // 0x277e3c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x277e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_277e40:
    // 0x277e40: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x277e40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277e44:
    // 0x277e44: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x277e44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_277e48:
    // 0x277e48: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x277e48u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_277e4c:
    // 0x277e4c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x277e4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277e50:
    // 0x277e50: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x277e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_277e54:
    // 0x277e54: 0x48262800  qmfc2.ni    $a2, $vf5
    ctx->pc = 0x277e54u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[5]));
label_277e58:
    // 0x277e58: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x277e58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_277e5c:
    // 0x277e5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_277e60:
    // 0x277e60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x277e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_277e64:
    // 0x277e64: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x277e64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_277e68:
    // 0x277e68: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x277e68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_277e6c:
    // 0x277e6c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x277e6cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_277e70:
    // 0x277e70: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x277e70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_277e74:
    // 0x277e74: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x277e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
label_277e78:
    // 0x277e78: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x277e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
label_277e7c:
    // 0x277e7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x277e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_277e80:
    // 0x277e80: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x277e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
label_277e84:
    // 0x277e84: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x277e84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_277e88:
    // 0x277e88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x277e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_277e8c:
    // 0x277e8c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x277e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_277e90:
    // 0x277e90: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x277e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_277e94:
    // 0x277e94: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x277e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_277e98:
    // 0x277e98: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x277e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_277e9c:
    // 0x277e9c: 0xc08f4ae  jal         func_23D2B8
label_277ea0:
    if (ctx->pc == 0x277EA0u) {
        ctx->pc = 0x277EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E9Cu;
        // 0x277ea0: 0x7fa60060  sq          $a2, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277EA4u;
        goto label_277ea4;
    }
    ctx->pc = 0x277E9Cu;
    SET_GPR_U32(ctx, 31, 0x277EA4u);
    ctx->pc = 0x277EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277E9Cu;
    // 0x277ea0: 0x7fa60060  sq          $a2, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x277E9Cu, 0x277EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277EA4u;
label_277ea4:
    // 0x277ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x277ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_277ea8:
    // 0x277ea8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x277ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_277eac:
    // 0x277eac: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x277eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_277eb0:
    // 0x277eb0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x277eb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_277eb4:
    // 0x277eb4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x277eb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_277eb8:
    // 0x277eb8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x277eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_277ebc:
    // 0x277ebc: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x277ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_277ec0:
    // 0x277ec0: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x277ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_277ec4:
    // 0x277ec4: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x277ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_277ec8:
    // 0x277ec8: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x277ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_277ecc:
    // 0x277ecc: 0x3e00008  jr          $ra
label_277ed0:
    if (ctx->pc == 0x277ED0u) {
        ctx->pc = 0x277ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277ECCu;
        // 0x277ed0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277ED4u;
        goto label_277ed4;
    }
    ctx->pc = 0x277ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277ECCu;
        // 0x277ed0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277ED4u;
label_277ed4:
    // 0x277ed4: 0x0  nop
    ctx->pc = 0x277ed4u;
    // NOP
    ctx->pc = 0x277ed8u;
}
