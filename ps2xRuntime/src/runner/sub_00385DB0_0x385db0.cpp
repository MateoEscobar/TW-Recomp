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

// Function: sub_00385DB0
// Address: 0x385db0 - 0x385ea8
void sub_00385DB0_0x385db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385DB0_0x385db0");
#endif

    switch (ctx->pc) {
        case 0x385db0u: goto label_385db0;
        case 0x385db4u: goto label_385db4;
        case 0x385db8u: goto label_385db8;
        case 0x385dbcu: goto label_385dbc;
        case 0x385dc0u: goto label_385dc0;
        case 0x385dc4u: goto label_385dc4;
        case 0x385dc8u: goto label_385dc8;
        case 0x385dccu: goto label_385dcc;
        case 0x385dd0u: goto label_385dd0;
        case 0x385dd4u: goto label_385dd4;
        case 0x385dd8u: goto label_385dd8;
        case 0x385ddcu: goto label_385ddc;
        case 0x385de0u: goto label_385de0;
        case 0x385de4u: goto label_385de4;
        case 0x385de8u: goto label_385de8;
        case 0x385decu: goto label_385dec;
        case 0x385df0u: goto label_385df0;
        case 0x385df4u: goto label_385df4;
        case 0x385df8u: goto label_385df8;
        case 0x385dfcu: goto label_385dfc;
        case 0x385e00u: goto label_385e00;
        case 0x385e04u: goto label_385e04;
        case 0x385e08u: goto label_385e08;
        case 0x385e0cu: goto label_385e0c;
        case 0x385e10u: goto label_385e10;
        case 0x385e14u: goto label_385e14;
        case 0x385e18u: goto label_385e18;
        case 0x385e1cu: goto label_385e1c;
        case 0x385e20u: goto label_385e20;
        case 0x385e24u: goto label_385e24;
        case 0x385e28u: goto label_385e28;
        case 0x385e2cu: goto label_385e2c;
        case 0x385e30u: goto label_385e30;
        case 0x385e34u: goto label_385e34;
        case 0x385e38u: goto label_385e38;
        case 0x385e3cu: goto label_385e3c;
        case 0x385e40u: goto label_385e40;
        case 0x385e44u: goto label_385e44;
        case 0x385e48u: goto label_385e48;
        case 0x385e4cu: goto label_385e4c;
        case 0x385e50u: goto label_385e50;
        case 0x385e54u: goto label_385e54;
        case 0x385e58u: goto label_385e58;
        case 0x385e5cu: goto label_385e5c;
        case 0x385e60u: goto label_385e60;
        case 0x385e64u: goto label_385e64;
        case 0x385e68u: goto label_385e68;
        case 0x385e6cu: goto label_385e6c;
        case 0x385e70u: goto label_385e70;
        case 0x385e74u: goto label_385e74;
        case 0x385e78u: goto label_385e78;
        case 0x385e7cu: goto label_385e7c;
        case 0x385e80u: goto label_385e80;
        case 0x385e84u: goto label_385e84;
        case 0x385e88u: goto label_385e88;
        case 0x385e8cu: goto label_385e8c;
        case 0x385e90u: goto label_385e90;
        case 0x385e94u: goto label_385e94;
        case 0x385e98u: goto label_385e98;
        case 0x385e9cu: goto label_385e9c;
        case 0x385ea0u: goto label_385ea0;
        case 0x385ea4u: goto label_385ea4;
        default: break;
    }

    ctx->pc = 0x385db0u;

label_385db0:
    // 0x385db0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x385db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_385db4:
    // 0x385db4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x385db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_385db8:
    // 0x385db8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x385db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_385dbc:
    // 0x385dbc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x385dbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_385dc0:
    // 0x385dc0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x385dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_385dc4:
    // 0x385dc4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x385dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_385dc8:
    // 0x385dc8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x385dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_385dcc:
    // 0x385dcc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x385dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_385dd0:
    // 0x385dd0: 0xc0e4060  jal         func_390180
