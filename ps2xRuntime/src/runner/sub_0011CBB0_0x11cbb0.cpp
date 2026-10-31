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

// Function: sub_0011CBB0
// Address: 0x11cbb0 - 0x11cc68
void sub_0011CBB0_0x11cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CBB0_0x11cbb0");
#endif

    switch (ctx->pc) {
        case 0x11cbecu: goto label_11cbec;
        case 0x11cc3cu: goto label_11cc3c;
        default: break;
    }

    ctx->pc = 0x11cbb0u;

    // 0x11cbb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11cbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11cbb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11cbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11cbb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11cbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11cbbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11cbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbc0: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x11cbc0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11cbc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11cbc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbc8: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x11cbc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11cbcc: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x11cbccu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x11cbd0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x11cbd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11cbd4: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x11cbd4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x11cbd8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11cbd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11cbdc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x11cbdcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x11cbe0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11cbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11cbe4: 0xc04800e  jal         func_120038
    ctx->pc = 0x11CBE4u;
    SET_GPR_U32(ctx, 31, 0x11CBECu);
    ctx->pc = 0x11CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBE4u;
    // 0x11cbe8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x120038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120038u, 0x11CBE4u, 0x11CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBECu;
label_11cbec:
    // 0x11cbec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CBECu;
    {
        const bool branch_taken_0x11cbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cbec) {
            ctx->pc = 0x11CBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CBECu;
            // 0x11cbf0: 0xc6030008  lwc1        $f3, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CBFCu;
            goto label_11cbfc;
        }
    }
    ctx->pc = 0x11CBF4u;
    // 0x11cbf4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11CBF4u;
    {
        const bool branch_taken_0x11cbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBF4u;
        // 0x11cbf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbf4) {
            ctx->pc = 0x11CC40u;
            goto label_11cc40;
        }
    }
    ctx->pc = 0x11CBFCu;
label_11cbfc:
    // 0x11cbfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11cbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc00: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x11cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11cc04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11cc04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11cc08: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x11cc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11cc0c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x11cc0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x11cc10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11cc10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11cc14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11cc14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11cc18: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x11cc18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x11cc1c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11cc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11cc20: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x11cc20u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x11cc24: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11cc24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11cc28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11cc28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc2c: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x11cc2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11cc30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11cc30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc34: 0xc050ab2  jal         func_142AC8
    ctx->pc = 0x11CC34u;
    SET_GPR_U32(ctx, 31, 0x11CC3Cu);
    ctx->pc = 0x11CC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC34u;
    // 0x11cc38: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x142AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142AC8u, 0x11CC34u, 0x11CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC3Cu;
label_11cc3c:
    // 0x11cc3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cc40:
    // 0x11cc40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11cc40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11cc44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11cc44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cc48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11cc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cc4c: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x11cc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x11cc50: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x11cc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x11cc54: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x11cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11cc58: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11cc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11cc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x11CC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC5Cu;
        // 0x11cc60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CC64u;
    // 0x11cc64: 0x0  nop
    ctx->pc = 0x11cc64u;
    // NOP
    ctx->pc = 0x11cc68u;
}
