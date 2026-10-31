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

// Function: sub_002D7D80
// Address: 0x2d7d80 - 0x2d7fe0
void sub_002D7D80_0x2d7d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7D80_0x2d7d80");
#endif

    switch (ctx->pc) {
        case 0x2d7d80u: goto label_2d7d80;
        case 0x2d7d84u: goto label_2d7d84;
        case 0x2d7d88u: goto label_2d7d88;
        case 0x2d7d8cu: goto label_2d7d8c;
        case 0x2d7d90u: goto label_2d7d90;
        case 0x2d7d94u: goto label_2d7d94;
        case 0x2d7d98u: goto label_2d7d98;
        case 0x2d7d9cu: goto label_2d7d9c;
        case 0x2d7da0u: goto label_2d7da0;
        case 0x2d7da4u: goto label_2d7da4;
        case 0x2d7da8u: goto label_2d7da8;
        case 0x2d7dacu: goto label_2d7dac;
        case 0x2d7db0u: goto label_2d7db0;
        case 0x2d7db4u: goto label_2d7db4;
        case 0x2d7db8u: goto label_2d7db8;
        case 0x2d7dbcu: goto label_2d7dbc;
        case 0x2d7dc0u: goto label_2d7dc0;
        case 0x2d7dc4u: goto label_2d7dc4;
        case 0x2d7dc8u: goto label_2d7dc8;
        case 0x2d7dccu: goto label_2d7dcc;
        case 0x2d7dd0u: goto label_2d7dd0;
        case 0x2d7dd4u: goto label_2d7dd4;
        case 0x2d7dd8u: goto label_2d7dd8;
        case 0x2d7ddcu: goto label_2d7ddc;
        case 0x2d7de0u: goto label_2d7de0;
        case 0x2d7de4u: goto label_2d7de4;
        case 0x2d7de8u: goto label_2d7de8;
        case 0x2d7decu: goto label_2d7dec;
        case 0x2d7df0u: goto label_2d7df0;
        case 0x2d7df4u: goto label_2d7df4;
        case 0x2d7df8u: goto label_2d7df8;
        case 0x2d7dfcu: goto label_2d7dfc;
        case 0x2d7e00u: goto label_2d7e00;
        case 0x2d7e04u: goto label_2d7e04;
        case 0x2d7e08u: goto label_2d7e08;
        case 0x2d7e0cu: goto label_2d7e0c;
        case 0x2d7e10u: goto label_2d7e10;
        case 0x2d7e14u: goto label_2d7e14;
        case 0x2d7e18u: goto label_2d7e18;
        case 0x2d7e1cu: goto label_2d7e1c;
        case 0x2d7e20u: goto label_2d7e20;
        case 0x2d7e24u: goto label_2d7e24;
        case 0x2d7e28u: goto label_2d7e28;
        case 0x2d7e2cu: goto label_2d7e2c;
        case 0x2d7e30u: goto label_2d7e30;
        case 0x2d7e34u: goto label_2d7e34;
        case 0x2d7e38u: goto label_2d7e38;
        case 0x2d7e3cu: goto label_2d7e3c;
        case 0x2d7e40u: goto label_2d7e40;
        case 0x2d7e44u: goto label_2d7e44;
        case 0x2d7e48u: goto label_2d7e48;
        case 0x2d7e4cu: goto label_2d7e4c;
        case 0x2d7e50u: goto label_2d7e50;
        case 0x2d7e54u: goto label_2d7e54;
        case 0x2d7e58u: goto label_2d7e58;
        case 0x2d7e5cu: goto label_2d7e5c;
        case 0x2d7e60u: goto label_2d7e60;
        case 0x2d7e64u: goto label_2d7e64;
        case 0x2d7e68u: goto label_2d7e68;
        case 0x2d7e6cu: goto label_2d7e6c;
        case 0x2d7e70u: goto label_2d7e70;
        case 0x2d7e74u: goto label_2d7e74;
        case 0x2d7e78u: goto label_2d7e78;
        case 0x2d7e7cu: goto label_2d7e7c;
        case 0x2d7e80u: goto label_2d7e80;
        case 0x2d7e84u: goto label_2d7e84;
        case 0x2d7e88u: goto label_2d7e88;
        case 0x2d7e8cu: goto label_2d7e8c;
        case 0x2d7e90u: goto label_2d7e90;
        case 0x2d7e94u: goto label_2d7e94;
        case 0x2d7e98u: goto label_2d7e98;
        case 0x2d7e9cu: goto label_2d7e9c;
        case 0x2d7ea0u: goto label_2d7ea0;
        case 0x2d7ea4u: goto label_2d7ea4;
        case 0x2d7ea8u: goto label_2d7ea8;
        case 0x2d7eacu: goto label_2d7eac;
        case 0x2d7eb0u: goto label_2d7eb0;
        case 0x2d7eb4u: goto label_2d7eb4;
        case 0x2d7eb8u: goto label_2d7eb8;
        case 0x2d7ebcu: goto label_2d7ebc;
        case 0x2d7ec0u: goto label_2d7ec0;
        case 0x2d7ec4u: goto label_2d7ec4;
        case 0x2d7ec8u: goto label_2d7ec8;
        case 0x2d7eccu: goto label_2d7ecc;
        case 0x2d7ed0u: goto label_2d7ed0;
        case 0x2d7ed4u: goto label_2d7ed4;
        case 0x2d7ed8u: goto label_2d7ed8;
        case 0x2d7edcu: goto label_2d7edc;
        case 0x2d7ee0u: goto label_2d7ee0;
        case 0x2d7ee4u: goto label_2d7ee4;
        case 0x2d7ee8u: goto label_2d7ee8;
        case 0x2d7eecu: goto label_2d7eec;
        case 0x2d7ef0u: goto label_2d7ef0;
        case 0x2d7ef4u: goto label_2d7ef4;
        case 0x2d7ef8u: goto label_2d7ef8;
        case 0x2d7efcu: goto label_2d7efc;
        case 0x2d7f00u: goto label_2d7f00;
        case 0x2d7f04u: goto label_2d7f04;
        case 0x2d7f08u: goto label_2d7f08;
        case 0x2d7f0cu: goto label_2d7f0c;
        case 0x2d7f10u: goto label_2d7f10;
        case 0x2d7f14u: goto label_2d7f14;
        case 0x2d7f18u: goto label_2d7f18;
        case 0x2d7f1cu: goto label_2d7f1c;
        case 0x2d7f20u: goto label_2d7f20;
        case 0x2d7f24u: goto label_2d7f24;
        case 0x2d7f28u: goto label_2d7f28;
        case 0x2d7f2cu: goto label_2d7f2c;
        case 0x2d7f30u: goto label_2d7f30;
        case 0x2d7f34u: goto label_2d7f34;
        case 0x2d7f38u: goto label_2d7f38;
        case 0x2d7f3cu: goto label_2d7f3c;
        case 0x2d7f40u: goto label_2d7f40;
        case 0x2d7f44u: goto label_2d7f44;
        case 0x2d7f48u: goto label_2d7f48;
        case 0x2d7f4cu: goto label_2d7f4c;
        case 0x2d7f50u: goto label_2d7f50;
        case 0x2d7f54u: goto label_2d7f54;
        case 0x2d7f58u: goto label_2d7f58;
        case 0x2d7f5cu: goto label_2d7f5c;
        case 0x2d7f60u: goto label_2d7f60;
        case 0x2d7f64u: goto label_2d7f64;
        case 0x2d7f68u: goto label_2d7f68;
        case 0x2d7f6cu: goto label_2d7f6c;
        case 0x2d7f70u: goto label_2d7f70;
        case 0x2d7f74u: goto label_2d7f74;
        case 0x2d7f78u: goto label_2d7f78;
        case 0x2d7f7cu: goto label_2d7f7c;
        case 0x2d7f80u: goto label_2d7f80;
        case 0x2d7f84u: goto label_2d7f84;
        case 0x2d7f88u: goto label_2d7f88;
        case 0x2d7f8cu: goto label_2d7f8c;
        case 0x2d7f90u: goto label_2d7f90;
        case 0x2d7f94u: goto label_2d7f94;
        case 0x2d7f98u: goto label_2d7f98;
        case 0x2d7f9cu: goto label_2d7f9c;
        case 0x2d7fa0u: goto label_2d7fa0;
        case 0x2d7fa4u: goto label_2d7fa4;
        case 0x2d7fa8u: goto label_2d7fa8;
        case 0x2d7facu: goto label_2d7fac;
        case 0x2d7fb0u: goto label_2d7fb0;
        case 0x2d7fb4u: goto label_2d7fb4;
        case 0x2d7fb8u: goto label_2d7fb8;
        case 0x2d7fbcu: goto label_2d7fbc;
        case 0x2d7fc0u: goto label_2d7fc0;
        case 0x2d7fc4u: goto label_2d7fc4;
        case 0x2d7fc8u: goto label_2d7fc8;
        case 0x2d7fccu: goto label_2d7fcc;
        case 0x2d7fd0u: goto label_2d7fd0;
        case 0x2d7fd4u: goto label_2d7fd4;
        case 0x2d7fd8u: goto label_2d7fd8;
        case 0x2d7fdcu: goto label_2d7fdc;
        default: break;
    }

    ctx->pc = 0x2d7d80u;