label_385dd4:
    if (ctx->pc == 0x385DD4u) {
        ctx->pc = 0x385DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DD0u;
        // 0x385dd4: 0xafa50034  sw          $a1, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385DD8u;
        goto label_385dd8;
    }
    ctx->pc = 0x385DD0u;
    SET_GPR_U32(ctx, 31, 0x385DD8u);
    ctx->pc = 0x385DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385DD0u;
    // 0x385dd4: 0xafa50034  sw          $a1, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x385DD0u, 0x385DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385DD8u;
label_385dd8:
    // 0x385dd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x385dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385ddc:
    // 0x385ddc: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_385de0:
    if (ctx->pc == 0x385DE0u) {
        ctx->pc = 0x385DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DDCu;
        // 0x385de0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385DE4u;
        goto label_385de4;
    }
    ctx->pc = 0x385DDCu;
    {
        const bool branch_taken_0x385ddc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x385DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DDCu;
        // 0x385de0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ddc) {
            ctx->pc = 0x385E90u;
            goto label_385e90;
        }
    }
    ctx->pc = 0x385DE4u;
label_385de4:
    // 0x385de4: 0xc0e40a2  jal         func_390288
label_385de8:
    if (ctx->pc == 0x385DE8u) {
        ctx->pc = 0x385DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DE4u;
        // 0x385de8: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385DECu;
        goto label_385dec;
    }
    ctx->pc = 0x385DE4u;
    SET_GPR_U32(ctx, 31, 0x385DECu);
    ctx->pc = 0x385DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385DE4u;
    // 0x385de8: 0x27a40034  addiu       $a0, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x385DE4u, 0x385DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385DECu;
label_385dec:
    // 0x385dec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x385decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385df0:
    // 0x385df0: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_385df4:
    if (ctx->pc == 0x385DF4u) {
        ctx->pc = 0x385DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DF0u;
        // 0x385df4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385DF8u;
        goto label_385df8;
    }
    ctx->pc = 0x385DF0u;
    {
        const bool branch_taken_0x385df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x385DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385DF0u;
        // 0x385df4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385df0) {
            ctx->pc = 0x385E8Cu;
            goto label_385e8c;
        }
    }
    ctx->pc = 0x385DF8u;
label_385df8:
    // 0x385df8: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
label_385dfc:
    if (ctx->pc == 0x385DFCu) {
        ctx->pc = 0x385E00u;
        goto label_385e00;
    }
    ctx->pc = 0x385DF8u;
    {
        const bool branch_taken_0x385df8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x385df8) {
            ctx->pc = 0x385E14u;
            goto label_385e14;
        }
    }
    ctx->pc = 0x385E00u;
label_385e00:
    // 0x385e00: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x385e00u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_385e04:
    // 0x385e04: 0x0  nop
    ctx->pc = 0x385e04u;
    // NOP
label_385e08:
    // 0x385e08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x385e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_385e0c:
    // 0x385e0c: 0x10000003  b           . + 4 + (0x3 << 2)
label_385e10:
    if (ctx->pc == 0x385E10u) {
        ctx->pc = 0x385E14u;
        goto label_385e14;
    }
    ctx->pc = 0x385E0Cu;
    {
        const bool branch_taken_0x385e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x385e0c) {
            ctx->pc = 0x385E1Cu;
            goto label_385e1c;
        }
    }
    ctx->pc = 0x385E14u;
label_385e14:
    // 0x385e14: 0xc105896  jal         func_416258
label_385e18:
    if (ctx->pc == 0x385E18u) {
        ctx->pc = 0x385E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E14u;
        // 0x385e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E1Cu;
        goto label_385e1c;
    }
    ctx->pc = 0x385E14u;
    SET_GPR_U32(ctx, 31, 0x385E1Cu);
    ctx->pc = 0x385E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E14u;
    // 0x385e18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416258u, 0x385E14u, 0x385E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E1Cu;
label_385e1c:
    // 0x385e1c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x385e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_385e20:
    // 0x385e20: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x385e20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_385e24:
    // 0x385e24: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x385e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_385e28:
    // 0x385e28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x385e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_385e2c:
    // 0x385e2c: 0xc0cd7a8  jal         func_335EA0
