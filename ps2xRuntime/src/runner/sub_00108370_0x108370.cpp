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

// Function: sub_00108370
// Address: 0x108370 - 0x1083d0
void sub_00108370_0x108370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108370_0x108370");
#endif

    switch (ctx->pc) {
        case 0x1083a0u: goto label_1083a0;
        default: break;
    }

    ctx->pc = 0x108370u;

    // 0x108370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108374: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x108374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x108378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10837c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10837cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108380: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x108380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108384: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x108384u;
    {
        const bool branch_taken_0x108384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108384) {
            ctx->pc = 0x108388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108384u;
            // 0x108388: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1083C0u;
            goto label_1083c0;
        }
    }
    ctx->pc = 0x10838Cu;
    // 0x10838c: 0x8c4202b8  lw          $v0, 0x2B8($v0)
    ctx->pc = 0x10838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
    // 0x108390: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x108390u;
    {
        const bool branch_taken_0x108390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108390) {
            ctx->pc = 0x108394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108390u;
            // 0x108394: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1083C0u;
            goto label_1083c0;
        }
    }
    ctx->pc = 0x108398u;
    // 0x108398: 0xc0e409a  jal         func_390268
    ctx->pc = 0x108398u;
    SET_GPR_U32(ctx, 31, 0x1083A0u);
    ctx->pc = 0x10839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108398u;
    // 0x10839c: 0x240400c4  addiu       $a0, $zero, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x108398u, 0x1083A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1083A0u;
label_1083a0:
    // 0x1083a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1083A0u;
    {
        const bool branch_taken_0x1083a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1083a0) {
            ctx->pc = 0x1083A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1083A0u;
            // 0x1083a4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1083B0u;
            goto label_1083b0;
        }
    }
    ctx->pc = 0x1083A8u;
    // 0x1083a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1083A8u;
    {
        const bool branch_taken_0x1083a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1083ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083A8u;
        // 0x1083ac: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083a8) {
            ctx->pc = 0x1083C0u;
            goto label_1083c0;
        }
    }
    ctx->pc = 0x1083B0u;
label_1083b0:
    // 0x1083b0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1083b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1083b4: 0x8c6202b8  lw          $v0, 0x2B8($v1)
    ctx->pc = 0x1083b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 696)));
    // 0x1083b8: 0xc44003a4  lwc1        $f0, 0x3A4($v0)
    ctx->pc = 0x1083b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1083bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1083bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1083c0:
    // 0x1083c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1083c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1083c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1083c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1083c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1083C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1083CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083C8u;
        // 0x1083cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1083C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1083D0u;
}
