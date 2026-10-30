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

// Function: sub_00275D10
// Address: 0x275d10 - 0x276008
void sub_00275D10_0x275d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275D10_0x275d10");
#endif

    switch (ctx->pc) {
        case 0x275d10u: goto label_275d10;
        case 0x275d14u: goto label_275d14;
        case 0x275d18u: goto label_275d18;
        case 0x275d1cu: goto label_275d1c;
        case 0x275d20u: goto label_275d20;
        case 0x275d24u: goto label_275d24;
        case 0x275d28u: goto label_275d28;
        case 0x275d2cu: goto label_275d2c;
        case 0x275d30u: goto label_275d30;
        case 0x275d34u: goto label_275d34;
        case 0x275d38u: goto label_275d38;
        case 0x275d3cu: goto label_275d3c;
        case 0x275d40u: goto label_275d40;
        case 0x275d44u: goto label_275d44;
        case 0x275d48u: goto label_275d48;
        case 0x275d4cu: goto label_275d4c;
        case 0x275d50u: goto label_275d50;
        case 0x275d54u: goto label_275d54;
        case 0x275d58u: goto label_275d58;
        case 0x275d5cu: goto label_275d5c;
        case 0x275d60u: goto label_275d60;
        case 0x275d64u: goto label_275d64;
        case 0x275d68u: goto label_275d68;
        case 0x275d6cu: goto label_275d6c;
        case 0x275d70u: goto label_275d70;
        case 0x275d74u: goto label_275d74;
        case 0x275d78u: goto label_275d78;
        case 0x275d7cu: goto label_275d7c;
        case 0x275d80u: goto label_275d80;
        case 0x275d84u: goto label_275d84;
        case 0x275d88u: goto label_275d88;
        case 0x275d8cu: goto label_275d8c;
        case 0x275d90u: goto label_275d90;
        case 0x275d94u: goto label_275d94;
        case 0x275d98u: goto label_275d98;
        case 0x275d9cu: goto label_275d9c;
        case 0x275da0u: goto label_275da0;
        case 0x275da4u: goto label_275da4;
        case 0x275da8u: goto label_275da8;
        case 0x275dacu: goto label_275dac;
        case 0x275db0u: goto label_275db0;
        case 0x275db4u: goto label_275db4;
        case 0x275db8u: goto label_275db8;
        case 0x275dbcu: goto label_275dbc;
        case 0x275dc0u: goto label_275dc0;
        case 0x275dc4u: goto label_275dc4;
        case 0x275dc8u: goto label_275dc8;
        case 0x275dccu: goto label_275dcc;
        case 0x275dd0u: goto label_275dd0;
        case 0x275dd4u: goto label_275dd4;
        case 0x275dd8u: goto label_275dd8;
        case 0x275ddcu: goto label_275ddc;
        case 0x275de0u: goto label_275de0;
        case 0x275de4u: goto label_275de4;
        case 0x275de8u: goto label_275de8;
        case 0x275decu: goto label_275dec;
        case 0x275df0u: goto label_275df0;
        case 0x275df4u: goto label_275df4;
        case 0x275df8u: goto label_275df8;
        case 0x275dfcu: goto label_275dfc;
        case 0x275e00u: goto label_275e00;
        case 0x275e04u: goto label_275e04;
        case 0x275e08u: goto label_275e08;
        case 0x275e0cu: goto label_275e0c;
        case 0x275e10u: goto label_275e10;
        case 0x275e14u: goto label_275e14;
        case 0x275e18u: goto label_275e18;
        case 0x275e1cu: goto label_275e1c;
        case 0x275e20u: goto label_275e20;
        case 0x275e24u: goto label_275e24;
        case 0x275e28u: goto label_275e28;
        case 0x275e2cu: goto label_275e2c;
        case 0x275e30u: goto label_275e30;
        case 0x275e34u: goto label_275e34;
        case 0x275e38u: goto label_275e38;
        case 0x275e3cu: goto label_275e3c;
        case 0x275e40u: goto label_275e40;
        case 0x275e44u: goto label_275e44;
        case 0x275e48u: goto label_275e48;
        case 0x275e4cu: goto label_275e4c;
        case 0x275e50u: goto label_275e50;
        case 0x275e54u: goto label_275e54;
        case 0x275e58u: goto label_275e58;
        case 0x275e5cu: goto label_275e5c;
        case 0x275e60u: goto label_275e60;
        case 0x275e64u: goto label_275e64;
        case 0x275e68u: goto label_275e68;
        case 0x275e6cu: goto label_275e6c;
        case 0x275e70u: goto label_275e70;
        case 0x275e74u: goto label_275e74;
        case 0x275e78u: goto label_275e78;
        case 0x275e7cu: goto label_275e7c;
        case 0x275e80u: goto label_275e80;
        case 0x275e84u: goto label_275e84;
        case 0x275e88u: goto label_275e88;
        case 0x275e8cu: goto label_275e8c;
        case 0x275e90u: goto label_275e90;
        case 0x275e94u: goto label_275e94;
        case 0x275e98u: goto label_275e98;
        case 0x275e9cu: goto label_275e9c;
        case 0x275ea0u: goto label_275ea0;
        case 0x275ea4u: goto label_275ea4;
        case 0x275ea8u: goto label_275ea8;
        case 0x275eacu: goto label_275eac;
        case 0x275eb0u: goto label_275eb0;
        case 0x275eb4u: goto label_275eb4;
        case 0x275eb8u: goto label_275eb8;
        case 0x275ebcu: goto label_275ebc;
        case 0x275ec0u: goto label_275ec0;
        case 0x275ec4u: goto label_275ec4;
        case 0x275ec8u: goto label_275ec8;
        case 0x275eccu: goto label_275ecc;
        case 0x275ed0u: goto label_275ed0;
        case 0x275ed4u: goto label_275ed4;
        case 0x275ed8u: goto label_275ed8;
        case 0x275edcu: goto label_275edc;
        case 0x275ee0u: goto label_275ee0;
        case 0x275ee4u: goto label_275ee4;
        case 0x275ee8u: goto label_275ee8;
        case 0x275eecu: goto label_275eec;
        case 0x275ef0u: goto label_275ef0;
        case 0x275ef4u: goto label_275ef4;
        case 0x275ef8u: goto label_275ef8;
        case 0x275efcu: goto label_275efc;
        case 0x275f00u: goto label_275f00;
        case 0x275f04u: goto label_275f04;
        case 0x275f08u: goto label_275f08;
        case 0x275f0cu: goto label_275f0c;
        case 0x275f10u: goto label_275f10;
        case 0x275f14u: goto label_275f14;
        case 0x275f18u: goto label_275f18;
        case 0x275f1cu: goto label_275f1c;
        case 0x275f20u: goto label_275f20;
        case 0x275f24u: goto label_275f24;
        case 0x275f28u: goto label_275f28;
        case 0x275f2cu: goto label_275f2c;
        case 0x275f30u: goto label_275f30;
        case 0x275f34u: goto label_275f34;
        case 0x275f38u: goto label_275f38;
        case 0x275f3cu: goto label_275f3c;
        case 0x275f40u: goto label_275f40;
        case 0x275f44u: goto label_275f44;
        case 0x275f48u: goto label_275f48;
        case 0x275f4cu: goto label_275f4c;
        case 0x275f50u: goto label_275f50;
        case 0x275f54u: goto label_275f54;
        case 0x275f58u: goto label_275f58;
        case 0x275f5cu: goto label_275f5c;
        case 0x275f60u: goto label_275f60;
        case 0x275f64u: goto label_275f64;
        case 0x275f68u: goto label_275f68;
        case 0x275f6cu: goto label_275f6c;
        case 0x275f70u: goto label_275f70;
        case 0x275f74u: goto label_275f74;
        case 0x275f78u: goto label_275f78;
        case 0x275f7cu: goto label_275f7c;
        case 0x275f80u: goto label_275f80;
        case 0x275f84u: goto label_275f84;
        case 0x275f88u: goto label_275f88;
        case 0x275f8cu: goto label_275f8c;
        case 0x275f90u: goto label_275f90;
        case 0x275f94u: goto label_275f94;
        case 0x275f98u: goto label_275f98;
        case 0x275f9cu: goto label_275f9c;
        case 0x275fa0u: goto label_275fa0;
        case 0x275fa4u: goto label_275fa4;
        case 0x275fa8u: goto label_275fa8;
        case 0x275facu: goto label_275fac;
        case 0x275fb0u: goto label_275fb0;
        case 0x275fb4u: goto label_275fb4;
        case 0x275fb8u: goto label_275fb8;
        case 0x275fbcu: goto label_275fbc;
        case 0x275fc0u: goto label_275fc0;
        case 0x275fc4u: goto label_275fc4;
        case 0x275fc8u: goto label_275fc8;
        case 0x275fccu: goto label_275fcc;
        case 0x275fd0u: goto label_275fd0;
        case 0x275fd4u: goto label_275fd4;
        case 0x275fd8u: goto label_275fd8;
        case 0x275fdcu: goto label_275fdc;
        case 0x275fe0u: goto label_275fe0;
        case 0x275fe4u: goto label_275fe4;
        case 0x275fe8u: goto label_275fe8;
        case 0x275fecu: goto label_275fec;
        case 0x275ff0u: goto label_275ff0;
        case 0x275ff4u: goto label_275ff4;
        case 0x275ff8u: goto label_275ff8;
        case 0x275ffcu: goto label_275ffc;
        case 0x276000u: goto label_276000;
        case 0x276004u: goto label_276004;
        default: break;
    }

    ctx->pc = 0x275d10u;

