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

// Function: sub_00247BE8
// Address: 0x247be8 - 0x247fc0
void sub_00247BE8_0x247be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247BE8_0x247be8");
#endif

    switch (ctx->pc) {
        case 0x247be8u: goto label_247be8;
        case 0x247becu: goto label_247bec;
        case 0x247bf0u: goto label_247bf0;
        case 0x247bf4u: goto label_247bf4;
        case 0x247bf8u: goto label_247bf8;
        case 0x247bfcu: goto label_247bfc;
        case 0x247c00u: goto label_247c00;
        case 0x247c04u: goto label_247c04;
        case 0x247c08u: goto label_247c08;
        case 0x247c0cu: goto label_247c0c;
        case 0x247c10u: goto label_247c10;
        case 0x247c14u: goto label_247c14;
        case 0x247c18u: goto label_247c18;
        case 0x247c1cu: goto label_247c1c;
        case 0x247c20u: goto label_247c20;
        case 0x247c24u: goto label_247c24;
        case 0x247c28u: goto label_247c28;
        case 0x247c2cu: goto label_247c2c;
        case 0x247c30u: goto label_247c30;
        case 0x247c34u: goto label_247c34;
        case 0x247c38u: goto label_247c38;
        case 0x247c3cu: goto label_247c3c;
        case 0x247c40u: goto label_247c40;
        case 0x247c44u: goto label_247c44;
        case 0x247c48u: goto label_247c48;
        case 0x247c4cu: goto label_247c4c;
        case 0x247c50u: goto label_247c50;
        case 0x247c54u: goto label_247c54;
        case 0x247c58u: goto label_247c58;
        case 0x247c5cu: goto label_247c5c;
        case 0x247c60u: goto label_247c60;
        case 0x247c64u: goto label_247c64;
        case 0x247c68u: goto label_247c68;
        case 0x247c6cu: goto label_247c6c;
        case 0x247c70u: goto label_247c70;
        case 0x247c74u: goto label_247c74;
        case 0x247c78u: goto label_247c78;
        case 0x247c7cu: goto label_247c7c;
        case 0x247c80u: goto label_247c80;
        case 0x247c84u: goto label_247c84;
        case 0x247c88u: goto label_247c88;
        case 0x247c8cu: goto label_247c8c;
        case 0x247c90u: goto label_247c90;
        case 0x247c94u: goto label_247c94;
        case 0x247c98u: goto label_247c98;
        case 0x247c9cu: goto label_247c9c;
        case 0x247ca0u: goto label_247ca0;
        case 0x247ca4u: goto label_247ca4;
        case 0x247ca8u: goto label_247ca8;
        case 0x247cacu: goto label_247cac;
        case 0x247cb0u: goto label_247cb0;
        case 0x247cb4u: goto label_247cb4;
        case 0x247cb8u: goto label_247cb8;
        case 0x247cbcu: goto label_247cbc;
        case 0x247cc0u: goto label_247cc0;
        case 0x247cc4u: goto label_247cc4;
        case 0x247cc8u: goto label_247cc8;
        case 0x247cccu: goto label_247ccc;
        case 0x247cd0u: goto label_247cd0;
        case 0x247cd4u: goto label_247cd4;
        case 0x247cd8u: goto label_247cd8;
        case 0x247cdcu: goto label_247cdc;
        case 0x247ce0u: goto label_247ce0;
        case 0x247ce4u: goto label_247ce4;
        case 0x247ce8u: goto label_247ce8;
        case 0x247cecu: goto label_247cec;
        case 0x247cf0u: goto label_247cf0;
        case 0x247cf4u: goto label_247cf4;
        case 0x247cf8u: goto label_247cf8;
        case 0x247cfcu: goto label_247cfc;
        case 0x247d00u: goto label_247d00;
        case 0x247d04u: goto label_247d04;
        case 0x247d08u: goto label_247d08;
        case 0x247d0cu: goto label_247d0c;
        case 0x247d10u: goto label_247d10;
        case 0x247d14u: goto label_247d14;
        case 0x247d18u: goto label_247d18;
        case 0x247d1cu: goto label_247d1c;
        case 0x247d20u: goto label_247d20;
        case 0x247d24u: goto label_247d24;
        case 0x247d28u: goto label_247d28;
        case 0x247d2cu: goto label_247d2c;
        case 0x247d30u: goto label_247d30;
        case 0x247d34u: goto label_247d34;
        case 0x247d38u: goto label_247d38;
        case 0x247d3cu: goto label_247d3c;
        case 0x247d40u: goto label_247d40;
        case 0x247d44u: goto label_247d44;
        case 0x247d48u: goto label_247d48;
        case 0x247d4cu: goto label_247d4c;
        case 0x247d50u: goto label_247d50;
        case 0x247d54u: goto label_247d54;
        case 0x247d58u: goto label_247d58;
        case 0x247d5cu: goto label_247d5c;
        case 0x247d60u: goto label_247d60;
        case 0x247d64u: goto label_247d64;
        case 0x247d68u: goto label_247d68;
        case 0x247d6cu: goto label_247d6c;
        case 0x247d70u: goto label_247d70;
        case 0x247d74u: goto label_247d74;
        case 0x247d78u: goto label_247d78;
        case 0x247d7cu: goto label_247d7c;
        case 0x247d80u: goto label_247d80;
        case 0x247d84u: goto label_247d84;
        case 0x247d88u: goto label_247d88;
        case 0x247d8cu: goto label_247d8c;
        case 0x247d90u: goto label_247d90;
        case 0x247d94u: goto label_247d94;
        case 0x247d98u: goto label_247d98;
        case 0x247d9cu: goto label_247d9c;
        case 0x247da0u: goto label_247da0;
        case 0x247da4u: goto label_247da4;
        case 0x247da8u: goto label_247da8;
        case 0x247dacu: goto label_247dac;
        case 0x247db0u: goto label_247db0;
        case 0x247db4u: goto label_247db4;
        case 0x247db8u: goto label_247db8;
        case 0x247dbcu: goto label_247dbc;
        case 0x247dc0u: goto label_247dc0;
        case 0x247dc4u: goto label_247dc4;
        case 0x247dc8u: goto label_247dc8;
        case 0x247dccu: goto label_247dcc;
        case 0x247dd0u: goto label_247dd0;
        case 0x247dd4u: goto label_247dd4;
        case 0x247dd8u: goto label_247dd8;
        case 0x247ddcu: goto label_247ddc;
        case 0x247de0u: goto label_247de0;
        case 0x247de4u: goto label_247de4;
        case 0x247de8u: goto label_247de8;
        case 0x247decu: goto label_247dec;
        case 0x247df0u: goto label_247df0;
        case 0x247df4u: goto label_247df4;
        case 0x247df8u: goto label_247df8;
        case 0x247dfcu: goto label_247dfc;
        case 0x247e00u: goto label_247e00;
        case 0x247e04u: goto label_247e04;
        case 0x247e08u: goto label_247e08;
        case 0x247e0cu: goto label_247e0c;
        case 0x247e10u: goto label_247e10;
        case 0x247e14u: goto label_247e14;
        case 0x247e18u: goto label_247e18;
        case 0x247e1cu: goto label_247e1c;
        case 0x247e20u: goto label_247e20;
        case 0x247e24u: goto label_247e24;
        case 0x247e28u: goto label_247e28;
        case 0x247e2cu: goto label_247e2c;
        case 0x247e30u: goto label_247e30;
        case 0x247e34u: goto label_247e34;
        case 0x247e38u: goto label_247e38;
        case 0x247e3cu: goto label_247e3c;
        case 0x247e40u: goto label_247e40;
        case 0x247e44u: goto label_247e44;
        case 0x247e48u: goto label_247e48;
        case 0x247e4cu: goto label_247e4c;
        case 0x247e50u: goto label_247e50;
        case 0x247e54u: goto label_247e54;
        case 0x247e58u: goto label_247e58;
        case 0x247e5cu: goto label_247e5c;
        case 0x247e60u: goto label_247e60;
        case 0x247e64u: goto label_247e64;
        case 0x247e68u: goto label_247e68;
        case 0x247e6cu: goto label_247e6c;
        case 0x247e70u: goto label_247e70;
        case 0x247e74u: goto label_247e74;
        case 0x247e78u: goto label_247e78;
        case 0x247e7cu: goto label_247e7c;
        case 0x247e80u: goto label_247e80;
        case 0x247e84u: goto label_247e84;
        case 0x247e88u: goto label_247e88;
        case 0x247e8cu: goto label_247e8c;
        case 0x247e90u: goto label_247e90;
        case 0x247e94u: goto label_247e94;
        case 0x247e98u: goto label_247e98;
        case 0x247e9cu: goto label_247e9c;
        case 0x247ea0u: goto label_247ea0;
        case 0x247ea4u: goto label_247ea4;
        case 0x247ea8u: goto label_247ea8;
        case 0x247eacu: goto label_247eac;
        case 0x247eb0u: goto label_247eb0;
        case 0x247eb4u: goto label_247eb4;
        case 0x247eb8u: goto label_247eb8;
        case 0x247ebcu: goto label_247ebc;
        case 0x247ec0u: goto label_247ec0;
        case 0x247ec4u: goto label_247ec4;
        case 0x247ec8u: goto label_247ec8;
        case 0x247eccu: goto label_247ecc;
        case 0x247ed0u: goto label_247ed0;
        case 0x247ed4u: goto label_247ed4;
        case 0x247ed8u: goto label_247ed8;
        case 0x247edcu: goto label_247edc;
        case 0x247ee0u: goto label_247ee0;
        case 0x247ee4u: goto label_247ee4;
        case 0x247ee8u: goto label_247ee8;
        case 0x247eecu: goto label_247eec;
        case 0x247ef0u: goto label_247ef0;
        case 0x247ef4u: goto label_247ef4;
        case 0x247ef8u: goto label_247ef8;
        case 0x247efcu: goto label_247efc;
        case 0x247f00u: goto label_247f00;
        case 0x247f04u: goto label_247f04;
        case 0x247f08u: goto label_247f08;
        case 0x247f0cu: goto label_247f0c;
        case 0x247f10u: goto label_247f10;
        case 0x247f14u: goto label_247f14;
        case 0x247f18u: goto label_247f18;
        case 0x247f1cu: goto label_247f1c;
        case 0x247f20u: goto label_247f20;
        case 0x247f24u: goto label_247f24;
        case 0x247f28u: goto label_247f28;
        case 0x247f2cu: goto label_247f2c;
        case 0x247f30u: goto label_247f30;
        case 0x247f34u: goto label_247f34;
        case 0x247f38u: goto label_247f38;
        case 0x247f3cu: goto label_247f3c;
        case 0x247f40u: goto label_247f40;
        case 0x247f44u: goto label_247f44;
        case 0x247f48u: goto label_247f48;
        case 0x247f4cu: goto label_247f4c;
        case 0x247f50u: goto label_247f50;
        case 0x247f54u: goto label_247f54;
        case 0x247f58u: goto label_247f58;
        case 0x247f5cu: goto label_247f5c;
        case 0x247f60u: goto label_247f60;
        case 0x247f64u: goto label_247f64;
        case 0x247f68u: goto label_247f68;
        case 0x247f6cu: goto label_247f6c;
        case 0x247f70u: goto label_247f70;
        case 0x247f74u: goto label_247f74;
        case 0x247f78u: goto label_247f78;
        case 0x247f7cu: goto label_247f7c;
        case 0x247f80u: goto label_247f80;
        case 0x247f84u: goto label_247f84;
        case 0x247f88u: goto label_247f88;
        case 0x247f8cu: goto label_247f8c;
        case 0x247f90u: goto label_247f90;
        case 0x247f94u: goto label_247f94;
        case 0x247f98u: goto label_247f98;
        case 0x247f9cu: goto label_247f9c;
        case 0x247fa0u: goto label_247fa0;
        case 0x247fa4u: goto label_247fa4;
        case 0x247fa8u: goto label_247fa8;
        case 0x247facu: goto label_247fac;
        case 0x247fb0u: goto label_247fb0;
        case 0x247fb4u: goto label_247fb4;
        case 0x247fb8u: goto label_247fb8;
        case 0x247fbcu: goto label_247fbc;
        default: break;
    }

    ctx->pc = 0x247be8u;