label_2d7d80:
    // 0x2d7d80: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2d7d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2d7d84:
    // 0x2d7d84: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2d7d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2d7d88:
    // 0x2d7d88: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2d7d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2d7d8c:
    // 0x2d7d8c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2d7d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2d7d90:
    // 0x2d7d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d7d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d7d94:
    // 0x2d7d94: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2d7d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2d7d98:
    // 0x2d7d98: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2d7d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2d7d9c:
    // 0x2d7d9c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2d7d9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d7da0:
    // 0x2d7da0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2d7da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2d7da4:
    // 0x2d7da4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d7da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2d7da8:
    // 0x2d7da8: 0x82220040  lb          $v0, 0x40($s1)
    ctx->pc = 0x2d7da8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
label_2d7dac:
    // 0x2d7dac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d7dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d7db0:
    // 0x2d7db0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2d7db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2d7db4:
    // 0x2d7db4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d7db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2d7db8:
    // 0x2d7db8: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x2d7db8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d7dbc:
    // 0x2d7dbc: 0xc105774  jal         func_415DD0
label_2d7dc0:
    if (ctx->pc == 0x2D7DC0u) {
        ctx->pc = 0x2D7DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DBCu;
        // 0x2d7dc0: 0x84440010  lh          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7DC4u;
        goto label_2d7dc4;
    }
    ctx->pc = 0x2D7DBCu;
    SET_GPR_U32(ctx, 31, 0x2D7DC4u);
    ctx->pc = 0x2D7DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DBCu;
    // 0x2d7dc0: 0x84440010  lh          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x2D7DBCu, 0x2D7DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DC4u;
