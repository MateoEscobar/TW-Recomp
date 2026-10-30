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

// Function: sub_00338578
// Address: 0x338578 - 0x3385c8
void sub_00338578_0x338578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338578_0x338578");
#endif

    switch (ctx->pc) {
        case 0x338578u: goto label_338578;
        case 0x33857cu: goto label_33857c;
        case 0x338580u: goto label_338580;
        case 0x338584u: goto label_338584;
        case 0x338588u: goto label_338588;
        case 0x33858cu: goto label_33858c;
        case 0x338590u: goto label_338590;
        case 0x338594u: goto label_338594;
        case 0x338598u: goto label_338598;
        case 0x33859cu: goto label_33859c;
        case 0x3385a0u: goto label_3385a0;
        case 0x3385a4u: goto label_3385a4;
        case 0x3385a8u: goto label_3385a8;
        case 0x3385acu: goto label_3385ac;
        case 0x3385b0u: goto label_3385b0;
        case 0x3385b4u: goto label_3385b4;
        case 0x3385b8u: goto label_3385b8;
        case 0x3385bcu: goto label_3385bc;
        case 0x3385c0u: goto label_3385c0;
        case 0x3385c4u: goto label_3385c4;
        default: break;
    }

    ctx->pc = 0x338578u;

label_338578:
    // 0x338578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33857c:
    // 0x33857c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x33857cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_338580:
    // 0x338580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_338584:
    // 0x338584: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x338584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_338588:
    // 0x338588: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_33858c:
    if (ctx->pc == 0x33858Cu) {
        ctx->pc = 0x33858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338588u;
        // 0x33858c: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338590u;
        goto label_338590;
    }
    ctx->pc = 0x338588u;
    {
        const bool branch_taken_0x338588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338588) {
            ctx->pc = 0x33858Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338588u;
            // 0x33858c: 0x8cc20010  lw          $v0, 0x10($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3385ACu;
            goto label_3385ac;
        }
    }
    ctx->pc = 0x338590u;
label_338590:
    // 0x338590: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x338590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_338594:
    // 0x338594: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x338594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_338598:
    // 0x338598: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x338598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_33859c:
    // 0x33859c: 0x60f809  jalr        $v1
label_3385a0:
    if (ctx->pc == 0x3385A0u) {
        ctx->pc = 0x3385A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33859Cu;
        // 0x3385a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385A4u;
        goto label_3385a4;
    }
    ctx->pc = 0x33859Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3385A4u);
        ctx->pc = 0x3385A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33859Cu;
        // 0x3385a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33859Cu, 0x3385A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3385A4u;
label_3385a4:
    // 0x3385a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3385a8:
    if (ctx->pc == 0x3385A8u) {
        ctx->pc = 0x3385A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385A4u;
        // 0x3385a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385ACu;
        goto label_3385ac;
    }
    ctx->pc = 0x3385A4u;
    {
        const bool branch_taken_0x3385a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3385A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385A4u;
        // 0x3385a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3385a4) {
            ctx->pc = 0x3385C0u;
            goto label_3385c0;
        }
    }
    ctx->pc = 0x3385ACu;
label_3385ac:
    // 0x3385ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3385acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3385b0:
    // 0x3385b0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3385b4:
    if (ctx->pc == 0x3385B4u) {
        ctx->pc = 0x3385B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385B0u;
        // 0x3385b4: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385B8u;
        goto label_3385b8;
    }
    ctx->pc = 0x3385B0u;
    {
        const bool branch_taken_0x3385b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3385B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385B0u;
        // 0x3385b4: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3385b0) {
            ctx->pc = 0x3385BCu;
            goto label_3385bc;
        }
    }
    ctx->pc = 0x3385B8u;
label_3385b8:
    // 0x3385b8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x3385b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_3385bc:
    // 0x3385bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3385bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3385c0:
    // 0x3385c0: 0x3e00008  jr          $ra
label_3385c4:
    if (ctx->pc == 0x3385C4u) {
        ctx->pc = 0x3385C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385C0u;
        // 0x3385c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3385C8u;
        goto label_fallthrough_0x3385c0;
    }
    ctx->pc = 0x3385C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3385C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385C0u;
        // 0x3385c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3385C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3385c0:
    ctx->pc = 0x3385C8u;
}
