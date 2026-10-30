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

// Function: sub_002FD068
// Address: 0x2fd068 - 0x2fd128
void sub_002FD068_0x2fd068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD068_0x2fd068");
#endif

    switch (ctx->pc) {
        case 0x2fd0a0u: goto label_2fd0a0;
        case 0x2fd0b0u: goto label_2fd0b0;
        case 0x2fd0e8u: goto label_2fd0e8;
        case 0x2fd0f8u: goto label_2fd0f8;
        case 0x2fd10cu: goto label_2fd10c;
        default: break;
    }

    ctx->pc = 0x2fd068u;

    // 0x2fd068: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2fd068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2fd06c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd070: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2fd070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2fd074: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2fd074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2fd078: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd07c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2fd07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2fd080: 0x92220024  lbu         $v0, 0x24($s1)
    ctx->pc = 0x2fd080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2fd084: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2FD084u;
    {
        const bool branch_taken_0x2fd084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2fd084) {
            ctx->pc = 0x2FD088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD084u;
            // 0x2fd088: 0x82250025  lb          $a1, 0x25($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD104u;
            goto label_2fd104;
        }
    }
    ctx->pc = 0x2FD08Cu;
    // 0x2fd08c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2fd08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2fd090: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2fd090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fd094: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2fd094u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd098: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2FD098u;
    SET_GPR_U32(ctx, 31, 0x2FD0A0u);
    ctx->pc = 0x2FD09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD098u;
    // 0x2fd09c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2FD098u, 0x2FD0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD0A0u;
label_2fd0a0:
    // 0x2fd0a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd0a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fd0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd0a8: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2FD0A8u;
    SET_GPR_U32(ctx, 31, 0x2FD0B0u);
    ctx->pc = 0x2FD0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD0A8u;
    // 0x2fd0ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2FD0A8u, 0x2FD0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD0B0u;
label_2fd0b0:
    // 0x2fd0b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fd0b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd0b4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FD0B4u;
    {
        const bool branch_taken_0x2fd0b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD0B4u;
        // 0x2fd0b8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0b4) {
            ctx->pc = 0x2FD100u;
            goto label_2fd100;
        }
    }
    ctx->pc = 0x2FD0BCu;
    // 0x2fd0bc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2fd0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd0c0: 0x84650092  lh          $a1, 0x92($v1)
    ctx->pc = 0x2fd0c0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x2fd0c4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2fd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2fd0c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2fd0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fd0cc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2fd0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2fd0d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2fd0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fd0d4: 0x84660092  lh          $a2, 0x92($v1)
    ctx->pc = 0x2fd0d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x2fd0d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2fd0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2fd0dc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2fd0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2fd0e0: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x2FD0E0u;
    SET_GPR_U32(ctx, 31, 0x2FD0E8u);
    ctx->pc = 0x2FD0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD0E0u;
    // 0x2fd0e4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x2FD0E0u, 0x2FD0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD0E8u;
label_2fd0e8:
    // 0x2fd0e8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2fd0e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd0ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fd0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd0f0: 0xc0cd766  jal         func_335D98
    ctx->pc = 0x2FD0F0u;
    SET_GPR_U32(ctx, 31, 0x2FD0F8u);
    ctx->pc = 0x2FD0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD0F0u;
    // 0x2fd0f4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D98u, 0x2FD0F0u, 0x2FD0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD0F8u;
label_2fd0f8:
    // 0x2fd0f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd0fc: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x2fd0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_2fd100:
    // 0x2fd100: 0x82250025  lb          $a1, 0x25($s1)
    ctx->pc = 0x2fd100u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 37)));
label_2fd104:
    // 0x2fd104: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2FD104u;
    SET_GPR_U32(ctx, 31, 0x2FD10Cu);
    ctx->pc = 0x2FD108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD104u;
    // 0x2fd108: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2FD104u, 0x2FD10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD10Cu;
label_2fd10c:
    // 0x2fd10c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2fd10cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fd110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd114: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2fd114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fd118: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2fd118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fd11c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD11Cu;
        // 0x2fd120: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD124u;
    // 0x2fd124: 0x0  nop
    ctx->pc = 0x2fd124u;
    // NOP
    ctx->pc = 0x2fd128u;
}