label_247be8:
    // 0x247be8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x247be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_247bec:
    // 0x247bec: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x247becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_247bf0:
    // 0x247bf0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x247bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_247bf4:
    // 0x247bf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x247bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_247bf8:
    // 0x247bf8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x247bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_247bfc:
    // 0x247bfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x247bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_247c00:
    // 0x247c00: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x247c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_247c04:
    // 0x247c04: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x247c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_247c08:
    // 0x247c08: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x247c08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_247c0c:
    // 0x247c0c: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x247c0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_247c10:
    // 0x247c10: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x247c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_247c14:
    // 0x247c14: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x247c14u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_247c18:
    // 0x247c18: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x247c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_247c1c:
    // 0x247c1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x247c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_247c20:
    // 0x247c20: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x247c20u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_247c24:
    // 0x247c24: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x247c24u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_247c28:
    // 0x247c28: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x247c28u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_247c2c:
    // 0x247c2c: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x247c2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_247c30:
    // 0x247c30: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x247c30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_247c34:
    // 0x247c34: 0xc089bfc  jal         func_226FF0
label_247c38:
    if (ctx->pc == 0x247C38u) {
        ctx->pc = 0x247C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C34u;
        // 0x247c38: 0xae000568  sw          $zero, 0x568($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247C3Cu;
        goto label_247c3c;
    }
    ctx->pc = 0x247C34u;
    SET_GPR_U32(ctx, 31, 0x247C3Cu);
    ctx->pc = 0x247C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C34u;
    // 0x247c38: 0xae000568  sw          $zero, 0x568($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1384), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x247C34u, 0x247C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C3Cu;
