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

// Function: sub_001A0B00
// Address: 0x1a0b00 - 0x1a0b60
void sub_001A0B00_0x1a0b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0B00_0x1a0b00");
#endif

    switch (ctx->pc) {
        case 0x1a0b00u: goto label_1a0b00;
        case 0x1a0b04u: goto label_1a0b04;
        case 0x1a0b08u: goto label_1a0b08;
        case 0x1a0b0cu: goto label_1a0b0c;
        case 0x1a0b10u: goto label_1a0b10;
        case 0x1a0b14u: goto label_1a0b14;
        case 0x1a0b18u: goto label_1a0b18;
        case 0x1a0b1cu: goto label_1a0b1c;
        case 0x1a0b20u: goto label_1a0b20;
        case 0x1a0b24u: goto label_1a0b24;
        case 0x1a0b28u: goto label_1a0b28;
        case 0x1a0b2cu: goto label_1a0b2c;
        case 0x1a0b30u: goto label_1a0b30;
        case 0x1a0b34u: goto label_1a0b34;
        case 0x1a0b38u: goto label_1a0b38;
        case 0x1a0b3cu: goto label_1a0b3c;
        case 0x1a0b40u: goto label_1a0b40;
        case 0x1a0b44u: goto label_1a0b44;
        case 0x1a0b48u: goto label_1a0b48;
        case 0x1a0b4cu: goto label_1a0b4c;
        case 0x1a0b50u: goto label_1a0b50;
        case 0x1a0b54u: goto label_1a0b54;
        case 0x1a0b58u: goto label_1a0b58;
        case 0x1a0b5cu: goto label_1a0b5c;
        default: break;
    }

    ctx->pc = 0x1a0b00u;

label_1a0b00:
    // 0x1a0b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a0b04:
    // 0x1a0b04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a0b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1a0b08:
    // 0x1a0b08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b0c:
    // 0x1a0b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a0b10:
    // 0x1a0b10: 0xc0687c4  jal         func_1A1F10
label_1a0b14:
    if (ctx->pc == 0x1A0B14u) {
        ctx->pc = 0x1A0B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B10u;
        // 0x1a0b14: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0B18u;
        goto label_1a0b18;
    }
    ctx->pc = 0x1A0B10u;
    SET_GPR_U32(ctx, 31, 0x1A0B18u);
    ctx->pc = 0x1A0B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B10u;
    // 0x1a0b14: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1A0B10u, 0x1A0B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B18u;
label_1a0b18:
    // 0x1a0b18: 0xc0687c4  jal         func_1A1F10
label_1a0b1c:
    if (ctx->pc == 0x1A0B1Cu) {
        ctx->pc = 0x1A0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B18u;
        // 0x1a0b1c: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0B20u;
        goto label_1a0b20;
    }
    ctx->pc = 0x1A0B18u;
    SET_GPR_U32(ctx, 31, 0x1A0B20u);
    ctx->pc = 0x1A0B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B18u;
    // 0x1a0b1c: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F10u, 0x1A0B18u, 0x1A0B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B20u;
label_1a0b20:
    // 0x1a0b20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a0b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0b24:
    // 0x1a0b24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0b24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0b28:
    // 0x1a0b28: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a0b28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a0b2c:
    // 0x1a0b2c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a0b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a0b30:
    // 0x1a0b30: 0x60f809  jalr        $v1
label_1a0b34:
    if (ctx->pc == 0x1A0B34u) {
        ctx->pc = 0x1A0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B30u;
        // 0x1a0b34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0B38u;
        goto label_1a0b38;
    }
    ctx->pc = 0x1A0B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A0B38u);
        ctx->pc = 0x1A0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B30u;
        // 0x1a0b34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0B30u, 0x1A0B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0B38u;
label_1a0b38:
    // 0x1a0b38: 0xc0e409a  jal         func_390268
label_1a0b3c:
    if (ctx->pc == 0x1A0B3Cu) {
        ctx->pc = 0x1A0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B38u;
        // 0x1a0b3c: 0x26040240  addiu       $a0, $s0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0B40u;
        goto label_1a0b40;
    }
    ctx->pc = 0x1A0B38u;
    SET_GPR_U32(ctx, 31, 0x1A0B40u);
    ctx->pc = 0x1A0B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B38u;
    // 0x1a0b3c: 0x26040240  addiu       $a0, $s0, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1A0B38u, 0x1A0B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B40u;
label_1a0b40:
    // 0x1a0b40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1a0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1a0b44:
    // 0x1a0b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a0b48:
    // 0x1a0b48: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x1a0b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_1a0b4c:
    // 0x1a0b4c: 0xae020240  sw          $v0, 0x240($s0)
    ctx->pc = 0x1a0b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
label_1a0b50:
    // 0x1a0b50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a0b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a0b54:
    // 0x1a0b54: 0x3e00008  jr          $ra
label_1a0b58:
    if (ctx->pc == 0x1A0B58u) {
        ctx->pc = 0x1A0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B54u;
        // 0x1a0b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0B5Cu;
        goto label_1a0b5c;
    }
    ctx->pc = 0x1A0B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0B54u;
        // 0x1a0b58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0B5Cu;
label_1a0b5c:
    // 0x1a0b5c: 0x0  nop
    ctx->pc = 0x1a0b5cu;
    // NOP
    ctx->pc = 0x1a0b60u;
}