label_385e30:
    if (ctx->pc == 0x385E30u) {
        ctx->pc = 0x385E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E2Cu;
        // 0x385e30: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E34u;
        goto label_385e34;
    }
    ctx->pc = 0x385E2Cu;
    SET_GPR_U32(ctx, 31, 0x385E34u);
    ctx->pc = 0x385E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E2Cu;
    // 0x385e30: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x385E2Cu, 0x385E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E34u;
label_385e34:
    // 0x385e34: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x385e34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_385e38:
    // 0x385e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385e3c:
    // 0x385e3c: 0xc10587a  jal         func_4161E8
label_385e40:
    if (ctx->pc == 0x385E40u) {
        ctx->pc = 0x385E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E3Cu;
        // 0x385e40: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E44u;
        goto label_385e44;
    }
    ctx->pc = 0x385E3Cu;
    SET_GPR_U32(ctx, 31, 0x385E44u);
    ctx->pc = 0x385E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E3Cu;
    // 0x385e40: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x385E3Cu, 0x385E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E44u;
label_385e44:
    // 0x385e44: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x385e44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_385e48:
    // 0x385e48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x385e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_385e4c:
    // 0x385e4c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x385e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_385e50:
    // 0x385e50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x385e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_385e54:
    // 0x385e54: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x385e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_385e58:
    // 0x385e58: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x385e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_385e5c:
    // 0x385e5c: 0x60f809  jalr        $v1
label_385e60:
    if (ctx->pc == 0x385E60u) {
        ctx->pc = 0x385E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E5Cu;
        // 0x385e60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E64u;
        goto label_385e64;
    }
    ctx->pc = 0x385E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385E64u);
        ctx->pc = 0x385E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E5Cu;
        // 0x385e60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385E5Cu, 0x385E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385E64u;
label_385e64:
    // 0x385e64: 0xc08a61a  jal         func_229868
label_385e68:
    if (ctx->pc == 0x385E68u) {
        ctx->pc = 0x385E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E64u;
        // 0x385e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E6Cu;
        goto label_385e6c;
    }
    ctx->pc = 0x385E64u;
    SET_GPR_U32(ctx, 31, 0x385E6Cu);
    ctx->pc = 0x385E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385E64u;
    // 0x385e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x385E64u, 0x385E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385E6Cu;
label_385e6c:
    // 0x385e6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x385e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385e70:
    // 0x385e70: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_385e74:
    if (ctx->pc == 0x385E74u) {
        ctx->pc = 0x385E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E70u;
        // 0x385e74: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E78u;
        goto label_385e78;
    }
    ctx->pc = 0x385E70u;
    {
        const bool branch_taken_0x385e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x385E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E70u;
        // 0x385e74: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385e70) {
            ctx->pc = 0x385E90u;
            goto label_385e90;
        }
    }
    ctx->pc = 0x385E78u;
label_385e78:
    // 0x385e78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x385e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_385e7c:
    // 0x385e7c: 0x84440148  lh          $a0, 0x148($v0)
    ctx->pc = 0x385e7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_385e80:
    // 0x385e80: 0x8c43014c  lw          $v1, 0x14C($v0)
    ctx->pc = 0x385e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
label_385e84:
    // 0x385e84: 0x60f809  jalr        $v1
label_385e88:
    if (ctx->pc == 0x385E88u) {
        ctx->pc = 0x385E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E84u;
        // 0x385e88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385E8Cu;
        goto label_385e8c;
    }
    ctx->pc = 0x385E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385E8Cu);
        ctx->pc = 0x385E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E84u;
        // 0x385e88: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385E84u, 0x385E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385E8Cu;
label_385e8c:
    // 0x385e8c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x385e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_385e90:
    // 0x385e90: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x385e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_385e94:
    // 0x385e94: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x385e94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_385e98:
    // 0x385e98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x385e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_385e9c:
    // 0x385e9c: 0x3e00008  jr          $ra
label_385ea0:
    if (ctx->pc == 0x385EA0u) {
        ctx->pc = 0x385EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E9Cu;
        // 0x385ea0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385EA4u;
        goto label_385ea4;
    }
    ctx->pc = 0x385E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385E9Cu;
        // 0x385ea0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x385EA4u;
label_385ea4:
    // 0x385ea4: 0x0  nop
    ctx->pc = 0x385ea4u;
    // NOP
    ctx->pc = 0x385ea8u;
}