label_247c3c:
    // 0x247c3c: 0xc0e57ce  jal         func_395F38
label_247c40:
    if (ctx->pc == 0x247C40u) {
        ctx->pc = 0x247C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C3Cu;
        // 0x247c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247C44u;
        goto label_247c44;
    }
    ctx->pc = 0x247C3Cu;
    SET_GPR_U32(ctx, 31, 0x247C44u);
    ctx->pc = 0x247C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C3Cu;
    // 0x247c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x247C3Cu, 0x247C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C44u;
label_247c44:
    // 0x247c44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x247c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_247c48:
    // 0x247c48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x247c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247c4c:
    // 0x247c4c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x247c4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_247c50:
    // 0x247c50: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x247c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_247c54:
    // 0x247c54: 0x40f809  jalr        $v0
label_247c58:
    if (ctx->pc == 0x247C58u) {
        ctx->pc = 0x247C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C54u;
        // 0x247c58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247C5Cu;
        goto label_247c5c;
    }
    ctx->pc = 0x247C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247C5Cu);
        ctx->pc = 0x247C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C54u;
        // 0x247c58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247C54u, 0x247C5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247C5Cu;
label_247c5c:
    // 0x247c5c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x247c5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247c60:
    // 0x247c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247c64:
    // 0x247c64: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x247c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_247c68:
    // 0x247c68: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x247c68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_247c6c:
    // 0x247c6c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x247c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_247c70:
    // 0x247c70: 0x60f809  jalr        $v1
label_247c74:
    if (ctx->pc == 0x247C74u) {
        ctx->pc = 0x247C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C70u;
        // 0x247c74: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247C78u;
        goto label_247c78;
    }
    ctx->pc = 0x247C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x247C78u);
        ctx->pc = 0x247C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C70u;
        // 0x247c74: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247C70u, 0x247C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247C78u;
label_247c78:
    // 0x247c78: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x247c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_247c7c:
    // 0x247c7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x247c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_247c80:
    // 0x247c80: 0xae7100d0  sw          $s1, 0xD0($s3)
    ctx->pc = 0x247c80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 208), GPR_U32(ctx, 17));
label_247c84:
    // 0x247c84: 0xc0e44cc  jal         func_391330
label_247c88:
    if (ctx->pc == 0x247C88u) {
        ctx->pc = 0x247C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C84u;
        // 0x247c88: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247C8Cu;
        goto label_247c8c;
    }
    ctx->pc = 0x247C84u;
    SET_GPR_U32(ctx, 31, 0x247C8Cu);
    ctx->pc = 0x247C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247C84u;
    // 0x247c88: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x247C84u, 0x247C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C8Cu;
label_247c8c:
    // 0x247c8c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x247c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_247c90:
    // 0x247c90: 0x80510086  lb          $s1, 0x86($v0)
    ctx->pc = 0x247c90u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
