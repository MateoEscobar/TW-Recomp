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

// Function: sub_003C7DE0
// Address: 0x3c7de0 - 0x3c8090
void sub_003C7DE0_0x3c7de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7DE0_0x3c7de0");
#endif

    switch (ctx->pc) {
        case 0x3c7de0u: goto label_3c7de0;
        case 0x3c7de4u: goto label_3c7de4;
        case 0x3c7de8u: goto label_3c7de8;
        case 0x3c7decu: goto label_3c7dec;
        case 0x3c7df0u: goto label_3c7df0;
        case 0x3c7df4u: goto label_3c7df4;
        case 0x3c7df8u: goto label_3c7df8;
        case 0x3c7dfcu: goto label_3c7dfc;
        case 0x3c7e00u: goto label_3c7e00;
        case 0x3c7e04u: goto label_3c7e04;
        case 0x3c7e08u: goto label_3c7e08;
        case 0x3c7e0cu: goto label_3c7e0c;
        case 0x3c7e10u: goto label_3c7e10;
        case 0x3c7e14u: goto label_3c7e14;
        case 0x3c7e18u: goto label_3c7e18;
        case 0x3c7e1cu: goto label_3c7e1c;
        case 0x3c7e20u: goto label_3c7e20;
        case 0x3c7e24u: goto label_3c7e24;
        case 0x3c7e28u: goto label_3c7e28;
        case 0x3c7e2cu: goto label_3c7e2c;
        case 0x3c7e30u: goto label_3c7e30;
        case 0x3c7e34u: goto label_3c7e34;
        case 0x3c7e38u: goto label_3c7e38;
        case 0x3c7e3cu: goto label_3c7e3c;
        case 0x3c7e40u: goto label_3c7e40;
        case 0x3c7e44u: goto label_3c7e44;
        case 0x3c7e48u: goto label_3c7e48;
        case 0x3c7e4cu: goto label_3c7e4c;
        case 0x3c7e50u: goto label_3c7e50;
        case 0x3c7e54u: goto label_3c7e54;
        case 0x3c7e58u: goto label_3c7e58;
        case 0x3c7e5cu: goto label_3c7e5c;
        case 0x3c7e60u: goto label_3c7e60;
        case 0x3c7e64u: goto label_3c7e64;
        case 0x3c7e68u: goto label_3c7e68;
        case 0x3c7e6cu: goto label_3c7e6c;
        case 0x3c7e70u: goto label_3c7e70;
        case 0x3c7e74u: goto label_3c7e74;
        case 0x3c7e78u: goto label_3c7e78;
        case 0x3c7e7cu: goto label_3c7e7c;
        case 0x3c7e80u: goto label_3c7e80;
        case 0x3c7e84u: goto label_3c7e84;
        case 0x3c7e88u: goto label_3c7e88;
        case 0x3c7e8cu: goto label_3c7e8c;
        case 0x3c7e90u: goto label_3c7e90;
        case 0x3c7e94u: goto label_3c7e94;
        case 0x3c7e98u: goto label_3c7e98;
        case 0x3c7e9cu: goto label_3c7e9c;
        case 0x3c7ea0u: goto label_3c7ea0;
        case 0x3c7ea4u: goto label_3c7ea4;
        case 0x3c7ea8u: goto label_3c7ea8;
        case 0x3c7eacu: goto label_3c7eac;
        case 0x3c7eb0u: goto label_3c7eb0;
        case 0x3c7eb4u: goto label_3c7eb4;
        case 0x3c7eb8u: goto label_3c7eb8;
        case 0x3c7ebcu: goto label_3c7ebc;
        case 0x3c7ec0u: goto label_3c7ec0;
        case 0x3c7ec4u: goto label_3c7ec4;
        case 0x3c7ec8u: goto label_3c7ec8;
        case 0x3c7eccu: goto label_3c7ecc;
        case 0x3c7ed0u: goto label_3c7ed0;
        case 0x3c7ed4u: goto label_3c7ed4;
        case 0x3c7ed8u: goto label_3c7ed8;
        case 0x3c7edcu: goto label_3c7edc;
        case 0x3c7ee0u: goto label_3c7ee0;
        case 0x3c7ee4u: goto label_3c7ee4;
        case 0x3c7ee8u: goto label_3c7ee8;
        case 0x3c7eecu: goto label_3c7eec;
        case 0x3c7ef0u: goto label_3c7ef0;
        case 0x3c7ef4u: goto label_3c7ef4;
        case 0x3c7ef8u: goto label_3c7ef8;
        case 0x3c7efcu: goto label_3c7efc;
        case 0x3c7f00u: goto label_3c7f00;
        case 0x3c7f04u: goto label_3c7f04;
        case 0x3c7f08u: goto label_3c7f08;
        case 0x3c7f0cu: goto label_3c7f0c;
        case 0x3c7f10u: goto label_3c7f10;
        case 0x3c7f14u: goto label_3c7f14;
        case 0x3c7f18u: goto label_3c7f18;
        case 0x3c7f1cu: goto label_3c7f1c;
        case 0x3c7f20u: goto label_3c7f20;
        case 0x3c7f24u: goto label_3c7f24;
        case 0x3c7f28u: goto label_3c7f28;
        case 0x3c7f2cu: goto label_3c7f2c;
        case 0x3c7f30u: goto label_3c7f30;
        case 0x3c7f34u: goto label_3c7f34;
        case 0x3c7f38u: goto label_3c7f38;
        case 0x3c7f3cu: goto label_3c7f3c;
        case 0x3c7f40u: goto label_3c7f40;
        case 0x3c7f44u: goto label_3c7f44;
        case 0x3c7f48u: goto label_3c7f48;
        case 0x3c7f4cu: goto label_3c7f4c;
        case 0x3c7f50u: goto label_3c7f50;
        case 0x3c7f54u: goto label_3c7f54;
        case 0x3c7f58u: goto label_3c7f58;
        case 0x3c7f5cu: goto label_3c7f5c;
        case 0x3c7f60u: goto label_3c7f60;
        case 0x3c7f64u: goto label_3c7f64;
        case 0x3c7f68u: goto label_3c7f68;
        case 0x3c7f6cu: goto label_3c7f6c;
        case 0x3c7f70u: goto label_3c7f70;
        case 0x3c7f74u: goto label_3c7f74;
        case 0x3c7f78u: goto label_3c7f78;
        case 0x3c7f7cu: goto label_3c7f7c;
        case 0x3c7f80u: goto label_3c7f80;
        case 0x3c7f84u: goto label_3c7f84;
        case 0x3c7f88u: goto label_3c7f88;
        case 0x3c7f8cu: goto label_3c7f8c;
        case 0x3c7f90u: goto label_3c7f90;
        case 0x3c7f94u: goto label_3c7f94;
        case 0x3c7f98u: goto label_3c7f98;
        case 0x3c7f9cu: goto label_3c7f9c;
        case 0x3c7fa0u: goto label_3c7fa0;
        case 0x3c7fa4u: goto label_3c7fa4;
        case 0x3c7fa8u: goto label_3c7fa8;
        case 0x3c7facu: goto label_3c7fac;
        case 0x3c7fb0u: goto label_3c7fb0;
        case 0x3c7fb4u: goto label_3c7fb4;
        case 0x3c7fb8u: goto label_3c7fb8;
        case 0x3c7fbcu: goto label_3c7fbc;
        case 0x3c7fc0u: goto label_3c7fc0;
        case 0x3c7fc4u: goto label_3c7fc4;
        case 0x3c7fc8u: goto label_3c7fc8;
        case 0x3c7fccu: goto label_3c7fcc;
        case 0x3c7fd0u: goto label_3c7fd0;
        case 0x3c7fd4u: goto label_3c7fd4;
        case 0x3c7fd8u: goto label_3c7fd8;
        case 0x3c7fdcu: goto label_3c7fdc;
        case 0x3c7fe0u: goto label_3c7fe0;
        case 0x3c7fe4u: goto label_3c7fe4;
        case 0x3c7fe8u: goto label_3c7fe8;
        case 0x3c7fecu: goto label_3c7fec;
        case 0x3c7ff0u: goto label_3c7ff0;
        case 0x3c7ff4u: goto label_3c7ff4;
        case 0x3c7ff8u: goto label_3c7ff8;
        case 0x3c7ffcu: goto label_3c7ffc;
        case 0x3c8000u: goto label_3c8000;
        case 0x3c8004u: goto label_3c8004;
        case 0x3c8008u: goto label_3c8008;
        case 0x3c800cu: goto label_3c800c;
        case 0x3c8010u: goto label_3c8010;
        case 0x3c8014u: goto label_3c8014;
        case 0x3c8018u: goto label_3c8018;
        case 0x3c801cu: goto label_3c801c;
        case 0x3c8020u: goto label_3c8020;
        case 0x3c8024u: goto label_3c8024;
        case 0x3c8028u: goto label_3c8028;
        case 0x3c802cu: goto label_3c802c;
        case 0x3c8030u: goto label_3c8030;
        case 0x3c8034u: goto label_3c8034;
        case 0x3c8038u: goto label_3c8038;
        case 0x3c803cu: goto label_3c803c;
        case 0x3c8040u: goto label_3c8040;
        case 0x3c8044u: goto label_3c8044;
        case 0x3c8048u: goto label_3c8048;
        case 0x3c804cu: goto label_3c804c;
        case 0x3c8050u: goto label_3c8050;
        case 0x3c8054u: goto label_3c8054;
        case 0x3c8058u: goto label_3c8058;
        case 0x3c805cu: goto label_3c805c;
        case 0x3c8060u: goto label_3c8060;
        case 0x3c8064u: goto label_3c8064;
        case 0x3c8068u: goto label_3c8068;
        case 0x3c806cu: goto label_3c806c;
        case 0x3c8070u: goto label_3c8070;
        case 0x3c8074u: goto label_3c8074;
        case 0x3c8078u: goto label_3c8078;
        case 0x3c807cu: goto label_3c807c;
        case 0x3c8080u: goto label_3c8080;
        case 0x3c8084u: goto label_3c8084;
        case 0x3c8088u: goto label_3c8088;
        case 0x3c808cu: goto label_3c808c;
        default: break;
    }

    ctx->pc = 0x3c7de0u;