label_2d7dc4:
    // 0x2d7dc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d7dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7dc8:
    // 0x2d7dc8: 0xc105896  jal         func_416258
label_2d7dcc:
    if (ctx->pc == 0x2D7DCCu) {
        ctx->pc = 0x2D7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DC8u;
        // 0x2d7dcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7DD0u;
        goto label_2d7dd0;
    }
    ctx->pc = 0x2D7DC8u;
    SET_GPR_U32(ctx, 31, 0x2D7DD0u);
    ctx->pc = 0x2D7DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DC8u;
    // 0x2d7dcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x2D7DC8u, 0x2D7DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DD0u;
label_2d7dd0:
    // 0x2d7dd0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2d7dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_2d7dd4:
    // 0x2d7dd4: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2d7dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_2d7dd8:
    // 0x2d7dd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d7dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d7ddc:
    // 0x2d7ddc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d7ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d7de0:
    // 0x2d7de0: 0xc0cd790  jal         func_335E40
label_2d7de4:
    if (ctx->pc == 0x2D7DE4u) {
        ctx->pc = 0x2D7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DE0u;
        // 0x2d7de4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7DE8u;
        goto label_2d7de8;
    }
    ctx->pc = 0x2D7DE0u;
    SET_GPR_U32(ctx, 31, 0x2D7DE8u);
    ctx->pc = 0x2D7DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DE0u;
    // 0x2d7de4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E40u, 0x2D7DE0u, 0x2D7DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DE8u;