label_275d10:
    // 0x275d10: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x275d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_275d14:
    // 0x275d14: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x275d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_275d18:
    // 0x275d18: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x275d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_275d1c:
    // 0x275d1c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x275d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_275d20:
    // 0x275d20: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x275d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_275d24:
    // 0x275d24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x275d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_275d28:
    // 0x275d28: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x275d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_275d2c:
    // 0x275d2c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x275d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_275d30:
    // 0x275d30: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x275d30u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_275d34:
    // 0x275d34: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x275d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_275d38:
    // 0x275d38: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x275d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_275d3c:
    // 0x275d3c: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x275d3cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_275d40:
    // 0x275d40: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x275d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_275d44:
    // 0x275d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_275d48:
    // 0x275d48: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x275d48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_275d4c:
    // 0x275d4c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x275d4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_275d50:
    // 0x275d50: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x275d50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_275d54:
    // 0x275d54: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x275d54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_275d58:
    // 0x275d58: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x275d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_275d5c:
    // 0x275d5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x275d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_275d60:
    // 0x275d60: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x275d60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_275d64:
    // 0x275d64: 0xc0e896e  jal         func_3A25B8
label_275d68:
    if (ctx->pc == 0x275D68u) {
        ctx->pc = 0x275D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D64u;
        // 0x275d68: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275D6Cu;
        goto label_275d6c;
    }
    ctx->pc = 0x275D64u;
    SET_GPR_U32(ctx, 31, 0x275D6Cu);
    ctx->pc = 0x275D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275D64u;
    // 0x275d68: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x275D64u, 0x275D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D6Cu;
