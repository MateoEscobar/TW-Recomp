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

// Function: sub_002D5F98
// Address: 0x2d5f98 - 0x2d6050
void sub_002D5F98_0x2d5f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5F98_0x2d5f98");
#endif

    switch (ctx->pc) {
        case 0x2d5f98u: goto label_2d5f98;
        case 0x2d5f9cu: goto label_2d5f9c;
        case 0x2d5fa0u: goto label_2d5fa0;
        case 0x2d5fa4u: goto label_2d5fa4;
        case 0x2d5fa8u: goto label_2d5fa8;
        case 0x2d5facu: goto label_2d5fac;
        case 0x2d5fb0u: goto label_2d5fb0;
        case 0x2d5fb4u: goto label_2d5fb4;
        case 0x2d5fb8u: goto label_2d5fb8;
        case 0x2d5fbcu: goto label_2d5fbc;
        case 0x2d5fc0u: goto label_2d5fc0;
        case 0x2d5fc4u: goto label_2d5fc4;
        case 0x2d5fc8u: goto label_2d5fc8;
        case 0x2d5fccu: goto label_2d5fcc;
        case 0x2d5fd0u: goto label_2d5fd0;
        case 0x2d5fd4u: goto label_2d5fd4;
        case 0x2d5fd8u: goto label_2d5fd8;
        case 0x2d5fdcu: goto label_2d5fdc;
        case 0x2d5fe0u: goto label_2d5fe0;
        case 0x2d5fe4u: goto label_2d5fe4;
        case 0x2d5fe8u: goto label_2d5fe8;
        case 0x2d5fecu: goto label_2d5fec;
        case 0x2d5ff0u: goto label_2d5ff0;
        case 0x2d5ff4u: goto label_2d5ff4;
        case 0x2d5ff8u: goto label_2d5ff8;
        case 0x2d5ffcu: goto label_2d5ffc;
        case 0x2d6000u: goto label_2d6000;
        case 0x2d6004u: goto label_2d6004;
        case 0x2d6008u: goto label_2d6008;
        case 0x2d600cu: goto label_2d600c;
        case 0x2d6010u: goto label_2d6010;
        case 0x2d6014u: goto label_2d6014;
        case 0x2d6018u: goto label_2d6018;
        case 0x2d601cu: goto label_2d601c;
        case 0x2d6020u: goto label_2d6020;
        case 0x2d6024u: goto label_2d6024;
        case 0x2d6028u: goto label_2d6028;
        case 0x2d602cu: goto label_2d602c;
        case 0x2d6030u: goto label_2d6030;
        case 0x2d6034u: goto label_2d6034;
        case 0x2d6038u: goto label_2d6038;
        case 0x2d603cu: goto label_2d603c;
        case 0x2d6040u: goto label_2d6040;
        case 0x2d6044u: goto label_2d6044;
        case 0x2d6048u: goto label_2d6048;
        case 0x2d604cu: goto label_2d604c;
        default: break;
    }

    ctx->pc = 0x2d5f98u;

label_2d5f98:
    // 0x2d5f98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d5f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d5f9c:
    // 0x2d5f9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d5f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2d5fa0:
    // 0x2d5fa0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d5fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2d5fa4:
    // 0x2d5fa4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d5fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2d5fa8:
    // 0x2d5fa8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d5fa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d5fac:
    // 0x2d5fac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d5facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2d5fb0:
    // 0x2d5fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d5fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d5fb4:
    // 0x2d5fb4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d5fb8:
    // 0x2d5fb8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2d5fb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2d5fbc:
    // 0x2d5fbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d5fc0:
    // 0x2d5fc0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2d5fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2d5fc4:
    // 0x2d5fc4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2d5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2d5fc8:
    // 0x2d5fc8: 0x40f809  jalr        $v0
label_2d5fcc:
    if (ctx->pc == 0x2D5FCCu) {
        ctx->pc = 0x2D5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FC8u;
        // 0x2d5fcc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5FD0u;
        goto label_2d5fd0;
    }
    ctx->pc = 0x2D5FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D5FD0u);
        ctx->pc = 0x2D5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FC8u;
        // 0x2d5fcc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5FC8u, 0x2D5FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D5FD0u;
