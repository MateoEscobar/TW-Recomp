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

// Function: sub_0010FDD0
// Address: 0x10fdd0 - 0x10fe30
void sub_0010FDD0_0x10fdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FDD0_0x10fdd0");
#endif

    switch (ctx->pc) {
        case 0x10fe0cu: goto label_10fe0c;
        default: break;
    }

    ctx->pc = 0x10fdd0u;

    // 0x10fdd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10fdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10fdd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10fdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10fdd8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x10fdd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10fddc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10fddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fde0: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x10FDE0u;
    {
        const bool branch_taken_0x10fde0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FDE0u;
        // 0x10fde4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fde0) {
            ctx->pc = 0x10FE1Cu;
            goto label_10fe1c;
        }
    }
    ctx->pc = 0x10FDE8u;
    // 0x10fde8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x10fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x10fdec: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x10fdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x10fdf0: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x10fdf0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fdf4: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x10fdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x10fdf8: 0x906883bc  lbu         $t0, -0x7C44($v1)
    ctx->pc = 0x10fdf8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x5483BCu));
    // 0x10fdfc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x10fdfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10fe00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fe04: 0xc04477a  jal         func_111DE8
    ctx->pc = 0x10FE04u;
    SET_GPR_U32(ctx, 31, 0x10FE0Cu);
    ctx->pc = 0x10FE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FE04u;
    // 0x10fe08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111DE8u, 0x10FE04u, 0x10FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FE0Cu;
label_10fe0c:
    // 0x10fe0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FE0Cu;
    {
        const bool branch_taken_0x10fe0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE0Cu;
        // 0x10fe10: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe0c) {
            ctx->pc = 0x10FE20u;
            goto label_10fe20;
        }
    }
    ctx->pc = 0x10FE14u;
    // 0x10fe14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10FE14u;
    {
        const bool branch_taken_0x10fe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE14u;
        // 0x10fe18: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fe14) {
            ctx->pc = 0x10FE24u;
            goto label_10fe24;
        }
    }
    ctx->pc = 0x10FE1Cu;
label_10fe1c:
    // 0x10fe1c: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x10fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_10fe20:
    // 0x10fe20: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x10fe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_10fe24:
    // 0x10fe24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10fe24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10fe28: 0x3e00008  jr          $ra
    ctx->pc = 0x10FE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FE28u;
        // 0x10fe2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FE30u;
}
