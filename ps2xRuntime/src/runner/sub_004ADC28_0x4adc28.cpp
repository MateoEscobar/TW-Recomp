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

// Function: sub_004ADC28
// Address: 0x4adc28 - 0x4adc90
void sub_004ADC28_0x4adc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADC28_0x4adc28");
#endif

    switch (ctx->pc) {
        case 0x4adc54u: goto label_4adc54;
        case 0x4adc74u: goto label_4adc74;
        case 0x4adc80u: goto label_4adc80;
        default: break;
    }

    ctx->pc = 0x4adc28u;

    // 0x4adc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4adc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4adc2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4adc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4adc30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4adc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4adc34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4adc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adc38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4adc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4adc3c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4adc3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4adc40: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x4adc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x4adc44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ADC44u;
    {
        const bool branch_taken_0x4adc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4adc44) {
            ctx->pc = 0x4ADC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ADC44u;
            // 0x4adc48: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ADC5Cu;
            goto label_4adc5c;
        }
    }
    ctx->pc = 0x4ADC4Cu;
    // 0x4adc4c: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4ADC4Cu;
    SET_GPR_U32(ctx, 31, 0x4ADC54u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4ADC4Cu, 0x4ADC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADC54u;
label_4adc54:
    // 0x4adc54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4adc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4adc58: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4adc58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4adc5c:
    // 0x4adc5c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x4adc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x4adc60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4ADC60u;
    {
        const bool branch_taken_0x4adc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADC60u;
        // 0x4adc64: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adc60) {
            ctx->pc = 0x4ADC80u;
            goto label_4adc80;
        }
    }
    ctx->pc = 0x4ADC68u;
    // 0x4adc68: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x4adc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x4adc6c: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x4ADC6Cu;
    SET_GPR_U32(ctx, 31, 0x4ADC74u);
    ctx->pc = 0x4ADC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADC6Cu;
    // 0x4adc70: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x4ADC6Cu, 0x4ADC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADC74u;
label_4adc74:
    // 0x4adc74: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x4adc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x4adc78: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x4ADC78u;
    SET_GPR_U32(ctx, 31, 0x4ADC80u);
    ctx->pc = 0x4ADC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADC78u;
    // 0x4adc7c: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x4ADC78u, 0x4ADC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADC80u;
label_4adc80:
    // 0x4adc80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4adc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4adc84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4adc84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adc88: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADC88u;
        // 0x4adc8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADC90u;
}