label_247c94:
    // 0x247c94: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x247c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_247c98:
    // 0x247c98: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x247c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_247c9c:
    // 0x247c9c: 0x40f809  jalr        $v0
label_247ca0:
    if (ctx->pc == 0x247CA0u) {
        ctx->pc = 0x247CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C9Cu;
        // 0x247ca0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CA4u;
        goto label_247ca4;
    }
    ctx->pc = 0x247C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x247CA4u);
        ctx->pc = 0x247CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C9Cu;
        // 0x247ca0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247C9Cu, 0x247CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247CA4u;
label_247ca4:
    // 0x247ca4: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x247ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_247ca8:
    // 0x247ca8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x247ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_247cac:
    // 0x247cac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_247cb0:
    if (ctx->pc == 0x247CB0u) {
        ctx->pc = 0x247CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CACu;
        // 0x247cb0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CB4u;
        goto label_247cb4;
    }
    ctx->pc = 0x247CACu;
    {
        const bool branch_taken_0x247cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CACu;
        // 0x247cb0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247cac) {
            ctx->pc = 0x247CC4u;
            goto label_247cc4;
        }
    }
    ctx->pc = 0x247CB4u;
label_247cb4:
    // 0x247cb4: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x247cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_247cb8:
    // 0x247cb8: 0x16220019  bne         $s1, $v0, . + 4 + (0x19 << 2)
label_247cbc:
    if (ctx->pc == 0x247CBCu) {
        ctx->pc = 0x247CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CB8u;
        // 0x247cbc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CC0u;
        goto label_247cc0;
    }
    ctx->pc = 0x247CB8u;
    {
        const bool branch_taken_0x247cb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x247CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CB8u;
        // 0x247cbc: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247cb8) {
            ctx->pc = 0x247D20u;
            goto label_247d20;
        }
    }
    ctx->pc = 0x247CC0u;
label_247cc0:
    // 0x247cc0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x247cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_247cc4:
    // 0x247cc4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x247cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_247cc8:
    // 0x247cc8: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x247cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_247ccc:
    // 0x247ccc: 0x8ca47198  lw          $a0, 0x7198($a1)
    ctx->pc = 0x247cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 29080)));
label_247cd0:
    // 0x247cd0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x247cd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_247cd4:
    // 0x247cd4: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x247cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_247cd8:
    // 0x247cd8: 0xc0d0236  jal         func_3408D8
label_247cdc:
    if (ctx->pc == 0x247CDCu) {
        ctx->pc = 0x247CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CD8u;
        // 0x247cdc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CE0u;
        goto label_247ce0;
    }
    ctx->pc = 0x247CD8u;
    SET_GPR_U32(ctx, 31, 0x247CE0u);
    ctx->pc = 0x247CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CD8u;
    // 0x247cdc: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3408D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3408D8u, 0x247CD8u, 0x247CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CE0u;
label_247ce0:
    // 0x247ce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247ce4:
    // 0x247ce4: 0x120000a5  beqz        $s0, . + 4 + (0xA5 << 2)
label_247ce8:
    if (ctx->pc == 0x247CE8u) {
        ctx->pc = 0x247CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CE4u;
        // 0x247ce8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247CECu;
        goto label_247cec;
    }
    ctx->pc = 0x247CE4u;
    {
        const bool branch_taken_0x247ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CE4u;
        // 0x247ce8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ce4) {
            ctx->pc = 0x247F7Cu;
            goto label_247f7c;
        }
    }
    ctx->pc = 0x247CECu;
label_247cec:
    // 0x247cec: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x247cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_247cf0:
    // 0x247cf0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x247cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_247cf4:
    // 0x247cf4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x247cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_247cf8:
    // 0x247cf8: 0x60f809  jalr        $v1
label_247cfc:
    if (ctx->pc == 0x247CFCu) {
        ctx->pc = 0x247CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CF8u;
        // 0x247cfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D00u;
        goto label_247d00;
    }
    ctx->pc = 0x247CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x247D00u);
        ctx->pc = 0x247CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247CF8u;
        // 0x247cfc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247CF8u, 0x247D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247D00u;
label_247d00:
    // 0x247d00: 0xe6170040  swc1        $f23, 0x40($s0)
    ctx->pc = 0x247d00u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_247d04:
    // 0x247d04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247d08:
    // 0x247d08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247d0c:
    // 0x247d0c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x247d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_247d10:
    // 0x247d10: 0xc0d0856  jal         func_342158
label_247d14:
    if (ctx->pc == 0x247D14u) {
        ctx->pc = 0x247D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D10u;
        // 0x247d14: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D18u;
        goto label_247d18;
    }
    ctx->pc = 0x247D10u;
    SET_GPR_U32(ctx, 31, 0x247D18u);
    ctx->pc = 0x247D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D10u;
    // 0x247d14: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342158u, 0x247D10u, 0x247D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D18u;
label_247d18:
    // 0x247d18: 0x10000099  b           . + 4 + (0x99 << 2)
label_247d1c:
    if (ctx->pc == 0x247D1Cu) {
        ctx->pc = 0x247D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D18u;
        // 0x247d1c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D20u;
        goto label_247d20;
    }
    ctx->pc = 0x247D18u;
    {
        const bool branch_taken_0x247d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D18u;
        // 0x247d1c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247d18) {
            ctx->pc = 0x247F80u;
            goto label_247f80;
        }
    }
    ctx->pc = 0x247D20u;
label_247d20:
    // 0x247d20: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x247d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_247d24:
    // 0x247d24: 0x247516c0  addiu       $s5, $v1, 0x16C0
    ctx->pc = 0x247d24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
