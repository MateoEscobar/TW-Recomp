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

// Function: sub_002B9DA0
// Address: 0x2b9da0 - 0x2b9e80
void sub_002B9DA0_0x2b9da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9DA0_0x2b9da0");
#endif

    switch (ctx->pc) {
        case 0x2b9da0u: goto label_2b9da0;
        case 0x2b9da4u: goto label_2b9da4;
        case 0x2b9da8u: goto label_2b9da8;
        case 0x2b9dacu: goto label_2b9dac;
        case 0x2b9db0u: goto label_2b9db0;
        case 0x2b9db4u: goto label_2b9db4;
        case 0x2b9db8u: goto label_2b9db8;
        case 0x2b9dbcu: goto label_2b9dbc;
        case 0x2b9dc0u: goto label_2b9dc0;
        case 0x2b9dc4u: goto label_2b9dc4;
        case 0x2b9dc8u: goto label_2b9dc8;
        case 0x2b9dccu: goto label_2b9dcc;
        case 0x2b9dd0u: goto label_2b9dd0;
        case 0x2b9dd4u: goto label_2b9dd4;
        case 0x2b9dd8u: goto label_2b9dd8;
        case 0x2b9ddcu: goto label_2b9ddc;
        case 0x2b9de0u: goto label_2b9de0;
        case 0x2b9de4u: goto label_2b9de4;
        case 0x2b9de8u: goto label_2b9de8;
        case 0x2b9decu: goto label_2b9dec;
        case 0x2b9df0u: goto label_2b9df0;
        case 0x2b9df4u: goto label_2b9df4;
        case 0x2b9df8u: goto label_2b9df8;
        case 0x2b9dfcu: goto label_2b9dfc;
        case 0x2b9e00u: goto label_2b9e00;
        case 0x2b9e04u: goto label_2b9e04;
        case 0x2b9e08u: goto label_2b9e08;
        case 0x2b9e0cu: goto label_2b9e0c;
        case 0x2b9e10u: goto label_2b9e10;
        case 0x2b9e14u: goto label_2b9e14;
        case 0x2b9e18u: goto label_2b9e18;
        case 0x2b9e1cu: goto label_2b9e1c;
        case 0x2b9e20u: goto label_2b9e20;
        case 0x2b9e24u: goto label_2b9e24;
        case 0x2b9e28u: goto label_2b9e28;
        case 0x2b9e2cu: goto label_2b9e2c;
        case 0x2b9e30u: goto label_2b9e30;
        case 0x2b9e34u: goto label_2b9e34;
        case 0x2b9e38u: goto label_2b9e38;
        case 0x2b9e3cu: goto label_2b9e3c;
        case 0x2b9e40u: goto label_2b9e40;
        case 0x2b9e44u: goto label_2b9e44;
        case 0x2b9e48u: goto label_2b9e48;
        case 0x2b9e4cu: goto label_2b9e4c;
        case 0x2b9e50u: goto label_2b9e50;
        case 0x2b9e54u: goto label_2b9e54;
        case 0x2b9e58u: goto label_2b9e58;
        case 0x2b9e5cu: goto label_2b9e5c;
        case 0x2b9e60u: goto label_2b9e60;
        case 0x2b9e64u: goto label_2b9e64;
        case 0x2b9e68u: goto label_2b9e68;
        case 0x2b9e6cu: goto label_2b9e6c;
        case 0x2b9e70u: goto label_2b9e70;
        case 0x2b9e74u: goto label_2b9e74;
        case 0x2b9e78u: goto label_2b9e78;
        case 0x2b9e7cu: goto label_2b9e7c;
        default: break;
    }

    ctx->pc = 0x2b9da0u;

label_2b9da0:
    // 0x2b9da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b9da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b9da4:
    // 0x2b9da4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2b9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2b9da8:
    // 0x2b9da8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b9da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2b9dac:
    // 0x2b9dac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b9dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9db0:
    // 0x2b9db0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b9db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b9db4:
    // 0x2b9db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9db8:
    // 0x2b9db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b9dbc:
    // 0x2b9dbc: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2b9dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2b9dc0:
    // 0x2b9dc0: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2b9dc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2b9dc4:
    // 0x2b9dc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b9dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b9dc8:
    // 0x2b9dc8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2b9dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9dcc:
    // 0x2b9dcc: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x2b9dccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2b9dd0:
    // 0x2b9dd0: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x2b9dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_2b9dd4:
    // 0x2b9dd4: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x2b9dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_2b9dd8:
    // 0x2b9dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b9dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ddc:
    // 0x2b9ddc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b9ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b9de0:
    // 0x2b9de0: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x2b9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
label_2b9de4:
    // 0x2b9de4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b9de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9de8:
    // 0x2b9de8: 0xc087612  jal         func_21D848
