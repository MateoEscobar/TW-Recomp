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

// Function: sub_003F7EB8
// Address: 0x3f7eb8 - 0x3f8048
void sub_003F7EB8_0x3f7eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7EB8_0x3f7eb8");
#endif

    switch (ctx->pc) {
        case 0x3f7eb8u: goto label_3f7eb8;
        case 0x3f7ebcu: goto label_3f7ebc;
        case 0x3f7ec0u: goto label_3f7ec0;
        case 0x3f7ec4u: goto label_3f7ec4;
        case 0x3f7ec8u: goto label_3f7ec8;
        case 0x3f7eccu: goto label_3f7ecc;
        case 0x3f7ed0u: goto label_3f7ed0;
        case 0x3f7ed4u: goto label_3f7ed4;
        case 0x3f7ed8u: goto label_3f7ed8;
        case 0x3f7edcu: goto label_3f7edc;
        case 0x3f7ee0u: goto label_3f7ee0;
        case 0x3f7ee4u: goto label_3f7ee4;
        case 0x3f7ee8u: goto label_3f7ee8;
        case 0x3f7eecu: goto label_3f7eec;
        case 0x3f7ef0u: goto label_3f7ef0;
        case 0x3f7ef4u: goto label_3f7ef4;
        case 0x3f7ef8u: goto label_3f7ef8;
        case 0x3f7efcu: goto label_3f7efc;
        case 0x3f7f00u: goto label_3f7f00;
        case 0x3f7f04u: goto label_3f7f04;
        case 0x3f7f08u: goto label_3f7f08;
        case 0x3f7f0cu: goto label_3f7f0c;
        case 0x3f7f10u: goto label_3f7f10;
        case 0x3f7f14u: goto label_3f7f14;
        case 0x3f7f18u: goto label_3f7f18;
        case 0x3f7f1cu: goto label_3f7f1c;
        case 0x3f7f20u: goto label_3f7f20;
        case 0x3f7f24u: goto label_3f7f24;
        case 0x3f7f28u: goto label_3f7f28;
        case 0x3f7f2cu: goto label_3f7f2c;
        case 0x3f7f30u: goto label_3f7f30;
        case 0x3f7f34u: goto label_3f7f34;
        case 0x3f7f38u: goto label_3f7f38;
        case 0x3f7f3cu: goto label_3f7f3c;
        case 0x3f7f40u: goto label_3f7f40;
        case 0x3f7f44u: goto label_3f7f44;
        case 0x3f7f48u: goto label_3f7f48;
        case 0x3f7f4cu: goto label_3f7f4c;
        case 0x3f7f50u: goto label_3f7f50;
        case 0x3f7f54u: goto label_3f7f54;
        case 0x3f7f58u: goto label_3f7f58;
        case 0x3f7f5cu: goto label_3f7f5c;
        case 0x3f7f60u: goto label_3f7f60;
        case 0x3f7f64u: goto label_3f7f64;
        case 0x3f7f68u: goto label_3f7f68;
        case 0x3f7f6cu: goto label_3f7f6c;
        case 0x3f7f70u: goto label_3f7f70;
        case 0x3f7f74u: goto label_3f7f74;
        case 0x3f7f78u: goto label_3f7f78;
        case 0x3f7f7cu: goto label_3f7f7c;
        case 0x3f7f80u: goto label_3f7f80;
        case 0x3f7f84u: goto label_3f7f84;
        case 0x3f7f88u: goto label_3f7f88;
        case 0x3f7f8cu: goto label_3f7f8c;
        case 0x3f7f90u: goto label_3f7f90;
        case 0x3f7f94u: goto label_3f7f94;
        case 0x3f7f98u: goto label_3f7f98;
        case 0x3f7f9cu: goto label_3f7f9c;
        case 0x3f7fa0u: goto label_3f7fa0;
        case 0x3f7fa4u: goto label_3f7fa4;
        case 0x3f7fa8u: goto label_3f7fa8;
        case 0x3f7facu: goto label_3f7fac;
        case 0x3f7fb0u: goto label_3f7fb0;
        case 0x3f7fb4u: goto label_3f7fb4;
        case 0x3f7fb8u: goto label_3f7fb8;
        case 0x3f7fbcu: goto label_3f7fbc;
        case 0x3f7fc0u: goto label_3f7fc0;
        case 0x3f7fc4u: goto label_3f7fc4;
        case 0x3f7fc8u: goto label_3f7fc8;
        case 0x3f7fccu: goto label_3f7fcc;
        case 0x3f7fd0u: goto label_3f7fd0;
        case 0x3f7fd4u: goto label_3f7fd4;
        case 0x3f7fd8u: goto label_3f7fd8;
        case 0x3f7fdcu: goto label_3f7fdc;
        case 0x3f7fe0u: goto label_3f7fe0;
        case 0x3f7fe4u: goto label_3f7fe4;
        case 0x3f7fe8u: goto label_3f7fe8;
        case 0x3f7fecu: goto label_3f7fec;
        case 0x3f7ff0u: goto label_3f7ff0;
        case 0x3f7ff4u: goto label_3f7ff4;
        case 0x3f7ff8u: goto label_3f7ff8;
        case 0x3f7ffcu: goto label_3f7ffc;
        case 0x3f8000u: goto label_3f8000;
        case 0x3f8004u: goto label_3f8004;
        case 0x3f8008u: goto label_3f8008;
        case 0x3f800cu: goto label_3f800c;
        case 0x3f8010u: goto label_3f8010;
        case 0x3f8014u: goto label_3f8014;
        case 0x3f8018u: goto label_3f8018;
        case 0x3f801cu: goto label_3f801c;
        case 0x3f8020u: goto label_3f8020;
        case 0x3f8024u: goto label_3f8024;
        case 0x3f8028u: goto label_3f8028;
        case 0x3f802cu: goto label_3f802c;
        case 0x3f8030u: goto label_3f8030;
        case 0x3f8034u: goto label_3f8034;
        case 0x3f8038u: goto label_3f8038;
        case 0x3f803cu: goto label_3f803c;
        case 0x3f8040u: goto label_3f8040;
        case 0x3f8044u: goto label_3f8044;
        default: break;
    }

    ctx->pc = 0x3f7eb8u;

