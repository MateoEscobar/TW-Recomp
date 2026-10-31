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

// Function: sub_0010FE90
// Address: 0x10fe90 - 0x10fee8
void sub_0010FE90_0x10fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FE90_0x10fe90");
#endif

    switch (ctx->pc) {
        case 0x10fec0u: goto label_10fec0;
        default: break;
    }

    ctx->pc = 0x10fe90u;

    // 0x10fe90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10fe94: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x10fe94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe98: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x10FE98u;
    {
        const bool branch_taken_0x10fe98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE98u;
        // 0x10fe9c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe98) {
            ctx->pc = 0x10FED0u;
            goto label_10fed0;
        }
    }
    ctx->pc = 0x10FEA0u;
    // 0x10fea0: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x10fea0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x10fea4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x10fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x10fea8: 0x904883bc  lbu         $t0, -0x7C44($v0)
    ctx->pc = 0x10fea8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x5483BCu));
    // 0x10feac: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x10feacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10feb0: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x10feb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x10feb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10feb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10feb8: 0xc04477a  jal         func_111DE8
    ctx->pc = 0x10FEB8u;
    SET_GPR_U32(ctx, 31, 0x10FEC0u);
    ctx->pc = 0x10FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEB8u;
    // 0x10febc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111DE8u, 0x10FEB8u, 0x10FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FEC0u;
label_10fec0:
    // 0x10fec0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FEC0u;
    {
        const bool branch_taken_0x10fec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEC0u;
        // 0x10fec4: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fec0) {
            ctx->pc = 0x10FED4u;
            goto label_10fed4;
        }
    }
    ctx->pc = 0x10FEC8u;
    // 0x10fec8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10FEC8u;
    {
        const bool branch_taken_0x10fec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEC8u;
        // 0x10fecc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fec8) {
            ctx->pc = 0x10FED8u;
            goto label_10fed8;
        }
    }
    ctx->pc = 0x10FED0u;
label_10fed0:
    // 0x10fed0: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x10fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_10fed4:
    // 0x10fed4: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x10fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_10fed8:
    // 0x10fed8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10fed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fedc: 0x3e00008  jr          $ra
    ctx->pc = 0x10FEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FEDCu;
        // 0x10fee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FEE4u;
    // 0x10fee4: 0x0  nop
    ctx->pc = 0x10fee4u;
    // NOP
    ctx->pc = 0x10fee8u;
}