label_3c7de0:
    // 0x3c7de0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3c7de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3c7de4:
    // 0x3c7de4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3c7de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3c7de8:
    // 0x3c7de8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3c7de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3c7dec:
    // 0x3c7dec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c7decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c7df0:
    // 0x3c7df0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3c7df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3c7df4:
    // 0x3c7df4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c7df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c7df8:
    // 0x3c7df8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3c7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3c7dfc:
    // 0x3c7dfc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3c7dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3c7e00:
    // 0x3c7e00: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c7e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3c7e04:
    // 0x3c7e04: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3c7e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3c7e08:
    // 0x3c7e08: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x3c7e08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3c7e0c:
    // 0x3c7e0c: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3c7e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3c7e10:
    // 0x3c7e10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3c7e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3c7e14:
    // 0x3c7e14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c7e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c7e18:
    // 0x3c7e18: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c7e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c7e1c:
    // 0x3c7e1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c7e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c7e20:
    // 0x3c7e20: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c7e20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c7e24:
    // 0x3c7e24: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c7e28:
    // 0x3c7e28: 0x40f809  jalr        $v0
label_3c7e2c:
    if (ctx->pc == 0x3C7E2Cu) {
        ctx->pc = 0x3C7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E28u;
        // 0x3c7e2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7E30u;
        goto label_3c7e30;
    }
    ctx->pc = 0x3C7E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C7E30u);
        ctx->pc = 0x3C7E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E28u;
        // 0x3c7e2c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7E28u, 0x3C7E30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C7E30u;
