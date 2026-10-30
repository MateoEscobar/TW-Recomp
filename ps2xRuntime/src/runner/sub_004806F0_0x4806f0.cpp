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

// Function: sub_004806F0
// Address: 0x4806f0 - 0x4807a8
void sub_004806F0_0x4806f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004806F0_0x4806f0");
#endif

    ctx->pc = 0x4806f0u;

    // 0x4806f0: 0x2486ffe0  addiu       $a2, $a0, -0x20
    ctx->pc = 0x4806f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x4806f4: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x4806f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x4806f8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x4806f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4806fc: 0x8c83ffe0  lw          $v1, -0x20($a0)
    ctx->pc = 0x4806fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967264)));
    // 0x480700: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x480700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x480704: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x480704u;
    {
        const bool branch_taken_0x480704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x480708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480704u;
        // 0x480708: 0x8cc70004  lw          $a3, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480704) {
            ctx->pc = 0x480718u;
            goto label_480718;
        }
    }
    ctx->pc = 0x48070Cu;
    // 0x48070c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x48070cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x480710: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x480710u;
    {
        const bool branch_taken_0x480710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480710) {
            ctx->pc = 0x48071Cu;
            goto label_48071c;
        }
    }
    ctx->pc = 0x480718u;
label_480718:
    // 0x480718: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x480718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_48071c:
    // 0x48071c: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x48071Cu;
    {
        const bool branch_taken_0x48071c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x48071c) {
            ctx->pc = 0x48075Cu;
            goto label_48075c;
        }
    }
    ctx->pc = 0x480724u;
    // 0x480724: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x480724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x480728: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x480728u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x48072c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x480730: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x480730u;
    {
        const bool branch_taken_0x480730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480730) {
            ctx->pc = 0x48075Cu;
            goto label_48075c;
        }
    }
    ctx->pc = 0x480738u;
    // 0x480738: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x480738u;
    {
        const bool branch_taken_0x480738 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x48073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x480738u;
        // 0x48073c: 0xaca70004  sw          $a3, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x480738) {
            ctx->pc = 0x480744u;
            goto label_480744;
        }
    }
    ctx->pc = 0x480740u;
    // 0x480740: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x480740u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
label_480744:
    // 0x480744: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x480744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x480748: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x480748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x48074c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x48074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x480750: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x480750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x480754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x480754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x480758: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x480758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_48075c:
    // 0x48075c: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x48075Cu;
    {
        const bool branch_taken_0x48075c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x48075c) {
            ctx->pc = 0x4807A0u;
            goto label_4807a0;
        }
    }
    ctx->pc = 0x480764u;
    // 0x480764: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x480764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x480768: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x480768u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x48076c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48076cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x480770: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x480770u;
    {
        const bool branch_taken_0x480770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x480770) {
            ctx->pc = 0x4807A0u;
            goto label_4807a0;
        }
    }
    ctx->pc = 0x480778u;
    // 0x480778: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x480778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x48077c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x48077cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x480780: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x480780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x480784: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x480784u;
    {
        const bool branch_taken_0x480784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x480784) {
            ctx->pc = 0x480788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x480784u;
            // 0x480788: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48078Cu;
            goto label_48078c;
        }
    }
    ctx->pc = 0x48078Cu;
label_48078c:
    // 0x48078c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x48078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x480790: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x480790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x480794: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x480794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x480798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x480798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x48079c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x48079cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_4807a0:
    // 0x4807a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4807A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4807A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4807A8u;
}
