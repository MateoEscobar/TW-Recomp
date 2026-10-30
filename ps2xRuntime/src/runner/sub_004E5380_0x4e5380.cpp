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

// Function: sub_004E5380
// Address: 0x4e5380 - 0x4e5428
void sub_004E5380_0x4e5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5380_0x4e5380");
#endif

    switch (ctx->pc) {
        case 0x4e53c8u: goto label_4e53c8;
        case 0x4e53f0u: goto label_4e53f0;
        default: break;
    }

    ctx->pc = 0x4e5380u;

    // 0x4e5380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e5380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4e5384: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4e5384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4e5388: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x4e5388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x4e538c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e538cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5390: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e5390u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5394: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4e5394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x4e5398: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x4e5398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4e539c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e539cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4e53a0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e53a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e53a4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4e53a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4e53a8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4e53a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4e53ac: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4E53ACu;
    {
        const bool branch_taken_0x4e53ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E53B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E53ACu;
        // 0x4e53b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e53ac) {
            ctx->pc = 0x4E5404u;
            goto label_4e5404;
        }
    }
    ctx->pc = 0x4E53B4u;
    // 0x4e53b4: 0xb49023  subu        $s2, $a1, $s4
    ctx->pc = 0x4e53b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x4e53b8: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x4e53b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e53bc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4e53bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e53c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e53c4: 0x0  nop
    ctx->pc = 0x4e53c4u;
    // NOP
label_4e53c8:
    // 0x4e53c8: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x4e53c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x4e53cc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4e53ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e53d0: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x4e53d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x4e53d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e53d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e53d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4e53d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e53dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e53dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e53e0: 0x123083  sra         $a2, $s2, 2
    ctx->pc = 0x4e53e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 18), 2));
    // 0x4e53e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4e53e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e53e8: 0xc13946a  jal         func_4E51A8
    ctx->pc = 0x4E53E8u;
    SET_GPR_U32(ctx, 31, 0x4E53F0u);
    ctx->pc = 0x4E53ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E53E8u;
    // 0x4e53ec: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E51A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E51A8u, 0x4E53E8u, 0x4E53F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E53F0u;
label_4e53f0:
    // 0x4e53f0: 0x2341023  subu        $v0, $s1, $s4
    ctx->pc = 0x4e53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4e53f4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e53f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x4e53f8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x4e53f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4e53fc: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x4E53FCu;
    {
        const bool branch_taken_0x4e53fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e53fc) {
            ctx->pc = 0x4E5400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E53FCu;
            // 0x4e5400: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E53C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e53c8;
        }
    }
    ctx->pc = 0x4E5404u;
label_4e5404:
    // 0x4e5404: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4e5404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4e5408: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4e5408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e540c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e540cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5410: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4e5410u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5414: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4e5414u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e5418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e541c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E541Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E541Cu;
        // 0x4e5420: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E541Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E5424u;
    // 0x4e5424: 0x0  nop
    ctx->pc = 0x4e5424u;
    // NOP
    ctx->pc = 0x4e5428u;
}
