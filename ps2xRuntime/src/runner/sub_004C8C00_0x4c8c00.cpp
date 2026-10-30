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

// Function: sub_004C8C00
// Address: 0x4c8c00 - 0x4c8cb0
void sub_004C8C00_0x4c8c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C8C00_0x4c8c00");
#endif

    switch (ctx->pc) {
        case 0x4c8c30u: goto label_4c8c30;
        case 0x4c8c60u: goto label_4c8c60;
        default: break;
    }

    ctx->pc = 0x4c8c00u;

    // 0x4c8c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c8c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4c8c04: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c8c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8c08: 0x2484001f  addiu       $a0, $a0, 0x1F
    ctx->pc = 0x4c8c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x4c8c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c8c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c8c10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c8c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c8c14: 0x3442ffe0  ori         $v0, $v0, 0xFFE0
    ctx->pc = 0x4c8c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65504);
    // 0x4c8c18: 0x828824  and         $s1, $a0, $v0
    ctx->pc = 0x4c8c18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c8c1c: 0x3c100053  lui         $s0, 0x53
    ctx->pc = 0x4c8c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    // 0x4c8c20: 0x8e042820  lw          $a0, 0x2820($s0)
    ctx->pc = 0x4c8c20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532820u));
    // 0x4c8c24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c8c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4c8c28: 0xc132336  jal         func_4C8CD8
    ctx->pc = 0x4C8C28u;
    SET_GPR_U32(ctx, 31, 0x4C8C30u);
    ctx->pc = 0x4C8C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8C28u;
    // 0x4c8c2c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8CD8u, 0x4C8C28u, 0x4C8C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8C30u;
label_4c8c30:
    // 0x4c8c30: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4c8c30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8c34: 0xae002820  sw          $zero, 0x2820($s0)
    ctx->pc = 0x4c8c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10272), GPR_U32(ctx, 0));
    // 0x4c8c38: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4C8C38u;
    {
        const bool branch_taken_0x4c8c38 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8C38u;
        // 0x4c8c3c: 0x3c090053  lui         $t1, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8c38) {
            ctx->pc = 0x4C8C94u;
            goto label_4c8c94;
        }
    }
    ctx->pc = 0x4C8C40u;
    // 0x4c8c40: 0x8d222824  lw          $v0, 0x2824($t1)
    ctx->pc = 0x4c8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 10276)));
    // 0x4c8c44: 0x120602d  daddu       $t4, $t1, $zero
    ctx->pc = 0x4c8c44u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8c48: 0x1113821  addu        $a3, $t0, $s1
    ctx->pc = 0x4c8c48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x4c8c4c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4C8C4Cu;
    {
        const bool branch_taken_0x4c8c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8C4Cu;
        // 0x4c8c50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8c4c) {
            ctx->pc = 0x4C8C94u;
            goto label_4c8c94;
        }
    }
    ctx->pc = 0x4C8C54u;
    // 0x4c8c54: 0x3c0b0053  lui         $t3, 0x53
    ctx->pc = 0x4c8c54u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)83 << 16));
    // 0x4c8c58: 0x3c0a0053  lui         $t2, 0x53
    ctx->pc = 0x4c8c58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)83 << 16));
    // 0x4c8c5c: 0x0  nop
    ctx->pc = 0x4c8c5cu;
    // NOP
label_4c8c60:
    // 0x4c8c60: 0x8d632828  lw          $v1, 0x2828($t3)
    ctx->pc = 0x4c8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 10280)));
    // 0x4c8c64: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x4c8c64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4c8c68: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4c8c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4c8c6c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4c8c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4c8c70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4c8c74: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x4c8c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x4c8c78: 0x8d43282c  lw          $v1, 0x282C($t2)
    ctx->pc = 0x4c8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 10284)));
    // 0x4c8c7c: 0x8d822824  lw          $v0, 0x2824($t4)
    ctx->pc = 0x4c8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 10276)));
    // 0x4c8c80: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4c8c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4c8c84: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4c8c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c8c88: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x4c8c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4c8c8c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4C8C8Cu;
    {
        const bool branch_taken_0x4c8c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8C8Cu;
        // 0x4c8c90: 0xe43821  addu        $a3, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8c8c) {
            ctx->pc = 0x4C8C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c8c60;
        }
    }
    ctx->pc = 0x4C8C94u;
label_4c8c94:
    // 0x4c8c94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8c98: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x4c8c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8c9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c8c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c8ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c8ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c8ca4: 0xad202824  sw          $zero, 0x2824($t1)
    ctx->pc = 0x4c8ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 10276), GPR_U32(ctx, 0));
    // 0x4c8ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C8CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8CA8u;
        // 0x4c8cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C8CB0u;
}