label_2d7de8:
    // 0x2d7de8: 0xc10587a  jal         func_4161E8
label_2d7dec:
    if (ctx->pc == 0x2D7DECu) {
        ctx->pc = 0x2D7DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7DE8u;
        // 0x2d7dec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7DF0u;
        goto label_2d7df0;
    }
    ctx->pc = 0x2D7DE8u;
    SET_GPR_U32(ctx, 31, 0x2D7DF0u);
    ctx->pc = 0x2D7DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7DE8u;
    // 0x2d7dec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D7DE8u, 0x2D7DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7DF0u;
label_2d7df0:
    // 0x2d7df0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2d7df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2d7df4:
    // 0x2d7df4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d7df8:
    // 0x2d7df8: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2d7df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
label_2d7dfc:
    // 0x2d7dfc: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x2d7dfcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2d7e00:
    // 0x2d7e00: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2d7e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2d7e04:
    // 0x2d7e04: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d7e04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2d7e08:
    // 0x2d7e08: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2d7e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
label_2d7e0c:
    // 0x2d7e0c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2d7e0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2d7e10:
    // 0x2d7e10: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d7e10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d7e14:
    // 0x2d7e14: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d7e14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d7e18:
    // 0x2d7e18: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2d7e18u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
label_2d7e1c:
    // 0x2d7e1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2d7e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d7e20:
    // 0x2d7e20: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x2d7e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
label_2d7e24:
    // 0x2d7e24: 0x7fa40040  sq          $a0, 0x40($sp)
    ctx->pc = 0x2d7e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 4));
label_2d7e28:
    // 0x2d7e28: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x2d7e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_2d7e2c:
    // 0x2d7e2c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d7e2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d7e30:
    // 0x2d7e30: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2d7e30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d7e34:
    // 0x2d7e34: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x2d7e34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2d7e38:
    // 0x2d7e38: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d7e38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d7e3c:
    // 0x2d7e3c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d7e3cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2d7e40:
    // 0x2d7e40: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2d7e40u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2d7e44:
    // 0x2d7e44: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2d7e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2d7e48:
    // 0x2d7e48: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2d7e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2d7e4c:
    // 0x2d7e4c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x2d7e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_2d7e50:
    // 0x2d7e50: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x2d7e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2d7e54:
    // 0x2d7e54: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2d7e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2d7e58:
    // 0x2d7e58: 0xc0cdb38  jal         func_336CE0
label_2d7e5c:
    if (ctx->pc == 0x2D7E5Cu) {
        ctx->pc = 0x2D7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E58u;
        // 0x2d7e5c: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E60u;
        goto label_2d7e60;
    }
    ctx->pc = 0x2D7E58u;
    SET_GPR_U32(ctx, 31, 0x2D7E60u);
    ctx->pc = 0x2D7E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E58u;
    // 0x2d7e5c: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2D7E58u, 0x2D7E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E60u;
label_2d7e60:
    // 0x2d7e60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d7e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d7e64:
    // 0x2d7e64: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2d7e64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
label_2d7e68:
    // 0x2d7e68: 0x18400038  blez        $v0, . + 4 + (0x38 << 2)
label_2d7e6c:
    if (ctx->pc == 0x2D7E6Cu) {
        ctx->pc = 0x2D7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E68u;
        // 0x2d7e6c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E70u;
        goto label_2d7e70;
    }
    ctx->pc = 0x2D7E68u;
    {
        const bool branch_taken_0x2d7e68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D7E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E68u;
        // 0x2d7e6c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7e68) {
            ctx->pc = 0x2D7F4Cu;
            goto label_2d7f4c;
        }
    }
    ctx->pc = 0x2D7E70u;
label_2d7e70:
    // 0x2d7e70: 0xc0a36c2  jal         func_28DB08