label_275d6c:
    // 0x275d6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_275d70:
    if (ctx->pc == 0x275D70u) {
        ctx->pc = 0x275D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D6Cu;
        // 0x275d70: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275D74u;
        goto label_275d74;
    }
    ctx->pc = 0x275D6Cu;
    {
        const bool branch_taken_0x275d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D6Cu;
        // 0x275d70: 0x26300010  addiu       $s0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275d6c) {
            ctx->pc = 0x275D90u;
            goto label_275d90;
        }
    }
    ctx->pc = 0x275D74u;
label_275d74:
    // 0x275d74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x275d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275d78:
    // 0x275d78: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x275d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_275d7c:
    // 0x275d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275d80:
    // 0x275d80: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x275d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_275d84:
    // 0x275d84: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x275d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_275d88:
    // 0x275d88: 0x40f809  jalr        $v0
label_275d8c:
    if (ctx->pc == 0x275D8Cu) {
        ctx->pc = 0x275D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D88u;
        // 0x275d8c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275D90u;
        goto label_275d90;
    }
    ctx->pc = 0x275D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275D90u);
        ctx->pc = 0x275D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275D88u;
        // 0x275d8c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275D88u, 0x275D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275D90u;
label_275d90:
    // 0x275d90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x275d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_275d94:
    // 0x275d94: 0x7a050000  lq          $a1, 0x0($s0)
    ctx->pc = 0x275d94u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_275d98:
    // 0x275d98: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x275d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
label_275d9c:
    // 0x275d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_275da0:
    // 0x275da0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x275da0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_275da4:
    // 0x275da4: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x275da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
label_275da8:
    // 0x275da8: 0xc0e57ce  jal         func_395F38
label_275dac:
    if (ctx->pc == 0x275DACu) {
        ctx->pc = 0x275DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DA8u;
        // 0x275dac: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275DB0u;
        goto label_275db0;
    }
    ctx->pc = 0x275DA8u;
    SET_GPR_U32(ctx, 31, 0x275DB0u);
    ctx->pc = 0x275DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275DA8u;
    // 0x275dac: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x275DA8u, 0x275DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275DB0u;