label_247d28:
    // 0x247d28: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x247d28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_247d2c:
    // 0x247d2c: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x247d2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_247d30:
    // 0x247d30: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x247d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_247d34:
    // 0x247d34: 0xc0e44cc  jal         func_391330
label_247d38:
    if (ctx->pc == 0x247D38u) {
        ctx->pc = 0x247D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D34u;
        // 0x247d38: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D3Cu;
        goto label_247d3c;
    }
    ctx->pc = 0x247D34u;
    SET_GPR_U32(ctx, 31, 0x247D3Cu);
    ctx->pc = 0x247D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D34u;
    // 0x247d38: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x247D34u, 0x247D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D3Cu;
label_247d3c:
    // 0x247d3c: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x247d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247d40:
    // 0x247d40: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x247d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_247d44:
    // 0x247d44: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x247d44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_247d48:
    // 0x247d48: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x247d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_247d4c:
    // 0x247d4c: 0xc0e44cc  jal         func_391330
label_247d50:
    if (ctx->pc == 0x247D50u) {
        ctx->pc = 0x247D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D4Cu;
        // 0x247d50: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D54u;
        goto label_247d54;
    }
    ctx->pc = 0x247D4Cu;
    SET_GPR_U32(ctx, 31, 0x247D54u);
    ctx->pc = 0x247D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D4Cu;
    // 0x247d50: 0x96450112  lhu         $a1, 0x112($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x247D4Cu, 0x247D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D54u;
label_247d54:
    // 0x247d54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x247d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_247d58:
    // 0x247d58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247d5c:
    // 0x247d5c: 0xc441007c  lwc1        $f1, 0x7C($v0)
    ctx->pc = 0x247d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247d60:
    // 0x247d60: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x247d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_247d64:
    // 0x247d64: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x247d64u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_247d68:
    // 0x247d68: 0xc0e44cc  jal         func_391330
label_247d6c:
    if (ctx->pc == 0x247D6Cu) {
        ctx->pc = 0x247D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D68u;
        // 0x247d6c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D70u;
        goto label_247d70;
    }
    ctx->pc = 0x247D68u;
    SET_GPR_U32(ctx, 31, 0x247D70u);
    ctx->pc = 0x247D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D68u;
    // 0x247d6c: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x247D68u, 0x247D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D70u;
label_247d70:
    // 0x247d70: 0x8e842c04  lw          $a0, 0x2C04($s4)
    ctx->pc = 0x247d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11268)));
label_247d74:
    // 0x247d74: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x247d74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_247d78:
    // 0x247d78: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x247d78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
label_247d7c:
    // 0x247d7c: 0xc0e44cc  jal         func_391330
label_247d80:
    if (ctx->pc == 0x247D80u) {
        ctx->pc = 0x247D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D7Cu;
        // 0x247d80: 0xc4540070  lwc1        $f20, 0x70($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D84u;
        goto label_247d84;
    }
    ctx->pc = 0x247D7Cu;
    SET_GPR_U32(ctx, 31, 0x247D84u);
    ctx->pc = 0x247D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D7Cu;
    // 0x247d80: 0xc4540070  lwc1        $f20, 0x70($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x247D7Cu, 0x247D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D84u;
label_247d84:
    // 0x247d84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x247d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247d88:
    // 0x247d88: 0xc0e45f6  jal         func_3917D8
label_247d8c:
    if (ctx->pc == 0x247D8Cu) {
        ctx->pc = 0x247D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D88u;
        // 0x247d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247D90u;
        goto label_247d90;
    }
    ctx->pc = 0x247D88u;
    SET_GPR_U32(ctx, 31, 0x247D90u);
    ctx->pc = 0x247D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D88u;
    // 0x247d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3917D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3917D8u, 0x247D88u, 0x247D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D90u;
label_247d90:
    // 0x247d90: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x247d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247d94:
    // 0x247d94: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x247d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_247d98:
    // 0x247d98: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x247d98u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_247d9c:
    // 0x247d9c: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_247da0:
    if (ctx->pc == 0x247DA0u) {
        ctx->pc = 0x247DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D9Cu;
        // 0x247da0: 0x4614ad40  add.s       $f21, $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x247DA4u;
        goto label_247da4;
    }
    ctx->pc = 0x247D9Cu;
    {
        const bool branch_taken_0x247d9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x247DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D9Cu;
        // 0x247da0: 0x4614ad40  add.s       $f21, $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247d9c) {
            ctx->pc = 0x247DC4u;
            goto label_247dc4;
        }
    }
    ctx->pc = 0x247DA4u;
label_247da4:
    // 0x247da4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x247da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247da8:
    // 0x247da8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x247da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_247dac:
    // 0x247dac: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x247dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_247db0:
    // 0x247db0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x247db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_247db4:
    // 0x247db4: 0x0  nop
    ctx->pc = 0x247db4u;
    // NOP
label_247db8:
    // 0x247db8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x247db8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_247dbc:
    // 0x247dbc: 0x4601ad40  add.s       $f21, $f21, $f1
    ctx->pc = 0x247dbcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_247dc0:
    // 0x247dc0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x247dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_247dc4:
    // 0x247dc4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x247dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247dc8:
    // 0x247dc8: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x247dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_247dcc:
    // 0x247dcc: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x247dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_247dd0:
    // 0x247dd0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x247dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_247dd4:
    // 0x247dd4: 0x46170500  add.s       $f20, $f0, $f23
    ctx->pc = 0x247dd4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_247dd8:
    // 0x247dd8: 0x8c647198  lw          $a0, 0x7198($v1)
    ctx->pc = 0x247dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29080)));