label_2d7e74:
    if (ctx->pc == 0x2D7E74u) {
        ctx->pc = 0x2D7E78u;
        goto label_2d7e78;
    }
    ctx->pc = 0x2D7E70u;
    SET_GPR_U32(ctx, 31, 0x2D7E78u);
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2D7E70u, 0x2D7E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7E78u;
label_2d7e78:
    // 0x2d7e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d7e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7e7c:
    // 0x2d7e7c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2d7e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2d7e80:
    // 0x2d7e80: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2d7e80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2d7e84:
    // 0x2d7e84: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2d7e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2d7e88:
    // 0x2d7e88: 0x40f809  jalr        $v0
label_2d7e8c:
    if (ctx->pc == 0x2D7E8Cu) {
        ctx->pc = 0x2D7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E88u;
        // 0x2d7e8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E90u;
        goto label_2d7e90;
    }
    ctx->pc = 0x2D7E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D7E90u);
        ctx->pc = 0x2D7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E88u;
        // 0x2d7e8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7E88u, 0x2D7E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D7E90u;
label_2d7e90:
    // 0x2d7e90: 0x5453004a  bnel        $v0, $s3, . + 4 + (0x4A << 2)
label_2d7e94:
    if (ctx->pc == 0x2D7E94u) {
        ctx->pc = 0x2D7E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7E90u;
        // 0x2d7e94: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7E98u;
        goto label_2d7e98;
    }
    ctx->pc = 0x2D7E90u;
    {
        const bool branch_taken_0x2d7e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2d7e90) {
            ctx->pc = 0x2D7E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7E90u;
            // 0x2d7e94: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7FBCu;
            goto label_2d7fbc;
        }
    }
    ctx->pc = 0x2D7E98u;
label_2d7e98:
    // 0x2d7e98: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2d7e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2d7e9c:
    // 0x2d7e9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d7ea0:
    // 0x2d7ea0: 0x0  nop
    ctx->pc = 0x2d7ea0u;
    // NOP
label_2d7ea4:
    // 0x2d7ea4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2d7ea4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d7ea8:
    // 0x2d7ea8: 0x0  nop
    ctx->pc = 0x2d7ea8u;
    // NOP
label_2d7eac:
    // 0x2d7eac: 0x45020043  bc1fl       . + 4 + (0x43 << 2)
label_2d7eb0:
    if (ctx->pc == 0x2D7EB0u) {
        ctx->pc = 0x2D7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EACu;
        // 0x2d7eb0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7EB4u;
        goto label_2d7eb4;
    }
    ctx->pc = 0x2D7EACu;
    {
        const bool branch_taken_0x2d7eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7eac) {
            ctx->pc = 0x2D7EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7EACu;
            // 0x2d7eb0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7FBCu;
            goto label_2d7fbc;
        }
    }
    ctx->pc = 0x2D7EB4u;
label_2d7eb4:
    // 0x2d7eb4: 0xc10587a  jal         func_4161E8
label_2d7eb8:
    if (ctx->pc == 0x2D7EB8u) {
        ctx->pc = 0x2D7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EB4u;
        // 0x2d7eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7EBCu;
        goto label_2d7ebc;
    }
    ctx->pc = 0x2D7EB4u;
    SET_GPR_U32(ctx, 31, 0x2D7EBCu);
    ctx->pc = 0x2D7EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7EB4u;
    // 0x2d7eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2D7EB4u, 0x2D7EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7EBCu;
label_2d7ebc:
    // 0x2d7ebc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2d7ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2d7ec0:
    // 0x2d7ec0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x2d7ec0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2d7ec4:
    // 0x2d7ec4: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2d7ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_2d7ec8:
    // 0x2d7ec8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d7ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d7ecc:
    // 0x2d7ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d7ed0:
    // 0x2d7ed0: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x2d7ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_2d7ed4:
    // 0x2d7ed4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2d7ed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2d7ed8:
    // 0x2d7ed8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2d7ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d7edc:
    // 0x2d7edc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2d7edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2d7ee0:
    // 0x2d7ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d7ee4:
    // 0x2d7ee4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2d7ee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d7ee8:
    // 0x2d7ee8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2d7ee8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2d7eec:
    // 0x2d7eec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2d7eecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2d7ef0:
    // 0x2d7ef0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2d7ef0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2d7ef4:
    // 0x2d7ef4: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x2d7ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
