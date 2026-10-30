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

// Function: sub_001D2970
// Address: 0x1d2970 - 0x1d2a10
void sub_001D2970_0x1d2970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2970_0x1d2970");
#endif

    switch (ctx->pc) {
        case 0x1d29bcu: goto label_1d29bc;
        case 0x1d29d4u: goto label_1d29d4;
        case 0x1d29e4u: goto label_1d29e4;
        case 0x1d29f8u: goto label_1d29f8;
        default: break;
    }

    ctx->pc = 0x1d2970u;

    // 0x1d2970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d2970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d2974: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d2974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d2978: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d297c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d297cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2984: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x1d2984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d2988: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D2988u;
    {
        const bool branch_taken_0x1d2988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2988u;
        // 0x1d298c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2988) {
            ctx->pc = 0x1D29F8u;
            goto label_1d29f8;
        }
    }
    ctx->pc = 0x1D2990u;
    // 0x1d2990: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1d2990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1d2994: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d2994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d2998: 0x24425d20  addiu       $v0, $v0, 0x5D20
    ctx->pc = 0x1d2998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23840));
    // 0x1d299c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d299cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d29a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d29a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d29a4: 0x800008  jr          $a0
    ctx->pc = 0x1D29A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D29ACu: goto label_1d29ac;
            case 0x1D29C4u: goto label_1d29c4;
            case 0x1D29D8u: goto label_1d29d8;
            case 0x1D29ECu: goto label_1d29ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D29A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D29ACu;
label_1d29ac:
    // 0x1d29ac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d29acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d29b0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d29b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d29b4: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1D29B4u;
    SET_GPR_U32(ctx, 31, 0x1D29BCu);
    ctx->pc = 0x1D29B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29B4u;
    // 0x1d29b8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1D29B4u, 0x1D29BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29BCu;
label_1d29bc:
    // 0x1d29bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D29BCu;
    {
        const bool branch_taken_0x1d29bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29BCu;
        // 0x1d29c0: 0xae22078c  sw          $v0, 0x78C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1932), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29bc) {
            ctx->pc = 0x1D29F8u;
            goto label_1d29f8;
        }
    }
    ctx->pc = 0x1D29C4u;
label_1d29c4:
    // 0x1d29c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d29c8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d29c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d29cc: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1D29CCu;
    SET_GPR_U32(ctx, 31, 0x1D29D4u);
    ctx->pc = 0x1D29D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29CCu;
    // 0x1d29d0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1D29CCu, 0x1D29D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29D4u;
label_1d29d4:
    // 0x1d29d4: 0xae22078c  sw          $v0, 0x78C($s1)
    ctx->pc = 0x1d29d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1932), GPR_U32(ctx, 2));
label_1d29d8:
    // 0x1d29d8: 0x262407e0  addiu       $a0, $s1, 0x7E0
    ctx->pc = 0x1d29d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    // 0x1d29dc: 0xc075b04  jal         func_1D6C10
    ctx->pc = 0x1D29DCu;
    SET_GPR_U32(ctx, 31, 0x1D29E4u);
    ctx->pc = 0x1D29E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29DCu;
    // 0x1d29e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C10u, 0x1D29DCu, 0x1D29E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29E4u;
label_1d29e4:
    // 0x1d29e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D29E4u;
    {
        const bool branch_taken_0x1d29e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29E4u;
        // 0x1d29e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29e4) {
            ctx->pc = 0x1D29FCu;
            goto label_1d29fc;
        }
    }
    ctx->pc = 0x1D29ECu;
label_1d29ec:
    // 0x1d29ec: 0x262407e0  addiu       $a0, $s1, 0x7E0
    ctx->pc = 0x1d29ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    // 0x1d29f0: 0xc075b04  jal         func_1D6C10
    ctx->pc = 0x1D29F0u;
    SET_GPR_U32(ctx, 31, 0x1D29F8u);
    ctx->pc = 0x1D29F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29F0u;
    // 0x1d29f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C10u, 0x1D29F0u, 0x1D29F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29F8u;
label_1d29f8:
    // 0x1d29f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d29f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d29fc:
    // 0x1d29fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2a00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2a08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A08u;
        // 0x1d2a0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2A10u;
}