label_3f7eb8:
    // 0x3f7eb8: 0x27bdf710  addiu       $sp, $sp, -0x8F0
    ctx->pc = 0x3f7eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965008));
label_3f7ebc:
    // 0x3f7ebc: 0x7fb108d0  sq          $s1, 0x8D0($sp)
    ctx->pc = 0x3f7ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 17));
label_3f7ec0:
    // 0x3f7ec0: 0x7fb208c0  sq          $s2, 0x8C0($sp)
    ctx->pc = 0x3f7ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 18));
label_3f7ec4:
    // 0x3f7ec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f7ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f7ec8:
    // 0x3f7ec8: 0x7fb308b0  sq          $s3, 0x8B0($sp)
    ctx->pc = 0x3f7ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 19));
label_3f7ecc:
    // 0x3f7ecc: 0x7fb008e0  sq          $s0, 0x8E0($sp)
    ctx->pc = 0x3f7eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 16));
label_3f7ed0:
    // 0x3f7ed0: 0xffbf08a0  sd          $ra, 0x8A0($sp)
    ctx->pc = 0x3f7ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2208), GPR_U64(ctx, 31));
label_3f7ed4:
    // 0x3f7ed4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f7ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f7ed8:
    // 0x3f7ed8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f7ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f7edc:
    // 0x3f7edc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f7ee0:
    // 0x3f7ee0: 0x40f809  jalr        $v0
label_3f7ee4:
    if (ctx->pc == 0x3F7EE4u) {
        ctx->pc = 0x3F7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7EE0u;
        // 0x3f7ee4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7EE8u;
        goto label_3f7ee8;
    }
    ctx->pc = 0x3F7EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F7EE8u);
        ctx->pc = 0x3F7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7EE0u;
        // 0x3f7ee4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F7EE0u, 0x3F7EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F7EE8u;
label_3f7ee8:
    // 0x3f7ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f7ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f7eec:
    // 0x3f7eec: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3f7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3f7ef0:
    // 0x3f7ef0: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_3f7ef4:
    if (ctx->pc == 0x3F7EF4u) {
        ctx->pc = 0x3F7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7EF0u;
        // 0x3f7ef4: 0x8e530020  lw          $s3, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7EF8u;
        goto label_3f7ef8;
    }
    ctx->pc = 0x3F7EF0u;
    {
        const bool branch_taken_0x3f7ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7EF0u;
        // 0x3f7ef4: 0x8e530020  lw          $s3, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7ef0) {
            ctx->pc = 0x3F8024u;
            goto label_3f8024;
        }
    }
    ctx->pc = 0x3F7EF8u;
