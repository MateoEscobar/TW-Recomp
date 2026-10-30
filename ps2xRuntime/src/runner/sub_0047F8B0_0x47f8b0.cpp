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

// Function: sub_0047F8B0
// Address: 0x47f8b0 - 0x47f928
void sub_0047F8B0_0x47f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F8B0_0x47f8b0");
#endif

    switch (ctx->pc) {
        case 0x47f8b0u: goto label_47f8b0;
        case 0x47f8b4u: goto label_47f8b4;
        case 0x47f8b8u: goto label_47f8b8;
        case 0x47f8bcu: goto label_47f8bc;
        case 0x47f8c0u: goto label_47f8c0;
        case 0x47f8c4u: goto label_47f8c4;
        case 0x47f8c8u: goto label_47f8c8;
        case 0x47f8ccu: goto label_47f8cc;
        case 0x47f8d0u: goto label_47f8d0;
        case 0x47f8d4u: goto label_47f8d4;
        case 0x47f8d8u: goto label_47f8d8;
        case 0x47f8dcu: goto label_47f8dc;
        case 0x47f8e0u: goto label_47f8e0;
        case 0x47f8e4u: goto label_47f8e4;
        case 0x47f8e8u: goto label_47f8e8;
        case 0x47f8ecu: goto label_47f8ec;
        case 0x47f8f0u: goto label_47f8f0;
        case 0x47f8f4u: goto label_47f8f4;
        case 0x47f8f8u: goto label_47f8f8;
        case 0x47f8fcu: goto label_47f8fc;
        case 0x47f900u: goto label_47f900;
        case 0x47f904u: goto label_47f904;
        case 0x47f908u: goto label_47f908;
        case 0x47f90cu: goto label_47f90c;
        case 0x47f910u: goto label_47f910;
        case 0x47f914u: goto label_47f914;
        case 0x47f918u: goto label_47f918;
        case 0x47f91cu: goto label_47f91c;
        case 0x47f920u: goto label_47f920;
        case 0x47f924u: goto label_47f924;
        default: break;
    }

    ctx->pc = 0x47f8b0u;

label_47f8b0:
    // 0x47f8b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_47f8b4:
    // 0x47f8b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47f8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47f8b8:
    // 0x47f8b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x47f8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_47f8bc:
    // 0x47f8bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x47f8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f8c0:
    // 0x47f8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47f8c4:
    // 0x47f8c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x47f8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_47f8c8:
    // 0x47f8c8: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x47f8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_47f8cc:
    // 0x47f8cc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_47f8d0:
    if (ctx->pc == 0x47F8D0u) {
        ctx->pc = 0x47F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F8CCu;
        // 0x47f8d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F8D4u;
        goto label_47f8d4;
    }
    ctx->pc = 0x47F8CCu;
    {
        const bool branch_taken_0x47f8cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F8CCu;
        // 0x47f8d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f8cc) {
            ctx->pc = 0x47F908u;
            goto label_47f908;
        }
    }
    ctx->pc = 0x47F8D4u;
label_47f8d4:
    // 0x47f8d4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x47f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_47f8d8:
    // 0x47f8d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_47f8dc:
    if (ctx->pc == 0x47F8DCu) {
        ctx->pc = 0x47F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F8D8u;
        // 0x47f8dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F8E0u;
        goto label_47f8e0;
    }
    ctx->pc = 0x47F8D8u;
    {
        const bool branch_taken_0x47f8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F8D8u;
        // 0x47f8dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f8d8) {
            ctx->pc = 0x47F8FCu;
            goto label_47f8fc;
        }
    }
    ctx->pc = 0x47F8E0u;
label_47f8e0:
    // 0x47f8e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x47f8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47f8e4:
    // 0x47f8e4: 0x40f809  jalr        $v0
label_47f8e8:
    if (ctx->pc == 0x47F8E8u) {
        ctx->pc = 0x47F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F8E4u;
        // 0x47f8e8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F8ECu;
        goto label_47f8ec;
    }
    ctx->pc = 0x47F8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F8ECu);
        ctx->pc = 0x47F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F8E4u;
        // 0x47f8e8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F8E4u, 0x47F8ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F8ECu;
label_47f8ec:
    // 0x47f8ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x47f8ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_47f8f0:
    // 0x47f8f0: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_47f8f4:
    if (ctx->pc == 0x47F8F4u) {
        ctx->pc = 0x47F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F8F0u;
        // 0x47f8f4: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F8F8u;
        goto label_47f8f8;
    }
    ctx->pc = 0x47F8F0u;
    {
        const bool branch_taken_0x47f8f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x47F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F8F0u;
        // 0x47f8f4: 0x2622000c  addiu       $v0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f8f0) {
            ctx->pc = 0x47F8FCu;
            goto label_47f8fc;
        }
    }
    ctx->pc = 0x47F8F8u;
label_47f8f8:
    // 0x47f8f8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x47f8f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47f8fc:
    // 0x47f8fc: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x47f8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_47f900:
    // 0x47f900: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
label_47f904:
    if (ctx->pc == 0x47F904u) {
        ctx->pc = 0x47F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F900u;
        // 0x47f904: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F908u;
        goto label_47f908;
    }
    ctx->pc = 0x47F900u;
    {
        const bool branch_taken_0x47f900 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f900) {
            ctx->pc = 0x47F904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F900u;
            // 0x47f904: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F8D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f8d8;
        }
    }
    ctx->pc = 0x47F908u;
label_47f908:
    // 0x47f908: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47f908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f90c:
    // 0x47f90c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x47f90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47f910:
    // 0x47f910: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47f910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47f914:
    // 0x47f914: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x47f914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47f918:
    // 0x47f918: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47f918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47f91c:
    // 0x47f91c: 0x3e00008  jr          $ra
label_47f920:
    if (ctx->pc == 0x47F920u) {
        ctx->pc = 0x47F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F91Cu;
        // 0x47f920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F924u;
        goto label_47f924;
    }
    ctx->pc = 0x47F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F91Cu;
        // 0x47f920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F924u;
label_47f924:
    // 0x47f924: 0x0  nop
    ctx->pc = 0x47f924u;
    // NOP
    ctx->pc = 0x47f928u;
}