label_2b9dec:
    if (ctx->pc == 0x2B9DECu) {
        ctx->pc = 0x2B9DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DE8u;
        // 0x2b9dec: 0xe460012c  swc1        $f0, 0x12C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DF0u;
        goto label_2b9df0;
    }
    ctx->pc = 0x2B9DE8u;
    SET_GPR_U32(ctx, 31, 0x2B9DF0u);
    ctx->pc = 0x2B9DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DE8u;
    // 0x2b9dec: 0xe460012c  swc1        $f0, 0x12C($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2B9DE8u, 0x2B9DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DF0u;
label_2b9df0:
    // 0x2b9df0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2b9df0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9df4:
    // 0x2b9df4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2b9df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2b9df8:
    // 0x2b9df8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b9df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b9dfc:
    // 0x2b9dfc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2b9e00:
    if (ctx->pc == 0x2B9E00u) {
        ctx->pc = 0x2B9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DFCu;
        // 0x2b9e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E04u;
        goto label_2b9e04;
    }
    ctx->pc = 0x2B9DFCu;
    {
        const bool branch_taken_0x2b9dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DFCu;
        // 0x2b9e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9dfc) {
            ctx->pc = 0x2B9E6Cu;
            goto label_2b9e6c;
        }
    }
    ctx->pc = 0x2B9E04u;
label_2b9e04:
    // 0x2b9e04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b9e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b9e08:
    // 0x2b9e08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b9e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b9e0c:
    // 0x2b9e0c: 0xa2020265  sb          $v0, 0x265($s0)
    ctx->pc = 0x2b9e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 613), (uint8_t)GPR_U32(ctx, 2));
label_2b9e10:
    // 0x2b9e10: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2b9e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2b9e14:
    // 0x2b9e14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b9e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9e18:
    // 0x2b9e18: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x2b9e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_2b9e1c:
    // 0x2b9e1c: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x2b9e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_2b9e20:
    // 0x2b9e20: 0x60f809  jalr        $v1
label_2b9e24:
    if (ctx->pc == 0x2B9E24u) {
        ctx->pc = 0x2B9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E20u;
        // 0x2b9e24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E28u;
        goto label_2b9e28;
    }
    ctx->pc = 0x2B9E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B9E28u);
        ctx->pc = 0x2B9E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E20u;
        // 0x2b9e24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9E20u, 0x2B9E28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9E28u;
label_2b9e28:
    // 0x2b9e28: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x2b9e28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
label_2b9e2c:
    // 0x2b9e2c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2b9e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2b9e30:
    // 0x2b9e30: 0x3c04fffd  lui         $a0, 0xFFFD
    ctx->pc = 0x2b9e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65533 << 16));
label_2b9e34:
    // 0x2b9e34: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2b9e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2b9e38:
    // 0x2b9e38: 0x2405f7ff  addiu       $a1, $zero, -0x801
    ctx->pc = 0x2b9e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
label_2b9e3c:
    // 0x2b9e3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b9e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b9e40:
    // 0x2b9e40: 0x2406feff  addiu       $a2, $zero, -0x101
    ctx->pc = 0x2b9e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_2b9e44:
    // 0x2b9e44: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b9e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2b9e48:
    // 0x2b9e48: 0x2407ff7f  addiu       $a3, $zero, -0x81
    ctx->pc = 0x2b9e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_2b9e4c:
    // 0x2b9e4c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2b9e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2b9e50:
    // 0x2b9e50: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x2b9e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_2b9e54:
    // 0x2b9e54: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2b9e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2b9e58:
    // 0x2b9e58: 0x2403fdff  addiu       $v1, $zero, -0x201
    ctx->pc = 0x2b9e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2b9e5c:
    // 0x2b9e5c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2b9e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2b9e60:
    // 0x2b9e60: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2b9e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2b9e64:
    // 0x2b9e64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b9e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b9e68:
    // 0x2b9e68: 0xfe2200e0  sd          $v0, 0xE0($s1)
    ctx->pc = 0x2b9e68u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 224), GPR_U64(ctx, 2));
label_2b9e6c:
    // 0x2b9e6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b9e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9e70:
    // 0x2b9e70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b9e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9e74:
    // 0x2b9e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9e78:
    // 0x2b9e78: 0x3e00008  jr          $ra
label_2b9e7c:
    if (ctx->pc == 0x2B9E7Cu) {
        ctx->pc = 0x2B9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E78u;
        // 0x2b9e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E80u;
        goto label_fallthrough_0x2b9e78;
    }
    ctx->pc = 0x2B9E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E78u;
        // 0x2b9e7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b9e78:
    ctx->pc = 0x2B9E80u;
}