label_275db0:
    // 0x275db0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x275db0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275db4:
    // 0x275db4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_275db8:
    if (ctx->pc == 0x275DB8u) {
        ctx->pc = 0x275DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DB4u;
        // 0x275db8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275DBCu;
        goto label_275dbc;
    }
    ctx->pc = 0x275DB4u;
    {
        const bool branch_taken_0x275db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DB4u;
        // 0x275db8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275db4) {
            ctx->pc = 0x275DD0u;
            goto label_275dd0;
        }
    }
    ctx->pc = 0x275DBCu;
label_275dbc:
    // 0x275dbc: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x275dbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
label_275dc0:
    // 0x275dc0: 0xc0e44cc  jal         func_391330
label_275dc4:
    if (ctx->pc == 0x275DC4u) {
        ctx->pc = 0x275DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DC0u;
        // 0x275dc4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275DC8u;
        goto label_275dc8;
    }
    ctx->pc = 0x275DC0u;
    SET_GPR_U32(ctx, 31, 0x275DC8u);
    ctx->pc = 0x275DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275DC0u;
    // 0x275dc4: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x275DC0u, 0x275DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275DC8u;
label_275dc8:
    // 0x275dc8: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x275dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275dcc:
    // 0x275dcc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x275dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_275dd0:
    // 0x275dd0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x275dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_275dd4:
    // 0x275dd4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x275dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_275dd8:
    // 0x275dd8: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x275dd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_275ddc:
    // 0x275ddc: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x275ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_275de0:
    // 0x275de0: 0xc0f809  jalr        $a2
label_275de4:
    if (ctx->pc == 0x275DE4u) {
        ctx->pc = 0x275DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DE0u;
        // 0x275de4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275DE8u;
        goto label_275de8;
    }
    ctx->pc = 0x275DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x275DE8u);
        ctx->pc = 0x275DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275DE0u;
        // 0x275de4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275DE0u, 0x275DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275DE8u;
label_275de8:
    // 0x275de8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x275de8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_275dec:
    // 0x275dec: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x275decu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_275df0:
    // 0x275df0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x275df0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_275df4:
    // 0x275df4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x275df4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_275df8:
    // 0x275df8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x275df8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_275dfc:
    // 0x275dfc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x275dfcu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_275e00:
    // 0x275e00: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x275e00u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_275e04:
    // 0x275e04: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x275e04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_275e08:
    // 0x275e08: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x275e08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_275e0c:
    // 0x275e0c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x275e0cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_275e10:
    // 0x275e10: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x275e10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_275e14:
    // 0x275e14: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x275e14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_275e18:
    // 0x275e18: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x275e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_275e1c:
    // 0x275e1c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x275e1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_275e20:
    // 0x275e20: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x275e20u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_275e24:
    // 0x275e24: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x275e24u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_275e28:
    // 0x275e28: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x275e28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_275e2c:
    // 0x275e2c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x275e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_275e30:
    // 0x275e30: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x275e30u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_275e34:
    // 0x275e34: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x275e34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_275e38:
    // 0x275e38: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x275e38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_275e3c:
    // 0x275e3c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x275e3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_275e40:
    // 0x275e40: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x275e40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_275e44:
    // 0x275e44: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x275e44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_275e48:
    // 0x275e48: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x275e48u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_275e4c:
    // 0x275e4c: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x275e4cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
label_275e50:
    // 0x275e50: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x275e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_275e54:
    // 0x275e54: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x275e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_275e58:
    // 0x275e58: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x275e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_275e5c:
    // 0x275e5c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x275e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_275e60:
    // 0x275e60: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x275e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_275e64:
    // 0x275e64: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x275e64u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_275e68:
    // 0x275e68: 0xc0cd5ea  jal         func_3357A8
label_275e6c:
    if (ctx->pc == 0x275E6Cu) {
        ctx->pc = 0x275E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E68u;
        // 0x275e6c: 0x7fa40080  sq          $a0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275E70u;
        goto label_275e70;
    }
    ctx->pc = 0x275E68u;
    SET_GPR_U32(ctx, 31, 0x275E70u);
    ctx->pc = 0x275E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E68u;
    // 0x275e6c: 0x7fa40080  sq          $a0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x275E68u, 0x275E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E70u;
