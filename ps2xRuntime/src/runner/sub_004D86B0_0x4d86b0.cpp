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

// Function: sub_004D86B0
// Address: 0x4d86b0 - 0x4d87b8
void sub_004D86B0_0x4d86b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D86B0_0x4d86b0");
#endif

    switch (ctx->pc) {
        case 0x4d872cu: goto label_4d872c;
        case 0x4d8758u: goto label_4d8758;
        default: break;
    }

    ctx->pc = 0x4d86b0u;

    // 0x4d86b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d86b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d86b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4d86b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d86b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d86b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d86bc: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4d86bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d86c0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x4d86c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d86c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d86c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d86c8: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x4d86c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d86cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d86ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d86d0: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x4d86d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4d86d4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x4d86d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d86d8: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x4d86d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x4d86dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d86dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d86e0: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x4d86e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x4d86e4: 0x2e630009  sltiu       $v1, $s3, 0x9
    ctx->pc = 0x4d86e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4d86e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d86e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d86ec: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4d86ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d86f0: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x4d86f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x4d86f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4d86f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4d86f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d86f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d86fc: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x4d86fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x4d8700: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D8700u;
    {
        const bool branch_taken_0x4d8700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8700u;
        // 0x4d8704: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8700) {
            ctx->pc = 0x4D8740u;
            goto label_4d8740;
        }
    }
    ctx->pc = 0x4D8708u;
    // 0x4d8708: 0x148001b  divu        $zero, $t2, $t0
    ctx->pc = 0x4d8708u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x4d870c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x4d870cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8710: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4d8710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4d8714: 0x1012  mflo        $v0
    ctx->pc = 0x4d8714u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4d8718: 0x482818  mult        $a1, $v0, $t0
    ctx->pc = 0x4d8718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4d871c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x4d871cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d8720: 0x1452823  subu        $a1, $t2, $a1
    ctx->pc = 0x4d8720u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x4d8724: 0xc13399c  jal         func_4CE670
    ctx->pc = 0x4D8724u;
    SET_GPR_U32(ctx, 31, 0x4D872Cu);
    ctx->pc = 0x4D8728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8724u;
    // 0x4d8728: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4D8724u, 0x4D872Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D872Cu;
label_4d872c:
    // 0x4d872c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4d872cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4d8730: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4d8730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x4d8734: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4d8734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4d8738: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4D8738u;
    {
        const bool branch_taken_0x4d8738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8738u;
        // 0x4d873c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8738) {
            ctx->pc = 0x4D875Cu;
            goto label_4d875c;
        }
    }
    ctx->pc = 0x4D8740u;
label_4d8740:
    // 0x4d8740: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x4d8740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x4d8744: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x4d8744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d8748: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4d8748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4d874c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4d874cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4d8750: 0xc13399c  jal         func_4CE670
    ctx->pc = 0x4D8750u;
    SET_GPR_U32(ctx, 31, 0x4D8758u);
    ctx->pc = 0x4D8754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8750u;
    // 0x4d8754: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE670u, 0x4D8750u, 0x4D8758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8758u;
label_4d8758:
    // 0x4d8758: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4d8758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4d875c:
    // 0x4d875c: 0x2e430002  sltiu       $v1, $s2, 0x2
    ctx->pc = 0x4d875cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d8760: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4d8760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d8764: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x4d8764u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x4d8768: 0x2e860002  sltiu       $a2, $s4, 0x2
    ctx->pc = 0x4d8768u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4d876c: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x4d876cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4d8770: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x4d8770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4d8774: 0x86100a  movz        $v0, $a0, $a2
    ctx->pc = 0x4d8774u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4d8778: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4d8778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4d877c: 0x2e660009  sltiu       $a2, $s3, 0x9
    ctx->pc = 0x4d877cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x4d8780: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x4d8780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x4d8784: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x4d8784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x4d8788: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4d8788u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4d878c: 0x86100a  movz        $v0, $a0, $a2
    ctx->pc = 0x4d878cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4d8790: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x4d8790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x4d8794: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x4d8794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x4d8798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d8798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d879c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d879cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d87a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d87a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d87a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d87a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d87a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d87a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d87ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4d87acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d87b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4D87B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D87B0u;
        // 0x4d87b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D87B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D87B8u;
}
