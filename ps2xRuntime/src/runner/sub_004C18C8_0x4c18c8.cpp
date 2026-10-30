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

// Function: sub_004C18C8
// Address: 0x4c18c8 - 0x4c1910
void sub_004C18C8_0x4c18c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C18C8_0x4c18c8");
#endif

    switch (ctx->pc) {
        case 0x4c18c8u: goto label_4c18c8;
        case 0x4c18ccu: goto label_4c18cc;
        case 0x4c18d0u: goto label_4c18d0;
        case 0x4c18d4u: goto label_4c18d4;
        case 0x4c18d8u: goto label_4c18d8;
        case 0x4c18dcu: goto label_4c18dc;
        case 0x4c18e0u: goto label_4c18e0;
        case 0x4c18e4u: goto label_4c18e4;
        case 0x4c18e8u: goto label_4c18e8;
        case 0x4c18ecu: goto label_4c18ec;
        case 0x4c18f0u: goto label_4c18f0;
        case 0x4c18f4u: goto label_4c18f4;
        case 0x4c18f8u: goto label_4c18f8;
        case 0x4c18fcu: goto label_4c18fc;
        case 0x4c1900u: goto label_4c1900;
        case 0x4c1904u: goto label_4c1904;
        case 0x4c1908u: goto label_4c1908;
        case 0x4c190cu: goto label_4c190c;
        default: break;
    }

    ctx->pc = 0x4c18c8u;

label_4c18c8:
    // 0x4c18c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c18c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c18cc:
    // 0x4c18cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c18ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c18d0:
    // 0x4c18d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4c18d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4c18d4:
    // 0x4c18d4: 0xc130536  jal         func_4C14D8
label_4c18d8:
    if (ctx->pc == 0x4C18D8u) {
        ctx->pc = 0x4C18D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C18D4u;
        // 0x4c18d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C18DCu;
        goto label_4c18dc;
    }
    ctx->pc = 0x4C18D4u;
    SET_GPR_U32(ctx, 31, 0x4C18DCu);
    ctx->pc = 0x4C18D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C18D4u;
    // 0x4c18d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C14D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C14D8u, 0x4C18D4u, 0x4C18DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C18DCu;
label_4c18dc:
    // 0x4c18dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4c18dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c18e0:
    // 0x4c18e0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4c18e4:
    if (ctx->pc == 0x4C18E4u) {
        ctx->pc = 0x4C18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C18E0u;
        // 0x4c18e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C18E8u;
        goto label_4c18e8;
    }
    ctx->pc = 0x4C18E0u;
    {
        const bool branch_taken_0x4c18e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C18E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C18E0u;
        // 0x4c18e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c18e0) {
            ctx->pc = 0x4C18FCu;
            goto label_4c18fc;
        }
    }
    ctx->pc = 0x4C18E8u;
label_4c18e8:
    // 0x4c18e8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x4c18e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_4c18ec:
    // 0x4c18ec: 0x40f809  jalr        $v0
label_4c18f0:
    if (ctx->pc == 0x4C18F0u) {
        ctx->pc = 0x4C18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C18ECu;
        // 0x4c18f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C18F4u;
        goto label_4c18f4;
    }
    ctx->pc = 0x4C18ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4C18F4u);
        ctx->pc = 0x4C18F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C18ECu;
        // 0x4c18f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C18ECu, 0x4C18F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C18F4u;
label_4c18f4:
    // 0x4c18f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4c18f8:
    if (ctx->pc == 0x4C18F8u) {
        ctx->pc = 0x4C18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C18F4u;
        // 0x4c18f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C18FCu;
        goto label_4c18fc;
    }
    ctx->pc = 0x4C18F4u;
    {
        const bool branch_taken_0x4c18f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C18F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C18F4u;
        // 0x4c18f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c18f4) {
            ctx->pc = 0x4C1900u;
            goto label_4c1900;
        }
    }
    ctx->pc = 0x4C18FCu;
label_4c18fc:
    // 0x4c18fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c18fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c1900:
    // 0x4c1900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4c1900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4c1904:
    // 0x4c1904: 0x3e00008  jr          $ra
label_4c1908:
    if (ctx->pc == 0x4C1908u) {
        ctx->pc = 0x4C1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1904u;
        // 0x4c1908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C190Cu;
        goto label_4c190c;
    }
    ctx->pc = 0x4C1904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C1908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C1904u;
        // 0x4c1908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C1904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C190Cu;
label_4c190c:
    // 0x4c190c: 0x0  nop
    ctx->pc = 0x4c190cu;
    // NOP
    ctx->pc = 0x4c1910u;
}