label_3c7e30:
    // 0x3c7e30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3c7e30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c7e34:
    // 0x3c7e34: 0xc0ea14c  jal         func_3A8530
label_3c7e38:
    if (ctx->pc == 0x3C7E38u) {
        ctx->pc = 0x3C7E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E34u;
        // 0x3c7e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7E3Cu;
        goto label_3c7e3c;
    }
    ctx->pc = 0x3C7E34u;
    SET_GPR_U32(ctx, 31, 0x3C7E3Cu);
    ctx->pc = 0x3C7E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7E34u;
    // 0x3c7e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3C7E34u, 0x3C7E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7E3Cu;
label_3c7e3c:
    // 0x3c7e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7e40:
    // 0x3c7e40: 0xc0ea146  jal         func_3A8518
label_3c7e44:
    if (ctx->pc == 0x3C7E44u) {
        ctx->pc = 0x3C7E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E40u;
        // 0x3c7e44: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7E48u;
        goto label_3c7e48;
    }
    ctx->pc = 0x3C7E40u;
    SET_GPR_U32(ctx, 31, 0x3C7E48u);
    ctx->pc = 0x3C7E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7E40u;
    // 0x3c7e44: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C7E40u, 0x3C7E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7E48u;
label_3c7e48:
    // 0x3c7e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7e4c:
    // 0x3c7e4c: 0xc0ea146  jal         func_3A8518
