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

// Function: sub_00395148
// Address: 0x395148 - 0x3951d8
void sub_00395148_0x395148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395148_0x395148");
#endif

    switch (ctx->pc) {
        case 0x395168u: goto label_395168;
        case 0x395188u: goto label_395188;
        default: break;
    }

    ctx->pc = 0x395148u;

    // 0x395148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x395148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39514c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39514cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x395150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x395150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x395154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x395154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395158: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x395158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39515c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39515cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x395160: 0xc087502  jal         func_21D408
    ctx->pc = 0x395160u;
    SET_GPR_U32(ctx, 31, 0x395168u);
    ctx->pc = 0x395164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395160u;
    // 0x395164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x395160u, 0x395168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395168u;
label_395168:
    // 0x395168: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x395168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x39516c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x395170: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x395170u;
    {
        const bool branch_taken_0x395170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x395174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395170u;
        // 0x395174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395170) {
            ctx->pc = 0x3951C0u;
            goto label_3951c0;
        }
    }
    ctx->pc = 0x395178u;
    // 0x395178: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x395178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x39517c: 0x96050112  lhu         $a1, 0x112($s0)
    ctx->pc = 0x39517cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 274)));
    // 0x395180: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x395180u;
    SET_GPR_U32(ctx, 31, 0x395188u);
    ctx->pc = 0x395184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395180u;
    // 0x395184: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x395180u, 0x395188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395188u;
label_395188:
    // 0x395188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39518c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x39518cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x395190: 0x80820086  lb          $v0, 0x86($a0)
    ctx->pc = 0x395190u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 134)));
    // 0x395194: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x395194u;
    {
        const bool branch_taken_0x395194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x395194) {
            ctx->pc = 0x395198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395194u;
            // 0x395198: 0x90830064  lbu         $v1, 0x64($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3951A4u;
            goto label_3951a4;
        }
    }
    ctx->pc = 0x39519Cu;
    // 0x39519c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39519Cu;
    {
        const bool branch_taken_0x39519c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3951A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39519Cu;
        // 0x3951a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39519c) {
            ctx->pc = 0x3951C0u;
            goto label_3951c0;
        }
    }
    ctx->pc = 0x3951A4u;
label_3951a4:
    // 0x3951a4: 0x2402009a  addiu       $v0, $zero, 0x9A
    ctx->pc = 0x3951a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x3951a8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3951A8u;
    {
        const bool branch_taken_0x3951a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3951ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3951A8u;
        // 0x3951ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3951a8) {
            ctx->pc = 0x3951C0u;
            goto label_3951c0;
        }
    }
    ctx->pc = 0x3951B0u;
    // 0x3951b0: 0x922305b7  lbu         $v1, 0x5B7($s1)
    ctx->pc = 0x3951b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1463)));
    // 0x3951b4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3951B4u;
    {
        const bool branch_taken_0x3951b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3951B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3951B4u;
        // 0x3951b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3951b4) {
            ctx->pc = 0x3951C0u;
            goto label_3951c0;
        }
    }
    ctx->pc = 0x3951BCu;
    // 0x3951bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3951bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3951c0:
    // 0x3951c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3951c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3951c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3951c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3951c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3951c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3951cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3951CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3951D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3951CCu;
        // 0x3951d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3951CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3951D4u;
    // 0x3951d4: 0x0  nop
    ctx->pc = 0x3951d4u;
    // NOP
    ctx->pc = 0x3951d8u;
}
