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

// Function: sub_00135CA8
// Address: 0x135ca8 - 0x136040
void sub_00135CA8_0x135ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135CA8_0x135ca8");
#endif

    switch (ctx->pc) {
        case 0x135ca8u: goto label_135ca8;
        case 0x135cacu: goto label_135cac;
        case 0x135cb0u: goto label_135cb0;
        case 0x135cb4u: goto label_135cb4;
        case 0x135cb8u: goto label_135cb8;
        case 0x135cbcu: goto label_135cbc;
        case 0x135cc0u: goto label_135cc0;
        case 0x135cc4u: goto label_135cc4;
        case 0x135cc8u: goto label_135cc8;
        case 0x135cccu: goto label_135ccc;
        case 0x135cd0u: goto label_135cd0;
        case 0x135cd4u: goto label_135cd4;
        case 0x135cd8u: goto label_135cd8;
        case 0x135cdcu: goto label_135cdc;
        case 0x135ce0u: goto label_135ce0;
        case 0x135ce4u: goto label_135ce4;
        case 0x135ce8u: goto label_135ce8;
        case 0x135cecu: goto label_135cec;
        case 0x135cf0u: goto label_135cf0;
        case 0x135cf4u: goto label_135cf4;
        case 0x135cf8u: goto label_135cf8;
        case 0x135cfcu: goto label_135cfc;
        case 0x135d00u: goto label_135d00;
        case 0x135d04u: goto label_135d04;
        case 0x135d08u: goto label_135d08;
        case 0x135d0cu: goto label_135d0c;
        case 0x135d10u: goto label_135d10;
        case 0x135d14u: goto label_135d14;
        case 0x135d18u: goto label_135d18;
        case 0x135d1cu: goto label_135d1c;
        case 0x135d20u: goto label_135d20;
        case 0x135d24u: goto label_135d24;
        case 0x135d28u: goto label_135d28;
        case 0x135d2cu: goto label_135d2c;
        case 0x135d30u: goto label_135d30;
        case 0x135d34u: goto label_135d34;
        case 0x135d38u: goto label_135d38;
        case 0x135d3cu: goto label_135d3c;
        case 0x135d40u: goto label_135d40;
        case 0x135d44u: goto label_135d44;
        case 0x135d48u: goto label_135d48;
        case 0x135d4cu: goto label_135d4c;
        case 0x135d50u: goto label_135d50;
        case 0x135d54u: goto label_135d54;
        case 0x135d58u: goto label_135d58;
        case 0x135d5cu: goto label_135d5c;
        case 0x135d60u: goto label_135d60;
        case 0x135d64u: goto label_135d64;
        case 0x135d68u: goto label_135d68;
        case 0x135d6cu: goto label_135d6c;
        case 0x135d70u: goto label_135d70;
        case 0x135d74u: goto label_135d74;
        case 0x135d78u: goto label_135d78;
        case 0x135d7cu: goto label_135d7c;
        case 0x135d80u: goto label_135d80;
        case 0x135d84u: goto label_135d84;
        case 0x135d88u: goto label_135d88;
        case 0x135d8cu: goto label_135d8c;
        case 0x135d90u: goto label_135d90;
        case 0x135d94u: goto label_135d94;
        case 0x135d98u: goto label_135d98;
        case 0x135d9cu: goto label_135d9c;
        case 0x135da0u: goto label_135da0;
        case 0x135da4u: goto label_135da4;
        case 0x135da8u: goto label_135da8;
        case 0x135dacu: goto label_135dac;
        case 0x135db0u: goto label_135db0;
        case 0x135db4u: goto label_135db4;
        case 0x135db8u: goto label_135db8;
        case 0x135dbcu: goto label_135dbc;
        case 0x135dc0u: goto label_135dc0;
        case 0x135dc4u: goto label_135dc4;
        case 0x135dc8u: goto label_135dc8;
        case 0x135dccu: goto label_135dcc;
        case 0x135dd0u: goto label_135dd0;
        case 0x135dd4u: goto label_135dd4;
        case 0x135dd8u: goto label_135dd8;
        case 0x135ddcu: goto label_135ddc;
        case 0x135de0u: goto label_135de0;
        case 0x135de4u: goto label_135de4;
        case 0x135de8u: goto label_135de8;
        case 0x135decu: goto label_135dec;
        case 0x135df0u: goto label_135df0;
        case 0x135df4u: goto label_135df4;
        case 0x135df8u: goto label_135df8;
        case 0x135dfcu: goto label_135dfc;
        case 0x135e00u: goto label_135e00;
        case 0x135e04u: goto label_135e04;
        case 0x135e08u: goto label_135e08;
        case 0x135e0cu: goto label_135e0c;
        case 0x135e10u: goto label_135e10;
        case 0x135e14u: goto label_135e14;
        case 0x135e18u: goto label_135e18;
        case 0x135e1cu: goto label_135e1c;
        case 0x135e20u: goto label_135e20;
        case 0x135e24u: goto label_135e24;
        case 0x135e28u: goto label_135e28;
        case 0x135e2cu: goto label_135e2c;
        case 0x135e30u: goto label_135e30;
        case 0x135e34u: goto label_135e34;
        case 0x135e38u: goto label_135e38;
        case 0x135e3cu: goto label_135e3c;
        case 0x135e40u: goto label_135e40;
        case 0x135e44u: goto label_135e44;
        case 0x135e48u: goto label_135e48;
        case 0x135e4cu: goto label_135e4c;
        case 0x135e50u: goto label_135e50;
        case 0x135e54u: goto label_135e54;
        case 0x135e58u: goto label_135e58;
        case 0x135e5cu: goto label_135e5c;
        case 0x135e60u: goto label_135e60;
        case 0x135e64u: goto label_135e64;
        case 0x135e68u: goto label_135e68;
        case 0x135e6cu: goto label_135e6c;
        case 0x135e70u: goto label_135e70;
        case 0x135e74u: goto label_135e74;
        case 0x135e78u: goto label_135e78;
        case 0x135e7cu: goto label_135e7c;
        case 0x135e80u: goto label_135e80;
        case 0x135e84u: goto label_135e84;
        case 0x135e88u: goto label_135e88;
        case 0x135e8cu: goto label_135e8c;
        case 0x135e90u: goto label_135e90;
        case 0x135e94u: goto label_135e94;
        case 0x135e98u: goto label_135e98;
        case 0x135e9cu: goto label_135e9c;
        case 0x135ea0u: goto label_135ea0;
        case 0x135ea4u: goto label_135ea4;
        case 0x135ea8u: goto label_135ea8;
        case 0x135eacu: goto label_135eac;
        case 0x135eb0u: goto label_135eb0;
        case 0x135eb4u: goto label_135eb4;
        case 0x135eb8u: goto label_135eb8;
        case 0x135ebcu: goto label_135ebc;
        case 0x135ec0u: goto label_135ec0;
        case 0x135ec4u: goto label_135ec4;
        case 0x135ec8u: goto label_135ec8;
        case 0x135eccu: goto label_135ecc;
        case 0x135ed0u: goto label_135ed0;
        case 0x135ed4u: goto label_135ed4;
        case 0x135ed8u: goto label_135ed8;
        case 0x135edcu: goto label_135edc;
        case 0x135ee0u: goto label_135ee0;
        case 0x135ee4u: goto label_135ee4;
        case 0x135ee8u: goto label_135ee8;
        case 0x135eecu: goto label_135eec;
        case 0x135ef0u: goto label_135ef0;
        case 0x135ef4u: goto label_135ef4;
        case 0x135ef8u: goto label_135ef8;
        case 0x135efcu: goto label_135efc;
        case 0x135f00u: goto label_135f00;
        case 0x135f04u: goto label_135f04;
        case 0x135f08u: goto label_135f08;
        case 0x135f0cu: goto label_135f0c;
        case 0x135f10u: goto label_135f10;
        case 0x135f14u: goto label_135f14;
        case 0x135f18u: goto label_135f18;
        case 0x135f1cu: goto label_135f1c;
        case 0x135f20u: goto label_135f20;
        case 0x135f24u: goto label_135f24;
        case 0x135f28u: goto label_135f28;
        case 0x135f2cu: goto label_135f2c;
        case 0x135f30u: goto label_135f30;
        case 0x135f34u: goto label_135f34;
        case 0x135f38u: goto label_135f38;
        case 0x135f3cu: goto label_135f3c;
        case 0x135f40u: goto label_135f40;
        case 0x135f44u: goto label_135f44;
        case 0x135f48u: goto label_135f48;
        case 0x135f4cu: goto label_135f4c;
        case 0x135f50u: goto label_135f50;
        case 0x135f54u: goto label_135f54;
        case 0x135f58u: goto label_135f58;
        case 0x135f5cu: goto label_135f5c;
        case 0x135f60u: goto label_135f60;
        case 0x135f64u: goto label_135f64;
        case 0x135f68u: goto label_135f68;
        case 0x135f6cu: goto label_135f6c;
        case 0x135f70u: goto label_135f70;
        case 0x135f74u: goto label_135f74;
        case 0x135f78u: goto label_135f78;
        case 0x135f7cu: goto label_135f7c;
        case 0x135f80u: goto label_135f80;
        case 0x135f84u: goto label_135f84;
        case 0x135f88u: goto label_135f88;
        case 0x135f8cu: goto label_135f8c;
        case 0x135f90u: goto label_135f90;
        case 0x135f94u: goto label_135f94;
        case 0x135f98u: goto label_135f98;
        case 0x135f9cu: goto label_135f9c;
        case 0x135fa0u: goto label_135fa0;
        case 0x135fa4u: goto label_135fa4;
        case 0x135fa8u: goto label_135fa8;
        case 0x135facu: goto label_135fac;
        case 0x135fb0u: goto label_135fb0;
        case 0x135fb4u: goto label_135fb4;
        case 0x135fb8u: goto label_135fb8;
        case 0x135fbcu: goto label_135fbc;
        case 0x135fc0u: goto label_135fc0;
        case 0x135fc4u: goto label_135fc4;
        case 0x135fc8u: goto label_135fc8;
        case 0x135fccu: goto label_135fcc;
        case 0x135fd0u: goto label_135fd0;
        case 0x135fd4u: goto label_135fd4;
        case 0x135fd8u: goto label_135fd8;
        case 0x135fdcu: goto label_135fdc;
        case 0x135fe0u: goto label_135fe0;
        case 0x135fe4u: goto label_135fe4;
        case 0x135fe8u: goto label_135fe8;
        case 0x135fecu: goto label_135fec;
        case 0x135ff0u: goto label_135ff0;
        case 0x135ff4u: goto label_135ff4;
        case 0x135ff8u: goto label_135ff8;
        case 0x135ffcu: goto label_135ffc;
        case 0x136000u: goto label_136000;
        case 0x136004u: goto label_136004;
        case 0x136008u: goto label_136008;
        case 0x13600cu: goto label_13600c;
        case 0x136010u: goto label_136010;
        case 0x136014u: goto label_136014;
        case 0x136018u: goto label_136018;
        case 0x13601cu: goto label_13601c;
        case 0x136020u: goto label_136020;
        case 0x136024u: goto label_136024;
        case 0x136028u: goto label_136028;
        case 0x13602cu: goto label_13602c;
        case 0x136030u: goto label_136030;
        case 0x136034u: goto label_136034;
        case 0x136038u: goto label_136038;
        case 0x13603cu: goto label_13603c;
        default: break;
    }

    ctx->pc = 0x135ca8u;

