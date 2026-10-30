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

// Function: sub_00462D38
// Address: 0x462d38 - 0x462e48
void sub_00462D38_0x462d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00462D38_0x462d38");
#endif

    ctx->pc = 0x462d38u;

    // 0x462d38: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x462d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x462d3c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x462d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x462d40: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x462d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x462d44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x462d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x462d48: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x462d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x462d4c: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x462d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x462d50: 0x460109c2  mul.s       $f7, $f1, $f1
    ctx->pc = 0x462d50u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x462d54: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x462d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x462d58: 0xc4a40014  lwc1        $f4, 0x14($a1)
    ctx->pc = 0x462d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x462d5c: 0x46031882  mul.s       $f2, $f3, $f3
    ctx->pc = 0x462d5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x462d60: 0x46000202  mul.s       $f8, $f0, $f0
    ctx->pc = 0x462d60u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x462d64: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x462d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x462d68: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x462d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x462d6c: 0x46002302  mul.s       $f12, $f4, $f0
    ctx->pc = 0x462d6cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x462d70: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x462d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x462d74: 0x46001942  mul.s       $f5, $f3, $f0
    ctx->pc = 0x462d74u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x462d78: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x462d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x462d7c: 0x46012282  mul.s       $f10, $f4, $f1
    ctx->pc = 0x462d7cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x462d80: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x462d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x462d84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x462d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x462d88: 0x46023980  add.s       $f6, $f7, $f2
    ctx->pc = 0x462d88u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[2]);
    // 0x462d8c: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x462d8cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x462d90: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x462d90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x462d94: 0xe7a80008  swc1        $f8, 0x8($sp)
    ctx->pc = 0x462d94u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x462d98: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x462d98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x462d9c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x462d9cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x462da0: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x462da0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x462da4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x462da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x462da8: 0x460839c0  add.s       $f7, $f7, $f8
    ctx->pc = 0x462da8u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x462dac: 0xe7aa0020  swc1        $f10, 0x20($sp)
    ctx->pc = 0x462dacu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x462db0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x462db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x462db4: 0x46040240  add.s       $f9, $f0, $f4
    ctx->pc = 0x462db4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x462db8: 0x460c08c1  sub.s       $f3, $f1, $f12
    ctx->pc = 0x462db8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x462dbc: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x462dbcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x462dc0: 0x460a2a01  sub.s       $f8, $f5, $f10
    ctx->pc = 0x462dc0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[5], ctx->f[10]);
    // 0x462dc4: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x462dc4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x462dc8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x462dc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x462dcc: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x462dccu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
    // 0x462dd0: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x462dd0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x462dd4: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x462dd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x462dd8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x462dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x462ddc: 0x460a2940  add.s       $f5, $f5, $f10
    ctx->pc = 0x462ddcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[10]);
    // 0x462de0: 0x46065981  sub.s       $f6, $f11, $f6
    ctx->pc = 0x462de0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[11], ctx->f[6]);
    // 0x462de4: 0x46025881  sub.s       $f2, $f11, $f2
    ctx->pc = 0x462de4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[11], ctx->f[2]);
    // 0x462de8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x462de8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x462dec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x462decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x462df0: 0xe4860028  swc1        $f6, 0x28($a0)
    ctx->pc = 0x462df0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x462df4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x462df4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x462df8: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x462df8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x462dfc: 0x46075ac1  sub.s       $f11, $f11, $f7
    ctx->pc = 0x462dfcu;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[7]);
    // 0x462e00: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x462e00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x462e04: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x462e04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x462e08: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x462e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x462e0c: 0x46094a40  add.s       $f9, $f9, $f9
    ctx->pc = 0x462e0cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x462e10: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x462e10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x462e14: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x462e14u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x462e18: 0xe48b0014  swc1        $f11, 0x14($a0)
    ctx->pc = 0x462e18u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x462e1c: 0xe4850018  swc1        $f5, 0x18($a0)
    ctx->pc = 0x462e1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x462e20: 0xe4890020  swc1        $f9, 0x20($a0)
    ctx->pc = 0x462e20u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x462e24: 0xe4880024  swc1        $f8, 0x24($a0)
    ctx->pc = 0x462e24u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x462e28: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x462e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x462e2c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x462e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x462e30: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x462e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x462e34: 0xe4810034  swc1        $f1, 0x34($a0)
    ctx->pc = 0x462e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x462e38: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x462e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x462e3c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x462e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x462e40: 0x3e00008  jr          $ra
    ctx->pc = 0x462E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x462E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x462E40u;
        // 0x462e44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x462E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x462E48u;
}
