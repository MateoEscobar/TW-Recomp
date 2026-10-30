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

// Function: sub_0010FE30
// Address: 0x10fe30 - 0x10fe90
void sub_0010FE30_0x10fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FE30_0x10fe30");
#endif

    switch (ctx->pc) {
        case 0x10fe6cu: goto label_10fe6c;
        default: break;
    }

    ctx->pc = 0x10fe30u;

    // 0x10fe30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fe30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fe34: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x10fe34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fe3c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x10fe3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe40: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x10FE40u;
    {
        const bool branch_taken_0x10fe40 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE40u;
        // 0x10fe44: 0xe0582d  daddu       $t3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe40) {
            ctx->pc = 0x10FE7Cu;
            goto label_10fe7c;
        }
    }
    ctx->pc = 0x10FE48u;
    // 0x10fe48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x10fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x10fe4c: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x10fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x10fe50: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x10fe50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe54: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x10fe54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe58: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x10fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x10fe5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10fe5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe60: 0x906883bc  lbu         $t0, -0x7C44($v1)
    ctx->pc = 0x10fe60u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x5483BCu));
    // 0x10fe64: 0xc04477a  jal         func_111DE8
    ctx->pc = 0x10FE64u;
    SET_GPR_U32(ctx, 31, 0x10FE6Cu);
    ctx->pc = 0x10FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE64u;
    // 0x10fe68: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111DE8u, 0x10FE64u, 0x10FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE6Cu;
label_10fe6c:
    // 0x10fe6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FE6Cu;
    {
        const bool branch_taken_0x10fe6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE6Cu;
        // 0x10fe70: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe6c) {
            ctx->pc = 0x10FE80u;
            goto label_10fe80;
        }
    }
    ctx->pc = 0x10FE74u;
    // 0x10fe74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10FE74u;
    {
        const bool branch_taken_0x10fe74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE74u;
        // 0x10fe78: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe74) {
            ctx->pc = 0x10FE84u;
            goto label_10fe84;
        }
    }
    ctx->pc = 0x10FE7Cu;
label_10fe7c:
    // 0x10fe7c: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x10fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_10fe80:
    // 0x10fe80: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x10fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_10fe84:
    // 0x10fe84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fe84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fe88: 0x3e00008  jr          $ra
    ctx->pc = 0x10FE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE88u;
        // 0x10fe8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FE90u;
}
