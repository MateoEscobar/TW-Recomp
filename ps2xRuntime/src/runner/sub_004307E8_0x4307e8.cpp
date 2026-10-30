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

// Function: sub_004307E8
// Address: 0x4307e8 - 0x4308a0
void sub_004307E8_0x4307e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004307E8_0x4307e8");
#endif

    switch (ctx->pc) {
        case 0x430824u: goto label_430824;
        case 0x430848u: goto label_430848;
        case 0x430880u: goto label_430880;
        default: break;
    }

    ctx->pc = 0x4307e8u;

    // 0x4307e8: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x4307e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4307ec: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4307ECu;
    {
        const bool branch_taken_0x4307ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4307F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4307ECu;
        // 0x4307f0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4307ec) {
            ctx->pc = 0x430864u;
            goto label_430864;
        }
    }
    ctx->pc = 0x4307F4u;
    // 0x4307f4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x4307f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x4307f8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4307F8u;
    {
        const bool branch_taken_0x4307f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4307FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4307F8u;
        // 0x4307fc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4307f8) {
            ctx->pc = 0x430864u;
            goto label_430864;
        }
    }
    ctx->pc = 0x430800u;
    // 0x430800: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x430800u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x430804: 0x2cca0020  sltiu       $t2, $a2, 0x20
    ctx->pc = 0x430804u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x430808: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x430808u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43080c: 0x81a38  dsll        $v1, $t0, 8
    ctx->pc = 0x43080cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 8);
    // 0x430810: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x430810u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x430814: 0x70081ee9  pcpyh       $v1, $t0
    ctx->pc = 0x430814u;
    { __m128i src = GPR_VEC(ctx, 8); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 3, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x430818: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
    ctx->pc = 0x430818u;
    {
        const bool branch_taken_0x430818 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x43081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430818u;
        // 0x43081c: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x430818) {
            ctx->pc = 0x430854u;
            goto label_430854;
        }
    }
    ctx->pc = 0x430820u;
    // 0x430820: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x430820u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_430824:
    // 0x430824: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x430824u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x430828: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x430828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x43082c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x43082cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x430830: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x430830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x430834: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x430834u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x430838: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x430838u;
    {
        const bool branch_taken_0x430838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430838u;
        // 0x43083c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430838) {
            ctx->pc = 0x430824u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430824;
        }
    }
    ctx->pc = 0x430840u;
    // 0x430840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x430840u;
    {
        const bool branch_taken_0x430840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430840u;
        // 0x430844: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x430840) {
            ctx->pc = 0x430854u;
            goto label_430854;
        }
    }
    ctx->pc = 0x430848u;
label_430848:
    // 0x430848: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x430848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x43084c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x43084cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x430850: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x430850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_430854:
    // 0x430854: 0x0  nop
    ctx->pc = 0x430854u;
    // NOP
    // 0x430858: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x430858u;
    {
        const bool branch_taken_0x430858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x430858) {
            ctx->pc = 0x43085Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430858u;
            // 0x43085c: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430848;
        }
    }
    ctx->pc = 0x430860u;
    // 0x430860: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x430860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_430864:
    // 0x430864: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x430864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x430868: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x430868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x43086c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43086cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x430870: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x430870u;
    {
        const bool branch_taken_0x430870 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x430870) {
            ctx->pc = 0x430898u;
            goto label_430898;
        }
    }
    ctx->pc = 0x430878u;
    // 0x430878: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x430878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x43087c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43087cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_430880:
    // 0x430880: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x430880u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x430884: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x430884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x430888: 0x0  nop
    ctx->pc = 0x430888u;
    // NOP
    // 0x43088c: 0x0  nop
    ctx->pc = 0x43088cu;
    // NOP
    // 0x430890: 0x14c2fffb  bne         $a2, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x430890u;
    {
        const bool branch_taken_0x430890 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x430894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430890u;
        // 0x430894: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430890) {
            ctx->pc = 0x430880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430880;
        }
    }
    ctx->pc = 0x430898u;
label_430898:
    // 0x430898: 0x3e00008  jr          $ra
    ctx->pc = 0x430898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430898u;
        // 0x43089c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4308A0u;
}
