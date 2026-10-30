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

// Function: sub_002F3DB8
// Address: 0x2f3db8 - 0x2f3e60
void sub_002F3DB8_0x2f3db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3DB8_0x2f3db8");
#endif

    switch (ctx->pc) {
        case 0x2f3db8u: goto label_2f3db8;
        case 0x2f3dbcu: goto label_2f3dbc;
        case 0x2f3dc0u: goto label_2f3dc0;
        case 0x2f3dc4u: goto label_2f3dc4;
        case 0x2f3dc8u: goto label_2f3dc8;
        case 0x2f3dccu: goto label_2f3dcc;
        case 0x2f3dd0u: goto label_2f3dd0;
        case 0x2f3dd4u: goto label_2f3dd4;
        case 0x2f3dd8u: goto label_2f3dd8;
        case 0x2f3ddcu: goto label_2f3ddc;
        case 0x2f3de0u: goto label_2f3de0;
        case 0x2f3de4u: goto label_2f3de4;
        case 0x2f3de8u: goto label_2f3de8;
        case 0x2f3decu: goto label_2f3dec;
        case 0x2f3df0u: goto label_2f3df0;
        case 0x2f3df4u: goto label_2f3df4;
        case 0x2f3df8u: goto label_2f3df8;
        case 0x2f3dfcu: goto label_2f3dfc;
        case 0x2f3e00u: goto label_2f3e00;
        case 0x2f3e04u: goto label_2f3e04;
        case 0x2f3e08u: goto label_2f3e08;
        case 0x2f3e0cu: goto label_2f3e0c;
        case 0x2f3e10u: goto label_2f3e10;
        case 0x2f3e14u: goto label_2f3e14;
        case 0x2f3e18u: goto label_2f3e18;
        case 0x2f3e1cu: goto label_2f3e1c;
        case 0x2f3e20u: goto label_2f3e20;
        case 0x2f3e24u: goto label_2f3e24;
        case 0x2f3e28u: goto label_2f3e28;
        case 0x2f3e2cu: goto label_2f3e2c;
        case 0x2f3e30u: goto label_2f3e30;
        case 0x2f3e34u: goto label_2f3e34;
        case 0x2f3e38u: goto label_2f3e38;
        case 0x2f3e3cu: goto label_2f3e3c;
        case 0x2f3e40u: goto label_2f3e40;
        case 0x2f3e44u: goto label_2f3e44;
        case 0x2f3e48u: goto label_2f3e48;
        case 0x2f3e4cu: goto label_2f3e4c;
        case 0x2f3e50u: goto label_2f3e50;
        case 0x2f3e54u: goto label_2f3e54;
        case 0x2f3e58u: goto label_2f3e58;
        case 0x2f3e5cu: goto label_2f3e5c;
        default: break;
    }

    ctx->pc = 0x2f3db8u;

label_2f3db8:
    // 0x2f3db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f3db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f3dbc:
    // 0x2f3dbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f3dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f3dc0:
    // 0x2f3dc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f3dc4:
    // 0x2f3dc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f3dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3dc8:
    // 0x2f3dc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f3dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f3dcc:
    // 0x2f3dcc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2f3dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3dd0:
    // 0x2f3dd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f3dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2f3dd4:
    // 0x2f3dd4: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2f3dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2f3dd8:
    // 0x2f3dd8: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2f3dd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2f3ddc:
    // 0x2f3ddc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3de0:
    // 0x2f3de0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f3de4:
    // 0x2f3de4: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2f3de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
label_2f3de8:
    // 0x2f3de8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2f3de8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f3dec:
    // 0x2f3dec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f3decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f3df0:
    // 0x2f3df0: 0xa0510265  sb          $s1, 0x265($v0)
    ctx->pc = 0x2f3df0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 17));
label_2f3df4:
    // 0x2f3df4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2f3df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f3df8:
    // 0x2f3df8: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2f3df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2f3dfc:
    // 0x2f3dfc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f3e00:
    // 0x2f3e00: 0xa051011e  sb          $s1, 0x11E($v0)
    ctx->pc = 0x2f3e00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 17));
label_2f3e04:
    // 0x2f3e04: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2f3e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f3e08:
    // 0x2f3e08: 0xc0a22c6  jal         func_288B18
label_2f3e0c:
    if (ctx->pc == 0x2F3E0Cu) {
        ctx->pc = 0x2F3E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E08u;
        // 0x2f3e0c: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E10u;
        goto label_2f3e10;
    }
    ctx->pc = 0x2F3E08u;
    SET_GPR_U32(ctx, 31, 0x2F3E10u);
    ctx->pc = 0x2F3E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3E08u;
    // 0x2f3e0c: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2F3E08u, 0x2F3E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3E10u;
label_2f3e10:
    // 0x2f3e10: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2f3e10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2f3e14:
    // 0x2f3e14: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x2f3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
label_2f3e18:
    // 0x2f3e18: 0x2404fdff  addiu       $a0, $zero, -0x201
    ctx->pc = 0x2f3e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2f3e1c:
    // 0x2f3e1c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2f3e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f3e20:
    // 0x2f3e20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f3e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f3e24:
    // 0x2f3e24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f3e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f3e28:
    // 0x2f3e28: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f3e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2f3e2c:
    // 0x2f3e2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2f3e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2f3e30:
    // 0x2f3e30: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2f3e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2f3e34:
    // 0x2f3e34: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2f3e34u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2f3e38:
    // 0x2f3e38: 0x84c400e0  lh          $a0, 0xE0($a2)
    ctx->pc = 0x2f3e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 224)));
label_2f3e3c:
    // 0x2f3e3c: 0x8cc200e4  lw          $v0, 0xE4($a2)
    ctx->pc = 0x2f3e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 228)));
label_2f3e40:
    // 0x2f3e40: 0x40f809  jalr        $v0
label_2f3e44:
    if (ctx->pc == 0x2F3E44u) {
        ctx->pc = 0x2F3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E40u;
        // 0x2f3e44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E48u;
        goto label_2f3e48;
    }
    ctx->pc = 0x2F3E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F3E48u);
        ctx->pc = 0x2F3E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E40u;
        // 0x2f3e44: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3E40u, 0x2F3E48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3E48u;
label_2f3e48:
    // 0x2f3e48: 0xa2110284  sb          $s1, 0x284($s0)
    ctx->pc = 0x2f3e48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 17));
label_2f3e4c:
    // 0x2f3e4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f3e4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f3e50:
    // 0x2f3e50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f3e50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3e54:
    // 0x2f3e54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f3e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3e58:
    // 0x2f3e58: 0x3e00008  jr          $ra
label_2f3e5c:
    if (ctx->pc == 0x2F3E5Cu) {
        ctx->pc = 0x2F3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E58u;
        // 0x2f3e5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E60u;
        goto label_fallthrough_0x2f3e58;
    }
    ctx->pc = 0x2F3E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E58u;
        // 0x2f3e5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f3e58:
    ctx->pc = 0x2F3E60u;
}
