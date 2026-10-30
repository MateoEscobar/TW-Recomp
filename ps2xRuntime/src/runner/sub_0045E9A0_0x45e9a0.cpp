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

// Function: sub_0045E9A0
// Address: 0x45e9a0 - 0x45ea90
void sub_0045E9A0_0x45e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045E9A0_0x45e9a0");
#endif

    switch (ctx->pc) {
        case 0x45ea08u: goto label_45ea08;
        case 0x45ea28u: goto label_45ea28;
        default: break;
    }

    ctx->pc = 0x45e9a0u;

    // 0x45e9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45e9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45e9a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45e9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45e9a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x45e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x45e9ac: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x45e9acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45e9b0: 0x14e20017  bne         $a3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45E9B0u;
    {
        const bool branch_taken_0x45e9b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x45E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45E9B0u;
        // 0x45e9b4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45e9b0) {
            ctx->pc = 0x45EA10u;
            goto label_45ea10;
        }
    }
    ctx->pc = 0x45E9B8u;
    // 0x45e9b8: 0xc46700ac  lwc1        $f7, 0xAC($v1)
    ctx->pc = 0x45e9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x45e9bc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x45e9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x45e9c0: 0xc4660090  lwc1        $f6, 0x90($v1)
    ctx->pc = 0x45e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x45e9c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x45e9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45e9c8: 0xc4600094  lwc1        $f0, 0x94($v1)
    ctx->pc = 0x45e9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45e9cc: 0xc4610098  lwc1        $f1, 0x98($v1)
    ctx->pc = 0x45e9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45e9d0: 0xc462009c  lwc1        $f2, 0x9C($v1)
    ctx->pc = 0x45e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45e9d4: 0xc46300a0  lwc1        $f3, 0xA0($v1)
    ctx->pc = 0x45e9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45e9d8: 0xc46400a4  lwc1        $f4, 0xA4($v1)
    ctx->pc = 0x45e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x45e9dc: 0xc46500a8  lwc1        $f5, 0xA8($v1)
    ctx->pc = 0x45e9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x45e9e0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45e9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45e9e4: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x45e9e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45e9e8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x45e9e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45e9ec: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x45e9ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45e9f0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x45e9f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x45e9f4: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x45e9f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x45e9f8: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x45e9f8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x45e9fc: 0xe7a50018  swc1        $f5, 0x18($sp)
    ctx->pc = 0x45e9fcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x45ea00: 0xc114212  jal         func_450848
    ctx->pc = 0x45EA00u;
    SET_GPR_U32(ctx, 31, 0x45EA08u);
    ctx->pc = 0x45EA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45EA00u;
    // 0x45ea04: 0xe7a7001c  swc1        $f7, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x450848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x450848u, 0x45EA00u, 0x45EA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EA08u;
label_45ea08:
    // 0x45ea08: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x45EA08u;
    {
        const bool branch_taken_0x45ea08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EA08u;
        // 0x45ea0c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ea08) {
            ctx->pc = 0x45EA84u;
            goto label_45ea84;
        }
    }
    ctx->pc = 0x45EA10u;
label_45ea10:
    // 0x45ea10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45ea14: 0x246900a8  addiu       $t1, $v1, 0xA8
    ctx->pc = 0x45ea14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 168));
    // 0x45ea18: 0x24680090  addiu       $t0, $v1, 0x90
    ctx->pc = 0x45ea18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x45ea1c: 0x24620098  addiu       $v0, $v1, 0x98
    ctx->pc = 0x45ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 152));
    // 0x45ea20: 0x18a00017  blez        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x45EA20u;
    {
        const bool branch_taken_0x45ea20 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x45EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EA20u;
        // 0x45ea24: 0x246600a0  addiu       $a2, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ea20) {
            ctx->pc = 0x45EA80u;
            goto label_45ea80;
        }
    }
    ctx->pc = 0x45EA28u;
label_45ea28:
    // 0x45ea28: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x45ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45ea2c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x45ea2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x45ea30: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x45ea30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45ea34: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x45ea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45ea38: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x45ea38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45ea3c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x45ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x45ea40: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x45ea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45ea44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45ea44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45ea48: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x45ea48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45ea4c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45ea4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45ea50: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x45ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x45ea54: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x45ea54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45ea58: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45ea58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45ea5c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x45ea5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45ea60: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45ea60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45ea64: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x45ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x45ea68: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x45ea68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45ea6c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x45ea6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x45ea70: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x45ea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45ea74: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x45ea74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x45ea78: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x45EA78u;
    {
        const bool branch_taken_0x45ea78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x45EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EA78u;
        // 0x45ea7c: 0x872021  addu        $a0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ea78) {
            ctx->pc = 0x45EA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ea28;
        }
    }
    ctx->pc = 0x45EA80u;
label_45ea80:
    // 0x45ea80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45ea80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45ea84:
    // 0x45ea84: 0x3e00008  jr          $ra
    ctx->pc = 0x45EA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45EA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EA84u;
        // 0x45ea88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EA8Cu;
    // 0x45ea8c: 0x0  nop
    ctx->pc = 0x45ea8cu;
    // NOP
    ctx->pc = 0x45ea90u;
}