label_247ddc:
    // 0x247ddc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x247ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_247de0:
    // 0x247de0: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x247de0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_247de4:
    // 0x247de4: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x247de4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_247de8:
    // 0x247de8: 0xc0d0236  jal         func_3408D8
label_247dec:
    if (ctx->pc == 0x247DECu) {
        ctx->pc = 0x247DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247DE8u;
        // 0x247dec: 0x46170641  sub.s       $f25, $f0, $f23 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x247DF0u;
        goto label_247df0;
    }
    ctx->pc = 0x247DE8u;
    SET_GPR_U32(ctx, 31, 0x247DF0u);
    ctx->pc = 0x247DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247DE8u;
    // 0x247dec: 0x46170641  sub.s       $f25, $f0, $f23 (Delay Slot)
    ctx->f[25] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3408D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3408D8u, 0x247DE8u, 0x247DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247DF0u;
label_247df0:
    // 0x247df0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247df4:
    // 0x247df4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_247df8:
    if (ctx->pc == 0x247DF8u) {
        ctx->pc = 0x247DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247DF4u;
        // 0x247df8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247DFCu;
        goto label_247dfc;
    }
    ctx->pc = 0x247DF4u;
    {
        const bool branch_taken_0x247df4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247DF4u;
        // 0x247df8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247df4) {
            ctx->pc = 0x247E28u;
            goto label_247e28;
        }
    }
    ctx->pc = 0x247DFCu;
label_247dfc:
    // 0x247dfc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x247dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_247e00:
    // 0x247e00: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x247e00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_247e04:
    // 0x247e04: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x247e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_247e08:
    // 0x247e08: 0x60f809  jalr        $v1
label_247e0c:
    if (ctx->pc == 0x247E0Cu) {
        ctx->pc = 0x247E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E08u;
        // 0x247e0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E10u;
        goto label_247e10;
    }
    ctx->pc = 0x247E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x247E10u);
        ctx->pc = 0x247E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E08u;
        // 0x247e0c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E08u, 0x247E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247E10u;
label_247e10:
    // 0x247e10: 0xe6170040  swc1        $f23, 0x40($s0)
    ctx->pc = 0x247e10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_247e14:
    // 0x247e14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e18:
    // 0x247e18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247e1c:
    // 0x247e1c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x247e1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247e20:
    // 0x247e20: 0xc0d0856  jal         func_342158
label_247e24:
    if (ctx->pc == 0x247E24u) {
        ctx->pc = 0x247E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E20u;
        // 0x247e24: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E28u;
        goto label_247e28;
    }
    ctx->pc = 0x247E20u;
    SET_GPR_U32(ctx, 31, 0x247E28u);
    ctx->pc = 0x247E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E20u;
    // 0x247e24: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342158u, 0x247E20u, 0x247E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E28u;
label_247e28:
    // 0x247e28: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x247e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_247e2c:
    // 0x247e2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247e30:
    // 0x247e30: 0x4617cd81  sub.s       $f22, $f25, $f23
    ctx->pc = 0x247e30u;
    ctx->f[22] = FPU_SUB_S(ctx->f[25], ctx->f[23]);
label_247e34:
    // 0x247e34: 0x4600bd42  mul.s       $f21, $f23, $f0
    ctx->pc = 0x247e34u;
    ctx->f[21] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_247e38:
    // 0x247e38: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x247e38u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_247e3c:
    // 0x247e3c: 0x4614b001  sub.s       $f0, $f22, $f20
    ctx->pc = 0x247e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_247e40:
    // 0x247e40: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x247e40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247e44:
    // 0x247e44: 0x0  nop
    ctx->pc = 0x247e44u;
    // NOP
label_247e48:
    // 0x247e48: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_247e4c:
    if (ctx->pc == 0x247E4Cu) {
        ctx->pc = 0x247E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E48u;
        // 0x247e4c: 0x4617be00  add.s       $f24, $f23, $f23 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E50u;
        goto label_247e50;
    }
    ctx->pc = 0x247E48u;
    {
        const bool branch_taken_0x247e48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E48u;
        // 0x247e4c: 0x4617be00  add.s       $f24, $f23, $f23 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e48) {
            ctx->pc = 0x247EB8u;
            goto label_247eb8;
        }
    }
    ctx->pc = 0x247E50u;
label_247e50:
    // 0x247e50: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x247e50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_247e54:
    // 0x247e54: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x247e54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_247e58:
    // 0x247e58: 0x8e447198  lw          $a0, 0x7198($s2)
    ctx->pc = 0x247e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29080)));
label_247e5c:
    // 0x247e5c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x247e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_247e60:
    // 0x247e60: 0xc0d0236  jal         func_3408D8
label_247e64:
    if (ctx->pc == 0x247E64u) {
        ctx->pc = 0x247E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E60u;
        // 0x247e64: 0xe7b40014  swc1        $f20, 0x14($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E68u;
        goto label_247e68;
    }
    ctx->pc = 0x247E60u;
    SET_GPR_U32(ctx, 31, 0x247E68u);
    ctx->pc = 0x247E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E60u;
    // 0x247e64: 0xe7b40014  swc1        $f20, 0x14($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3408D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3408D8u, 0x247E60u, 0x247E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247E68u;
label_247e68:
    // 0x247e68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247e6c:
    // 0x247e6c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_247e70:
    if (ctx->pc == 0x247E70u) {
        ctx->pc = 0x247E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E6Cu;
        // 0x247e70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E74u;
        goto label_247e74;
    }
    ctx->pc = 0x247E6Cu;
    {
        const bool branch_taken_0x247e6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E6Cu;
        // 0x247e70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e6c) {
            ctx->pc = 0x247EA0u;
            goto label_247ea0;
        }
    }
    ctx->pc = 0x247E74u;