label_3c7e50:
    if (ctx->pc == 0x3C7E50u) {
        ctx->pc = 0x3C7E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E4Cu;
        // 0x3c7e50: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7E54u;
        goto label_3c7e54;
    }
    ctx->pc = 0x3C7E4Cu;
    SET_GPR_U32(ctx, 31, 0x3C7E54u);
    ctx->pc = 0x3C7E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7E4Cu;
    // 0x3c7e50: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C7E4Cu, 0x3C7E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7E54u;
label_3c7e54:
    // 0x3c7e54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7e58:
    // 0x3c7e58: 0xc0ea146  jal         func_3A8518
label_3c7e5c:
    if (ctx->pc == 0x3C7E5Cu) {
        ctx->pc = 0x3C7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E58u;
        // 0x3c7e5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7E60u;
        goto label_3c7e60;
    }
    ctx->pc = 0x3C7E58u;
    SET_GPR_U32(ctx, 31, 0x3C7E60u);
    ctx->pc = 0x3C7E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7E58u;
    // 0x3c7e5c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3C7E58u, 0x3C7E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7E60u;
label_3c7e60:
    // 0x3c7e60: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c7e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c7e64:
    // 0x3c7e64: 0xc0ea13a  jal         func_3A84E8
label_3c7e68:
    if (ctx->pc == 0x3C7E68u) {
        ctx->pc = 0x3C7E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E64u;
        // 0x3c7e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7E6Cu;
        goto label_3c7e6c;
    }
    ctx->pc = 0x3C7E64u;
    SET_GPR_U32(ctx, 31, 0x3C7E6Cu);
    ctx->pc = 0x3C7E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7E64u;
    // 0x3c7e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C7E64u, 0x3C7E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7E6Cu;
label_3c7e6c:
    // 0x3c7e6c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c7e6cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c7e70:
    // 0x3c7e70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c7e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c7e74:
    // 0x3c7e74: 0xc0ea12a  jal         func_3A84A8
label_3c7e78:
    if (ctx->pc == 0x3C7E78u) {
        ctx->pc = 0x3C7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E74u;
        // 0x3c7e78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7E7Cu;
        goto label_3c7e7c;
    }
    ctx->pc = 0x3C7E74u;
    SET_GPR_U32(ctx, 31, 0x3C7E7Cu);
    ctx->pc = 0x3C7E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7E74u;
    // 0x3c7e78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C7E74u, 0x3C7E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7E7Cu;
label_3c7e7c:
    // 0x3c7e7c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3c7e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c7e80:
    // 0x3c7e80: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3c7e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3c7e84:
    // 0x3c7e84: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3c7e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3c7e88:
    // 0x3c7e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c7e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c7e8c:
    // 0x3c7e8c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c7e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3c7e90:
    // 0x3c7e90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3c7e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c7e94:
    // 0x3c7e94: 0xc0e858c  jal         func_3A1630
label_3c7e98:
    if (ctx->pc == 0x3C7E98u) {
        ctx->pc = 0x3C7E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7E94u;
        // 0x3c7e98: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7E9Cu;
        goto label_3c7e9c;
    }
    ctx->pc = 0x3C7E94u;
    SET_GPR_U32(ctx, 31, 0x3C7E9Cu);
    ctx->pc = 0x3C7E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7E94u;
    // 0x3c7e98: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C7E94u, 0x3C7E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7E9Cu;
label_3c7e9c:
    // 0x3c7e9c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3c7e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3c7ea0:
    // 0x3c7ea0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3c7ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3c7ea4:
    // 0x3c7ea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c7ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7ea8:
    // 0x3c7ea8: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3c7ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c7eac:
    // 0x3c7eac: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3c7eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3c7eb0:
    // 0x3c7eb0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c7eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c7eb4:
    // 0x3c7eb4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3c7eb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c7eb8:
    // 0x3c7eb8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3c7eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3c7ebc:
    // 0x3c7ebc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3c7ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c7ec0:
    // 0x3c7ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7ec4:
    // 0x3c7ec4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3c7ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3c7ec8:
    // 0x3c7ec8: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3c7ec8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c7ecc:
    // 0x3c7ecc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c7eccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7ed0:
    // 0x3c7ed0: 0xc136b18  jal         func_4DAC60
