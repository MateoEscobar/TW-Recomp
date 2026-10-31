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

// Function: sub_0010FCD8
// Address: 0x10fcd8 - 0x10fd48
void sub_0010FCD8_0x10fcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FCD8_0x10fcd8");
#endif

    switch (ctx->pc) {
        case 0x10fd24u: goto label_10fd24;
        default: break;
    }

    ctx->pc = 0x10fcd8u;

    // 0x10fcd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10fcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10fcdc: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x10fcdcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fce4: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x10fce4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fce8: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x10fce8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fcec: 0x11800011  beqz        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x10FCECu;
    {
        const bool branch_taken_0x10fcec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCECu;
        // 0x10fcf0: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcec) {
            ctx->pc = 0x10FD34u;
            goto label_10fd34;
        }
    }
    ctx->pc = 0x10FCF4u;
    // 0x10fcf4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10fcf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10fcf8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10fcf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10fcfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x10fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x10fd00: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x10fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x10fd04: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x10fd04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x10fd08: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x10fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x10fd0c: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x10fd0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fd10: 0x906883bc  lbu         $t0, -0x7C44($v1)
    ctx->pc = 0x10fd10u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x5483BCu));
    // 0x10fd14: 0x24e7b930  addiu       $a3, $a3, -0x46D0
    ctx->pc = 0x10fd14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949168));
    // 0x10fd18: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x10fd18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x10fd1c: 0xc04477a  jal         func_111DE8
    ctx->pc = 0x10FD1Cu;
    SET_GPR_U32(ctx, 31, 0x10FD24u);
    ctx->pc = 0x10FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD1Cu;
    // 0x10fd20: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111DE8u, 0x10FD1Cu, 0x10FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FD24u;
label_10fd24:
    // 0x10fd24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FD24u;
    {
        const bool branch_taken_0x10fd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD24u;
        // 0x10fd28: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd24) {
            ctx->pc = 0x10FD38u;
            goto label_10fd38;
        }
    }
    ctx->pc = 0x10FD2Cu;
    // 0x10fd2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10FD2Cu;
    {
        const bool branch_taken_0x10fd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD2Cu;
        // 0x10fd30: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd2c) {
            ctx->pc = 0x10FD3Cu;
            goto label_10fd3c;
        }
    }
    ctx->pc = 0x10FD34u;
label_10fd34:
    // 0x10fd34: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x10fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_10fd38:
    // 0x10fd38: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x10fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_10fd3c:
    // 0x10fd3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10fd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10fd40: 0x3e00008  jr          $ra
    ctx->pc = 0x10FD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD40u;
        // 0x10fd44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FD48u;
}
