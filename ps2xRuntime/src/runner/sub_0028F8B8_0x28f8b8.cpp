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

// Function: sub_0028F8B8
// Address: 0x28f8b8 - 0x28f928
void sub_0028F8B8_0x28f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F8B8_0x28f8b8");
#endif

    switch (ctx->pc) {
        case 0x28f8b8u: goto label_28f8b8;
        case 0x28f8bcu: goto label_28f8bc;
        case 0x28f8c0u: goto label_28f8c0;
        case 0x28f8c4u: goto label_28f8c4;
        case 0x28f8c8u: goto label_28f8c8;
        case 0x28f8ccu: goto label_28f8cc;
        case 0x28f8d0u: goto label_28f8d0;
        case 0x28f8d4u: goto label_28f8d4;
        case 0x28f8d8u: goto label_28f8d8;
        case 0x28f8dcu: goto label_28f8dc;
        case 0x28f8e0u: goto label_28f8e0;
        case 0x28f8e4u: goto label_28f8e4;
        case 0x28f8e8u: goto label_28f8e8;
        case 0x28f8ecu: goto label_28f8ec;
        case 0x28f8f0u: goto label_28f8f0;
        case 0x28f8f4u: goto label_28f8f4;
        case 0x28f8f8u: goto label_28f8f8;
        case 0x28f8fcu: goto label_28f8fc;
        case 0x28f900u: goto label_28f900;
        case 0x28f904u: goto label_28f904;
        case 0x28f908u: goto label_28f908;
        case 0x28f90cu: goto label_28f90c;
        case 0x28f910u: goto label_28f910;
        case 0x28f914u: goto label_28f914;
        case 0x28f918u: goto label_28f918;
        case 0x28f91cu: goto label_28f91c;
        case 0x28f920u: goto label_28f920;
        case 0x28f924u: goto label_28f924;
        default: break;
    }

    ctx->pc = 0x28f8b8u;

label_28f8b8:
    // 0x28f8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_28f8bc:
    // 0x28f8bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28f8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28f8c0:
    // 0x28f8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_28f8c4:
    // 0x28f8c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28f8c8:
    // 0x28f8c8: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x28f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_28f8cc:
    // 0x28f8cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x28f8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28f8d0:
    // 0x28f8d0: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x28f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28f8d4:
    // 0x28f8d4: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x28f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
label_28f8d8:
    // 0x28f8d8: 0x8c6200d8  lw          $v0, 0xD8($v1)
    ctx->pc = 0x28f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
label_28f8dc:
    // 0x28f8dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_28f8e0:
    if (ctx->pc == 0x28F8E0u) {
        ctx->pc = 0x28F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8DCu;
        // 0x28f8e0: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F8E4u;
        goto label_28f8e4;
    }
    ctx->pc = 0x28F8DCu;
    {
        const bool branch_taken_0x28f8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8DCu;
        // 0x28f8e0: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8dc) {
            ctx->pc = 0x28F918u;
            goto label_28f918;
        }
    }
    ctx->pc = 0x28F8E4u;
label_28f8e4:
    // 0x28f8e4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x28f8e4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_28f8e8:
    // 0x28f8e8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_28f8ec:
    if (ctx->pc == 0x28F8ECu) {
        ctx->pc = 0x28F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8E8u;
        // 0x28f8ec: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F8F0u;
        goto label_28f8f0;
    }
    ctx->pc = 0x28F8E8u;
    {
        const bool branch_taken_0x28f8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f8e8) {
            ctx->pc = 0x28F8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F8E8u;
            // 0x28f8ec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F8F0u;
            goto label_28f8f0;
        }
    }
    ctx->pc = 0x28F8F0u;
label_28f8f0:
    // 0x28f8f0: 0x1810  mfhi        $v1
    ctx->pc = 0x28f8f0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_28f8f4:
    // 0x28f8f4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_28f8f8:
    if (ctx->pc == 0x28F8F8u) {
        ctx->pc = 0x28F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8F4u;
        // 0x28f8f8: 0x86040014  lh          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F8FCu;
        goto label_28f8fc;
    }
    ctx->pc = 0x28F8F4u;
    {
        const bool branch_taken_0x28f8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f8f4) {
            ctx->pc = 0x28F8F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F8F4u;
            // 0x28f8f8: 0x86040014  lh          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F908u;
            goto label_28f908;
        }
    }
    ctx->pc = 0x28F8FCu;
label_28f8fc:
    // 0x28f8fc: 0xc0a2fb2  jal         func_28BEC8
label_28f900:
    if (ctx->pc == 0x28F900u) {
        ctx->pc = 0x28F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F8FCu;
        // 0x28f900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F904u;
        goto label_28f904;
    }
    ctx->pc = 0x28F8FCu;
    SET_GPR_U32(ctx, 31, 0x28F904u);
    ctx->pc = 0x28F900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F8FCu;
    // 0x28f900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BEC8u, 0x28F8FCu, 0x28F904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F904u;
label_28f904:
    // 0x28f904: 0x86040014  lh          $a0, 0x14($s0)
    ctx->pc = 0x28f904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_28f908:
    // 0x28f908: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x28f908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_28f90c:
    // 0x28f90c: 0x40f809  jalr        $v0
label_28f910:
    if (ctx->pc == 0x28F910u) {
        ctx->pc = 0x28F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F90Cu;
        // 0x28f910: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F914u;
        goto label_28f914;
    }
    ctx->pc = 0x28F90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F914u);
        ctx->pc = 0x28F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F90Cu;
        // 0x28f910: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F90Cu, 0x28F914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F914u;
label_28f914:
    // 0x28f914: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x28f914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_28f918:
    // 0x28f918: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28f918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28f91c:
    // 0x28f91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f920:
    // 0x28f920: 0x3e00008  jr          $ra
label_28f924:
    if (ctx->pc == 0x28F924u) {
        ctx->pc = 0x28F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F920u;
        // 0x28f924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F928u;
        goto label_fallthrough_0x28f920;
    }
    ctx->pc = 0x28F920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F920u;
        // 0x28f924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x28f920:
    ctx->pc = 0x28F928u;
}
