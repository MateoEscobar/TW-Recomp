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

// Function: sub_0017F9E8
// Address: 0x17f9e8 - 0x17fa80
void sub_0017F9E8_0x17f9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F9E8_0x17f9e8");
#endif

    switch (ctx->pc) {
        case 0x17fa24u: goto label_17fa24;
        case 0x17fa30u: goto label_17fa30;
        case 0x17fa4cu: goto label_17fa4c;
        case 0x17fa58u: goto label_17fa58;
        default: break;
    }

    ctx->pc = 0x17f9e8u;

    // 0x17f9e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f9ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f9f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f9f8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x17f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17f9fc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17F9FCu;
    {
        const bool branch_taken_0x17f9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F9FCu;
        // 0x17fa00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9fc) {
            ctx->pc = 0x17FA6Cu;
            goto label_17fa6c;
        }
    }
    ctx->pc = 0x17FA04u;
    // 0x17fa04: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x17fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x17fa08: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x17FA08u;
    {
        const bool branch_taken_0x17fa08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17fa08) {
            ctx->pc = 0x17FA3Cu;
            goto label_17fa3c;
        }
    }
    ctx->pc = 0x17FA10u;
    // 0x17fa10: 0x54a00016  bnel        $a1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x17FA10u;
    {
        const bool branch_taken_0x17fa10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fa10) {
            ctx->pc = 0x17FA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FA10u;
            // 0x17fa14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FA6Cu;
            goto label_17fa6c;
        }
    }
    ctx->pc = 0x17FA18u;
    // 0x17fa18: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17fa1c: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x17FA1Cu;
    SET_GPR_U32(ctx, 31, 0x17FA24u);
    ctx->pc = 0x17FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA1Cu;
    // 0x17fa20: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x17FA1Cu, 0x17FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA24u;
label_17fa24:
    // 0x17fa24: 0x8c44215c  lw          $a0, 0x215C($v0)
    ctx->pc = 0x17fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
    // 0x17fa28: 0xc11cbb0  jal         func_472EC0
    ctx->pc = 0x17FA28u;
    SET_GPR_U32(ctx, 31, 0x17FA30u);
    ctx->pc = 0x17FA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA28u;
    // 0x17fa2c: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472EC0u, 0x17FA28u, 0x17FA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA30u;
label_17fa30:
    // 0x17fa30: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x17fa30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x17fa34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17FA34u;
    {
        const bool branch_taken_0x17fa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA34u;
        // 0x17fa38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa34) {
            ctx->pc = 0x17FA6Cu;
            goto label_17fa6c;
        }
    }
    ctx->pc = 0x17FA3Cu;
label_17fa3c:
    // 0x17fa3c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x17FA3Cu;
    {
        const bool branch_taken_0x17fa3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA3Cu;
        // 0x17fa40: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa3c) {
            ctx->pc = 0x17FA68u;
            goto label_17fa68;
        }
    }
    ctx->pc = 0x17FA44u;
    // 0x17fa44: 0xc103a34  jal         func_40E8D0
    ctx->pc = 0x17FA44u;
    SET_GPR_U32(ctx, 31, 0x17FA4Cu);
    ctx->pc = 0x17FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA44u;
    // 0x17fa48: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40E8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40E8D0u, 0x17FA44u, 0x17FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA4Cu;
label_17fa4c:
    // 0x17fa4c: 0x8c44215c  lw          $a0, 0x215C($v0)
    ctx->pc = 0x17fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8540)));
    // 0x17fa50: 0xc11cb76  jal         func_472DD8
    ctx->pc = 0x17FA50u;
    SET_GPR_U32(ctx, 31, 0x17FA58u);
    ctx->pc = 0x17FA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FA50u;
    // 0x17fa54: 0x8e05001c  lw          $a1, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472DD8u, 0x17FA50u, 0x17FA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FA58u;
label_17fa58:
    // 0x17fa58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fa5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fa60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17FA60u;
    {
        const bool branch_taken_0x17fa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA60u;
        // 0x17fa64: 0xae030038  sw          $v1, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fa60) {
            ctx->pc = 0x17FA6Cu;
            goto label_17fa6c;
        }
    }
    ctx->pc = 0x17FA68u;
label_17fa68:
    // 0x17fa68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17fa68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17fa6c:
    // 0x17fa6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17fa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fa70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fa74: 0x3e00008  jr          $ra
    ctx->pc = 0x17FA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA74u;
        // 0x17fa78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FA7Cu;
    // 0x17fa7c: 0x0  nop
    ctx->pc = 0x17fa7cu;
    // NOP
    ctx->pc = 0x17fa80u;
}