label_247e74:
    // 0x247e74: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x247e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_247e78:
    // 0x247e78: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x247e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_247e7c:
    // 0x247e7c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x247e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_247e80:
    // 0x247e80: 0x60f809  jalr        $v1
label_247e84:
    if (ctx->pc == 0x247E84u) {
        ctx->pc = 0x247E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E80u;
        // 0x247e84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247E88u;
        goto label_247e88;
    }
    ctx->pc = 0x247E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x247E88u);
        ctx->pc = 0x247E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E80u;
        // 0x247e84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247E80u, 0x247E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247E88u;
label_247e88:
    // 0x247e88: 0xe6170040  swc1        $f23, 0x40($s0)
    ctx->pc = 0x247e88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_247e8c:
    // 0x247e8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e90:
    // 0x247e90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247e94:
    // 0x247e94: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x247e94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247e98:
    // 0x247e98: 0xc0d0856  jal         func_342158
label_247e9c:
    if (ctx->pc == 0x247E9Cu) {
        ctx->pc = 0x247E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E98u;
        // 0x247e9c: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247EA0u;
        goto label_247ea0;
    }
    ctx->pc = 0x247E98u;
    SET_GPR_U32(ctx, 31, 0x247EA0u);
    ctx->pc = 0x247E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E98u;
    // 0x247e9c: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342158u, 0x247E98u, 0x247EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EA0u;
label_247ea0:
    // 0x247ea0: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x247ea0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_247ea4:
    // 0x247ea4: 0x4614b001  sub.s       $f0, $f22, $f20
    ctx->pc = 0x247ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_247ea8:
    // 0x247ea8: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x247ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247eac:
    // 0x247eac: 0x0  nop
    ctx->pc = 0x247eacu;
    // NOP
label_247eb0:
    // 0x247eb0: 0x4503ffe9  bc1tl       . + 4 + (-0x17 << 2)
label_247eb4:
    if (ctx->pc == 0x247EB4u) {
        ctx->pc = 0x247EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247EB0u;
        // 0x247eb4: 0x7a220000  lq          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247EB8u;
        goto label_247eb8;
    }
    ctx->pc = 0x247EB0u;
    {
        const bool branch_taken_0x247eb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247eb0) {
            ctx->pc = 0x247EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247EB0u;
            // 0x247eb4: 0x7a220000  lq          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247e58;
        }
    }
    ctx->pc = 0x247EB8u;
label_247eb8:
    // 0x247eb8: 0x4618a501  sub.s       $f20, $f20, $f24
    ctx->pc = 0x247eb8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[24]);
label_247ebc:
    // 0x247ebc: 0x4614b041  sub.s       $f1, $f22, $f20
    ctx->pc = 0x247ebcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_247ec0:
    // 0x247ec0: 0x4601b836  c.le.s      $f23, $f1
    ctx->pc = 0x247ec0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_247ec4:
    // 0x247ec4: 0x0  nop
    ctx->pc = 0x247ec4u;
    // NOP
label_247ec8:
    // 0x247ec8: 0x45000018  bc1f        . + 4 + (0x18 << 2)
label_247ecc:
    if (ctx->pc == 0x247ECCu) {
        ctx->pc = 0x247ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247EC8u;
        // 0x247ecc: 0x26c216c0  addiu       $v0, $s6, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247ED0u;
        goto label_247ed0;
    }
    ctx->pc = 0x247EC8u;
    {
        const bool branch_taken_0x247ec8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247EC8u;
        // 0x247ecc: 0x26c216c0  addiu       $v0, $s6, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ec8) {
            ctx->pc = 0x247F2Cu;
            goto label_247f2c;
        }
    }
    ctx->pc = 0x247ED0u;
label_247ed0:
    // 0x247ed0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x247ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_247ed4:
    // 0x247ed4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247ed8:
    // 0x247ed8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x247ed8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_247edc:
    // 0x247edc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x247edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_247ee0:
    // 0x247ee0: 0x8e447198  lw          $a0, 0x7198($s2)
    ctx->pc = 0x247ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29080)));
label_247ee4:
    // 0x247ee4: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x247ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_247ee8:
    // 0x247ee8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x247ee8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_247eec:
    // 0x247eec: 0xc0d0236  jal         func_3408D8
label_247ef0:
    if (ctx->pc == 0x247EF0u) {
        ctx->pc = 0x247EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247EECu;
        // 0x247ef0: 0xe7b40014  swc1        $f20, 0x14($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247EF4u;
        goto label_247ef4;
    }
    ctx->pc = 0x247EECu;
    SET_GPR_U32(ctx, 31, 0x247EF4u);
    ctx->pc = 0x247EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247EECu;
    // 0x247ef0: 0xe7b40014  swc1        $f20, 0x14($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3408D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3408D8u, 0x247EECu, 0x247EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EF4u;
label_247ef4:
    // 0x247ef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247ef8:
    // 0x247ef8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_247efc:
    if (ctx->pc == 0x247EFCu) {
        ctx->pc = 0x247EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247EF8u;
        // 0x247efc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247F00u;
        goto label_247f00;
    }
    ctx->pc = 0x247EF8u;
    {
        const bool branch_taken_0x247ef8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247EF8u;
        // 0x247efc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247ef8) {
            ctx->pc = 0x247F2Cu;
            goto label_247f2c;
        }
    }
    ctx->pc = 0x247F00u;
label_247f00:
    // 0x247f00: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x247f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_247f04:
    // 0x247f04: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x247f04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_247f08:
    // 0x247f08: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x247f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_247f0c:
    // 0x247f0c: 0x60f809  jalr        $v1