label_3f7ef8:
    // 0x3f7ef8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f7ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f7efc:
    // 0x3f7efc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3f7efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3f7f00:
    // 0x3f7f00: 0x27b00410  addiu       $s0, $sp, 0x410
    ctx->pc = 0x3f7f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3f7f04:
    // 0x3f7f04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f7f08:
    // 0x3f7f08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3f7f0c:
    // 0x3f7f0c: 0x0  nop
    ctx->pc = 0x3f7f0cu;
    // NOP
label_3f7f10:
    // 0x3f7f10: 0x0  nop
    ctx->pc = 0x3f7f10u;
    // NOP
label_3f7f14:
    // 0x3f7f14: 0x0  nop
    ctx->pc = 0x3f7f14u;
    // NOP
label_3f7f18:
    // 0x3f7f18: 0x0  nop
    ctx->pc = 0x3f7f18u;
    // NOP
label_3f7f1c:
    // 0x3f7f1c: 0x0  nop
    ctx->pc = 0x3f7f1cu;
    // NOP
label_3f7f20:
    // 0x3f7f20: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3f7f24:
    if (ctx->pc == 0x3F7F24u) {
        ctx->pc = 0x3F7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F20u;
        // 0x3f7f24: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7F28u;
        goto label_3f7f28;
    }
    ctx->pc = 0x3F7F20u;
    {
        const bool branch_taken_0x3f7f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F20u;
        // 0x3f7f24: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f20) {
            ctx->pc = 0x3F7F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f7f10;
        }
    }
    ctx->pc = 0x3F7F28u;
label_3f7f28:
    // 0x3f7f28: 0xc138ddc  jal         func_4E3770
label_3f7f2c:
    if (ctx->pc == 0x3F7F2Cu) {
        ctx->pc = 0x3F7F30u;
        goto label_3f7f30;
    }
    ctx->pc = 0x3F7F28u;
    SET_GPR_U32(ctx, 31, 0x3F7F30u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3F7F28u, 0x3F7F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7F30u;
label_3f7f30:
    // 0x3f7f30: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3f7f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3f7f34:
    // 0x3f7f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f7f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7f38:
    // 0x3f7f38: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3f7f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_3f7f3c:
    // 0x3f7f3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f7f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7f40:
    // 0x3f7f40: 0xc0e94a0  jal         func_3A5280
label_3f7f44:
    if (ctx->pc == 0x3F7F44u) {
        ctx->pc = 0x3F7F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F40u;
        // 0x3f7f44: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7F48u;
        goto label_3f7f48;
    }
    ctx->pc = 0x3F7F40u;
    SET_GPR_U32(ctx, 31, 0x3F7F48u);
    ctx->pc = 0x3F7F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7F40u;
    // 0x3f7f44: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3F7F40u, 0x3F7F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7F48u;
label_3f7f48:
    // 0x3f7f48: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3f7f4c:
    if (ctx->pc == 0x3F7F4Cu) {
        ctx->pc = 0x3F7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F48u;
        // 0x3f7f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7F50u;
        goto label_3f7f50;
    }
    ctx->pc = 0x3F7F48u;
    {
        const bool branch_taken_0x3f7f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F7F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F48u;
        // 0x3f7f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f48) {
            ctx->pc = 0x3F7F68u;
            goto label_3f7f68;
        }
    }
    ctx->pc = 0x3F7F50u;
label_3f7f50:
    // 0x3f7f50: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3f7f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3f7f54:
    // 0x3f7f54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3f7f58:
    if (ctx->pc == 0x3F7F58u) {
        ctx->pc = 0x3F7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F54u;
        // 0x3f7f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7F5Cu;
        goto label_3f7f5c;
    }
    ctx->pc = 0x3F7F54u;
    {
        const bool branch_taken_0x3f7f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F54u;
        // 0x3f7f58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f54) {
            ctx->pc = 0x3F7F64u;
            goto label_3f7f64;
        }
    }
    ctx->pc = 0x3F7F5Cu;
label_3f7f5c:
    // 0x3f7f5c: 0xc0e858c  jal         func_3A1630
label_3f7f60:
    if (ctx->pc == 0x3F7F60u) {
        ctx->pc = 0x3F7F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F5Cu;
        // 0x3f7f60: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7F64u;
        goto label_3f7f64;
    }
    ctx->pc = 0x3F7F5Cu;
    SET_GPR_U32(ctx, 31, 0x3F7F64u);
    ctx->pc = 0x3F7F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7F5Cu;
    // 0x3f7f60: 0x240500b4  addiu       $a1, $zero, 0xB4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F7F5Cu, 0x3F7F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7F64u;
