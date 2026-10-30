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

// Function: sub_004304C0
// Address: 0x4304c0 - 0x4305ac
void sub_004304C0_0x4304c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004304C0_0x4304c0");
#endif

    switch (ctx->pc) {
        case 0x430528u: goto label_430528;
        case 0x430584u: goto label_430584;
        default: break;
    }

    ctx->pc = 0x4304c0u;

    // 0x4304c0: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x4304c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4304c4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4304C4u;
    {
        const bool branch_taken_0x4304c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4304C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4304C4u;
        // 0x4304c8: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4304c4) {
            ctx->pc = 0x430568u;
            goto label_430568;
        }
    }
    ctx->pc = 0x4304CCu;
    // 0x4304cc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x4304ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x4304d0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4304D0u;
    {
        const bool branch_taken_0x4304d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4304D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4304D0u;
        // 0x4304d4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4304d0) {
            ctx->pc = 0x430568u;
            goto label_430568;
        }
    }
    ctx->pc = 0x4304D8u;
    // 0x4304d8: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x4304d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x4304dc: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x4304dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x4304e0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4304e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4304e4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x4304e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x4304e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4304e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4304ec: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x4304ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x4304f0: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x4304f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x4304f4: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x4304f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x4304f8: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x4304f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x4304fc: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x4304fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430500: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x430500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x430504: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x430504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x430508: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x430508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x43050c: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x43050cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x430510: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x430510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x430514: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x430514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x430518: 0x700a46e9  pcpyh       $t0, $t2
    ctx->pc = 0x430518u;
    { __m128i src = GPR_VEC(ctx, 10); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 8, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x43051c: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x43051cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x430520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x430520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430524: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x430524u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_430528:
    // 0x430528: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x430528u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x43052c: 0x704914c9  pxor        $v0, $v0, $t1
    ctx->pc = 0x43052cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x430530: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x430530u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x430534: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x430534u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x430538: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x430538u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x43053c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x43053cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x430540: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x430540u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x430544: 0x70491ba9  pcpyud      $v1, $v0, $t1
    ctx->pc = 0x430544u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x430548: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x430548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43054c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x43054Cu;
    {
        const bool branch_taken_0x43054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43054c) {
            ctx->pc = 0x430550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43054Cu;
            // 0x430550: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430568u;
            goto label_430568;
        }
    }
    ctx->pc = 0x430554u;
    // 0x430554: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x430554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x430558: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x430558u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x43055c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x43055Cu;
    {
        const bool branch_taken_0x43055c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43055Cu;
        // 0x430560: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43055c) {
            ctx->pc = 0x430528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430528;
        }
    }
    ctx->pc = 0x430564u;
    // 0x430564: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x430564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_430568:
    // 0x430568: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x430568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x43056c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x43056cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x430570: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x430570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x430574: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x430574u;
    {
        const bool branch_taken_0x430574 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x430574) {
            ctx->pc = 0x43059Cu;
            goto label_43059c;
        }
    }
    ctx->pc = 0x43057Cu;
    // 0x43057c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x43057cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x430580: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x430580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_430584:
    // 0x430584: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x430584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430588: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x430588u;
    {
        const bool branch_taken_0x430588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x43058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430588u;
        // 0x43058c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430588) {
            ctx->pc = 0x4305A4u;
            goto label_4305a4;
        }
    }
    ctx->pc = 0x430590u;
    // 0x430590: 0x0  nop
    ctx->pc = 0x430590u;
    // NOP
    // 0x430594: 0x14c3fffb  bne         $a2, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x430594u;
    {
        const bool branch_taken_0x430594 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x430598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430594u;
        // 0x430598: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430594) {
            ctx->pc = 0x430584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430584;
        }
    }
    ctx->pc = 0x43059Cu;
label_43059c:
    // 0x43059c: 0x3e00008  jr          $ra
    ctx->pc = 0x43059Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4305A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43059Cu;
        // 0x4305a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43059Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4305A4u;
label_4305a4:
    // 0x4305a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4305A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4305A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4305A4u;
        // 0x4305a8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4305A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4305ACu;
}