label_247f10:
    if (ctx->pc == 0x247F10u) {
        ctx->pc = 0x247F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F0Cu;
        // 0x247f10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247F14u;
        goto label_247f14;
    }
    ctx->pc = 0x247F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x247F14u);
        ctx->pc = 0x247F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F0Cu;
        // 0x247f10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F0Cu, 0x247F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247F14u;
label_247f14:
    // 0x247f14: 0xe6170040  swc1        $f23, 0x40($s0)
    ctx->pc = 0x247f14u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_247f18:
    // 0x247f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247f1c:
    // 0x247f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247f20:
    // 0x247f20: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x247f20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247f24:
    // 0x247f24: 0xc0d0856  jal         func_342158
label_247f28:
    if (ctx->pc == 0x247F28u) {
        ctx->pc = 0x247F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F24u;
        // 0x247f28: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247F2Cu;
        goto label_247f2c;
    }
    ctx->pc = 0x247F24u;
    SET_GPR_U32(ctx, 31, 0x247F2Cu);
    ctx->pc = 0x247F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F24u;
    // 0x247f28: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342158u, 0x247F24u, 0x247F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F2Cu;
label_247f2c:
    // 0x247f2c: 0x26c316c0  addiu       $v1, $s6, 0x16C0
    ctx->pc = 0x247f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 5824));
label_247f30:
    // 0x247f30: 0x8e447198  lw          $a0, 0x7198($s2)
    ctx->pc = 0x247f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29080)));
label_247f34:
    // 0x247f34: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x247f34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_247f38:
    // 0x247f38: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x247f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_247f3c:
    // 0x247f3c: 0xc0d0236  jal         func_3408D8
label_247f40:
    if (ctx->pc == 0x247F40u) {
        ctx->pc = 0x247F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F3Cu;
        // 0x247f40: 0xe7b90014  swc1        $f25, 0x14($sp) (Delay Slot)
        { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x247F44u;
        goto label_247f44;
    }
    ctx->pc = 0x247F3Cu;
    SET_GPR_U32(ctx, 31, 0x247F44u);
    ctx->pc = 0x247F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F3Cu;
    // 0x247f40: 0xe7b90014  swc1        $f25, 0x14($sp) (Delay Slot)
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3408D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3408D8u, 0x247F3Cu, 0x247F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F44u;
label_247f44:
    // 0x247f44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x247f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247f48:
    // 0x247f48: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_247f4c:
    if (ctx->pc == 0x247F4Cu) {
        ctx->pc = 0x247F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F48u;
        // 0x247f4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247F50u;
        goto label_247f50;
    }
    ctx->pc = 0x247F48u;
    {
        const bool branch_taken_0x247f48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x247F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F48u;
        // 0x247f4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f48) {
            ctx->pc = 0x247F7Cu;
            goto label_247f7c;
        }
    }
    ctx->pc = 0x247F50u;
label_247f50:
    // 0x247f50: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x247f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_247f54:
    // 0x247f54: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x247f54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_247f58:
    // 0x247f58: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x247f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_247f5c:
    // 0x247f5c: 0x60f809  jalr        $v1
label_247f60:
    if (ctx->pc == 0x247F60u) {
        ctx->pc = 0x247F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F5Cu;
        // 0x247f60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247F64u;
        goto label_247f64;
    }
    ctx->pc = 0x247F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x247F64u);
        ctx->pc = 0x247F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F5Cu;
        // 0x247f60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F5Cu, 0x247F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x247F64u;
label_247f64:
    // 0x247f64: 0xe6170040  swc1        $f23, 0x40($s0)
    ctx->pc = 0x247f64u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_247f68:
    // 0x247f68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247f6c:
    // 0x247f6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x247f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247f70:
    // 0x247f70: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x247f70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247f74:
    // 0x247f74: 0xc0d0856  jal         func_342158
label_247f78:
    if (ctx->pc == 0x247F78u) {
        ctx->pc = 0x247F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F74u;
        // 0x247f78: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247F7Cu;
        goto label_247f7c;
    }
    ctx->pc = 0x247F74u;
    SET_GPR_U32(ctx, 31, 0x247F7Cu);
    ctx->pc = 0x247F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F74u;
    // 0x247f78: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342158u, 0x247F74u, 0x247F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F7Cu;
label_247f7c:
    // 0x247f7c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x247f7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_247f80:
    // 0x247f80: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x247f80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_247f84:
    // 0x247f84: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x247f84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_247f88:
    // 0x247f88: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x247f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_247f8c:
    // 0x247f8c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x247f8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_247f90:
    // 0x247f90: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x247f90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_247f94:
    // 0x247f94: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x247f94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_247f98:
    // 0x247f98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x247f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_247f9c:
    // 0x247f9c: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x247f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_247fa0:
    // 0x247fa0: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x247fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_247fa4:
    // 0x247fa4: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x247fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_247fa8:
    // 0x247fa8: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x247fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_247fac:
    // 0x247fac: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x247facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_247fb0:
    // 0x247fb0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x247fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_247fb4:
    // 0x247fb4: 0x3e00008  jr          $ra
label_247fb8:
    if (ctx->pc == 0x247FB8u) {
        ctx->pc = 0x247FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FB4u;
        // 0x247fb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x247FBCu;
        goto label_247fbc;
    }
    ctx->pc = 0x247FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247FB4u;
        // 0x247fb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247FBCu;
label_247fbc:
    // 0x247fbc: 0x0  nop
    ctx->pc = 0x247fbcu;
    // NOP
    ctx->pc = 0x247fc0u;
}