label_3f7f64:
    // 0x3f7f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f7f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f7f68:
    // 0x3f7f68: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x3f7f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
label_3f7f6c:
    // 0x3f7f6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f7f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f7f70:
    // 0x3f7f70: 0xc0e94a0  jal         func_3A5280
label_3f7f74:
    if (ctx->pc == 0x3F7F74u) {
        ctx->pc = 0x3F7F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F70u;
        // 0x3f7f74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7F78u;
        goto label_3f7f78;
    }
    ctx->pc = 0x3F7F70u;
    SET_GPR_U32(ctx, 31, 0x3F7F78u);
    ctx->pc = 0x3F7F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7F70u;
    // 0x3f7f74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3F7F70u, 0x3F7F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7F78u;
label_3f7f78:
    // 0x3f7f78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3f7f7c:
    if (ctx->pc == 0x3F7F7Cu) {
        ctx->pc = 0x3F7F80u;
        goto label_3f7f80;
    }
    ctx->pc = 0x3F7F78u;
    {
        const bool branch_taken_0x3f7f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f7f78) {
            ctx->pc = 0x3F7F8Cu;
            goto label_3f7f8c;
        }
    }
    ctx->pc = 0x3F7F80u;
label_3f7f80:
    // 0x3f7f80: 0xc0e9694  jal         func_3A5A50
label_3f7f84:
    if (ctx->pc == 0x3F7F84u) {
        ctx->pc = 0x3F7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F80u;
        // 0x3f7f84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7F88u;
        goto label_3f7f88;
    }
    ctx->pc = 0x3F7F80u;
    SET_GPR_U32(ctx, 31, 0x3F7F88u);
    ctx->pc = 0x3F7F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7F80u;
    // 0x3f7f84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F7F80u, 0x3F7F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7F88u;
label_3f7f88:
    // 0x3f7f88: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x3f7f88u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3f7f8c:
    // 0x3f7f8c: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_3f7f90:
    if (ctx->pc == 0x3F7F90u) {
        ctx->pc = 0x3F7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F8Cu;
        // 0x3f7f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7F94u;
        goto label_3f7f94;
    }
    ctx->pc = 0x3F7F8Cu;
    {
        const bool branch_taken_0x3f7f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F8Cu;
        // 0x3f7f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f8c) {
            ctx->pc = 0x3F8028u;
            goto label_3f8028;
        }
    }
    ctx->pc = 0x3F7F94u;
label_3f7f94:
    // 0x3f7f94: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3f7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3f7f98:
    // 0x3f7f98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3f7f9c:
    if (ctx->pc == 0x3F7F9Cu) {
        ctx->pc = 0x3F7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F98u;
        // 0x3f7f9c: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7FA0u;
        goto label_3f7fa0;
    }
    ctx->pc = 0x3F7F98u;
    {
        const bool branch_taken_0x3f7f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7F98u;
        // 0x3f7f9c: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7f98) {
            ctx->pc = 0x3F7FB0u;
            goto label_3f7fb0;
        }
    }
    ctx->pc = 0x3F7FA0u;
label_3f7fa0:
    // 0x3f7fa0: 0x92450029  lbu         $a1, 0x29($s2)
    ctx->pc = 0x3f7fa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
label_3f7fa4:
    // 0x3f7fa4: 0xc0e858c  jal         func_3A1630
label_3f7fa8:
    if (ctx->pc == 0x3F7FA8u) {
        ctx->pc = 0x3F7FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7FA4u;
        // 0x3f7fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F7FACu;
        goto label_3f7fac;
    }
    ctx->pc = 0x3F7FA4u;
    SET_GPR_U32(ctx, 31, 0x3F7FACu);
    ctx->pc = 0x3F7FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7FA4u;
    // 0x3f7fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F7FA4u, 0x3F7FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7FACu;
label_3f7fac:
    // 0x3f7fac: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3f7facu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3f7fb0:
    // 0x3f7fb0: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3f7fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3f7fb4:
    // 0x3f7fb4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3f7fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3f7fb8:
    // 0x3f7fb8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3f7fb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3f7fbc:
    // 0x3f7fbc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f7fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f7fc0:
    // 0x3f7fc0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f7fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f7fc4:
    // 0x3f7fc4: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3f7fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3f7fc8:
    // 0x3f7fc8: 0x26106868  addiu       $s0, $s0, 0x6868
    ctx->pc = 0x3f7fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26728));