label_135ca8:
    // 0x135ca8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x135ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_135cac:
    // 0x135cac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x135cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_135cb0:
    // 0x135cb0: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x135cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_135cb4:
    // 0x135cb4: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x135cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_135cb8:
    // 0x135cb8: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x135cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_135cbc:
    // 0x135cbc: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x135cbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_135cc0:
    // 0x135cc0: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x135cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
label_135cc4:
    // 0x135cc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x135cc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135cc8:
    // 0x135cc8: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x135cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
label_135ccc:
    // 0x135ccc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x135cccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135cd0:
    // 0x135cd0: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x135cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_135cd4:
    // 0x135cd4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x135cd4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135cd8:
    // 0x135cd8: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x135cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_135cdc:
    // 0x135cdc: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x135cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
label_135ce0:
    // 0x135ce0: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x135ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
label_135ce4:
    // 0x135ce4: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x135ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_135ce8:
    // 0x135ce8: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x135ce8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_135cec:
    // 0x135cec: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x135cecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_135cf0:
    // 0x135cf0: 0x8c4347c4  lw          $v1, 0x47C4($v0)
    ctx->pc = 0x135cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
label_135cf4:
    // 0x135cf4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x135cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_135cf8:
    // 0x135cf8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x135cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_135cfc:
    // 0x135cfc: 0x84a40220  lh          $a0, 0x220($a1)
    ctx->pc = 0x135cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 544)));
