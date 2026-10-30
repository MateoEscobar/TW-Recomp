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

// Function: sub_004802E0
// Address: 0x4802e0 - 0x480398
void sub_004802E0_0x4802e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004802E0_0x4802e0");
#endif

    switch (ctx->pc) {
        case 0x4802f0u: goto label_4802f0;
        default: break;
    }

    ctx->pc = 0x4802e0u;

    // 0x4802e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4802e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4802e4: 0x4c0002a  bltz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x4802E4u;
    {
        const bool branch_taken_0x4802e4 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x4802E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4802E4u;
        // 0x4802e8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4802e4) {
            ctx->pc = 0x480390u;
            goto label_480390;
        }
    }
    ctx->pc = 0x4802ECu;
    // 0x4802ec: 0x0  nop
    ctx->pc = 0x4802ecu;
    // NOP
label_4802f0:
    // 0x4802f0: 0xc4aa0000  lwc1        $f10, 0x0($a1)
    ctx->pc = 0x4802f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4802f4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4802f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4802f8: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x4802f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4802fc: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x4802fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x480300: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x480300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x480304: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x480304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x480308: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x480308u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x48030c: 0xc4e60010  lwc1        $f6, 0x10($a3)
    ctx->pc = 0x48030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x480310: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x480310u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x480314: 0xc4e80014  lwc1        $f8, 0x14($a3)
    ctx->pc = 0x480314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x480318: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x480318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x48031c: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x48031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480320: 0x46065182  mul.s       $f6, $f10, $f6
    ctx->pc = 0x480320u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x480324: 0xc4e70020  lwc1        $f7, 0x20($a3)
    ctx->pc = 0x480324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x480328: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x480328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x48032c: 0xc4e90030  lwc1        $f9, 0x30($a3)
    ctx->pc = 0x48032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x480330: 0x46085202  mul.s       $f8, $f10, $f8
    ctx->pc = 0x480330u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x480334: 0xc4e50024  lwc1        $f5, 0x24($a3)
    ctx->pc = 0x480334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x480338: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x480338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x48033c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x48033cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x480340: 0xc4e40028  lwc1        $f4, 0x28($a3)
    ctx->pc = 0x480340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x480344: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x480344u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x480348: 0x460751c2  mul.s       $f7, $f10, $f7
    ctx->pc = 0x480348u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x48034c: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x48034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x480350: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x480350u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x480354: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x480354u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x480358: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x480358u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x48035c: 0x46045102  mul.s       $f4, $f10, $f4
    ctx->pc = 0x48035cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x480360: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x480360u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x480364: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x480364u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x480368: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x480368u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x48036c: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x48036cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x480370: 0xc4e00034  lwc1        $f0, 0x34($a3)
    ctx->pc = 0x480370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480374: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x480374u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x480378: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x480378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x48037c: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x48037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x480380: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x480380u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x480384: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x480384u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x480388: 0x4c1ffd9  bgez        $a2, . + 4 + (-0x27 << 2)
    ctx->pc = 0x480388u;
    {
        const bool branch_taken_0x480388 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x48038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480388u;
        // 0x48038c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480388) {
            ctx->pc = 0x4802F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4802f0;
        }
    }
    ctx->pc = 0x480390u;
label_480390:
    // 0x480390: 0x3e00008  jr          $ra
    ctx->pc = 0x480390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x480390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x480398u;
}
