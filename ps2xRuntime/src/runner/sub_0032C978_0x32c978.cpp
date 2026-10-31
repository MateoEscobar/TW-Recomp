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

// Function: sub_0032C978
// Address: 0x32c978 - 0x32ca28
void sub_0032C978_0x32c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C978_0x32c978");
#endif

    switch (ctx->pc) {
        case 0x32c998u: goto label_32c998;
        case 0x32c9d0u: goto label_32c9d0;
        default: break;
    }

    ctx->pc = 0x32c978u;

    // 0x32c978: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32c978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32c97c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32c97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32c980: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32c980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32c984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32c984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c988: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32c988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c98c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32c98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32c990: 0xc10d63c  jal         func_4358F0
    ctx->pc = 0x32C990u;
    SET_GPR_U32(ctx, 31, 0x32C998u);
    ctx->pc = 0x32C994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C990u;
    // 0x32c994: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4358F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4358F0u, 0x32C990u, 0x32C998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C998u;
label_32c998:
    // 0x32c998: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x32c998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c99c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c9a0: 0x1050001a  beq         $v0, $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x32C9A0u;
    {
        const bool branch_taken_0x32c9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x32C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9A0u;
        // 0x32c9a4: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c9a0) {
            ctx->pc = 0x32CA0Cu;
            goto label_32ca0c;
        }
    }
    ctx->pc = 0x32C9A8u;
    // 0x32c9a8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x32c9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c9ac: 0x2464c531  addiu       $a0, $v1, -0x3ACF
    ctx->pc = 0x32c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952241));
    // 0x32c9b0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x32c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32c9b4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x32c9b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c9b8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x32c9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x32c9bc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x32C9BCu;
    {
        const bool branch_taken_0x32c9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9BCu;
        // 0x32c9c0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c9bc) {
            ctx->pc = 0x32C9F4u;
            goto label_32c9f4;
        }
    }
    ctx->pc = 0x32C9C4u;
    // 0x32c9c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32c9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c9c8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x32c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c9cc: 0x0  nop
    ctx->pc = 0x32c9ccu;
    // NOP
label_32c9d0:
    // 0x32c9d0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x32c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x32c9d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x32c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x32c9d8: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x32c9d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32c9dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x32c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x32c9e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x32c9e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c9e4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x32c9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x32c9e8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32C9E8u;
    {
        const bool branch_taken_0x32c9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9E8u;
        // 0x32c9ec: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c9e8) {
            ctx->pc = 0x32C9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c9d0;
        }
    }
    ctx->pc = 0x32C9F0u;
    // 0x32c9f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x32c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32c9f4:
    // 0x32c9f4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x32c9f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32c9f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x32C9F8u;
    {
        const bool branch_taken_0x32c9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C9F8u;
        // 0x32c9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c9f8) {
            ctx->pc = 0x32CA10u;
            goto label_32ca10;
        }
    }
    ctx->pc = 0x32CA00u;
    // 0x32ca00: 0xfe260000  sd          $a2, 0x0($s1)
    ctx->pc = 0x32ca00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 6));
    // 0x32ca04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32CA04u;
    {
        const bool branch_taken_0x32ca04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32CA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA04u;
        // 0x32ca08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ca04) {
            ctx->pc = 0x32CA10u;
            goto label_32ca10;
        }
    }
    ctx->pc = 0x32CA0Cu;
label_32ca0c:
    // 0x32ca0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32ca0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ca10:
    // 0x32ca10: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32ca10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ca14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32ca14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ca18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32ca18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ca1c: 0x3e00008  jr          $ra
    ctx->pc = 0x32CA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA1Cu;
        // 0x32ca20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CA24u;
    // 0x32ca24: 0x0  nop
    ctx->pc = 0x32ca24u;
    // NOP
    ctx->pc = 0x32ca28u;
}