label_135d00:
    // 0x135d00: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x135d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_135d04:
    // 0x135d04: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x135d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_135d08:
    // 0x135d08: 0x8ca20224  lw          $v0, 0x224($a1)
    ctx->pc = 0x135d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
label_135d0c:
    // 0x135d0c: 0x40f809  jalr        $v0
label_135d10:
    if (ctx->pc == 0x135D10u) {
        ctx->pc = 0x135D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D0Cu;
        // 0x135d10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D14u;
        goto label_135d14;
    }
    ctx->pc = 0x135D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135D14u);
        ctx->pc = 0x135D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D0Cu;
        // 0x135d10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135D0Cu, 0x135D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135D14u;
label_135d14:
    // 0x135d14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135d18:
    // 0x135d18: 0xc0cd8ec  jal         func_3363B0
label_135d1c:
    if (ctx->pc == 0x135D1Cu) {
        ctx->pc = 0x135D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D18u;
        // 0x135d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D20u;
        goto label_135d20;
    }
    ctx->pc = 0x135D18u;
    SET_GPR_U32(ctx, 31, 0x135D20u);
    ctx->pc = 0x135D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D18u;
    // 0x135d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x135D18u, 0x135D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D20u;
label_135d20:
    // 0x135d20: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x135d20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_135d24:
    // 0x135d24: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x135d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_135d28:
    // 0x135d28: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x135d28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_135d2c:
    // 0x135d2c: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x135d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_135d30:
    // 0x135d30: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x135d30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_135d34:
    // 0x135d34: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x135d34u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_135d38:
    // 0x135d38: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x135d38u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_135d3c:
    // 0x135d3c: 0x4a0003bf  vwaitq
    ctx->pc = 0x135d3cu;
    // VWAITQ (Q already resolved in this runtime)