label_3c7ed4:
    if (ctx->pc == 0x3C7ED4u) {
        ctx->pc = 0x3C7ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7ED0u;
        // 0x3c7ed4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7ED8u;
        goto label_3c7ed8;
    }
    ctx->pc = 0x3C7ED0u;
    SET_GPR_U32(ctx, 31, 0x3C7ED8u);
    ctx->pc = 0x3C7ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7ED0u;
    // 0x3c7ed4: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C7ED0u, 0x3C7ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7ED8u;
label_3c7ed8:
    // 0x3c7ed8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c7ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c7edc:
    // 0x3c7edc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c7edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7ee0:
    // 0x3c7ee0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3c7ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c7ee4:
    // 0x3c7ee4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c7ee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7ee8:
    // 0x3c7ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c7ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c7eec:
    // 0x3c7eec: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3c7eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c7ef0:
    // 0x3c7ef0: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x3c7ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3c7ef4:
    // 0x3c7ef4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c7ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c7ef8:
    // 0x3c7ef8: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3c7ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3c7efc:
    // 0x3c7efc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x3c7efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_3c7f00:
    // 0x3c7f00: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3c7f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3c7f04:
    // 0x3c7f04: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3c7f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3c7f08:
    // 0x3c7f08: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3c7f08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c7f0c:
    // 0x3c7f0c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c7f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7f10:
    // 0x3c7f10: 0xc136b18  jal         func_4DAC60
label_3c7f14:
    if (ctx->pc == 0x3C7F14u) {
        ctx->pc = 0x3C7F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F10u;
        // 0x3c7f14: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7F18u;
        goto label_3c7f18;
    }
    ctx->pc = 0x3C7F10u;
    SET_GPR_U32(ctx, 31, 0x3C7F18u);
    ctx->pc = 0x3C7F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7F10u;
    // 0x3c7f14: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C7F10u, 0x3C7F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7F18u;
label_3c7f18:
    // 0x3c7f18: 0x7ba60030  lq          $a2, 0x30($sp)
    ctx->pc = 0x3c7f18u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c7f1c:
    // 0x3c7f1c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3c7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3c7f20:
    // 0x3c7f20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c7f24:
    // 0x3c7f24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c7f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3c7f28:
    // 0x3c7f28: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x3c7f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_3c7f2c:
    // 0x3c7f2c: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x3c7f2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_3c7f30:
    // 0x3c7f30: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3c7f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3c7f34:
    // 0x3c7f34: 0x7e260010  sq          $a2, 0x10($s1)
    ctx->pc = 0x3c7f34u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 6));
label_3c7f38:
    // 0x3c7f38: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3c7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3c7f3c:
    // 0x3c7f3c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c7f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c7f40:
    // 0x3c7f40: 0xae3200c4  sw          $s2, 0xC4($s1)
    ctx->pc = 0x3c7f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 18));
label_3c7f44:
    // 0x3c7f44: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c7f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c7f48:
    // 0x3c7f48: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x3c7f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_3c7f4c:
    // 0x3c7f4c: 0x24050023  addiu       $a1, $zero, 0x23
    ctx->pc = 0x3c7f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_3c7f50:
    // 0x3c7f50: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x3c7f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
label_3c7f54:
    // 0x3c7f54: 0xc0cd4ee  jal         func_3353B8
label_3c7f58:
    if (ctx->pc == 0x3C7F58u) {
        ctx->pc = 0x3C7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F54u;
        // 0x3c7f58: 0xe6b40008  swc1        $f20, 0x8($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7F5Cu;
        goto label_3c7f5c;
    }
    ctx->pc = 0x3C7F54u;
    SET_GPR_U32(ctx, 31, 0x3C7F5Cu);
    ctx->pc = 0x3C7F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7F54u;
    // 0x3c7f58: 0xe6b40008  swc1        $f20, 0x8($s5) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C7F54u, 0x3C7F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7F5Cu;
label_3c7f5c:
    // 0x3c7f5c: 0xa2a20004  sb          $v0, 0x4($s5)
    ctx->pc = 0x3c7f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4), (uint8_t)GPR_U32(ctx, 2));
label_3c7f60:
    // 0x3c7f60: 0xaeb3000c  sw          $s3, 0xC($s5)
    ctx->pc = 0x3c7f60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 19));
