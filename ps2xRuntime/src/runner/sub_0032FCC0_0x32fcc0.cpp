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

// Function: sub_0032FCC0
// Address: 0x32fcc0 - 0x32fd60
void sub_0032FCC0_0x32fcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FCC0_0x32fcc0");
#endif

    switch (ctx->pc) {
        case 0x32fd00u: goto label_32fd00;
        case 0x32fd38u: goto label_32fd38;
        default: break;
    }

    ctx->pc = 0x32fcc0u;

    // 0x32fcc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32fcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32fcc4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x32fcc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fcc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32fcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x32fccc: 0x518c2  srl         $v1, $a1, 3
    ctx->pc = 0x32fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x32fcd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32fcd4: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x32fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x32fcd8: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x32fcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x32fcdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32fce0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x32fce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32fce4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32fce8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32fce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32fcec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32fcf0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x32FCF0u;
    {
        const bool branch_taken_0x32fcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FCF0u;
        // 0x32fcf4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fcf0) {
            ctx->pc = 0x32FD28u;
            goto label_32fd28;
        }
    }
    ctx->pc = 0x32FCF8u;
    // 0x32fcf8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x32fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32fcfc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x32fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32fd00:
    // 0x32fd00: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32FD00u;
    {
        const bool branch_taken_0x32fd00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x32fd00) {
            ctx->pc = 0x32FD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FD00u;
            // 0x32fd04: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FD20u;
            goto label_32fd20;
        }
    }
    ctx->pc = 0x32FD08u;
    // 0x32fd08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32fd0c: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32FD0Cu;
    {
        const bool branch_taken_0x32fd0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x32FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD0Cu;
        // 0x32fd10: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32fd0c) {
            ctx->pc = 0x32FD4Cu;
            goto label_32fd4c;
        }
    }
    ctx->pc = 0x32FD14u;
    // 0x32fd14: 0x5204000e  beql        $s0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x32FD14u;
    {
        const bool branch_taken_0x32fd14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x32fd14) {
            ctx->pc = 0x32FD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FD14u;
            // 0x32fd18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FD50u;
            goto label_32fd50;
        }
    }
    ctx->pc = 0x32FD1Cu;
    // 0x32fd1c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x32fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_32fd20:
    // 0x32fd20: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x32FD20u;
    {
        const bool branch_taken_0x32fd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32fd20) {
            ctx->pc = 0x32FD24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FD20u;
            // 0x32fd24: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FD00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32fd00;
        }
    }
    ctx->pc = 0x32FD28u;
label_32fd28:
    // 0x32fd28: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x32fd28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd2c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x32fd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd30: 0xc0cbf06  jal         func_32FC18
    ctx->pc = 0x32FD30u;
    SET_GPR_U32(ctx, 31, 0x32FD38u);
    ctx->pc = 0x32FD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FD30u;
    // 0x32fd34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC18u, 0x32FD30u, 0x32FD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FD38u;
label_32fd38:
    // 0x32fd38: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32fd38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fd3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x32fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32fd40: 0x56020001  bnel        $s0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x32FD40u;
    {
        const bool branch_taken_0x32fd40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x32fd40) {
            ctx->pc = 0x32FD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32FD40u;
            // 0x32fd44: 0xac700000  sw          $s0, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32FD48u;
            goto label_32fd48;
        }
    }
    ctx->pc = 0x32FD48u;
label_32fd48:
    // 0x32fd48: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x32fd48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_32fd4c:
    // 0x32fd4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x32fd4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_32fd50:
    // 0x32fd50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32fd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fd54: 0x3e00008  jr          $ra
    ctx->pc = 0x32FD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FD54u;
        // 0x32fd58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FD5Cu;
    // 0x32fd5c: 0x0  nop
    ctx->pc = 0x32fd5cu;
    // NOP
    ctx->pc = 0x32fd60u;
}