label_135d40:
    // 0x135d40: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x135d40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_135d44:
    // 0x135d44: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x135d44u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_135d48:
    // 0x135d48: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x135d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_135d4c:
    // 0x135d4c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x135d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_135d50:
    // 0x135d50: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x135d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_135d54:
    // 0x135d54: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x135d54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_135d58:
    // 0x135d58: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x135d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_135d5c:
    // 0x135d5c: 0x40f809  jalr        $v0
label_135d60:
    if (ctx->pc == 0x135D60u) {
        ctx->pc = 0x135D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D5Cu;
        // 0x135d60: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D64u;
        goto label_135d64;
    }
    ctx->pc = 0x135D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135D64u);
        ctx->pc = 0x135D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D5Cu;
        // 0x135d60: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135D5Cu, 0x135D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135D64u;
label_135d64:
    // 0x135d64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x135d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_135d68:
    // 0x135d68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x135d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_135d6c:
    // 0x135d6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x135d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135d70:
    // 0x135d70: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x135d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_135d74:
    // 0x135d74: 0xc136b24  jal         func_4DAC90
label_135d78:
    if (ctx->pc == 0x135D78u) {
        ctx->pc = 0x135D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D74u;
        // 0x135d78: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D7Cu;
        goto label_135d7c;
    }
    ctx->pc = 0x135D74u;
    SET_GPR_U32(ctx, 31, 0x135D7Cu);
    ctx->pc = 0x135D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D74u;
    // 0x135d78: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x135D74u, 0x135D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D7Cu;
label_135d7c:
    // 0x135d7c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x135d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_135d80:
    // 0x135d80: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x135d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_135d84:
    // 0x135d84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135d88:
    // 0x135d88: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x135d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_135d8c:
    // 0x135d8c: 0xc136b18  jal         func_4DAC60
label_135d90:
    if (ctx->pc == 0x135D90u) {
        ctx->pc = 0x135D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135D8Cu;
        // 0x135d90: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135D94u;
        goto label_135d94;
    }
    ctx->pc = 0x135D8Cu;
    SET_GPR_U32(ctx, 31, 0x135D94u);
    ctx->pc = 0x135D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135D8Cu;
    // 0x135d90: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x135D8Cu, 0x135D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135D94u;
label_135d94:
    // 0x135d94: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x135d94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_135d98:
    // 0x135d98: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x135d98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_135d9c:
    // 0x135d9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x135d9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_135da0:
    // 0x135da0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x135da0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_135da4:
    // 0x135da4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x135da4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135da8:
    // 0x135da8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x135da8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135dac:
    // 0x135dac: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x135dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_135db0:
    // 0x135db0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x135db0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_135db4:
    // 0x135db4: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x135db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_135db8:
    // 0x135db8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x135db8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_135dbc:
    // 0x135dbc: 0x0  nop
    ctx->pc = 0x135dbcu;
    // NOP
label_135dc0:
    // 0x135dc0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x135dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_135dc4:
    // 0x135dc4: 0x10000081  b           . + 4 + (0x81 << 2)