label_3f7fcc:
    // 0x3f7fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f7fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f7fd0:
    // 0x3f7fd0: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3f7fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3f7fd4:
    // 0x3f7fd4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3f7fd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3f7fd8:
    // 0x3f7fd8: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3f7fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3f7fdc:
    // 0x3f7fdc: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3f7fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3f7fe0:
    // 0x3f7fe0: 0x27a80860  addiu       $t0, $sp, 0x860
    ctx->pc = 0x3f7fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3f7fe4:
    // 0x3f7fe4: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3f7fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3f7fe8:
    // 0x3f7fe8: 0x27a90870  addiu       $t1, $sp, 0x870
    ctx->pc = 0x3f7fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3f7fec:
    // 0x3f7fec: 0x27aa0880  addiu       $t2, $sp, 0x880
    ctx->pc = 0x3f7fecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3f7ff0:
    // 0x3f7ff0: 0x27ab0890  addiu       $t3, $sp, 0x890
    ctx->pc = 0x3f7ff0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3f7ff4:
    // 0x3f7ff4: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3f7ff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3f7ff8:
    // 0x3f7ff8: 0xe7a00860  swc1        $f0, 0x860($sp)
    ctx->pc = 0x3f7ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2144), bits); }
label_3f7ffc:
    // 0x3f7ffc: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3f7ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3f8000:
    // 0x3f8000: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x3f8000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_3f8004:
    // 0x3f8004: 0xafb30880  sw          $s3, 0x880($sp)
    ctx->pc = 0x3f8004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 19));
label_3f8008:
    // 0x3f8008: 0xafa30870  sw          $v1, 0x870($sp)
    ctx->pc = 0x3f8008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 3));
label_3f800c:
    // 0x3f800c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3f800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3f8010:
    // 0x3f8010: 0xc0ea084  jal         func_3A8210
label_3f8014:
    if (ctx->pc == 0x3F8014u) {
        ctx->pc = 0x3F8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F8010u;
        // 0x3f8014: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F8018u;
        goto label_3f8018;
    }
    ctx->pc = 0x3F8010u;
    SET_GPR_U32(ctx, 31, 0x3F8018u);
    ctx->pc = 0x3F8014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F8010u;
    // 0x3f8014: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3F8010u, 0x3F8018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8018u;
label_3f8018:
    // 0x3f8018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f8018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f801c:
    // 0x3f801c: 0xc0f15bc  jal         func_3C56F0
label_3f8020:
    if (ctx->pc == 0x3F8020u) {
        ctx->pc = 0x3F8020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F801Cu;
        // 0x3f8020: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F8024u;
        goto label_3f8024;
    }
    ctx->pc = 0x3F801Cu;
    SET_GPR_U32(ctx, 31, 0x3F8024u);
    ctx->pc = 0x3F8020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F801Cu;
    // 0x3f8020: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3F801Cu, 0x3F8024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F8024u;
label_3f8024:
    // 0x3f8024: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f8024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f8028:
    // 0x3f8028: 0x7bb008e0  lq          $s0, 0x8E0($sp)
    ctx->pc = 0x3f8028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3f802c:
    // 0x3f802c: 0x7bb108d0  lq          $s1, 0x8D0($sp)
    ctx->pc = 0x3f802cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3f8030:
    // 0x3f8030: 0x7bb208c0  lq          $s2, 0x8C0($sp)
    ctx->pc = 0x3f8030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3f8034:
    // 0x3f8034: 0x7bb308b0  lq          $s3, 0x8B0($sp)
    ctx->pc = 0x3f8034u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3f8038:
    // 0x3f8038: 0xdfbf08a0  ld          $ra, 0x8A0($sp)
    ctx->pc = 0x3f8038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2208)));
label_3f803c:
    // 0x3f803c: 0x3e00008  jr          $ra
label_3f8040:
    if (ctx->pc == 0x3F8040u) {
        ctx->pc = 0x3F8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F803Cu;
        // 0x3f8040: 0x27bd08f0  addiu       $sp, $sp, 0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F8044u;
        goto label_3f8044;
    }
    ctx->pc = 0x3F803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F803Cu;
        // 0x3f8040: 0x27bd08f0  addiu       $sp, $sp, 0x8F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F803Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F8044u;
label_3f8044:
    // 0x3f8044: 0x0  nop
    ctx->pc = 0x3f8044u;
    // NOP
    ctx->pc = 0x3f8048u;
}