label_275e70:
    // 0x275e70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x275e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_275e74:
    // 0x275e74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x275e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_275e78:
    // 0x275e78: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x275e78u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_275e7c:
    // 0x275e7c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x275e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_275e80:
    // 0x275e80: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x275e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_275e84:
    // 0x275e84: 0x4614b502  mul.s       $f20, $f22, $f20
    ctx->pc = 0x275e84u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
label_275e88:
    // 0x275e88: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x275e88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_275e8c:
    // 0x275e8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x275e8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_275e90:
    // 0x275e90: 0xc12e310  jal         func_4B8C40
label_275e94:
    if (ctx->pc == 0x275E94u) {
        ctx->pc = 0x275E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E90u;
        // 0x275e94: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275E98u;
        goto label_275e98;
    }
    ctx->pc = 0x275E90u;
    SET_GPR_U32(ctx, 31, 0x275E98u);
    ctx->pc = 0x275E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E90u;
    // 0x275e94: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x275E90u, 0x275E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275E98u;
label_275e98:
    // 0x275e98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x275e98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_275e9c:
    // 0x275e9c: 0xc12e29c  jal         func_4B8A70
label_275ea0:
    if (ctx->pc == 0x275EA0u) {
        ctx->pc = 0x275EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275E9Cu;
        // 0x275ea0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275EA4u;
        goto label_275ea4;
    }
    ctx->pc = 0x275E9Cu;
    SET_GPR_U32(ctx, 31, 0x275EA4u);
    ctx->pc = 0x275EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275E9Cu;
    // 0x275ea0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x275E9Cu, 0x275EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275EA4u;
label_275ea4:
    // 0x275ea4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x275ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_275ea8:
    // 0x275ea8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x275ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_275eac:
    // 0x275eac: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x275eacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_275eb0:
    // 0x275eb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275eb4:
    // 0x275eb4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x275eb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_275eb8:
    // 0x275eb8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x275eb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_275ebc:
    // 0x275ebc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x275ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_275ec0:
    // 0x275ec0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x275ec0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_275ec4:
    // 0x275ec4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x275ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_275ec8:
    // 0x275ec8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x275ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_275ecc:
    // 0x275ecc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_275ed0:
    // 0x275ed0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x275ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_275ed4:
    // 0x275ed4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x275ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275ed8:
    // 0x275ed8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x275ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275edc:
    // 0x275edc: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x275edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_275ee0:
    // 0x275ee0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x275ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_275ee4:
    // 0x275ee4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x275ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_275ee8:
    // 0x275ee8: 0xc095106  jal         func_254418
label_275eec:
    if (ctx->pc == 0x275EECu) {
        ctx->pc = 0x275EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EE8u;
        // 0x275eec: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x275EF0u;
        goto label_275ef0;
    }
    ctx->pc = 0x275EE8u;
    SET_GPR_U32(ctx, 31, 0x275EF0u);
    ctx->pc = 0x275EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275EE8u;
    // 0x275eec: 0xe7a20048  swc1        $f2, 0x48($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x254418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254418u, 0x275EE8u, 0x275EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275EF0u;
label_275ef0:
    // 0x275ef0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_275ef4:
    // 0x275ef4: 0xc095128  jal         func_2544A0
label_275ef8:
    if (ctx->pc == 0x275EF8u) {
        ctx->pc = 0x275EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275EF4u;
        // 0x275ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275EFCu;
        goto label_275efc;
    }
    ctx->pc = 0x275EF4u;
    SET_GPR_U32(ctx, 31, 0x275EFCu);
    ctx->pc = 0x275EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275EF4u;
    // 0x275ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x275EF4u, 0x275EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275EFCu;
label_275efc:
    // 0x275efc: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x275efcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_275f00:
    // 0x275f00: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x275f00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_275f04:
    // 0x275f04: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x275f04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_275f08:
    // 0x275f08: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x275f08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_275f0c:
    // 0x275f0c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x275f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_275f10:
    // 0x275f10: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x275f10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_275f14:
    // 0x275f14: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x275f14u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_275f18:
    // 0x275f18: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x275f18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_275f1c:
    // 0x275f1c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x275f1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_275f20:
    // 0x275f20: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x275f20u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_275f24:
    // 0x275f24: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x275f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_275f28:
    // 0x275f28: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x275f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_275f2c:
    // 0x275f2c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x275f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_275f30:
    // 0x275f30: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x275f30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_275f34:
    // 0x275f34: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x275f34u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_275f38:
    // 0x275f38: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x275f38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_275f3c:
    // 0x275f3c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x275f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_275f40:
    // 0x275f40: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x275f40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_275f44:
    // 0x275f44: 0x48252800  qmfc2.ni    $a1, $vf5
    ctx->pc = 0x275f44u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[5]));