label_135dc8:
    if (ctx->pc == 0x135DC8u) {
        ctx->pc = 0x135DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DC4u;
        // 0x135dc8: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135DCCu;
        goto label_135dcc;
    }
    ctx->pc = 0x135DC4u;
    {
        const bool branch_taken_0x135dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DC4u;
        // 0x135dc8: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135dc4) {
            ctx->pc = 0x135FCCu;
            goto label_135fcc;
        }
    }
    ctx->pc = 0x135DCCu;
label_135dcc:
    // 0x135dcc: 0x0  nop
    ctx->pc = 0x135dccu;
    // NOP
label_135dd0:
    // 0x135dd0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x135dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_135dd4:
    // 0x135dd4: 0x86900002  lh          $s0, 0x2($s4)
    ctx->pc = 0x135dd4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_135dd8:
    // 0x135dd8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x135dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_135ddc:
    // 0x135ddc: 0x24721740  addiu       $s2, $v1, 0x1740
    ctx->pc = 0x135ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_135de0:
    // 0x135de0: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x135de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_135de4:
    // 0x135de4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x135de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_135de8:
    // 0x135de8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x135de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_135dec:
    // 0x135dec: 0x24564b00  addiu       $s6, $v0, 0x4B00
    ctx->pc = 0x135decu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_135df0:
    // 0x135df0: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x135df0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_135df4:
    // 0x135df4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x135df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_135df8:
    // 0x135df8: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x135df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_135dfc:
    // 0x135dfc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x135dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_135e00:
    // 0x135e00: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x135e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_135e04:
    // 0x135e04: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x135e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_135e08:
    // 0x135e08: 0xc136b24  jal         func_4DAC90
label_135e0c:
    if (ctx->pc == 0x135E0Cu) {
        ctx->pc = 0x135E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E08u;
        // 0x135e0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E10u;
        goto label_135e10;
    }
    ctx->pc = 0x135E08u;
    SET_GPR_U32(ctx, 31, 0x135E10u);
    ctx->pc = 0x135E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E08u;
    // 0x135e0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x135E08u, 0x135E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E10u;
label_135e10:
    // 0x135e10: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x135e10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_135e14:
    // 0x135e14: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x135e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_135e18:
    // 0x135e18: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x135e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_135e1c:
    // 0x135e1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135e20:
    // 0x135e20: 0xc136b18  jal         func_4DAC60
label_135e24:
    if (ctx->pc == 0x135E24u) {
        ctx->pc = 0x135E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E20u;
        // 0x135e24: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E28u;
        goto label_135e28;
    }
    ctx->pc = 0x135E20u;
    SET_GPR_U32(ctx, 31, 0x135E28u);
    ctx->pc = 0x135E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E20u;
    // 0x135e24: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x135E20u, 0x135E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E28u;
label_135e28:
    // 0x135e28: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x135e28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_135e2c:
    // 0x135e2c: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x135e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_135e30:
    // 0x135e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135e34:
    // 0x135e34: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x135e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_135e38:
    // 0x135e38: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x135e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_135e3c:
    // 0x135e3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x135e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_135e40:
    // 0x135e40: 0x84650098  lh          $a1, 0x98($v1)
    ctx->pc = 0x135e40u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_135e44:
    // 0x135e44: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x135e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_135e48:
    // 0x135e48: 0x40f809  jalr        $v0
label_135e4c:
    if (ctx->pc == 0x135E4Cu) {
        ctx->pc = 0x135E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E48u;
        // 0x135e4c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E50u;
        goto label_135e50;
    }
    ctx->pc = 0x135E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135E50u);
        ctx->pc = 0x135E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E48u;
        // 0x135e4c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135E48u, 0x135E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135E50u;
label_135e50:
    // 0x135e50: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x135e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_135e54:
    // 0x135e54: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x135e54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_135e58:
    // 0x135e58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x135e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_135e5c:
    // 0x135e5c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x135e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_135e60:
    // 0x135e60: 0xc136b24  jal         func_4DAC90
label_135e64:
    if (ctx->pc == 0x135E64u) {
        ctx->pc = 0x135E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E60u;
        // 0x135e64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E68u;
        goto label_135e68;
    }
    ctx->pc = 0x135E60u;
    SET_GPR_U32(ctx, 31, 0x135E68u);
    ctx->pc = 0x135E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E60u;
    // 0x135e64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x135E60u, 0x135E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E68u;
