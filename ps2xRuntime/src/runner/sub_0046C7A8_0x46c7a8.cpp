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

// Function: sub_0046C7A8
// Address: 0x46c7a8 - 0x46c808
void sub_0046C7A8_0x46c7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C7A8_0x46c7a8");
#endif

    switch (ctx->pc) {
        case 0x46c7a8u: goto label_46c7a8;
        case 0x46c7acu: goto label_46c7ac;
        case 0x46c7b0u: goto label_46c7b0;
        case 0x46c7b4u: goto label_46c7b4;
        case 0x46c7b8u: goto label_46c7b8;
        case 0x46c7bcu: goto label_46c7bc;
        case 0x46c7c0u: goto label_46c7c0;
        case 0x46c7c4u: goto label_46c7c4;
        case 0x46c7c8u: goto label_46c7c8;
        case 0x46c7ccu: goto label_46c7cc;
        case 0x46c7d0u: goto label_46c7d0;
        case 0x46c7d4u: goto label_46c7d4;
        case 0x46c7d8u: goto label_46c7d8;
        case 0x46c7dcu: goto label_46c7dc;
        case 0x46c7e0u: goto label_46c7e0;
        case 0x46c7e4u: goto label_46c7e4;
        case 0x46c7e8u: goto label_46c7e8;
        case 0x46c7ecu: goto label_46c7ec;
        case 0x46c7f0u: goto label_46c7f0;
        case 0x46c7f4u: goto label_46c7f4;
        case 0x46c7f8u: goto label_46c7f8;
        case 0x46c7fcu: goto label_46c7fc;
        case 0x46c800u: goto label_46c800;
        case 0x46c804u: goto label_46c804;
        default: break;
    }

    ctx->pc = 0x46c7a8u;

label_46c7a8:
    // 0x46c7a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46c7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_46c7ac:
    // 0x46c7ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46c7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_46c7b0:
    // 0x46c7b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46c7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46c7b4:
    // 0x46c7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46c7b8:
    // 0x46c7b8: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x46c7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_46c7bc:
    // 0x46c7bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46c7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46c7c0:
    // 0x46c7c0: 0xc11ffb4  jal         func_47FED0
label_46c7c4:
    if (ctx->pc == 0x46C7C4u) {
        ctx->pc = 0x46C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C7C0u;
        // 0x46c7c4: 0x2484e6f8  addiu       $a0, $a0, -0x1908 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C7C8u;
        goto label_46c7c8;
    }
    ctx->pc = 0x46C7C0u;
    SET_GPR_U32(ctx, 31, 0x46C7C8u);
    ctx->pc = 0x46C7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C7C0u;
    // 0x46c7c4: 0x2484e6f8  addiu       $a0, $a0, -0x1908 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x46C7C0u, 0x46C7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C7C8u;
label_46c7c8:
    // 0x46c7c8: 0xc12249a  jal         func_489268
label_46c7cc:
    if (ctx->pc == 0x46C7CCu) {
        ctx->pc = 0x46C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C7C8u;
        // 0x46c7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C7D0u;
        goto label_46c7d0;
    }
    ctx->pc = 0x46C7C8u;
    SET_GPR_U32(ctx, 31, 0x46C7D0u);
    ctx->pc = 0x46C7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C7C8u;
    // 0x46c7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x489268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489268u, 0x46C7C8u, 0x46C7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C7D0u;
label_46c7d0:
    // 0x46c7d0: 0x8f8688d0  lw          $a2, -0x7730($gp)
    ctx->pc = 0x46c7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936784)));
label_46c7d4:
    // 0x46c7d4: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_46c7d8:
    // 0x46c7d8: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x46c7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_46c7dc:
    // 0x46c7dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46c7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46c7e0:
    // 0x46c7e0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x46c7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_46c7e4:
    // 0x46c7e4: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x46c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_46c7e8:
    // 0x46c7e8: 0x40f809  jalr        $v0
label_46c7ec:
    if (ctx->pc == 0x46C7ECu) {
        ctx->pc = 0x46C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C7E8u;
        // 0x46c7ec: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C7F0u;
        goto label_46c7f0;
    }
    ctx->pc = 0x46C7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46C7F0u);
        ctx->pc = 0x46C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C7E8u;
        // 0x46c7ec: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C7E8u, 0x46C7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46C7F0u;
label_46c7f0:
    // 0x46c7f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46c7f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46c7f4:
    // 0x46c7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46c7f8:
    // 0x46c7f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46c7fc:
    // 0x46c7fc: 0x3e00008  jr          $ra
label_46c800:
    if (ctx->pc == 0x46C800u) {
        ctx->pc = 0x46C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C7FCu;
        // 0x46c800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46C804u;
        goto label_46c804;
    }
    ctx->pc = 0x46C7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C7FCu;
        // 0x46c800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C804u;
label_46c804:
    // 0x46c804: 0x0  nop
    ctx->pc = 0x46c804u;
    // NOP
    ctx->pc = 0x46c808u;
}
