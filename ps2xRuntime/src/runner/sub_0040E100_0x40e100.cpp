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

// Function: sub_0040E100
// Address: 0x40e100 - 0x40e1a0
void sub_0040E100_0x40e100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040E100_0x40e100");
#endif

    switch (ctx->pc) {
        case 0x40e118u: goto label_40e118;
        case 0x40e120u: goto label_40e120;
        case 0x40e134u: goto label_40e134;
        case 0x40e16cu: goto label_40e16c;
        case 0x40e18cu: goto label_40e18c;
        default: break;
    }

    ctx->pc = 0x40e100u;

    // 0x40e100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40e100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40e104: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40e104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40e108: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x40e108u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x40e10c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40e10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40e110: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x40E110u;
    SET_GPR_U32(ctx, 31, 0x40E118u);
    ctx->pc = 0x40E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E110u;
    // 0x40e114: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40E110u, 0x40E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E118u;
label_40e118:
    // 0x40e118: 0xc104620  jal         func_411880
    ctx->pc = 0x40E118u;
    SET_GPR_U32(ctx, 31, 0x40E120u);
    ctx->pc = 0x40E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E118u;
    // 0x40e11c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x411880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411880u, 0x40E118u, 0x40E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E120u;
label_40e120:
    // 0x40e120: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x40e120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x40e124: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x40E124u;
    {
        const bool branch_taken_0x40e124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E124u;
        // 0x40e128: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e124) {
            ctx->pc = 0x40E14Cu;
            goto label_40e14c;
        }
    }
    ctx->pc = 0x40E12Cu;
    // 0x40e12c: 0xc104620  jal         func_411880
    ctx->pc = 0x40E12Cu;
    SET_GPR_U32(ctx, 31, 0x40E134u);
    ctx->pc = 0x411880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411880u, 0x40E12Cu, 0x40E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E134u;
label_40e134:
    // 0x40e134: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40e134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e138: 0x0  nop
    ctx->pc = 0x40e138u;
    // NOP
    // 0x40e13c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x40E13Cu;
    {
        const bool branch_taken_0x40e13c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x40e13c) {
            ctx->pc = 0x40E164u;
            goto label_40e164;
        }
    }
    ctx->pc = 0x40E144u;
    // 0x40e144: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x40E144u;
    {
        const bool branch_taken_0x40e144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E144u;
        // 0x40e148: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e144) {
            ctx->pc = 0x40E174u;
            goto label_40e174;
        }
    }
    ctx->pc = 0x40E14Cu;
label_40e14c:
    // 0x40e14c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x40e14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x40e150: 0xc4408c48  lwc1        $f0, -0x73B8($v0)
    ctx->pc = 0x40e150u;
    { uint32_t bits = FAST_READ32(0x588C48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x40e154: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x40e154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x40e158: 0x0  nop
    ctx->pc = 0x40e158u;
    // NOP
    // 0x40e15c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x40E15Cu;
    {
        const bool branch_taken_0x40e15c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x40e15c) {
            ctx->pc = 0x40E160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40E15Cu;
            // 0x40e160: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40E174u;
            goto label_40e174;
        }
    }
    ctx->pc = 0x40E164u;
label_40e164:
    // 0x40e164: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x40E164u;
    SET_GPR_U32(ctx, 31, 0x40E16Cu);
    ctx->pc = 0x40E168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40E164u;
    // 0x40e168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x40E164u, 0x40E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E16Cu;
label_40e16c:
    // 0x40e16c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x40E16Cu;
    {
        const bool branch_taken_0x40e16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E16Cu;
        // 0x40e170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e16c) {
            ctx->pc = 0x40E184u;
            goto label_40e184;
        }
    }
    ctx->pc = 0x40E174u;
label_40e174:
    // 0x40e174: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40E174u;
    {
        const bool branch_taken_0x40e174 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x40E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E174u;
        // 0x40e178: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e174) {
            ctx->pc = 0x40E184u;
            goto label_40e184;
        }
    }
    ctx->pc = 0x40E17Cu;
    // 0x40e17c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x40E17Cu;
    {
        const bool branch_taken_0x40e17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E17Cu;
        // 0x40e180: 0xc4408c48  lwc1        $f0, -0x73B8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40e17c) {
            ctx->pc = 0x40E18Cu;
            goto label_40e18c;
        }
    }
    ctx->pc = 0x40E184u;
label_40e184:
    // 0x40e184: 0xc104620  jal         func_411880
    ctx->pc = 0x40E184u;
    SET_GPR_U32(ctx, 31, 0x40E18Cu);
    ctx->pc = 0x411880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411880u, 0x40E184u, 0x40E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40E18Cu;
label_40e18c:
    // 0x40e18c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40e18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40e190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40e190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40e194: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x40e194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x40e198: 0x3e00008  jr          $ra
    ctx->pc = 0x40E198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40E198u;
        // 0x40e19c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40E198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40E1A0u;
}