label_135e68:
    // 0x135e68: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x135e68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_135e6c:
    // 0x135e6c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x135e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_135e70:
    // 0x135e70: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x135e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_135e74:
    // 0x135e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x135e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135e78:
    // 0x135e78: 0xc136b18  jal         func_4DAC60
label_135e7c:
    if (ctx->pc == 0x135E7Cu) {
        ctx->pc = 0x135E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E78u;
        // 0x135e7c: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135E80u;
        goto label_135e80;
    }
    ctx->pc = 0x135E78u;
    SET_GPR_U32(ctx, 31, 0x135E80u);
    ctx->pc = 0x135E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E78u;
    // 0x135e7c: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x135E78u, 0x135E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135E80u;
label_135e80:
    // 0x135e80: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x135e80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_135e84:
    // 0x135e84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x135e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_135e88:
    // 0x135e88: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x135e88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_135e8c:
    // 0x135e8c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x135e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_135e90:
    // 0x135e90: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x135e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_135e94:
    // 0x135e94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x135e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_135e98:
    // 0x135e98: 0xc04d658  jal         func_135960
label_135e9c:
    if (ctx->pc == 0x135E9Cu) {
        ctx->pc = 0x135E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E98u;
        // 0x135e9c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EA0u;
        goto label_135ea0;
    }
    ctx->pc = 0x135E98u;
    SET_GPR_U32(ctx, 31, 0x135EA0u);
    ctx->pc = 0x135E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135E98u;
    // 0x135e9c: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135960u, 0x135E98u, 0x135EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135EA0u;
label_135ea0:
    // 0x135ea0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x135ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_135ea4:
    // 0x135ea4: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x135ea4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_135ea8:
    // 0x135ea8: 0x12e00047  beqz        $s7, . + 4 + (0x47 << 2)
label_135eac:
    if (ctx->pc == 0x135EACu) {
        ctx->pc = 0x135EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EA8u;
        // 0x135eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EB0u;
        goto label_135eb0;
    }
    ctx->pc = 0x135EA8u;
    {
        const bool branch_taken_0x135ea8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x135EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EA8u;
        // 0x135eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ea8) {
            ctx->pc = 0x135FC8u;
            goto label_135fc8;
        }
    }
    ctx->pc = 0x135EB0u;
label_135eb0:
    // 0x135eb0: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x135eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_135eb4:
    // 0x135eb4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x135eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_135eb8:
    // 0x135eb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x135eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_135ebc:
    // 0x135ebc: 0xc136b24  jal         func_4DAC90
label_135ec0:
    if (ctx->pc == 0x135EC0u) {
        ctx->pc = 0x135EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135EBCu;
        // 0x135ec0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EC4u;
        goto label_135ec4;
    }
    ctx->pc = 0x135EBCu;
    SET_GPR_U32(ctx, 31, 0x135EC4u);
    ctx->pc = 0x135EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135EBCu;
    // 0x135ec0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x135EBCu, 0x135EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135EC4u;
label_135ec4:
    // 0x135ec4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x135ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_135ec8:
    // 0x135ec8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x135ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_135ecc:
    // 0x135ecc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x135eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_135ed0:
    // 0x135ed0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x135ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_135ed4:
    // 0x135ed4: 0xc136afa  jal         func_4DABE8
label_135ed8:
    if (ctx->pc == 0x135ED8u) {
        ctx->pc = 0x135ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135ED4u;
        // 0x135ed8: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135EDCu;
        goto label_135edc;
    }
    ctx->pc = 0x135ED4u;
    SET_GPR_U32(ctx, 31, 0x135EDCu);
    ctx->pc = 0x135ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135ED4u;
    // 0x135ed8: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x135ED4u, 0x135EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135EDCu;
label_135edc:
    // 0x135edc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x135edcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_135ee0:
    // 0x135ee0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x135ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_135ee4:
    // 0x135ee4: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x135ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_135ee8:
    // 0x135ee8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x135ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_135eec:
    // 0x135eec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x135eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_135ef0:
    // 0x135ef0: 0x24631770  addiu       $v1, $v1, 0x1770
    ctx->pc = 0x135ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
label_135ef4:
    // 0x135ef4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x135ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_135ef8:
    // 0x135ef8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x135ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_135efc:
    // 0x135efc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x135efcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_135f00:
    // 0x135f00: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x135f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_135f04:
    // 0x135f04: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x135f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135f08:
    // 0x135f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x135f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135f0c:
    // 0x135f0c: 0x3c014059  lui         $at, 0x4059
    ctx->pc = 0x135f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16473 << 16));