label_2d7ef8:
    // 0x2d7ef8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x2d7ef8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
label_2d7efc:
    // 0x2d7efc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2d7efcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2d7f00:
    // 0x2d7f00: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2d7f00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2d7f04:
    // 0x2d7f04: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2d7f04u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2d7f08:
    // 0x2d7f08: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2d7f08u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2d7f0c:
    // 0x2d7f0c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x2d7f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_2d7f10:
    // 0x2d7f10: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2d7f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2d7f14:
    // 0x2d7f14: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2d7f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2d7f18:
    // 0x2d7f18: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x2d7f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_2d7f1c:
    // 0x2d7f1c: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2d7f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2d7f20:
    // 0x2d7f20: 0xc0beefa  jal         func_2FBBE8
label_2d7f24:
    if (ctx->pc == 0x2D7F24u) {
        ctx->pc = 0x2D7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F20u;
        // 0x2d7f24: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F28u;
        goto label_2d7f28;
    }
    ctx->pc = 0x2D7F20u;
    SET_GPR_U32(ctx, 31, 0x2D7F28u);
    ctx->pc = 0x2D7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F20u;
    // 0x2d7f24: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBE8u, 0x2D7F20u, 0x2D7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F28u;
label_2d7f28:
    // 0x2d7f28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d7f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2d7f2c:
    // 0x2d7f2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d7f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d7f30:
    // 0x2d7f30: 0x26840284  addiu       $a0, $s4, 0x284
    ctx->pc = 0x2d7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 644));
label_2d7f34:
    // 0x2d7f34: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2d7f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2d7f38:
    // 0x2d7f38: 0x24060fa0  addiu       $a2, $zero, 0xFA0
    ctx->pc = 0x2d7f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4000));
label_2d7f3c:
    // 0x2d7f3c: 0xc0a67ca  jal         func_299F28
label_2d7f40:
    if (ctx->pc == 0x2D7F40u) {
        ctx->pc = 0x2D7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F3Cu;
        // 0x2d7f40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F44u;
        goto label_2d7f44;
    }
    ctx->pc = 0x2D7F3Cu;
    SET_GPR_U32(ctx, 31, 0x2D7F44u);
    ctx->pc = 0x2D7F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7F3Cu;
    // 0x2d7f40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x2D7F3Cu, 0x2D7F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F44u;
label_2d7f44:
    // 0x2d7f44: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2d7f48:
    if (ctx->pc == 0x2D7F48u) {
        ctx->pc = 0x2D7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F44u;
        // 0x2d7f48: 0xa233003b  sb          $s3, 0x3B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F4Cu;
        goto label_2d7f4c;
    }
    ctx->pc = 0x2D7F44u;
    {
        const bool branch_taken_0x2d7f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F44u;
        // 0x2d7f48: 0xa233003b  sb          $s3, 0x3B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f44) {
            ctx->pc = 0x2D7FB4u;
            goto label_2d7fb4;
        }
    }
    ctx->pc = 0x2D7F4Cu;
label_2d7f4c:
    // 0x2d7f4c: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x2d7f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
label_2d7f50:
    // 0x2d7f50: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2d7f50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
label_2d7f54:
    // 0x2d7f54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2d7f58:
    // 0x2d7f58: 0x0  nop
    ctx->pc = 0x2d7f58u;
    // NOP
label_2d7f5c:
    // 0x2d7f5c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2d7f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2d7f60:
    // 0x2d7f60: 0x0  nop
    ctx->pc = 0x2d7f60u;
    // NOP
label_2d7f64:
    // 0x2d7f64: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_2d7f68:
    if (ctx->pc == 0x2D7F68u) {
        ctx->pc = 0x2D7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F64u;
        // 0x2d7f68: 0xa233003b  sb          $s3, 0x3B($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F6Cu;
        goto label_2d7f6c;
    }
    ctx->pc = 0x2D7F64u;
    {
        const bool branch_taken_0x2d7f64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d7f64) {
            ctx->pc = 0x2D7F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D7F64u;
            // 0x2d7f68: 0xa233003b  sb          $s3, 0x3B($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7FB4u;
            goto label_2d7fb4;
        }
    }
    ctx->pc = 0x2D7F6Cu;
