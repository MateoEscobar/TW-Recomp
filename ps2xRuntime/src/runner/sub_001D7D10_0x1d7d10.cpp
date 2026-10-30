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

// Function: sub_001D7D10
// Address: 0x1d7d10 - 0x1d7de8
void sub_001D7D10_0x1d7d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7D10_0x1d7d10");
#endif

    switch (ctx->pc) {
        case 0x1d7d38u: goto label_1d7d38;
        case 0x1d7d70u: goto label_1d7d70;
        case 0x1d7d7cu: goto label_1d7d7c;
        case 0x1d7da8u: goto label_1d7da8;
        case 0x1d7db4u: goto label_1d7db4;
        case 0x1d7dbcu: goto label_1d7dbc;
        default: break;
    }

    ctx->pc = 0x1d7d10u;

    // 0x1d7d10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d7d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d7d14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d7d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d7d18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d1c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d7d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d7d20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d7d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d7d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7d28: 0x26110650  addiu       $s1, $s0, 0x650
    ctx->pc = 0x1d7d28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x1d7d2c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1d7d2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1d7d30: 0xc075c9c  jal         func_1D7270
    ctx->pc = 0x1D7D30u;
    SET_GPR_U32(ctx, 31, 0x1D7D38u);
    ctx->pc = 0x1D7D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D30u;
    // 0x1d7d34: 0x26120750  addiu       $s2, $s0, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7270u, 0x1D7D30u, 0x1D7D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D38u;
label_1d7d38:
    // 0x1d7d38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d7d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d7d3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d7d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d7d40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d7d44: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1d7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1d7d48: 0xc440ed48  lwc1        $f0, -0x12B8($v0)
    ctx->pc = 0x1d7d48u;
    { uint32_t bits = FAST_READ32(0x50ED48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d7d4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d7d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d50: 0xc461ed4c  lwc1        $f1, -0x12B4($v1)
    ctx->pc = 0x1d7d50u;
    { uint32_t bits = FAST_READ32(0x50ED4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d7d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7d58: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1d7d58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d7d5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d60: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1d7d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d7d64: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d7d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d7d68: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1D7D68u;
    SET_GPR_U32(ctx, 31, 0x1D7D70u);
    ctx->pc = 0x1D7D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D68u;
    // 0x1d7d6c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1D7D68u, 0x1D7D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D70u;
label_1d7d70:
    // 0x1d7d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d74: 0xc06887a  jal         func_1A21E8
    ctx->pc = 0x1D7D74u;
    SET_GPR_U32(ctx, 31, 0x1D7D7Cu);
    ctx->pc = 0x1D7D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D74u;
    // 0x1d7d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21E8u, 0x1D7D74u, 0x1D7D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D7Cu;
label_1d7d7c:
    // 0x1d7d7c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1d7d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7d80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d7d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d84: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1d7d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x1d7d88: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1d7d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1d7d8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d7d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d7d90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d7d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7d94: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1d7d94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d7d98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d7d9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d7da0: 0xc068818  jal         func_1A2060
    ctx->pc = 0x1D7DA0u;
    SET_GPR_U32(ctx, 31, 0x1D7DA8u);
    ctx->pc = 0x1D7DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DA0u;
    // 0x1d7da4: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2060u, 0x1D7DA0u, 0x1D7DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DA8u;
label_1d7da8:
    // 0x1d7da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d7da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7dac: 0xc06887a  jal         func_1A21E8
    ctx->pc = 0x1D7DACu;
    SET_GPR_U32(ctx, 31, 0x1D7DB4u);
    ctx->pc = 0x1D7DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DACu;
    // 0x1d7db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A21E8u, 0x1D7DACu, 0x1D7DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DB4u;
label_1d7db4:
    // 0x1d7db4: 0xc06e552  jal         func_1B9548
    ctx->pc = 0x1D7DB4u;
    SET_GPR_U32(ctx, 31, 0x1D7DBCu);
    ctx->pc = 0x1D7DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DB4u;
    // 0x1d7db8: 0x26040850  addiu       $a0, $s0, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1D7DB4u, 0x1D7DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DBCu;
label_1d7dbc:
    // 0x1d7dbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d7dc0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d7dc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7dc4: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1d7dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1d7dc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d7dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7dcc: 0x906457a4  lbu         $a0, 0x57A4($v1)
    ctx->pc = 0x1d7dccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22436)));
    // 0x1d7dd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7dd4: 0xae040640  sw          $a0, 0x640($s0)
    ctx->pc = 0x1d7dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1600), GPR_U32(ctx, 4));
    // 0x1d7dd8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1d7dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7ddc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1d7ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d7de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DE0u;
        // 0x1d7de4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7DE8u;
}