label_135f10:
    // 0x135f10: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x135f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_135f14:
    // 0x135f14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x135f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_135f18:
    // 0x135f18: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x135f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_135f1c:
    // 0x135f1c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x135f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_135f20:
    // 0x135f20: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x135f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_135f24:
    // 0x135f24: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x135f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_135f28:
    // 0x135f28: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x135f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_135f2c:
    // 0x135f2c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x135f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_135f30:
    // 0x135f30: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x135f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_135f34:
    // 0x135f34: 0xc0d4336  jal         func_350CD8
label_135f38:
    if (ctx->pc == 0x135F38u) {
        ctx->pc = 0x135F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F34u;
        // 0x135f38: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F3Cu;
        goto label_135f3c;
    }
    ctx->pc = 0x135F34u;
    SET_GPR_U32(ctx, 31, 0x135F3Cu);
    ctx->pc = 0x135F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F34u;
    // 0x135f38: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x350CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350CD8u, 0x135F34u, 0x135F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F3Cu;
label_135f3c:
    // 0x135f3c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x135f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_135f40:
    // 0x135f40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_135f44:
    if (ctx->pc == 0x135F44u) {
        ctx->pc = 0x135F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F40u;
        // 0x135f44: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F48u;
        goto label_135f48;
    }
    ctx->pc = 0x135F40u;
    {
        const bool branch_taken_0x135f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F40u;
        // 0x135f44: 0xc7a00064  lwc1        $f0, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f40) {
            ctx->pc = 0x135F64u;
            goto label_135f64;
        }
    }
    ctx->pc = 0x135F48u;
label_135f48:
    // 0x135f48: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x135f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_135f4c:
    // 0x135f4c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x135f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_135f50:
    // 0x135f50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x135f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_135f54:
    // 0x135f54: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x135f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135f58:
    // 0x135f58: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x135f58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_135f5c:
    // 0x135f5c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x135f5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_135f60:
    // 0x135f60: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x135f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_135f64:
    // 0x135f64: 0xc089fe4  jal         func_227F90
label_135f68:
    if (ctx->pc == 0x135F68u) {
        ctx->pc = 0x135F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F64u;
        // 0x135f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F6Cu;
        goto label_135f6c;
    }
    ctx->pc = 0x135F64u;
    SET_GPR_U32(ctx, 31, 0x135F6Cu);
    ctx->pc = 0x135F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F64u;
    // 0x135f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x135F64u, 0x135F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F6Cu;
label_135f6c:
    // 0x135f6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_135f70:
    if (ctx->pc == 0x135F70u) {
        ctx->pc = 0x135F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F6Cu;
        // 0x135f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F74u;
        goto label_135f74;
    }
    ctx->pc = 0x135F6Cu;
    {
        const bool branch_taken_0x135f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F6Cu;
        // 0x135f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135f6c) {
            ctx->pc = 0x135F94u;
            goto label_135f94;
        }
    }
    ctx->pc = 0x135F74u;
label_135f74:
    // 0x135f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_135f78:
    // 0x135f78: 0xc08f824  jal         func_23E090
label_135f7c:
    if (ctx->pc == 0x135F7Cu) {
        ctx->pc = 0x135F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135F78u;
        // 0x135f7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135F80u;
        goto label_135f80;
    }
    ctx->pc = 0x135F78u;
    SET_GPR_U32(ctx, 31, 0x135F80u);
    ctx->pc = 0x135F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135F78u;
    // 0x135f7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E090u, 0x135F78u, 0x135F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135F80u;
label_135f80:
    // 0x135f80: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x135f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_135f84:
    // 0x135f84: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x135f84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_135f88:
    // 0x135f88: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x135f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_135f8c:
    // 0x135f8c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x135f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_135f90:
    // 0x135f90: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x135f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_135f94:
    // 0x135f94: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x135f94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_135f98:
    // 0x135f98: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x135f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_135f9c:
    // 0x135f9c: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x135f9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_135fa0:
    // 0x135fa0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x135fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_135fa4:
    // 0x135fa4: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x135fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
label_135fa8:
    // 0x135fa8: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x135fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_135fac:
    // 0x135fac: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x135facu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_135fb0:
    // 0x135fb0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x135fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_135fb4:
    // 0x135fb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x135fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_135fb8:
    // 0x135fb8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x135fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_135fbc:
    // 0x135fbc: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x135fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_135fc0:
    // 0x135fc0: 0x40f809  jalr        $v0
