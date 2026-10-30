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

// Function: sub_0028D4B0
// Address: 0x28d4b0 - 0x28d538
void sub_0028D4B0_0x28d4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D4B0_0x28d4b0");
#endif

    switch (ctx->pc) {
        case 0x28d4dcu: goto label_28d4dc;
        case 0x28d4f4u: goto label_28d4f4;
        case 0x28d50cu: goto label_28d50c;
        default: break;
    }

    ctx->pc = 0x28d4b0u;

    // 0x28d4b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28d4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28d4b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x28d4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x28d4b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28d4bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28d4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x28d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x28d4c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28d4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d4cc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28D4CCu;
    {
        const bool branch_taken_0x28d4cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4CCu;
        // 0x28d4d0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4cc) {
            ctx->pc = 0x28D518u;
            goto label_28d518;
        }
    }
    ctx->pc = 0x28D4D4u;
    // 0x28d4d4: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x28D4D4u;
    SET_GPR_U32(ctx, 31, 0x28D4DCu);
    ctx->pc = 0x28D4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D4D4u;
    // 0x28d4d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x28D4D4u, 0x28D4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D4DCu;
label_28d4dc:
    // 0x28d4dc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28D4DCu;
    {
        const bool branch_taken_0x28d4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4DCu;
        // 0x28d4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4dc) {
            ctx->pc = 0x28D51Cu;
            goto label_28d51c;
        }
    }
    ctx->pc = 0x28D4E4u;
    // 0x28d4e4: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x28D4E4u;
    {
        const bool branch_taken_0x28d4e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D4E4u;
        // 0x28d4e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d4e4) {
            ctx->pc = 0x28D51Cu;
            goto label_28d51c;
        }
    }
    ctx->pc = 0x28D4ECu;
    // 0x28d4ec: 0xc0a3fc2  jal         func_28FF08
    ctx->pc = 0x28D4ECu;
    SET_GPR_U32(ctx, 31, 0x28D4F4u);
    ctx->pc = 0x28D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D4ECu;
    // 0x28d4f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF08u, 0x28D4ECu, 0x28D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D4F4u;
label_28d4f4:
    // 0x28d4f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28d4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d4f8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D4F8u;
    {
        const bool branch_taken_0x28d4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28d4f8) {
            ctx->pc = 0x28D4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D4F8u;
            // 0x28d4fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D51Cu;
            goto label_28d51c;
        }
    }
    ctx->pc = 0x28D500u;
    // 0x28d500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28d500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d504: 0xc0a3fd6  jal         func_28FF58
    ctx->pc = 0x28D504u;
    SET_GPR_U32(ctx, 31, 0x28D50Cu);
    ctx->pc = 0x28D508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D504u;
    // 0x28d508: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF58u, 0x28D504u, 0x28D50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D50Cu;
label_28d50c:
    // 0x28d50c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x28d50cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x28d510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28D510u;
    {
        const bool branch_taken_0x28d510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D510u;
        // 0x28d514: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d510) {
            ctx->pc = 0x28D51Cu;
            goto label_28d51c;
        }
    }
    ctx->pc = 0x28D518u;
label_28d518:
    // 0x28d518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28d518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28d51c:
    // 0x28d51c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x28d51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d520: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28d520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d524: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x28d524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d52c: 0x3e00008  jr          $ra
    ctx->pc = 0x28D52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D52Cu;
        // 0x28d530: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D534u;
    // 0x28d534: 0x0  nop
    ctx->pc = 0x28d534u;
    // NOP
    ctx->pc = 0x28d538u;
}