label_275f48:
    // 0x275f48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x275f48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_275f4c:
    // 0x275f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275f50:
    // 0x275f50: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x275f50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
label_275f54:
    // 0x275f54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x275f54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_275f58:
    // 0x275f58: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x275f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_275f5c:
    // 0x275f5c: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x275f5cu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
label_275f60:
    // 0x275f60: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x275f60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_275f64:
    // 0x275f64: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x275f64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_275f68:
    // 0x275f68: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x275f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
label_275f6c:
    // 0x275f6c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x275f6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_275f70:
    // 0x275f70: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x275f70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_275f74:
    // 0x275f74: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x275f74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_275f78:
    // 0x275f78: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x275f78u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_275f7c:
    // 0x275f7c: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x275f7cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_275f80:
    // 0x275f80: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x275f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_275f84:
    // 0x275f84: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x275f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_275f88:
    // 0x275f88: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x275f88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_275f8c:
    // 0x275f8c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x275f8cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_275f90:
    // 0x275f90: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x275f90u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_275f94:
    // 0x275f94: 0x7fa60080  sq          $a2, 0x80($sp)
    ctx->pc = 0x275f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
label_275f98:
    // 0x275f98: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x275f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_275f9c:
    // 0x275f9c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x275f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_275fa0:
    // 0x275fa0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x275fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_275fa4:
    // 0x275fa4: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x275fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
label_275fa8:
    // 0x275fa8: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x275fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_275fac:
    // 0x275fac: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x275facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_275fb0:
    // 0x275fb0: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x275fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
label_275fb4:
    // 0x275fb4: 0xc08f3dc  jal         func_23CF70
label_275fb8:
    if (ctx->pc == 0x275FB8u) {
        ctx->pc = 0x275FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FB4u;
        // 0x275fb8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275FBCu;
        goto label_275fbc;
    }
    ctx->pc = 0x275FB4u;
    SET_GPR_U32(ctx, 31, 0x275FBCu);
    ctx->pc = 0x275FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275FB4u;
    // 0x275fb8: 0x7fa20080  sq          $v0, 0x80($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x275FB4u, 0x275FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275FBCu;
label_275fbc:
    // 0x275fbc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x275fbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_275fc0:
    // 0x275fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275fc4:
    // 0x275fc4: 0xc08f3e2  jal         func_23CF88
label_275fc8:
    if (ctx->pc == 0x275FC8u) {
        ctx->pc = 0x275FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FC4u;
        // 0x275fc8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x275FCCu;
        goto label_275fcc;
    }
    ctx->pc = 0x275FC4u;
    SET_GPR_U32(ctx, 31, 0x275FCCu);
    ctx->pc = 0x275FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275FC4u;
    // 0x275fc8: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF88u, 0x275FC4u, 0x275FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275FCCu;
label_275fcc:
    // 0x275fcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_275fd0:
    // 0x275fd0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x275fd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_275fd4:
    // 0x275fd4: 0xc08f4ae  jal         func_23D2B8
label_275fd8:
    if (ctx->pc == 0x275FD8u) {
        ctx->pc = 0x275FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275FD4u;
        // 0x275fd8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275FDCu;
        goto label_275fdc;
    }
    ctx->pc = 0x275FD4u;
    SET_GPR_U32(ctx, 31, 0x275FDCu);
    ctx->pc = 0x275FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275FD4u;
    // 0x275fd8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D2B8u, 0x275FD4u, 0x275FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275FDCu;
label_275fdc:
    // 0x275fdc: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x275fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_275fe0:
    // 0x275fe0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x275fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_275fe4:
    // 0x275fe4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x275fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_275fe8:
    // 0x275fe8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x275fe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_275fec:
    // 0x275fec: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x275fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_275ff0:
    // 0x275ff0: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x275ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_275ff4:
    // 0x275ff4: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x275ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_275ff8:
    // 0x275ff8: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x275ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_275ffc:
    // 0x275ffc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x275ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_276000:
    // 0x276000: 0x3e00008  jr          $ra
label_276004:
    if (ctx->pc == 0x276004u) {
        ctx->pc = 0x276004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276000u;
        // 0x276004: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276008u;
        goto label_fallthrough_0x276000;
    }
    ctx->pc = 0x276000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276000u;
        // 0x276004: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x276000:
    ctx->pc = 0x276008u;
}