label_2d5fd0:
    // 0x2d5fd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d5fd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d5fd4:
    // 0x2d5fd4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2d5fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2d5fd8:
    // 0x2d5fd8: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2d5fd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2d5fdc:
    // 0x2d5fdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d5fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2d5fe0:
    // 0x2d5fe0: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2d5fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2d5fe4:
    // 0x2d5fe4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2d5fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d5fe8:
    // 0x2d5fe8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d5fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2d5fec:
    // 0x2d5fec: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x2d5fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_2d5ff0:
    // 0x2d5ff0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2d5ff4:
    if (ctx->pc == 0x2D5FF4u) {
        ctx->pc = 0x2D5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FF0u;
        // 0x2d5ff4: 0xc660002c  lwc1        $f0, 0x2C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D5FF8u;
        goto label_2d5ff8;
    }
    ctx->pc = 0x2D5FF0u;
    {
        const bool branch_taken_0x2d5ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5ff0) {
            ctx->pc = 0x2D5FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5FF0u;
            // 0x2d5ff4: 0xc660002c  lwc1        $f0, 0x2C($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D602Cu;
            goto label_2d602c;
        }
    }
    ctx->pc = 0x2D5FF8u;
label_2d5ff8:
    // 0x2d5ff8: 0xc08e2b8  jal         func_238AE0
label_2d5ffc:
    if (ctx->pc == 0x2D5FFCu) {
        ctx->pc = 0x2D5FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5FF8u;
        // 0x2d5ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6000u;
        goto label_2d6000;
    }
    ctx->pc = 0x2D5FF8u;
    SET_GPR_U32(ctx, 31, 0x2D6000u);
    ctx->pc = 0x2D5FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D5FF8u;
    // 0x2d5ffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AE0u, 0x2D5FF8u, 0x2D6000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6000u;
label_2d6000:
    // 0x2d6000: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x2d6000u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_2d6004:
    // 0x2d6004: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d6004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d6008:
    // 0x2d6008: 0x26100840  addiu       $s0, $s0, 0x840
    ctx->pc = 0x2d6008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2112));
label_2d600c:
    // 0x2d600c: 0xc06cad6  jal         func_1B2B58
label_2d6010:
    if (ctx->pc == 0x2D6010u) {
        ctx->pc = 0x2D6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D600Cu;
        // 0x2d6010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6014u;
        goto label_2d6014;
    }
    ctx->pc = 0x2D600Cu;
    SET_GPR_U32(ctx, 31, 0x2D6014u);
    ctx->pc = 0x2D6010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D600Cu;
    // 0x2d6010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2B58u, 0x2D600Cu, 0x2D6014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6014u;
label_2d6014:
    // 0x2d6014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6018:
    // 0x2d6018: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d6018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d601c:
    // 0x2d601c: 0xc06ccb8  jal         func_1B32E0
label_2d6020:
    if (ctx->pc == 0x2D6020u) {
        ctx->pc = 0x2D6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D601Cu;
        // 0x2d6020: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6024u;
        goto label_2d6024;
    }
    ctx->pc = 0x2D601Cu;
    SET_GPR_U32(ctx, 31, 0x2D6024u);
    ctx->pc = 0x2D6020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D601Cu;
    // 0x2d6020: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B32E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B32E0u, 0x2D601Cu, 0x2D6024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6024u;
label_2d6024:
    // 0x2d6024: 0xa220019e  sb          $zero, 0x19E($s1)
    ctx->pc = 0x2d6024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 414), (uint8_t)GPR_U32(ctx, 0));
label_2d6028:
    // 0x2d6028: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x2d6028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2d602c:
    // 0x2d602c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2d602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2d6030:
    // 0x2d6030: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d6030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2d6034:
    // 0x2d6034: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d6034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d6038:
    // 0x2d6038: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d6038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d603c:
    // 0x2d603c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d603cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6040:
    // 0x2d6040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6044:
    // 0x2d6044: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x2d6044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
label_2d6048:
    // 0x2d6048: 0x3e00008  jr          $ra
label_2d604c:
    if (ctx->pc == 0x2D604Cu) {
        ctx->pc = 0x2D604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6048u;
        // 0x2d604c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6050u;
        goto label_fallthrough_0x2d6048;
    }
    ctx->pc = 0x2D6048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6048u;
        // 0x2d604c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2d6048:
    ctx->pc = 0x2D6050u;
}
