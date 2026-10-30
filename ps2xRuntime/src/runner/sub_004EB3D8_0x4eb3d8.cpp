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

// Function: sub_004EB3D8
// Address: 0x4eb3d8 - 0x4eb480
void sub_004EB3D8_0x4eb3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB3D8_0x4eb3d8");
#endif

    switch (ctx->pc) {
        case 0x4eb420u: goto label_4eb420;
        case 0x4eb448u: goto label_4eb448;
        default: break;
    }

    ctx->pc = 0x4eb3d8u;

    // 0x4eb3d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4eb3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4eb3dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4eb3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4eb3e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4eb3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4eb3e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eb3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb3e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4eb3e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb3ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4eb3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4eb3f0: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x4eb3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4eb3f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4eb3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4eb3f8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4eb3f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4eb3fc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4eb3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4eb400: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4eb400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4eb404: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4EB404u;
    {
        const bool branch_taken_0x4eb404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB404u;
        // 0x4eb408: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb404) {
            ctx->pc = 0x4EB45Cu;
            goto label_4eb45c;
        }
    }
    ctx->pc = 0x4EB40Cu;
    // 0x4eb40c: 0xb49023  subu        $s2, $a1, $s4
    ctx->pc = 0x4eb40cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x4eb410: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x4eb410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb414: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4eb414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb418: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4eb418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4eb41c: 0x0  nop
    ctx->pc = 0x4eb41cu;
    // NOP
label_4eb420:
    // 0x4eb420: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x4eb420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x4eb424: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4eb424u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb428: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x4eb428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x4eb42c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4eb42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4eb430: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4eb430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb434: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4eb434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb438: 0x123083  sra         $a2, $s2, 2
    ctx->pc = 0x4eb438u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 2));
    // 0x4eb43c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4eb43cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb440: 0xc13aca4  jal         func_4EB290
    ctx->pc = 0x4EB440u;
    SET_GPR_U32(ctx, 31, 0x4EB448u);
    ctx->pc = 0x4EB444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB440u;
    // 0x4eb444: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB290u, 0x4EB440u, 0x4EB448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB448u;
label_4eb448:
    // 0x4eb448: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x4eb448u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4eb44c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4eb44cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4eb450: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4eb450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4eb454: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x4EB454u;
    {
        const bool branch_taken_0x4eb454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eb454) {
            ctx->pc = 0x4EB458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EB454u;
            // 0x4eb458: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EB420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb420;
        }
    }
    ctx->pc = 0x4EB45Cu;
label_4eb45c:
    // 0x4eb45c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4eb45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4eb460: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4eb460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4eb464: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4eb464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eb468: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4eb468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eb46c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4eb46cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eb470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb474: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB474u;
        // 0x4eb478: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB47Cu;
    // 0x4eb47c: 0x0  nop
    ctx->pc = 0x4eb47cu;
    // NOP
    ctx->pc = 0x4eb480u;
}