label_3c7f64:
    // 0x3c7f64: 0xaeb40020  sw          $s4, 0x20($s5)
    ctx->pc = 0x3c7f64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 20));
label_3c7f68:
    // 0x3c7f68: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x3c7f68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_3c7f6c:
    // 0x3c7f6c: 0xaea00010  sw          $zero, 0x10($s5)
    ctx->pc = 0x3c7f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 0));
label_3c7f70:
    // 0x3c7f70: 0x3c014055  lui         $at, 0x4055
    ctx->pc = 0x3c7f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16469 << 16));
label_3c7f74:
    // 0x3c7f74: 0x34215555  ori         $at, $at, 0x5555
    ctx->pc = 0x3c7f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21845);
label_3c7f78:
    // 0x3c7f78: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c7f7c:
    // 0x3c7f7c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3c7f7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3c7f80:
    // 0x3c7f80: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x3c7f80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_3c7f84:
    // 0x3c7f84: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c7f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c7f88:
    // 0x3c7f88: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x3c7f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7f8c:
    // 0x3c7f8c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3c7f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3c7f90:
    // 0x3c7f90: 0xc10b1c6  jal         func_42C718
label_3c7f94:
    if (ctx->pc == 0x3C7F94u) {
        ctx->pc = 0x3C7F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F90u;
        // 0x3c7f94: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7F98u;
        goto label_3c7f98;
    }
    ctx->pc = 0x3C7F90u;
    SET_GPR_U32(ctx, 31, 0x3C7F98u);
    ctx->pc = 0x3C7F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7F90u;
    // 0x3c7f94: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3C7F90u, 0x3C7F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7F98u;
label_3c7f98:
    // 0x3c7f98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3c7f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c7f9c:
    // 0x3c7f9c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c7f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c7fa0:
    // 0x3c7fa0: 0x2ca40005  sltiu       $a0, $a1, 0x5
    ctx->pc = 0x3c7fa0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3c7fa4:
    // 0x3c7fa4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3c7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c7fa8:
    // 0x3c7fa8: 0x44280a  movz        $a1, $v0, $a0
    ctx->pc = 0x3c7fa8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_3c7fac:
    // 0x3c7fac: 0x2464cf14  addiu       $a0, $v1, -0x30EC
    ctx->pc = 0x3c7facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954772));
label_3c7fb0:
    // 0x3c7fb0: 0x24a60005  addiu       $a2, $a1, 0x5
    ctx->pc = 0x3c7fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_3c7fb4:
    // 0x3c7fb4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_3c7fb8:
    if (ctx->pc == 0x3C7FB8u) {
        ctx->pc = 0x3C7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7FB4u;
        // 0x3c7fb8: 0x24a70008  addiu       $a3, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C7FBCu;
        goto label_3c7fbc;
    }
    ctx->pc = 0x3C7FB4u;
    {
        const bool branch_taken_0x3c7fb4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3C7FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7FB4u;
        // 0x3c7fb8: 0x24a70008  addiu       $a3, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7fb4) {
            ctx->pc = 0x3C7FD0u;
            goto label_3c7fd0;
        }
    }
    ctx->pc = 0x3C7FBCu;
label_3c7fbc:
    // 0x3c7fbc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3c7fbcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7fc0:
    // 0x3c7fc0: 0x0  nop
    ctx->pc = 0x3c7fc0u;
    // NOP
label_3c7fc4:
    // 0x3c7fc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c7fc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c7fc8:
    // 0x3c7fc8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c7fcc:
    if (ctx->pc == 0x3C7FCCu) {
        ctx->pc = 0x3C7FD0u;
        goto label_3c7fd0;
    }
    ctx->pc = 0x3C7FC8u;
    {
        const bool branch_taken_0x3c7fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7fc8) {
            ctx->pc = 0x3C7FECu;
            goto label_3c7fec;
        }
    }
    ctx->pc = 0x3C7FD0u;
label_3c7fd0:
    // 0x3c7fd0: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x3c7fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_3c7fd4:
    // 0x3c7fd4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3c7fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3c7fd8:
    // 0x3c7fd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c7fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c7fdc:
    // 0x3c7fdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3c7fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c7fe0:
    // 0x3c7fe0: 0x0  nop
    ctx->pc = 0x3c7fe0u;
    // NOP
