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

// Function: sub_00446680
// Address: 0x446680 - 0x4466f8
void sub_00446680_0x446680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00446680_0x446680");
#endif

    switch (ctx->pc) {
        case 0x446680u: goto label_446680;
        case 0x446684u: goto label_446684;
        case 0x446688u: goto label_446688;
        case 0x44668cu: goto label_44668c;
        case 0x446690u: goto label_446690;
        case 0x446694u: goto label_446694;
        case 0x446698u: goto label_446698;
        case 0x44669cu: goto label_44669c;
        case 0x4466a0u: goto label_4466a0;
        case 0x4466a4u: goto label_4466a4;
        case 0x4466a8u: goto label_4466a8;
        case 0x4466acu: goto label_4466ac;
        case 0x4466b0u: goto label_4466b0;
        case 0x4466b4u: goto label_4466b4;
        case 0x4466b8u: goto label_4466b8;
        case 0x4466bcu: goto label_4466bc;
        case 0x4466c0u: goto label_4466c0;
        case 0x4466c4u: goto label_4466c4;
        case 0x4466c8u: goto label_4466c8;
        case 0x4466ccu: goto label_4466cc;
        case 0x4466d0u: goto label_4466d0;
        case 0x4466d4u: goto label_4466d4;
        case 0x4466d8u: goto label_4466d8;
        case 0x4466dcu: goto label_4466dc;
        case 0x4466e0u: goto label_4466e0;
        case 0x4466e4u: goto label_4466e4;
        case 0x4466e8u: goto label_4466e8;
        case 0x4466ecu: goto label_4466ec;
        case 0x4466f0u: goto label_4466f0;
        case 0x4466f4u: goto label_4466f4;
        default: break;
    }

    ctx->pc = 0x446680u;

label_446680:
    // 0x446680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x446680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_446684:
    // 0x446684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x446684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_446688:
    // 0x446688: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x446688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_44668c:
    // 0x44668c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x44668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_446690:
    // 0x446690: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_446694:
    if (ctx->pc == 0x446694u) {
        ctx->pc = 0x446694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446690u;
        // 0x446694: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x446698u;
        goto label_446698;
    }
    ctx->pc = 0x446690u;
    {
        const bool branch_taken_0x446690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x446694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x446690u;
        // 0x446694: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x446690) {
            ctx->pc = 0x4466E0u;
            goto label_4466e0;
        }
    }
    ctx->pc = 0x446698u;
label_446698:
    // 0x446698: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x446698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_44669c:
    // 0x44669c: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_4466a0:
    if (ctx->pc == 0x4466A0u) {
        ctx->pc = 0x4466A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44669Cu;
        // 0x4466a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4466A4u;
        goto label_4466a4;
    }
    ctx->pc = 0x44669Cu;
    {
        const bool branch_taken_0x44669c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4466A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44669Cu;
        // 0x4466a0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44669c) {
            ctx->pc = 0x4466E8u;
            goto label_4466e8;
        }
    }
    ctx->pc = 0x4466A4u;
label_4466a4:
    // 0x4466a4: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x4466a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_4466a8:
    // 0x4466a8: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
label_4466ac:
    if (ctx->pc == 0x4466ACu) {
        ctx->pc = 0x4466ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466A8u;
        // 0x4466ac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4466B0u;
        goto label_4466b0;
    }
    ctx->pc = 0x4466A8u;
    {
        const bool branch_taken_0x4466a8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4466ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466A8u;
        // 0x4466ac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4466a8) {
            ctx->pc = 0x4466ECu;
            goto label_4466ec;
        }
    }
    ctx->pc = 0x4466B0u;
label_4466b0:
    // 0x4466b0: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x4466b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_4466b4:
    // 0x4466b4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x4466b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_4466b8:
    // 0x4466b8: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x4466b8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4466bc:
    // 0x4466bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4466bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4466c0:
    // 0x4466c0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4466c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4466c4:
    // 0x4466c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4466c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4466c8:
    // 0x4466c8: 0x624018  mult        $t0, $v1, $v0
    ctx->pc = 0x4466c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_4466cc:
    // 0x4466cc: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x4466ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_4466d0:
    // 0x4466d0: 0xe0f809  jalr        $a3
label_4466d4:
    if (ctx->pc == 0x4466D4u) {
        ctx->pc = 0x4466D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466D0u;
        // 0x4466d4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4466D8u;
        goto label_4466d8;
    }
    ctx->pc = 0x4466D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x4466D8u);
        ctx->pc = 0x4466D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466D0u;
        // 0x4466d4: 0x8c660010  lw          $a2, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4466D0u, 0x4466D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4466D8u;
label_4466d8:
    // 0x4466d8: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x4466d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_4466dc:
    // 0x4466dc: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x4466dcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4466e0:
    // 0x4466e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4466e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4466e4:
    // 0x4466e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4466e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4466e8:
    // 0x4466e8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4466e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4466ec:
    // 0x4466ec: 0x3e00008  jr          $ra
label_4466f0:
    if (ctx->pc == 0x4466F0u) {
        ctx->pc = 0x4466F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466ECu;
        // 0x4466f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4466F4u;
        goto label_4466f4;
    }
    ctx->pc = 0x4466ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4466F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4466ECu;
        // 0x4466f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4466ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4466F4u;
label_4466f4:
    // 0x4466f4: 0x0  nop
    ctx->pc = 0x4466f4u;
    // NOP
    ctx->pc = 0x4466f8u;
}
