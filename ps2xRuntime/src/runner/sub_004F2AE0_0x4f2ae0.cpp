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

// Function: sub_004F2AE0
// Address: 0x4f2ae0 - 0x4f2b40
void sub_004F2AE0_0x4f2ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2AE0_0x4f2ae0");
#endif

    switch (ctx->pc) {
        case 0x4f2ae0u: goto label_4f2ae0;
        case 0x4f2ae4u: goto label_4f2ae4;
        case 0x4f2ae8u: goto label_4f2ae8;
        case 0x4f2aecu: goto label_4f2aec;
        case 0x4f2af0u: goto label_4f2af0;
        case 0x4f2af4u: goto label_4f2af4;
        case 0x4f2af8u: goto label_4f2af8;
        case 0x4f2afcu: goto label_4f2afc;
        case 0x4f2b00u: goto label_4f2b00;
        case 0x4f2b04u: goto label_4f2b04;
        case 0x4f2b08u: goto label_4f2b08;
        case 0x4f2b0cu: goto label_4f2b0c;
        case 0x4f2b10u: goto label_4f2b10;
        case 0x4f2b14u: goto label_4f2b14;
        case 0x4f2b18u: goto label_4f2b18;
        case 0x4f2b1cu: goto label_4f2b1c;
        case 0x4f2b20u: goto label_4f2b20;
        case 0x4f2b24u: goto label_4f2b24;
        case 0x4f2b28u: goto label_4f2b28;
        case 0x4f2b2cu: goto label_4f2b2c;
        case 0x4f2b30u: goto label_4f2b30;
        case 0x4f2b34u: goto label_4f2b34;
        case 0x4f2b38u: goto label_4f2b38;
        case 0x4f2b3cu: goto label_4f2b3c;
        default: break;
    }

    ctx->pc = 0x4f2ae0u;

label_4f2ae0:
    // 0x4f2ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f2ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f2ae4:
    // 0x4f2ae4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f2ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f2ae8:
    // 0x4f2ae8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f2aec:
    // 0x4f2aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f2aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2af0:
    // 0x4f2af0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f2af4:
    // 0x4f2af4: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f2af4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f2af8:
    // 0x4f2af8: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f2af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f2afc:
    // 0x4f2afc: 0x40f809  jalr        $v0
label_4f2b00:
    if (ctx->pc == 0x4F2B00u) {
        ctx->pc = 0x4F2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2AFCu;
        // 0x4f2b00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2B04u;
        goto label_4f2b04;
    }
    ctx->pc = 0x4F2AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F2B04u);
        ctx->pc = 0x4F2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2AFCu;
        // 0x4f2b00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2AFCu, 0x4F2B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2B04u;
label_4f2b04:
    // 0x4f2b04: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
label_4f2b08:
    if (ctx->pc == 0x4F2B08u) {
        ctx->pc = 0x4F2B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B04u;
        // 0x4f2b08: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2B0Cu;
        goto label_4f2b0c;
    }
    ctx->pc = 0x4F2B04u;
    {
        const bool branch_taken_0x4f2b04 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4f2b04) {
            ctx->pc = 0x4F2B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F2B04u;
            // 0x4f2b08: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F2B14u;
            goto label_4f2b14;
        }
    }
    ctx->pc = 0x4F2B0Cu;
label_4f2b0c:
    // 0x4f2b0c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f2b10:
    if (ctx->pc == 0x4F2B10u) {
        ctx->pc = 0x4F2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B0Cu;
        // 0x4f2b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2B14u;
        goto label_4f2b14;
    }
    ctx->pc = 0x4F2B0Cu;
    {
        const bool branch_taken_0x4f2b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B0Cu;
        // 0x4f2b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2b0c) {
            ctx->pc = 0x4F2B2Cu;
            goto label_4f2b2c;
        }
    }
    ctx->pc = 0x4F2B14u;
label_4f2b14:
    // 0x4f2b14: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4f2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f2b18:
    // 0x4f2b18: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4f2b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f2b1c:
    // 0x4f2b1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f2b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f2b20:
    // 0x4f2b20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f2b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4f2b24:
    // 0x4f2b24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f2b28:
    // 0x4f2b28: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4f2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4f2b2c:
    // 0x4f2b2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f2b2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2b30:
    // 0x4f2b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f2b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2b34:
    // 0x4f2b34: 0x3e00008  jr          $ra
label_4f2b38:
    if (ctx->pc == 0x4F2B38u) {
        ctx->pc = 0x4F2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B34u;
        // 0x4f2b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2B3Cu;
        goto label_4f2b3c;
    }
    ctx->pc = 0x4F2B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2B34u;
        // 0x4f2b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2B3Cu;
label_4f2b3c:
    // 0x4f2b3c: 0x0  nop
    ctx->pc = 0x4f2b3cu;
    // NOP
    ctx->pc = 0x4f2b40u;
}