label_3c7fe4:
    // 0x3c7fe4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c7fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c7fe8:
    // 0x3c7fe8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3c7fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3c7fec:
    // 0x3c7fec: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3c7fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3c7ff0:
    // 0x3c7ff0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c7ff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c7ff4:
    // 0x3c7ff4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c7ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c7ff8:
    // 0x3c7ff8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3c7ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c7ffc:
    // 0x3c7ffc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3c7ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c8000:
    // 0x3c8000: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3c8000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_3c8004:
    // 0x3c8004: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c8004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c8008:
    // 0x3c8008: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c8008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c800c:
    // 0x3c800c: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x3c800cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_3c8010:
    // 0x3c8010: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3c8010u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3c8014:
    // 0x3c8014: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x3c8014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3c8018:
    // 0x3c8018: 0xc06701c  jal         func_19C070
label_3c801c:
    if (ctx->pc == 0x3C801Cu) {
        ctx->pc = 0x3C801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8018u;
        // 0x3c801c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8020u;
        goto label_3c8020;
    }
    ctx->pc = 0x3C8018u;
    SET_GPR_U32(ctx, 31, 0x3C8020u);
    ctx->pc = 0x3C801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8018u;
    // 0x3c801c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C070u, 0x3C8018u, 0x3C8020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8020u;
label_3c8020:
    // 0x3c8020: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c8020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c8024:
    // 0x3c8024: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c8024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c8028:
    // 0x3c8028: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x3c8028u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
label_3c802c:
    // 0x3c802c: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
label_3c8030:
    if (ctx->pc == 0x3C8030u) {
        ctx->pc = 0x3C8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C802Cu;
        // 0x3c8030: 0xe6ac001c  swc1        $f12, 0x1C($s5) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8034u;
        goto label_3c8034;
    }
    ctx->pc = 0x3C802Cu;
    {
        const bool branch_taken_0x3c802c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C802Cu;
        // 0x3c8030: 0xe6ac001c  swc1        $f12, 0x1C($s5) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c802c) {
            ctx->pc = 0x3C805Cu;
            goto label_3c805c;
        }
    }
    ctx->pc = 0x3C8034u;
label_3c8034:
    // 0x3c8034: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3c8034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3c8038:
    // 0x3c8038: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3c8038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_3c803c:
    // 0x3c803c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3c803cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3c8040:
    // 0x3c8040: 0x24a54400  addiu       $a1, $a1, 0x4400
    ctx->pc = 0x3c8040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17408));
label_3c8044:
    // 0x3c8044: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3c8044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c8048:
    // 0x3c8048: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3c8048u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3c804c:
    // 0x3c804c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3c804cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c8050:
    // 0x3c8050: 0xc043f52  jal         func_10FD48
label_3c8054:
    if (ctx->pc == 0x3C8054u) {
        ctx->pc = 0x3C8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8050u;
        // 0x3c8054: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C8058u;
        goto label_3c8058;
    }
    ctx->pc = 0x3C8050u;
    SET_GPR_U32(ctx, 31, 0x3C8058u);
    ctx->pc = 0x3C8054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8050u;
    // 0x3c8054: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FD48u, 0x3C8050u, 0x3C8058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8058u;
label_3c8058:
    // 0x3c8058: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x3c8058u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
label_3c805c:
    // 0x3c805c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3c805cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c8060:
    // 0x3c8060: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3c8060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c8064:
    // 0x3c8064: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3c8064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c8068:
    // 0x3c8068: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3c8068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c806c:
    // 0x3c806c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3c806cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c8070:
    // 0x3c8070: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c8070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c8074:
    // 0x3c8074: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3c8074u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c8078:
    // 0x3c8078: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c8078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c807c:
    // 0x3c807c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x3c807cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c8080:
    // 0x3c8080: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3c8080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c8084:
    // 0x3c8084: 0x3e00008  jr          $ra
label_3c8088:
    if (ctx->pc == 0x3C8088u) {
        ctx->pc = 0x3C8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8084u;
        // 0x3c8088: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C808Cu;
        goto label_3c808c;
    }
    ctx->pc = 0x3C8084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8084u;
        // 0x3c8088: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C808Cu;
label_3c808c:
    // 0x3c808c: 0x0  nop
    ctx->pc = 0x3c808cu;
    // NOP
    ctx->pc = 0x3c8090u;
}
