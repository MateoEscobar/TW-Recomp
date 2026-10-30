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

// Function: sub_004E3728
// Address: 0x4e3728 - 0x4e3770
void sub_004E3728_0x4e3728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3728_0x4e3728");
#endif

    switch (ctx->pc) {
        case 0x4e3728u: goto label_4e3728;
        case 0x4e372cu: goto label_4e372c;
        case 0x4e3730u: goto label_4e3730;
        case 0x4e3734u: goto label_4e3734;
        case 0x4e3738u: goto label_4e3738;
        case 0x4e373cu: goto label_4e373c;
        case 0x4e3740u: goto label_4e3740;
        case 0x4e3744u: goto label_4e3744;
        case 0x4e3748u: goto label_4e3748;
        case 0x4e374cu: goto label_4e374c;
        case 0x4e3750u: goto label_4e3750;
        case 0x4e3754u: goto label_4e3754;
        case 0x4e3758u: goto label_4e3758;
        case 0x4e375cu: goto label_4e375c;
        case 0x4e3760u: goto label_4e3760;
        case 0x4e3764u: goto label_4e3764;
        case 0x4e3768u: goto label_4e3768;
        case 0x4e376cu: goto label_4e376c;
        default: break;
    }

    ctx->pc = 0x4e3728u;

label_4e3728:
    // 0x4e3728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e3728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4e372c:
    // 0x4e372c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4e372cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3730:
    // 0x4e3730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e3734:
    // 0x4e3734: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4e3738:
    if (ctx->pc == 0x4E3738u) {
        ctx->pc = 0x4E3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3734u;
        // 0x4e3738: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E373Cu;
        goto label_4e373c;
    }
    ctx->pc = 0x4E3734u;
    {
        const bool branch_taken_0x4e3734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3734u;
        // 0x4e3738: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3734) {
            ctx->pc = 0x4E3760u;
            goto label_4e3760;
        }
    }
    ctx->pc = 0x4E373Cu;
label_4e373c:
    // 0x4e373c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e373cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e3740:
    // 0x4e3740: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4e3740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3744:
    // 0x4e3744: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e3744u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e3748:
    // 0x4e3748: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4e3748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4e374c:
    // 0x4e374c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e3750:
    // 0x4e3750: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e3750u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e3754:
    // 0x4e3754: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e3754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e3758:
    // 0x4e3758: 0x60f809  jalr        $v1
label_4e375c:
    if (ctx->pc == 0x4E375Cu) {
        ctx->pc = 0x4E375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3758u;
        // 0x4e375c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3760u;
        goto label_4e3760;
    }
    ctx->pc = 0x4E3758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3760u);
        ctx->pc = 0x4E375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3758u;
        // 0x4e375c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3758u, 0x4E3760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3760u;
label_4e3760:
    // 0x4e3760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3764:
    // 0x4e3764: 0x3e00008  jr          $ra
label_4e3768:
    if (ctx->pc == 0x4E3768u) {
        ctx->pc = 0x4E3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3764u;
        // 0x4e3768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E376Cu;
        goto label_4e376c;
    }
    ctx->pc = 0x4E3764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3764u;
        // 0x4e3768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E376Cu;
label_4e376c:
    // 0x4e376c: 0x0  nop
    ctx->pc = 0x4e376cu;
    // NOP
    ctx->pc = 0x4e3770u;
}