label_135fc4:
    if (ctx->pc == 0x135FC4u) {
        ctx->pc = 0x135FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FC0u;
        // 0x135fc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135FC8u;
        goto label_135fc8;
    }
    ctx->pc = 0x135FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135FC8u);
        ctx->pc = 0x135FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FC0u;
        // 0x135fc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135FC0u, 0x135FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135FC8u;
label_135fc8:
    // 0x135fc8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x135fc8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_135fcc:
    // 0x135fcc: 0x2670020c  addiu       $s0, $s3, 0x20C
    ctx->pc = 0x135fccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 524));
label_135fd0:
    // 0x135fd0: 0xc136e74  jal         func_4DB9D0
label_135fd4:
    if (ctx->pc == 0x135FD4u) {
        ctx->pc = 0x135FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FD0u;
        // 0x135fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135FD8u;
        goto label_135fd8;
    }
    ctx->pc = 0x135FD0u;
    SET_GPR_U32(ctx, 31, 0x135FD8u);
    ctx->pc = 0x135FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135FD0u;
    // 0x135fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB9D0u, 0x135FD0u, 0x135FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135FD8u;
label_135fd8:
    // 0x135fd8: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x135fd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_135fdc:
    // 0x135fdc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_135fe0:
    if (ctx->pc == 0x135FE0u) {
        ctx->pc = 0x135FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FDCu;
        // 0x135fe0: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135FE4u;
        goto label_135fe4;
    }
    ctx->pc = 0x135FDCu;
    {
        const bool branch_taken_0x135fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135fdc) {
            ctx->pc = 0x135FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135FDCu;
            // 0x135fe0: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136008u;
            goto label_136008;
        }
    }
    ctx->pc = 0x135FE4u;
label_135fe4:
    // 0x135fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135fe8:
    // 0x135fe8: 0xc136e8c  jal         func_4DBA30
label_135fec:
    if (ctx->pc == 0x135FECu) {
        ctx->pc = 0x135FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FE8u;
        // 0x135fec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135FF0u;
        goto label_135ff0;
    }
    ctx->pc = 0x135FE8u;
    SET_GPR_U32(ctx, 31, 0x135FF0u);
    ctx->pc = 0x135FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135FE8u;
    // 0x135fec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DBA30u, 0x135FE8u, 0x135FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135FF0u;
label_135ff0:
    // 0x135ff0: 0xc0e409a  jal         func_390268
label_135ff4:
    if (ctx->pc == 0x135FF4u) {
        ctx->pc = 0x135FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FF0u;
        // 0x135ff4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135FF8u;
        goto label_135ff8;
    }
    ctx->pc = 0x135FF0u;
    SET_GPR_U32(ctx, 31, 0x135FF8u);
    ctx->pc = 0x135FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135FF0u;
    // 0x135ff4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x135FF0u, 0x135FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135FF8u;
label_135ff8:
    // 0x135ff8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x135ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135ffc:
    // 0x135ffc: 0x1620ff74  bnez        $s1, . + 4 + (-0x8C << 2)
label_136000:
    if (ctx->pc == 0x136000u) {
        ctx->pc = 0x136000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FFCu;
        // 0x136000: 0x26340090  addiu       $s4, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136004u;
        goto label_136004;
    }
    ctx->pc = 0x135FFCu;
    {
        const bool branch_taken_0x135ffc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x136000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135FFCu;
        // 0x136000: 0x26340090  addiu       $s4, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135ffc) {
            ctx->pc = 0x135DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135dd0;
        }
    }
    ctx->pc = 0x136004u;
label_136004:
    // 0x136004: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x136004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_136008:
    // 0x136008: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x136008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_13600c:
    // 0x13600c: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x13600cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_136010:
    // 0x136010: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x136010u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_136014:
    // 0x136014: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x136014u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_136018:
    // 0x136018: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x136018u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_13601c:
    // 0x13601c: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x13601cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_136020:
    // 0x136020: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x136020u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_136024:
    // 0x136024: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x136024u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_136028:
    // 0x136028: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x136028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_13602c:
    // 0x13602c: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x13602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_136030:
    // 0x136030: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x136030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_136034:
    // 0x136034: 0x3e00008  jr          $ra
label_136038:
    if (ctx->pc == 0x136038u) {
        ctx->pc = 0x136038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136034u;
        // 0x136038: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13603Cu;
        goto label_13603c;
    }
    ctx->pc = 0x136034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136034u;
        // 0x136038: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13603Cu;
label_13603c:
    // 0x13603c: 0x0  nop
    ctx->pc = 0x13603cu;
    // NOP
    ctx->pc = 0x136040u;
}