label_2d7f6c:
    // 0x2d7f6c: 0xc0a367c  jal         func_28D9F0
label_2d7f70:
    if (ctx->pc == 0x2D7F70u) {
        ctx->pc = 0x2D7F74u;
        goto label_2d7f74;
    }
    ctx->pc = 0x2D7F6Cu;
    SET_GPR_U32(ctx, 31, 0x2D7F74u);
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2D7F6Cu, 0x2D7F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F74u;
label_2d7f74:
    // 0x2d7f74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d7f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d7f78:
    // 0x2d7f78: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_2d7f7c:
    if (ctx->pc == 0x2D7F7Cu) {
        ctx->pc = 0x2D7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F78u;
        // 0x2d7f7c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7F80u;
        goto label_2d7f80;
    }
    ctx->pc = 0x2D7F78u;
    {
        const bool branch_taken_0x2d7f78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F78u;
        // 0x2d7f7c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f78) {
            ctx->pc = 0x2D7FB8u;
            goto label_2d7fb8;
        }
    }
    ctx->pc = 0x2D7F80u;
label_2d7f80:
    // 0x2d7f80: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d7f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d7f84:
    // 0x2d7f84: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2d7f84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2d7f88:
    // 0x2d7f88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d7f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d7f8c:
    // 0x2d7f8c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2d7f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_2d7f90:
    // 0x2d7f90: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d7f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_2d7f94:
    // 0x2d7f94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2d7f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2d7f98:
    // 0x2d7f98: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2d7f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2d7f9c:
    // 0x2d7f9c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2d7f9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fa0:
    // 0x2d7fa0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d7fa0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7fa4:
    // 0x2d7fa4: 0xc0bee7a  jal         func_2FB9E8
label_2d7fa8:
    if (ctx->pc == 0x2D7FA8u) {
        ctx->pc = 0x2D7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FA4u;
        // 0x2d7fa8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7FACu;
        goto label_2d7fac;
    }
    ctx->pc = 0x2D7FA4u;
    SET_GPR_U32(ctx, 31, 0x2D7FACu);
    ctx->pc = 0x2D7FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7FA4u;
    // 0x2d7fa8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2D7FA4u, 0x2D7FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7FACu;
label_2d7fac:
    // 0x2d7fac: 0x10000003  b           . + 4 + (0x3 << 2)
label_2d7fb0:
    if (ctx->pc == 0x2D7FB0u) {
        ctx->pc = 0x2D7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FACu;
        // 0x2d7fb0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7FB4u;
        goto label_2d7fb4;
    }
    ctx->pc = 0x2D7FACu;
    {
        const bool branch_taken_0x2d7fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FACu;
        // 0x2d7fb0: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fac) {
            ctx->pc = 0x2D7FBCu;
            goto label_2d7fbc;
        }
    }
    ctx->pc = 0x2D7FB4u;
label_2d7fb4:
    // 0x2d7fb4: 0xa220003c  sb          $zero, 0x3C($s1)
    ctx->pc = 0x2d7fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 0));
label_2d7fb8:
    // 0x2d7fb8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2d7fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2d7fbc:
    // 0x2d7fbc: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2d7fbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2d7fc0:
    // 0x2d7fc0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2d7fc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2d7fc4:
    // 0x2d7fc4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2d7fc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2d7fc8:
    // 0x2d7fc8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2d7fc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2d7fcc:
    // 0x2d7fcc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d7fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2d7fd0:
    // 0x2d7fd0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2d7fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2d7fd4:
    // 0x2d7fd4: 0x3e00008  jr          $ra
label_2d7fd8:
    if (ctx->pc == 0x2D7FD8u) {
        ctx->pc = 0x2D7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FD4u;
        // 0x2d7fd8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D7FDCu;
        goto label_2d7fdc;
    }
    ctx->pc = 0x2D7FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FD4u;
        // 0x2d7fd8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7FDCu;
label_2d7fdc:
    // 0x2d7fdc: 0x0  nop
    ctx->pc = 0x2d7fdcu;
    // NOP
    ctx->pc = 0x2d7fe0u;
}
